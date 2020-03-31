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
      $._statement_mod_replace_path,
      $._statement_mod_tags,
      $._statement_mod_dependencies
    ),

    //===============================================//
    //        GFX -> Rules for *.gfx files :         //
    //===============================================//

    dot_gfx: $ => repeat1(
        $._gfx_types_definition
    ),

    _gfx_types_definition: $ => alias(choice(
      $._spriteTypes,
      $._objectTypes,
      $._bitmapfonts
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
      $._spriteType,
      $._textSpriteType,
      $._corneredTileSpriteType,
      $._maskedShieldType,
    ), $.type_definition),

    // objectTypes

    _objectTypes: $ => seq(
      alias('objectTypes', $.identifier),
      $.assign_equal,
      $._objectTypes_block
    ),

    _objectTypes_block: $ => seq(
      '{',
      repeat($._objectTypes_type),
      '}'
    ),

    _objectTypes_type: $ => alias(choice(
      $._animatedmaptext,
    ), $.type_definition),

    // bitmapfonts

    _bitmapfonts: $ => seq(
      alias('bitmapfonts', $.identifier),
      $.assign_equal,
      $._bitmapfonts_block
    ),

    _bitmapfonts_block: $ => seq(
      '{',
      repeat($._bitmapfonts_type),
      '}'
    ),

    _bitmapfonts_type: $ => alias(choice(
      $._bitmapfont,
      $._textcolors
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
          $._statement_gfx_name,
          $._statement_gfx_textureFile,
          $._statement_gfx_noOfFrames,
          $._statement_gfx_overlay_frames_per_row,
          $._statement_gfx_overlay_rows,
          $._statement_gfx_effectFile,
          $._statement_gfx_animation
        ), $.statement)),
      '}'
    ),

    // textSpriteType

    _textSpriteType: $ => seq(
      alias('textSpriteType', $.identifier),
      $.assign_equal,
      $._textSpriteType_block
    ),

    _textSpriteType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_name,
          $._statement_gfx_textureFile,
          $._statement_gfx_noOfFrames,
          $._statement_gfx_effectFile,
          $._statement_gfx_clicksound
        ), $.statement)),
      '}'
    ),

    // corneredTileSpriteType

    _corneredTileSpriteType: $ => seq(
      alias('corneredTileSpriteType', $.identifier),
      $.assign_equal,
      $._corneredTileSpriteType_block
    ),

    _corneredTileSpriteType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_name,
          $._statement_gfx_size,
          $._statement_gfx_textureFile,
          $._statement_gfx_borderSize,
          $._statement_gfx_allwaystransparent,
          $._statement_gfx_legacy_lazy_load,
          $._statement_gfx_noOfFrames
        ), $.statement)),
      '}'
    ),

    // maskedShieldType

    _maskedShieldType: $ => seq(
      alias('maskedShieldType', $.identifier),
      $.assign_equal,
      $._maskedShieldType_block
    ),

    _maskedShieldType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_textureFile,
          $._statement_gfx_noOfFrames,
          $._statement_gfx_effectFile
        ), $.statement)),
      '}'
    ),

    // animatedmaptext

    _animatedmaptext: $ => seq(
      alias('animatedmaptext', $.identifier),
      $.assign_equal,
      $._animatedmaptext_block
    ),

    _animatedmaptext_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_name,
          $._statement_gfx_speed,
          $._statement_gfx_textblock
        ), $.statement)),
      '}'
    ),

    // textcolors

    _textcolors: $ => seq(
      alias('textcolors', $.identifier),
      $.assign_equal,
      $._textcolors_block
    ),

    _textcolors_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_textcolors,
        ), $.statement)),
      '}'
    ),

    // bitmapfont

    _bitmapfont: $ => seq(
      alias('bitmapfont', $.identifier),
      $.assign_equal,
      $._bitmapfont_block
    ),

    _bitmapfont_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_name,
          $._statement_mod_path,
          $._statement_gfx_bitmapfont_color,
          $._statement_gfx_bitmapfont_border_color,
          $._textcolors,
          $._statement_gfx_cursor_offset
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

    _statement_xy_integer: $ => choice(
      seq($._entry_x_integer, $._entry_y_integer),
      seq($._entry_y_integer, $._entry_x_integer)
    ),


    _entry_x_integer: $ => seq(
      alias('x', $.keyword),
      optional(seq(
        $.assign_equal,
        $.integer
      ))
    ),

    _entry_y_integer: $ => seq(
      alias('y', $.keyword),
      optional(seq(
        $.assign_equal,
        $.integer
      ))
    ),

    _statement_xy_float: $ => choice(
      seq($._entry_x_float, $._entry_y_float),
      seq($._entry_y_float, $._entry_x_float)
    ),


    _entry_x_float: $ => seq(
      alias('x', $.keyword),
      optional(seq(
        $.assign_equal,
        $.float
      ))
    ),

    _entry_y_float: $ => seq(
      alias('y', $.keyword),
      optional(seq(
        $.assign_equal,
        $.float
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
        alias(token(seq(
          '"',
          /[0-9]+/,
          repeat(seq(
            '.',
            /[0-9]+/)),
          '"'
        )), $.string)
      ))
    ),

    _statement_mod_picture: $ => seq(
      alias('picture', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[^\"\n]*/,
          choice('.jpg', '.png'),
          '"'
        )), $.string)
      ))
    ),

    _statement_mod_supported_version: $ => seq(
      alias('supported_version', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[0-9]+/,
          '.',
          /[0-9]+/,
          optional(token(seq(
            '.',
            choice(/[0-9]+/, '*'),
            optional(token(seq(
              '.',
              choice(/[0-9]+/, '*'),
            ))),
          ))),
          '"'
        )), $.string)
      ))
    ),

    _statement_mod_replace_path: $ => seq(
      alias('replace_path', $.identifier),
      optional(seq(
        $.assign_equal,
        $._mod_replace_path_folder
      ))
    ),

    _mod_replace_path_folder: $ => alias(token(
      seq(
        '"',
        choice(
          'common', 'decisions', 'events', 'gfx', 'history', 'interface',
          'localisation', 'map', 'missions'
        ),
        optional(/[^\"\n]+/),
        '"'
      )), $.string
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

    _statement_gfx_name: $ => seq(
      alias('name', $.name_identifier),
      optional(seq(
        $.assign_equal,
        choice(
          alias(token(seq('"', /[a-zA-Z0-9_]*/, '"')), $.name_value),
          alias(token(seq('"GFX_', /[a-zA-Z0-9_]*/, '"')), $.name_gfx_value)
        )
      ))
    ),

    _statement_gfx_path: $ => seq(
      alias('path', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string,
      ))
    ),

    _statement_gfx_cursor_offset: $ => seq(
      alias('cursor_offset', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $.integer,
        $.integer,
        '}'
      ))
    ),

   _statement_gfx_textureFile: $ => seq(
      alias(/texture[Ff]ile[\d]*/, $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[^\"\n]+/,
          choice('.dds', '.tga'),
          '"'
        )), $.string)
      ))
    ),

   _statement_gfx_noOfFrames: $ => seq(
      alias('noOfFrames', $.identifier),
      optional(seq(
        $.assign_equal,
        $._integer_positive
      ))
    ),

    _statement_gfx_overlay_frames_per_row: $ => seq(
       alias('overlay_frames_per_row', $.identifier),
       optional(seq(
         $.assign_equal,
         $._integer_positive
       ))
     ),

    _statement_gfx_overlay_rows: $ => seq(
       alias('overlay_rows', $.identifier),
       optional(seq(
         $.assign_equal,
         $._integer_positive
       ))
     ),

    _statement_gfx_effectFile: $ => seq(
       alias('effectFile', $.identifier),
       optional(seq(
         $.assign_equal,
         alias(token(seq(
           '"',
           /[^\"\n]+/,
           '.lua',
           '"'
         )), $.string)
       ))
     ),

    _statement_gfx_animation: $ => seq(
      alias('animation', $.identifier),
      optional(seq(
        $.assign_equal,
        $._gfx_animation_block
      ))
    ),

    _gfx_animation_block: $ => seq(
      '{',
      repeat(choice(
        $._animation_entry_dds,
        $._animation_entry_angle,
        $._animation_entry_bool,
        $._animation_entry_time,
        $._animation_entry_xy_float,
        $._animation_entry_blendmode,
        $._animation_entry_type,
        $._animation_entry_frames,
      )),
      '}'
    ),

    _animation_entry_dds: $ => seq(
      alias(choice(
        'animationmaskfile',
        'animationtexturefile'
      ), $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[^\"\n]+/,
          '.dds',
          '"'
        )), $.string)
      ))
    ),

    _animation_entry_angle: $ => seq(
      alias('animationrotation', $.identifier),
      optional(seq(
        $.assign_equal,
        $.angle
      ))
    ),

    _animation_entry_bool: $ => seq(
      alias('animationlooping', $.identifier),
      optional(seq(
        $.assign_equal,
        $._yes_no
      ))
    ),

    _animation_entry_time: $ => seq(
      alias(choice(
        'animationtime',
        'animationdelay'
      ), $.identifier),
      optional(seq(
        $.assign_equal,
        $._float_positive
      ))
    ),

    _animation_entry_xy_float: $ => seq(
      alias(choice(
        'animationrotationoffset',
        'animationtexturescale'
      ), $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $._statement_xy_float,
        '}'
      ))
    ),

    _animation_entry_blendmode: $ => seq(
      alias('animationblendmode', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(choice('"add"', '"multiply"', '"overlay"'), $.string)
      ))
    ),

    _animation_entry_type: $ => seq(
      alias('animationtype', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(choice('"scrolling"', '"rotating"', '"pulsing"'), $.string)
      ))
    ),

    _animation_entry_frames: $ => seq(
      alias('animationframes', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        repeat1($._integer_positive),
        '}'
      ))
    ),

    _statement_gfx_size: $ => seq(
      alias('size', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $._statement_xy_integer,
        '}'
      ))
    ),

    _statement_gfx_borderSize: $ => seq(
      alias('borderSize', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $._statement_xy_integer,
        '}'
      ))
    ),

    _statement_gfx_allwaystransparent: $ => seq(
      alias('allwaystransparent', $.identifier),
      optional(seq(
        $.assign_equal,
        $._yes_no
      ))
    ),

    _statement_gfx_legacy_lazy_load: $ => seq(
      alias('legacy_lazy_load', $.identifier),
      optional(seq(
        $.assign_equal,
        $._yes_no
      ))
    ),

    _statement_gfx_clicksound: $ => seq(
      alias('clicksound', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(choice('click'), $.keyword)
      ))
    ),

    _statement_gfx_speed: $ => seq(
      alias('speed', $.identifier),
      optional(seq(
        $.assign_equal,
        $._float_positive
      ))
    ),

    _statement_gfx_textblock: $ => seq(
      alias('textblock', $.identifier),
      optional(seq(
        $.assign_equal,
        $._gfx_textblock,
      ))
    ),

    _gfx_textblock: $ => seq(
      '{',
      repeat(choice(
        $._statement_gfx_text,
        $._statement_gfx_color,
        $._statement_gfx_font,
        $._statement_gfx_position,
        $._statement_gfx_size,
        $._statement_gfx_format,
        $._statement_gfx_cull_distance,
      )),
      '}',
    ),

    _statement_gfx_text: $ => seq(
      alias('text', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    _statement_gfx_color: $ => seq(
      alias('color', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $._float_positive,
        $._float_positive,
        $._float_positive,
        '}'
      ))
    ),

    _statement_gfx_font: $ => seq(
      alias('font', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    _statement_gfx_position: $ => seq(
      alias('position', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $._statement_xy_integer,
        '}'
      ))
    ),

    _statement_gfx_format: $ => seq(
      alias('format', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(choice('centre'), $.keyword)
      ))
    ),

    _statement_gfx_cull_distance: $ => seq(
      alias('cull_distance', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          /\d+/,
          optional(seq(
            '.',
            /\d+/
          )),
          'f'
        )), $.float),
      ))
    ),

    _statement_gfx_textcolors: $ => seq(
      alias(choice(
        'B','b','G','H','l','M','O','g','R','T','W','Y',
      ), $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $.byte,
        $.byte,
        $.byte,
        '}'
      ))
    ),

    _statement_gfx_bitmapfont_color: $ => seq(
      alias('color', $.identifier),
      optional(seq(
        $.assign_equal,
        $.hexadecimal
      ))
    ),

    _statement_gfx_bitmapfont_border_color: $ => seq(
      alias('border_color', $.identifier),
      optional(seq(
        $.assign_equal,
        $.hexadecimal
      ))
    ),

    //==============================//
    //            TOKENS            //
    //==============================//

    identifier: $ => /[a-z_][a-zA-Z0-9_]*/,

    assign_equal: $ => '=',

    string: $ => /"[^\"\n]*"/,

    number: $ => token(seq(
      optional('-'),
      /\d+/,
      optional(/\.\d+/),
      optional('f')
    )),

    float: $ => token(seq(
      optional('-'),
      /\d+/,
      optional(seq(
        '.',
        /\d+/
      ))
    )),

    _float_positive: $ => alias(token(seq(
      optional('-'),
      /\d+/,
      optional(seq(
        '.',
        /\d+/
      ))
    )), $.float),

    integer: $ => token(seq(
      optional('-'),
      /\d+/
    )),

    _integer_positive: $ => alias(/\d+/, $.integer),

    byte: $ => /[0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5]/,

    hexadecimal: $ => token(seq(
      '0x',
      choice(
        /[0-9a-f]{4}/,
        /[0-9a-f]{8}/
      )
    )),

    angle: $ => /36[0]\.0|3[0-5][0-9]\.[0-9]|[12][0-9][0-9]\.[0-9]|[1-9]?[0-9]\.[0-9]/,

    boolean: $ => choice('true', 'false'),

    _yes_no: $ => alias(choice('yes', 'no'), $.boolean),

    comment: $ => /\#[^\n]*/,

    _eol: $ => token(/\r?\n/),

    debug: $ => /.+/

  }
});
