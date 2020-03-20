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

    // Main rule and handle the single line file without \n
    dot_mod: $ => repeat1(choice(
      $.mod_line_mono,
      $.mod_line_multi
    )),

    mod_line_mono: $ => seq(
      $.mod_line_mono_name,
      $.assign_equal,
      $.string
    ),

    mod_line_multi: $ => seq(
      $.mod_line_multi_name,
      $.assign_equal,
      '{',
      repeat($._mod_line_multi_content),
      '}'
    ),

    _mod_line_multi_content: $ => seq(
        choice(
          /\t/,
          /\s\s/,
          /\s\t/
        ),
        $.string,
        $._eol
    ),

    //===============================================//
    //        GFX -> Rules for *.gfx files :         //
    //===============================================//

    dot_gfx: $ => repeat1(choice(
        $.gfx_types,
        $.debug_loop
    )),

    gfx_types: $ => choice(
      $._types_spriteTypes
    ),

    // GFX Types :

    _types_spriteTypes: $ => seq(
      alias('spriteTypes', $.types_name),
      $.assign_equal,
      '{',
      $._spriteTypes_content,
      '}'
    ),

    _spriteTypes_content: $ => repeat1(choice(
      $._spriteTypes_attribut,
      $._spriteTypes_type,
      $.debug_loop
    )),

    _spriteTypes_attribut: $ => alias(choice(
      $._attribut_cursor_offset,
      // TODO
    ), $.gfx_attribut),

    _spriteTypes_type: $ => alias(choice(
      $._type_spriteType,
      // TODO
    ), $.gfx_type),

    // GFX Type :

    _type_spriteType: $ => seq(
      alias('spriteType', $.type_name),
      $.assign_equal,
      '{',
      $._spriteType_content,
      '}'
    ),

    _spriteType_content: $ => repeat1(
      alias(
        choice(
          $._attribut_name,
          $._attribut_texturefile,
          // TODO
          $.debug_loop
        ),
      $.gfx_attribut)
    ),


    // GFX attributs :

   _attribut_name: $ => seq(
      alias('name', $.attribut_name),
      $.assign_equal,
      $.string
    ),

   _attribut_texturefile: $ => seq(
      alias('texturefile', $.attribut_name),
      $.assign_equal,
      $.string
    ),

   _attribut_cursor_offset: $ => seq(
      alias('cursor_offset', $.attribut_name),
      $.assign_equal,
      '{',
      $.number,
      $.number,
      '}'
    ),

    //==============================//
    //            TOKENS            //
    //==============================//


    // MOD tokens :

    mod_line_mono_name: $ => choice(
      'name',
      'supported_version',
      'version',
      'path',
      'archive',
      'picture',
      'remote_file_id'
    ),

    mod_line_multi_name: $ => choice(
      'tags',
      'dependencies'
    ),

    //======================================================//
    //     Default grammar to find not handled keywords:    //
    //======================================================//

    debug_loop: $ => seq(
      $.debug_name,
      $.assign_equal,
      choice(
        $.string,
        $.number,
        $.debug_name,
        $.debug_multi
      )
    ),

    debug_multi: $ => seq(
      '{',
      choice(
        repeat1($.string),
        repeat1($.number),
        repeat1($.debug_loop)
      ),
      '}'
    ),

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

    debug_name: $ => /[\w_]+/,

    debug: $ => /.+/

  }
});
