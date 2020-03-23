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

    dot_mod: $ => repeat1(choice(
      $._statement_mod_name,
      $._statement_mod_path,
      $._statement_mod_archive,
      $._statement_mod_remote_file_id,
      $._statement_mod_version,
      $._statement_mod_picture,
      $._statement_mod_supported_version,
      $._statement_mod_tags,
      $._statement_mod_dependencies
    )),

    //===============================================//
    //        GFX -> Rules for *.gfx files :         //
    //===============================================//

    dot_gfx: $ => repeat1(choice(
        $.gfx_types_definition
    )),

    gfx_types_definition: $ => choice(
      $._types_spriteTypes
    ),

    // TYPES :

    _types_spriteTypes: $ => seq(
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
      $._type_spriteType
    ), $.gfx_type_definition),

    // TYPE :

    _type_spriteType: $ => seq(
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

   _statement_basic_string: $ => seq(
      alias($.name, $.identifier),
      $.assign_equal,
      $.string
    ),

   _statement_name: $ => seq(
      alias('name', $.identifier),
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
      repeat($._mod_tags_keyword),
      '}'
    ),

    _mod_tags_keyword: $ => alias(choice(
      '"Alternative History"', '"Balance"', '"Events"', '"Expansion"', '"Fixes"',
      '"Gameplay"', '"Graphics"', '"Guide"', '"Historical"', '"Loading Screen"',
      '"Map"', '"Military"', '"Missions And Decisions"', '"National Ideas"',
      '"New Nations"', '"Religion"', '"Sound"', '"Technologies"', '"Trade"',
      '"Translation"', '"Utilities"', '"Converted From CKII"'
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
        $.debug_multi
      )
    ),

    debug_multi: $ => seq(
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
