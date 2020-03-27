module.exports = grammar({
  name: 'eu4mod',

  extras: $ => [
    $.comment,
    /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/,
  ],

  rules: {

    file: $ => choice(
      $.dot_mod,
      $.dot_gfx,
    ),


    //===============================================//
    //       MOD -> Rules for *.mod files :          //
    //===============================================//

    dot_mod: $ => seq(
      repeat(seq(
        $._dot_mod_statement,
        $._eol
      )),
      $._dot_mod_statement,
      optional($._eol)
    ),

    _dot_mod_statement: $ => choice(
      $._statement_mod_name,
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
        $._gfx_types_definition,
        $.debug_loop
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
        $._spriteTypes_type,
        $.debug_loop
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
          $._statement_gfx_texturefile,
          $.debug_loop
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
      $.assign_equal,
      $.string
    ),

   _statement_string: $ => seq(
      alias($.name, $.identifier),
      $.assign_equal,
      $.string
    ),

    //-------------------------------------//
    //  MOD statements [_statement_mod_X]  //
    //-------------------------------------//

    _statement_mod_name: $ => seq(
      alias('name', $.mod_name_identifier),
      $.assign_equal,
      alias($.string, $.mod_name_value)
    ),

    _statement_mod_path: $ => seq(
      alias('path', $.identifier),
      $.assign_equal,
      $.string
    ),

    _statement_mod_archive: $ => seq(
      alias('archive', $.identifier),
      $.assign_equal,
      $.string
    ),

    _statement_mod_remote_file_id: $ => seq(
      alias('remote_file_id', $.identifier),
      $.assign_equal,
      $.string
    ),

    _statement_mod_version: $ => seq(
      alias('version', $.identifier),
      $.assign_equal,
      $.string
    ),

    _statement_mod_picture: $ => seq(
      alias('picture', $.identifier),
      $.assign_equal,
      $.string
    ),

    _statement_mod_supported_version: $ => seq(
      alias('supported_version', $.identifier),
      $.assign_equal,
      $.string
    ),

    _statement_mod_tags: $ => seq(
      alias('tags', $.identifier),
      $.assign_equal,
      $._mod_tags_block
    ),

    _mod_tags_block: $ => seq(
      '{',
      repeat($._eol),
      $._mod_tags_keyword,
      repeat(seq(
        $._eol,
        $._mod_tags_keyword
      )),
      repeat($._eol),
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
      $.assign_equal,
      $._mod_dependencies_block
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
      $.assign_equal,
      $.string
    ),

   _statement_gfx_cursor_offset: $ => seq(
      alias('cursor_offset', $.identifier),
      $.assign_equal,
      '{',
      $.number,
      $.number,
      '}'
    ),


    //======================================================//
    //     Default grammar to find not handled keywords:    //
    //======================================================//

    debug_loop: $ => seq(
      $.name,
      $.assign_equal,
      choice(
        $.string,
        $.number,
        $.name,
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


    name: $ => /[\w_]+/,

    assign_equal: $ => '=',

    string: $ => /"[^\"\n]*"/,

    number: $ => token(seq(
      optional('-'),
      /\d+/,
      optional(/\.\d+/),
      optional('f')
    )),

    comment: $ => /\#[^\n]*/,

    _eol: $ => /\r?\n/,

    debug: $ => /.+/

  }
});
