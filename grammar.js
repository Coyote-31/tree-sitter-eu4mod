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
      $.dot_gui
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

    //===============================================//
    //        GUI -> Rules for *.gui files :         //
    //===============================================//

    dot_gui: $ => repeat1(
        $._gui_types_definition
    ),

    _gui_types_definition: $ => alias(choice(
      $._guiTypes,
    ), $.types_definition),

    //---------//
    // TYPES :
    //---------//

    // ----------
    // GFX types :

    // spriteTypes

    _spriteTypes: $ => seq(
      alias('spriteTypes', $.identifier),
      optional(seq(
        $.assign_equal,
        $._spriteTypes_block
      ))
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
      $._frameAnimatedSpriteType,
      $._progressbartype,
      $._PieChartType,
      $._LineChartType
    ), $.type_definition),

    // objectTypes

    _objectTypes: $ => seq(
      alias('objectTypes', $.identifier),
      optional(seq(
        $.assign_equal,
        $._objectTypes_block
      ))
    ),

    _objectTypes_block: $ => seq(
      '{',
      repeat($._objectTypes_type),
      '}'
    ),

    _objectTypes_type: $ => alias(choice(
      $._animatedmaptext,
      $._pdxmesh,
      $._pdxparticle,
      $._arrowType,
      $._tradeRouteType
    ), $.type_definition),

    // bitmapfonts

    _bitmapfonts: $ => seq(
      alias('bitmapfonts', $.identifier),
      optional(seq(
        $.assign_equal,
        $._bitmapfonts_block
      ))
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

    // ----------
    // GUI types :

    // objectTypes

    _guiTypes: $ => seq(
      alias('guiTypes', $.identifier),
      optional(seq(
        $.assign_equal,
        $._guiTypes_block
      ))
    ),

    _guiTypes_block: $ => seq(
      '{',
      repeat($._guiTypes_type),
      '}'
    ),

    _guiTypes_type: $ => alias(choice(
      $._windowType,
    //  $._textBoxType,
    //  $._iconType,
    //  $._scrollbarType,
    ), $.type_definition),

    //---------//
    // TYPE :
    //---------//

    // ----------
    // GFX type :

    // spriteType

    _spriteType: $ => seq(
      alias('spriteType', $.identifier),
      optional(seq(
        $.assign_equal,
        $._spriteType_block
      ))
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
          $._statement_gfx_clicksound,
          $._statement_gfx_norefcount,
          $._statement_gfx_legacy_lazy_load,
          $._statement_gfx_animation,
          $._statement_gfx_alwaystransparent,
          $._statement_gfx_allwaystransparent,
          $._statement_gfx_transparencecheck,
          $._statement_gfx_loadType,
          $._statement_gfx_alphamaskfile
        ), $.statement)),
      '}'
    ),

    // textSpriteType

    _textSpriteType: $ => seq(
      alias('textSpriteType', $.identifier),
      optional(seq(
        $.assign_equal,
        $._textSpriteType_block
      ))
    ),

    _textSpriteType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_textureFile,
          $._statement_gfx_noOfFrames,
          $._statement_gfx_overlay_frames_per_row,
          $._statement_gfx_overlay_rows,
          $._statement_gfx_loadType,
          $._statement_gfx_transparencecheck,
          $._statement_gfx_allwaystransparent,
          $._statement_gfx_effectFile,
          $._statement_gfx_clicksound
        ), $.statement)),
      '}'
    ),

    // corneredTileSpriteType

    _corneredTileSpriteType: $ => seq(
      alias('corneredTileSpriteType', $.identifier),
      optional(seq(
        $.assign_equal,
        $._corneredTileSpriteType_block
      ))
    ),

    _corneredTileSpriteType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_size_xy,
          $._statement_gfx_textureFile,
          $._statement_gfx_borderSize,
          $._statement_gfx_allwaystransparent,
          $._statement_gfx_legacy_lazy_load,
          $._statement_gfx_noOfFrames,
          $._statement_gfx_norefcount,
          $._statement_gfx_loadType,
          $._statement_gfx_effectFile
        ), $.statement)),
      '}'
    ),

    // maskedShieldType

    _maskedShieldType: $ => seq(
      alias('maskedShieldType', $.identifier),
      optional(seq(
        $.assign_equal,
        $._maskedShieldType_block
      ))
    ),

    _maskedShieldType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_textureFile1,
          $._statement_gfx_textureFile2,
          $._statement_gfx_textureFile3,
          $._statement_gfx_noOfFrames,
          $._statement_gfx_effectFile,
          $._statement_gfx_overlay_frames_per_row,
          $._statement_gfx_overlay_rows,
          $._statement_gfx_transparencecheck
        ), $.statement)),
      '}'
    ),

    // animatedmaptext

    _animatedmaptext: $ => seq(
      alias('animatedmaptext', $.identifier),
      optional(seq(
        $.assign_equal,
        $._animatedmaptext_block
      ))
    ),

    _animatedmaptext_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_speed,
          $._statement_gfx_textblock
        ), $.statement)),
      '}'
    ),

    // textcolors

    _textcolors: $ => seq(
      alias('textcolors', $.identifier),
      optional(seq(
        $.assign_equal,
        $._textcolors_block
      ))
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
      optional(seq(
        $.assign_equal,
        $._bitmapfont_block
      ))
    ),

    _bitmapfont_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._textcolors,
          $._statement_gfx_name,
          $._statement_gfx_path,
          $._statement_gfx_bitmapfont_color,
          $._statement_gfx_bitmapfont_border_color,
          $._statement_gfx_cursor_offset,
          $._statement_gfx_effect_bool,
        ), $.statement)),
      '}'
    ),

    // frameAnimatedSpriteType

    _frameAnimatedSpriteType: $ => seq(
      alias('frameAnimatedSpriteType', $.identifier),
      optional(seq(
        $.assign_equal,
        $._frameAnimatedSpriteType_block
      ))
    ),

    _frameAnimatedSpriteType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_textureFile,
          $._statement_gfx_noOfFrames,
          $._statement_gfx_overlay_frames_per_row,
          $._statement_gfx_overlay_rows,
          $._statement_gfx_effectFile,
          $._statement_gfx_animation_rate_fps,
          $._statement_gfx_looping,
          $._statement_gfx_play_on_show,
          $._statement_gfx_pause_on_loop,
          $._statement_gfx_allwaystransparent,
          $._statement_gfx_transparencecheck,
          $._statement_gfx_loadType
        ), $.statement)),
      '}'
    ),

    // progressbartype

    _progressbartype: $ => seq(
      alias('progressbartype', $.identifier),
      optional(seq(
        $.assign_equal,
        $._progressbartype_block
      ))
    ),

    _progressbartype_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_color,
          $._statement_gfx_colortwo,
          $._statement_gfx_textureFile1,
          $._statement_gfx_textureFile2,
          $._statement_gfx_size_xy,
          $._statement_gfx_effectFile,
          $._statement_gfx_horizontal,
          $._statement_gfx_loadType
        ), $.statement)),
      '}'
    ),

    // pdxmesh

    _pdxmesh: $ => seq(
      alias('pdxmesh', $.identifier),
      optional(seq(
        $.assign_equal,
        $._pdxmesh_block
      ))
    ),

    _pdxmesh_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_pdxmesh_animation,
          $._statement_gfx_pdxmesh_meshsettings,
          $._statement_gfx_name,
          $._statement_gfx_file,
          $._statement_gfx_scale,
          $._statement_gfx_cull_distance
        ), $.statement)),
      '}'
    ),

    // pdxparticle

    _pdxparticle: $ => seq(
      alias('pdxparticle', $.identifier),
      optional(seq(
        $.assign_equal,
        $._pdxparticle_block
      ))
    ),

    _pdxparticle_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_type,
          $._statement_gfx_scale
        ), $.statement)),
      '}'
    ),

    // arrowType

    _arrowType: $ => seq(
      alias('arrowType', $.identifier),
      optional(seq(
        $.assign_equal,
        $._arrowType_block
      ))
    ),

    _arrowType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_texture,
          $._statement_gfx_normal,
          $._statement_gfx_specular,
          $._statement_gfx_effect
        ), $.statement)),
      '}'
    ),

    // tradeRouteType

    _tradeRouteType: $ => seq(
      alias('tradeRouteType', $.identifier),
      optional(seq(
        $.assign_equal,
        $._tradeRouteType_block
      ))
    ),

    _tradeRouteType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_textureFile,
          $._statement_gfx_textureFile2,
          $._statement_gfx_textureFile3,
          $._statement_gfx_effect,
          $._statement_gfx_cull_distance
        ), $.statement)),
      '}'
    ),

    // PieChartType

    _PieChartType: $ => seq(
      alias('PieChartType', $.identifier),
      optional(seq(
        $.assign_equal,
        $._PieChartType_block
      ))
    ),

    _PieChartType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_size_integer
        ), $.statement)),
      '}'
    ),

    // LineChartType

    _LineChartType: $ => seq(
      alias('LineChartType', $.identifier),
      optional(seq(
        $.assign_equal,
        $._LineChartType_block
      ))
    ),

    _LineChartType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_size_xy,
          $._statement_gfx_linewidth
        ), $.statement)),
      '}'
    ),

    // ----------
    // GUI type :

    // windowType

    _windowType: $ => seq(
      alias('windowType', $.identifier),
      optional(seq(
        $.assign_equal,
        $._windowType_block
      ))
    ),

    _windowType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._listBoxType,
        //  $._editBoxType,
          $._statement_name,
          $._statement_gui_backGround,
          $._statement_gui_position,
          $._statement_gui_size,
          $._statement_gui_moveable,
          $._statement_gui_orientation
        ), $.statement)),
      '}'
    ),

    // listBoxType

    _listBoxType: $ => seq(
      alias('listBoxType', $.identifier),
      optional(seq(
        $.assign_equal,
        $._listBoxType_block
      ))
    ),

    _listBoxType_block: $ => seq(
      '{',
      repeat(
        alias(choice(
          $._statement_gfx_name,
          $._statement_gfx_size_xy,
          $._statement_gfx_linewidth
        ), $.statement)),
      '}'
    ),

    // editBoxType

    // textBoxType

    // iconType

    // scrollbarType


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
          alias(token(seq('"', /[a-zA-Z0-9_:.'-]*/, '"')), $.name_value),
          alias(token(seq('"GFX_', /[a-zA-Z0-9_:.'-]*/, '"')), $.name_gfx_value)
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
      alias(/texture[Ff]ile/, $.identifier),
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

    _statement_gfx_textureFile1: $ => seq(
       alias(/texture[Ff]ile1/, $.identifier),
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

     _statement_gfx_textureFile2: $ => seq(
        alias(/texture[Ff]ile2/, $.identifier),
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

      _statement_gfx_textureFile3: $ => seq(
        alias(/texture[Ff]ile3/, $.identifier),
        optional(seq(
          $.assign_equal,
          alias(token(seq(
            '"',
            /[^\"\n]+/,
            choice('.dds', '.tga'),
            '"'
          )), $.string)
        )),
        optional(';')
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
           choice('.lua', '.shader'),
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
        $._boolean_yes_no
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

    _statement_gfx_size_xy: $ => seq(
      alias('size', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $._statement_xy_integer,
        '}'
      ))
    ),

    _statement_gfx_size_integer: $ => seq(
      alias('size', $.identifier),
      optional(seq(
        $.assign_equal,
        $._integer_positive
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

    _statement_gfx_alwaystransparent: $ => seq(
      alias('alwaystransparent', $.identifier),
      optional(seq(
        $.assign_equal,
        $._boolean_yes_no
      ))
    ),

    _statement_gfx_allwaystransparent: $ => seq(
      alias('allwaystransparent', $.identifier),
      optional(seq(
        $.assign_equal,
        $._boolean_yes_no
      ))
    ),

    _statement_gfx_legacy_lazy_load: $ => seq(
      alias('legacy_lazy_load', $.identifier),
      optional(seq(
        $.assign_equal,
        $._boolean_yes_no
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
        $._statement_gfx_size_xy,
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

    _statement_gfx_colortwo: $ => seq(
      alias('colortwo', $.identifier),
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
        $._float_positive,
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

    _statement_gfx_animation_rate_fps: $ => seq(
      alias('animation_rate_fps', $.identifier),
      optional(seq(
        $.assign_equal,
        $._integer_positive
      ))
    ),

    _statement_gfx_looping: $ => seq(
      alias('looping', $.identifier),
      optional(seq(
        $.assign_equal,
        $._boolean_yes_no
      ))
    ),

    _statement_gfx_play_on_show: $ => seq(
      alias('play_on_show', $.identifier),
      optional(seq(
        $.assign_equal,
        $._boolean_yes_no
      ))
    ),

    _statement_gfx_pause_on_loop: $ => seq(
      alias('pause_on_loop', $.identifier),
      optional(seq(
        $.assign_equal,
        $._float_positive
      ))
    ),

    _statement_gfx_horizontal: $ => seq(
      alias('horizontal', $.identifier),
      optional(seq(
        $.assign_equal,
        $._boolean_yes_no
      ))
    ),

    _statement_gfx_file: $ => seq(
      alias('file', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[^\"\n]+/,
          '.mesh',
          '"'
        )), $.string)
      ))
    ),

    _statement_gfx_pdxmesh_animation: $ => seq(
      alias('animation', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $._statement_gfx_animation_id,
        $._statement_gfx_animation_type,
        '}'
      ))
    ),

    _statement_gfx_animation_id: $ => seq(
      alias('id', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    _statement_gfx_animation_type: $ => seq(
      alias('type', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    _statement_gfx_pdxmesh_meshsettings: $ => seq(
      alias('meshsettings', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $._statement_gfx_name,
        $._statement_gfx_meshsettings_index,
        $._statement_gfx_meshsettings_texture_diffuse,
        $._statement_gfx_meshsettings_texture_normal,
        $._statement_gfx_meshsettings_texture_specular,
        $._statement_gfx_meshsettings_shader,
        $._statement_gfx_meshsettings_shader_file,
        '}'
      ))
    ),

    _statement_gfx_meshsettings_index: $ => seq(
      alias('index', $.identifier),
      optional(seq(
        $.assign_equal,
        $._integer_positive
      ))
    ),

    _statement_gfx_meshsettings_texture_diffuse: $ => seq(
      alias('texture_diffuse', $.identifier),
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

    _statement_gfx_meshsettings_texture_normal: $ => seq(
      alias('texture_normal', $.identifier),
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

    _statement_gfx_meshsettings_texture_specular: $ => seq(
      alias('texture_specular', $.identifier),
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

    _statement_gfx_meshsettings_shader: $ => seq(
      alias('shader', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          'PdxMeshStandard',
          '"'
        )), $.string)
      ))
    ),

    _statement_gfx_meshsettings_shader_file: $ => seq(
      alias('shader_file', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[^\"\n]+/,
          '.shader',
          '"'
        )), $.string)
      ))
    ),


    _statement_gfx_scale: $ => seq(
      alias('scale', $.identifier),
      optional(seq(
        $.assign_equal,
        $._float_positive
      ))
    ),

    _statement_gfx_transparencecheck: $ => seq(
      alias('transparencecheck', $.identifier),
      optional(seq(
        $.assign_equal,
        $._boolean_yes_no
      ))
    ),

    _statement_gfx_loadType: $ => seq(
      alias('loadType', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(choice('"INGAME"', '"FRONTEND"'), $.string)
      ))
    ),

    _statement_gfx_norefcount: $ => seq(
      alias('norefcount', $.identifier),
      optional(seq(
        $.assign_equal,
        $._boolean_yes_no
      ))
    ),

    _statement_gfx_texture: $ => seq(
      alias('texture', $.identifier),
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

    _statement_gfx_normal: $ => seq(
      alias('normal', $.identifier),
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

    _statement_gfx_specular: $ => seq(
      alias('specular', $.identifier),
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

    _statement_gfx_effect: $ => seq(
      alias('effect', $.identifier),
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

    _statement_gfx_effect_bool: $ => seq(
      alias('effect', $.identifier),
      optional(seq(
        $.assign_equal,
        $._boolean_yes_no
      ))
    ),

    _statement_gfx_alphamaskfile: $ => seq(
      alias('alphamaskfile', $.identifier),
      optional(seq(
        $.assign_equal,
        alias(token(seq(
          '"',
          /[^\"\n]+/,
          '.tga',
          '"'
        )), $.string)
      ))
    ),

    _statement_gfx_linewidth: $ => seq(
      alias('linewidth', $.identifier),
      optional(seq(
        $.assign_equal,
        $._integer_positive
      ))
    ),

    _statement_gfx_type: $ => seq(
      alias('type', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    //-------------------------------------//
    //  GUI statements [_statement_gui_X]  //
    //-------------------------------------//

    _statement_gui_backGround: $ => seq(
      alias('backGround', $.identifier),
      optional(seq(
        $.assign_equal,
        $.string
      ))
    ),

    _statement_gui_position: $ => seq(
      alias('position', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $._statement_xy_integer,
        '}'
      ))
    ),

    _statement_gui_size: $ => seq(
      alias('size', $.identifier),
      optional(seq(
        $.assign_equal,
        '{',
        $._statement_xy_integer,
        '}'
      ))
    ),

    _statement_gui_moveable: $ => seq(
      alias('moveable', $.identifier),
      optional(seq(
        $.assign_equal,
        $._boolean_0_1
      ))
    ),

    _statement_gui_orientation: $ => seq(
      alias('orientation', $.identifier),
      optional(seq(
        $.assign_equal,
        $._orientation_value
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
      )),
      optional('f')
    )),

    _float_positive: $ => alias(token(seq(
      /\d+/,
      optional(seq(
        '.',
        /\d+/
      )),
      optional('f')
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

    _boolean_yes_no: $ => alias(choice('yes', 'no'), $.boolean),

    _boolean_0_1: $ => alias(choice('0', '1'), $.boolean),

    comment: $ => /\#[^\n]*/,

    _orientation_value: $ => alias(token(
      seq(
        '"',
        choice(
          'CENTER',
          'UPPER_LEFT',
          'LOWER_LEFT',
          'UPPER_RIGHT',
          'LOWER_RIGHT'
        ),
        '"'
      )), $.string),

    _eol: $ => token(/\r?\n/),

    debug: $ => /.+/

  }
});
