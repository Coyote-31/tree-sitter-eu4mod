module.exports = grammar({
  name: 'eu4mod',

  extras: $ => [
    $.comment,
    /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/,
  ],

  inline: $ => [
    $._dot_mod_statement,
    $._gfx_types_definition
  ],

  rules: {

    file: $ => choice(
      $.dot_mod,
      $.dot_gfx,
    ),


    //===============================================//
    //       MOD -> Rules for *.mod files :          //
    //===============================================//

    dot_mod: $ => repeat1(
        $._dot_mod_statement
    ),

    _dot_mod_statement: $ => choice(
      $._statement_name,
      $._statement_mod_path,
      $._statement_mod_archive,
      $._statement_mod_remote_file_id,
      $._statement_mod_version,
      $._statement_mod_picture,
      $._statement_mod_supported_version,
      $._statement_mod_tags,
      $._statement_mod_dependencies
    ),

    //===============================================//
    //        GFX -> Rules for *.gfx files :         //
    //===============================================//

    dot_gfx: $ => repeat1(choice(
        $._gfx_types_definition
    )),

    _gfx_types_definition: $ => alias(choice(
      $._spriteTypes
    ), $.types_definition),

    //---------//
    // TYPES :
    //---------//

    // spriteTypes

    _spriteTypes: $ => seq(
      alias('spriteTypes', $.identifier),
      $.assign_equal,
      $._spriteTypes_block
    ),

    _spriteTypes_block: $ => seq(
      '{',
      repeat(choice(
        $._spriteTypes_statement,
        $._spriteTypes_type
      )),
      '}'
    ),

    _spriteTypes_statement: $ => alias(choice(
      $._statement_gfx_cursor_offset
    ), $.statement),

    _spriteTypes_type: $ => alias(choice(
      $._spriteType
    ), $.type_definition),

    //---------//
    // TYPE :
    //---------//

    // spriteType

    _spriteType: $ => seq(
      alias('spriteType', $.identifier),
      $.assign_equal,
      $._spriteType_block
    ),

    _spriteType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_name,
          $._statement_gfx_texturefile
        ), $.statement)),
      '}'
    ),


    //==============================//
    //          STATEMENTS          //
    //==============================//

    //-------------------------------------//
    //  Commons statements [_statement_X]  //
    //-------------------------------------//

    _statement_name: $ => seq(
      alias('name', $.name_identifier),
      optional(seq(
        $.assign_equal,
        alias($.string, $.name_value)
      ))
    ),

    _statement_string: $ => seq(
      $.identifier,
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    //-------------------------------------//
    //  MOD statements [_statement_mod_X]  //
    //-------------------------------------//

    _statement_mod_path: $ => seq(
      alias('path', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    _statement_mod_archive: $ => seq(
      alias('archive', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq('"', /[^\"\n]*/, '.zip"')), $.string)
      ))
    ),

    _statement_mod_remote_file_id: $ => seq(
      alias('remote_file_id', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq('"', /\d*/, '"')), $.string)
      ))
    ),

    _statement_mod_version: $ => seq(
      alias('version', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    _statement_mod_picture: $ => seq(
      alias('picture', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    _statement_mod_supported_version: $ => seq(
      alias('supported_version', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    _statement_mod_tags: $ => seq(
      alias('tags', $.identifier),
      optional(seq(
        $.assign_equal,
        $._mod_tags_block
      ))
    ),

    _mod_tags_block: $ => seq(
      '{',
      repeat($._mod_tags_keyword),
      '}'
    ),

    _mod_tags_keyword: $ => alias(choice(
      /"[Aa]lternative [Hh]istory"/, /"[Bb]alance"/, /"[Ee]vents"/,
      /"[Ee]xpansion"/, /"[Ff]ixes"/, /"[Gg]ameplay"/, /"[Gg]raphics"/,
      /"[Gg]uide"/, /"[Hh]istorical"/, /"[Ll]oading [Ss]creen"/, /"[Mm]ap"/,
      /"[Mm]ilitary"/, /"[Mm]issions [Aa]nd [Dd]ecisions"/,
      /"[Nn]ational [Ii]deas"/, /"[Nn]ew [Nn]ations"/, /"[Rr]eligion"/,
      /"[Ss]ound"/, /"[Tt]echnologies"/, /"[Tt]rade"/, /"[Tt]ranslation"/,
      /"[Uu]tilities"/, /"[Cc]onverted [Ff]rom CKII"/
      ), $.tags_keyword
    ),

    _statement_mod_dependencies: $ => seq(
      alias('dependencies', $.identifier),
      optional(seq(
        $.assign_equal,
        $._mod_dependencies_block
      ))
    ),

    _mod_dependencies_block: $ => seq(
      '{',
      repeat(alias($.string, $.dependencies)),
      '}'
    ),

    //-------------------------------------//
    //  GFX statements [_statement_gfx_X]  //
    //-------------------------------------//

   _statement_gfx_texturefile: $ => seq(
      alias('texturefile', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

   _statement_gfx_cursor_offset: $ => seq(
      alias('cursor_offset', $.identifier),
      $.assign_equal,
      optional(seq(
        '{',
        $.number,
        $.number,
        '}'
      ))
    ),


    //======================================================//
    //     Default grammar to find not handled keywords:    //
    //======================================================//

    debug_loop: $ => seq(
      $.identifier,
      $.assign_equal,
      choice(
        $.string,
        $.number,
        $.identifier,
        $._debug_block
      )
    ),

    _debug_block: $ => seq(
      '{',
      choice(
        repeat($.string),
        repeat($.number),
        repeat($.debug_loop)
      ),
      '}'
    ),


    //==============================//
    //            TOKENS            //
    //==============================//


    identifier: $ => /[a-z_][a-zA-Z0-9]*/,

    assign_equal: $ => '=',

    string: $ => /"[^\"\n]*"/,

    number: $ => token(seq(
      optional('-'),
      /\d+/,
      optional(/\.\d+/),
      optional('f')
    )),

    comment: $ => /\#[^\n]*/,

    _eol: $ => token(/\r?\n/),

    debug: $ => /.+/

  }
});
