#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 695
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 439
#define ALIAS_COUNT 5
#define TOKEN_COUNT 210
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11

enum {
  anon_sym_spriteTypes = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_objectTypes = 4,
  anon_sym_bitmapfonts = 5,
  anon_sym_guiTypes = 6,
  anon_sym_spriteType = 7,
  anon_sym_textSpriteType = 8,
  anon_sym_corneredTileSpriteType = 9,
  anon_sym_maskedShieldType = 10,
  anon_sym_animatedmaptext = 11,
  anon_sym_textcolors = 12,
  anon_sym_bitmapfont = 13,
  anon_sym_frameAnimatedSpriteType = 14,
  anon_sym_progressbartype = 15,
  anon_sym_pdxmesh = 16,
  anon_sym_pdxparticle = 17,
  anon_sym_arrowType = 18,
  anon_sym_tradeRouteType = 19,
  anon_sym_PieChartType = 20,
  anon_sym_LineChartType = 21,
  anon_sym_windowType = 22,
  anon_sym_listBoxType = 23,
  anon_sym_editBoxType = 24,
  anon_sym_instantTextBoxType = 25,
  anon_sym_textBoxType = 26,
  anon_sym_iconType = 27,
  anon_sym_scrollbarType = 28,
  anon_sym_guiButtonType = 29,
  anon_sym_name = 30,
  anon_sym_x = 31,
  anon_sym_y = 32,
  anon_sym_path = 33,
  anon_sym_archive = 34,
  aux_sym__statement_mod_archive_token1 = 35,
  anon_sym_remote_file_id = 36,
  aux_sym__statement_mod_remote_file_id_token1 = 37,
  anon_sym_version = 38,
  aux_sym__statement_mod_version_token1 = 39,
  anon_sym_picture = 40,
  aux_sym__statement_mod_picture_token1 = 41,
  anon_sym_supported_version = 42,
  aux_sym__statement_mod_supported_version_token1 = 43,
  anon_sym_replace_path = 44,
  aux_sym__mod_replace_path_folder_token1 = 45,
  anon_sym_tags = 46,
  aux_sym__mod_tags_keyword_token1 = 47,
  aux_sym__mod_tags_keyword_token2 = 48,
  aux_sym__mod_tags_keyword_token3 = 49,
  aux_sym__mod_tags_keyword_token4 = 50,
  aux_sym__mod_tags_keyword_token5 = 51,
  aux_sym__mod_tags_keyword_token6 = 52,
  aux_sym__mod_tags_keyword_token7 = 53,
  aux_sym__mod_tags_keyword_token8 = 54,
  aux_sym__mod_tags_keyword_token9 = 55,
  aux_sym__mod_tags_keyword_token10 = 56,
  aux_sym__mod_tags_keyword_token11 = 57,
  aux_sym__mod_tags_keyword_token12 = 58,
  aux_sym__mod_tags_keyword_token13 = 59,
  aux_sym__mod_tags_keyword_token14 = 60,
  aux_sym__mod_tags_keyword_token15 = 61,
  aux_sym__mod_tags_keyword_token16 = 62,
  aux_sym__mod_tags_keyword_token17 = 63,
  aux_sym__mod_tags_keyword_token18 = 64,
  aux_sym__mod_tags_keyword_token19 = 65,
  aux_sym__mod_tags_keyword_token20 = 66,
  aux_sym__mod_tags_keyword_token21 = 67,
  aux_sym__mod_tags_keyword_token22 = 68,
  anon_sym_dependencies = 69,
  aux_sym__statement_gfx_name_token1 = 70,
  aux_sym__statement_gfx_name_token2 = 71,
  anon_sym_cursor_offset = 72,
  aux_sym__statement_gfx_textureFile_token1 = 73,
  aux_sym__statement_gfx_textureFile_token2 = 74,
  aux_sym__statement_gfx_textureFile1_token1 = 75,
  aux_sym__statement_gfx_textureFile2_token1 = 76,
  aux_sym__statement_gfx_textureFile3_token1 = 77,
  anon_sym_SEMI = 78,
  anon_sym_noOfFrames = 79,
  anon_sym_overlay_frames_per_row = 80,
  anon_sym_overlay_rows = 81,
  anon_sym_effectFile = 82,
  aux_sym__statement_gfx_effectFile_token1 = 83,
  anon_sym_animation = 84,
  anon_sym_animationmaskfile = 85,
  anon_sym_animationtexturefile = 86,
  aux_sym__animation_entry_dds_token1 = 87,
  anon_sym_animationrotation = 88,
  anon_sym_animationlooping = 89,
  anon_sym_animationtime = 90,
  anon_sym_animationdelay = 91,
  anon_sym_animationrotationoffset = 92,
  anon_sym_animationtexturescale = 93,
  anon_sym_animationblendmode = 94,
  anon_sym_DQUOTEadd_DQUOTE = 95,
  anon_sym_DQUOTEmultiply_DQUOTE = 96,
  anon_sym_DQUOTEoverlay_DQUOTE = 97,
  anon_sym_animationtype = 98,
  anon_sym_DQUOTEscrolling_DQUOTE = 99,
  anon_sym_DQUOTErotating_DQUOTE = 100,
  anon_sym_DQUOTEpulsing_DQUOTE = 101,
  anon_sym_animationframes = 102,
  anon_sym_size = 103,
  anon_sym_borderSize = 104,
  anon_sym_alwaystransparent = 105,
  anon_sym_allwaystransparent = 106,
  anon_sym_legacy_lazy_load = 107,
  anon_sym_clicksound = 108,
  anon_sym_click = 109,
  anon_sym_speed = 110,
  anon_sym_textblock = 111,
  anon_sym_text = 112,
  anon_sym_color = 113,
  anon_sym_colortwo = 114,
  anon_sym_font = 115,
  anon_sym_position = 116,
  anon_sym_format = 117,
  anon_sym_centre = 118,
  anon_sym_cull_distance = 119,
  anon_sym_B = 120,
  anon_sym_b = 121,
  anon_sym_G = 122,
  anon_sym_H = 123,
  anon_sym_l = 124,
  anon_sym_M = 125,
  anon_sym_O = 126,
  anon_sym_g = 127,
  anon_sym_R = 128,
  anon_sym_T = 129,
  anon_sym_W = 130,
  anon_sym_Y = 131,
  anon_sym_border_color = 132,
  anon_sym_animation_rate_fps = 133,
  anon_sym_looping = 134,
  anon_sym_play_on_show = 135,
  anon_sym_pause_on_loop = 136,
  anon_sym_horizontal = 137,
  anon_sym_file = 138,
  aux_sym__statement_gfx_file_token1 = 139,
  anon_sym_id = 140,
  anon_sym_type = 141,
  anon_sym_meshsettings = 142,
  anon_sym_index = 143,
  anon_sym_texture_diffuse = 144,
  anon_sym_texture_normal = 145,
  anon_sym_texture_specular = 146,
  anon_sym_shader = 147,
  aux_sym__statement_gfx_meshsettings_shader_token1 = 148,
  anon_sym_shader_file = 149,
  aux_sym__statement_gfx_meshsettings_shader_file_token1 = 150,
  anon_sym_scale = 151,
  anon_sym_transparencecheck = 152,
  anon_sym_loadType = 153,
  anon_sym_DQUOTEINGAME_DQUOTE = 154,
  anon_sym_DQUOTEFRONTEND_DQUOTE = 155,
  anon_sym_norefcount = 156,
  anon_sym_texture = 157,
  anon_sym_normal = 158,
  anon_sym_specular = 159,
  anon_sym_effect = 160,
  aux_sym__statement_gfx_effect_token1 = 161,
  anon_sym_alphamaskfile = 162,
  aux_sym__statement_gfx_alphamaskfile_token1 = 163,
  anon_sym_linewidth = 164,
  anon_sym_backGround = 165,
  anon_sym_background = 166,
  anon_sym_moveable = 167,
  aux_sym__statement_gui_orientation_token1 = 168,
  anon_sym_priority = 169,
  anon_sym_scrollbartype = 170,
  anon_sym_textureFile = 171,
  aux_sym__statement_gui_textureFile_token1 = 172,
  anon_sym_cursor = 173,
  anon_sym_maxWidth = 174,
  anon_sym_maxHeight = 175,
  anon_sym_fixedsize = 176,
  anon_sym_truncate = 177,
  anon_sym_slider = 178,
  anon_sym_track = 179,
  anon_sym_leftbutton = 180,
  anon_sym_rightbutton = 181,
  anon_sym_maxValue = 182,
  anon_sym_minValue = 183,
  anon_sym_stepSize = 184,
  anon_sym_startValue = 185,
  anon_sym_quadTextureSprite = 186,
  anon_sym_parent = 187,
  anon_sym_scroll_speed = 188,
  anon_sym_tooltip = 189,
  anon_sym_tooltipText = 190,
  anon_sym_delayedTooltipText = 191,
  sym_assign_equal = 192,
  sym_string = 193,
  sym_number = 194,
  sym_float = 195,
  aux_sym__float_positive_token1 = 196,
  sym_integer = 197,
  aux_sym__integer_positive_token1 = 198,
  sym_byte = 199,
  sym_hexadecimal = 200,
  sym_angle = 201,
  anon_sym_true = 202,
  anon_sym_false = 203,
  anon_sym_yes = 204,
  anon_sym_no = 205,
  anon_sym_0 = 206,
  anon_sym_1 = 207,
  sym_comment = 208,
  aux_sym__orientation_value_token1 = 209,
  sym_file = 210,
  sym_dot_mod = 211,
  sym_dot_gfx = 212,
  sym_dot_gui = 213,
  sym__gui_types_definition = 214,
  sym__spriteTypes = 215,
  sym__spriteTypes_block = 216,
  sym__spriteTypes_statement = 217,
  sym__spriteTypes_type = 218,
  sym__objectTypes = 219,
  sym__objectTypes_block = 220,
  sym__objectTypes_type = 221,
  sym__bitmapfonts = 222,
  sym__bitmapfonts_block = 223,
  sym__bitmapfonts_type = 224,
  sym__guiTypes = 225,
  sym__guiTypes_block = 226,
  sym__guiTypes_type = 227,
  sym__spriteType = 228,
  sym__spriteType_block = 229,
  sym__textSpriteType = 230,
  sym__textSpriteType_block = 231,
  sym__corneredTileSpriteType = 232,
  sym__corneredTileSpriteType_block = 233,
  sym__maskedShieldType = 234,
  sym__maskedShieldType_block = 235,
  sym__animatedmaptext = 236,
  sym__animatedmaptext_block = 237,
  sym__textcolors = 238,
  sym__textcolors_block = 239,
  sym__bitmapfont = 240,
  sym__bitmapfont_block = 241,
  sym__frameAnimatedSpriteType = 242,
  sym__frameAnimatedSpriteType_block = 243,
  sym__progressbartype = 244,
  sym__progressbartype_block = 245,
  sym__pdxmesh = 246,
  sym__pdxmesh_block = 247,
  sym__pdxparticle = 248,
  sym__pdxparticle_block = 249,
  sym__arrowType = 250,
  sym__arrowType_block = 251,
  sym__tradeRouteType = 252,
  sym__tradeRouteType_block = 253,
  sym__PieChartType = 254,
  sym__PieChartType_block = 255,
  sym__LineChartType = 256,
  sym__LineChartType_block = 257,
  sym__windowType = 258,
  sym__windowType_block = 259,
  sym__listBoxType = 260,
  sym__listBoxType_block = 261,
  sym__editBoxType = 262,
  sym__editBoxType_block = 263,
  sym__instantTextBoxType = 264,
  sym__instantTextBoxType_block = 265,
  sym__textBoxType = 266,
  sym__textBoxType_block = 267,
  sym__iconType = 268,
  sym__iconType_block = 269,
  sym__scrollbarType = 270,
  sym__scrollbarType_block = 271,
  sym__guiButtonType = 272,
  sym__guiButtonType_block = 273,
  sym__statement_name = 274,
  sym__statement_xy_integer = 275,
  sym__entry_x_integer = 276,
  sym__entry_y_integer = 277,
  sym__statement_xy_float = 278,
  sym__entry_x_float = 279,
  sym__entry_y_float = 280,
  sym__statement_mod_path = 281,
  sym__statement_mod_archive = 282,
  sym__statement_mod_remote_file_id = 283,
  sym__statement_mod_version = 284,
  sym__statement_mod_picture = 285,
  sym__statement_mod_supported_version = 286,
  sym__statement_mod_replace_path = 287,
  sym__mod_replace_path_folder = 288,
  sym__statement_mod_tags = 289,
  sym__mod_tags_block = 290,
  sym__mod_tags_keyword = 291,
  sym__statement_mod_dependencies = 292,
  sym__mod_dependencies_block = 293,
  sym__statement_gfx_name = 294,
  sym__statement_gfx_path = 295,
  sym__statement_gfx_cursor_offset = 296,
  sym__statement_gfx_textureFile = 297,
  sym__statement_gfx_textureFile1 = 298,
  sym__statement_gfx_textureFile2 = 299,
  sym__statement_gfx_textureFile3 = 300,
  sym__statement_gfx_noOfFrames = 301,
  sym__statement_gfx_overlay_frames_per_row = 302,
  sym__statement_gfx_overlay_rows = 303,
  sym__statement_gfx_effectFile = 304,
  sym__statement_gfx_animation = 305,
  sym__gfx_animation_block = 306,
  sym__animation_entry_dds = 307,
  sym__animation_entry_angle = 308,
  sym__animation_entry_bool = 309,
  sym__animation_entry_time = 310,
  sym__animation_entry_xy_float = 311,
  sym__animation_entry_blendmode = 312,
  sym__animation_entry_type = 313,
  sym__animation_entry_frames = 314,
  sym__statement_gfx_size_xy = 315,
  sym__statement_gfx_size_integer = 316,
  sym__statement_gfx_borderSize = 317,
  sym__statement_gfx_alwaystransparent = 318,
  sym__statement_gfx_allwaystransparent = 319,
  sym__statement_gfx_legacy_lazy_load = 320,
  sym__statement_gfx_clicksound = 321,
  sym__statement_gfx_speed = 322,
  sym__statement_gfx_textblock = 323,
  sym__gfx_textblock = 324,
  sym__statement_gfx_text = 325,
  sym__statement_gfx_color = 326,
  sym__statement_gfx_colortwo = 327,
  sym__statement_gfx_font = 328,
  sym__statement_gfx_position = 329,
  sym__statement_gfx_format = 330,
  sym__statement_gfx_cull_distance = 331,
  sym__statement_gfx_textcolors = 332,
  sym__statement_gfx_bitmapfont_color = 333,
  sym__statement_gfx_bitmapfont_border_color = 334,
  sym__statement_gfx_animation_rate_fps = 335,
  sym__statement_gfx_looping = 336,
  sym__statement_gfx_play_on_show = 337,
  sym__statement_gfx_pause_on_loop = 338,
  sym__statement_gfx_horizontal = 339,
  sym__statement_gfx_file = 340,
  sym__statement_gfx_pdxmesh_animation = 341,
  sym__statement_gfx_animation_id = 342,
  sym__statement_gfx_animation_type = 343,
  sym__statement_gfx_pdxmesh_meshsettings = 344,
  sym__statement_gfx_meshsettings_index = 345,
  sym__statement_gfx_meshsettings_texture_diffuse = 346,
  sym__statement_gfx_meshsettings_texture_normal = 347,
  sym__statement_gfx_meshsettings_texture_specular = 348,
  sym__statement_gfx_meshsettings_shader = 349,
  sym__statement_gfx_meshsettings_shader_file = 350,
  sym__statement_gfx_scale = 351,
  sym__statement_gfx_transparencecheck = 352,
  sym__statement_gfx_loadType = 353,
  sym__statement_gfx_norefcount = 354,
  sym__statement_gfx_texture = 355,
  sym__statement_gfx_normal = 356,
  sym__statement_gfx_specular = 357,
  sym__statement_gfx_effect = 358,
  sym__statement_gfx_effect_bool = 359,
  sym__statement_gfx_alphamaskfile = 360,
  sym__statement_gfx_linewidth = 361,
  sym__statement_gfx_type = 362,
  sym__statement_gui_backGround = 363,
  sym__statement_gui_background = 364,
  sym__statement_gui_position = 365,
  sym__statement_gui_size = 366,
  sym__statement_gui_borderSize = 367,
  sym__statement_gui_moveable = 368,
  sym__statement_gui_orientation = 369,
  sym__statement_gui_priority = 370,
  sym__statement_gui_scrollbartype = 371,
  sym__statement_gui_allwaystransparent = 372,
  sym__statement_gui_textureFile = 373,
  sym__statement_gui_font = 374,
  sym__statement_gui_cursor = 375,
  sym__statement_gui_text = 376,
  sym__statement_gui_instantTextBoxType = 377,
  sym__statement_gui_maxWidth = 378,
  sym__statement_gui_maxHeight = 379,
  sym__statement_gui_fixedsize = 380,
  sym__statement_gui_spriteType = 381,
  sym__statement_gui_format = 382,
  sym__statement_gui_truncate = 383,
  sym__statement_gui_slider = 384,
  sym__statement_gui_track = 385,
  sym__statement_gui_leftbutton = 386,
  sym__statement_gui_rightbutton = 387,
  sym__statement_gui_maxValue = 388,
  sym__statement_gui_minValue = 389,
  sym__statement_gui_stepSize = 390,
  sym__statement_gui_startValue = 391,
  sym__statement_gui_horizontal = 392,
  sym__statement_gui_quadTextureSprite = 393,
  sym__statement_gui_parent = 394,
  sym__statement_gui_scroll_speed = 395,
  sym__statement_gui_tooltip = 396,
  sym__statement_gui_tooltipText = 397,
  sym__statement_gui_delayedTooltipText = 398,
  sym__float_positive = 399,
  sym__integer_positive = 400,
  sym__boolean_yes_no = 401,
  sym__boolean_0_1 = 402,
  sym__orientation_value = 403,
  aux_sym_dot_mod_repeat1 = 404,
  aux_sym_dot_gfx_repeat1 = 405,
  aux_sym_dot_gui_repeat1 = 406,
  aux_sym__spriteTypes_block_repeat1 = 407,
  aux_sym__objectTypes_block_repeat1 = 408,
  aux_sym__bitmapfonts_block_repeat1 = 409,
  aux_sym__guiTypes_block_repeat1 = 410,
  aux_sym__spriteType_block_repeat1 = 411,
  aux_sym__textSpriteType_block_repeat1 = 412,
  aux_sym__corneredTileSpriteType_block_repeat1 = 413,
  aux_sym__maskedShieldType_block_repeat1 = 414,
  aux_sym__animatedmaptext_block_repeat1 = 415,
  aux_sym__textcolors_block_repeat1 = 416,
  aux_sym__bitmapfont_block_repeat1 = 417,
  aux_sym__frameAnimatedSpriteType_block_repeat1 = 418,
  aux_sym__progressbartype_block_repeat1 = 419,
  aux_sym__pdxmesh_block_repeat1 = 420,
  aux_sym__pdxparticle_block_repeat1 = 421,
  aux_sym__arrowType_block_repeat1 = 422,
  aux_sym__tradeRouteType_block_repeat1 = 423,
  aux_sym__PieChartType_block_repeat1 = 424,
  aux_sym__LineChartType_block_repeat1 = 425,
  aux_sym__windowType_block_repeat1 = 426,
  aux_sym__listBoxType_block_repeat1 = 427,
  aux_sym__editBoxType_block_repeat1 = 428,
  aux_sym__instantTextBoxType_block_repeat1 = 429,
  aux_sym__textBoxType_block_repeat1 = 430,
  aux_sym__iconType_block_repeat1 = 431,
  aux_sym__scrollbarType_block_repeat1 = 432,
  aux_sym__guiButtonType_block_repeat1 = 433,
  aux_sym__mod_tags_block_repeat1 = 434,
  aux_sym__mod_dependencies_block_repeat1 = 435,
  aux_sym__gfx_animation_block_repeat1 = 436,
  aux_sym__animation_entry_frames_repeat1 = 437,
  aux_sym__gfx_textblock_repeat1 = 438,
  alias_sym_dependencies = 439,
  alias_sym_keyword = 440,
  alias_sym_name_value = 441,
  alias_sym_statement = 442,
  alias_sym_type_definition = 443,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_spriteTypes] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_objectTypes] = "identifier",
  [anon_sym_bitmapfonts] = "identifier",
  [anon_sym_guiTypes] = "identifier",
  [anon_sym_spriteType] = "identifier",
  [anon_sym_textSpriteType] = "identifier",
  [anon_sym_corneredTileSpriteType] = "identifier",
  [anon_sym_maskedShieldType] = "identifier",
  [anon_sym_animatedmaptext] = "identifier",
  [anon_sym_textcolors] = "identifier",
  [anon_sym_bitmapfont] = "identifier",
  [anon_sym_frameAnimatedSpriteType] = "identifier",
  [anon_sym_progressbartype] = "identifier",
  [anon_sym_pdxmesh] = "identifier",
  [anon_sym_pdxparticle] = "identifier",
  [anon_sym_arrowType] = "identifier",
  [anon_sym_tradeRouteType] = "identifier",
  [anon_sym_PieChartType] = "identifier",
  [anon_sym_LineChartType] = "identifier",
  [anon_sym_windowType] = "identifier",
  [anon_sym_listBoxType] = "identifier",
  [anon_sym_editBoxType] = "identifier",
  [anon_sym_instantTextBoxType] = "identifier",
  [anon_sym_textBoxType] = "identifier",
  [anon_sym_iconType] = "identifier",
  [anon_sym_scrollbarType] = "identifier",
  [anon_sym_guiButtonType] = "identifier",
  [anon_sym_name] = "name_identifier",
  [anon_sym_x] = "keyword",
  [anon_sym_y] = "keyword",
  [anon_sym_path] = "identifier",
  [anon_sym_archive] = "identifier",
  [aux_sym__statement_mod_archive_token1] = "string",
  [anon_sym_remote_file_id] = "identifier",
  [aux_sym__statement_mod_remote_file_id_token1] = "string",
  [anon_sym_version] = "identifier",
  [aux_sym__statement_mod_version_token1] = "string",
  [anon_sym_picture] = "identifier",
  [aux_sym__statement_mod_picture_token1] = "string",
  [anon_sym_supported_version] = "identifier",
  [aux_sym__statement_mod_supported_version_token1] = "string",
  [anon_sym_replace_path] = "identifier",
  [aux_sym__mod_replace_path_folder_token1] = "string",
  [anon_sym_tags] = "identifier",
  [aux_sym__mod_tags_keyword_token1] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token2] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token3] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token4] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token5] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token6] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token7] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token8] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token9] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token10] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token11] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token12] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token13] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token14] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token15] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token16] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token17] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token18] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token19] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token20] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token21] = "tags_keyword",
  [aux_sym__mod_tags_keyword_token22] = "tags_keyword",
  [anon_sym_dependencies] = "identifier",
  [aux_sym__statement_gfx_name_token1] = "name_value",
  [aux_sym__statement_gfx_name_token2] = "name_gfx_value",
  [anon_sym_cursor_offset] = "identifier",
  [aux_sym__statement_gfx_textureFile_token1] = "identifier",
  [aux_sym__statement_gfx_textureFile_token2] = "string",
  [aux_sym__statement_gfx_textureFile1_token1] = "identifier",
  [aux_sym__statement_gfx_textureFile2_token1] = "identifier",
  [aux_sym__statement_gfx_textureFile3_token1] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_noOfFrames] = "identifier",
  [anon_sym_overlay_frames_per_row] = "identifier",
  [anon_sym_overlay_rows] = "identifier",
  [anon_sym_effectFile] = "identifier",
  [aux_sym__statement_gfx_effectFile_token1] = "string",
  [anon_sym_animation] = "identifier",
  [anon_sym_animationmaskfile] = "identifier",
  [anon_sym_animationtexturefile] = "identifier",
  [aux_sym__animation_entry_dds_token1] = "string",
  [anon_sym_animationrotation] = "identifier",
  [anon_sym_animationlooping] = "identifier",
  [anon_sym_animationtime] = "identifier",
  [anon_sym_animationdelay] = "identifier",
  [anon_sym_animationrotationoffset] = "identifier",
  [anon_sym_animationtexturescale] = "identifier",
  [anon_sym_animationblendmode] = "identifier",
  [anon_sym_DQUOTEadd_DQUOTE] = "string",
  [anon_sym_DQUOTEmultiply_DQUOTE] = "string",
  [anon_sym_DQUOTEoverlay_DQUOTE] = "string",
  [anon_sym_animationtype] = "identifier",
  [anon_sym_DQUOTEscrolling_DQUOTE] = "string",
  [anon_sym_DQUOTErotating_DQUOTE] = "string",
  [anon_sym_DQUOTEpulsing_DQUOTE] = "string",
  [anon_sym_animationframes] = "identifier",
  [anon_sym_size] = "identifier",
  [anon_sym_borderSize] = "identifier",
  [anon_sym_alwaystransparent] = "identifier",
  [anon_sym_allwaystransparent] = "identifier",
  [anon_sym_legacy_lazy_load] = "identifier",
  [anon_sym_clicksound] = "identifier",
  [anon_sym_click] = "keyword",
  [anon_sym_speed] = "identifier",
  [anon_sym_textblock] = "identifier",
  [anon_sym_text] = "identifier",
  [anon_sym_color] = "identifier",
  [anon_sym_colortwo] = "identifier",
  [anon_sym_font] = "identifier",
  [anon_sym_position] = "identifier",
  [anon_sym_format] = "identifier",
  [anon_sym_centre] = "centre",
  [anon_sym_cull_distance] = "identifier",
  [anon_sym_B] = "identifier",
  [anon_sym_b] = "identifier",
  [anon_sym_G] = "identifier",
  [anon_sym_H] = "identifier",
  [anon_sym_l] = "identifier",
  [anon_sym_M] = "identifier",
  [anon_sym_O] = "identifier",
  [anon_sym_g] = "identifier",
  [anon_sym_R] = "identifier",
  [anon_sym_T] = "identifier",
  [anon_sym_W] = "identifier",
  [anon_sym_Y] = "identifier",
  [anon_sym_border_color] = "identifier",
  [anon_sym_animation_rate_fps] = "identifier",
  [anon_sym_looping] = "identifier",
  [anon_sym_play_on_show] = "identifier",
  [anon_sym_pause_on_loop] = "identifier",
  [anon_sym_horizontal] = "identifier",
  [anon_sym_file] = "identifier",
  [aux_sym__statement_gfx_file_token1] = "string",
  [anon_sym_id] = "identifier",
  [anon_sym_type] = "identifier",
  [anon_sym_meshsettings] = "identifier",
  [anon_sym_index] = "identifier",
  [anon_sym_texture_diffuse] = "identifier",
  [anon_sym_texture_normal] = "identifier",
  [anon_sym_texture_specular] = "identifier",
  [anon_sym_shader] = "identifier",
  [aux_sym__statement_gfx_meshsettings_shader_token1] = "string",
  [anon_sym_shader_file] = "identifier",
  [aux_sym__statement_gfx_meshsettings_shader_file_token1] = "string",
  [anon_sym_scale] = "identifier",
  [anon_sym_transparencecheck] = "identifier",
  [anon_sym_loadType] = "identifier",
  [anon_sym_DQUOTEINGAME_DQUOTE] = "string",
  [anon_sym_DQUOTEFRONTEND_DQUOTE] = "string",
  [anon_sym_norefcount] = "identifier",
  [anon_sym_texture] = "identifier",
  [anon_sym_normal] = "identifier",
  [anon_sym_specular] = "identifier",
  [anon_sym_effect] = "identifier",
  [aux_sym__statement_gfx_effect_token1] = "string",
  [anon_sym_alphamaskfile] = "identifier",
  [aux_sym__statement_gfx_alphamaskfile_token1] = "string",
  [anon_sym_linewidth] = "identifier",
  [anon_sym_backGround] = "identifier",
  [anon_sym_background] = "identifier",
  [anon_sym_moveable] = "identifier",
  [aux_sym__statement_gui_orientation_token1] = "identifier",
  [anon_sym_priority] = "identifier",
  [anon_sym_scrollbartype] = "identifier",
  [anon_sym_textureFile] = "identifier",
  [aux_sym__statement_gui_textureFile_token1] = "string",
  [anon_sym_cursor] = "identifier",
  [anon_sym_maxWidth] = "identifier",
  [anon_sym_maxHeight] = "identifier",
  [anon_sym_fixedsize] = "identifier",
  [anon_sym_truncate] = "identifier",
  [anon_sym_slider] = "identifier",
  [anon_sym_track] = "identifier",
  [anon_sym_leftbutton] = "identifier",
  [anon_sym_rightbutton] = "identifier",
  [anon_sym_maxValue] = "identifier",
  [anon_sym_minValue] = "identifier",
  [anon_sym_stepSize] = "identifier",
  [anon_sym_startValue] = "identifier",
  [anon_sym_quadTextureSprite] = "identifier",
  [anon_sym_parent] = "identifier",
  [anon_sym_scroll_speed] = "identifier",
  [anon_sym_tooltip] = "identifier",
  [anon_sym_tooltipText] = "identifier",
  [anon_sym_delayedTooltipText] = "identifier",
  [sym_assign_equal] = "assign_equal",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_float] = "float",
  [aux_sym__float_positive_token1] = "float",
  [sym_integer] = "integer",
  [aux_sym__integer_positive_token1] = "integer",
  [sym_byte] = "byte",
  [sym_hexadecimal] = "hexadecimal",
  [sym_angle] = "angle",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_yes] = "boolean",
  [anon_sym_no] = "boolean",
  [anon_sym_0] = "boolean",
  [anon_sym_1] = "boolean",
  [sym_comment] = "comment",
  [aux_sym__orientation_value_token1] = "string",
  [sym_file] = "file",
  [sym_dot_mod] = "dot_mod",
  [sym_dot_gfx] = "dot_gfx",
  [sym_dot_gui] = "dot_gui",
  [sym__gui_types_definition] = "_gui_types_definition",
  [sym__spriteTypes] = "types_definition",
  [sym__spriteTypes_block] = "_spriteTypes_block",
  [sym__spriteTypes_statement] = "_spriteTypes_statement",
  [sym__spriteTypes_type] = "_spriteTypes_type",
  [sym__objectTypes] = "types_definition",
  [sym__objectTypes_block] = "_objectTypes_block",
  [sym__objectTypes_type] = "_objectTypes_type",
  [sym__bitmapfonts] = "types_definition",
  [sym__bitmapfonts_block] = "_bitmapfonts_block",
  [sym__bitmapfonts_type] = "_bitmapfonts_type",
  [sym__guiTypes] = "types_definition",
  [sym__guiTypes_block] = "_guiTypes_block",
  [sym__guiTypes_type] = "_guiTypes_type",
  [sym__spriteType] = "type_definition",
  [sym__spriteType_block] = "_spriteType_block",
  [sym__textSpriteType] = "type_definition",
  [sym__textSpriteType_block] = "_textSpriteType_block",
  [sym__corneredTileSpriteType] = "type_definition",
  [sym__corneredTileSpriteType_block] = "_corneredTileSpriteType_block",
  [sym__maskedShieldType] = "type_definition",
  [sym__maskedShieldType_block] = "_maskedShieldType_block",
  [sym__animatedmaptext] = "type_definition",
  [sym__animatedmaptext_block] = "_animatedmaptext_block",
  [sym__textcolors] = "_textcolors",
  [sym__textcolors_block] = "_textcolors_block",
  [sym__bitmapfont] = "type_definition",
  [sym__bitmapfont_block] = "_bitmapfont_block",
  [sym__frameAnimatedSpriteType] = "type_definition",
  [sym__frameAnimatedSpriteType_block] = "_frameAnimatedSpriteType_block",
  [sym__progressbartype] = "type_definition",
  [sym__progressbartype_block] = "_progressbartype_block",
  [sym__pdxmesh] = "type_definition",
  [sym__pdxmesh_block] = "_pdxmesh_block",
  [sym__pdxparticle] = "type_definition",
  [sym__pdxparticle_block] = "_pdxparticle_block",
  [sym__arrowType] = "type_definition",
  [sym__arrowType_block] = "_arrowType_block",
  [sym__tradeRouteType] = "type_definition",
  [sym__tradeRouteType_block] = "_tradeRouteType_block",
  [sym__PieChartType] = "type_definition",
  [sym__PieChartType_block] = "_PieChartType_block",
  [sym__LineChartType] = "type_definition",
  [sym__LineChartType_block] = "_LineChartType_block",
  [sym__windowType] = "type_definition",
  [sym__windowType_block] = "_windowType_block",
  [sym__listBoxType] = "statement",
  [sym__listBoxType_block] = "_listBoxType_block",
  [sym__editBoxType] = "statement",
  [sym__editBoxType_block] = "_editBoxType_block",
  [sym__instantTextBoxType] = "statement",
  [sym__instantTextBoxType_block] = "_instantTextBoxType_block",
  [sym__textBoxType] = "type_definition",
  [sym__textBoxType_block] = "_textBoxType_block",
  [sym__iconType] = "_iconType",
  [sym__iconType_block] = "_iconType_block",
  [sym__scrollbarType] = "type_definition",
  [sym__scrollbarType_block] = "_scrollbarType_block",
  [sym__guiButtonType] = "statement",
  [sym__guiButtonType_block] = "_guiButtonType_block",
  [sym__statement_name] = "_statement_name",
  [sym__statement_xy_integer] = "_statement_xy_integer",
  [sym__entry_x_integer] = "_entry_x_integer",
  [sym__entry_y_integer] = "_entry_y_integer",
  [sym__statement_xy_float] = "_statement_xy_float",
  [sym__entry_x_float] = "_entry_x_float",
  [sym__entry_y_float] = "_entry_y_float",
  [sym__statement_mod_path] = "_statement_mod_path",
  [sym__statement_mod_archive] = "_statement_mod_archive",
  [sym__statement_mod_remote_file_id] = "_statement_mod_remote_file_id",
  [sym__statement_mod_version] = "_statement_mod_version",
  [sym__statement_mod_picture] = "_statement_mod_picture",
  [sym__statement_mod_supported_version] = "_statement_mod_supported_version",
  [sym__statement_mod_replace_path] = "_statement_mod_replace_path",
  [sym__mod_replace_path_folder] = "_mod_replace_path_folder",
  [sym__statement_mod_tags] = "_statement_mod_tags",
  [sym__mod_tags_block] = "_mod_tags_block",
  [sym__mod_tags_keyword] = "_mod_tags_keyword",
  [sym__statement_mod_dependencies] = "_statement_mod_dependencies",
  [sym__mod_dependencies_block] = "_mod_dependencies_block",
  [sym__statement_gfx_name] = "_statement_gfx_name",
  [sym__statement_gfx_path] = "statement",
  [sym__statement_gfx_cursor_offset] = "statement",
  [sym__statement_gfx_textureFile] = "statement",
  [sym__statement_gfx_textureFile1] = "statement",
  [sym__statement_gfx_textureFile2] = "statement",
  [sym__statement_gfx_textureFile3] = "statement",
  [sym__statement_gfx_noOfFrames] = "statement",
  [sym__statement_gfx_overlay_frames_per_row] = "statement",
  [sym__statement_gfx_overlay_rows] = "statement",
  [sym__statement_gfx_effectFile] = "statement",
  [sym__statement_gfx_animation] = "statement",
  [sym__gfx_animation_block] = "_gfx_animation_block",
  [sym__animation_entry_dds] = "_animation_entry_dds",
  [sym__animation_entry_angle] = "_animation_entry_angle",
  [sym__animation_entry_bool] = "_animation_entry_bool",
  [sym__animation_entry_time] = "_animation_entry_time",
  [sym__animation_entry_xy_float] = "_animation_entry_xy_float",
  [sym__animation_entry_blendmode] = "_animation_entry_blendmode",
  [sym__animation_entry_type] = "_animation_entry_type",
  [sym__animation_entry_frames] = "_animation_entry_frames",
  [sym__statement_gfx_size_xy] = "_statement_gfx_size_xy",
  [sym__statement_gfx_size_integer] = "statement",
  [sym__statement_gfx_borderSize] = "statement",
  [sym__statement_gfx_alwaystransparent] = "statement",
  [sym__statement_gfx_allwaystransparent] = "statement",
  [sym__statement_gfx_legacy_lazy_load] = "statement",
  [sym__statement_gfx_clicksound] = "statement",
  [sym__statement_gfx_speed] = "statement",
  [sym__statement_gfx_textblock] = "statement",
  [sym__gfx_textblock] = "_gfx_textblock",
  [sym__statement_gfx_text] = "_statement_gfx_text",
  [sym__statement_gfx_color] = "_statement_gfx_color",
  [sym__statement_gfx_colortwo] = "statement",
  [sym__statement_gfx_font] = "_statement_gfx_font",
  [sym__statement_gfx_position] = "_statement_gfx_position",
  [sym__statement_gfx_format] = "_statement_gfx_format",
  [sym__statement_gfx_cull_distance] = "_statement_gfx_cull_distance",
  [sym__statement_gfx_textcolors] = "statement",
  [sym__statement_gfx_bitmapfont_color] = "statement",
  [sym__statement_gfx_bitmapfont_border_color] = "statement",
  [sym__statement_gfx_animation_rate_fps] = "statement",
  [sym__statement_gfx_looping] = "statement",
  [sym__statement_gfx_play_on_show] = "statement",
  [sym__statement_gfx_pause_on_loop] = "statement",
  [sym__statement_gfx_horizontal] = "statement",
  [sym__statement_gfx_file] = "statement",
  [sym__statement_gfx_pdxmesh_animation] = "statement",
  [sym__statement_gfx_animation_id] = "_statement_gfx_animation_id",
  [sym__statement_gfx_animation_type] = "_statement_gfx_animation_type",
  [sym__statement_gfx_pdxmesh_meshsettings] = "statement",
  [sym__statement_gfx_meshsettings_index] = "_statement_gfx_meshsettings_index",
  [sym__statement_gfx_meshsettings_texture_diffuse] = "_statement_gfx_meshsettings_texture_diffuse",
  [sym__statement_gfx_meshsettings_texture_normal] = "_statement_gfx_meshsettings_texture_normal",
  [sym__statement_gfx_meshsettings_texture_specular] = "_statement_gfx_meshsettings_texture_specular",
  [sym__statement_gfx_meshsettings_shader] = "_statement_gfx_meshsettings_shader",
  [sym__statement_gfx_meshsettings_shader_file] = "_statement_gfx_meshsettings_shader_file",
  [sym__statement_gfx_scale] = "statement",
  [sym__statement_gfx_transparencecheck] = "statement",
  [sym__statement_gfx_loadType] = "statement",
  [sym__statement_gfx_norefcount] = "statement",
  [sym__statement_gfx_texture] = "statement",
  [sym__statement_gfx_normal] = "statement",
  [sym__statement_gfx_specular] = "statement",
  [sym__statement_gfx_effect] = "statement",
  [sym__statement_gfx_effect_bool] = "statement",
  [sym__statement_gfx_alphamaskfile] = "statement",
  [sym__statement_gfx_linewidth] = "statement",
  [sym__statement_gfx_type] = "statement",
  [sym__statement_gui_backGround] = "statement",
  [sym__statement_gui_background] = "statement",
  [sym__statement_gui_position] = "statement",
  [sym__statement_gui_size] = "statement",
  [sym__statement_gui_borderSize] = "statement",
  [sym__statement_gui_moveable] = "statement",
  [sym__statement_gui_orientation] = "statement",
  [sym__statement_gui_priority] = "statement",
  [sym__statement_gui_scrollbartype] = "statement",
  [sym__statement_gui_allwaystransparent] = "statement",
  [sym__statement_gui_textureFile] = "statement",
  [sym__statement_gui_font] = "statement",
  [sym__statement_gui_cursor] = "statement",
  [sym__statement_gui_text] = "statement",
  [sym__statement_gui_instantTextBoxType] = "statement",
  [sym__statement_gui_maxWidth] = "statement",
  [sym__statement_gui_maxHeight] = "statement",
  [sym__statement_gui_fixedsize] = "statement",
  [sym__statement_gui_spriteType] = "statement",
  [sym__statement_gui_format] = "statement",
  [sym__statement_gui_truncate] = "statement",
  [sym__statement_gui_slider] = "statement",
  [sym__statement_gui_track] = "statement",
  [sym__statement_gui_leftbutton] = "statement",
  [sym__statement_gui_rightbutton] = "statement",
  [sym__statement_gui_maxValue] = "statement",
  [sym__statement_gui_minValue] = "statement",
  [sym__statement_gui_stepSize] = "statement",
  [sym__statement_gui_startValue] = "statement",
  [sym__statement_gui_horizontal] = "statement",
  [sym__statement_gui_quadTextureSprite] = "statement",
  [sym__statement_gui_parent] = "statement",
  [sym__statement_gui_scroll_speed] = "statement",
  [sym__statement_gui_tooltip] = "statement",
  [sym__statement_gui_tooltipText] = "statement",
  [sym__statement_gui_delayedTooltipText] = "statement",
  [sym__float_positive] = "_float_positive",
  [sym__integer_positive] = "_integer_positive",
  [sym__boolean_yes_no] = "_boolean_yes_no",
  [sym__boolean_0_1] = "_boolean_0_1",
  [sym__orientation_value] = "_orientation_value",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_dot_gfx_repeat1] = "dot_gfx_repeat1",
  [aux_sym_dot_gui_repeat1] = "dot_gui_repeat1",
  [aux_sym__spriteTypes_block_repeat1] = "_spriteTypes_block_repeat1",
  [aux_sym__objectTypes_block_repeat1] = "_objectTypes_block_repeat1",
  [aux_sym__bitmapfonts_block_repeat1] = "_bitmapfonts_block_repeat1",
  [aux_sym__guiTypes_block_repeat1] = "_guiTypes_block_repeat1",
  [aux_sym__spriteType_block_repeat1] = "_spriteType_block_repeat1",
  [aux_sym__textSpriteType_block_repeat1] = "_textSpriteType_block_repeat1",
  [aux_sym__corneredTileSpriteType_block_repeat1] = "_corneredTileSpriteType_block_repeat1",
  [aux_sym__maskedShieldType_block_repeat1] = "_maskedShieldType_block_repeat1",
  [aux_sym__animatedmaptext_block_repeat1] = "_animatedmaptext_block_repeat1",
  [aux_sym__textcolors_block_repeat1] = "_textcolors_block_repeat1",
  [aux_sym__bitmapfont_block_repeat1] = "_bitmapfont_block_repeat1",
  [aux_sym__frameAnimatedSpriteType_block_repeat1] = "_frameAnimatedSpriteType_block_repeat1",
  [aux_sym__progressbartype_block_repeat1] = "_progressbartype_block_repeat1",
  [aux_sym__pdxmesh_block_repeat1] = "_pdxmesh_block_repeat1",
  [aux_sym__pdxparticle_block_repeat1] = "_pdxparticle_block_repeat1",
  [aux_sym__arrowType_block_repeat1] = "_arrowType_block_repeat1",
  [aux_sym__tradeRouteType_block_repeat1] = "_tradeRouteType_block_repeat1",
  [aux_sym__PieChartType_block_repeat1] = "_PieChartType_block_repeat1",
  [aux_sym__LineChartType_block_repeat1] = "_LineChartType_block_repeat1",
  [aux_sym__windowType_block_repeat1] = "_windowType_block_repeat1",
  [aux_sym__listBoxType_block_repeat1] = "_listBoxType_block_repeat1",
  [aux_sym__editBoxType_block_repeat1] = "_editBoxType_block_repeat1",
  [aux_sym__instantTextBoxType_block_repeat1] = "_instantTextBoxType_block_repeat1",
  [aux_sym__textBoxType_block_repeat1] = "_textBoxType_block_repeat1",
  [aux_sym__iconType_block_repeat1] = "_iconType_block_repeat1",
  [aux_sym__scrollbarType_block_repeat1] = "_scrollbarType_block_repeat1",
  [aux_sym__guiButtonType_block_repeat1] = "_guiButtonType_block_repeat1",
  [aux_sym__mod_tags_block_repeat1] = "_mod_tags_block_repeat1",
  [aux_sym__mod_dependencies_block_repeat1] = "_mod_dependencies_block_repeat1",
  [aux_sym__gfx_animation_block_repeat1] = "_gfx_animation_block_repeat1",
  [aux_sym__animation_entry_frames_repeat1] = "_animation_entry_frames_repeat1",
  [aux_sym__gfx_textblock_repeat1] = "_gfx_textblock_repeat1",
  [alias_sym_dependencies] = "dependencies",
  [alias_sym_keyword] = "keyword",
  [alias_sym_name_value] = "name_value",
  [alias_sym_statement] = "statement",
  [alias_sym_type_definition] = "type_definition",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_spriteTypes] = anon_sym_spriteTypes,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_objectTypes] = anon_sym_spriteTypes,
  [anon_sym_bitmapfonts] = anon_sym_spriteTypes,
  [anon_sym_guiTypes] = anon_sym_spriteTypes,
  [anon_sym_spriteType] = anon_sym_spriteTypes,
  [anon_sym_textSpriteType] = anon_sym_spriteTypes,
  [anon_sym_corneredTileSpriteType] = anon_sym_spriteTypes,
  [anon_sym_maskedShieldType] = anon_sym_spriteTypes,
  [anon_sym_animatedmaptext] = anon_sym_spriteTypes,
  [anon_sym_textcolors] = anon_sym_spriteTypes,
  [anon_sym_bitmapfont] = anon_sym_spriteTypes,
  [anon_sym_frameAnimatedSpriteType] = anon_sym_spriteTypes,
  [anon_sym_progressbartype] = anon_sym_spriteTypes,
  [anon_sym_pdxmesh] = anon_sym_spriteTypes,
  [anon_sym_pdxparticle] = anon_sym_spriteTypes,
  [anon_sym_arrowType] = anon_sym_spriteTypes,
  [anon_sym_tradeRouteType] = anon_sym_spriteTypes,
  [anon_sym_PieChartType] = anon_sym_spriteTypes,
  [anon_sym_LineChartType] = anon_sym_spriteTypes,
  [anon_sym_windowType] = anon_sym_spriteTypes,
  [anon_sym_listBoxType] = anon_sym_spriteTypes,
  [anon_sym_editBoxType] = anon_sym_spriteTypes,
  [anon_sym_instantTextBoxType] = anon_sym_spriteTypes,
  [anon_sym_textBoxType] = anon_sym_spriteTypes,
  [anon_sym_iconType] = anon_sym_spriteTypes,
  [anon_sym_scrollbarType] = anon_sym_spriteTypes,
  [anon_sym_guiButtonType] = anon_sym_spriteTypes,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_x,
  [anon_sym_path] = anon_sym_spriteTypes,
  [anon_sym_archive] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_archive_token1] = sym_string,
  [anon_sym_remote_file_id] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_remote_file_id_token1] = sym_string,
  [anon_sym_version] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_version_token1] = sym_string,
  [anon_sym_picture] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_picture_token1] = sym_string,
  [anon_sym_supported_version] = anon_sym_spriteTypes,
  [aux_sym__statement_mod_supported_version_token1] = sym_string,
  [anon_sym_replace_path] = anon_sym_spriteTypes,
  [aux_sym__mod_replace_path_folder_token1] = sym_string,
  [anon_sym_tags] = anon_sym_spriteTypes,
  [aux_sym__mod_tags_keyword_token1] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token2] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token3] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token4] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token5] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token6] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token7] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token8] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token9] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token10] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token11] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token12] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token13] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token14] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token15] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token16] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token17] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token18] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token19] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token20] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token21] = aux_sym__mod_tags_keyword_token1,
  [aux_sym__mod_tags_keyword_token22] = aux_sym__mod_tags_keyword_token1,
  [anon_sym_dependencies] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_name_token1] = aux_sym__statement_gfx_name_token1,
  [aux_sym__statement_gfx_name_token2] = aux_sym__statement_gfx_name_token2,
  [anon_sym_cursor_offset] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_textureFile_token1] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_textureFile_token2] = sym_string,
  [aux_sym__statement_gfx_textureFile1_token1] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_textureFile2_token1] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_textureFile3_token1] = anon_sym_spriteTypes,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_noOfFrames] = anon_sym_spriteTypes,
  [anon_sym_overlay_frames_per_row] = anon_sym_spriteTypes,
  [anon_sym_overlay_rows] = anon_sym_spriteTypes,
  [anon_sym_effectFile] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_effectFile_token1] = sym_string,
  [anon_sym_animation] = anon_sym_spriteTypes,
  [anon_sym_animationmaskfile] = anon_sym_spriteTypes,
  [anon_sym_animationtexturefile] = anon_sym_spriteTypes,
  [aux_sym__animation_entry_dds_token1] = sym_string,
  [anon_sym_animationrotation] = anon_sym_spriteTypes,
  [anon_sym_animationlooping] = anon_sym_spriteTypes,
  [anon_sym_animationtime] = anon_sym_spriteTypes,
  [anon_sym_animationdelay] = anon_sym_spriteTypes,
  [anon_sym_animationrotationoffset] = anon_sym_spriteTypes,
  [anon_sym_animationtexturescale] = anon_sym_spriteTypes,
  [anon_sym_animationblendmode] = anon_sym_spriteTypes,
  [anon_sym_DQUOTEadd_DQUOTE] = sym_string,
  [anon_sym_DQUOTEmultiply_DQUOTE] = sym_string,
  [anon_sym_DQUOTEoverlay_DQUOTE] = sym_string,
  [anon_sym_animationtype] = anon_sym_spriteTypes,
  [anon_sym_DQUOTEscrolling_DQUOTE] = sym_string,
  [anon_sym_DQUOTErotating_DQUOTE] = sym_string,
  [anon_sym_DQUOTEpulsing_DQUOTE] = sym_string,
  [anon_sym_animationframes] = anon_sym_spriteTypes,
  [anon_sym_size] = anon_sym_spriteTypes,
  [anon_sym_borderSize] = anon_sym_spriteTypes,
  [anon_sym_alwaystransparent] = anon_sym_spriteTypes,
  [anon_sym_allwaystransparent] = anon_sym_spriteTypes,
  [anon_sym_legacy_lazy_load] = anon_sym_spriteTypes,
  [anon_sym_clicksound] = anon_sym_spriteTypes,
  [anon_sym_click] = anon_sym_x,
  [anon_sym_speed] = anon_sym_spriteTypes,
  [anon_sym_textblock] = anon_sym_spriteTypes,
  [anon_sym_text] = anon_sym_spriteTypes,
  [anon_sym_color] = anon_sym_spriteTypes,
  [anon_sym_colortwo] = anon_sym_spriteTypes,
  [anon_sym_font] = anon_sym_spriteTypes,
  [anon_sym_position] = anon_sym_spriteTypes,
  [anon_sym_format] = anon_sym_spriteTypes,
  [anon_sym_centre] = anon_sym_centre,
  [anon_sym_cull_distance] = anon_sym_spriteTypes,
  [anon_sym_B] = anon_sym_spriteTypes,
  [anon_sym_b] = anon_sym_spriteTypes,
  [anon_sym_G] = anon_sym_spriteTypes,
  [anon_sym_H] = anon_sym_spriteTypes,
  [anon_sym_l] = anon_sym_spriteTypes,
  [anon_sym_M] = anon_sym_spriteTypes,
  [anon_sym_O] = anon_sym_spriteTypes,
  [anon_sym_g] = anon_sym_spriteTypes,
  [anon_sym_R] = anon_sym_spriteTypes,
  [anon_sym_T] = anon_sym_spriteTypes,
  [anon_sym_W] = anon_sym_spriteTypes,
  [anon_sym_Y] = anon_sym_spriteTypes,
  [anon_sym_border_color] = anon_sym_spriteTypes,
  [anon_sym_animation_rate_fps] = anon_sym_spriteTypes,
  [anon_sym_looping] = anon_sym_spriteTypes,
  [anon_sym_play_on_show] = anon_sym_spriteTypes,
  [anon_sym_pause_on_loop] = anon_sym_spriteTypes,
  [anon_sym_horizontal] = anon_sym_spriteTypes,
  [anon_sym_file] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_file_token1] = sym_string,
  [anon_sym_id] = anon_sym_spriteTypes,
  [anon_sym_type] = anon_sym_spriteTypes,
  [anon_sym_meshsettings] = anon_sym_spriteTypes,
  [anon_sym_index] = anon_sym_spriteTypes,
  [anon_sym_texture_diffuse] = anon_sym_spriteTypes,
  [anon_sym_texture_normal] = anon_sym_spriteTypes,
  [anon_sym_texture_specular] = anon_sym_spriteTypes,
  [anon_sym_shader] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_meshsettings_shader_token1] = sym_string,
  [anon_sym_shader_file] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_meshsettings_shader_file_token1] = sym_string,
  [anon_sym_scale] = anon_sym_spriteTypes,
  [anon_sym_transparencecheck] = anon_sym_spriteTypes,
  [anon_sym_loadType] = anon_sym_spriteTypes,
  [anon_sym_DQUOTEINGAME_DQUOTE] = sym_string,
  [anon_sym_DQUOTEFRONTEND_DQUOTE] = sym_string,
  [anon_sym_norefcount] = anon_sym_spriteTypes,
  [anon_sym_texture] = anon_sym_spriteTypes,
  [anon_sym_normal] = anon_sym_spriteTypes,
  [anon_sym_specular] = anon_sym_spriteTypes,
  [anon_sym_effect] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_effect_token1] = sym_string,
  [anon_sym_alphamaskfile] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_alphamaskfile_token1] = sym_string,
  [anon_sym_linewidth] = anon_sym_spriteTypes,
  [anon_sym_backGround] = anon_sym_spriteTypes,
  [anon_sym_background] = anon_sym_spriteTypes,
  [anon_sym_moveable] = anon_sym_spriteTypes,
  [aux_sym__statement_gui_orientation_token1] = anon_sym_spriteTypes,
  [anon_sym_priority] = anon_sym_spriteTypes,
  [anon_sym_scrollbartype] = anon_sym_spriteTypes,
  [anon_sym_textureFile] = anon_sym_spriteTypes,
  [aux_sym__statement_gui_textureFile_token1] = sym_string,
  [anon_sym_cursor] = anon_sym_spriteTypes,
  [anon_sym_maxWidth] = anon_sym_spriteTypes,
  [anon_sym_maxHeight] = anon_sym_spriteTypes,
  [anon_sym_fixedsize] = anon_sym_spriteTypes,
  [anon_sym_truncate] = anon_sym_spriteTypes,
  [anon_sym_slider] = anon_sym_spriteTypes,
  [anon_sym_track] = anon_sym_spriteTypes,
  [anon_sym_leftbutton] = anon_sym_spriteTypes,
  [anon_sym_rightbutton] = anon_sym_spriteTypes,
  [anon_sym_maxValue] = anon_sym_spriteTypes,
  [anon_sym_minValue] = anon_sym_spriteTypes,
  [anon_sym_stepSize] = anon_sym_spriteTypes,
  [anon_sym_startValue] = anon_sym_spriteTypes,
  [anon_sym_quadTextureSprite] = anon_sym_spriteTypes,
  [anon_sym_parent] = anon_sym_spriteTypes,
  [anon_sym_scroll_speed] = anon_sym_spriteTypes,
  [anon_sym_tooltip] = anon_sym_spriteTypes,
  [anon_sym_tooltipText] = anon_sym_spriteTypes,
  [anon_sym_delayedTooltipText] = anon_sym_spriteTypes,
  [sym_assign_equal] = sym_assign_equal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [aux_sym__float_positive_token1] = sym_float,
  [sym_integer] = sym_integer,
  [aux_sym__integer_positive_token1] = sym_integer,
  [sym_byte] = sym_byte,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_angle] = sym_angle,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_yes,
  [anon_sym_0] = anon_sym_yes,
  [anon_sym_1] = anon_sym_yes,
  [sym_comment] = sym_comment,
  [aux_sym__orientation_value_token1] = sym_string,
  [sym_file] = sym_file,
  [sym_dot_mod] = sym_dot_mod,
  [sym_dot_gfx] = sym_dot_gfx,
  [sym_dot_gui] = sym_dot_gui,
  [sym__gui_types_definition] = sym__gui_types_definition,
  [sym__spriteTypes] = sym__spriteTypes,
  [sym__spriteTypes_block] = sym__spriteTypes_block,
  [sym__spriteTypes_statement] = sym__spriteTypes_statement,
  [sym__spriteTypes_type] = sym__spriteTypes_type,
  [sym__objectTypes] = sym__spriteTypes,
  [sym__objectTypes_block] = sym__objectTypes_block,
  [sym__objectTypes_type] = sym__objectTypes_type,
  [sym__bitmapfonts] = sym__spriteTypes,
  [sym__bitmapfonts_block] = sym__bitmapfonts_block,
  [sym__bitmapfonts_type] = sym__bitmapfonts_type,
  [sym__guiTypes] = sym__spriteTypes,
  [sym__guiTypes_block] = sym__guiTypes_block,
  [sym__guiTypes_type] = sym__guiTypes_type,
  [sym__spriteType] = sym__spriteType,
  [sym__spriteType_block] = sym__spriteType_block,
  [sym__textSpriteType] = sym__spriteType,
  [sym__textSpriteType_block] = sym__textSpriteType_block,
  [sym__corneredTileSpriteType] = sym__spriteType,
  [sym__corneredTileSpriteType_block] = sym__corneredTileSpriteType_block,
  [sym__maskedShieldType] = sym__spriteType,
  [sym__maskedShieldType_block] = sym__maskedShieldType_block,
  [sym__animatedmaptext] = sym__spriteType,
  [sym__animatedmaptext_block] = sym__animatedmaptext_block,
  [sym__textcolors] = sym__textcolors,
  [sym__textcolors_block] = sym__textcolors_block,
  [sym__bitmapfont] = sym__spriteType,
  [sym__bitmapfont_block] = sym__bitmapfont_block,
  [sym__frameAnimatedSpriteType] = sym__spriteType,
  [sym__frameAnimatedSpriteType_block] = sym__frameAnimatedSpriteType_block,
  [sym__progressbartype] = sym__spriteType,
  [sym__progressbartype_block] = sym__progressbartype_block,
  [sym__pdxmesh] = sym__spriteType,
  [sym__pdxmesh_block] = sym__pdxmesh_block,
  [sym__pdxparticle] = sym__spriteType,
  [sym__pdxparticle_block] = sym__pdxparticle_block,
  [sym__arrowType] = sym__spriteType,
  [sym__arrowType_block] = sym__arrowType_block,
  [sym__tradeRouteType] = sym__spriteType,
  [sym__tradeRouteType_block] = sym__tradeRouteType_block,
  [sym__PieChartType] = sym__spriteType,
  [sym__PieChartType_block] = sym__PieChartType_block,
  [sym__LineChartType] = sym__spriteType,
  [sym__LineChartType_block] = sym__LineChartType_block,
  [sym__windowType] = sym__spriteType,
  [sym__windowType_block] = sym__windowType_block,
  [sym__listBoxType] = sym__listBoxType,
  [sym__listBoxType_block] = sym__listBoxType_block,
  [sym__editBoxType] = sym__listBoxType,
  [sym__editBoxType_block] = sym__editBoxType_block,
  [sym__instantTextBoxType] = sym__listBoxType,
  [sym__instantTextBoxType_block] = sym__instantTextBoxType_block,
  [sym__textBoxType] = sym__spriteType,
  [sym__textBoxType_block] = sym__textBoxType_block,
  [sym__iconType] = sym__iconType,
  [sym__iconType_block] = sym__iconType_block,
  [sym__scrollbarType] = sym__spriteType,
  [sym__scrollbarType_block] = sym__scrollbarType_block,
  [sym__guiButtonType] = sym__listBoxType,
  [sym__guiButtonType_block] = sym__guiButtonType_block,
  [sym__statement_name] = sym__statement_name,
  [sym__statement_xy_integer] = sym__statement_xy_integer,
  [sym__entry_x_integer] = sym__entry_x_integer,
  [sym__entry_y_integer] = sym__entry_y_integer,
  [sym__statement_xy_float] = sym__statement_xy_float,
  [sym__entry_x_float] = sym__entry_x_float,
  [sym__entry_y_float] = sym__entry_y_float,
  [sym__statement_mod_path] = sym__statement_mod_path,
  [sym__statement_mod_archive] = sym__statement_mod_archive,
  [sym__statement_mod_remote_file_id] = sym__statement_mod_remote_file_id,
  [sym__statement_mod_version] = sym__statement_mod_version,
  [sym__statement_mod_picture] = sym__statement_mod_picture,
  [sym__statement_mod_supported_version] = sym__statement_mod_supported_version,
  [sym__statement_mod_replace_path] = sym__statement_mod_replace_path,
  [sym__mod_replace_path_folder] = sym__mod_replace_path_folder,
  [sym__statement_mod_tags] = sym__statement_mod_tags,
  [sym__mod_tags_block] = sym__mod_tags_block,
  [sym__mod_tags_keyword] = sym__mod_tags_keyword,
  [sym__statement_mod_dependencies] = sym__statement_mod_dependencies,
  [sym__mod_dependencies_block] = sym__mod_dependencies_block,
  [sym__statement_gfx_name] = sym__statement_gfx_name,
  [sym__statement_gfx_path] = sym__listBoxType,
  [sym__statement_gfx_cursor_offset] = sym__listBoxType,
  [sym__statement_gfx_textureFile] = sym__listBoxType,
  [sym__statement_gfx_textureFile1] = sym__listBoxType,
  [sym__statement_gfx_textureFile2] = sym__listBoxType,
  [sym__statement_gfx_textureFile3] = sym__listBoxType,
  [sym__statement_gfx_noOfFrames] = sym__listBoxType,
  [sym__statement_gfx_overlay_frames_per_row] = sym__listBoxType,
  [sym__statement_gfx_overlay_rows] = sym__listBoxType,
  [sym__statement_gfx_effectFile] = sym__listBoxType,
  [sym__statement_gfx_animation] = sym__listBoxType,
  [sym__gfx_animation_block] = sym__gfx_animation_block,
  [sym__animation_entry_dds] = sym__animation_entry_dds,
  [sym__animation_entry_angle] = sym__animation_entry_angle,
  [sym__animation_entry_bool] = sym__animation_entry_bool,
  [sym__animation_entry_time] = sym__animation_entry_time,
  [sym__animation_entry_xy_float] = sym__animation_entry_xy_float,
  [sym__animation_entry_blendmode] = sym__animation_entry_blendmode,
  [sym__animation_entry_type] = sym__animation_entry_type,
  [sym__animation_entry_frames] = sym__animation_entry_frames,
  [sym__statement_gfx_size_xy] = sym__statement_gfx_size_xy,
  [sym__statement_gfx_size_integer] = sym__listBoxType,
  [sym__statement_gfx_borderSize] = sym__listBoxType,
  [sym__statement_gfx_alwaystransparent] = sym__listBoxType,
  [sym__statement_gfx_allwaystransparent] = sym__listBoxType,
  [sym__statement_gfx_legacy_lazy_load] = sym__listBoxType,
  [sym__statement_gfx_clicksound] = sym__listBoxType,
  [sym__statement_gfx_speed] = sym__listBoxType,
  [sym__statement_gfx_textblock] = sym__listBoxType,
  [sym__gfx_textblock] = sym__gfx_textblock,
  [sym__statement_gfx_text] = sym__statement_gfx_text,
  [sym__statement_gfx_color] = sym__statement_gfx_color,
  [sym__statement_gfx_colortwo] = sym__listBoxType,
  [sym__statement_gfx_font] = sym__statement_gfx_font,
  [sym__statement_gfx_position] = sym__statement_gfx_position,
  [sym__statement_gfx_format] = sym__statement_gfx_format,
  [sym__statement_gfx_cull_distance] = sym__statement_gfx_cull_distance,
  [sym__statement_gfx_textcolors] = sym__listBoxType,
  [sym__statement_gfx_bitmapfont_color] = sym__listBoxType,
  [sym__statement_gfx_bitmapfont_border_color] = sym__listBoxType,
  [sym__statement_gfx_animation_rate_fps] = sym__listBoxType,
  [sym__statement_gfx_looping] = sym__listBoxType,
  [sym__statement_gfx_play_on_show] = sym__listBoxType,
  [sym__statement_gfx_pause_on_loop] = sym__listBoxType,
  [sym__statement_gfx_horizontal] = sym__listBoxType,
  [sym__statement_gfx_file] = sym__listBoxType,
  [sym__statement_gfx_pdxmesh_animation] = sym__listBoxType,
  [sym__statement_gfx_animation_id] = sym__statement_gfx_animation_id,
  [sym__statement_gfx_animation_type] = sym__statement_gfx_animation_type,
  [sym__statement_gfx_pdxmesh_meshsettings] = sym__listBoxType,
  [sym__statement_gfx_meshsettings_index] = sym__statement_gfx_meshsettings_index,
  [sym__statement_gfx_meshsettings_texture_diffuse] = sym__statement_gfx_meshsettings_texture_diffuse,
  [sym__statement_gfx_meshsettings_texture_normal] = sym__statement_gfx_meshsettings_texture_normal,
  [sym__statement_gfx_meshsettings_texture_specular] = sym__statement_gfx_meshsettings_texture_specular,
  [sym__statement_gfx_meshsettings_shader] = sym__statement_gfx_meshsettings_shader,
  [sym__statement_gfx_meshsettings_shader_file] = sym__statement_gfx_meshsettings_shader_file,
  [sym__statement_gfx_scale] = sym__listBoxType,
  [sym__statement_gfx_transparencecheck] = sym__listBoxType,
  [sym__statement_gfx_loadType] = sym__listBoxType,
  [sym__statement_gfx_norefcount] = sym__listBoxType,
  [sym__statement_gfx_texture] = sym__listBoxType,
  [sym__statement_gfx_normal] = sym__listBoxType,
  [sym__statement_gfx_specular] = sym__listBoxType,
  [sym__statement_gfx_effect] = sym__listBoxType,
  [sym__statement_gfx_effect_bool] = sym__listBoxType,
  [sym__statement_gfx_alphamaskfile] = sym__listBoxType,
  [sym__statement_gfx_linewidth] = sym__listBoxType,
  [sym__statement_gfx_type] = sym__listBoxType,
  [sym__statement_gui_backGround] = sym__listBoxType,
  [sym__statement_gui_background] = sym__listBoxType,
  [sym__statement_gui_position] = sym__listBoxType,
  [sym__statement_gui_size] = sym__listBoxType,
  [sym__statement_gui_borderSize] = sym__listBoxType,
  [sym__statement_gui_moveable] = sym__listBoxType,
  [sym__statement_gui_orientation] = sym__listBoxType,
  [sym__statement_gui_priority] = sym__listBoxType,
  [sym__statement_gui_scrollbartype] = sym__listBoxType,
  [sym__statement_gui_allwaystransparent] = sym__listBoxType,
  [sym__statement_gui_textureFile] = sym__listBoxType,
  [sym__statement_gui_font] = sym__listBoxType,
  [sym__statement_gui_cursor] = sym__listBoxType,
  [sym__statement_gui_text] = sym__listBoxType,
  [sym__statement_gui_instantTextBoxType] = sym__listBoxType,
  [sym__statement_gui_maxWidth] = sym__listBoxType,
  [sym__statement_gui_maxHeight] = sym__listBoxType,
  [sym__statement_gui_fixedsize] = sym__listBoxType,
  [sym__statement_gui_spriteType] = sym__listBoxType,
  [sym__statement_gui_format] = sym__listBoxType,
  [sym__statement_gui_truncate] = sym__listBoxType,
  [sym__statement_gui_slider] = sym__listBoxType,
  [sym__statement_gui_track] = sym__listBoxType,
  [sym__statement_gui_leftbutton] = sym__listBoxType,
  [sym__statement_gui_rightbutton] = sym__listBoxType,
  [sym__statement_gui_maxValue] = sym__listBoxType,
  [sym__statement_gui_minValue] = sym__listBoxType,
  [sym__statement_gui_stepSize] = sym__listBoxType,
  [sym__statement_gui_startValue] = sym__listBoxType,
  [sym__statement_gui_horizontal] = sym__listBoxType,
  [sym__statement_gui_quadTextureSprite] = sym__listBoxType,
  [sym__statement_gui_parent] = sym__listBoxType,
  [sym__statement_gui_scroll_speed] = sym__listBoxType,
  [sym__statement_gui_tooltip] = sym__listBoxType,
  [sym__statement_gui_tooltipText] = sym__listBoxType,
  [sym__statement_gui_delayedTooltipText] = sym__listBoxType,
  [sym__float_positive] = sym__float_positive,
  [sym__integer_positive] = sym__integer_positive,
  [sym__boolean_yes_no] = sym__boolean_yes_no,
  [sym__boolean_0_1] = sym__boolean_0_1,
  [sym__orientation_value] = sym__orientation_value,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_dot_gfx_repeat1] = aux_sym_dot_gfx_repeat1,
  [aux_sym_dot_gui_repeat1] = aux_sym_dot_gui_repeat1,
  [aux_sym__spriteTypes_block_repeat1] = aux_sym__spriteTypes_block_repeat1,
  [aux_sym__objectTypes_block_repeat1] = aux_sym__objectTypes_block_repeat1,
  [aux_sym__bitmapfonts_block_repeat1] = aux_sym__bitmapfonts_block_repeat1,
  [aux_sym__guiTypes_block_repeat1] = aux_sym__guiTypes_block_repeat1,
  [aux_sym__spriteType_block_repeat1] = aux_sym__spriteType_block_repeat1,
  [aux_sym__textSpriteType_block_repeat1] = aux_sym__textSpriteType_block_repeat1,
  [aux_sym__corneredTileSpriteType_block_repeat1] = aux_sym__corneredTileSpriteType_block_repeat1,
  [aux_sym__maskedShieldType_block_repeat1] = aux_sym__maskedShieldType_block_repeat1,
  [aux_sym__animatedmaptext_block_repeat1] = aux_sym__animatedmaptext_block_repeat1,
  [aux_sym__textcolors_block_repeat1] = aux_sym__textcolors_block_repeat1,
  [aux_sym__bitmapfont_block_repeat1] = aux_sym__bitmapfont_block_repeat1,
  [aux_sym__frameAnimatedSpriteType_block_repeat1] = aux_sym__frameAnimatedSpriteType_block_repeat1,
  [aux_sym__progressbartype_block_repeat1] = aux_sym__progressbartype_block_repeat1,
  [aux_sym__pdxmesh_block_repeat1] = aux_sym__pdxmesh_block_repeat1,
  [aux_sym__pdxparticle_block_repeat1] = aux_sym__pdxparticle_block_repeat1,
  [aux_sym__arrowType_block_repeat1] = aux_sym__arrowType_block_repeat1,
  [aux_sym__tradeRouteType_block_repeat1] = aux_sym__tradeRouteType_block_repeat1,
  [aux_sym__PieChartType_block_repeat1] = aux_sym__PieChartType_block_repeat1,
  [aux_sym__LineChartType_block_repeat1] = aux_sym__LineChartType_block_repeat1,
  [aux_sym__windowType_block_repeat1] = aux_sym__windowType_block_repeat1,
  [aux_sym__listBoxType_block_repeat1] = aux_sym__listBoxType_block_repeat1,
  [aux_sym__editBoxType_block_repeat1] = aux_sym__editBoxType_block_repeat1,
  [aux_sym__instantTextBoxType_block_repeat1] = aux_sym__instantTextBoxType_block_repeat1,
  [aux_sym__textBoxType_block_repeat1] = aux_sym__textBoxType_block_repeat1,
  [aux_sym__iconType_block_repeat1] = aux_sym__iconType_block_repeat1,
  [aux_sym__scrollbarType_block_repeat1] = aux_sym__scrollbarType_block_repeat1,
  [aux_sym__guiButtonType_block_repeat1] = aux_sym__guiButtonType_block_repeat1,
  [aux_sym__mod_tags_block_repeat1] = aux_sym__mod_tags_block_repeat1,
  [aux_sym__mod_dependencies_block_repeat1] = aux_sym__mod_dependencies_block_repeat1,
  [aux_sym__gfx_animation_block_repeat1] = aux_sym__gfx_animation_block_repeat1,
  [aux_sym__animation_entry_frames_repeat1] = aux_sym__animation_entry_frames_repeat1,
  [aux_sym__gfx_textblock_repeat1] = aux_sym__gfx_textblock_repeat1,
  [alias_sym_dependencies] = alias_sym_dependencies,
  [alias_sym_keyword] = alias_sym_keyword,
  [alias_sym_name_value] = alias_sym_name_value,
  [alias_sym_statement] = alias_sym_statement,
  [alias_sym_type_definition] = alias_sym_type_definition,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_spriteTypes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_objectTypes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bitmapfonts] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_guiTypes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_spriteType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_textSpriteType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_corneredTileSpriteType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_maskedShieldType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animatedmaptext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_textcolors] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bitmapfont] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_frameAnimatedSpriteType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_progressbartype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pdxmesh] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pdxparticle] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_arrowType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tradeRouteType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PieChartType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LineChartType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_windowType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_listBoxType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_editBoxType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_instantTextBoxType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_textBoxType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_iconType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_scrollbarType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_guiButtonType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_archive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_archive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_remote_file_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_remote_file_id_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_version_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_picture] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_picture_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_supported_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_mod_supported_version_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_replace_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_replace_path_folder_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tags] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token4] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token5] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token6] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token7] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token8] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token9] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token10] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token11] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token12] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token13] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token14] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token15] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token16] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token17] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token18] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token19] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token20] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token21] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__mod_tags_keyword_token22] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_name_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_name_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cursor_offset] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_textureFile_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_textureFile_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_textureFile1_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_textureFile2_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_textureFile3_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noOfFrames] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_overlay_frames_per_row] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_overlay_rows] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_effectFile] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_effectFile_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationmaskfile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationtexturefile] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__animation_entry_dds_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationrotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationlooping] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationtime] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationdelay] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationrotationoffset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationtexturescale] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationblendmode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEadd_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEmultiply_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEoverlay_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationtype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEscrolling_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTErotating_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEpulsing_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animationframes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_borderSize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_alwaystransparent] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_allwaystransparent] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_legacy_lazy_load] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_clicksound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_click] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_speed] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_textblock] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_colortwo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_font] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_centre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cull_distance] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_G] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_H] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_R] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_W] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_border_color] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_animation_rate_fps] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_looping] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_play_on_show] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pause_on_loop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_file_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_meshsettings] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_texture_diffuse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_texture_normal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_texture_specular] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_shader] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_meshsettings_shader_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_shader_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_meshsettings_shader_file_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_scale] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_transparencecheck] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_loadType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEINGAME_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEFRONTEND_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_norefcount] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_texture] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_normal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_specular] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_effect] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_effect_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_alphamaskfile] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_alphamaskfile_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_linewidth] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_backGround] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_background] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_moveable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gui_orientation_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_priority] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_scrollbartype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_textureFile] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gui_textureFile_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cursor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_maxWidth] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_maxHeight] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fixedsize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_truncate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_slider] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_track] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_leftbutton] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rightbutton] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_maxValue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_minValue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_stepSize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_startValue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_quadTextureSprite] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_parent] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_scroll_speed] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tooltip] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tooltipText] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_delayedTooltipText] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__float_positive_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__integer_positive_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_angle] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__orientation_value_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_gfx] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_gui] = {
    .visible = true,
    .named = true,
  },
  [sym__gui_types_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__spriteTypes] = {
    .visible = true,
    .named = true,
  },
  [sym__spriteTypes_block] = {
    .visible = false,
    .named = true,
  },
  [sym__spriteTypes_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__spriteTypes_type] = {
    .visible = false,
    .named = true,
  },
  [sym__objectTypes] = {
    .visible = true,
    .named = true,
  },
  [sym__objectTypes_block] = {
    .visible = false,
    .named = true,
  },
  [sym__objectTypes_type] = {
    .visible = false,
    .named = true,
  },
  [sym__bitmapfonts] = {
    .visible = true,
    .named = true,
  },
  [sym__bitmapfonts_block] = {
    .visible = false,
    .named = true,
  },
  [sym__bitmapfonts_type] = {
    .visible = false,
    .named = true,
  },
  [sym__guiTypes] = {
    .visible = true,
    .named = true,
  },
  [sym__guiTypes_block] = {
    .visible = false,
    .named = true,
  },
  [sym__guiTypes_type] = {
    .visible = false,
    .named = true,
  },
  [sym__spriteType] = {
    .visible = true,
    .named = true,
  },
  [sym__spriteType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__textSpriteType] = {
    .visible = true,
    .named = true,
  },
  [sym__textSpriteType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__corneredTileSpriteType] = {
    .visible = true,
    .named = true,
  },
  [sym__corneredTileSpriteType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__maskedShieldType] = {
    .visible = true,
    .named = true,
  },
  [sym__maskedShieldType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__animatedmaptext] = {
    .visible = true,
    .named = true,
  },
  [sym__animatedmaptext_block] = {
    .visible = false,
    .named = true,
  },
  [sym__textcolors] = {
    .visible = false,
    .named = true,
  },
  [sym__textcolors_block] = {
    .visible = false,
    .named = true,
  },
  [sym__bitmapfont] = {
    .visible = true,
    .named = true,
  },
  [sym__bitmapfont_block] = {
    .visible = false,
    .named = true,
  },
  [sym__frameAnimatedSpriteType] = {
    .visible = true,
    .named = true,
  },
  [sym__frameAnimatedSpriteType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__progressbartype] = {
    .visible = true,
    .named = true,
  },
  [sym__progressbartype_block] = {
    .visible = false,
    .named = true,
  },
  [sym__pdxmesh] = {
    .visible = true,
    .named = true,
  },
  [sym__pdxmesh_block] = {
    .visible = false,
    .named = true,
  },
  [sym__pdxparticle] = {
    .visible = true,
    .named = true,
  },
  [sym__pdxparticle_block] = {
    .visible = false,
    .named = true,
  },
  [sym__arrowType] = {
    .visible = true,
    .named = true,
  },
  [sym__arrowType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__tradeRouteType] = {
    .visible = true,
    .named = true,
  },
  [sym__tradeRouteType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__PieChartType] = {
    .visible = true,
    .named = true,
  },
  [sym__PieChartType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__LineChartType] = {
    .visible = true,
    .named = true,
  },
  [sym__LineChartType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__windowType] = {
    .visible = true,
    .named = true,
  },
  [sym__windowType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__listBoxType] = {
    .visible = true,
    .named = true,
  },
  [sym__listBoxType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__editBoxType] = {
    .visible = true,
    .named = true,
  },
  [sym__editBoxType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__instantTextBoxType] = {
    .visible = true,
    .named = true,
  },
  [sym__instantTextBoxType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__textBoxType] = {
    .visible = true,
    .named = true,
  },
  [sym__textBoxType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__iconType] = {
    .visible = false,
    .named = true,
  },
  [sym__iconType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__scrollbarType] = {
    .visible = true,
    .named = true,
  },
  [sym__scrollbarType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__guiButtonType] = {
    .visible = true,
    .named = true,
  },
  [sym__guiButtonType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_name] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_xy_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_x_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_y_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_xy_float] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_x_float] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_y_float] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_path] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_archive] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_remote_file_id] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_version] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_picture] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_supported_version] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_replace_path] = {
    .visible = false,
    .named = true,
  },
  [sym__mod_replace_path_folder] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_tags] = {
    .visible = false,
    .named = true,
  },
  [sym__mod_tags_block] = {
    .visible = false,
    .named = true,
  },
  [sym__mod_tags_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_mod_dependencies] = {
    .visible = false,
    .named = true,
  },
  [sym__mod_dependencies_block] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_name] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_path] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_cursor_offset] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_textureFile] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_textureFile1] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_textureFile2] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_textureFile3] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_noOfFrames] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_overlay_frames_per_row] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_overlay_rows] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_effectFile] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_animation] = {
    .visible = true,
    .named = true,
  },
  [sym__gfx_animation_block] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_dds] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_angle] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_bool] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_time] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_xy_float] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_blendmode] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_type] = {
    .visible = false,
    .named = true,
  },
  [sym__animation_entry_frames] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_size_xy] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_size_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_borderSize] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_alwaystransparent] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_allwaystransparent] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_legacy_lazy_load] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_clicksound] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_speed] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_textblock] = {
    .visible = true,
    .named = true,
  },
  [sym__gfx_textblock] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_text] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_color] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_colortwo] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_font] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_position] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_format] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_cull_distance] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_textcolors] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_bitmapfont_color] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_bitmapfont_border_color] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_animation_rate_fps] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_looping] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_play_on_show] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_pause_on_loop] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_horizontal] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_pdxmesh_animation] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_animation_id] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_animation_type] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_pdxmesh_meshsettings] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_meshsettings_index] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_meshsettings_texture_diffuse] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_meshsettings_texture_normal] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_meshsettings_texture_specular] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_meshsettings_shader] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_meshsettings_shader_file] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_scale] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_transparencecheck] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_loadType] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_norefcount] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_texture] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_normal] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_specular] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_effect] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_effect_bool] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_alphamaskfile] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_linewidth] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_type] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_backGround] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_background] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_position] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_size] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_borderSize] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_moveable] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_orientation] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_priority] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_scrollbartype] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_allwaystransparent] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_textureFile] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_font] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_cursor] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_text] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_instantTextBoxType] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_maxWidth] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_maxHeight] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_fixedsize] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_spriteType] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_format] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_truncate] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_slider] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_track] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_leftbutton] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_rightbutton] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_maxValue] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_minValue] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_stepSize] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_startValue] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_horizontal] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_quadTextureSprite] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_parent] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_scroll_speed] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_tooltip] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_tooltipText] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_delayedTooltipText] = {
    .visible = true,
    .named = true,
  },
  [sym__float_positive] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_positive] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_yes_no] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_0_1] = {
    .visible = false,
    .named = true,
  },
  [sym__orientation_value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_dot_mod_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dot_gfx_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dot_gui_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__spriteTypes_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__objectTypes_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bitmapfonts_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__guiTypes_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__spriteType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__textSpriteType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__corneredTileSpriteType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__maskedShieldType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__animatedmaptext_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__textcolors_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bitmapfont_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__frameAnimatedSpriteType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__progressbartype_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pdxmesh_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pdxparticle_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arrowType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tradeRouteType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__PieChartType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__LineChartType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__windowType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__listBoxType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__editBoxType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__instantTextBoxType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__textBoxType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__iconType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__scrollbarType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__guiButtonType_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mod_tags_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mod_dependencies_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__gfx_animation_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__animation_entry_frames_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__gfx_textblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_statement] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_definition] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_name_value,
  },
  [2] = {
    [0] = alias_sym_type_definition,
  },
  [3] = {
    [0] = alias_sym_dependencies,
  },
  [4] = {
    [0] = alias_sym_statement,
  },
  [5] = {
    [2] = alias_sym_keyword,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2109);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '-') ADVANCE(2088);
      if (lookahead == '0') ADVANCE(2350);
      if (lookahead == '1') ADVANCE(2352);
      if (lookahead == '2') ADVANCE(2324);
      if (lookahead == ';') ADVANCE(2190);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == 'B') ADVANCE(2238);
      if (lookahead == 'G') ADVANCE(2241);
      if (lookahead == 'H') ADVANCE(2242);
      if (lookahead == 'L') ADVANCE(1376);
      if (lookahead == 'M') ADVANCE(2245);
      if (lookahead == 'O') ADVANCE(2247);
      if (lookahead == 'P') ADVANCE(1384);
      if (lookahead == 'R') ADVANCE(2250);
      if (lookahead == 'T') ADVANCE(2251);
      if (lookahead == 'W') ADVANCE(2252);
      if (lookahead == 'Y') ADVANCE(2253);
      if (lookahead == '\\') SKIP(2105)
      if (lookahead == 'a') ADVANCE(1468);
      if (lookahead == 'b') ADVANCE(2240);
      if (lookahead == 'c') ADVANCE(1220);
      if (lookahead == 'd') ADVANCE(1149);
      if (lookahead == 'e') ADVANCE(1127);
      if (lookahead == 'f') ADVANCE(966);
      if (lookahead == 'g') ADVANCE(2249);
      if (lookahead == 'h') ADVANCE(1622);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'l') ADVANCE(2244);
      if (lookahead == 'm') ADVANCE(967);
      if (lookahead == 'n') ADVANCE(969);
      if (lookahead == 'o') ADVANCE(1064);
      if (lookahead == 'p') ADVANCE(975);
      if (lookahead == 'q') ADVANCE(1975);
      if (lookahead == 'r') ADVANCE(1151);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead == 't') ADVANCE(979);
      if (lookahead == 'v') ADVANCE(1224);
      if (lookahead == 'w') ADVANCE(1387);
      if (lookahead == 'x') ADVANCE(2141);
      if (lookahead == 'y') ADVANCE(2143);
      if (lookahead == '{') ADVANCE(2111);
      if (lookahead == '}') ADVANCE(2112);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(2326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(559)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(559)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(560)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(560)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(561)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(561)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(562)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(562)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(565)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(565)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(566)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(566)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(570)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(570)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(571)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(571)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(567)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(567)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(568)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(568)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(569)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(569)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(572)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(572)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(573)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(573)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(345);
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(856);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(857);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(851);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(855);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(853);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(854);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(852);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(577);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(464);
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(465);
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(2148);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'A') ADVANCE(206);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'E') ADVANCE(325);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'G') ADVANCE(59);
      if (lookahead == 'H') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'L') ADVANCE(72);
      if (lookahead == 'M') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead == 'R') ADVANCE(140);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'g') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(304);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(95);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(2148);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(2148);
      if (lookahead == '.') ADVANCE(726);
      if (lookahead == 'A') ADVANCE(727);
      if (lookahead == 'C') ADVANCE(581);
      if (lookahead == 'F') ADVANCE(605);
      if (lookahead == 'I') ADVANCE(596);
      if (lookahead == 'L') ADVANCE(600);
      if (lookahead == 'M') ADVANCE(619);
      if (lookahead == 'P') ADVANCE(648);
      if (lookahead == 'R') ADVANCE(665);
      if (lookahead == 'S') ADVANCE(767);
      if (lookahead == 'U') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == 'c') ADVANCE(769);
      if (lookahead == 'f') ADVANCE(699);
      if (lookahead == 'l') ADVANCE(768);
      if (lookahead == 'm') ADVANCE(618);
      if (lookahead == 'o') ADVANCE(839);
      if (lookahead == 'p') ADVANCE(836);
      if (lookahead == 'r') ADVANCE(664);
      if (lookahead == 's') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(820);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(620);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(615);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(700);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(633);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(2148);
      if (lookahead == '.') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'j') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'z') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '*') ADVANCE(491);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'j') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'z') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'D') ADVANCE(514);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(504);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(79);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'F') ADVANCE(81);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'G') ADVANCE(51);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'G') ADVANCE(63);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'H') ADVANCE(81);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'I') ADVANCE(62);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'M') ADVANCE(57);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'M') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'N') ADVANCE(52);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'P') ADVANCE(338);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'P') ADVANCE(76);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'P') ADVANCE(53);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'S') ADVANCE(313);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(338);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'W') ADVANCE(53);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'X') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '_') ADVANCE(338);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(332);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(219);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(338);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'j') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'z') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'j') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'z') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'j') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'z') ADVANCE(180);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(414);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(486);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'g') ADVANCE(28);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'g') ADVANCE(472);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'g') ADVANCE(510);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'g') ADVANCE(526);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'g') ADVANCE(532);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'g') ADVANCE(200);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'h') ADVANCE(338);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'h') ADVANCE(243);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'h') ADVANCE(179);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'y') ADVANCE(435);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'j') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == 'z') ADVANCE(180);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(257);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(528);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(538);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(412);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(435);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(477);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(221);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(217);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(435);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(502);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(240);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(270);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'v') ADVANCE(142);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'v') ADVANCE(150);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'v') ADVANCE(158);
      if (lookahead == 'x') ADVANCE(270);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 330:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'w') ADVANCE(27);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(435);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(147);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(508);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(516);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(520);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(524);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == 'F') ADVANCE(341);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == 'G') ADVANCE(339);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == 'X') ADVANCE(342);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '_') ADVANCE(343);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(2181);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '*') ADVANCE(491);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(357);
      if (lookahead == 'j') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead == 'p') ADVANCE(377);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == 'z') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'C') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'I') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'I') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'K') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'c') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(357);
      if (lookahead == 'j') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead == 'p') ADVANCE(377);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == 'z') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'g') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'h') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'p') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'p') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 396:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 's') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 397:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 's') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 398:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 399:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 400:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 401:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'u') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 402:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'y') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 403:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 404:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 405:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 406:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 407:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 408:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 409:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 411:
      if (lookahead == '"') ADVANCE(2322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(411);
      END_STATE();
    case 412:
      if (lookahead == '"') ADVANCE(2168);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 413:
      if (lookahead == '"') ADVANCE(2168);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 414:
      if (lookahead == '"') ADVANCE(2209);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 415:
      if (lookahead == '"') ADVANCE(2209);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 416:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 417:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 418:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(419);
      if (lookahead == 'j') ADVANCE(429);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead == 'm') ADVANCE(421);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == 'z') ADVANCE(427);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 419:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 420:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(422);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 421:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 422:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 423:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 424:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'g') ADVANCE(475);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 425:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'h') ADVANCE(435);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 426:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'h') ADVANCE(417);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 427:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 428:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 429:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 430:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 431:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(435);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 432:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 's') ADVANCE(435);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 433:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 's') ADVANCE(425);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 434:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 435:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 436:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 437:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 438:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 439:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 440:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == 'j') ADVANCE(457);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == 'm') ADVANCE(445);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead == 's') ADVANCE(449);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == 'z') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 441:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 442:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 443:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 444:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 445:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 446:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'g') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 447:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'g') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 448:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'h') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 449:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'h') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 450:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 451:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 452:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 453:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 454:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 455:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 456:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 457:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'p') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 458:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 459:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 460:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 461:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 462:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 463:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 464:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 465:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 466:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 467:
      if (lookahead == '"') ADVANCE(2156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(467);
      END_STATE();
    case 468:
      if (lookahead == '"') ADVANCE(2150);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 469:
      if (lookahead == '"') ADVANCE(2150);
      if (lookahead == '.') ADVANCE(2092);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 470:
      if (lookahead == '"') ADVANCE(2150);
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 471:
      if (lookahead == '"') ADVANCE(2150);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 472:
      if (lookahead == '"') ADVANCE(2152);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 473:
      if (lookahead == '"') ADVANCE(2152);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 474:
      if (lookahead == '"') ADVANCE(2152);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 475:
      if (lookahead == '"') ADVANCE(2152);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 476:
      if (lookahead == '"') ADVANCE(2152);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 477:
      if (lookahead == '"') ADVANCE(2146);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 478:
      if (lookahead == '"') ADVANCE(2146);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 479:
      if (lookahead == '"') ADVANCE(2146);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 480:
      if (lookahead == '"') ADVANCE(2146);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 481:
      if (lookahead == '"') ADVANCE(2146);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 482:
      if (lookahead == '"') ADVANCE(2162);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 483:
      if (lookahead == '"') ADVANCE(2162);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 484:
      if (lookahead == '"') ADVANCE(2165);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 485:
      if (lookahead == '"') ADVANCE(2165);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 486:
      if (lookahead == '"') ADVANCE(2174);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 487:
      if (lookahead == '"') ADVANCE(2174);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 488:
      if (lookahead == '"') ADVANCE(2176);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 489:
      if (lookahead == '"') ADVANCE(2176);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 490:
      if (lookahead == '"') ADVANCE(2154);
      if (lookahead == '.') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 491:
      if (lookahead == '"') ADVANCE(2154);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 492:
      if (lookahead == '"') ADVANCE(2154);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 493:
      if (lookahead == '"') ADVANCE(2154);
      if (lookahead == '.') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 494:
      if (lookahead == '"') ADVANCE(2154);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 495:
      if (lookahead == '"') ADVANCE(2154);
      if (lookahead == '.') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 496:
      if (lookahead == '"') ADVANCE(2154);
      if (lookahead == '.') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 497:
      if (lookahead == '"') ADVANCE(2154);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 498:
      if (lookahead == '"') ADVANCE(2186);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 499:
      if (lookahead == '"') ADVANCE(2186);
      if (lookahead == '.') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(871);
      END_STATE();
    case 500:
      if (lookahead == '"') ADVANCE(2195);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 501:
      if (lookahead == '"') ADVANCE(2195);
      if (lookahead == '.') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(871);
      END_STATE();
    case 502:
      if (lookahead == '"') ADVANCE(2160);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 503:
      if (lookahead == '"') ADVANCE(2160);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 504:
      if (lookahead == '"') ADVANCE(2277);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 505:
      if (lookahead == '"') ADVANCE(2277);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 506:
      if (lookahead == '"') ADVANCE(2261);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 507:
      if (lookahead == '"') ADVANCE(2261);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 508:
      if (lookahead == '"') ADVANCE(2211);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 509:
      if (lookahead == '"') ADVANCE(2211);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 510:
      if (lookahead == '"') ADVANCE(2215);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 511:
      if (lookahead == '"') ADVANCE(2215);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 512:
      if (lookahead == '"') ADVANCE(2159);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 513:
      if (lookahead == '"') ADVANCE(2159);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 514:
      if (lookahead == '"') ADVANCE(2278);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 515:
      if (lookahead == '"') ADVANCE(2278);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 516:
      if (lookahead == '"') ADVANCE(2163);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 517:
      if (lookahead == '"') ADVANCE(2163);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 518:
      if (lookahead == '"') ADVANCE(2164);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 519:
      if (lookahead == '"') ADVANCE(2164);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 520:
      if (lookahead == '"') ADVANCE(2169);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 521:
      if (lookahead == '"') ADVANCE(2169);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 522:
      if (lookahead == '"') ADVANCE(2173);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 523:
      if (lookahead == '"') ADVANCE(2173);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 524:
      if (lookahead == '"') ADVANCE(2210);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 525:
      if (lookahead == '"') ADVANCE(2210);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 526:
      if (lookahead == '"') ADVANCE(2214);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 527:
      if (lookahead == '"') ADVANCE(2214);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 528:
      if (lookahead == '"') ADVANCE(2161);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 529:
      if (lookahead == '"') ADVANCE(2161);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 530:
      if (lookahead == '"') ADVANCE(2178);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 531:
      if (lookahead == '"') ADVANCE(2178);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 532:
      if (lookahead == '"') ADVANCE(2213);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 533:
      if (lookahead == '"') ADVANCE(2213);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 534:
      if (lookahead == '"') ADVANCE(2166);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 535:
      if (lookahead == '"') ADVANCE(2166);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 536:
      if (lookahead == '"') ADVANCE(2172);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 537:
      if (lookahead == '"') ADVANCE(2172);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 538:
      if (lookahead == '"') ADVANCE(2177);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 539:
      if (lookahead == '"') ADVANCE(2177);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 540:
      if (lookahead == '"') ADVANCE(2175);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 541:
      if (lookahead == '"') ADVANCE(2175);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 542:
      if (lookahead == '"') ADVANCE(2167);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 543:
      if (lookahead == '"') ADVANCE(2167);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 544:
      if (lookahead == '"') ADVANCE(2171);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 545:
      if (lookahead == '"') ADVANCE(2171);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 546:
      if (lookahead == '"') ADVANCE(2158);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 547:
      if (lookahead == '"') ADVANCE(2158);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 548:
      if (lookahead == '"') ADVANCE(2179);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 549:
      if (lookahead == '"') ADVANCE(2179);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 550:
      if (lookahead == '"') ADVANCE(2170);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 551:
      if (lookahead == '"') ADVANCE(2170);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 552:
      if (lookahead == '"') ADVANCE(2201);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 553:
      if (lookahead == '"') ADVANCE(2288);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 554:
      if (lookahead == '"') ADVANCE(2290);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 555:
      if (lookahead == '"') ADVANCE(2354);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == '_') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 556:
      if (lookahead == '"') ADVANCE(2354);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 557:
      if (lookahead == '"') ADVANCE(2273);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 558:
      if (lookahead == '"') ADVANCE(2271);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 559:
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '0') ADVANCE(2349);
      if (lookahead == '1') ADVANCE(2351);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(1492);
      if (lookahead == 'b') ADVANCE(965);
      if (lookahead == 'c') ADVANCE(1999);
      if (lookahead == 'd') ADVANCE(1294);
      if (lookahead == 'e') ADVANCE(1126);
      if (lookahead == 'f') ADVANCE(1377);
      if (lookahead == 'g') ADVANCE(1979);
      if (lookahead == 'h') ADVANCE(1622);
      if (lookahead == 'i') ADVANCE(1075);
      if (lookahead == 'l') ADVANCE(1241);
      if (lookahead == 'm') ADVANCE(995);
      if (lookahead == 'n') ADVANCE(970);
      if (lookahead == 'p') ADVANCE(1053);
      if (lookahead == 'q') ADVANCE(1975);
      if (lookahead == 'r') ADVANCE(1378);
      if (lookahead == 's') ADVANCE(1113);
      if (lookahead == 't') ADVANCE(1296);
      if (lookahead == 'y') ADVANCE(1225);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1787);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(559)
      END_STATE();
    case 560:
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == 'L') ADVANCE(1376);
      if (lookahead == 'O') ADVANCE(1787);
      if (lookahead == 'P') ADVANCE(1384);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(1470);
      if (lookahead == 'b') ADVANCE(1036);
      if (lookahead == 'c') ADVANCE(1535);
      if (lookahead == 'e') ADVANCE(1127);
      if (lookahead == 'f') ADVANCE(1435);
      if (lookahead == 'h') ADVANCE(1622);
      if (lookahead == 'i') ADVANCE(1074);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'm') ADVANCE(1017);
      if (lookahead == 'n') ADVANCE(971);
      if (lookahead == 'o') ADVANCE(1788);
      if (lookahead == 'p') ADVANCE(1042);
      if (lookahead == 's') ADVANCE(1111);
      if (lookahead == 't') ADVANCE(1298);
      if (lookahead == 'w') ADVANCE(1387);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(560)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2332);
      END_STATE();
    case 561:
      if (lookahead == '"') ADVANCE(1093);
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '-') ADVANCE(2091);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(1469);
      if (lookahead == 'b') ADVANCE(1690);
      if (lookahead == 'c') ADVANCE(1534);
      if (lookahead == 'e') ADVANCE(1351);
      if (lookahead == 'l') ADVANCE(1236);
      if (lookahead == 'n') ADVANCE(973);
      if (lookahead == 'o') ADVANCE(2007);
      if (lookahead == 's') ADVANCE(1379);
      if (lookahead == 't') ADVANCE(1309);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(561)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2329);
      END_STATE();
    case 562:
      if (lookahead == '"') ADVANCE(2103);
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '0') ADVANCE(2336);
      if (lookahead == '1') ADVANCE(2340);
      if (lookahead == '2') ADVANCE(2337);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(1470);
      if (lookahead == 'b') ADVANCE(1690);
      if (lookahead == 'c') ADVANCE(1536);
      if (lookahead == 'e') ADVANCE(1351);
      if (lookahead == 'h') ADVANCE(1622);
      if (lookahead == 'l') ADVANCE(1234);
      if (lookahead == 'n') ADVANCE(973);
      if (lookahead == 'o') ADVANCE(2007);
      if (lookahead == 'p') ADVANCE(1041);
      if (lookahead == 's') ADVANCE(1379);
      if (lookahead == 't') ADVANCE(1311);
      if (lookahead == '}') ADVANCE(2112);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(2339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(562)
      END_STATE();
    case 563:
      if (lookahead == '"') ADVANCE(2300);
      if (lookahead == '.') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(877);
      END_STATE();
    case 564:
      if (lookahead == '"') ADVANCE(2300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(877);
      END_STATE();
    case 565:
      if (lookahead == '"') ADVANCE(564);
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '-') ADVANCE(2094);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(1493);
      if (lookahead == 'e') ADVANCE(1351);
      if (lookahead == 'l') ADVANCE(1621);
      if (lookahead == 'n') ADVANCE(972);
      if (lookahead == 'o') ADVANCE(2007);
      if (lookahead == 'p') ADVANCE(1041);
      if (lookahead == 't') ADVANCE(1313);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(565)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2334);
      END_STATE();
    case 566:
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '0') ADVANCE(882);
      if (lookahead == '3') ADVANCE(881);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(1470);
      if (lookahead == 'b') ADVANCE(1690);
      if (lookahead == 'c') ADVANCE(1537);
      if (lookahead == 'e') ADVANCE(1325);
      if (lookahead == 'l') ADVANCE(1235);
      if (lookahead == 'n') ADVANCE(973);
      if (lookahead == 'o') ADVANCE(2007);
      if (lookahead == 'p') ADVANCE(1041);
      if (lookahead == 's') ADVANCE(1379);
      if (lookahead == 't') ADVANCE(1314);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(884);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(883);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(566)
      END_STATE();
    case 567:
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == ';') ADVANCE(2190);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'c') ADVANCE(1689);
      if (lookahead == 'e') ADVANCE(1325);
      if (lookahead == 'h') ADVANCE(1622);
      if (lookahead == 'l') ADVANCE(1664);
      if (lookahead == 'n') ADVANCE(972);
      if (lookahead == 'o') ADVANCE(2007);
      if (lookahead == 's') ADVANCE(1379);
      if (lookahead == 't') ADVANCE(1311);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(567)
      END_STATE();
    case 568:
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == 'B') ADVANCE(2238);
      if (lookahead == 'G') ADVANCE(2241);
      if (lookahead == 'H') ADVANCE(2242);
      if (lookahead == 'M') ADVANCE(2245);
      if (lookahead == 'O') ADVANCE(2246);
      if (lookahead == 'R') ADVANCE(2250);
      if (lookahead == 'T') ADVANCE(2251);
      if (lookahead == 'W') ADVANCE(2252);
      if (lookahead == 'Y') ADVANCE(2253);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(1618);
      if (lookahead == 'b') ADVANCE(2239);
      if (lookahead == 'c') ADVANCE(1684);
      if (lookahead == 'e') ADVANCE(1352);
      if (lookahead == 'f') ADVANCE(1434);
      if (lookahead == 'g') ADVANCE(2248);
      if (lookahead == 'l') ADVANCE(2243);
      if (lookahead == 'm') ADVANCE(1150);
      if (lookahead == 'n') ADVANCE(968);
      if (lookahead == 'p') ADVANCE(1623);
      if (lookahead == 's') ADVANCE(1105);
      if (lookahead == 't') ADVANCE(1303);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(568)
      END_STATE();
    case 569:
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == 'L') ADVANCE(1376);
      if (lookahead == 'P') ADVANCE(1384);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'a') ADVANCE(1618);
      if (lookahead == 'b') ADVANCE(1449);
      if (lookahead == 'c') ADVANCE(1679);
      if (lookahead == 'e') ADVANCE(1352);
      if (lookahead == 'f') ADVANCE(1435);
      if (lookahead == 'm') ADVANCE(1016);
      if (lookahead == 'n') ADVANCE(968);
      if (lookahead == 'p') ADVANCE(1020);
      if (lookahead == 's') ADVANCE(1106);
      if (lookahead == 't') ADVANCE(1299);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(569)
      END_STATE();
    case 570:
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(1470);
      if (lookahead == 'b') ADVANCE(1690);
      if (lookahead == 'c') ADVANCE(1534);
      if (lookahead == 'e') ADVANCE(1351);
      if (lookahead == 'l') ADVANCE(1235);
      if (lookahead == 'n') ADVANCE(973);
      if (lookahead == 'o') ADVANCE(2007);
      if (lookahead == 'p') ADVANCE(1041);
      if (lookahead == 's') ADVANCE(1379);
      if (lookahead == 't') ADVANCE(1313);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(570)
      END_STATE();
    case 571:
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'c') ADVANCE(1688);
      if (lookahead == 'e') ADVANCE(1351);
      if (lookahead == 'h') ADVANCE(1622);
      if (lookahead == 'l') ADVANCE(1664);
      if (lookahead == 'n') ADVANCE(972);
      if (lookahead == 'o') ADVANCE(2007);
      if (lookahead == 's') ADVANCE(1379);
      if (lookahead == 't') ADVANCE(1315);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(571)
      END_STATE();
    case 572:
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'e') ADVANCE(1352);
      if (lookahead == 'n') ADVANCE(974);
      if (lookahead == 's') ADVANCE(1740);
      if (lookahead == 't') ADVANCE(1316);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(572)
      END_STATE();
    case 573:
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'c') ADVANCE(1978);
      if (lookahead == 'e') ADVANCE(1352);
      if (lookahead == 'n') ADVANCE(974);
      if (lookahead == 's') ADVANCE(1740);
      if (lookahead == 't') ADVANCE(1317);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(573)
      END_STATE();
    case 574:
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == 'j') ADVANCE(783);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == 'm') ADVANCE(670);
      if (lookahead == 'p') ADVANCE(746);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead == 'z') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 575:
      if (lookahead == '*') ADVANCE(494);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == 'j') ADVANCE(783);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == 'm') ADVANCE(670);
      if (lookahead == 'p') ADVANCE(746);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead == 'z') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 576:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'A') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 577:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'C') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 578:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'D') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 579:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'E') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 580:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'E') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 581:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'E') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 582:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'E') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 583:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'E') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 584:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'E') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 585:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'F') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 586:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'G') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 587:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'G') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 588:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'H') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 589:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'I') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 590:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'I') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 591:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'I') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 592:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'K') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 593:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'L') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 594:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 595:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 596:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'N') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 597:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'N') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 598:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'N') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 599:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'N') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 600:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'O') ADVANCE(613);
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 601:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'O') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 602:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'P') ADVANCE(603);
      if (lookahead == 't') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 603:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'P') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 604:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'P') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 605:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(601);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 606:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 607:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 608:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'S') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 609:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 610:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 611:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 612:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'U') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 613:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'W') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 614:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == '_') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 615:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'r') ADVANCE(622);
      if (lookahead == 'u') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 616:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 617:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 618:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'i') ADVANCE(730);
      if (lookahead == 'u') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 619:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'i') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 620:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 621:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 622:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 623:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 624:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 625:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 626:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 627:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 628:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 629:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 630:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 631:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 632:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 633:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 634:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 635:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 636:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 637:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 638:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 639:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 640:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'c') ADVANCE(790);
      if (lookahead == 'o') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 641:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'c') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 642:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'c') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 643:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'c') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 644:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'c') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 645:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'c') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 646:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'c') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 647:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'l') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 648:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 649:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == 'j') ADVANCE(783);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == 'm') ADVANCE(670);
      if (lookahead == 'p') ADVANCE(746);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead == 'z') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 650:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == 'j') ADVANCE(783);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == 'm') ADVANCE(670);
      if (lookahead == 'p') ADVANCE(746);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead == 'z') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 651:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 652:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 653:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 654:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 655:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 656:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 657:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 658:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 659:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 660:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 661:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(678);
      if (lookahead == 'n') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 662:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'd') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 663:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'r') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 664:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 665:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 666:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 667:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 668:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 669:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 670:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 671:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 672:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 673:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 674:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 675:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 676:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 677:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 678:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 679:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 680:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 681:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 682:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 683:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 684:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 685:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 686:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 687:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 688:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 689:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 690:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 691:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 692:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 693:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 694:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 695:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 696:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 697:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 698:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 699:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 700:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 701:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 702:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 703:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 704:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 705:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 706:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 707:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 708:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 709:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 710:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 711:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 712:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 713:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 714:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 715:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 716:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 717:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 718:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 719:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 720:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 721:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 722:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 723:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 724:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 725:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 726:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'j') ADVANCE(783);
      if (lookahead == 'p') ADVANCE(746);
      if (lookahead == 'z') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 727:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 728:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 729:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 730:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(711);
      if (lookahead == 's') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 731:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 732:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 733:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 734:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 735:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 736:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 737:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 738:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 739:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 740:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 741:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 742:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'l') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 743:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'm') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 744:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 745:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 746:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 747:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 748:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 749:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 750:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 751:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 752:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 753:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 754:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 755:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 756:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 757:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 758:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 759:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 760:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 761:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 762:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 763:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 764:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 765:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 766:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 767:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 768:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 769:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 770:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 771:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 772:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 773:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 774:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 775:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 776:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 777:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 778:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 779:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 780:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 781:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 782:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 783:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'p') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 784:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 785:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'p') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 786:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'p') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 787:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'p') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 788:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'p') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 789:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'p') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 790:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 791:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 792:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 793:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 794:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 795:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 796:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 797:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 798:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 799:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 800:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 801:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 802:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 803:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 804:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 805:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 806:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 807:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 808:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 809:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 810:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 811:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 812:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 813:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 814:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 815:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 816:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 817:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 818:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 819:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 's') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 820:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 821:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 822:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 823:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 824:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 825:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 826:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 827:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 828:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 829:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 830:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 831:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 832:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 833:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 834:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 835:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 't') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 836:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 837:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 838:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 839:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'v') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 840:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'v') ADVANCE(668);
      if (lookahead == 'x') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 841:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'v') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 842:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'v') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 843:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 844:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'x') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 845:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'x') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 846:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'y') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 847:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'y') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 848:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'y') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 849:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'y') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 850:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'y') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 851:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 852:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 853:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 854:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 855:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 856:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 857:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 858:
      if (lookahead == '.') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 859:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 'a') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 860:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 861:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 862:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 'd') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 863:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 'd') ADVANCE(862);
      if (lookahead == 'l') ADVANCE(870);
      if (lookahead == 's') ADVANCE(867);
      if (lookahead == 't') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 864:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 'd') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 865:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 'e') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 866:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 'g') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 867:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 'h') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 868:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 869:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 870:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == 'u') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 871:
      if (lookahead == '.') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 872:
      if (lookahead == '.') ADVANCE(874);
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(877);
      END_STATE();
    case 873:
      if (lookahead == '.') ADVANCE(874);
      if (lookahead == 'd') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(877);
      END_STATE();
    case 874:
      if (lookahead == '.') ADVANCE(874);
      if (lookahead == 'd') ADVANCE(873);
      if (lookahead == 't') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(877);
      END_STATE();
    case 875:
      if (lookahead == '.') ADVANCE(874);
      if (lookahead == 'g') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(877);
      END_STATE();
    case 876:
      if (lookahead == '.') ADVANCE(874);
      if (lookahead == 's') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(877);
      END_STATE();
    case 877:
      if (lookahead == '.') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(877);
      END_STATE();
    case 878:
      if (lookahead == '.') ADVANCE(885);
      END_STATE();
    case 879:
      if (lookahead == '.') ADVANCE(2095);
      END_STATE();
    case 880:
      if (lookahead == '.') ADVANCE(2095);
      if (lookahead == '0') ADVANCE(878);
      END_STATE();
    case 881:
      if (lookahead == '.') ADVANCE(2095);
      if (lookahead == '6') ADVANCE(880);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(883);
      END_STATE();
    case 882:
      if (lookahead == '.') ADVANCE(2095);
      if (lookahead == 'x') ADVANCE(2102);
      END_STATE();
    case 883:
      if (lookahead == '.') ADVANCE(2095);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      END_STATE();
    case 884:
      if (lookahead == '.') ADVANCE(2095);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 885:
      if (lookahead == '0') ADVANCE(2343);
      END_STATE();
    case 886:
      if (lookahead == '1') ADVANCE(2187);
      if (lookahead == '2') ADVANCE(2188);
      if (lookahead == '3') ADVANCE(2189);
      END_STATE();
    case 887:
      if (lookahead == 'A') ADVANCE(1614);
      END_STATE();
    case 888:
      if (lookahead == 'B') ADVANCE(1977);
      END_STATE();
    case 889:
      if (lookahead == 'B') ADVANCE(1977);
      if (lookahead == 'T') ADVANCE(2053);
      END_STATE();
    case 890:
      if (lookahead == 'B') ADVANCE(1627);
      END_STATE();
    case 891:
      if (lookahead == 'B') ADVANCE(1694);
      END_STATE();
    case 892:
      if (lookahead == 'B') ADVANCE(1695);
      if (lookahead == 'S') ADVANCE(1741);
      if (lookahead == 'b') ADVANCE(1498);
      if (lookahead == 'c') ADVANCE(1687);
      if (lookahead == 'u') ADVANCE(1783);
      END_STATE();
    case 893:
      if (lookahead == 'B') ADVANCE(1696);
      END_STATE();
    case 894:
      if (lookahead == 'C') ADVANCE(1373);
      END_STATE();
    case 895:
      if (lookahead == 'C') ADVANCE(1375);
      END_STATE();
    case 896:
      if (lookahead == 'F') ADVANCE(1411);
      END_STATE();
    case 897:
      if (lookahead == 'F') ADVANCE(1427);
      END_STATE();
    case 898:
      if (lookahead == 'F') ADVANCE(1810);
      END_STATE();
    case 899:
      if (lookahead == 'G') ADVANCE(1763);
      END_STATE();
    case 900:
      if (lookahead == 'G') ADVANCE(1763);
      if (lookahead == 'g') ADVANCE(1801);
      END_STATE();
    case 901:
      if (lookahead == 'H') ADVANCE(1255);
      if (lookahead == 'V') ADVANCE(999);
      if (lookahead == 'W') ADVANCE(1393);
      END_STATE();
    case 902:
      if (lookahead == 'O') ADVANCE(1326);
      END_STATE();
    case 903:
      if (lookahead == 'O') ADVANCE(1326);
      if (lookahead == 'r') ADVANCE(1222);
      END_STATE();
    case 904:
      if (lookahead == 'O') ADVANCE(1326);
      if (lookahead == 'r') ADVANCE(1221);
      END_STATE();
    case 905:
      if (lookahead == 'R') ADVANCE(1668);
      END_STATE();
    case 906:
      if (lookahead == 'S') ADVANCE(1741);
      if (lookahead == 'c') ADVANCE(1687);
      if (lookahead == 'u') ADVANCE(1817);
      END_STATE();
    case 907:
      if (lookahead == 'S') ADVANCE(1371);
      END_STATE();
    case 908:
      if (lookahead == 'S') ADVANCE(1406);
      END_STATE();
    case 909:
      if (lookahead == 'S') ADVANCE(1413);
      END_STATE();
    case 910:
      if (lookahead == 'S') ADVANCE(1413);
      if (lookahead == '_') ADVANCE(1107);
      END_STATE();
    case 911:
      if (lookahead == 'S') ADVANCE(1742);
      END_STATE();
    case 912:
      if (lookahead == 'S') ADVANCE(1747);
      END_STATE();
    case 913:
      if (lookahead == 'S') ADVANCE(1748);
      END_STATE();
    case 914:
      if (lookahead == 'T') ADVANCE(1691);
      END_STATE();
    case 915:
      if (lookahead == 'T') ADVANCE(1280);
      END_STATE();
    case 916:
      if (lookahead == 'T') ADVANCE(2054);
      END_STATE();
    case 917:
      if (lookahead == 'T') ADVANCE(1285);
      END_STATE();
    case 918:
      if (lookahead == 'T') ADVANCE(2055);
      END_STATE();
    case 919:
      if (lookahead == 'T') ADVANCE(2056);
      END_STATE();
    case 920:
      if (lookahead == 'T') ADVANCE(2057);
      END_STATE();
    case 921:
      if (lookahead == 'T') ADVANCE(1293);
      END_STATE();
    case 922:
      if (lookahead == 'T') ADVANCE(2058);
      END_STATE();
    case 923:
      if (lookahead == 'T') ADVANCE(1423);
      END_STATE();
    case 924:
      if (lookahead == 'T') ADVANCE(2059);
      END_STATE();
    case 925:
      if (lookahead == 'T') ADVANCE(2060);
      END_STATE();
    case 926:
      if (lookahead == 'T') ADVANCE(2061);
      END_STATE();
    case 927:
      if (lookahead == 'T') ADVANCE(2062);
      END_STATE();
    case 928:
      if (lookahead == 'T') ADVANCE(2063);
      END_STATE();
    case 929:
      if (lookahead == 'T') ADVANCE(2064);
      END_STATE();
    case 930:
      if (lookahead == 'T') ADVANCE(2065);
      END_STATE();
    case 931:
      if (lookahead == 'T') ADVANCE(2066);
      END_STATE();
    case 932:
      if (lookahead == 'T') ADVANCE(2066);
      if (lookahead == 't') ADVANCE(2067);
      END_STATE();
    case 933:
      if (lookahead == 'T') ADVANCE(2068);
      END_STATE();
    case 934:
      if (lookahead == 'T') ADVANCE(2069);
      END_STATE();
    case 935:
      if (lookahead == 'T') ADVANCE(2071);
      END_STATE();
    case 936:
      if (lookahead == 'T') ADVANCE(2072);
      END_STATE();
    case 937:
      if (lookahead == 'T') ADVANCE(2073);
      END_STATE();
    case 938:
      if (lookahead == 'T') ADVANCE(2074);
      END_STATE();
    case 939:
      if (lookahead == 'T') ADVANCE(2075);
      END_STATE();
    case 940:
      if (lookahead == 'V') ADVANCE(1023);
      END_STATE();
    case 941:
      if (lookahead == 'V') ADVANCE(1027);
      END_STATE();
    case 942:
      if (lookahead == '_') ADVANCE(1336);
      END_STATE();
    case 943:
      if (lookahead == '_') ADVANCE(1131);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1437);
      END_STATE();
    case 944:
      if (lookahead == '_') ADVANCE(1341);
      END_STATE();
    case 945:
      if (lookahead == '_') ADVANCE(1107);
      END_STATE();
    case 946:
      if (lookahead == '_') ADVANCE(1130);
      END_STATE();
    case 947:
      if (lookahead == '_') ADVANCE(1335);
      END_STATE();
    case 948:
      if (lookahead == '_') ADVANCE(1737);
      END_STATE();
    case 949:
      if (lookahead == '_') ADVANCE(1629);
      END_STATE();
    case 950:
      if (lookahead == '_') ADVANCE(1489);
      END_STATE();
    case 951:
      if (lookahead == '_') ADVANCE(1865);
      if (lookahead == 'b') ADVANCE(1010);
      END_STATE();
    case 952:
      if (lookahead == '_') ADVANCE(1865);
      if (lookahead == 'b') ADVANCE(1050);
      END_STATE();
    case 953:
      if (lookahead == '_') ADVANCE(1739);
      END_STATE();
    case 954:
      if (lookahead == '_') ADVANCE(1806);
      END_STATE();
    case 955:
      if (lookahead == '_') ADVANCE(1397);
      END_STATE();
    case 956:
      if (lookahead == '_') ADVANCE(1771);
      END_STATE();
    case 957:
      if (lookahead == '_') ADVANCE(1494);
      END_STATE();
    case 958:
      if (lookahead == '_') ADVANCE(1850);
      END_STATE();
    case 959:
      if (lookahead == '_') ADVANCE(2009);
      END_STATE();
    case 960:
      if (lookahead == '_') ADVANCE(1638);
      END_STATE();
    case 961:
      if (lookahead == '_') ADVANCE(1499);
      END_STATE();
    case 962:
      if (lookahead == '_') ADVANCE(1643);
      END_STATE();
    case 963:
      if (lookahead == '_') ADVANCE(1344);
      END_STATE();
    case 964:
      if (lookahead == 'a') ADVANCE(1072);
      if (lookahead == 'i') ADVANCE(1956);
      if (lookahead == 'o') ADVANCE(1808);
      END_STATE();
    case 965:
      if (lookahead == 'a') ADVANCE(1072);
      if (lookahead == 'o') ADVANCE(1808);
      END_STATE();
    case 966:
      if (lookahead == 'a') ADVANCE(1483);
      if (lookahead == 'i') ADVANCE(1487);
      if (lookahead == 'o') ADVANCE(1581);
      if (lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 967:
      if (lookahead == 'a') ADVANCE(1841);
      if (lookahead == 'e') ADVANCE(1843);
      if (lookahead == 'i') ADVANCE(1565);
      if (lookahead == 'o') ADVANCE(2005);
      END_STATE();
    case 968:
      if (lookahead == 'a') ADVANCE(1544);
      END_STATE();
    case 969:
      if (lookahead == 'a') ADVANCE(1544);
      if (lookahead == 'o') ADVANCE(2348);
      END_STATE();
    case 970:
      if (lookahead == 'a') ADVANCE(1544);
      if (lookahead == 'o') ADVANCE(2347);
      END_STATE();
    case 971:
      if (lookahead == 'a') ADVANCE(1544);
      if (lookahead == 'o') ADVANCE(903);
      END_STATE();
    case 972:
      if (lookahead == 'a') ADVANCE(1544);
      if (lookahead == 'o') ADVANCE(902);
      END_STATE();
    case 973:
      if (lookahead == 'a') ADVANCE(1544);
      if (lookahead == 'o') ADVANCE(904);
      END_STATE();
    case 974:
      if (lookahead == 'a') ADVANCE(1544);
      if (lookahead == 'o') ADVANCE(1796);
      END_STATE();
    case 975:
      if (lookahead == 'a') ADVANCE(1800);
      if (lookahead == 'd') ADVANCE(2020);
      if (lookahead == 'i') ADVANCE(1084);
      if (lookahead == 'l') ADVANCE(976);
      if (lookahead == 'o') ADVANCE(1849);
      if (lookahead == 'r') ADVANCE(1442);
      END_STATE();
    case 976:
      if (lookahead == 'a') ADVANCE(2047);
      END_STATE();
    case 977:
      if (lookahead == 'a') ADVANCE(1799);
      if (lookahead == 'i') ADVANCE(1084);
      if (lookahead == 'o') ADVANCE(1849);
      if (lookahead == 'r') ADVANCE(1441);
      END_STATE();
    case 978:
      if (lookahead == 'a') ADVANCE(1082);
      if (lookahead == 'u') ADVANCE(1157);
      END_STATE();
    case 979:
      if (lookahead == 'a') ADVANCE(1356);
      if (lookahead == 'e') ADVANCE(2023);
      if (lookahead == 'o') ADVANCE(1630);
      if (lookahead == 'r') ADVANCE(978);
      if (lookahead == 'y') ADVANCE(1704);
      END_STATE();
    case 980:
      if (lookahead == 'a') ADVANCE(1356);
      if (lookahead == 'e') ADVANCE(2027);
      if (lookahead == 'o') ADVANCE(1630);
      if (lookahead == 'r') ADVANCE(1032);
      END_STATE();
    case 981:
      if (lookahead == 'a') ADVANCE(1145);
      END_STATE();
    case 982:
      if (lookahead == 'a') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(1734);
      END_STATE();
    case 983:
      if (lookahead == 'a') ADVANCE(2051);
      END_STATE();
    case 984:
      if (lookahead == 'a') ADVANCE(1066);
      END_STATE();
    case 985:
      if (lookahead == 'a') ADVANCE(1104);
      END_STATE();
    case 986:
      if (lookahead == 'a') ADVANCE(2083);
      END_STATE();
    case 987:
      if (lookahead == 'a') ADVANCE(1121);
      END_STATE();
    case 988:
      if (lookahead == 'a') ADVANCE(2052);
      END_STATE();
    case 989:
      if (lookahead == 'a') ADVANCE(1497);
      END_STATE();
    case 990:
      if (lookahead == 'a') ADVANCE(1497);
      if (lookahead == 'r') ADVANCE(1636);
      END_STATE();
    case 991:
      if (lookahead == 'a') ADVANCE(1497);
      if (lookahead == 'r') ADVANCE(1671);
      END_STATE();
    case 992:
      if (lookahead == 'a') ADVANCE(1497);
      if (lookahead == 'r') ADVANCE(1683);
      END_STATE();
    case 993:
      if (lookahead == 'a') ADVANCE(1766);
      if (lookahead == 'e') ADVANCE(1698);
      END_STATE();
    case 994:
      if (lookahead == 'a') ADVANCE(1098);
      END_STATE();
    case 995:
      if (lookahead == 'a') ADVANCE(2018);
      if (lookahead == 'e') ADVANCE(1843);
      if (lookahead == 'i') ADVANCE(1565);
      if (lookahead == 'o') ADVANCE(2005);
      END_STATE();
    case 996:
      if (lookahead == 'a') ADVANCE(2018);
      if (lookahead == 'i') ADVANCE(1565);
      if (lookahead == 'o') ADVANCE(2005);
      END_STATE();
    case 997:
      if (lookahead == 'a') ADVANCE(1702);
      END_STATE();
    case 998:
      if (lookahead == 'a') ADVANCE(2046);
      END_STATE();
    case 999:
      if (lookahead == 'a') ADVANCE(1482);
      END_STATE();
    case 1000:
      if (lookahead == 'a') ADVANCE(1474);
      END_STATE();
    case 1001:
      if (lookahead == 'a') ADVANCE(1846);
      END_STATE();
    case 1002:
      if (lookahead == 'a') ADVANCE(1738);
      END_STATE();
    case 1003:
      if (lookahead == 'a') ADVANCE(1900);
      END_STATE();
    case 1004:
      if (lookahead == 'a') ADVANCE(1476);
      END_STATE();
    case 1005:
      if (lookahead == 'a') ADVANCE(1883);
      END_STATE();
    case 1006:
      if (lookahead == 'a') ADVANCE(1755);
      END_STATE();
    case 1007:
      if (lookahead == 'a') ADVANCE(1615);
      END_STATE();
    case 1008:
      if (lookahead == 'a') ADVANCE(1791);
      END_STATE();
    case 1009:
      if (lookahead == 'a') ADVANCE(1477);
      END_STATE();
    case 1010:
      if (lookahead == 'a') ADVANCE(1756);
      END_STATE();
    case 1011:
      if (lookahead == 'a') ADVANCE(1701);
      if (lookahead == 'i') ADVANCE(1873);
      END_STATE();
    case 1012:
      if (lookahead == 'a') ADVANCE(1526);
      END_STATE();
    case 1013:
      if (lookahead == 'a') ADVANCE(1805);
      END_STATE();
    case 1014:
      if (lookahead == 'a') ADVANCE(1120);
      END_STATE();
    case 1015:
      if (lookahead == 'a') ADVANCE(1758);
      END_STATE();
    case 1016:
      if (lookahead == 'a') ADVANCE(1840);
      if (lookahead == 'e') ADVANCE(1843);
      END_STATE();
    case 1017:
      if (lookahead == 'a') ADVANCE(1840);
      if (lookahead == 'e') ADVANCE(1843);
      if (lookahead == 'o') ADVANCE(2005);
      END_STATE();
    case 1018:
      if (lookahead == 'a') ADVANCE(1908);
      END_STATE();
    case 1019:
      if (lookahead == 'a') ADVANCE(1819);
      END_STATE();
    case 1020:
      if (lookahead == 'a') ADVANCE(1902);
      if (lookahead == 'r') ADVANCE(1625);
      END_STATE();
    case 1021:
      if (lookahead == 'a') ADVANCE(1546);
      END_STATE();
    case 1022:
      if (lookahead == 'a') ADVANCE(1793);
      END_STATE();
    case 1023:
      if (lookahead == 'a') ADVANCE(1523);
      END_STATE();
    case 1024:
      if (lookahead == 'a') ADVANCE(1552);
      END_STATE();
    case 1025:
      if (lookahead == 'a') ADVANCE(2050);
      END_STATE();
    case 1026:
      if (lookahead == 'a') ADVANCE(1547);
      END_STATE();
    case 1027:
      if (lookahead == 'a') ADVANCE(1527);
      END_STATE();
    case 1028:
      if (lookahead == 'a') ADVANCE(1595);
      END_STATE();
    case 1029:
      if (lookahead == 'a') ADVANCE(1820);
      END_STATE();
    case 1030:
      if (lookahead == 'a') ADVANCE(1103);
      END_STATE();
    case 1031:
      if (lookahead == 'a') ADVANCE(1922);
      END_STATE();
    case 1032:
      if (lookahead == 'a') ADVANCE(1081);
      if (lookahead == 'u') ADVANCE(1580);
      END_STATE();
    case 1033:
      if (lookahead == 'a') ADVANCE(1554);
      END_STATE();
    case 1034:
      if (lookahead == 'a') ADVANCE(1776);
      END_STATE();
    case 1035:
      if (lookahead == 'a') ADVANCE(1923);
      END_STATE();
    case 1036:
      if (lookahead == 'a') ADVANCE(1087);
      if (lookahead == 'i') ADVANCE(1958);
      if (lookahead == 'o') ADVANCE(1808);
      END_STATE();
    case 1037:
      if (lookahead == 'a') ADVANCE(1555);
      END_STATE();
    case 1038:
      if (lookahead == 'a') ADVANCE(1924);
      END_STATE();
    case 1039:
      if (lookahead == 'a') ADVANCE(1514);
      END_STATE();
    case 1040:
      if (lookahead == 'a') ADVANCE(1139);
      END_STATE();
    case 1041:
      if (lookahead == 'a') ADVANCE(1985);
      if (lookahead == 'l') ADVANCE(976);
      END_STATE();
    case 1042:
      if (lookahead == 'a') ADVANCE(1985);
      if (lookahead == 'l') ADVANCE(976);
      if (lookahead == 'o') ADVANCE(1849);
      if (lookahead == 'r') ADVANCE(1625);
      END_STATE();
    case 1043:
      if (lookahead == 'a') ADVANCE(1586);
      END_STATE();
    case 1044:
      if (lookahead == 'a') ADVANCE(1612);
      END_STATE();
    case 1045:
      if (lookahead == 'a') ADVANCE(1142);
      END_STATE();
    case 1046:
      if (lookahead == 'a') ADVANCE(1143);
      END_STATE();
    case 1047:
      if (lookahead == 'a') ADVANCE(1743);
      END_STATE();
    case 1048:
      if (lookahead == 'a') ADVANCE(1940);
      END_STATE();
    case 1049:
      if (lookahead == 'a') ADVANCE(1809);
      END_STATE();
    case 1050:
      if (lookahead == 'a') ADVANCE(1814);
      END_STATE();
    case 1051:
      if (lookahead == 'a') ADVANCE(1746);
      END_STATE();
    case 1052:
      if (lookahead == 'a') ADVANCE(1942);
      END_STATE();
    case 1053:
      if (lookahead == 'a') ADVANCE(1798);
      if (lookahead == 'o') ADVANCE(1849);
      if (lookahead == 'r') ADVANCE(1441);
      END_STATE();
    case 1054:
      if (lookahead == 'a') ADVANCE(1946);
      END_STATE();
    case 1055:
      if (lookahead == 'a') ADVANCE(1948);
      END_STATE();
    case 1056:
      if (lookahead == 'a') ADVANCE(1949);
      END_STATE();
    case 1057:
      if (lookahead == 'a') ADVANCE(1950);
      END_STATE();
    case 1058:
      if (lookahead == 'a') ADVANCE(1951);
      END_STATE();
    case 1059:
      if (lookahead == 'a') ADVANCE(1874);
      END_STATE();
    case 1060:
      if (lookahead == 'a') ADVANCE(1616);
      END_STATE();
    case 1061:
      if (lookahead == 'a') ADVANCE(1822);
      END_STATE();
    case 1062:
      if (lookahead == 'a') ADVANCE(2077);
      END_STATE();
    case 1063:
      if (lookahead == 'b') ADVANCE(1456);
      if (lookahead == 'r') ADVANCE(1386);
      END_STATE();
    case 1064:
      if (lookahead == 'b') ADVANCE(1456);
      if (lookahead == 'r') ADVANCE(1386);
      if (lookahead == 'v') ADVANCE(1229);
      END_STATE();
    case 1065:
      if (lookahead == 'b') ADVANCE(1019);
      END_STATE();
    case 1066:
      if (lookahead == 'b') ADVANCE(1502);
      END_STATE();
    case 1067:
      if (lookahead == 'b') ADVANCE(1509);
      if (lookahead == 'd') ADVANCE(1289);
      if (lookahead == 'f') ADVANCE(1807);
      if (lookahead == 'l') ADVANCE(1651);
      if (lookahead == 'm') ADVANCE(1059);
      if (lookahead == 'r') ADVANCE(1697);
      if (lookahead == 't') ADVANCE(1307);
      END_STATE();
    case 1068:
      if (lookahead == 'b') ADVANCE(1034);
      END_STATE();
    case 1069:
      if (lookahead == 'b') ADVANCE(1997);
      END_STATE();
    case 1070:
      if (lookahead == 'b') ADVANCE(1998);
      END_STATE();
    case 1071:
      if (lookahead == 'c') ADVANCE(990);
      if (lookahead == 'h') ADVANCE(1040);
      if (lookahead == 'i') ADVANCE(2078);
      if (lookahead == 'l') ADVANCE(1444);
      if (lookahead == 'p') ADVANCE(1153);
      if (lookahead == 't') ADVANCE(993);
      if (lookahead == 'u') ADVANCE(1703);
      END_STATE();
    case 1072:
      if (lookahead == 'c') ADVANCE(1457);
      END_STATE();
    case 1073:
      if (lookahead == 'c') ADVANCE(1628);
      if (lookahead == 'd') ADVANCE(2262);
      if (lookahead == 'n') ADVANCE(1128);
      END_STATE();
    case 1074:
      if (lookahead == 'c') ADVANCE(1628);
      if (lookahead == 'n') ADVANCE(1128);
      END_STATE();
    case 1075:
      if (lookahead == 'c') ADVANCE(1628);
      if (lookahead == 'n') ADVANCE(1845);
      END_STATE();
    case 1076:
      if (lookahead == 'c') ADVANCE(1366);
      END_STATE();
    case 1077:
      if (lookahead == 'c') ADVANCE(1366);
      if (lookahead == 'r') ADVANCE(1624);
      END_STATE();
    case 1078:
      if (lookahead == 'c') ADVANCE(1458);
      END_STATE();
    case 1079:
      if (lookahead == 'c') ADVANCE(1983);
      END_STATE();
    case 1080:
      if (lookahead == 'c') ADVANCE(1983);
      if (lookahead == 'e') ADVANCE(1114);
      END_STATE();
    case 1081:
      if (lookahead == 'c') ADVANCE(1459);
      END_STATE();
    case 1082:
      if (lookahead == 'c') ADVANCE(1459);
      if (lookahead == 'd') ADVANCE(1162);
      if (lookahead == 'n') ADVANCE(1848);
      END_STATE();
    case 1083:
      if (lookahead == 'c') ADVANCE(1460);
      END_STATE();
    case 1084:
      if (lookahead == 'c') ADVANCE(1901);
      END_STATE();
    case 1085:
      if (lookahead == 'c') ADVANCE(1461);
      END_STATE();
    case 1086:
      if (lookahead == 'c') ADVANCE(1634);
      END_STATE();
    case 1087:
      if (lookahead == 'c') ADVANCE(1462);
      END_STATE();
    case 1088:
      if (lookahead == 'c') ADVANCE(1465);
      END_STATE();
    case 1089:
      if (lookahead == 'c') ADVANCE(1463);
      END_STATE();
    case 1090:
      if (lookahead == 'c') ADVANCE(1882);
      END_STATE();
    case 1091:
      if (lookahead == 'c') ADVANCE(1369);
      END_STATE();
    case 1092:
      if (lookahead == 'c') ADVANCE(1960);
      END_STATE();
    case 1093:
      if (lookahead == 'c') ADVANCE(1626);
      if (lookahead == 'd') ADVANCE(1256);
      if (lookahead == 'e') ADVANCE(2008);
      if (lookahead == 'g') ADVANCE(1333);
      if (lookahead == 'h') ADVANCE(1400);
      if (lookahead == 'i') ADVANCE(1604);
      if (lookahead == 'l') ADVANCE(1673);
      if (lookahead == 'm') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 1094:
      if (lookahead == 'c') ADVANCE(1447);
      END_STATE();
    case 1095:
      if (lookahead == 'c') ADVANCE(1803);
      if (lookahead == 'h') ADVANCE(1045);
      if (lookahead == 'i') ADVANCE(2078);
      if (lookahead == 'l') ADVANCE(1444);
      if (lookahead == 'p') ADVANCE(1826);
      if (lookahead == 't') ADVANCE(993);
      if (lookahead == 'u') ADVANCE(1703);
      END_STATE();
    case 1096:
      if (lookahead == 'c') ADVANCE(1039);
      END_STATE();
    case 1097:
      if (lookahead == 'c') ADVANCE(1012);
      END_STATE();
    case 1098:
      if (lookahead == 'c') ADVANCE(1237);
      END_STATE();
    case 1099:
      if (lookahead == 'c') ADVANCE(1954);
      END_STATE();
    case 1100:
      if (lookahead == 'c') ADVANCE(1898);
      END_STATE();
    case 1101:
      if (lookahead == 'c') ADVANCE(1247);
      END_STATE();
    case 1102:
      if (lookahead == 'c') ADVANCE(1191);
      END_STATE();
    case 1103:
      if (lookahead == 'c') ADVANCE(1223);
      END_STATE();
    case 1104:
      if (lookahead == 'c') ADVANCE(2049);
      END_STATE();
    case 1105:
      if (lookahead == 'c') ADVANCE(989);
      if (lookahead == 'i') ADVANCE(2078);
      END_STATE();
    case 1106:
      if (lookahead == 'c') ADVANCE(989);
      if (lookahead == 'p') ADVANCE(1790);
      END_STATE();
    case 1107:
      if (lookahead == 'c') ADVANCE(1642);
      END_STATE();
    case 1108:
      if (lookahead == 'c') ADVANCE(1031);
      END_STATE();
    case 1109:
      if (lookahead == 'c') ADVANCE(1403);
      END_STATE();
    case 1110:
      if (lookahead == 'c') ADVANCE(1504);
      END_STATE();
    case 1111:
      if (lookahead == 'c') ADVANCE(991);
      if (lookahead == 'i') ADVANCE(2078);
      if (lookahead == 'p') ADVANCE(1153);
      END_STATE();
    case 1112:
      if (lookahead == 'c') ADVANCE(1989);
      END_STATE();
    case 1113:
      if (lookahead == 'c') ADVANCE(992);
      if (lookahead == 'h') ADVANCE(1046);
      if (lookahead == 'i') ADVANCE(2078);
      if (lookahead == 'l') ADVANCE(1444);
      if (lookahead == 'p') ADVANCE(1790);
      if (lookahead == 't') ADVANCE(993);
      END_STATE();
    case 1114:
      if (lookahead == 'd') ADVANCE(2225);
      END_STATE();
    case 1115:
      if (lookahead == 'd') ADVANCE(2292);
      END_STATE();
    case 1116:
      if (lookahead == 'd') ADVANCE(2293);
      END_STATE();
    case 1117:
      if (lookahead == 'd') ADVANCE(2222);
      END_STATE();
    case 1118:
      if (lookahead == 'd') ADVANCE(2317);
      END_STATE();
    case 1119:
      if (lookahead == 'd') ADVANCE(2147);
      END_STATE();
    case 1120:
      if (lookahead == 'd') ADVANCE(2221);
      END_STATE();
    case 1121:
      if (lookahead == 'd') ADVANCE(915);
      END_STATE();
    case 1122:
      if (lookahead == 'd') ADVANCE(907);
      END_STATE();
    case 1123:
      if (lookahead == 'd') ADVANCE(1548);
      END_STATE();
    case 1124:
      if (lookahead == 'd') ADVANCE(914);
      END_STATE();
    case 1125:
      if (lookahead == 'd') ADVANCE(923);
      END_STATE();
    case 1126:
      if (lookahead == 'd') ADVANCE(1385);
      END_STATE();
    case 1127:
      if (lookahead == 'd') ADVANCE(1385);
      if (lookahead == 'f') ADVANCE(1328);
      END_STATE();
    case 1128:
      if (lookahead == 'd') ADVANCE(1226);
      if (lookahead == 's') ADVANCE(1906);
      END_STATE();
    case 1129:
      if (lookahead == 'd') ADVANCE(959);
      END_STATE();
    case 1130:
      if (lookahead == 'd') ADVANCE(1394);
      END_STATE();
    case 1131:
      if (lookahead == 'd') ADVANCE(1407);
      if (lookahead == 'n') ADVANCE(1650);
      if (lookahead == 's') ADVANCE(1719);
      END_STATE();
    case 1132:
      if (lookahead == 'd') ADVANCE(1905);
      END_STATE();
    case 1133:
      if (lookahead == 'd') ADVANCE(1907);
      END_STATE();
    case 1134:
      if (lookahead == 'd') ADVANCE(1201);
      END_STATE();
    case 1135:
      if (lookahead == 'd') ADVANCE(1246);
      END_STATE();
    case 1136:
      if (lookahead == 'd') ADVANCE(1239);
      END_STATE();
    case 1137:
      if (lookahead == 'd') ADVANCE(1868);
      END_STATE();
    case 1138:
      if (lookahead == 'd') ADVANCE(1550);
      END_STATE();
    case 1139:
      if (lookahead == 'd') ADVANCE(1248);
      END_STATE();
    case 1140:
      if (lookahead == 'd') ADVANCE(1251);
      END_STATE();
    case 1141:
      if (lookahead == 'd') ADVANCE(1269);
      END_STATE();
    case 1142:
      if (lookahead == 'd') ADVANCE(1271);
      END_STATE();
    case 1143:
      if (lookahead == 'd') ADVANCE(1272);
      END_STATE();
    case 1144:
      if (lookahead == 'd') ADVANCE(1275);
      END_STATE();
    case 1145:
      if (lookahead == 'd') ADVANCE(918);
      END_STATE();
    case 1146:
      if (lookahead == 'd') ADVANCE(935);
      END_STATE();
    case 1147:
      if (lookahead == 'd') ADVANCE(1693);
      END_STATE();
    case 1148:
      if (lookahead == 'd') ADVANCE(913);
      END_STATE();
    case 1149:
      if (lookahead == 'e') ADVANCE(1485);
      END_STATE();
    case 1150:
      if (lookahead == 'e') ADVANCE(1843);
      END_STATE();
    case 1151:
      if (lookahead == 'e') ADVANCE(1540);
      if (lookahead == 'i') ADVANCE(1355);
      END_STATE();
    case 1152:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 1153:
      if (lookahead == 'e') ADVANCE(1080);
      if (lookahead == 'r') ADVANCE(1409);
      END_STATE();
    case 1154:
      if (lookahead == 'e') ADVANCE(2260);
      END_STATE();
    case 1155:
      if (lookahead == 'e') ADVANCE(2140);
      END_STATE();
    case 1156:
      if (lookahead == 'e') ADVANCE(2217);
      END_STATE();
    case 1157:
      if (lookahead == 'e') ADVANCE(2344);
      if (lookahead == 'n') ADVANCE(1108);
      END_STATE();
    case 1158:
      if (lookahead == 'e') ADVANCE(2263);
      END_STATE();
    case 1159:
      if (lookahead == 'e') ADVANCE(2345);
      END_STATE();
    case 1160:
      if (lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 1161:
      if (lookahead == 'e') ADVANCE(2274);
      END_STATE();
    case 1162:
      if (lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 1163:
      if (lookahead == 'e') ADVANCE(2236);
      END_STATE();
    case 1164:
      if (lookahead == 'e') ADVANCE(2145);
      END_STATE();
    case 1165:
      if (lookahead == 'e') ADVANCE(2151);
      END_STATE();
    case 1166:
      if (lookahead == 'e') ADVANCE(2281);
      END_STATE();
    case 1167:
      if (lookahead == 'e') ADVANCE(2137);
      END_STATE();
    case 1168:
      if (lookahead == 'e') ADVANCE(2276);
      END_STATE();
    case 1169:
      if (lookahead == 'e') ADVANCE(2311);
      END_STATE();
    case 1170:
      if (lookahead == 'e') ADVANCE(2312);
      END_STATE();
    case 1171:
      if (lookahead == 'e') ADVANCE(2294);
      END_STATE();
    case 1172:
      if (lookahead == 'e') ADVANCE(2313);
      END_STATE();
    case 1173:
      if (lookahead == 'e') ADVANCE(2306);
      END_STATE();
    case 1174:
      if (lookahead == 'e') ADVANCE(2128);
      END_STATE();
    case 1175:
      if (lookahead == 'e') ADVANCE(2305);
      END_STATE();
    case 1176:
      if (lookahead == 'e') ADVANCE(2218);
      END_STATE();
    case 1177:
      if (lookahead == 'e') ADVANCE(2194);
      END_STATE();
    case 1178:
      if (lookahead == 'e') ADVANCE(2116);
      END_STATE();
    case 1179:
      if (lookahead == 'e') ADVANCE(2314);
      END_STATE();
    case 1180:
      if (lookahead == 'e') ADVANCE(2132);
      END_STATE();
    case 1181:
      if (lookahead == 'e') ADVANCE(2134);
      END_STATE();
    case 1182:
      if (lookahead == 'e') ADVANCE(2133);
      END_STATE();
    case 1183:
      if (lookahead == 'e') ADVANCE(2127);
      END_STATE();
    case 1184:
      if (lookahead == 'e') ADVANCE(2272);
      END_STATE();
    case 1185:
      if (lookahead == 'e') ADVANCE(2136);
      END_STATE();
    case 1186:
      if (lookahead == 'e') ADVANCE(2299);
      END_STATE();
    case 1187:
      if (lookahead == 'e') ADVANCE(2184);
      END_STATE();
    case 1188:
      if (lookahead == 'e') ADVANCE(2130);
      END_STATE();
    case 1189:
      if (lookahead == 'e') ADVANCE(2131);
      END_STATE();
    case 1190:
      if (lookahead == 'e') ADVANCE(2289);
      END_STATE();
    case 1191:
      if (lookahead == 'e') ADVANCE(2237);
      END_STATE();
    case 1192:
      if (lookahead == 'e') ADVANCE(2139);
      END_STATE();
    case 1193:
      if (lookahead == 'e') ADVANCE(2138);
      END_STATE();
    case 1194:
      if (lookahead == 'e') ADVANCE(2297);
      END_STATE();
    case 1195:
      if (lookahead == 'e') ADVANCE(2117);
      END_STATE();
    case 1196:
      if (lookahead == 'e') ADVANCE(2129);
      END_STATE();
    case 1197:
      if (lookahead == 'e') ADVANCE(2125);
      END_STATE();
    case 1198:
      if (lookahead == 'e') ADVANCE(2266);
      END_STATE();
    case 1199:
      if (lookahead == 'e') ADVANCE(2119);
      END_STATE();
    case 1200:
      if (lookahead == 'e') ADVANCE(2315);
      END_STATE();
    case 1201:
      if (lookahead == 'e') ADVANCE(2208);
      END_STATE();
    case 1202:
      if (lookahead == 'e') ADVANCE(2135);
      END_STATE();
    case 1203:
      if (lookahead == 'e') ADVANCE(2118);
      END_STATE();
    case 1204:
      if (lookahead == 'e') ADVANCE(2124);
      END_STATE();
    case 1205:
      if (lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 1206:
      if (lookahead == 'e') ADVANCE(2298);
      END_STATE();
    case 1207:
      if (lookahead == 'e') ADVANCE(2204);
      END_STATE();
    case 1208:
      if (lookahead == 'e') ADVANCE(2212);
      END_STATE();
    case 1209:
      if (lookahead == 'e') ADVANCE(1350);
      END_STATE();
    case 1210:
      if (lookahead == 'e') ADVANCE(2199);
      END_STATE();
    case 1211:
      if (lookahead == 'e') ADVANCE(2200);
      END_STATE();
    case 1212:
      if (lookahead == 'e') ADVANCE(2207);
      END_STATE();
    case 1213:
      if (lookahead == 'e') ADVANCE(2282);
      END_STATE();
    case 1214:
      if (lookahead == 'e') ADVANCE(943);
      END_STATE();
    case 1215:
      if (lookahead == 'e') ADVANCE(2183);
      END_STATE();
    case 1216:
      if (lookahead == 'e') ADVANCE(2084);
      END_STATE();
    case 1217:
      if (lookahead == 'e') ADVANCE(2185);
      END_STATE();
    case 1218:
      if (lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 1219:
      if (lookahead == 'e') ADVANCE(2280);
      END_STATE();
    case 1220:
      if (lookahead == 'e') ADVANCE(1578);
      if (lookahead == 'l') ADVANCE(1404);
      if (lookahead == 'o') ADVANCE(1519);
      if (lookahead == 'u') ADVANCE(1479);
      END_STATE();
    case 1221:
      if (lookahead == 'e') ADVANCE(1327);
      END_STATE();
    case 1222:
      if (lookahead == 'e') ADVANCE(1327);
      if (lookahead == 'm') ADVANCE(1000);
      END_STATE();
    case 1223:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 1224:
      if (lookahead == 'e') ADVANCE(1789);
      END_STATE();
    case 1225:
      if (lookahead == 'e') ADVANCE(1827);
      END_STATE();
    case 1226:
      if (lookahead == 'e') ADVANCE(2019);
      END_STATE();
    case 1227:
      if (lookahead == 'e') ADVANCE(2014);
      END_STATE();
    case 1228:
      if (lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 1229:
      if (lookahead == 'e') ADVANCE(1762);
      END_STATE();
    case 1230:
      if (lookahead == 'e') ADVANCE(944);
      END_STATE();
    case 1231:
      if (lookahead == 'e') ADVANCE(1137);
      END_STATE();
    case 1232:
      if (lookahead == 'e') ADVANCE(1606);
      END_STATE();
    case 1233:
      if (lookahead == 'e') ADVANCE(1357);
      if (lookahead == 'i') ADVANCE(1590);
      if (lookahead == 'o') ADVANCE(982);
      END_STATE();
    case 1234:
      if (lookahead == 'e') ADVANCE(1357);
      if (lookahead == 'i') ADVANCE(1589);
      if (lookahead == 'o') ADVANCE(982);
      END_STATE();
    case 1235:
      if (lookahead == 'e') ADVANCE(1357);
      if (lookahead == 'o') ADVANCE(982);
      END_STATE();
    case 1236:
      if (lookahead == 'e') ADVANCE(1357);
      if (lookahead == 'o') ADVANCE(981);
      END_STATE();
    case 1237:
      if (lookahead == 'e') ADVANCE(948);
      END_STATE();
    case 1238:
      if (lookahead == 'e') ADVANCE(1122);
      END_STATE();
    case 1239:
      if (lookahead == 'e') ADVANCE(1751);
      END_STATE();
    case 1240:
      if (lookahead == 'e') ADVANCE(1329);
      if (lookahead == 'i') ADVANCE(1590);
      END_STATE();
    case 1241:
      if (lookahead == 'e') ADVANCE(1329);
      if (lookahead == 'i') ADVANCE(1876);
      END_STATE();
    case 1242:
      if (lookahead == 'e') ADVANCE(1852);
      END_STATE();
    case 1243:
      if (lookahead == 'e') ADVANCE(1112);
      END_STATE();
    case 1244:
      if (lookahead == 'e') ADVANCE(1124);
      END_STATE();
    case 1245:
      if (lookahead == 'e') ADVANCE(955);
      END_STATE();
    case 1246:
      if (lookahead == 'e') ADVANCE(1587);
      END_STATE();
    case 1247:
      if (lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 1248:
      if (lookahead == 'e') ADVANCE(1753);
      END_STATE();
    case 1249:
      if (lookahead == 'e') ADVANCE(1138);
      if (lookahead == 'i') ADVANCE(1646);
      END_STATE();
    case 1250:
      if (lookahead == 'e') ADVANCE(947);
      END_STATE();
    case 1251:
      if (lookahead == 'e') ADVANCE(1754);
      END_STATE();
    case 1252:
      if (lookahead == 'e') ADVANCE(984);
      END_STATE();
    case 1253:
      if (lookahead == 'e') ADVANCE(1829);
      END_STATE();
    case 1254:
      if (lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 1255:
      if (lookahead == 'e') ADVANCE(1443);
      END_STATE();
    case 1256:
      if (lookahead == 'e') ADVANCE(1094);
      END_STATE();
    case 1257:
      if (lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 1258:
      if (lookahead == 'e') ADVANCE(1538);
      END_STATE();
    case 1259:
      if (lookahead == 'e') ADVANCE(1831);
      END_STATE();
    case 1260:
      if (lookahead == 'e') ADVANCE(1832);
      END_STATE();
    case 1261:
      if (lookahead == 'e') ADVANCE(1118);
      END_STATE();
    case 1262:
      if (lookahead == 'e') ADVANCE(1609);
      END_STATE();
    case 1263:
      if (lookahead == 'e') ADVANCE(1148);
      END_STATE();
    case 1264:
      if (lookahead == 'e') ADVANCE(1861);
      END_STATE();
    case 1265:
      if (lookahead == 'e') ADVANCE(1836);
      END_STATE();
    case 1266:
      if (lookahead == 'e') ADVANCE(1767);
      END_STATE();
    case 1267:
      if (lookahead == 'e') ADVANCE(1837);
      END_STATE();
    case 1268:
      if (lookahead == 'e') ADVANCE(1838);
      END_STATE();
    case 1269:
      if (lookahead == 'e') ADVANCE(1812);
      END_STATE();
    case 1270:
      if (lookahead == 'e') ADVANCE(1889);
      END_STATE();
    case 1271:
      if (lookahead == 'e') ADVANCE(1813);
      END_STATE();
    case 1272:
      if (lookahead == 'e') ADVANCE(1761);
      END_STATE();
    case 1273:
      if (lookahead == 'e') ADVANCE(1894);
      END_STATE();
    case 1274:
      if (lookahead == 'e') ADVANCE(1768);
      END_STATE();
    case 1275:
      if (lookahead == 'e') ADVANCE(1770);
      END_STATE();
    case 1276:
      if (lookahead == 'e') ADVANCE(1261);
      END_STATE();
    case 1277:
      if (lookahead == 'e') ADVANCE(1847);
      END_STATE();
    case 1278:
      if (lookahead == 'e') ADVANCE(1608);
      END_STATE();
    case 1279:
      if (lookahead == 'e') ADVANCE(1090);
      END_STATE();
    case 1280:
      if (lookahead == 'e') ADVANCE(2030);
      END_STATE();
    case 1281:
      if (lookahead == 'e') ADVANCE(1916);
      END_STATE();
    case 1282:
      if (lookahead == 'e') ADVANCE(1083);
      END_STATE();
    case 1283:
      if (lookahead == 'e') ADVANCE(1594);
      END_STATE();
    case 1284:
      if (lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 1285:
      if (lookahead == 'e') ADVANCE(2044);
      END_STATE();
    case 1286:
      if (lookahead == 'e') ADVANCE(1777);
      END_STATE();
    case 1287:
      if (lookahead == 'e') ADVANCE(1099);
      END_STATE();
    case 1288:
      if (lookahead == 'e') ADVANCE(2024);
      END_STATE();
    case 1289:
      if (lookahead == 'e') ADVANCE(1500);
      END_STATE();
    case 1290:
      if (lookahead == 'e') ADVANCE(1100);
      END_STATE();
    case 1291:
      if (lookahead == 'e') ADVANCE(2025);
      END_STATE();
    case 1292:
      if (lookahead == 'e') ADVANCE(1596);
      END_STATE();
    case 1293:
      if (lookahead == 'e') ADVANCE(2026);
      END_STATE();
    case 1294:
      if (lookahead == 'e') ADVANCE(1484);
      END_STATE();
    case 1295:
      if (lookahead == 'e') ADVANCE(1600);
      END_STATE();
    case 1296:
      if (lookahead == 'e') ADVANCE(2027);
      if (lookahead == 'o') ADVANCE(1630);
      if (lookahead == 'r') ADVANCE(1032);
      if (lookahead == 'y') ADVANCE(1704);
      END_STATE();
    case 1297:
      if (lookahead == 'e') ADVANCE(1601);
      END_STATE();
    case 1298:
      if (lookahead == 'e') ADVANCE(2028);
      if (lookahead == 'r') ADVANCE(1043);
      if (lookahead == 'y') ADVANCE(1704);
      END_STATE();
    case 1299:
      if (lookahead == 'e') ADVANCE(2029);
      END_STATE();
    case 1300:
      if (lookahead == 'e') ADVANCE(1605);
      END_STATE();
    case 1301:
      if (lookahead == 'e') ADVANCE(962);
      END_STATE();
    case 1302:
      if (lookahead == 'e') ADVANCE(1079);
      END_STATE();
    case 1303:
      if (lookahead == 'e') ADVANCE(2031);
      END_STATE();
    case 1304:
      if (lookahead == 'e') ADVANCE(2283);
      END_STATE();
    case 1305:
      if (lookahead == 'e') ADVANCE(2085);
      END_STATE();
    case 1306:
      if (lookahead == 'e') ADVANCE(1802);
      END_STATE();
    case 1307:
      if (lookahead == 'e') ADVANCE(2032);
      if (lookahead == 'i') ADVANCE(1553);
      if (lookahead == 'y') ADVANCE(1733);
      END_STATE();
    case 1308:
      if (lookahead == 'e') ADVANCE(2086);
      END_STATE();
    case 1309:
      if (lookahead == 'e') ADVANCE(2033);
      if (lookahead == 'r') ADVANCE(1043);
      END_STATE();
    case 1310:
      if (lookahead == 'e') ADVANCE(2087);
      END_STATE();
    case 1311:
      if (lookahead == 'e') ADVANCE(2034);
      if (lookahead == 'r') ADVANCE(1043);
      END_STATE();
    case 1312:
      if (lookahead == 'e') ADVANCE(922);
      END_STATE();
    case 1313:
      if (lookahead == 'e') ADVANCE(2037);
      if (lookahead == 'r') ADVANCE(1043);
      END_STATE();
    case 1314:
      if (lookahead == 'e') ADVANCE(2038);
      if (lookahead == 'r') ADVANCE(1043);
      END_STATE();
    case 1315:
      if (lookahead == 'e') ADVANCE(2039);
      if (lookahead == 'r') ADVANCE(1043);
      END_STATE();
    case 1316:
      if (lookahead == 'e') ADVANCE(2035);
      END_STATE();
    case 1317:
      if (lookahead == 'e') ADVANCE(2036);
      END_STATE();
    case 1318:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 1319:
      if (lookahead == 'e') ADVANCE(934);
      END_STATE();
    case 1320:
      if (lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 1321:
      if (lookahead == 'e') ADVANCE(938);
      END_STATE();
    case 1322:
      if (lookahead == 'e') ADVANCE(939);
      END_STATE();
    case 1323:
      if (lookahead == 'e') ADVANCE(912);
      END_STATE();
    case 1324:
      if (lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 1325:
      if (lookahead == 'f') ADVANCE(1328);
      END_STATE();
    case 1326:
      if (lookahead == 'f') ADVANCE(898);
      END_STATE();
    case 1327:
      if (lookahead == 'f') ADVANCE(1086);
      END_STATE();
    case 1328:
      if (lookahead == 'f') ADVANCE(1279);
      END_STATE();
    case 1329:
      if (lookahead == 'f') ADVANCE(1880);
      END_STATE();
    case 1330:
      if (lookahead == 'f') ADVANCE(1880);
      if (lookahead == 'g') ADVANCE(985);
      END_STATE();
    case 1331:
      if (lookahead == 'f') ADVANCE(1338);
      END_STATE();
    case 1332:
      if (lookahead == 'f') ADVANCE(1334);
      END_STATE();
    case 1333:
      if (lookahead == 'f') ADVANCE(2021);
      END_STATE();
    case 1334:
      if (lookahead == 'f') ADVANCE(1990);
      END_STATE();
    case 1335:
      if (lookahead == 'f') ADVANCE(1706);
      END_STATE();
    case 1336:
      if (lookahead == 'f') ADVANCE(1797);
      if (lookahead == 'r') ADVANCE(1631);
      END_STATE();
    case 1337:
      if (lookahead == 'f') ADVANCE(1030);
      END_STATE();
    case 1338:
      if (lookahead == 'f') ADVANCE(1857);
      END_STATE();
    case 1339:
      if (lookahead == 'f') ADVANCE(1859);
      END_STATE();
    case 1340:
      if (lookahead == 'f') ADVANCE(1339);
      END_STATE();
    case 1341:
      if (lookahead == 'f') ADVANCE(1415);
      END_STATE();
    case 1342:
      if (lookahead == 'f') ADVANCE(1675);
      END_STATE();
    case 1343:
      if (lookahead == 'f') ADVANCE(1287);
      END_STATE();
    case 1344:
      if (lookahead == 'f') ADVANCE(1417);
      END_STATE();
    case 1345:
      if (lookahead == 'f') ADVANCE(1677);
      END_STATE();
    case 1346:
      if (lookahead == 'f') ADVANCE(1290);
      END_STATE();
    case 1347:
      if (lookahead == 'f') ADVANCE(1678);
      END_STATE();
    case 1348:
      if (lookahead == 'f') ADVANCE(1425);
      END_STATE();
    case 1349:
      if (lookahead == 'f') ADVANCE(1429);
      END_STATE();
    case 1350:
      if (lookahead == 'f') ADVANCE(1431);
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 1351:
      if (lookahead == 'f') ADVANCE(1343);
      END_STATE();
    case 1352:
      if (lookahead == 'f') ADVANCE(1346);
      END_STATE();
    case 1353:
      if (lookahead == 'g') ADVANCE(2256);
      END_STATE();
    case 1354:
      if (lookahead == 'g') ADVANCE(2203);
      END_STATE();
    case 1355:
      if (lookahead == 'g') ADVANCE(1374);
      END_STATE();
    case 1356:
      if (lookahead == 'g') ADVANCE(1828);
      END_STATE();
    case 1357:
      if (lookahead == 'g') ADVANCE(985);
      END_STATE();
    case 1358:
      if (lookahead == 'g') ADVANCE(1833);
      END_STATE();
    case 1359:
      if (lookahead == 'g') ADVANCE(1368);
      END_STATE();
    case 1360:
      if (lookahead == 'g') ADVANCE(1774);
      END_STATE();
    case 1361:
      if (lookahead == 'h') ADVANCE(2144);
      END_STATE();
    case 1362:
      if (lookahead == 'h') ADVANCE(2126);
      END_STATE();
    case 1363:
      if (lookahead == 'h') ADVANCE(2303);
      END_STATE();
    case 1364:
      if (lookahead == 'h') ADVANCE(2291);
      END_STATE();
    case 1365:
      if (lookahead == 'h') ADVANCE(2155);
      END_STATE();
    case 1366:
      if (lookahead == 'h') ADVANCE(1405);
      END_STATE();
    case 1367:
      if (lookahead == 'h') ADVANCE(1633);
      END_STATE();
    case 1368:
      if (lookahead == 'h') ADVANCE(1885);
      END_STATE();
    case 1369:
      if (lookahead == 'h') ADVANCE(1282);
      END_STATE();
    case 1370:
      if (lookahead == 'h') ADVANCE(1026);
      END_STATE();
    case 1371:
      if (lookahead == 'h') ADVANCE(1402);
      END_STATE();
    case 1372:
      if (lookahead == 'h') ADVANCE(1855);
      END_STATE();
    case 1373:
      if (lookahead == 'h') ADVANCE(1029);
      END_STATE();
    case 1374:
      if (lookahead == 'h') ADVANCE(1964);
      END_STATE();
    case 1375:
      if (lookahead == 'h') ADVANCE(1061);
      END_STATE();
    case 1376:
      if (lookahead == 'i') ADVANCE(1619);
      END_STATE();
    case 1377:
      if (lookahead == 'i') ADVANCE(1487);
      if (lookahead == 'o') ADVANCE(1581);
      END_STATE();
    case 1378:
      if (lookahead == 'i') ADVANCE(1355);
      END_STATE();
    case 1379:
      if (lookahead == 'i') ADVANCE(2078);
      END_STATE();
    case 1380:
      if (lookahead == 'i') ADVANCE(889);
      END_STATE();
    case 1381:
      if (lookahead == 'i') ADVANCE(1542);
      END_STATE();
    case 1382:
      if (lookahead == 'i') ADVANCE(2082);
      END_STATE();
    case 1383:
      if (lookahead == 'i') ADVANCE(888);
      END_STATE();
    case 1384:
      if (lookahead == 'i') ADVANCE(1152);
      END_STATE();
    case 1385:
      if (lookahead == 'i') ADVANCE(1878);
      END_STATE();
    case 1386:
      if (lookahead == 'i') ADVANCE(1278);
      END_STATE();
    case 1387:
      if (lookahead == 'i') ADVANCE(1583);
      END_STATE();
    case 1388:
      if (lookahead == 'i') ADVANCE(2022);
      if (lookahead == 'o') ADVANCE(1581);
      END_STATE();
    case 1389:
      if (lookahead == 'i') ADVANCE(1582);
      END_STATE();
    case 1390:
      if (lookahead == 'i') ADVANCE(1110);
      END_STATE();
    case 1391:
      if (lookahead == 'i') ADVANCE(1937);
      END_STATE();
    case 1392:
      if (lookahead == 'i') ADVANCE(1699);
      END_STATE();
    case 1393:
      if (lookahead == 'i') ADVANCE(1132);
      END_STATE();
    case 1394:
      if (lookahead == 'i') ADVANCE(1864);
      END_STATE();
    case 1395:
      if (lookahead == 'i') ADVANCE(1745);
      END_STATE();
    case 1396:
      if (lookahead == 'i') ADVANCE(1607);
      END_STATE();
    case 1397:
      if (lookahead == 'i') ADVANCE(1119);
      END_STATE();
    case 1398:
      if (lookahead == 'i') ADVANCE(1903);
      END_STATE();
    case 1399:
      if (lookahead == 'i') ADVANCE(1584);
      END_STATE();
    case 1400:
      if (lookahead == 'i') ADVANCE(1856);
      END_STATE();
    case 1401:
      if (lookahead == 'i') ADVANCE(1875);
      END_STATE();
    case 1402:
      if (lookahead == 'i') ADVANCE(1258);
      END_STATE();
    case 1403:
      if (lookahead == 'i') ADVANCE(1260);
      END_STATE();
    case 1404:
      if (lookahead == 'i') ADVANCE(1078);
      END_STATE();
    case 1405:
      if (lookahead == 'i') ADVANCE(2006);
      END_STATE();
    case 1406:
      if (lookahead == 'i') ADVANCE(2079);
      END_STATE();
    case 1407:
      if (lookahead == 'i') ADVANCE(1332);
      END_STATE();
    case 1408:
      if (lookahead == 'i') ADVANCE(1133);
      END_STATE();
    case 1409:
      if (lookahead == 'i') ADVANCE(1919);
      END_STATE();
    case 1410:
      if (lookahead == 'i') ADVANCE(2080);
      END_STATE();
    case 1411:
      if (lookahead == 'i') ADVANCE(1503);
      END_STATE();
    case 1412:
      if (lookahead == 'i') ADVANCE(1085);
      END_STATE();
    case 1413:
      if (lookahead == 'i') ADVANCE(2081);
      END_STATE();
    case 1414:
      if (lookahead == 'i') ADVANCE(1639);
      END_STATE();
    case 1415:
      if (lookahead == 'i') ADVANCE(1505);
      END_STATE();
    case 1416:
      if (lookahead == 'i') ADVANCE(1645);
      END_STATE();
    case 1417:
      if (lookahead == 'i') ADVANCE(1506);
      END_STATE();
    case 1418:
      if (lookahead == 'i') ADVANCE(1088);
      END_STATE();
    case 1419:
      if (lookahead == 'i') ADVANCE(1507);
      END_STATE();
    case 1420:
      if (lookahead == 'i') ADVANCE(1508);
      END_STATE();
    case 1421:
      if (lookahead == 'i') ADVANCE(1925);
      END_STATE();
    case 1422:
      if (lookahead == 'i') ADVANCE(1649);
      END_STATE();
    case 1423:
      if (lookahead == 'i') ADVANCE(1539);
      END_STATE();
    case 1424:
      if (lookahead == 'i') ADVANCE(1654);
      END_STATE();
    case 1425:
      if (lookahead == 'i') ADVANCE(1510);
      END_STATE();
    case 1426:
      if (lookahead == 'i') ADVANCE(1655);
      END_STATE();
    case 1427:
      if (lookahead == 'i') ADVANCE(1511);
      END_STATE();
    case 1428:
      if (lookahead == 'i') ADVANCE(1656);
      END_STATE();
    case 1429:
      if (lookahead == 'i') ADVANCE(1512);
      END_STATE();
    case 1430:
      if (lookahead == 'i') ADVANCE(1657);
      END_STATE();
    case 1431:
      if (lookahead == 'i') ADVANCE(1513);
      END_STATE();
    case 1432:
      if (lookahead == 'i') ADVANCE(1658);
      END_STATE();
    case 1433:
      if (lookahead == 'i') ADVANCE(1660);
      END_STATE();
    case 1434:
      if (lookahead == 'i') ADVANCE(1486);
      if (lookahead == 'o') ADVANCE(1581);
      END_STATE();
    case 1435:
      if (lookahead == 'i') ADVANCE(1486);
      if (lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 1436:
      if (lookahead == 'i') ADVANCE(1661);
      END_STATE();
    case 1437:
      if (lookahead == 'i') ADVANCE(1515);
      END_STATE();
    case 1438:
      if (lookahead == 'i') ADVANCE(1663);
      END_STATE();
    case 1439:
      if (lookahead == 'i') ADVANCE(1516);
      END_STATE();
    case 1440:
      if (lookahead == 'i') ADVANCE(1517);
      END_STATE();
    case 1441:
      if (lookahead == 'i') ADVANCE(1669);
      END_STATE();
    case 1442:
      if (lookahead == 'i') ADVANCE(1669);
      if (lookahead == 'o') ADVANCE(1360);
      END_STATE();
    case 1443:
      if (lookahead == 'i') ADVANCE(1359);
      END_STATE();
    case 1444:
      if (lookahead == 'i') ADVANCE(1140);
      END_STATE();
    case 1445:
      if (lookahead == 'i') ADVANCE(1558);
      END_STATE();
    case 1446:
      if (lookahead == 'i') ADVANCE(1561);
      END_STATE();
    case 1447:
      if (lookahead == 'i') ADVANCE(1871);
      END_STATE();
    case 1448:
      if (lookahead == 'i') ADVANCE(1966);
      END_STATE();
    case 1449:
      if (lookahead == 'i') ADVANCE(1958);
      if (lookahead == 'o') ADVANCE(1811);
      END_STATE();
    case 1450:
      if (lookahead == 'i') ADVANCE(1969);
      END_STATE();
    case 1451:
      if (lookahead == 'i') ADVANCE(1970);
      END_STATE();
    case 1452:
      if (lookahead == 'i') ADVANCE(1971);
      END_STATE();
    case 1453:
      if (lookahead == 'i') ADVANCE(1562);
      END_STATE();
    case 1454:
      if (lookahead == 'i') ADVANCE(1563);
      END_STATE();
    case 1455:
      if (lookahead == 'i') ADVANCE(1564);
      END_STATE();
    case 1456:
      if (lookahead == 'j') ADVANCE(1284);
      END_STATE();
    case 1457:
      if (lookahead == 'k') ADVANCE(900);
      END_STATE();
    case 1458:
      if (lookahead == 'k') ADVANCE(2224);
      END_STATE();
    case 1459:
      if (lookahead == 'k') ADVANCE(2308);
      END_STATE();
    case 1460:
      if (lookahead == 'k') ADVANCE(2275);
      END_STATE();
    case 1461:
      if (lookahead == 'k') ADVANCE(2223);
      END_STATE();
    case 1462:
      if (lookahead == 'k') ADVANCE(899);
      END_STATE();
    case 1463:
      if (lookahead == 'k') ADVANCE(2226);
      END_STATE();
    case 1464:
      if (lookahead == 'k') ADVANCE(1238);
      END_STATE();
    case 1465:
      if (lookahead == 'k') ADVANCE(1869);
      END_STATE();
    case 1466:
      if (lookahead == 'k') ADVANCE(1348);
      END_STATE();
    case 1467:
      if (lookahead == 'k') ADVANCE(1349);
      END_STATE();
    case 1468:
      if (lookahead == 'l') ADVANCE(1472);
      if (lookahead == 'n') ADVANCE(1381);
      if (lookahead == 'r') ADVANCE(1077);
      END_STATE();
    case 1469:
      if (lookahead == 'l') ADVANCE(1472);
      if (lookahead == 'n') ADVANCE(1453);
      END_STATE();
    case 1470:
      if (lookahead == 'l') ADVANCE(1472);
      if (lookahead == 'n') ADVANCE(1454);
      END_STATE();
    case 1471:
      if (lookahead == 'l') ADVANCE(2017);
      END_STATE();
    case 1472:
      if (lookahead == 'l') ADVANCE(2017);
      if (lookahead == 'p') ADVANCE(1370);
      if (lookahead == 'w') ADVANCE(983);
      END_STATE();
    case 1473:
      if (lookahead == 'l') ADVANCE(946);
      END_STATE();
    case 1474:
      if (lookahead == 'l') ADVANCE(2284);
      END_STATE();
    case 1475:
      if (lookahead == 'l') ADVANCE(951);
      END_STATE();
    case 1476:
      if (lookahead == 'l') ADVANCE(2259);
      END_STATE();
    case 1477:
      if (lookahead == 'l') ADVANCE(2267);
      END_STATE();
    case 1478:
      if (lookahead == 'l') ADVANCE(1473);
      END_STATE();
    case 1479:
      if (lookahead == 'l') ADVANCE(1473);
      if (lookahead == 'r') ADVANCE(1863);
      END_STATE();
    case 1480:
      if (lookahead == 'l') ADVANCE(1473);
      if (lookahead == 'r') ADVANCE(1866);
      END_STATE();
    case 1481:
      if (lookahead == 'l') ADVANCE(1473);
      if (lookahead == 'r') ADVANCE(1867);
      END_STATE();
    case 1482:
      if (lookahead == 'l') ADVANCE(1980);
      END_STATE();
    case 1483:
      if (lookahead == 'l') ADVANCE(1853);
      END_STATE();
    case 1484:
      if (lookahead == 'l') ADVANCE(988);
      END_STATE();
    case 1485:
      if (lookahead == 'l') ADVANCE(988);
      if (lookahead == 'p') ADVANCE(1232);
      END_STATE();
    case 1486:
      if (lookahead == 'l') ADVANCE(1154);
      END_STATE();
    case 1487:
      if (lookahead == 'l') ADVANCE(1154);
      if (lookahead == 'x') ADVANCE(1231);
      END_STATE();
    case 1488:
      if (lookahead == 'l') ADVANCE(1475);
      END_STATE();
    case 1489:
      if (lookahead == 'l') ADVANCE(1647);
      END_STATE();
    case 1490:
      if (lookahead == 'l') ADVANCE(994);
      END_STATE();
    case 1491:
      if (lookahead == 'l') ADVANCE(1471);
      if (lookahead == 'n') ADVANCE(1446);
      if (lookahead == 'r') ADVANCE(1076);
      END_STATE();
    case 1492:
      if (lookahead == 'l') ADVANCE(1471);
      if (lookahead == 'n') ADVANCE(1453);
      END_STATE();
    case 1493:
      if (lookahead == 'l') ADVANCE(1471);
      if (lookahead == 'n') ADVANCE(1455);
      END_STATE();
    case 1494:
      if (lookahead == 'l') ADVANCE(1670);
      END_STATE();
    case 1495:
      if (lookahead == 'l') ADVANCE(1522);
      END_STATE();
    case 1496:
      if (lookahead == 'l') ADVANCE(1006);
      END_STATE();
    case 1497:
      if (lookahead == 'l') ADVANCE(1161);
      END_STATE();
    case 1498:
      if (lookahead == 'l') ADVANCE(1676);
      END_STATE();
    case 1499:
      if (lookahead == 'l') ADVANCE(986);
      END_STATE();
    case 1500:
      if (lookahead == 'l') ADVANCE(998);
      END_STATE();
    case 1501:
      if (lookahead == 'l') ADVANCE(1015);
      END_STATE();
    case 1502:
      if (lookahead == 'l') ADVANCE(1171);
      END_STATE();
    case 1503:
      if (lookahead == 'l') ADVANCE(1177);
      END_STATE();
    case 1504:
      if (lookahead == 'l') ADVANCE(1183);
      END_STATE();
    case 1505:
      if (lookahead == 'l') ADVANCE(1245);
      END_STATE();
    case 1506:
      if (lookahead == 'l') ADVANCE(1184);
      END_STATE();
    case 1507:
      if (lookahead == 'l') ADVANCE(1186);
      END_STATE();
    case 1508:
      if (lookahead == 'l') ADVANCE(1187);
      END_STATE();
    case 1509:
      if (lookahead == 'l') ADVANCE(1292);
      END_STATE();
    case 1510:
      if (lookahead == 'l') ADVANCE(1190);
      END_STATE();
    case 1511:
      if (lookahead == 'l') ADVANCE(1206);
      END_STATE();
    case 1512:
      if (lookahead == 'l') ADVANCE(1210);
      END_STATE();
    case 1513:
      if (lookahead == 'l') ADVANCE(1211);
      END_STATE();
    case 1514:
      if (lookahead == 'l') ADVANCE(1212);
      END_STATE();
    case 1515:
      if (lookahead == 'l') ADVANCE(1215);
      END_STATE();
    case 1516:
      if (lookahead == 'l') ADVANCE(1217);
      END_STATE();
    case 1517:
      if (lookahead == 'l') ADVANCE(1218);
      END_STATE();
    case 1518:
      if (lookahead == 'l') ADVANCE(1635);
      END_STATE();
    case 1519:
      if (lookahead == 'l') ADVANCE(1635);
      if (lookahead == 'r') ADVANCE(1613);
      END_STATE();
    case 1520:
      if (lookahead == 'l') ADVANCE(952);
      END_STATE();
    case 1521:
      if (lookahead == 'l') ADVANCE(1025);
      END_STATE();
    case 1522:
      if (lookahead == 'l') ADVANCE(1065);
      END_STATE();
    case 1523:
      if (lookahead == 'l') ADVANCE(1981);
      END_STATE();
    case 1524:
      if (lookahead == 'l') ADVANCE(1910);
      END_STATE();
    case 1525:
      if (lookahead == 'l') ADVANCE(1520);
      END_STATE();
    case 1526:
      if (lookahead == 'l') ADVANCE(1401);
      END_STATE();
    case 1527:
      if (lookahead == 'l') ADVANCE(1982);
      END_STATE();
    case 1528:
      if (lookahead == 'l') ADVANCE(1913);
      END_STATE();
    case 1529:
      if (lookahead == 'l') ADVANCE(1653);
      END_STATE();
    case 1530:
      if (lookahead == 'l') ADVANCE(1659);
      END_STATE();
    case 1531:
      if (lookahead == 'l') ADVANCE(1659);
      if (lookahead == 'r') ADVANCE(1613);
      END_STATE();
    case 1532:
      if (lookahead == 'l') ADVANCE(1666);
      END_STATE();
    case 1533:
      if (lookahead == 'l') ADVANCE(1412);
      if (lookahead == 'o') ADVANCE(1530);
      if (lookahead == 'u') ADVANCE(1480);
      END_STATE();
    case 1534:
      if (lookahead == 'l') ADVANCE(1418);
      END_STATE();
    case 1535:
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'o') ADVANCE(1519);
      if (lookahead == 'u') ADVANCE(1481);
      END_STATE();
    case 1536:
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'o') ADVANCE(1518);
      END_STATE();
    case 1537:
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'u') ADVANCE(1478);
      END_STATE();
    case 1538:
      if (lookahead == 'l') ADVANCE(1146);
      END_STATE();
    case 1539:
      if (lookahead == 'l') ADVANCE(1323);
      END_STATE();
    case 1540:
      if (lookahead == 'm') ADVANCE(1640);
      if (lookahead == 'p') ADVANCE(1490);
      END_STATE();
    case 1541:
      if (lookahead == 'm') ADVANCE(1557);
      END_STATE();
    case 1542:
      if (lookahead == 'm') ADVANCE(1003);
      END_STATE();
    case 1543:
      if (lookahead == 'm') ADVANCE(997);
      END_STATE();
    case 1544:
      if (lookahead == 'm') ADVANCE(1155);
      END_STATE();
    case 1545:
      if (lookahead == 'm') ADVANCE(1000);
      END_STATE();
    case 1546:
      if (lookahead == 'm') ADVANCE(1160);
      END_STATE();
    case 1547:
      if (lookahead == 'm') ADVANCE(1001);
      END_STATE();
    case 1548:
      if (lookahead == 'm') ADVANCE(1672);
      END_STATE();
    case 1549:
      if (lookahead == 'm') ADVANCE(1277);
      if (lookahead == 'p') ADVANCE(1022);
      END_STATE();
    case 1550:
      if (lookahead == 'm') ADVANCE(1002);
      END_STATE();
    case 1551:
      if (lookahead == 'm') ADVANCE(1009);
      END_STATE();
    case 1552:
      if (lookahead == 'm') ADVANCE(1264);
      END_STATE();
    case 1553:
      if (lookahead == 'm') ADVANCE(1207);
      END_STATE();
    case 1554:
      if (lookahead == 'm') ADVANCE(1267);
      END_STATE();
    case 1555:
      if (lookahead == 'm') ADVANCE(1268);
      END_STATE();
    case 1556:
      if (lookahead == 'm') ADVANCE(1005);
      END_STATE();
    case 1557:
      if (lookahead == 'm') ADVANCE(1660);
      END_STATE();
    case 1558:
      if (lookahead == 'm') ADVANCE(1035);
      END_STATE();
    case 1559:
      if (lookahead == 'm') ADVANCE(1047);
      END_STATE();
    case 1560:
      if (lookahead == 'm') ADVANCE(1051);
      END_STATE();
    case 1561:
      if (lookahead == 'm') ADVANCE(1054);
      END_STATE();
    case 1562:
      if (lookahead == 'm') ADVANCE(1055);
      END_STATE();
    case 1563:
      if (lookahead == 'm') ADVANCE(1056);
      END_STATE();
    case 1564:
      if (lookahead == 'm') ADVANCE(1058);
      END_STATE();
    case 1565:
      if (lookahead == 'n') ADVANCE(940);
      END_STATE();
    case 1566:
      if (lookahead == 'n') ADVANCE(916);
      END_STATE();
    case 1567:
      if (lookahead == 'n') ADVANCE(2149);
      END_STATE();
    case 1568:
      if (lookahead == 'n') ADVANCE(2234);
      END_STATE();
    case 1569:
      if (lookahead == 'n') ADVANCE(2198);
      END_STATE();
    case 1570:
      if (lookahead == 'n') ADVANCE(2309);
      END_STATE();
    case 1571:
      if (lookahead == 'n') ADVANCE(2295);
      END_STATE();
    case 1572:
      if (lookahead == 'n') ADVANCE(2310);
      END_STATE();
    case 1573:
      if (lookahead == 'n') ADVANCE(2202);
      END_STATE();
    case 1574:
      if (lookahead == 'n') ADVANCE(2153);
      END_STATE();
    case 1575:
      if (lookahead == 'n') ADVANCE(1067);
      END_STATE();
    case 1576:
      if (lookahead == 'n') ADVANCE(2196);
      END_STATE();
    case 1577:
      if (lookahead == 'n') ADVANCE(2197);
      END_STATE();
    case 1578:
      if (lookahead == 'n') ADVANCE(1904);
      END_STATE();
    case 1579:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 1580:
      if (lookahead == 'n') ADVANCE(1108);
      END_STATE();
    case 1581:
      if (lookahead == 'n') ADVANCE(1879);
      if (lookahead == 'r') ADVANCE(1556);
      END_STATE();
    case 1582:
      if (lookahead == 'n') ADVANCE(1353);
      END_STATE();
    case 1583:
      if (lookahead == 'n') ADVANCE(1147);
      END_STATE();
    case 1584:
      if (lookahead == 'n') ADVANCE(1354);
      END_STATE();
    case 1585:
      if (lookahead == 'n') ADVANCE(958);
      END_STATE();
    case 1586:
      if (lookahead == 'n') ADVANCE(1848);
      END_STATE();
    case 1587:
      if (lookahead == 'n') ADVANCE(1109);
      END_STATE();
    case 1588:
      if (lookahead == 'n') ADVANCE(950);
      END_STATE();
    case 1589:
      if (lookahead == 'n') ADVANCE(1227);
      END_STATE();
    case 1590:
      if (lookahead == 'n') ADVANCE(1227);
      if (lookahead == 's') ADVANCE(1972);
      END_STATE();
    case 1591:
      if (lookahead == 'n') ADVANCE(1115);
      END_STATE();
    case 1592:
      if (lookahead == 'n') ADVANCE(1116);
      END_STATE();
    case 1593:
      if (lookahead == 'n') ADVANCE(1117);
      END_STATE();
    case 1594:
      if (lookahead == 'n') ADVANCE(1884);
      END_STATE();
    case 1595:
      if (lookahead == 'n') ADVANCE(1955);
      END_STATE();
    case 1596:
      if (lookahead == 'n') ADVANCE(1123);
      END_STATE();
    case 1597:
      if (lookahead == 'n') ADVANCE(1886);
      END_STATE();
    case 1598:
      if (lookahead == 'n') ADVANCE(1887);
      END_STATE();
    case 1599:
      if (lookahead == 'n') ADVANCE(1842);
      END_STATE();
    case 1600:
      if (lookahead == 'n') ADVANCE(1891);
      END_STATE();
    case 1601:
      if (lookahead == 'n') ADVANCE(1892);
      END_STATE();
    case 1602:
      if (lookahead == 'n') ADVANCE(1915);
      END_STATE();
    case 1603:
      if (lookahead == 'n') ADVANCE(1897);
      END_STATE();
    case 1604:
      if (lookahead == 'n') ADVANCE(1932);
      END_STATE();
    case 1605:
      if (lookahead == 'n') ADVANCE(1920);
      END_STATE();
    case 1606:
      if (lookahead == 'n') ADVANCE(1135);
      END_STATE();
    case 1607:
      if (lookahead == 'n') ADVANCE(1358);
      END_STATE();
    case 1608:
      if (lookahead == 'n') ADVANCE(1929);
      END_STATE();
    case 1609:
      if (lookahead == 'n') ADVANCE(1101);
      END_STATE();
    case 1610:
      if (lookahead == 'n') ADVANCE(954);
      END_STATE();
    case 1611:
      if (lookahead == 'n') ADVANCE(1914);
      END_STATE();
    case 1612:
      if (lookahead == 'n') ADVANCE(1102);
      END_STATE();
    case 1613:
      if (lookahead == 'n') ADVANCE(1286);
      END_STATE();
    case 1614:
      if (lookahead == 'n') ADVANCE(1445);
      END_STATE();
    case 1615:
      if (lookahead == 'n') ADVANCE(1862);
      END_STATE();
    case 1616:
      if (lookahead == 'n') ADVANCE(1872);
      END_STATE();
    case 1617:
      if (lookahead == 'n') ADVANCE(930);
      END_STATE();
    case 1618:
      if (lookahead == 'n') ADVANCE(1453);
      END_STATE();
    case 1619:
      if (lookahead == 'n') ADVANCE(1324);
      END_STATE();
    case 1620:
      if (lookahead == 'o') ADVANCE(2232);
      END_STATE();
    case 1621:
      if (lookahead == 'o') ADVANCE(982);
      END_STATE();
    case 1622:
      if (lookahead == 'o') ADVANCE(1765);
      END_STATE();
    case 1623:
      if (lookahead == 'o') ADVANCE(1849);
      END_STATE();
    case 1624:
      if (lookahead == 'o') ADVANCE(2015);
      END_STATE();
    case 1625:
      if (lookahead == 'o') ADVANCE(1360);
      END_STATE();
    case 1626:
      if (lookahead == 'o') ADVANCE(1541);
      END_STATE();
    case 1627:
      if (lookahead == 'o') ADVANCE(2040);
      END_STATE();
    case 1628:
      if (lookahead == 'o') ADVANCE(1566);
      END_STATE();
    case 1629:
      if (lookahead == 'o') ADVANCE(1331);
      END_STATE();
    case 1630:
      if (lookahead == 'o') ADVANCE(1524);
      END_STATE();
    case 1631:
      if (lookahead == 'o') ADVANCE(2013);
      END_STATE();
    case 1632:
      if (lookahead == 'o') ADVANCE(1984);
      END_STATE();
    case 1633:
      if (lookahead == 'o') ADVANCE(2010);
      END_STATE();
    case 1634:
      if (lookahead == 'o') ADVANCE(1991);
      END_STATE();
    case 1635:
      if (lookahead == 'o') ADVANCE(1750);
      END_STATE();
    case 1636:
      if (lookahead == 'o') ADVANCE(1488);
      END_STATE();
    case 1637:
      if (lookahead == 'o') ADVANCE(2011);
      END_STATE();
    case 1638:
      if (lookahead == 'o') ADVANCE(1585);
      END_STATE();
    case 1639:
      if (lookahead == 'o') ADVANCE(1567);
      END_STATE();
    case 1640:
      if (lookahead == 'o') ADVANCE(1918);
      END_STATE();
    case 1641:
      if (lookahead == 'o') ADVANCE(1752);
      END_STATE();
    case 1642:
      if (lookahead == 'o') ADVANCE(1529);
      END_STATE();
    case 1643:
      if (lookahead == 'o') ADVANCE(1588);
      END_STATE();
    case 1644:
      if (lookahead == 'o') ADVANCE(1700);
      END_STATE();
    case 1645:
      if (lookahead == 'o') ADVANCE(1568);
      END_STATE();
    case 1646:
      if (lookahead == 'o') ADVANCE(1569);
      END_STATE();
    case 1647:
      if (lookahead == 'o') ADVANCE(1644);
      END_STATE();
    case 1648:
      if (lookahead == 'o') ADVANCE(1570);
      END_STATE();
    case 1649:
      if (lookahead == 'o') ADVANCE(1571);
      END_STATE();
    case 1650:
      if (lookahead == 'o') ADVANCE(1795);
      END_STATE();
    case 1651:
      if (lookahead == 'o') ADVANCE(1680);
      END_STATE();
    case 1652:
      if (lookahead == 'o') ADVANCE(1572);
      END_STATE();
    case 1653:
      if (lookahead == 'o') ADVANCE(1757);
      END_STATE();
    case 1654:
      if (lookahead == 'o') ADVANCE(1573);
      END_STATE();
    case 1655:
      if (lookahead == 'o') ADVANCE(1574);
      END_STATE();
    case 1656:
      if (lookahead == 'o') ADVANCE(1575);
      END_STATE();
    case 1657:
      if (lookahead == 'o') ADVANCE(1576);
      END_STATE();
    case 1658:
      if (lookahead == 'o') ADVANCE(1577);
      END_STATE();
    case 1659:
      if (lookahead == 'o') ADVANCE(1759);
      END_STATE();
    case 1660:
      if (lookahead == 'o') ADVANCE(1579);
      END_STATE();
    case 1661:
      if (lookahead == 'o') ADVANCE(1599);
      END_STATE();
    case 1662:
      if (lookahead == 'o') ADVANCE(1760);
      END_STATE();
    case 1663:
      if (lookahead == 'o') ADVANCE(1610);
      END_STATE();
    case 1664:
      if (lookahead == 'o') ADVANCE(981);
      END_STATE();
    case 1665:
      if (lookahead == 'o') ADVANCE(1769);
      END_STATE();
    case 1666:
      if (lookahead == 'o') ADVANCE(1775);
      END_STATE();
    case 1667:
      if (lookahead == 'o') ADVANCE(1764);
      END_STATE();
    case 1668:
      if (lookahead == 'o') ADVANCE(2004);
      END_STATE();
    case 1669:
      if (lookahead == 'o') ADVANCE(1792);
      END_STATE();
    case 1670:
      if (lookahead == 'o') ADVANCE(1014);
      END_STATE();
    case 1671:
      if (lookahead == 'o') ADVANCE(1495);
      END_STATE();
    case 1672:
      if (lookahead == 'o') ADVANCE(1134);
      END_STATE();
    case 1673:
      if (lookahead == 'o') ADVANCE(1097);
      END_STATE();
    case 1674:
      if (lookahead == 'o') ADVANCE(1794);
      END_STATE();
    case 1675:
      if (lookahead == 'o') ADVANCE(1597);
      END_STATE();
    case 1676:
      if (lookahead == 'o') ADVANCE(1089);
      END_STATE();
    case 1677:
      if (lookahead == 'o') ADVANCE(1602);
      END_STATE();
    case 1678:
      if (lookahead == 'o') ADVANCE(1603);
      END_STATE();
    case 1679:
      if (lookahead == 'o') ADVANCE(1531);
      if (lookahead == 'u') ADVANCE(1481);
      END_STATE();
    case 1680:
      if (lookahead == 'o') ADVANCE(1736);
      END_STATE();
    case 1681:
      if (lookahead == 'o') ADVANCE(1528);
      END_STATE();
    case 1682:
      if (lookahead == 'o') ADVANCE(1986);
      END_STATE();
    case 1683:
      if (lookahead == 'o') ADVANCE(1525);
      END_STATE();
    case 1684:
      if (lookahead == 'o') ADVANCE(1530);
      if (lookahead == 'u') ADVANCE(1478);
      END_STATE();
    case 1685:
      if (lookahead == 'o') ADVANCE(1611);
      END_STATE();
    case 1686:
      if (lookahead == 'o') ADVANCE(1987);
      END_STATE();
    case 1687:
      if (lookahead == 'o') ADVANCE(1532);
      END_STATE();
    case 1688:
      if (lookahead == 'o') ADVANCE(1518);
      END_STATE();
    case 1689:
      if (lookahead == 'o') ADVANCE(1518);
      if (lookahead == 'u') ADVANCE(1478);
      END_STATE();
    case 1690:
      if (lookahead == 'o') ADVANCE(1808);
      END_STATE();
    case 1691:
      if (lookahead == 'o') ADVANCE(1681);
      END_STATE();
    case 1692:
      if (lookahead == 'o') ADVANCE(1617);
      END_STATE();
    case 1693:
      if (lookahead == 'o') ADVANCE(2016);
      END_STATE();
    case 1694:
      if (lookahead == 'o') ADVANCE(2041);
      END_STATE();
    case 1695:
      if (lookahead == 'o') ADVANCE(2042);
      END_STATE();
    case 1696:
      if (lookahead == 'o') ADVANCE(2043);
      END_STATE();
    case 1697:
      if (lookahead == 'o') ADVANCE(1967);
      END_STATE();
    case 1698:
      if (lookahead == 'p') ADVANCE(908);
      END_STATE();
    case 1699:
      if (lookahead == 'p') ADVANCE(2318);
      END_STATE();
    case 1700:
      if (lookahead == 'p') ADVANCE(2258);
      END_STATE();
    case 1701:
      if (lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 1702:
      if (lookahead == 'p') ADVANCE(1342);
      END_STATE();
    case 1703:
      if (lookahead == 'p') ADVANCE(1735);
      END_STATE();
    case 1704:
      if (lookahead == 'p') ADVANCE(1158);
      END_STATE();
    case 1705:
      if (lookahead == 'p') ADVANCE(1008);
      END_STATE();
    case 1706:
      if (lookahead == 'p') ADVANCE(1835);
      END_STATE();
    case 1707:
      if (lookahead == 'p') ADVANCE(1013);
      END_STATE();
    case 1708:
      if (lookahead == 'p') ADVANCE(1253);
      END_STATE();
    case 1709:
      if (lookahead == 'p') ADVANCE(1167);
      END_STATE();
    case 1710:
      if (lookahead == 'p') ADVANCE(1168);
      END_STATE();
    case 1711:
      if (lookahead == 'p') ADVANCE(1174);
      END_STATE();
    case 1712:
      if (lookahead == 'p') ADVANCE(1259);
      END_STATE();
    case 1713:
      if (lookahead == 'p') ADVANCE(1276);
      END_STATE();
    case 1714:
      if (lookahead == 'p') ADVANCE(1178);
      END_STATE();
    case 1715:
      if (lookahead == 'p') ADVANCE(1180);
      END_STATE();
    case 1716:
      if (lookahead == 'p') ADVANCE(1181);
      END_STATE();
    case 1717:
      if (lookahead == 'p') ADVANCE(1182);
      END_STATE();
    case 1718:
      if (lookahead == 'p') ADVANCE(1185);
      END_STATE();
    case 1719:
      if (lookahead == 'p') ADVANCE(1243);
      END_STATE();
    case 1720:
      if (lookahead == 'p') ADVANCE(1188);
      END_STATE();
    case 1721:
      if (lookahead == 'p') ADVANCE(1189);
      END_STATE();
    case 1722:
      if (lookahead == 'p') ADVANCE(1192);
      END_STATE();
    case 1723:
      if (lookahead == 'p') ADVANCE(1193);
      END_STATE();
    case 1724:
      if (lookahead == 'p') ADVANCE(1194);
      END_STATE();
    case 1725:
      if (lookahead == 'p') ADVANCE(1195);
      END_STATE();
    case 1726:
      if (lookahead == 'p') ADVANCE(1196);
      END_STATE();
    case 1727:
      if (lookahead == 'p') ADVANCE(1197);
      END_STATE();
    case 1728:
      if (lookahead == 'p') ADVANCE(1199);
      END_STATE();
    case 1729:
      if (lookahead == 'p') ADVANCE(1202);
      END_STATE();
    case 1730:
      if (lookahead == 'p') ADVANCE(1203);
      END_STATE();
    case 1731:
      if (lookahead == 'p') ADVANCE(1204);
      END_STATE();
    case 1732:
      if (lookahead == 'p') ADVANCE(1265);
      END_STATE();
    case 1733:
      if (lookahead == 'p') ADVANCE(1208);
      END_STATE();
    case 1734:
      if (lookahead == 'p') ADVANCE(1389);
      END_STATE();
    case 1735:
      if (lookahead == 'p') ADVANCE(1674);
      END_STATE();
    case 1736:
      if (lookahead == 'p') ADVANCE(1399);
      END_STATE();
    case 1737:
      if (lookahead == 'p') ADVANCE(1018);
      END_STATE();
    case 1738:
      if (lookahead == 'p') ADVANCE(1943);
      END_STATE();
    case 1739:
      if (lookahead == 'p') ADVANCE(1266);
      END_STATE();
    case 1740:
      if (lookahead == 'p') ADVANCE(1302);
      END_STATE();
    case 1741:
      if (lookahead == 'p') ADVANCE(1823);
      END_STATE();
    case 1742:
      if (lookahead == 'p') ADVANCE(1804);
      END_STATE();
    case 1743:
      if (lookahead == 'p') ADVANCE(1345);
      END_STATE();
    case 1744:
      if (lookahead == 'p') ADVANCE(1049);
      END_STATE();
    case 1745:
      if (lookahead == 'p') ADVANCE(921);
      END_STATE();
    case 1746:
      if (lookahead == 'p') ADVANCE(1347);
      END_STATE();
    case 1747:
      if (lookahead == 'p') ADVANCE(1824);
      END_STATE();
    case 1748:
      if (lookahead == 'p') ADVANCE(1825);
      END_STATE();
    case 1749:
      if (lookahead == 'r') ADVANCE(1136);
      END_STATE();
    case 1750:
      if (lookahead == 'r') ADVANCE(2231);
      END_STATE();
    case 1751:
      if (lookahead == 'r') ADVANCE(910);
      END_STATE();
    case 1752:
      if (lookahead == 'r') ADVANCE(2302);
      END_STATE();
    case 1753:
      if (lookahead == 'r') ADVANCE(2270);
      END_STATE();
    case 1754:
      if (lookahead == 'r') ADVANCE(2307);
      END_STATE();
    case 1755:
      if (lookahead == 'r') ADVANCE(2285);
      END_STATE();
    case 1756:
      if (lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 1757:
      if (lookahead == 'r') ADVANCE(2254);
      END_STATE();
    case 1758:
      if (lookahead == 'r') ADVANCE(2268);
      END_STATE();
    case 1759:
      if (lookahead == 'r') ADVANCE(2230);
      END_STATE();
    case 1760:
      if (lookahead == 'r') ADVANCE(2301);
      END_STATE();
    case 1761:
      if (lookahead == 'r') ADVANCE(2269);
      END_STATE();
    case 1762:
      if (lookahead == 'r') ADVANCE(1521);
      END_STATE();
    case 1763:
      if (lookahead == 'r') ADVANCE(1632);
      END_STATE();
    case 1764:
      if (lookahead == 'r') ADVANCE(2048);
      END_STATE();
    case 1765:
      if (lookahead == 'r') ADVANCE(1382);
      END_STATE();
    case 1766:
      if (lookahead == 'r') ADVANCE(1934);
      END_STATE();
    case 1767:
      if (lookahead == 'r') ADVANCE(956);
      END_STATE();
    case 1768:
      if (lookahead == 'r') ADVANCE(1337);
      END_STATE();
    case 1769:
      if (lookahead == 'r') ADVANCE(949);
      END_STATE();
    case 1770:
      if (lookahead == 'r') ADVANCE(945);
      END_STATE();
    case 1771:
      if (lookahead == 'r') ADVANCE(1637);
      END_STATE();
    case 1772:
      if (lookahead == 'r') ADVANCE(1007);
      END_STATE();
    case 1773:
      if (lookahead == 'r') ADVANCE(1163);
      END_STATE();
    case 1774:
      if (lookahead == 'r') ADVANCE(1242);
      END_STATE();
    case 1775:
      if (lookahead == 'r') ADVANCE(1839);
      END_STATE();
    case 1776:
      if (lookahead == 'r') ADVANCE(1953);
      END_STATE();
    case 1777:
      if (lookahead == 'r') ADVANCE(1254);
      END_STATE();
    case 1778:
      if (lookahead == 'r') ADVANCE(1165);
      END_STATE();
    case 1779:
      if (lookahead == 'r') ADVANCE(1166);
      END_STATE();
    case 1780:
      if (lookahead == 'r') ADVANCE(1228);
      END_STATE();
    case 1781:
      if (lookahead == 'r') ADVANCE(1205);
      END_STATE();
    case 1782:
      if (lookahead == 'r') ADVANCE(1209);
      END_STATE();
    case 1783:
      if (lookahead == 'r') ADVANCE(1213);
      END_STATE();
    case 1784:
      if (lookahead == 'r') ADVANCE(1214);
      END_STATE();
    case 1785:
      if (lookahead == 'r') ADVANCE(1216);
      END_STATE();
    case 1786:
      if (lookahead == 'r') ADVANCE(1219);
      END_STATE();
    case 1787:
      if (lookahead == 'r') ADVANCE(1386);
      END_STATE();
    case 1788:
      if (lookahead == 'r') ADVANCE(1386);
      if (lookahead == 'v') ADVANCE(1229);
      END_STATE();
    case 1789:
      if (lookahead == 'r') ADVANCE(1851);
      END_STATE();
    case 1790:
      if (lookahead == 'r') ADVANCE(1409);
      END_STATE();
    case 1791:
      if (lookahead == 'r') ADVANCE(1262);
      END_STATE();
    case 1792:
      if (lookahead == 'r') ADVANCE(1398);
      END_STATE();
    case 1793:
      if (lookahead == 'r') ADVANCE(1911);
      END_STATE();
    case 1794:
      if (lookahead == 'r') ADVANCE(1921);
      END_STATE();
    case 1795:
      if (lookahead == 'r') ADVANCE(1551);
      END_STATE();
    case 1796:
      if (lookahead == 'r') ADVANCE(1545);
      END_STATE();
    case 1797:
      if (lookahead == 'r') ADVANCE(1024);
      END_STATE();
    case 1798:
      if (lookahead == 'r') ADVANCE(1283);
      END_STATE();
    case 1799:
      if (lookahead == 'r') ADVANCE(1283);
      if (lookahead == 't') ADVANCE(1361);
      END_STATE();
    case 1800:
      if (lookahead == 'r') ADVANCE(1283);
      if (lookahead == 't') ADVANCE(1361);
      if (lookahead == 'u') ADVANCE(1854);
      END_STATE();
    case 1801:
      if (lookahead == 'r') ADVANCE(1682);
      END_STATE();
    case 1802:
      if (lookahead == 'r') ADVANCE(1870);
      END_STATE();
    case 1803:
      if (lookahead == 'r') ADVANCE(1683);
      END_STATE();
    case 1804:
      if (lookahead == 'r') ADVANCE(1421);
      END_STATE();
    case 1805:
      if (lookahead == 'r') ADVANCE(1295);
      END_STATE();
    case 1806:
      if (lookahead == 'r') ADVANCE(1038);
      END_STATE();
    case 1807:
      if (lookahead == 'r') ADVANCE(1033);
      END_STATE();
    case 1808:
      if (lookahead == 'r') ADVANCE(1141);
      END_STATE();
    case 1809:
      if (lookahead == 'r') ADVANCE(1297);
      END_STATE();
    case 1810:
      if (lookahead == 'r') ADVANCE(1037);
      END_STATE();
    case 1811:
      if (lookahead == 'r') ADVANCE(1144);
      END_STATE();
    case 1812:
      if (lookahead == 'r') ADVANCE(909);
      END_STATE();
    case 1813:
      if (lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 1814:
      if (lookahead == 'r') ADVANCE(1952);
      END_STATE();
    case 1815:
      if (lookahead == 'r') ADVANCE(1304);
      END_STATE();
    case 1816:
      if (lookahead == 'r') ADVANCE(1305);
      END_STATE();
    case 1817:
      if (lookahead == 'r') ADVANCE(1308);
      END_STATE();
    case 1818:
      if (lookahead == 'r') ADVANCE(1310);
      END_STATE();
    case 1819:
      if (lookahead == 'r') ADVANCE(931);
      END_STATE();
    case 1820:
      if (lookahead == 'r') ADVANCE(1962);
      END_STATE();
    case 1821:
      if (lookahead == 'r') ADVANCE(1060);
      END_STATE();
    case 1822:
      if (lookahead == 'r') ADVANCE(1963);
      END_STATE();
    case 1823:
      if (lookahead == 'r') ADVANCE(1448);
      END_STATE();
    case 1824:
      if (lookahead == 'r') ADVANCE(1450);
      END_STATE();
    case 1825:
      if (lookahead == 'r') ADVANCE(1451);
      END_STATE();
    case 1826:
      if (lookahead == 'r') ADVANCE(1452);
      END_STATE();
    case 1827:
      if (lookahead == 's') ADVANCE(2346);
      END_STATE();
    case 1828:
      if (lookahead == 's') ADVANCE(2157);
      END_STATE();
    case 1829:
      if (lookahead == 's') ADVANCE(2115);
      END_STATE();
    case 1830:
      if (lookahead == 's') ADVANCE(2114);
      END_STATE();
    case 1831:
      if (lookahead == 's') ADVANCE(2113);
      END_STATE();
    case 1832:
      if (lookahead == 's') ADVANCE(2180);
      END_STATE();
    case 1833:
      if (lookahead == 's') ADVANCE(2264);
      END_STATE();
    case 1834:
      if (lookahead == 's') ADVANCE(2193);
      END_STATE();
    case 1835:
      if (lookahead == 's') ADVANCE(2255);
      END_STATE();
    case 1836:
      if (lookahead == 's') ADVANCE(2110);
      END_STATE();
    case 1837:
      if (lookahead == 's') ADVANCE(2216);
      END_STATE();
    case 1838:
      if (lookahead == 's') ADVANCE(2191);
      END_STATE();
    case 1839:
      if (lookahead == 's') ADVANCE(2121);
      END_STATE();
    case 1840:
      if (lookahead == 's') ADVANCE(1464);
      END_STATE();
    case 1841:
      if (lookahead == 's') ADVANCE(1464);
      if (lookahead == 'x') ADVANCE(901);
      END_STATE();
    case 1842:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 1843:
      if (lookahead == 's') ADVANCE(1372);
      END_STATE();
    case 1844:
      if (lookahead == 's') ADVANCE(1068);
      END_STATE();
    case 1845:
      if (lookahead == 's') ADVANCE(1906);
      END_STATE();
    case 1846:
      if (lookahead == 's') ADVANCE(1466);
      END_STATE();
    case 1847:
      if (lookahead == 's') ADVANCE(1362);
      END_STATE();
    case 1848:
      if (lookahead == 's') ADVANCE(1705);
      END_STATE();
    case 1849:
      if (lookahead == 's') ADVANCE(1391);
      END_STATE();
    case 1850:
      if (lookahead == 's') ADVANCE(1367);
      END_STATE();
    case 1851:
      if (lookahead == 's') ADVANCE(1414);
      END_STATE();
    case 1852:
      if (lookahead == 's') ADVANCE(1844);
      END_STATE();
    case 1853:
      if (lookahead == 's') ADVANCE(1159);
      END_STATE();
    case 1854:
      if (lookahead == 's') ADVANCE(1301);
      END_STATE();
    case 1855:
      if (lookahead == 's') ADVANCE(1281);
      END_STATE();
    case 1856:
      if (lookahead == 's') ADVANCE(1933);
      END_STATE();
    case 1857:
      if (lookahead == 's') ADVANCE(1270);
      END_STATE();
    case 1858:
      if (lookahead == 's') ADVANCE(1198);
      END_STATE();
    case 1859:
      if (lookahead == 's') ADVANCE(1273);
      END_STATE();
    case 1860:
      if (lookahead == 's') ADVANCE(1909);
      END_STATE();
    case 1861:
      if (lookahead == 's') ADVANCE(953);
      END_STATE();
    case 1862:
      if (lookahead == 's') ADVANCE(1707);
      END_STATE();
    case 1863:
      if (lookahead == 's') ADVANCE(1641);
      END_STATE();
    case 1864:
      if (lookahead == 's') ADVANCE(1917);
      END_STATE();
    case 1865:
      if (lookahead == 's') ADVANCE(1713);
      END_STATE();
    case 1866:
      if (lookahead == 's') ADVANCE(1662);
      END_STATE();
    case 1867:
      if (lookahead == 's') ADVANCE(1665);
      END_STATE();
    case 1868:
      if (lookahead == 's') ADVANCE(1410);
      END_STATE();
    case 1869:
      if (lookahead == 's') ADVANCE(1686);
      END_STATE();
    case 1870:
      if (lookahead == 's') ADVANCE(1426);
      END_STATE();
    case 1871:
      if (lookahead == 's') ADVANCE(1436);
      END_STATE();
    case 1872:
      if (lookahead == 's') ADVANCE(1744);
      END_STATE();
    case 1873:
      if (lookahead == 's') ADVANCE(1871);
      END_STATE();
    case 1874:
      if (lookahead == 's') ADVANCE(1467);
      END_STATE();
    case 1875:
      if (lookahead == 's') ADVANCE(1057);
      END_STATE();
    case 1876:
      if (lookahead == 's') ADVANCE(1972);
      END_STATE();
    case 1877:
      if (lookahead == 's') ADVANCE(1973);
      END_STATE();
    case 1878:
      if (lookahead == 't') ADVANCE(890);
      END_STATE();
    case 1879:
      if (lookahead == 't') ADVANCE(2233);
      END_STATE();
    case 1880:
      if (lookahead == 't') ADVANCE(1069);
      END_STATE();
    case 1881:
      if (lookahead == 't') ADVANCE(2227);
      END_STATE();
    case 1882:
      if (lookahead == 't') ADVANCE(2287);
      END_STATE();
    case 1883:
      if (lookahead == 't') ADVANCE(2235);
      END_STATE();
    case 1884:
      if (lookahead == 't') ADVANCE(2316);
      END_STATE();
    case 1885:
      if (lookahead == 't') ADVANCE(2304);
      END_STATE();
    case 1886:
      if (lookahead == 't') ADVANCE(2123);
      END_STATE();
    case 1887:
      if (lookahead == 't') ADVANCE(2279);
      END_STATE();
    case 1888:
      if (lookahead == 't') ADVANCE(2319);
      END_STATE();
    case 1889:
      if (lookahead == 't') ADVANCE(2182);
      END_STATE();
    case 1890:
      if (lookahead == 't') ADVANCE(2120);
      END_STATE();
    case 1891:
      if (lookahead == 't') ADVANCE(2219);
      END_STATE();
    case 1892:
      if (lookahead == 't') ADVANCE(2220);
      END_STATE();
    case 1893:
      if (lookahead == 't') ADVANCE(2320);
      END_STATE();
    case 1894:
      if (lookahead == 't') ADVANCE(2206);
      END_STATE();
    case 1895:
      if (lookahead == 't') ADVANCE(2228);
      END_STATE();
    case 1896:
      if (lookahead == 't') ADVANCE(892);
      END_STATE();
    case 1897:
      if (lookahead == 't') ADVANCE(2122);
      END_STATE();
    case 1898:
      if (lookahead == 't') ADVANCE(2286);
      END_STATE();
    case 1899:
      if (lookahead == 't') ADVANCE(906);
      END_STATE();
    case 1900:
      if (lookahead == 't') ADVANCE(1249);
      END_STATE();
    case 1901:
      if (lookahead == 't') ADVANCE(1988);
      END_STATE();
    case 1902:
      if (lookahead == 't') ADVANCE(1361);
      END_STATE();
    case 1903:
      if (lookahead == 't') ADVANCE(2045);
      END_STATE();
    case 1904:
      if (lookahead == 't') ADVANCE(1773);
      END_STATE();
    case 1905:
      if (lookahead == 't') ADVANCE(1363);
      END_STATE();
    case 1906:
      if (lookahead == 't') ADVANCE(1028);
      END_STATE();
    case 1907:
      if (lookahead == 't') ADVANCE(1364);
      END_STATE();
    case 1908:
      if (lookahead == 't') ADVANCE(1365);
      END_STATE();
    case 1909:
      if (lookahead == 't') ADVANCE(1772);
      END_STATE();
    case 1910:
      if (lookahead == 't') ADVANCE(1392);
      END_STATE();
    case 1911:
      if (lookahead == 't') ADVANCE(1390);
      END_STATE();
    case 1912:
      if (lookahead == 't') ADVANCE(1965);
      END_STATE();
    case 1913:
      if (lookahead == 't') ADVANCE(1395);
      END_STATE();
    case 1914:
      if (lookahead == 't') ADVANCE(1004);
      END_STATE();
    case 1915:
      if (lookahead == 't') ADVANCE(1830);
      END_STATE();
    case 1916:
      if (lookahead == 't') ADVANCE(1928);
      END_STATE();
    case 1917:
      if (lookahead == 't') ADVANCE(1044);
      END_STATE();
    case 1918:
      if (lookahead == 't') ADVANCE(1230);
      END_STATE();
    case 1919:
      if (lookahead == 't') ADVANCE(1312);
      END_STATE();
    case 1920:
      if (lookahead == 't') ADVANCE(1842);
      END_STATE();
    case 1921:
      if (lookahead == 't') ADVANCE(1257);
      END_STATE();
    case 1922:
      if (lookahead == 't') ADVANCE(1173);
      END_STATE();
    case 1923:
      if (lookahead == 't') ADVANCE(1263);
      END_STATE();
    case 1924:
      if (lookahead == 't') ADVANCE(1250);
      END_STATE();
    case 1925:
      if (lookahead == 't') ADVANCE(1200);
      END_STATE();
    case 1926:
      if (lookahead == 't') ADVANCE(1543);
      END_STATE();
    case 1927:
      if (lookahead == 't') ADVANCE(1930);
      END_STATE();
    case 1928:
      if (lookahead == 't') ADVANCE(1396);
      END_STATE();
    case 1929:
      if (lookahead == 't') ADVANCE(1048);
      END_STATE();
    case 1930:
      if (lookahead == 't') ADVANCE(1648);
      END_STATE();
    case 1931:
      if (lookahead == 't') ADVANCE(1652);
      END_STATE();
    case 1932:
      if (lookahead == 't') ADVANCE(1274);
      END_STATE();
    case 1933:
      if (lookahead == 't') ADVANCE(1667);
      END_STATE();
    case 1934:
      if (lookahead == 't') ADVANCE(941);
      END_STATE();
    case 1935:
      if (lookahead == 't') ADVANCE(2229);
      END_STATE();
    case 1936:
      if (lookahead == 't') ADVANCE(1992);
      END_STATE();
    case 1937:
      if (lookahead == 't') ADVANCE(1416);
      END_STATE();
    case 1938:
      if (lookahead == 't') ADVANCE(1931);
      END_STATE();
    case 1939:
      if (lookahead == 't') ADVANCE(1993);
      END_STATE();
    case 1940:
      if (lookahead == 't') ADVANCE(1422);
      END_STATE();
    case 1941:
      if (lookahead == 't') ADVANCE(1994);
      END_STATE();
    case 1942:
      if (lookahead == 't') ADVANCE(1424);
      END_STATE();
    case 1943:
      if (lookahead == 't') ADVANCE(1291);
      END_STATE();
    case 1944:
      if (lookahead == 't') ADVANCE(1995);
      END_STATE();
    case 1945:
      if (lookahead == 't') ADVANCE(1996);
      END_STATE();
    case 1946:
      if (lookahead == 't') ADVANCE(1428);
      END_STATE();
    case 1947:
      if (lookahead == 't') ADVANCE(2000);
      END_STATE();
    case 1948:
      if (lookahead == 't') ADVANCE(1430);
      END_STATE();
    case 1949:
      if (lookahead == 't') ADVANCE(1432);
      END_STATE();
    case 1950:
      if (lookahead == 't') ADVANCE(1433);
      END_STATE();
    case 1951:
      if (lookahead == 't') ADVANCE(1438);
      END_STATE();
    case 1952:
      if (lookahead == 't') ADVANCE(2067);
      END_STATE();
    case 1953:
      if (lookahead == 't') ADVANCE(2070);
      END_STATE();
    case 1954:
      if (lookahead == 't') ADVANCE(896);
      END_STATE();
    case 1955:
      if (lookahead == 't') ADVANCE(917);
      END_STATE();
    case 1956:
      if (lookahead == 't') ADVANCE(1559);
      END_STATE();
    case 1957:
      if (lookahead == 't') ADVANCE(2001);
      END_STATE();
    case 1958:
      if (lookahead == 't') ADVANCE(1560);
      END_STATE();
    case 1959:
      if (lookahead == 't') ADVANCE(2002);
      END_STATE();
    case 1960:
      if (lookahead == 't') ADVANCE(920);
      END_STATE();
    case 1961:
      if (lookahead == 't') ADVANCE(2003);
      END_STATE();
    case 1962:
      if (lookahead == 't') ADVANCE(928);
      END_STATE();
    case 1963:
      if (lookahead == 't') ADVANCE(929);
      END_STATE();
    case 1964:
      if (lookahead == 't') ADVANCE(1070);
      END_STATE();
    case 1965:
      if (lookahead == 't') ADVANCE(1692);
      END_STATE();
    case 1966:
      if (lookahead == 't') ADVANCE(1318);
      END_STATE();
    case 1967:
      if (lookahead == 't') ADVANCE(1052);
      END_STATE();
    case 1968:
      if (lookahead == 't') ADVANCE(1319);
      END_STATE();
    case 1969:
      if (lookahead == 't') ADVANCE(1320);
      END_STATE();
    case 1970:
      if (lookahead == 't') ADVANCE(1321);
      END_STATE();
    case 1971:
      if (lookahead == 't') ADVANCE(1322);
      END_STATE();
    case 1972:
      if (lookahead == 't') ADVANCE(891);
      END_STATE();
    case 1973:
      if (lookahead == 't') ADVANCE(1821);
      END_STATE();
    case 1974:
      if (lookahead == 't') ADVANCE(893);
      END_STATE();
    case 1975:
      if (lookahead == 'u') ADVANCE(987);
      END_STATE();
    case 1976:
      if (lookahead == 'u') ADVANCE(1380);
      END_STATE();
    case 1977:
      if (lookahead == 'u') ADVANCE(1912);
      END_STATE();
    case 1978:
      if (lookahead == 'u') ADVANCE(1478);
      END_STATE();
    case 1979:
      if (lookahead == 'u') ADVANCE(1383);
      END_STATE();
    case 1980:
      if (lookahead == 'u') ADVANCE(1169);
      END_STATE();
    case 1981:
      if (lookahead == 'u') ADVANCE(1170);
      END_STATE();
    case 1982:
      if (lookahead == 'u') ADVANCE(1179);
      END_STATE();
    case 1983:
      if (lookahead == 'u') ADVANCE(1496);
      END_STATE();
    case 1984:
      if (lookahead == 'u') ADVANCE(1591);
      END_STATE();
    case 1985:
      if (lookahead == 'u') ADVANCE(1854);
      END_STATE();
    case 1986:
      if (lookahead == 'u') ADVANCE(1592);
      END_STATE();
    case 1987:
      if (lookahead == 'u') ADVANCE(1593);
      END_STATE();
    case 1988:
      if (lookahead == 'u') ADVANCE(1778);
      END_STATE();
    case 1989:
      if (lookahead == 'u') ADVANCE(1501);
      END_STATE();
    case 1990:
      if (lookahead == 'u') ADVANCE(1858);
      END_STATE();
    case 1991:
      if (lookahead == 'u') ADVANCE(1598);
      END_STATE();
    case 1992:
      if (lookahead == 'u') ADVANCE(1780);
      END_STATE();
    case 1993:
      if (lookahead == 'u') ADVANCE(1782);
      END_STATE();
    case 1994:
      if (lookahead == 'u') ADVANCE(1784);
      END_STATE();
    case 1995:
      if (lookahead == 'u') ADVANCE(1785);
      END_STATE();
    case 1996:
      if (lookahead == 'u') ADVANCE(1786);
      END_STATE();
    case 1997:
      if (lookahead == 'u') ADVANCE(1927);
      END_STATE();
    case 1998:
      if (lookahead == 'u') ADVANCE(1938);
      END_STATE();
    case 1999:
      if (lookahead == 'u') ADVANCE(1480);
      END_STATE();
    case 2000:
      if (lookahead == 'u') ADVANCE(1815);
      END_STATE();
    case 2001:
      if (lookahead == 'u') ADVANCE(1816);
      END_STATE();
    case 2002:
      if (lookahead == 'u') ADVANCE(1817);
      END_STATE();
    case 2003:
      if (lookahead == 'u') ADVANCE(1818);
      END_STATE();
    case 2004:
      if (lookahead == 'u') ADVANCE(1968);
      END_STATE();
    case 2005:
      if (lookahead == 'v') ADVANCE(1252);
      END_STATE();
    case 2006:
      if (lookahead == 'v') ADVANCE(1164);
      END_STATE();
    case 2007:
      if (lookahead == 'v') ADVANCE(1229);
      END_STATE();
    case 2008:
      if (lookahead == 'v') ADVANCE(1300);
      END_STATE();
    case 2009:
      if (lookahead == 'v') ADVANCE(1306);
      END_STATE();
    case 2010:
      if (lookahead == 'w') ADVANCE(2257);
      END_STATE();
    case 2011:
      if (lookahead == 'w') ADVANCE(2192);
      END_STATE();
    case 2012:
      if (lookahead == 'w') ADVANCE(1620);
      END_STATE();
    case 2013:
      if (lookahead == 'w') ADVANCE(1834);
      END_STATE();
    case 2014:
      if (lookahead == 'w') ADVANCE(1408);
      END_STATE();
    case 2015:
      if (lookahead == 'w') ADVANCE(919);
      END_STATE();
    case 2016:
      if (lookahead == 'w') ADVANCE(924);
      END_STATE();
    case 2017:
      if (lookahead == 'w') ADVANCE(1062);
      END_STATE();
    case 2018:
      if (lookahead == 'x') ADVANCE(901);
      END_STATE();
    case 2019:
      if (lookahead == 'x') ADVANCE(2265);
      END_STATE();
    case 2020:
      if (lookahead == 'x') ADVANCE(1549);
      END_STATE();
    case 2021:
      if (lookahead == 'x') ADVANCE(467);
      END_STATE();
    case 2022:
      if (lookahead == 'x') ADVANCE(1231);
      END_STATE();
    case 2023:
      if (lookahead == 'x') ADVANCE(1881);
      END_STATE();
    case 2024:
      if (lookahead == 'x') ADVANCE(1888);
      END_STATE();
    case 2025:
      if (lookahead == 'x') ADVANCE(1890);
      END_STATE();
    case 2026:
      if (lookahead == 'x') ADVANCE(1893);
      END_STATE();
    case 2027:
      if (lookahead == 'x') ADVANCE(1895);
      END_STATE();
    case 2028:
      if (lookahead == 'x') ADVANCE(1896);
      END_STATE();
    case 2029:
      if (lookahead == 'x') ADVANCE(1899);
      END_STATE();
    case 2030:
      if (lookahead == 'x') ADVANCE(1936);
      END_STATE();
    case 2031:
      if (lookahead == 'x') ADVANCE(1935);
      END_STATE();
    case 2032:
      if (lookahead == 'x') ADVANCE(1939);
      END_STATE();
    case 2033:
      if (lookahead == 'x') ADVANCE(1941);
      END_STATE();
    case 2034:
      if (lookahead == 'x') ADVANCE(1944);
      END_STATE();
    case 2035:
      if (lookahead == 'x') ADVANCE(1945);
      END_STATE();
    case 2036:
      if (lookahead == 'x') ADVANCE(1947);
      END_STATE();
    case 2037:
      if (lookahead == 'x') ADVANCE(1957);
      END_STATE();
    case 2038:
      if (lookahead == 'x') ADVANCE(1959);
      END_STATE();
    case 2039:
      if (lookahead == 'x') ADVANCE(1961);
      END_STATE();
    case 2040:
      if (lookahead == 'x') ADVANCE(925);
      END_STATE();
    case 2041:
      if (lookahead == 'x') ADVANCE(926);
      END_STATE();
    case 2042:
      if (lookahead == 'x') ADVANCE(927);
      END_STATE();
    case 2043:
      if (lookahead == 'x') ADVANCE(936);
      END_STATE();
    case 2044:
      if (lookahead == 'x') ADVANCE(1974);
      END_STATE();
    case 2045:
      if (lookahead == 'y') ADVANCE(2296);
      END_STATE();
    case 2046:
      if (lookahead == 'y') ADVANCE(2205);
      END_STATE();
    case 2047:
      if (lookahead == 'y') ADVANCE(960);
      END_STATE();
    case 2048:
      if (lookahead == 'y') ADVANCE(467);
      END_STATE();
    case 2049:
      if (lookahead == 'y') ADVANCE(961);
      END_STATE();
    case 2050:
      if (lookahead == 'y') ADVANCE(942);
      END_STATE();
    case 2051:
      if (lookahead == 'y') ADVANCE(1860);
      END_STATE();
    case 2052:
      if (lookahead == 'y') ADVANCE(1244);
      END_STATE();
    case 2053:
      if (lookahead == 'y') ADVANCE(1708);
      END_STATE();
    case 2054:
      if (lookahead == 'y') ADVANCE(1709);
      END_STATE();
    case 2055:
      if (lookahead == 'y') ADVANCE(1710);
      END_STATE();
    case 2056:
      if (lookahead == 'y') ADVANCE(1711);
      END_STATE();
    case 2057:
      if (lookahead == 'y') ADVANCE(1712);
      END_STATE();
    case 2058:
      if (lookahead == 'y') ADVANCE(1714);
      END_STATE();
    case 2059:
      if (lookahead == 'y') ADVANCE(1715);
      END_STATE();
    case 2060:
      if (lookahead == 'y') ADVANCE(1716);
      END_STATE();
    case 2061:
      if (lookahead == 'y') ADVANCE(1717);
      END_STATE();
    case 2062:
      if (lookahead == 'y') ADVANCE(1718);
      END_STATE();
    case 2063:
      if (lookahead == 'y') ADVANCE(1720);
      END_STATE();
    case 2064:
      if (lookahead == 'y') ADVANCE(1721);
      END_STATE();
    case 2065:
      if (lookahead == 'y') ADVANCE(1722);
      END_STATE();
    case 2066:
      if (lookahead == 'y') ADVANCE(1723);
      END_STATE();
    case 2067:
      if (lookahead == 'y') ADVANCE(1724);
      END_STATE();
    case 2068:
      if (lookahead == 'y') ADVANCE(1725);
      END_STATE();
    case 2069:
      if (lookahead == 'y') ADVANCE(1726);
      END_STATE();
    case 2070:
      if (lookahead == 'y') ADVANCE(1727);
      END_STATE();
    case 2071:
      if (lookahead == 'y') ADVANCE(1728);
      END_STATE();
    case 2072:
      if (lookahead == 'y') ADVANCE(1729);
      END_STATE();
    case 2073:
      if (lookahead == 'y') ADVANCE(1730);
      END_STATE();
    case 2074:
      if (lookahead == 'y') ADVANCE(1731);
      END_STATE();
    case 2075:
      if (lookahead == 'y') ADVANCE(1732);
      END_STATE();
    case 2076:
      if (lookahead == 'y') ADVANCE(957);
      END_STATE();
    case 2077:
      if (lookahead == 'y') ADVANCE(1877);
      END_STATE();
    case 2078:
      if (lookahead == 'z') ADVANCE(1156);
      END_STATE();
    case 2079:
      if (lookahead == 'z') ADVANCE(1172);
      END_STATE();
    case 2080:
      if (lookahead == 'z') ADVANCE(1175);
      END_STATE();
    case 2081:
      if (lookahead == 'z') ADVANCE(1176);
      END_STATE();
    case 2082:
      if (lookahead == 'z') ADVANCE(1685);
      END_STATE();
    case 2083:
      if (lookahead == 'z') ADVANCE(2076);
      END_STATE();
    case 2084:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1420);
      END_STATE();
    case 2085:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1437);
      END_STATE();
    case 2086:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1439);
      END_STATE();
    case 2087:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1440);
      END_STATE();
    case 2088:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2326);
      END_STATE();
    case 2089:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2327);
      END_STATE();
    case 2090:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2333);
      END_STATE();
    case 2091:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2329);
      END_STATE();
    case 2092:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 2093:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2330);
      END_STATE();
    case 2094:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2334);
      END_STATE();
    case 2095:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2343);
      END_STATE();
    case 2096:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2342);
      END_STATE();
    case 2097:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2341);
      END_STATE();
    case 2098:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2096);
      END_STATE();
    case 2099:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2097);
      END_STATE();
    case 2100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2098);
      END_STATE();
    case 2101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2099);
      END_STATE();
    case 2102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2100);
      END_STATE();
    case 2103:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(871);
      END_STATE();
    case 2104:
      if (eof) ADVANCE(2109);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 2105:
      if (eof) ADVANCE(2109);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(2104)
      END_STATE();
    case 2106:
      if (eof) ADVANCE(2109);
      if (lookahead == '\n') SKIP(2108)
      END_STATE();
    case 2107:
      if (eof) ADVANCE(2109);
      if (lookahead == '\n') SKIP(2108)
      if (lookahead == '\r') SKIP(2106)
      END_STATE();
    case 2108:
      if (eof) ADVANCE(2109);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '#') ADVANCE(2353);
      if (lookahead == '=') ADVANCE(2321);
      if (lookahead == 'O') ADVANCE(1787);
      if (lookahead == '\\') SKIP(2107)
      if (lookahead == 'a') ADVANCE(1491);
      if (lookahead == 'b') ADVANCE(964);
      if (lookahead == 'c') ADVANCE(1533);
      if (lookahead == 'd') ADVANCE(1149);
      if (lookahead == 'e') ADVANCE(1126);
      if (lookahead == 'f') ADVANCE(1388);
      if (lookahead == 'g') ADVANCE(1976);
      if (lookahead == 'h') ADVANCE(1622);
      if (lookahead == 'i') ADVANCE(1075);
      if (lookahead == 'l') ADVANCE(1240);
      if (lookahead == 'm') ADVANCE(996);
      if (lookahead == 'n') ADVANCE(968);
      if (lookahead == 'o') ADVANCE(1063);
      if (lookahead == 'p') ADVANCE(977);
      if (lookahead == 'q') ADVANCE(1975);
      if (lookahead == 'r') ADVANCE(1151);
      if (lookahead == 's') ADVANCE(1095);
      if (lookahead == 't') ADVANCE(980);
      if (lookahead == 'v') ADVANCE(1224);
      if (lookahead == 'x') ADVANCE(2141);
      if (lookahead == 'y') ADVANCE(2142);
      if (lookahead == '}') ADVANCE(2112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2108)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2335);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(anon_sym_objectTypes);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(anon_sym_bitmapfonts);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(anon_sym_guiTypes);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(anon_sym_textSpriteType);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(anon_sym_corneredTileSpriteType);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(anon_sym_maskedShieldType);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(anon_sym_animatedmaptext);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(anon_sym_textcolors);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      if (lookahead == 's') ADVANCE(2114);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(anon_sym_frameAnimatedSpriteType);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(anon_sym_progressbartype);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(anon_sym_pdxmesh);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(anon_sym_pdxparticle);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(anon_sym_arrowType);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(anon_sym_tradeRouteType);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(anon_sym_PieChartType);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(anon_sym_LineChartType);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(anon_sym_windowType);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(anon_sym_listBoxType);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(anon_sym_editBoxType);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(anon_sym_instantTextBoxType);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(anon_sym_textBoxType);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(anon_sym_iconType);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(anon_sym_scrollbarType);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(anon_sym_guiButtonType);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(1827);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 2170:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 2172:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 2173:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(aux_sym__statement_gfx_name_token1);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '1') ADVANCE(2187);
      if (lookahead == '2') ADVANCE(2188);
      if (lookahead == '3') ADVANCE(2189);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '2') ADVANCE(2188);
      if (lookahead == '3') ADVANCE(2189);
      END_STATE();
    case 2186:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token2);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile1_token1);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile2_token1);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile3_token1);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1806);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1806);
      if (lookahead == 'b') ADVANCE(1509);
      if (lookahead == 'd') ADVANCE(1289);
      if (lookahead == 'r') ADVANCE(1697);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(1340);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(anon_sym_borderSize);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(anon_sym_alwaystransparent);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(anon_sym_allwaystransparent);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(anon_sym_legacy_lazy_load);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(anon_sym_clicksound);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == 's') ADVANCE(1686);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(anon_sym_speed);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(anon_sym_textblock);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'B') ADVANCE(1695);
      if (lookahead == 'S') ADVANCE(1741);
      if (lookahead == 'u') ADVANCE(1779);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'u') ADVANCE(1781);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'u') ADVANCE(1817);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == 't') ADVANCE(2012);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(anon_sym_colortwo);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(anon_sym_cull_distance);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'a') ADVANCE(1072);
      if (lookahead == 'i') ADVANCE(1926);
      if (lookahead == 'o') ADVANCE(1749);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(1330);
      if (lookahead == 'i') ADVANCE(1590);
      if (lookahead == 'o') ADVANCE(982);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == 'r') ADVANCE(1386);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'u') ADVANCE(1380);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(anon_sym_border_color);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(anon_sym_animation_rate_fps);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(anon_sym_looping);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(anon_sym_play_on_show);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(anon_sym_pause_on_loop);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(aux_sym__statement_gfx_file_token1);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(anon_sym_meshsettings);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(anon_sym_texture_diffuse);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(anon_sym_texture_normal);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(anon_sym_texture_specular);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(anon_sym_shader);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(anon_sym_shader);
      if (lookahead == '_') ADVANCE(1344);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(aux_sym__statement_gfx_meshsettings_shader_token1);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(anon_sym_shader_file);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(aux_sym__statement_gfx_meshsettings_shader_file_token1);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(anon_sym_transparencecheck);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(anon_sym_loadType);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(anon_sym_DQUOTEINGAME_DQUOTE);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(anon_sym_DQUOTEFRONTEND_DQUOTE);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(anon_sym_norefcount);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(anon_sym_texture);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F') ADVANCE(1419);
      if (lookahead == '_') ADVANCE(1131);
      if (lookahead == 'f') ADVANCE(1420);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1420);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1439);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(anon_sym_specular);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(anon_sym_effect);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(anon_sym_effect);
      if (lookahead == 'F') ADVANCE(1411);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effect_token1);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(anon_sym_alphamaskfile);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(aux_sym__statement_gfx_alphamaskfile_token1);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(anon_sym_linewidth);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(anon_sym_backGround);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(anon_sym_moveable);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(aux_sym__statement_gui_orientation_token1);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(anon_sym_priority);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(anon_sym_scrollbartype);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(anon_sym_textureFile);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(anon_sym_textureFile);
      if (lookahead == '1') ADVANCE(2187);
      if (lookahead == '2') ADVANCE(2188);
      if (lookahead == '3') ADVANCE(2189);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(aux_sym__statement_gui_textureFile_token1);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(anon_sym_cursor);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(anon_sym_cursor);
      if (lookahead == '_') ADVANCE(1629);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(anon_sym_maxWidth);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(anon_sym_maxHeight);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(anon_sym_fixedsize);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(anon_sym_truncate);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(anon_sym_slider);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(anon_sym_track);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(anon_sym_leftbutton);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(anon_sym_rightbutton);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(anon_sym_maxValue);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(anon_sym_minValue);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(anon_sym_stepSize);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(anon_sym_startValue);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(anon_sym_quadTextureSprite);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(anon_sym_scroll_speed);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(anon_sym_tooltip);
      if (lookahead == 'T') ADVANCE(1288);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(anon_sym_tooltipText);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(anon_sym_delayedTooltipText);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(2089);
      if (lookahead == '5') ADVANCE(2325);
      if (lookahead == 'f') ADVANCE(2323);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2326);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(2326);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(2089);
      if (lookahead == 'f') ADVANCE(2323);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2326);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(2326);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(2089);
      if (lookahead == 'f') ADVANCE(2323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2326);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(2323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2327);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(2093);
      if (lookahead == 'f') ADVANCE(2328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2329);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(2328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2330);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      if (lookahead == '.') ADVANCE(2090);
      if (lookahead == 'f') ADVANCE(2331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2332);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      if (lookahead == 'f') ADVANCE(2331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2333);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2334);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2335);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead == '5') ADVANCE(2338);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2336);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(2339);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(2336);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2336);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2339);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(sym_hexadecimal);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2101);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'r') ADVANCE(1222);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(2089);
      if (lookahead == 'f') ADVANCE(2323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2326);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(2089);
      if (lookahead == 'f') ADVANCE(2323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2326);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2353);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(aux_sym__orientation_value_token1);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2108},
  [2] = {.lex_state = 2108},
  [3] = {.lex_state = 2108},
  [4] = {.lex_state = 559},
  [5] = {.lex_state = 559},
  [6] = {.lex_state = 560},
  [7] = {.lex_state = 560},
  [8] = {.lex_state = 2108},
  [9] = {.lex_state = 2108},
  [10] = {.lex_state = 2108},
  [11] = {.lex_state = 2108},
  [12] = {.lex_state = 561},
  [13] = {.lex_state = 2108},
  [14] = {.lex_state = 561},
  [15] = {.lex_state = 561},
  [16] = {.lex_state = 2108},
  [17] = {.lex_state = 2108},
  [18] = {.lex_state = 562},
  [19] = {.lex_state = 562},
  [20] = {.lex_state = 565},
  [21] = {.lex_state = 565},
  [22] = {.lex_state = 562},
  [23] = {.lex_state = 565},
  [24] = {.lex_state = 566},
  [25] = {.lex_state = 559},
  [26] = {.lex_state = 562},
  [27] = {.lex_state = 2108},
  [28] = {.lex_state = 2108},
  [29] = {.lex_state = 559},
  [30] = {.lex_state = 566},
  [31] = {.lex_state = 2108},
  [32] = {.lex_state = 562},
  [33] = {.lex_state = 2108},
  [34] = {.lex_state = 2108},
  [35] = {.lex_state = 2108},
  [36] = {.lex_state = 562},
  [37] = {.lex_state = 562},
  [38] = {.lex_state = 562},
  [39] = {.lex_state = 562},
  [40] = {.lex_state = 562},
  [41] = {.lex_state = 570},
  [42] = {.lex_state = 562},
  [43] = {.lex_state = 562},
  [44] = {.lex_state = 561},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2108},
  [47] = {.lex_state = 2108},
  [48] = {.lex_state = 2108},
  [49] = {.lex_state = 2108},
  [50] = {.lex_state = 560},
  [51] = {.lex_state = 561},
  [52] = {.lex_state = 560},
  [53] = {.lex_state = 561},
  [54] = {.lex_state = 561},
  [55] = {.lex_state = 570},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 561},
  [58] = {.lex_state = 2108},
  [59] = {.lex_state = 2108},
  [60] = {.lex_state = 561},
  [61] = {.lex_state = 560},
  [62] = {.lex_state = 2108},
  [63] = {.lex_state = 2108},
  [64] = {.lex_state = 2108},
  [65] = {.lex_state = 2108},
  [66] = {.lex_state = 2108},
  [67] = {.lex_state = 571},
  [68] = {.lex_state = 2108},
  [69] = {.lex_state = 571},
  [70] = {.lex_state = 2108},
  [71] = {.lex_state = 571},
  [72] = {.lex_state = 571},
  [73] = {.lex_state = 571},
  [74] = {.lex_state = 2108},
  [75] = {.lex_state = 571},
  [76] = {.lex_state = 567},
  [77] = {.lex_state = 561},
  [78] = {.lex_state = 561},
  [79] = {.lex_state = 2108},
  [80] = {.lex_state = 2108},
  [81] = {.lex_state = 2108},
  [82] = {.lex_state = 561},
  [83] = {.lex_state = 2108},
  [84] = {.lex_state = 2108},
  [85] = {.lex_state = 2108},
  [86] = {.lex_state = 567},
  [87] = {.lex_state = 2108},
  [88] = {.lex_state = 2108},
  [89] = {.lex_state = 561},
  [90] = {.lex_state = 2108},
  [91] = {.lex_state = 562},
  [92] = {.lex_state = 2108},
  [93] = {.lex_state = 2108},
  [94] = {.lex_state = 2108},
  [95] = {.lex_state = 2108},
  [96] = {.lex_state = 2108},
  [97] = {.lex_state = 2108},
  [98] = {.lex_state = 561},
  [99] = {.lex_state = 568},
  [100] = {.lex_state = 2108},
  [101] = {.lex_state = 561},
  [102] = {.lex_state = 561},
  [103] = {.lex_state = 561},
  [104] = {.lex_state = 2108},
  [105] = {.lex_state = 2108},
  [106] = {.lex_state = 2108},
  [107] = {.lex_state = 2108},
  [108] = {.lex_state = 2108},
  [109] = {.lex_state = 2108},
  [110] = {.lex_state = 2108},
  [111] = {.lex_state = 2108},
  [112] = {.lex_state = 562},
  [113] = {.lex_state = 2108},
  [114] = {.lex_state = 2108},
  [115] = {.lex_state = 2108},
  [116] = {.lex_state = 569},
  [117] = {.lex_state = 2108},
  [118] = {.lex_state = 2108},
  [119] = {.lex_state = 2108},
  [120] = {.lex_state = 2108},
  [121] = {.lex_state = 561},
  [122] = {.lex_state = 2108},
  [123] = {.lex_state = 569},
  [124] = {.lex_state = 571},
  [125] = {.lex_state = 561},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 2108},
  [128] = {.lex_state = 2108},
  [129] = {.lex_state = 2108},
  [130] = {.lex_state = 569},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 2108},
  [133] = {.lex_state = 561},
  [134] = {.lex_state = 561},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 569},
  [137] = {.lex_state = 561},
  [138] = {.lex_state = 2108},
  [139] = {.lex_state = 561},
  [140] = {.lex_state = 569},
  [141] = {.lex_state = 561},
  [142] = {.lex_state = 565},
  [143] = {.lex_state = 571},
  [144] = {.lex_state = 568},
  [145] = {.lex_state = 565},
  [146] = {.lex_state = 565},
  [147] = {.lex_state = 565},
  [148] = {.lex_state = 567},
  [149] = {.lex_state = 560},
  [150] = {.lex_state = 568},
  [151] = {.lex_state = 568},
  [152] = {.lex_state = 560},
  [153] = {.lex_state = 560},
  [154] = {.lex_state = 559},
  [155] = {.lex_state = 569},
  [156] = {.lex_state = 2108},
  [157] = {.lex_state = 559},
  [158] = {.lex_state = 569},
  [159] = {.lex_state = 567},
  [160] = {.lex_state = 565},
  [161] = {.lex_state = 565},
  [162] = {.lex_state = 565},
  [163] = {.lex_state = 565},
  [164] = {.lex_state = 569},
  [165] = {.lex_state = 568},
  [166] = {.lex_state = 559},
  [167] = {.lex_state = 565},
  [168] = {.lex_state = 2108},
  [169] = {.lex_state = 2108},
  [170] = {.lex_state = 2108},
  [171] = {.lex_state = 2108},
  [172] = {.lex_state = 560},
  [173] = {.lex_state = 2108},
  [174] = {.lex_state = 2108},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 568},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 2108},
  [179] = {.lex_state = 2108},
  [180] = {.lex_state = 2108},
  [181] = {.lex_state = 2108},
  [182] = {.lex_state = 2108},
  [183] = {.lex_state = 2108},
  [184] = {.lex_state = 2108},
  [185] = {.lex_state = 2108},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 567},
  [188] = {.lex_state = 2108},
  [189] = {.lex_state = 567},
  [190] = {.lex_state = 2108},
  [191] = {.lex_state = 2108},
  [192] = {.lex_state = 2108},
  [193] = {.lex_state = 2108},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 2108},
  [196] = {.lex_state = 572},
  [197] = {.lex_state = 2108},
  [198] = {.lex_state = 2108},
  [199] = {.lex_state = 2108},
  [200] = {.lex_state = 561},
  [201] = {.lex_state = 2108},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 2108},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 2108},
  [210] = {.lex_state = 2108},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 2108},
  [213] = {.lex_state = 2108},
  [214] = {.lex_state = 2108},
  [215] = {.lex_state = 2108},
  [216] = {.lex_state = 569},
  [217] = {.lex_state = 572},
  [218] = {.lex_state = 2108},
  [219] = {.lex_state = 2108},
  [220] = {.lex_state = 572},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 2108},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 560},
  [225] = {.lex_state = 560},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 560},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 2108},
  [230] = {.lex_state = 2108},
  [231] = {.lex_state = 560},
  [232] = {.lex_state = 560},
  [233] = {.lex_state = 560},
  [234] = {.lex_state = 560},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 560},
  [238] = {.lex_state = 560},
  [239] = {.lex_state = 2108},
  [240] = {.lex_state = 2108},
  [241] = {.lex_state = 560},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 2108},
  [245] = {.lex_state = 2108},
  [246] = {.lex_state = 573},
  [247] = {.lex_state = 2108},
  [248] = {.lex_state = 2108},
  [249] = {.lex_state = 2108},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 2108},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 2108},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 2108},
  [257] = {.lex_state = 2108},
  [258] = {.lex_state = 2108},
  [259] = {.lex_state = 561},
  [260] = {.lex_state = 2108},
  [261] = {.lex_state = 2108},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 561},
  [264] = {.lex_state = 2108},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 561},
  [267] = {.lex_state = 571},
  [268] = {.lex_state = 571},
  [269] = {.lex_state = 571},
  [270] = {.lex_state = 560},
  [271] = {.lex_state = 560},
  [272] = {.lex_state = 571},
  [273] = {.lex_state = 560},
  [274] = {.lex_state = 560},
  [275] = {.lex_state = 560},
  [276] = {.lex_state = 571},
  [277] = {.lex_state = 569},
  [278] = {.lex_state = 559},
  [279] = {.lex_state = 560},
  [280] = {.lex_state = 560},
  [281] = {.lex_state = 560},
  [282] = {.lex_state = 560},
  [283] = {.lex_state = 560},
  [284] = {.lex_state = 573},
  [285] = {.lex_state = 559},
  [286] = {.lex_state = 560},
  [287] = {.lex_state = 560},
  [288] = {.lex_state = 560},
  [289] = {.lex_state = 560},
  [290] = {.lex_state = 560},
  [291] = {.lex_state = 2108},
  [292] = {.lex_state = 560},
  [293] = {.lex_state = 560},
  [294] = {.lex_state = 560},
  [295] = {.lex_state = 560},
  [296] = {.lex_state = 2108},
  [297] = {.lex_state = 560},
  [298] = {.lex_state = 2108},
  [299] = {.lex_state = 2108},
  [300] = {.lex_state = 560},
  [301] = {.lex_state = 559},
  [302] = {.lex_state = 560},
  [303] = {.lex_state = 560},
  [304] = {.lex_state = 560},
  [305] = {.lex_state = 571},
  [306] = {.lex_state = 571},
  [307] = {.lex_state = 571},
  [308] = {.lex_state = 560},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 569},
  [311] = {.lex_state = 559},
  [312] = {.lex_state = 2108},
  [313] = {.lex_state = 2108},
  [314] = {.lex_state = 2108},
  [315] = {.lex_state = 2108},
  [316] = {.lex_state = 569},
  [317] = {.lex_state = 2108},
  [318] = {.lex_state = 569},
  [319] = {.lex_state = 569},
  [320] = {.lex_state = 569},
  [321] = {.lex_state = 569},
  [322] = {.lex_state = 2108},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 569},
  [328] = {.lex_state = 2108},
  [329] = {.lex_state = 569},
  [330] = {.lex_state = 2108},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 560},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 2108},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 569},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 2108},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 2108},
  [341] = {.lex_state = 2108},
  [342] = {.lex_state = 2108},
  [343] = {.lex_state = 559},
  [344] = {.lex_state = 560},
  [345] = {.lex_state = 569},
  [346] = {.lex_state = 2108},
  [347] = {.lex_state = 569},
  [348] = {.lex_state = 569},
  [349] = {.lex_state = 2108},
  [350] = {.lex_state = 559},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 2108},
  [353] = {.lex_state = 559},
  [354] = {.lex_state = 2108},
  [355] = {.lex_state = 559},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 569},
  [360] = {.lex_state = 2108},
  [361] = {.lex_state = 2108},
  [362] = {.lex_state = 569},
  [363] = {.lex_state = 560},
  [364] = {.lex_state = 559},
  [365] = {.lex_state = 572},
  [366] = {.lex_state = 560},
  [367] = {.lex_state = 559},
  [368] = {.lex_state = 572},
  [369] = {.lex_state = 572},
  [370] = {.lex_state = 559},
  [371] = {.lex_state = 560},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 559},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 560},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 569},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 572},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 560},
  [385] = {.lex_state = 560},
  [386] = {.lex_state = 559},
  [387] = {.lex_state = 559},
  [388] = {.lex_state = 572},
  [389] = {.lex_state = 572},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 560},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 572},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 2108},
  [408] = {.lex_state = 560},
  [409] = {.lex_state = 2108},
  [410] = {.lex_state = 2108},
  [411] = {.lex_state = 560},
  [412] = {.lex_state = 560},
  [413] = {.lex_state = 2108},
  [414] = {.lex_state = 2108},
  [415] = {.lex_state = 560},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 560},
  [418] = {.lex_state = 2108},
  [419] = {.lex_state = 2108},
  [420] = {.lex_state = 2108},
  [421] = {.lex_state = 560},
  [422] = {.lex_state = 560},
  [423] = {.lex_state = 2108},
  [424] = {.lex_state = 2108},
  [425] = {.lex_state = 560},
  [426] = {.lex_state = 559},
  [427] = {.lex_state = 2108},
  [428] = {.lex_state = 560},
  [429] = {.lex_state = 560},
  [430] = {.lex_state = 560},
  [431] = {.lex_state = 559},
  [432] = {.lex_state = 2108},
  [433] = {.lex_state = 2108},
  [434] = {.lex_state = 2108},
  [435] = {.lex_state = 2108},
  [436] = {.lex_state = 559},
  [437] = {.lex_state = 560},
  [438] = {.lex_state = 2108},
  [439] = {.lex_state = 2108},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 2108},
  [442] = {.lex_state = 560},
  [443] = {.lex_state = 560},
  [444] = {.lex_state = 2108},
  [445] = {.lex_state = 2108},
  [446] = {.lex_state = 2108},
  [447] = {.lex_state = 560},
  [448] = {.lex_state = 2108},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 2108},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 560},
  [453] = {.lex_state = 2108},
  [454] = {.lex_state = 2108},
  [455] = {.lex_state = 560},
  [456] = {.lex_state = 2108},
  [457] = {.lex_state = 2108},
  [458] = {.lex_state = 2108},
  [459] = {.lex_state = 560},
  [460] = {.lex_state = 559},
  [461] = {.lex_state = 559},
  [462] = {.lex_state = 560},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 560},
  [465] = {.lex_state = 559},
  [466] = {.lex_state = 559},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 559},
  [469] = {.lex_state = 559},
  [470] = {.lex_state = 559},
  [471] = {.lex_state = 2108},
  [472] = {.lex_state = 559},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 2108},
  [475] = {.lex_state = 559},
  [476] = {.lex_state = 559},
  [477] = {.lex_state = 560},
  [478] = {.lex_state = 559},
  [479] = {.lex_state = 2108},
  [480] = {.lex_state = 559},
  [481] = {.lex_state = 559},
  [482] = {.lex_state = 559},
  [483] = {.lex_state = 559},
  [484] = {.lex_state = 2108},
  [485] = {.lex_state = 559},
  [486] = {.lex_state = 2108},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 2108},
  [489] = {.lex_state = 560},
  [490] = {.lex_state = 559},
  [491] = {.lex_state = 559},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 560},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 2108},
  [504] = {.lex_state = 560},
  [505] = {.lex_state = 560},
  [506] = {.lex_state = 560},
  [507] = {.lex_state = 560},
  [508] = {.lex_state = 560},
  [509] = {.lex_state = 2108},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 560},
  [513] = {.lex_state = 560},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 560},
  [516] = {.lex_state = 560},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 560},
  [519] = {.lex_state = 2108},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 2108},
  [524] = {.lex_state = 2108},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 2108},
  [527] = {.lex_state = 2108},
  [528] = {.lex_state = 2108},
  [529] = {.lex_state = 2108},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 2108},
  [534] = {.lex_state = 2108},
  [535] = {.lex_state = 2108},
  [536] = {.lex_state = 2108},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 2108},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 559},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 559},
  [545] = {.lex_state = 559},
  [546] = {.lex_state = 2108},
  [547] = {.lex_state = 560},
  [548] = {.lex_state = 561},
  [549] = {.lex_state = 561},
  [550] = {.lex_state = 560},
  [551] = {.lex_state = 560},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 2108},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 2108},
  [556] = {.lex_state = 2108},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 560},
  [560] = {.lex_state = 560},
  [561] = {.lex_state = 560},
  [562] = {.lex_state = 561},
  [563] = {.lex_state = 561},
  [564] = {.lex_state = 2108},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 2108},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 2108},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 560},
  [571] = {.lex_state = 561},
  [572] = {.lex_state = 561},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 2108},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 560},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 561},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 559},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 2108},
  [589] = {.lex_state = 2108},
  [590] = {.lex_state = 561},
  [591] = {.lex_state = 2108},
  [592] = {.lex_state = 559},
  [593] = {.lex_state = 559},
  [594] = {.lex_state = 559},
  [595] = {.lex_state = 559},
  [596] = {.lex_state = 2108},
  [597] = {.lex_state = 559},
  [598] = {.lex_state = 559},
  [599] = {.lex_state = 561},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 562},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 559},
  [606] = {.lex_state = 559},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 562},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 559},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 559},
  [615] = {.lex_state = 565},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 559},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 559},
  [623] = {.lex_state = 559},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 2108},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 562},
  [629] = {.lex_state = 565},
  [630] = {.lex_state = 562},
  [631] = {.lex_state = 562},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 565},
  [634] = {.lex_state = 565},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 2108},
  [637] = {.lex_state = 2108},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 2108},
  [640] = {.lex_state = 2108},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 561},
  [644] = {.lex_state = 2108},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 566},
  [647] = {.lex_state = 2108},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 561},
  [650] = {.lex_state = 561},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 2108},
  [654] = {.lex_state = 2108},
  [655] = {.lex_state = 559},
  [656] = {.lex_state = 561},
  [657] = {.lex_state = 2108},
  [658] = {.lex_state = 566},
  [659] = {.lex_state = 566},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 561},
  [664] = {.lex_state = 2108},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 559},
  [668] = {.lex_state = 2108},
  [669] = {.lex_state = 559},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 2108},
  [672] = {.lex_state = 2108},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 559},
  [676] = {.lex_state = 562},
  [677] = {.lex_state = 559},
  [678] = {.lex_state = 565},
  [679] = {.lex_state = 559},
  [680] = {.lex_state = 562},
  [681] = {.lex_state = 562},
  [682] = {.lex_state = 559},
  [683] = {.lex_state = 559},
  [684] = {.lex_state = 559},
  [685] = {.lex_state = 559},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 559},
  [689] = {.lex_state = 565},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 565},
  [694] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_objectTypes] = ACTIONS(1),
    [anon_sym_bitmapfonts] = ACTIONS(1),
    [anon_sym_guiTypes] = ACTIONS(1),
    [anon_sym_spriteType] = ACTIONS(1),
    [anon_sym_textSpriteType] = ACTIONS(1),
    [anon_sym_corneredTileSpriteType] = ACTIONS(1),
    [anon_sym_maskedShieldType] = ACTIONS(1),
    [anon_sym_animatedmaptext] = ACTIONS(1),
    [anon_sym_bitmapfont] = ACTIONS(1),
    [anon_sym_frameAnimatedSpriteType] = ACTIONS(1),
    [anon_sym_progressbartype] = ACTIONS(1),
    [anon_sym_pdxmesh] = ACTIONS(1),
    [anon_sym_pdxparticle] = ACTIONS(1),
    [anon_sym_arrowType] = ACTIONS(1),
    [anon_sym_tradeRouteType] = ACTIONS(1),
    [anon_sym_PieChartType] = ACTIONS(1),
    [anon_sym_LineChartType] = ACTIONS(1),
    [anon_sym_windowType] = ACTIONS(1),
    [anon_sym_listBoxType] = ACTIONS(1),
    [anon_sym_editBoxType] = ACTIONS(1),
    [anon_sym_instantTextBoxType] = ACTIONS(1),
    [anon_sym_textBoxType] = ACTIONS(1),
    [anon_sym_iconType] = ACTIONS(1),
    [anon_sym_scrollbarType] = ACTIONS(1),
    [anon_sym_guiButtonType] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_archive] = ACTIONS(1),
    [aux_sym__statement_mod_archive_token1] = ACTIONS(1),
    [anon_sym_remote_file_id] = ACTIONS(1),
    [aux_sym__statement_mod_remote_file_id_token1] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [aux_sym__statement_mod_version_token1] = ACTIONS(1),
    [anon_sym_picture] = ACTIONS(1),
    [aux_sym__statement_mod_picture_token1] = ACTIONS(1),
    [anon_sym_supported_version] = ACTIONS(1),
    [aux_sym__statement_mod_supported_version_token1] = ACTIONS(1),
    [anon_sym_replace_path] = ACTIONS(1),
    [aux_sym__mod_replace_path_folder_token1] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token1] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token2] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token3] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token4] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token5] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token6] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token7] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token8] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token9] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token10] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token11] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token12] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token13] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token14] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token15] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token16] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token17] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token18] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token19] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token20] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token21] = ACTIONS(1),
    [aux_sym__mod_tags_keyword_token22] = ACTIONS(1),
    [anon_sym_dependencies] = ACTIONS(1),
    [aux_sym__statement_gfx_name_token1] = ACTIONS(1),
    [aux_sym__statement_gfx_name_token2] = ACTIONS(1),
    [anon_sym_cursor_offset] = ACTIONS(1),
    [aux_sym__statement_gfx_textureFile_token1] = ACTIONS(1),
    [aux_sym__statement_gfx_textureFile_token2] = ACTIONS(1),
    [aux_sym__statement_gfx_textureFile1_token1] = ACTIONS(1),
    [aux_sym__statement_gfx_textureFile2_token1] = ACTIONS(1),
    [aux_sym__statement_gfx_textureFile3_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_overlay_frames_per_row] = ACTIONS(1),
    [anon_sym_overlay_rows] = ACTIONS(1),
    [anon_sym_effectFile] = ACTIONS(1),
    [aux_sym__statement_gfx_effectFile_token1] = ACTIONS(1),
    [anon_sym_animation] = ACTIONS(1),
    [aux_sym__animation_entry_dds_token1] = ACTIONS(1),
    [anon_sym_animationrotation] = ACTIONS(1),
    [anon_sym_animationdelay] = ACTIONS(1),
    [anon_sym_animationrotationoffset] = ACTIONS(1),
    [anon_sym_animationblendmode] = ACTIONS(1),
    [anon_sym_DQUOTEadd_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEmultiply_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEoverlay_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEscrolling_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTErotating_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEpulsing_DQUOTE] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_borderSize] = ACTIONS(1),
    [anon_sym_alwaystransparent] = ACTIONS(1),
    [anon_sym_allwaystransparent] = ACTIONS(1),
    [anon_sym_legacy_lazy_load] = ACTIONS(1),
    [anon_sym_clicksound] = ACTIONS(1),
    [anon_sym_click] = ACTIONS(1),
    [anon_sym_speed] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_colortwo] = ACTIONS(1),
    [anon_sym_font] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_centre] = ACTIONS(1),
    [anon_sym_cull_distance] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_G] = ACTIONS(1),
    [anon_sym_H] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_R] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_W] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_border_color] = ACTIONS(1),
    [anon_sym_animation_rate_fps] = ACTIONS(1),
    [anon_sym_looping] = ACTIONS(1),
    [anon_sym_play_on_show] = ACTIONS(1),
    [anon_sym_pause_on_loop] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [aux_sym__statement_gfx_file_token1] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_meshsettings] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_texture_diffuse] = ACTIONS(1),
    [anon_sym_texture_normal] = ACTIONS(1),
    [anon_sym_texture_specular] = ACTIONS(1),
    [anon_sym_shader] = ACTIONS(1),
    [aux_sym__statement_gfx_meshsettings_shader_token1] = ACTIONS(1),
    [anon_sym_shader_file] = ACTIONS(1),
    [aux_sym__statement_gfx_meshsettings_shader_file_token1] = ACTIONS(1),
    [anon_sym_scale] = ACTIONS(1),
    [anon_sym_transparencecheck] = ACTIONS(1),
    [anon_sym_loadType] = ACTIONS(1),
    [anon_sym_DQUOTEINGAME_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEFRONTEND_DQUOTE] = ACTIONS(1),
    [anon_sym_norefcount] = ACTIONS(1),
    [anon_sym_texture] = ACTIONS(1),
    [anon_sym_normal] = ACTIONS(1),
    [anon_sym_specular] = ACTIONS(1),
    [anon_sym_effect] = ACTIONS(1),
    [aux_sym__statement_gfx_effect_token1] = ACTIONS(1),
    [anon_sym_alphamaskfile] = ACTIONS(1),
    [aux_sym__statement_gfx_alphamaskfile_token1] = ACTIONS(1),
    [anon_sym_linewidth] = ACTIONS(1),
    [anon_sym_backGround] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_moveable] = ACTIONS(1),
    [aux_sym__statement_gui_orientation_token1] = ACTIONS(1),
    [anon_sym_priority] = ACTIONS(1),
    [anon_sym_scrollbartype] = ACTIONS(1),
    [anon_sym_textureFile] = ACTIONS(1),
    [aux_sym__statement_gui_textureFile_token1] = ACTIONS(1),
    [anon_sym_cursor] = ACTIONS(1),
    [anon_sym_maxWidth] = ACTIONS(1),
    [anon_sym_maxHeight] = ACTIONS(1),
    [anon_sym_fixedsize] = ACTIONS(1),
    [anon_sym_truncate] = ACTIONS(1),
    [anon_sym_slider] = ACTIONS(1),
    [anon_sym_track] = ACTIONS(1),
    [anon_sym_leftbutton] = ACTIONS(1),
    [anon_sym_rightbutton] = ACTIONS(1),
    [anon_sym_maxValue] = ACTIONS(1),
    [anon_sym_minValue] = ACTIONS(1),
    [anon_sym_stepSize] = ACTIONS(1),
    [anon_sym_startValue] = ACTIONS(1),
    [anon_sym_quadTextureSprite] = ACTIONS(1),
    [anon_sym_parent] = ACTIONS(1),
    [anon_sym_scroll_speed] = ACTIONS(1),
    [anon_sym_tooltip] = ACTIONS(1),
    [anon_sym_tooltipText] = ACTIONS(1),
    [anon_sym_delayedTooltipText] = ACTIONS(1),
    [sym_assign_equal] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [aux_sym__float_positive_token1] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [aux_sym__integer_positive_token1] = ACTIONS(1),
    [sym_byte] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym__orientation_value_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(627),
    [sym_dot_mod] = STATE(626),
    [sym_dot_gfx] = STATE(626),
    [sym_dot_gui] = STATE(626),
    [sym__gui_types_definition] = STATE(407),
    [sym__spriteTypes] = STATE(342),
    [sym__objectTypes] = STATE(342),
    [sym__bitmapfonts] = STATE(342),
    [sym__guiTypes] = STATE(407),
    [sym__statement_name] = STATE(45),
    [sym__statement_mod_path] = STATE(45),
    [sym__statement_mod_archive] = STATE(45),
    [sym__statement_mod_remote_file_id] = STATE(45),
    [sym__statement_mod_version] = STATE(45),
    [sym__statement_mod_picture] = STATE(45),
    [sym__statement_mod_supported_version] = STATE(45),
    [sym__statement_mod_replace_path] = STATE(45),
    [sym__statement_mod_tags] = STATE(45),
    [sym__statement_mod_dependencies] = STATE(45),
    [aux_sym_dot_mod_repeat1] = STATE(45),
    [aux_sym_dot_gfx_repeat1] = STATE(342),
    [aux_sym_dot_gui_repeat1] = STATE(407),
    [anon_sym_spriteTypes] = ACTIONS(5),
    [anon_sym_objectTypes] = ACTIONS(7),
    [anon_sym_bitmapfonts] = ACTIONS(9),
    [anon_sym_guiTypes] = ACTIONS(11),
    [anon_sym_name] = ACTIONS(13),
    [anon_sym_path] = ACTIONS(15),
    [anon_sym_archive] = ACTIONS(17),
    [anon_sym_remote_file_id] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(21),
    [anon_sym_picture] = ACTIONS(23),
    [anon_sym_supported_version] = ACTIONS(25),
    [anon_sym_replace_path] = ACTIONS(27),
    [anon_sym_tags] = ACTIONS(29),
    [anon_sym_dependencies] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_assign_equal,
    ACTIONS(35), 2,
      anon_sym_text,
      anon_sym_tooltip,
    ACTIONS(33), 49,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_horizontal,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_scroll_speed,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [62] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_text,
      anon_sym_tooltip,
    ACTIONS(39), 49,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_horizontal,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_scroll_speed,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_assign_equal,
    ACTIONS(45), 2,
      anon_sym_text,
      anon_sym_tooltip,
    ACTIONS(43), 40,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_horizontal,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_scroll_speed,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_text,
      anon_sym_tooltip,
    ACTIONS(49), 40,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_horizontal,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_scroll_speed,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_assign_equal,
    ACTIONS(55), 5,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
      anon_sym_texture,
      anon_sym_effect,
    ACTIONS(53), 36,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_speed,
      anon_sym_textblock,
      anon_sym_colortwo,
      anon_sym_cull_distance,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_horizontal,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_index,
      anon_sym_scale,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_alphamaskfile,
      anon_sym_linewidth,
  [276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 5,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
      anon_sym_texture,
      anon_sym_effect,
    ACTIONS(59), 36,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_speed,
      anon_sym_textblock,
      anon_sym_colortwo,
      anon_sym_cull_distance,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_horizontal,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_index,
      anon_sym_scale,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_alphamaskfile,
      anon_sym_linewidth,
  [325] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_guiButtonType,
    ACTIONS(67), 1,
      anon_sym_size,
    ACTIONS(69), 1,
      anon_sym_borderSize,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(73), 1,
      anon_sym_horizontal,
    ACTIONS(75), 1,
      anon_sym_priority,
    ACTIONS(77), 1,
      anon_sym_slider,
    ACTIONS(79), 1,
      anon_sym_track,
    ACTIONS(81), 1,
      anon_sym_leftbutton,
    ACTIONS(83), 1,
      anon_sym_rightbutton,
    ACTIONS(85), 1,
      anon_sym_maxValue,
    ACTIONS(87), 1,
      anon_sym_minValue,
    ACTIONS(89), 1,
      anon_sym_stepSize,
    ACTIONS(91), 1,
      anon_sym_startValue,
    ACTIONS(93), 1,
      anon_sym_scroll_speed,
    STATE(108), 1,
      sym__statement_name,
    STATE(10), 16,
      sym__guiButtonType,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_priority,
      sym__statement_gui_slider,
      sym__statement_gui_track,
      sym__statement_gui_leftbutton,
      sym__statement_gui_rightbutton,
      sym__statement_gui_maxValue,
      sym__statement_gui_minValue,
      sym__statement_gui_stepSize,
      sym__statement_gui_startValue,
      sym__statement_gui_horizontal,
      sym__statement_gui_scroll_speed,
      aux_sym__scrollbarType_block_repeat1,
  [401] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(65), 1,
      anon_sym_guiButtonType,
    ACTIONS(67), 1,
      anon_sym_size,
    ACTIONS(69), 1,
      anon_sym_borderSize,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(73), 1,
      anon_sym_horizontal,
    ACTIONS(75), 1,
      anon_sym_priority,
    ACTIONS(77), 1,
      anon_sym_slider,
    ACTIONS(79), 1,
      anon_sym_track,
    ACTIONS(81), 1,
      anon_sym_leftbutton,
    ACTIONS(83), 1,
      anon_sym_rightbutton,
    ACTIONS(85), 1,
      anon_sym_maxValue,
    ACTIONS(87), 1,
      anon_sym_minValue,
    ACTIONS(89), 1,
      anon_sym_stepSize,
    ACTIONS(91), 1,
      anon_sym_startValue,
    ACTIONS(93), 1,
      anon_sym_scroll_speed,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__statement_name,
    STATE(8), 16,
      sym__guiButtonType,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_priority,
      sym__statement_gui_slider,
      sym__statement_gui_track,
      sym__statement_gui_leftbutton,
      sym__statement_gui_rightbutton,
      sym__statement_gui_maxValue,
      sym__statement_gui_minValue,
      sym__statement_gui_stepSize,
      sym__statement_gui_startValue,
      sym__statement_gui_horizontal,
      sym__statement_gui_scroll_speed,
      aux_sym__scrollbarType_block_repeat1,
  [477] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_guiButtonType,
    ACTIONS(102), 1,
      anon_sym_name,
    ACTIONS(105), 1,
      anon_sym_size,
    ACTIONS(108), 1,
      anon_sym_borderSize,
    ACTIONS(111), 1,
      anon_sym_position,
    ACTIONS(114), 1,
      anon_sym_horizontal,
    ACTIONS(117), 1,
      anon_sym_priority,
    ACTIONS(120), 1,
      anon_sym_slider,
    ACTIONS(123), 1,
      anon_sym_track,
    ACTIONS(126), 1,
      anon_sym_leftbutton,
    ACTIONS(129), 1,
      anon_sym_rightbutton,
    ACTIONS(132), 1,
      anon_sym_maxValue,
    ACTIONS(135), 1,
      anon_sym_minValue,
    ACTIONS(138), 1,
      anon_sym_stepSize,
    ACTIONS(141), 1,
      anon_sym_startValue,
    ACTIONS(144), 1,
      anon_sym_scroll_speed,
    STATE(108), 1,
      sym__statement_name,
    STATE(10), 16,
      sym__guiButtonType,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_priority,
      sym__statement_gui_slider,
      sym__statement_gui_track,
      sym__statement_gui_leftbutton,
      sym__statement_gui_rightbutton,
      sym__statement_gui_maxValue,
      sym__statement_gui_minValue,
      sym__statement_gui_stepSize,
      sym__statement_gui_startValue,
      sym__statement_gui_horizontal,
      sym__statement_gui_scroll_speed,
      aux_sym__scrollbarType_block_repeat1,
  [553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_text,
    ACTIONS(151), 1,
      sym_assign_equal,
    ACTIONS(147), 30,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [595] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 1,
      anon_sym_name,
    ACTIONS(158), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(161), 1,
      anon_sym_noOfFrames,
    ACTIONS(164), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(167), 1,
      anon_sym_overlay_rows,
    ACTIONS(170), 1,
      anon_sym_effectFile,
    ACTIONS(173), 1,
      anon_sym_animation,
    ACTIONS(176), 1,
      anon_sym_alwaystransparent,
    ACTIONS(179), 1,
      anon_sym_allwaystransparent,
    ACTIONS(182), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(185), 1,
      anon_sym_clicksound,
    ACTIONS(188), 1,
      anon_sym_transparencecheck,
    ACTIONS(191), 1,
      anon_sym_loadType,
    ACTIONS(194), 1,
      anon_sym_norefcount,
    ACTIONS(197), 1,
      anon_sym_alphamaskfile,
    STATE(121), 1,
      sym__statement_gfx_name,
    STATE(12), 15,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_alwaystransparent,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_clicksound,
      sym__statement_gfx_transparencecheck,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      sym__statement_gfx_alphamaskfile,
      aux_sym__spriteType_block_repeat1,
  [667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_text,
    ACTIONS(204), 1,
      sym_assign_equal,
    ACTIONS(200), 30,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_horizontal,
      anon_sym_background,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [709] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(210), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(212), 1,
      anon_sym_noOfFrames,
    ACTIONS(214), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(216), 1,
      anon_sym_overlay_rows,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(220), 1,
      anon_sym_animation,
    ACTIONS(222), 1,
      anon_sym_alwaystransparent,
    ACTIONS(224), 1,
      anon_sym_allwaystransparent,
    ACTIONS(226), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(228), 1,
      anon_sym_clicksound,
    ACTIONS(230), 1,
      anon_sym_transparencecheck,
    ACTIONS(232), 1,
      anon_sym_loadType,
    ACTIONS(234), 1,
      anon_sym_norefcount,
    ACTIONS(236), 1,
      anon_sym_alphamaskfile,
    STATE(121), 1,
      sym__statement_gfx_name,
    STATE(12), 15,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_alwaystransparent,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_clicksound,
      sym__statement_gfx_transparencecheck,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      sym__statement_gfx_alphamaskfile,
      aux_sym__spriteType_block_repeat1,
  [781] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(210), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(212), 1,
      anon_sym_noOfFrames,
    ACTIONS(214), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(216), 1,
      anon_sym_overlay_rows,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(220), 1,
      anon_sym_animation,
    ACTIONS(222), 1,
      anon_sym_alwaystransparent,
    ACTIONS(224), 1,
      anon_sym_allwaystransparent,
    ACTIONS(226), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(228), 1,
      anon_sym_clicksound,
    ACTIONS(230), 1,
      anon_sym_transparencecheck,
    ACTIONS(232), 1,
      anon_sym_loadType,
    ACTIONS(234), 1,
      anon_sym_norefcount,
    ACTIONS(236), 1,
      anon_sym_alphamaskfile,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym__statement_gfx_name,
    STATE(14), 15,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_alwaystransparent,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_clicksound,
      sym__statement_gfx_transparencecheck,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      sym__statement_gfx_alphamaskfile,
      aux_sym__spriteType_block_repeat1,
  [853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_text,
    ACTIONS(240), 30,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_text,
    ACTIONS(244), 30,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_horizontal,
      anon_sym_background,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_assign_equal,
    ACTIONS(250), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(248), 25,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_colortwo,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_horizontal,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_assign_equal,
    ACTIONS(256), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(254), 24,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_colortwo,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_horizontal,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1008] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(210), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(212), 1,
      anon_sym_noOfFrames,
    ACTIONS(214), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(216), 1,
      anon_sym_overlay_rows,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(224), 1,
      anon_sym_allwaystransparent,
    ACTIONS(230), 1,
      anon_sym_transparencecheck,
    ACTIONS(232), 1,
      anon_sym_loadType,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(264), 1,
      anon_sym_looping,
    ACTIONS(266), 1,
      anon_sym_play_on_show,
    ACTIONS(268), 1,
      anon_sym_pause_on_loop,
    STATE(167), 1,
      sym__statement_gfx_name,
    STATE(23), 13,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_animation_rate_fps,
      sym__statement_gfx_looping,
      sym__statement_gfx_play_on_show,
      sym__statement_gfx_pause_on_loop,
      sym__statement_gfx_transparencecheck,
      sym__statement_gfx_loadType,
      aux_sym__frameAnimatedSpriteType_block_repeat1,
  [1072] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      anon_sym_name,
    ACTIONS(275), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(278), 1,
      anon_sym_noOfFrames,
    ACTIONS(281), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(284), 1,
      anon_sym_overlay_rows,
    ACTIONS(287), 1,
      anon_sym_effectFile,
    ACTIONS(290), 1,
      anon_sym_allwaystransparent,
    ACTIONS(293), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(296), 1,
      anon_sym_looping,
    ACTIONS(299), 1,
      anon_sym_play_on_show,
    ACTIONS(302), 1,
      anon_sym_pause_on_loop,
    ACTIONS(305), 1,
      anon_sym_transparencecheck,
    ACTIONS(308), 1,
      anon_sym_loadType,
    STATE(167), 1,
      sym__statement_gfx_name,
    STATE(21), 13,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_animation_rate_fps,
      sym__statement_gfx_looping,
      sym__statement_gfx_play_on_show,
      sym__statement_gfx_pause_on_loop,
      sym__statement_gfx_transparencecheck,
      sym__statement_gfx_loadType,
      aux_sym__frameAnimatedSpriteType_block_repeat1,
  [1136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(311), 25,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_colortwo,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_horizontal,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1172] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(210), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(212), 1,
      anon_sym_noOfFrames,
    ACTIONS(214), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(216), 1,
      anon_sym_overlay_rows,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(224), 1,
      anon_sym_allwaystransparent,
    ACTIONS(230), 1,
      anon_sym_transparencecheck,
    ACTIONS(232), 1,
      anon_sym_loadType,
    ACTIONS(262), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(264), 1,
      anon_sym_looping,
    ACTIONS(266), 1,
      anon_sym_play_on_show,
    ACTIONS(268), 1,
      anon_sym_pause_on_loop,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym__statement_gfx_name,
    STATE(21), 13,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_animation_rate_fps,
      sym__statement_gfx_looping,
      sym__statement_gfx_play_on_show,
      sym__statement_gfx_pause_on_loop,
      sym__statement_gfx_transparencecheck,
      sym__statement_gfx_loadType,
      aux_sym__frameAnimatedSpriteType_block_repeat1,
  [1236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_assign_equal,
    ACTIONS(319), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_effect,
    ACTIONS(317), 23,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_cull_distance,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_text,
    ACTIONS(327), 1,
      sym_assign_equal,
    ACTIONS(323), 25,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(329), 24,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_colortwo,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_horizontal,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1345] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      anon_sym_name,
    ACTIONS(338), 1,
      anon_sym_borderSize,
    ACTIONS(341), 1,
      anon_sym_text,
    ACTIONS(344), 1,
      anon_sym_font,
    ACTIONS(347), 1,
      anon_sym_position,
    ACTIONS(350), 1,
      anon_sym_format,
    ACTIONS(353), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(356), 1,
      anon_sym_textureFile,
    ACTIONS(359), 1,
      anon_sym_maxWidth,
    ACTIONS(362), 1,
      anon_sym_maxHeight,
    ACTIONS(365), 1,
      anon_sym_fixedsize,
    ACTIONS(368), 1,
      anon_sym_truncate,
    STATE(178), 1,
      sym__statement_name,
    STATE(27), 12,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_text,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      sym__statement_gui_fixedsize,
      sym__statement_gui_format,
      sym__statement_gui_truncate,
      aux_sym__instantTextBoxType_block_repeat1,
  [1405] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(69), 1,
      anon_sym_borderSize,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      anon_sym_text,
    ACTIONS(375), 1,
      anon_sym_font,
    ACTIONS(377), 1,
      anon_sym_format,
    ACTIONS(379), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(381), 1,
      anon_sym_textureFile,
    ACTIONS(383), 1,
      anon_sym_maxWidth,
    ACTIONS(385), 1,
      anon_sym_maxHeight,
    ACTIONS(387), 1,
      anon_sym_fixedsize,
    ACTIONS(389), 1,
      anon_sym_truncate,
    STATE(178), 1,
      sym__statement_name,
    STATE(31), 12,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_text,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      sym__statement_gui_fixedsize,
      sym__statement_gui_format,
      sym__statement_gui_truncate,
      aux_sym__instantTextBoxType_block_repeat1,
  [1465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_text,
    ACTIONS(391), 25,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [1499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_effect,
    ACTIONS(395), 23,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_cull_distance,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1533] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(69), 1,
      anon_sym_borderSize,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(373), 1,
      anon_sym_text,
    ACTIONS(375), 1,
      anon_sym_font,
    ACTIONS(377), 1,
      anon_sym_format,
    ACTIONS(379), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(381), 1,
      anon_sym_textureFile,
    ACTIONS(383), 1,
      anon_sym_maxWidth,
    ACTIONS(385), 1,
      anon_sym_maxHeight,
    ACTIONS(387), 1,
      anon_sym_fixedsize,
    ACTIONS(389), 1,
      anon_sym_truncate,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      sym__statement_name,
    STATE(27), 12,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_text,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      sym__statement_gui_fixedsize,
      sym__statement_gui_format,
      sym__statement_gui_truncate,
      aux_sym__instantTextBoxType_block_repeat1,
  [1593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_assign_equal,
    ACTIONS(403), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(401), 23,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(33), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(409), 22,
      aux_sym__mod_tags_keyword_token1,
      aux_sym__mod_tags_keyword_token2,
      aux_sym__mod_tags_keyword_token3,
      aux_sym__mod_tags_keyword_token4,
      aux_sym__mod_tags_keyword_token5,
      aux_sym__mod_tags_keyword_token6,
      aux_sym__mod_tags_keyword_token7,
      aux_sym__mod_tags_keyword_token8,
      aux_sym__mod_tags_keyword_token9,
      aux_sym__mod_tags_keyword_token10,
      aux_sym__mod_tags_keyword_token11,
      aux_sym__mod_tags_keyword_token12,
      aux_sym__mod_tags_keyword_token13,
      aux_sym__mod_tags_keyword_token14,
      aux_sym__mod_tags_keyword_token15,
      aux_sym__mod_tags_keyword_token16,
      aux_sym__mod_tags_keyword_token17,
      aux_sym__mod_tags_keyword_token18,
      aux_sym__mod_tags_keyword_token19,
      aux_sym__mod_tags_keyword_token20,
      aux_sym__mod_tags_keyword_token21,
      aux_sym__mod_tags_keyword_token22,
  [1664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(33), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(414), 22,
      aux_sym__mod_tags_keyword_token1,
      aux_sym__mod_tags_keyword_token2,
      aux_sym__mod_tags_keyword_token3,
      aux_sym__mod_tags_keyword_token4,
      aux_sym__mod_tags_keyword_token5,
      aux_sym__mod_tags_keyword_token6,
      aux_sym__mod_tags_keyword_token7,
      aux_sym__mod_tags_keyword_token8,
      aux_sym__mod_tags_keyword_token9,
      aux_sym__mod_tags_keyword_token10,
      aux_sym__mod_tags_keyword_token11,
      aux_sym__mod_tags_keyword_token12,
      aux_sym__mod_tags_keyword_token13,
      aux_sym__mod_tags_keyword_token14,
      aux_sym__mod_tags_keyword_token15,
      aux_sym__mod_tags_keyword_token16,
      aux_sym__mod_tags_keyword_token17,
      aux_sym__mod_tags_keyword_token18,
      aux_sym__mod_tags_keyword_token19,
      aux_sym__mod_tags_keyword_token20,
      aux_sym__mod_tags_keyword_token21,
      aux_sym__mod_tags_keyword_token22,
  [1699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(418), 22,
      aux_sym__mod_tags_keyword_token1,
      aux_sym__mod_tags_keyword_token2,
      aux_sym__mod_tags_keyword_token3,
      aux_sym__mod_tags_keyword_token4,
      aux_sym__mod_tags_keyword_token5,
      aux_sym__mod_tags_keyword_token6,
      aux_sym__mod_tags_keyword_token7,
      aux_sym__mod_tags_keyword_token8,
      aux_sym__mod_tags_keyword_token9,
      aux_sym__mod_tags_keyword_token10,
      aux_sym__mod_tags_keyword_token11,
      aux_sym__mod_tags_keyword_token12,
      aux_sym__mod_tags_keyword_token13,
      aux_sym__mod_tags_keyword_token14,
      aux_sym__mod_tags_keyword_token15,
      aux_sym__mod_tags_keyword_token16,
      aux_sym__mod_tags_keyword_token17,
      aux_sym__mod_tags_keyword_token18,
      aux_sym__mod_tags_keyword_token19,
      aux_sym__mod_tags_keyword_token20,
      aux_sym__mod_tags_keyword_token21,
      aux_sym__mod_tags_keyword_token22,
  [1734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(420), 23,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_assign_equal,
    ACTIONS(426), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(424), 21,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_assign_equal,
    ACTIONS(432), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(430), 21,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_assign_equal,
    ACTIONS(438), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(436), 21,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(442), 21,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_animation,
    ACTIONS(450), 1,
      sym_assign_equal,
    ACTIONS(446), 21,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(452), 21,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(456), 21,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [1995] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(462), 1,
      anon_sym_name,
    ACTIONS(465), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(468), 1,
      anon_sym_noOfFrames,
    ACTIONS(471), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(474), 1,
      anon_sym_overlay_rows,
    ACTIONS(477), 1,
      anon_sym_effectFile,
    ACTIONS(480), 1,
      anon_sym_allwaystransparent,
    ACTIONS(483), 1,
      anon_sym_clicksound,
    ACTIONS(486), 1,
      anon_sym_transparencecheck,
    ACTIONS(489), 1,
      anon_sym_loadType,
    STATE(263), 1,
      sym__statement_gfx_name,
    STATE(44), 10,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_clicksound,
      sym__statement_gfx_transparencecheck,
      sym__statement_gfx_loadType,
      aux_sym__textSpriteType_block_repeat1,
  [2047] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(15), 1,
      anon_sym_path,
    ACTIONS(17), 1,
      anon_sym_archive,
    ACTIONS(19), 1,
      anon_sym_remote_file_id,
    ACTIONS(21), 1,
      anon_sym_version,
    ACTIONS(23), 1,
      anon_sym_picture,
    ACTIONS(25), 1,
      anon_sym_supported_version,
    ACTIONS(27), 1,
      anon_sym_replace_path,
    ACTIONS(29), 1,
      anon_sym_tags,
    ACTIONS(31), 1,
      anon_sym_dependencies,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    STATE(56), 11,
      sym__statement_name,
      sym__statement_mod_path,
      sym__statement_mod_archive,
      sym__statement_mod_remote_file_id,
      sym__statement_mod_version,
      sym__statement_mod_picture,
      sym__statement_mod_supported_version,
      sym__statement_mod_replace_path,
      sym__statement_mod_tags,
      sym__statement_mod_dependencies,
      aux_sym_dot_mod_repeat1,
  [2097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_assign_equal,
    ACTIONS(494), 21,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_background,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [2127] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(67), 1,
      anon_sym_size,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(379), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(500), 1,
      anon_sym_listBoxType,
    ACTIONS(502), 1,
      anon_sym_editBoxType,
    ACTIONS(504), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(506), 1,
      anon_sym_iconType,
    ACTIONS(508), 1,
      anon_sym_backGround,
    ACTIONS(510), 1,
      anon_sym_moveable,
    STATE(264), 2,
      sym__iconType,
      sym__statement_name,
    STATE(49), 9,
      sym__listBoxType,
      sym__editBoxType,
      sym__instantTextBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [2179] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(67), 1,
      anon_sym_size,
    ACTIONS(69), 1,
      anon_sym_borderSize,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(373), 1,
      anon_sym_text,
    ACTIONS(375), 1,
      anon_sym_font,
    ACTIONS(379), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(381), 1,
      anon_sym_textureFile,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(514), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(516), 1,
      anon_sym_cursor,
    STATE(260), 1,
      sym__statement_name,
    STATE(58), 10,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_cursor,
      sym__statement_gui_text,
      sym__statement_gui_instantTextBoxType,
      aux_sym__editBoxType_block_repeat1,
  [2231] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(67), 1,
      anon_sym_size,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(379), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(500), 1,
      anon_sym_listBoxType,
    ACTIONS(502), 1,
      anon_sym_editBoxType,
    ACTIONS(504), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(506), 1,
      anon_sym_iconType,
    ACTIONS(508), 1,
      anon_sym_backGround,
    ACTIONS(510), 1,
      anon_sym_moveable,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(264), 2,
      sym__iconType,
      sym__statement_name,
    STATE(62), 9,
      sym__listBoxType,
      sym__editBoxType,
      sym__instantTextBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [2283] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(522), 1,
      anon_sym_spriteType,
    ACTIONS(525), 1,
      anon_sym_textSpriteType,
    ACTIONS(528), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(531), 1,
      anon_sym_maskedShieldType,
    ACTIONS(534), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(537), 1,
      anon_sym_progressbartype,
    ACTIONS(540), 1,
      anon_sym_PieChartType,
    ACTIONS(543), 1,
      anon_sym_LineChartType,
    ACTIONS(546), 1,
      anon_sym_cursor_offset,
    STATE(50), 12,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__frameAnimatedSpriteType,
      sym__progressbartype,
      sym__PieChartType,
      sym__LineChartType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [2331] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(210), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(212), 1,
      anon_sym_noOfFrames,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(224), 1,
      anon_sym_allwaystransparent,
    ACTIONS(226), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(232), 1,
      anon_sym_loadType,
    ACTIONS(234), 1,
      anon_sym_norefcount,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(551), 1,
      anon_sym_size,
    ACTIONS(553), 1,
      anon_sym_borderSize,
    STATE(266), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(60), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [2383] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_spriteType,
    ACTIONS(559), 1,
      anon_sym_textSpriteType,
    ACTIONS(561), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(563), 1,
      anon_sym_maskedShieldType,
    ACTIONS(565), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(567), 1,
      anon_sym_progressbartype,
    ACTIONS(569), 1,
      anon_sym_PieChartType,
    ACTIONS(571), 1,
      anon_sym_LineChartType,
    ACTIONS(573), 1,
      anon_sym_cursor_offset,
    STATE(61), 12,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__frameAnimatedSpriteType,
      sym__progressbartype,
      sym__PieChartType,
      sym__LineChartType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [2431] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(210), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(212), 1,
      anon_sym_noOfFrames,
    ACTIONS(214), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(216), 1,
      anon_sym_overlay_rows,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(224), 1,
      anon_sym_allwaystransparent,
    ACTIONS(228), 1,
      anon_sym_clicksound,
    ACTIONS(230), 1,
      anon_sym_transparencecheck,
    ACTIONS(232), 1,
      anon_sym_loadType,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    STATE(263), 1,
      sym__statement_gfx_name,
    STATE(44), 10,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_clicksound,
      sym__statement_gfx_transparencecheck,
      sym__statement_gfx_loadType,
      aux_sym__textSpriteType_block_repeat1,
  [2483] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    ACTIONS(579), 1,
      anon_sym_name,
    ACTIONS(582), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(585), 1,
      anon_sym_noOfFrames,
    ACTIONS(588), 1,
      anon_sym_effectFile,
    ACTIONS(591), 1,
      anon_sym_size,
    ACTIONS(594), 1,
      anon_sym_borderSize,
    ACTIONS(597), 1,
      anon_sym_allwaystransparent,
    ACTIONS(600), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(603), 1,
      anon_sym_loadType,
    ACTIONS(606), 1,
      anon_sym_norefcount,
    STATE(266), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(54), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [2535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_animation,
    ACTIONS(609), 21,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [2565] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
    ACTIONS(615), 1,
      anon_sym_name,
    ACTIONS(618), 1,
      anon_sym_path,
    ACTIONS(621), 1,
      anon_sym_archive,
    ACTIONS(624), 1,
      anon_sym_remote_file_id,
    ACTIONS(627), 1,
      anon_sym_version,
    ACTIONS(630), 1,
      anon_sym_picture,
    ACTIONS(633), 1,
      anon_sym_supported_version,
    ACTIONS(636), 1,
      anon_sym_replace_path,
    ACTIONS(639), 1,
      anon_sym_tags,
    ACTIONS(642), 1,
      anon_sym_dependencies,
    STATE(56), 11,
      sym__statement_name,
      sym__statement_mod_path,
      sym__statement_mod_archive,
      sym__statement_mod_remote_file_id,
      sym__statement_mod_version,
      sym__statement_mod_picture,
      sym__statement_mod_supported_version,
      sym__statement_mod_replace_path,
      sym__statement_mod_tags,
      sym__statement_mod_dependencies,
      aux_sym_dot_mod_repeat1,
  [2615] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(210), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(212), 1,
      anon_sym_noOfFrames,
    ACTIONS(214), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(216), 1,
      anon_sym_overlay_rows,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(224), 1,
      anon_sym_allwaystransparent,
    ACTIONS(228), 1,
      anon_sym_clicksound,
    ACTIONS(230), 1,
      anon_sym_transparencecheck,
    ACTIONS(232), 1,
      anon_sym_loadType,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    STATE(263), 1,
      sym__statement_gfx_name,
    STATE(53), 10,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_clicksound,
      sym__statement_gfx_transparencecheck,
      sym__statement_gfx_loadType,
      aux_sym__textSpriteType_block_repeat1,
  [2667] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(652), 1,
      anon_sym_name,
    ACTIONS(655), 1,
      anon_sym_size,
    ACTIONS(658), 1,
      anon_sym_borderSize,
    ACTIONS(661), 1,
      anon_sym_text,
    ACTIONS(664), 1,
      anon_sym_font,
    ACTIONS(667), 1,
      anon_sym_position,
    ACTIONS(670), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(673), 1,
      anon_sym_textureFile,
    ACTIONS(676), 1,
      anon_sym_cursor,
    STATE(260), 1,
      sym__statement_name,
    STATE(58), 10,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_cursor,
      sym__statement_gui_text,
      sym__statement_gui_instantTextBoxType,
      aux_sym__editBoxType_block_repeat1,
  [2719] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(67), 1,
      anon_sym_size,
    ACTIONS(69), 1,
      anon_sym_borderSize,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(373), 1,
      anon_sym_text,
    ACTIONS(375), 1,
      anon_sym_font,
    ACTIONS(379), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(381), 1,
      anon_sym_textureFile,
    ACTIONS(514), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(516), 1,
      anon_sym_cursor,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym__statement_name,
    STATE(48), 10,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_cursor,
      sym__statement_gui_text,
      sym__statement_gui_instantTextBoxType,
      aux_sym__editBoxType_block_repeat1,
  [2771] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(210), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(212), 1,
      anon_sym_noOfFrames,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(224), 1,
      anon_sym_allwaystransparent,
    ACTIONS(226), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(232), 1,
      anon_sym_loadType,
    ACTIONS(234), 1,
      anon_sym_norefcount,
    ACTIONS(551), 1,
      anon_sym_size,
    ACTIONS(553), 1,
      anon_sym_borderSize,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    STATE(266), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(54), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [2823] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_spriteType,
    ACTIONS(559), 1,
      anon_sym_textSpriteType,
    ACTIONS(561), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(563), 1,
      anon_sym_maskedShieldType,
    ACTIONS(565), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(567), 1,
      anon_sym_progressbartype,
    ACTIONS(569), 1,
      anon_sym_PieChartType,
    ACTIONS(571), 1,
      anon_sym_LineChartType,
    ACTIONS(573), 1,
      anon_sym_cursor_offset,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    STATE(50), 12,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__frameAnimatedSpriteType,
      sym__progressbartype,
      sym__PieChartType,
      sym__LineChartType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [2871] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 1,
      anon_sym_listBoxType,
    ACTIONS(690), 1,
      anon_sym_editBoxType,
    ACTIONS(693), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(696), 1,
      anon_sym_iconType,
    ACTIONS(699), 1,
      anon_sym_name,
    ACTIONS(702), 1,
      anon_sym_size,
    ACTIONS(705), 1,
      anon_sym_position,
    ACTIONS(708), 1,
      anon_sym_backGround,
    ACTIONS(711), 1,
      anon_sym_moveable,
    ACTIONS(714), 1,
      aux_sym__statement_gui_orientation_token1,
    STATE(264), 2,
      sym__iconType,
      sym__statement_name,
    STATE(62), 9,
      sym__listBoxType,
      sym__editBoxType,
      sym__instantTextBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [2923] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
    ACTIONS(721), 1,
      anon_sym_animationrotation,
    ACTIONS(723), 1,
      anon_sym_animationlooping,
    ACTIONS(729), 1,
      anon_sym_animationblendmode,
    ACTIONS(731), 1,
      anon_sym_animationtype,
    ACTIONS(733), 1,
      anon_sym_animationframes,
    ACTIONS(719), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(725), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(727), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(65), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [2968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 21,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_background,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [2995] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    ACTIONS(742), 1,
      anon_sym_animationrotation,
    ACTIONS(745), 1,
      anon_sym_animationlooping,
    ACTIONS(754), 1,
      anon_sym_animationblendmode,
    ACTIONS(757), 1,
      anon_sym_animationtype,
    ACTIONS(760), 1,
      anon_sym_animationframes,
    ACTIONS(739), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(748), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(751), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(65), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [3040] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_animationrotation,
    ACTIONS(723), 1,
      anon_sym_animationlooping,
    ACTIONS(729), 1,
      anon_sym_animationblendmode,
    ACTIONS(731), 1,
      anon_sym_animationtype,
    ACTIONS(733), 1,
      anon_sym_animationframes,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    ACTIONS(719), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(725), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(727), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(63), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [3085] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(232), 1,
      anon_sym_loadType,
    ACTIONS(551), 1,
      anon_sym_size,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    ACTIONS(767), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(769), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(771), 1,
      anon_sym_color,
    ACTIONS(773), 1,
      anon_sym_colortwo,
    ACTIONS(775), 1,
      anon_sym_horizontal,
    STATE(276), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(72), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [3133] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(67), 1,
      anon_sym_size,
    ACTIONS(69), 1,
      anon_sym_borderSize,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(75), 1,
      anon_sym_priority,
    ACTIONS(379), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(779), 1,
      anon_sym_allwaystransparent,
    ACTIONS(781), 1,
      anon_sym_background,
    ACTIONS(783), 1,
      anon_sym_scrollbartype,
    STATE(291), 1,
      sym__statement_name,
    STATE(70), 9,
      sym__statement_gui_background,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_priority,
      sym__statement_gui_scrollbartype,
      sym__statement_gui_allwaystransparent,
      aux_sym__listBoxType_block_repeat1,
  [3181] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(212), 1,
      anon_sym_noOfFrames,
    ACTIONS(214), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(216), 1,
      anon_sym_overlay_rows,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(230), 1,
      anon_sym_transparencecheck,
    ACTIONS(767), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(769), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    ACTIONS(787), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    STATE(272), 1,
      sym__statement_gfx_name,
    STATE(71), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [3229] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(67), 1,
      anon_sym_size,
    ACTIONS(69), 1,
      anon_sym_borderSize,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(75), 1,
      anon_sym_priority,
    ACTIONS(379), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(779), 1,
      anon_sym_allwaystransparent,
    ACTIONS(781), 1,
      anon_sym_background,
    ACTIONS(783), 1,
      anon_sym_scrollbartype,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    STATE(291), 1,
      sym__statement_name,
    STATE(74), 9,
      sym__statement_gui_background,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_priority,
      sym__statement_gui_scrollbartype,
      sym__statement_gui_allwaystransparent,
      aux_sym__listBoxType_block_repeat1,
  [3277] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(212), 1,
      anon_sym_noOfFrames,
    ACTIONS(214), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(216), 1,
      anon_sym_overlay_rows,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(230), 1,
      anon_sym_transparencecheck,
    ACTIONS(767), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(769), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(787), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(791), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      sym__statement_gfx_name,
    STATE(73), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [3325] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    ACTIONS(795), 1,
      anon_sym_name,
    ACTIONS(798), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(801), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(804), 1,
      anon_sym_effectFile,
    ACTIONS(807), 1,
      anon_sym_size,
    ACTIONS(810), 1,
      anon_sym_color,
    ACTIONS(813), 1,
      anon_sym_colortwo,
    ACTIONS(816), 1,
      anon_sym_horizontal,
    ACTIONS(819), 1,
      anon_sym_loadType,
    STATE(276), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(72), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [3373] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    ACTIONS(824), 1,
      anon_sym_name,
    ACTIONS(827), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(830), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(833), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(836), 1,
      anon_sym_noOfFrames,
    ACTIONS(839), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(842), 1,
      anon_sym_overlay_rows,
    ACTIONS(845), 1,
      anon_sym_effectFile,
    ACTIONS(848), 1,
      anon_sym_transparencecheck,
    STATE(272), 1,
      sym__statement_gfx_name,
    STATE(73), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [3421] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(853), 1,
      anon_sym_name,
    ACTIONS(856), 1,
      anon_sym_size,
    ACTIONS(859), 1,
      anon_sym_borderSize,
    ACTIONS(862), 1,
      anon_sym_allwaystransparent,
    ACTIONS(865), 1,
      anon_sym_position,
    ACTIONS(868), 1,
      anon_sym_background,
    ACTIONS(871), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(874), 1,
      anon_sym_priority,
    ACTIONS(877), 1,
      anon_sym_scrollbartype,
    STATE(291), 1,
      sym__statement_name,
    STATE(74), 9,
      sym__statement_gui_background,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_priority,
      sym__statement_gui_scrollbartype,
      sym__statement_gui_allwaystransparent,
      aux_sym__listBoxType_block_repeat1,
  [3469] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(218), 1,
      anon_sym_effectFile,
    ACTIONS(232), 1,
      anon_sym_loadType,
    ACTIONS(551), 1,
      anon_sym_size,
    ACTIONS(767), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(769), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(771), 1,
      anon_sym_color,
    ACTIONS(773), 1,
      anon_sym_colortwo,
    ACTIONS(775), 1,
      anon_sym_horizontal,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    STATE(276), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(67), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [3517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_assign_equal,
    ACTIONS(884), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
      anon_sym_effect,
    ACTIONS(882), 15,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_cull_distance,
      anon_sym_horizontal,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [3546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym_assign_equal,
    ACTIONS(888), 18,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [3573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_assign_equal,
    ACTIONS(892), 18,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [3600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym_assign_equal,
    ACTIONS(896), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [3626] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(69), 1,
      anon_sym_borderSize,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(373), 1,
      anon_sym_text,
    ACTIONS(375), 1,
      anon_sym_font,
    ACTIONS(381), 1,
      anon_sym_textureFile,
    ACTIONS(383), 1,
      anon_sym_maxWidth,
    ACTIONS(385), 1,
      anon_sym_maxHeight,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym__statement_name,
    STATE(93), 8,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_text,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      aux_sym__textBoxType_block_repeat1,
  [3670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_assign_equal,
    ACTIONS(902), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [3696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 18,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [3720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_assign_equal,
    ACTIONS(908), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [3746] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
    ACTIONS(914), 1,
      anon_sym_name,
    ACTIONS(917), 1,
      anon_sym_borderSize,
    ACTIONS(920), 1,
      anon_sym_text,
    ACTIONS(923), 1,
      anon_sym_font,
    ACTIONS(926), 1,
      anon_sym_position,
    ACTIONS(929), 1,
      anon_sym_textureFile,
    ACTIONS(932), 1,
      anon_sym_maxWidth,
    ACTIONS(935), 1,
      anon_sym_maxHeight,
    STATE(322), 1,
      sym__statement_name,
    STATE(84), 8,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_text,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      aux_sym__textBoxType_block_repeat1,
  [3790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym_assign_equal,
    ACTIONS(938), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [3816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
      anon_sym_effect,
    ACTIONS(942), 15,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_cull_distance,
      anon_sym_horizontal,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [3842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_assign_equal,
    ACTIONS(946), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym_assign_equal,
    ACTIONS(950), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [3894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 18,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [3918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_assign_equal,
    ACTIONS(956), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [3944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_assign_equal,
    ACTIONS(962), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(960), 15,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_linewidth,
  [3972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      sym_assign_equal,
    ACTIONS(966), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [3998] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(69), 1,
      anon_sym_borderSize,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(373), 1,
      anon_sym_text,
    ACTIONS(375), 1,
      anon_sym_font,
    ACTIONS(381), 1,
      anon_sym_textureFile,
    ACTIONS(383), 1,
      anon_sym_maxWidth,
    ACTIONS(385), 1,
      anon_sym_maxHeight,
    ACTIONS(970), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym__statement_name,
    STATE(84), 8,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_text,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      aux_sym__textBoxType_block_repeat1,
  [4042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      sym_assign_equal,
    ACTIONS(972), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      sym_assign_equal,
    ACTIONS(976), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      sym_assign_equal,
    ACTIONS(980), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_assign_equal,
    ACTIONS(986), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [4168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_text,
    ACTIONS(990), 15,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_animation,
      anon_sym_size,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
      anon_sym_effect,
  [4193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_text,
    ACTIONS(998), 1,
      sym_assign_equal,
    ACTIONS(994), 15,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [4220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym_assign_equal,
    ACTIONS(1000), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [4245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      sym_assign_equal,
    ACTIONS(1004), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [4270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      sym_assign_equal,
    ACTIONS(1008), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [4295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(1028), 15,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_linewidth,
  [4504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym_assign_equal,
    ACTIONS(1038), 16,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_textcolors,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [4598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 17,
      anon_sym_RBRACE,
      anon_sym_guiButtonType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_position,
      anon_sym_horizontal,
      anon_sym_priority,
      anon_sym_slider,
      anon_sym_track,
      anon_sym_leftbutton,
      anon_sym_rightbutton,
      anon_sym_maxValue,
      anon_sym_minValue,
      anon_sym_stepSize,
      anon_sym_startValue,
      anon_sym_scroll_speed,
  [4644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_text,
    ACTIONS(1050), 1,
      sym_assign_equal,
    ACTIONS(1046), 15,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [4671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_text,
    ACTIONS(1056), 1,
      sym_assign_equal,
    ACTIONS(1052), 15,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [4698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [4720] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_RBRACE,
    ACTIONS(1062), 1,
      anon_sym_size,
    ACTIONS(1065), 1,
      anon_sym_text,
    ACTIONS(1068), 1,
      anon_sym_color,
    ACTIONS(1071), 1,
      anon_sym_font,
    ACTIONS(1074), 1,
      anon_sym_position,
    ACTIONS(1077), 1,
      anon_sym_format,
    ACTIONS(1080), 1,
      anon_sym_cull_distance,
    STATE(122), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [4758] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_cursor_offset,
    ACTIONS(1083), 1,
      anon_sym_RBRACE,
    ACTIONS(1085), 1,
      anon_sym_textcolors,
    ACTIONS(1087), 1,
      anon_sym_name,
    ACTIONS(1089), 1,
      anon_sym_path,
    ACTIONS(1091), 1,
      anon_sym_color,
    ACTIONS(1093), 1,
      anon_sym_border_color,
    ACTIONS(1095), 1,
      anon_sym_effect,
    STATE(345), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(130), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [4798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_color,
    ACTIONS(1101), 1,
      sym_assign_equal,
    ACTIONS(1097), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [4824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [4846] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(1105), 1,
      anon_sym_RBRACE,
    ACTIONS(1107), 1,
      anon_sym_quadTextureSprite,
    ACTIONS(1109), 1,
      anon_sym_parent,
    ACTIONS(1111), 1,
      anon_sym_tooltip,
    ACTIONS(1113), 1,
      anon_sym_tooltipText,
    ACTIONS(1115), 1,
      anon_sym_delayedTooltipText,
    STATE(331), 1,
      sym__statement_name,
    STATE(131), 7,
      sym__statement_gui_position,
      sym__statement_gui_quadTextureSprite,
      sym__statement_gui_parent,
      sym__statement_gui_tooltip,
      sym__statement_gui_tooltipText,
      sym__statement_gui_delayedTooltipText,
      aux_sym__guiButtonType_block_repeat1,
  [4886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_text,
    ACTIONS(1117), 15,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [4910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_text,
    ACTIONS(1121), 15,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [4934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_text,
    ACTIONS(1125), 15,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [4958] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_RBRACE,
    ACTIONS(1131), 1,
      anon_sym_textcolors,
    ACTIONS(1134), 1,
      anon_sym_name,
    ACTIONS(1137), 1,
      anon_sym_path,
    ACTIONS(1140), 1,
      anon_sym_cursor_offset,
    ACTIONS(1143), 1,
      anon_sym_color,
    ACTIONS(1146), 1,
      anon_sym_border_color,
    ACTIONS(1149), 1,
      anon_sym_effect,
    STATE(345), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(130), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [4998] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(1107), 1,
      anon_sym_quadTextureSprite,
    ACTIONS(1109), 1,
      anon_sym_parent,
    ACTIONS(1111), 1,
      anon_sym_tooltip,
    ACTIONS(1113), 1,
      anon_sym_tooltipText,
    ACTIONS(1115), 1,
      anon_sym_delayedTooltipText,
    ACTIONS(1152), 1,
      anon_sym_RBRACE,
    STATE(331), 1,
      sym__statement_name,
    STATE(135), 7,
      sym__statement_gui_position,
      sym__statement_gui_quadTextureSprite,
      sym__statement_gui_parent,
      sym__statement_gui_tooltip,
      sym__statement_gui_tooltipText,
      sym__statement_gui_delayedTooltipText,
      aux_sym__guiButtonType_block_repeat1,
  [5038] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
    ACTIONS(1156), 1,
      anon_sym_size,
    ACTIONS(1158), 1,
      anon_sym_text,
    ACTIONS(1160), 1,
      anon_sym_color,
    ACTIONS(1162), 1,
      anon_sym_font,
    ACTIONS(1164), 1,
      anon_sym_position,
    ACTIONS(1166), 1,
      anon_sym_format,
    ACTIONS(1168), 1,
      anon_sym_cull_distance,
    STATE(138), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [5076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [5098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [5120] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_RBRACE,
    ACTIONS(1176), 1,
      anon_sym_name,
    ACTIONS(1179), 1,
      anon_sym_position,
    ACTIONS(1182), 1,
      anon_sym_quadTextureSprite,
    ACTIONS(1185), 1,
      anon_sym_parent,
    ACTIONS(1188), 1,
      anon_sym_tooltip,
    ACTIONS(1191), 1,
      anon_sym_tooltipText,
    ACTIONS(1194), 1,
      anon_sym_delayedTooltipText,
    STATE(331), 1,
      sym__statement_name,
    STATE(135), 7,
      sym__statement_gui_position,
      sym__statement_gui_quadTextureSprite,
      sym__statement_gui_parent,
      sym__statement_gui_tooltip,
      sym__statement_gui_tooltipText,
      sym__statement_gui_delayedTooltipText,
      aux_sym__guiButtonType_block_repeat1,
  [5160] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_cursor_offset,
    ACTIONS(1085), 1,
      anon_sym_textcolors,
    ACTIONS(1087), 1,
      anon_sym_name,
    ACTIONS(1089), 1,
      anon_sym_path,
    ACTIONS(1091), 1,
      anon_sym_color,
    ACTIONS(1093), 1,
      anon_sym_border_color,
    ACTIONS(1095), 1,
      anon_sym_effect,
    ACTIONS(1197), 1,
      anon_sym_RBRACE,
    STATE(345), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(123), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [5200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [5222] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_size,
    ACTIONS(1158), 1,
      anon_sym_text,
    ACTIONS(1160), 1,
      anon_sym_color,
    ACTIONS(1162), 1,
      anon_sym_font,
    ACTIONS(1164), 1,
      anon_sym_position,
    ACTIONS(1166), 1,
      anon_sym_format,
    ACTIONS(1168), 1,
      anon_sym_cull_distance,
    ACTIONS(1201), 1,
      anon_sym_RBRACE,
    STATE(122), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [5260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [5282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 16,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_textcolors,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_alwaystransparent,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
      anon_sym_norefcount,
      anon_sym_alphamaskfile,
  [5326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      sym_assign_equal,
    ACTIONS(1209), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [5349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_color,
    ACTIONS(1213), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [5372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_RBRACE,
    STATE(150), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(1219), 12,
      anon_sym_B,
      anon_sym_b,
      anon_sym_G,
      anon_sym_H,
      anon_sym_l,
      anon_sym_M,
      anon_sym_O,
      anon_sym_g,
      anon_sym_R,
      anon_sym_T,
      anon_sym_W,
      anon_sym_Y,
  [5397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      sym_assign_equal,
    ACTIONS(1221), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [5420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      sym_assign_equal,
    ACTIONS(1225), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [5443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      sym_assign_equal,
    ACTIONS(1229), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [5466] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      anon_sym_SEMI,
    ACTIONS(1239), 1,
      sym_assign_equal,
    ACTIONS(1235), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(1233), 11,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_cull_distance,
      anon_sym_transparencecheck,
  [5493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      sym_assign_equal,
    ACTIONS(1241), 14,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [5516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      anon_sym_RBRACE,
    STATE(150), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(1247), 12,
      anon_sym_B,
      anon_sym_b,
      anon_sym_G,
      anon_sym_H,
      anon_sym_l,
      anon_sym_M,
      anon_sym_O,
      anon_sym_g,
      anon_sym_R,
      anon_sym_T,
      anon_sym_W,
      anon_sym_Y,
  [5541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_RBRACE,
    STATE(144), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(1219), 12,
      anon_sym_B,
      anon_sym_b,
      anon_sym_G,
      anon_sym_H,
      anon_sym_l,
      anon_sym_M,
      anon_sym_O,
      anon_sym_g,
      anon_sym_R,
      anon_sym_T,
      anon_sym_W,
      anon_sym_Y,
  [5566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 14,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [5586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 14,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [5606] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(1256), 1,
      anon_sym_RBRACE,
    ACTIONS(1258), 1,
      anon_sym_animation,
    ACTIONS(1260), 1,
      anon_sym_cull_distance,
    ACTIONS(1262), 1,
      anon_sym_file,
    ACTIONS(1264), 1,
      anon_sym_meshsettings,
    ACTIONS(1266), 1,
      anon_sym_scale,
    STATE(364), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(157), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [5642] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(769), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(787), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(1260), 1,
      anon_sym_cull_distance,
    ACTIONS(1268), 1,
      anon_sym_RBRACE,
    ACTIONS(1270), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1272), 1,
      anon_sym_effect,
    STATE(379), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(164), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [5678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_text,
    ACTIONS(1278), 1,
      sym_assign_equal,
    ACTIONS(1274), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [5702] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_RBRACE,
    ACTIONS(1282), 1,
      anon_sym_name,
    ACTIONS(1285), 1,
      anon_sym_animation,
    ACTIONS(1288), 1,
      anon_sym_cull_distance,
    ACTIONS(1291), 1,
      anon_sym_file,
    ACTIONS(1294), 1,
      anon_sym_meshsettings,
    ACTIONS(1297), 1,
      anon_sym_scale,
    STATE(364), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(157), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [5738] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(769), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(787), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(1260), 1,
      anon_sym_cull_distance,
    ACTIONS(1270), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1272), 1,
      anon_sym_effect,
    ACTIONS(1300), 1,
      anon_sym_RBRACE,
    STATE(379), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(155), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [5774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_SEMI,
    ACTIONS(1304), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(1302), 11,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_cull_distance,
      anon_sym_transparencecheck,
  [5798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [5818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [5858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [5878] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_RBRACE,
    ACTIONS(1318), 1,
      anon_sym_name,
    ACTIONS(1321), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1324), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(1327), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(1330), 1,
      anon_sym_cull_distance,
    ACTIONS(1333), 1,
      anon_sym_effect,
    STATE(379), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(164), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [5914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      sym_assign_equal,
    ACTIONS(1336), 13,
      anon_sym_RBRACE,
      anon_sym_B,
      anon_sym_b,
      anon_sym_G,
      anon_sym_H,
      anon_sym_l,
      anon_sym_M,
      anon_sym_O,
      anon_sym_g,
      anon_sym_R,
      anon_sym_T,
      anon_sym_W,
      anon_sym_Y,
  [5936] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(1258), 1,
      anon_sym_animation,
    ACTIONS(1260), 1,
      anon_sym_cull_distance,
    ACTIONS(1262), 1,
      anon_sym_file,
    ACTIONS(1264), 1,
      anon_sym_meshsettings,
    ACTIONS(1266), 1,
      anon_sym_scale,
    ACTIONS(1340), 1,
      anon_sym_RBRACE,
    STATE(364), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(154), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [5972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 14,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [5992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_text,
    ACTIONS(1348), 1,
      sym_assign_equal,
    ACTIONS(1344), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [6016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_text,
    ACTIONS(1354), 1,
      sym_assign_equal,
    ACTIONS(1350), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [6040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_text,
    ACTIONS(1360), 1,
      sym_assign_equal,
    ACTIONS(1356), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [6064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      anon_sym_text,
    ACTIONS(1366), 1,
      sym_assign_equal,
    ACTIONS(1362), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [6088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 14,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [6108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 1,
      anon_sym_animationrotation,
    ACTIONS(1374), 1,
      sym_assign_equal,
    ACTIONS(1370), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      anon_sym_animationrotation,
    ACTIONS(1380), 1,
      sym_assign_equal,
    ACTIONS(1376), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6154] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      anon_sym_RBRACE,
    ACTIONS(1384), 1,
      anon_sym_animatedmaptext,
    ACTIONS(1387), 1,
      anon_sym_pdxmesh,
    ACTIONS(1390), 1,
      anon_sym_pdxparticle,
    ACTIONS(1393), 1,
      anon_sym_arrowType,
    ACTIONS(1396), 1,
      anon_sym_tradeRouteType,
    STATE(175), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [6185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 13,
      anon_sym_RBRACE,
      anon_sym_B,
      anon_sym_b,
      anon_sym_G,
      anon_sym_H,
      anon_sym_l,
      anon_sym_M,
      anon_sym_O,
      anon_sym_g,
      anon_sym_R,
      anon_sym_T,
      anon_sym_W,
      anon_sym_Y,
  [6204] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_RBRACE,
    ACTIONS(1403), 1,
      anon_sym_animatedmaptext,
    ACTIONS(1405), 1,
      anon_sym_pdxmesh,
    ACTIONS(1407), 1,
      anon_sym_pdxparticle,
    ACTIONS(1409), 1,
      anon_sym_arrowType,
    ACTIONS(1411), 1,
      anon_sym_tradeRouteType,
    STATE(186), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [6235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_text,
    ACTIONS(1413), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [6256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_animationrotation,
    ACTIONS(1421), 1,
      sym_assign_equal,
    ACTIONS(1417), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_text,
    ACTIONS(1423), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [6300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_text,
    ACTIONS(1427), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [6321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_animationrotation,
    ACTIONS(1435), 1,
      sym_assign_equal,
    ACTIONS(1431), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      anon_sym_animationrotation,
    ACTIONS(1441), 1,
      sym_assign_equal,
    ACTIONS(1437), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_text,
    ACTIONS(1443), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [6388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_animationrotation,
    ACTIONS(1451), 1,
      sym_assign_equal,
    ACTIONS(1447), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6411] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      anon_sym_animatedmaptext,
    ACTIONS(1405), 1,
      anon_sym_pdxmesh,
    ACTIONS(1407), 1,
      anon_sym_pdxparticle,
    ACTIONS(1409), 1,
      anon_sym_arrowType,
    ACTIONS(1411), 1,
      anon_sym_tradeRouteType,
    ACTIONS(1453), 1,
      anon_sym_RBRACE,
    STATE(175), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [6442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(1455), 11,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_cull_distance,
      anon_sym_transparencecheck,
  [6463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_text,
    ACTIONS(1459), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [6484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(1463), 11,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_cull_distance,
      anon_sym_transparencecheck,
  [6505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_text,
    ACTIONS(1467), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
      anon_sym_truncate,
  [6526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      anon_sym_animationrotation,
    ACTIONS(1475), 1,
      sym_assign_equal,
    ACTIONS(1471), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_animationrotation,
    ACTIONS(1481), 1,
      sym_assign_equal,
    ACTIONS(1477), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      anon_sym_text,
    ACTIONS(1487), 1,
      sym_assign_equal,
    ACTIONS(1483), 10,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_cursor,
  [6594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      sym_assign_equal,
    ACTIONS(1489), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [6614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_animationrotation,
    ACTIONS(1493), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6634] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      anon_sym_RBRACE,
    ACTIONS(1499), 1,
      anon_sym_name,
    ACTIONS(1502), 1,
      anon_sym_texture,
    ACTIONS(1505), 1,
      anon_sym_normal,
    ACTIONS(1508), 1,
      anon_sym_specular,
    ACTIONS(1511), 1,
      anon_sym_effect,
    STATE(382), 1,
      sym__statement_gfx_name,
    STATE(196), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [6666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 1,
      anon_sym_animationrotation,
    ACTIONS(1514), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 1,
      anon_sym_text,
    ACTIONS(1522), 1,
      sym_assign_equal,
    ACTIONS(1518), 10,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_cursor,
  [6708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1526), 1,
      sym_assign_equal,
    ACTIONS(1524), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [6728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      sym_assign_equal,
    ACTIONS(1528), 11,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_loadType,
      anon_sym_norefcount,
  [6748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 1,
      anon_sym_animationrotation,
    ACTIONS(1532), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 1,
      sym_assign_equal,
    ACTIONS(1536), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [6788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 1,
      sym_assign_equal,
    ACTIONS(1540), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [6808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_animationrotation,
    ACTIONS(1544), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      sym_assign_equal,
    ACTIONS(1548), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [6848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      sym_assign_equal,
    ACTIONS(1552), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [6868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      sym_assign_equal,
    ACTIONS(1556), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [6888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      sym_assign_equal,
    ACTIONS(1560), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [6908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      sym_assign_equal,
    ACTIONS(1564), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [6928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      sym_assign_equal,
    ACTIONS(1568), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [6948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      sym_assign_equal,
    ACTIONS(1572), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [6968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_animationrotation,
    ACTIONS(1576), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [6988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      sym_assign_equal,
    ACTIONS(1580), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_animationrotation,
    ACTIONS(1584), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [7028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_animationrotation,
    ACTIONS(1588), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [7048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1596), 1,
      sym_assign_equal,
    ACTIONS(1592), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
      anon_sym_effect,
  [7070] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(1272), 1,
      anon_sym_effect,
    ACTIONS(1598), 1,
      anon_sym_RBRACE,
    ACTIONS(1600), 1,
      anon_sym_texture,
    ACTIONS(1602), 1,
      anon_sym_normal,
    ACTIONS(1604), 1,
      anon_sym_specular,
    STATE(382), 1,
      sym__statement_gfx_name,
    STATE(196), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [7102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_animationrotation,
    ACTIONS(1606), 11,
      anon_sym_RBRACE,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
      anon_sym_animationlooping,
      anon_sym_animationtime,
      anon_sym_animationdelay,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
      anon_sym_animationblendmode,
      anon_sym_animationtype,
      anon_sym_animationframes,
  [7122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      sym_assign_equal,
    ACTIONS(1610), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7142] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(1272), 1,
      anon_sym_effect,
    ACTIONS(1600), 1,
      anon_sym_texture,
    ACTIONS(1602), 1,
      anon_sym_normal,
    ACTIONS(1604), 1,
      anon_sym_specular,
    ACTIONS(1614), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      sym__statement_gfx_name,
    STATE(217), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [7174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 1,
      sym_assign_equal,
    ACTIONS(1616), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      sym_assign_equal,
    ACTIONS(1620), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [7213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7230] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_iconType,
    ACTIONS(1626), 1,
      anon_sym_RBRACE,
    ACTIONS(1628), 1,
      anon_sym_windowType,
    ACTIONS(1630), 1,
      anon_sym_textBoxType,
    ACTIONS(1632), 1,
      anon_sym_scrollbarType,
    STATE(430), 1,
      sym__iconType,
    STATE(234), 5,
      sym__guiTypes_type,
      sym__windowType,
      sym__textBoxType,
      sym__scrollbarType,
      aux_sym__guiTypes_block_repeat1,
  [7259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      sym_assign_equal,
    ACTIONS(1634), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [7278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      sym_assign_equal,
    ACTIONS(1640), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [7314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1652), 1,
      sym_assign_equal,
    ACTIONS(1650), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [7384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      sym_assign_equal,
    ACTIONS(1654), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [7403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1660), 1,
      sym_assign_equal,
    ACTIONS(1658), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [7422] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      anon_sym_RBRACE,
    ACTIONS(1664), 1,
      anon_sym_windowType,
    ACTIONS(1667), 1,
      anon_sym_textBoxType,
    ACTIONS(1670), 1,
      anon_sym_iconType,
    ACTIONS(1673), 1,
      anon_sym_scrollbarType,
    STATE(430), 1,
      sym__iconType,
    STATE(234), 5,
      sym__guiTypes_type,
      sym__windowType,
      sym__textBoxType,
      sym__scrollbarType,
      aux_sym__guiTypes_block_repeat1,
  [7451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 1,
      sym_assign_equal,
    ACTIONS(1680), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [7504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      sym_assign_equal,
    ACTIONS(1684), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [7523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      sym_assign_equal,
    ACTIONS(1692), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [7576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1698), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1700), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1704), 1,
      anon_sym_text,
    ACTIONS(1702), 10,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_cursor,
  [7646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1710), 1,
      sym_assign_equal,
    ACTIONS(1708), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_texture,
    ACTIONS(1706), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [7667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      sym_assign_equal,
    ACTIONS(1712), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [7686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      sym_assign_equal,
    ACTIONS(1716), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [7705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1722), 1,
      anon_sym_text,
    ACTIONS(1720), 10,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_cursor,
  [7724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1724), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1726), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1728), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1730), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1732), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1734), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1736), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1738), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1740), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1742), 11,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_loadType,
      anon_sym_norefcount,
  [7894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1746), 1,
      anon_sym_text,
    ACTIONS(1744), 10,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_textureFile,
      anon_sym_cursor,
  [7913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1748), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1750), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1752), 11,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_clicksound,
      anon_sym_transparencecheck,
      anon_sym_loadType,
  [7964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1754), 11,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_iconType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      aux_sym__statement_gui_orientation_token1,
  [7981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1756), 11,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_replace_path,
      anon_sym_tags,
      anon_sym_dependencies,
  [7998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1758), 11,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_loadType,
      anon_sym_norefcount,
  [8015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1762), 1,
      anon_sym_color,
    ACTIONS(1764), 1,
      sym_assign_equal,
    ACTIONS(1760), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [8036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1768), 1,
      anon_sym_color,
    ACTIONS(1770), 1,
      sym_assign_equal,
    ACTIONS(1766), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [8057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1774), 1,
      anon_sym_color,
    ACTIONS(1776), 1,
      sym_assign_equal,
    ACTIONS(1772), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [8078] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_iconType,
    ACTIONS(1628), 1,
      anon_sym_windowType,
    ACTIONS(1630), 1,
      anon_sym_textBoxType,
    ACTIONS(1632), 1,
      anon_sym_scrollbarType,
    ACTIONS(1778), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      sym__iconType,
    STATE(224), 5,
      sym__guiTypes_type,
      sym__windowType,
      sym__textBoxType,
      sym__scrollbarType,
      aux_sym__guiTypes_block_repeat1,
  [8107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1780), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1782), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_transparencecheck,
  [8139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1784), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1786), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1788), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1792), 1,
      anon_sym_color,
    ACTIONS(1790), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [8205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1796), 1,
      sym_assign_equal,
    ACTIONS(1794), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [8223] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(379), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(1798), 1,
      anon_sym_RBRACE,
    ACTIONS(1800), 1,
      anon_sym_spriteType,
    ACTIONS(1802), 1,
      anon_sym_name,
    STATE(426), 1,
      sym__statement_name,
    STATE(301), 4,
      sym__statement_gui_position,
      sym__statement_gui_orientation,
      sym__statement_gui_spriteType,
      aux_sym__iconType_block_repeat1,
  [8251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1804), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1806), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1808), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1810), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1812), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1816), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_texture,
    ACTIONS(1814), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8349] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_position,
    ACTIONS(379), 1,
      aux_sym__statement_gui_orientation_token1,
    ACTIONS(1800), 1,
      anon_sym_spriteType,
    ACTIONS(1802), 1,
      anon_sym_name,
    ACTIONS(1818), 1,
      anon_sym_RBRACE,
    STATE(426), 1,
      sym__statement_name,
    STATE(278), 4,
      sym__statement_gui_position,
      sym__statement_gui_orientation,
      sym__statement_gui_spriteType,
      aux_sym__iconType_block_repeat1,
  [8377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1820), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1822), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1824), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1826), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1828), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1830), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [8473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1832), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1834), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1836), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1838), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1840), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [8553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1842), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1844), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [8585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1846), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      aux_sym__statement_gui_orientation_token1,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [8601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1848), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8617] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1850), 1,
      anon_sym_RBRACE,
    ACTIONS(1852), 1,
      anon_sym_spriteType,
    ACTIONS(1855), 1,
      anon_sym_name,
    ACTIONS(1858), 1,
      anon_sym_position,
    ACTIONS(1861), 1,
      aux_sym__statement_gui_orientation_token1,
    STATE(426), 1,
      sym__statement_name,
    STATE(301), 4,
      sym__statement_gui_position,
      sym__statement_gui_orientation,
      sym__statement_gui_spriteType,
      aux_sym__iconType_block_repeat1,
  [8645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1864), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1866), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1868), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1872), 1,
      anon_sym_color,
    ACTIONS(1870), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [8711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1876), 1,
      anon_sym_color,
    ACTIONS(1874), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [8729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1880), 1,
      anon_sym_color,
    ACTIONS(1878), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [8747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1882), 10,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_PieChartType,
      anon_sym_LineChartType,
      anon_sym_cursor_offset,
  [8763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1886), 1,
      anon_sym_tooltip,
    ACTIONS(1888), 1,
      sym_assign_equal,
    ACTIONS(1884), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_position,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [8782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1890), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [8797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1894), 1,
      sym_assign_equal,
    ACTIONS(1892), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_scale,
  [8814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1898), 1,
      sym_assign_equal,
    ACTIONS(1896), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [8831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1902), 1,
      sym_assign_equal,
    ACTIONS(1900), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [8848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1906), 1,
      sym_assign_equal,
    ACTIONS(1904), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [8865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1910), 1,
      sym_assign_equal,
    ACTIONS(1908), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [8882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1912), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [8897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1914), 1,
      sym_assign_equal,
    ACTIONS(1592), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [8914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1918), 1,
      sym_assign_equal,
    ACTIONS(1916), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [8931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1922), 1,
      sym_assign_equal,
    ACTIONS(1920), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [8948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1926), 1,
      sym_assign_equal,
    ACTIONS(1924), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [8965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1930), 1,
      sym_assign_equal,
    ACTIONS(1928), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [8982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1934), 1,
      anon_sym_text,
    ACTIONS(1932), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
  [8999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1938), 1,
      anon_sym_tooltip,
    ACTIONS(1940), 1,
      sym_assign_equal,
    ACTIONS(1936), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_position,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [9018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1944), 1,
      anon_sym_tooltip,
    ACTIONS(1946), 1,
      sym_assign_equal,
    ACTIONS(1942), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_position,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [9037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1950), 1,
      anon_sym_tooltip,
    ACTIONS(1952), 1,
      sym_assign_equal,
    ACTIONS(1948), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_position,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [9056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1956), 1,
      anon_sym_tooltip,
    ACTIONS(1958), 1,
      sym_assign_equal,
    ACTIONS(1954), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_position,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [9075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1960), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [9090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1962), 1,
      sym_assign_equal,
    ACTIONS(960), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [9107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1964), 1,
      sym_assign_equal,
    ACTIONS(53), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [9124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1966), 1,
      sym_assign_equal,
    ACTIONS(1772), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [9141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1970), 1,
      anon_sym_tooltip,
    ACTIONS(1968), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_position,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [9157] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(1972), 1,
      anon_sym_RBRACE,
    ACTIONS(1974), 1,
      anon_sym_speed,
    ACTIONS(1976), 1,
      anon_sym_textblock,
    STATE(455), 1,
      sym__statement_gfx_name,
    STATE(344), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [9181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1980), 1,
      anon_sym_tooltip,
    ACTIONS(1978), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_position,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [9197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1982), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [9211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1986), 1,
      anon_sym_tooltip,
    ACTIONS(1984), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_position,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [9227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [9241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1990), 1,
      anon_sym_tooltip,
    ACTIONS(1988), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_position,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [9257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1992), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [9271] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(1266), 1,
      anon_sym_scale,
    ACTIONS(1994), 1,
      anon_sym_RBRACE,
    ACTIONS(1996), 1,
      anon_sym_type,
    STATE(451), 1,
      sym__statement_gfx_name,
    STATE(356), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [9295] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1998), 1,
      anon_sym_RBRACE,
    ACTIONS(2000), 1,
      anon_sym_name,
    ACTIONS(2003), 1,
      anon_sym_size,
    ACTIONS(2006), 1,
      anon_sym_linewidth,
    STATE(340), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(446), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [9319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2009), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [9333] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(7), 1,
      anon_sym_objectTypes,
    ACTIONS(9), 1,
      anon_sym_bitmapfonts,
    ACTIONS(2011), 1,
      ts_builtin_sym_end,
    STATE(352), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [9355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2013), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_scale,
  [9369] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2015), 1,
      anon_sym_RBRACE,
    ACTIONS(2017), 1,
      anon_sym_name,
    ACTIONS(2020), 1,
      anon_sym_speed,
    ACTIONS(2023), 1,
      anon_sym_textblock,
    STATE(455), 1,
      sym__statement_gfx_name,
    STATE(344), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [9393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2026), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [9407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1878), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [9421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2028), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [9435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2030), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [9449] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(551), 1,
      anon_sym_size,
    ACTIONS(2032), 1,
      anon_sym_RBRACE,
    ACTIONS(2034), 1,
      anon_sym_linewidth,
    STATE(360), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(446), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [9473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2038), 1,
      sym_assign_equal,
    ACTIONS(2036), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [9489] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2040), 1,
      anon_sym_RBRACE,
    ACTIONS(2042), 1,
      anon_sym_name,
    ACTIONS(2045), 1,
      anon_sym_type,
    ACTIONS(2048), 1,
      anon_sym_scale,
    STATE(451), 1,
      sym__statement_gfx_name,
    STATE(351), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [9513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2051), 1,
      ts_builtin_sym_end,
    ACTIONS(2053), 1,
      anon_sym_spriteTypes,
    ACTIONS(2056), 1,
      anon_sym_objectTypes,
    ACTIONS(2059), 1,
      anon_sym_bitmapfonts,
    STATE(352), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [9535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2064), 1,
      sym_assign_equal,
    ACTIONS(2062), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [9551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [9565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2068), 1,
      sym_assign_equal,
    ACTIONS(2066), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [9581] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(1266), 1,
      anon_sym_scale,
    ACTIONS(1996), 1,
      anon_sym_type,
    ACTIONS(2070), 1,
      anon_sym_RBRACE,
    STATE(451), 1,
      sym__statement_gfx_name,
    STATE(351), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [9605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2074), 1,
      anon_sym_tooltip,
    ACTIONS(2072), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_position,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [9621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2078), 1,
      anon_sym_tooltip,
    ACTIONS(2076), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_position,
      anon_sym_quadTextureSprite,
      anon_sym_parent,
      anon_sym_tooltipText,
      anon_sym_delayedTooltipText,
  [9637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2080), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [9651] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(551), 1,
      anon_sym_size,
    ACTIONS(2034), 1,
      anon_sym_linewidth,
    ACTIONS(2082), 1,
      anon_sym_RBRACE,
    STATE(340), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(446), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [9675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2084), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [9689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2086), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [9703] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(1974), 1,
      anon_sym_speed,
    ACTIONS(1976), 1,
      anon_sym_textblock,
    ACTIONS(2088), 1,
      anon_sym_RBRACE,
    STATE(455), 1,
      sym__statement_gfx_name,
    STATE(332), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [9727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2090), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [9740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2094), 1,
      sym_assign_equal,
    ACTIONS(2092), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [9755] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_textcolors,
    ACTIONS(2096), 1,
      anon_sym_RBRACE,
    ACTIONS(2098), 1,
      anon_sym_bitmapfont,
    STATE(477), 1,
      sym__textcolors,
    STATE(376), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [9776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2100), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [9789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2104), 1,
      sym_assign_equal,
    ACTIONS(2102), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [9804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2108), 1,
      sym_assign_equal,
    ACTIONS(2106), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [9819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2110), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [9832] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2112), 1,
      anon_sym_RBRACE,
    ACTIONS(2114), 1,
      anon_sym_textcolors,
    ACTIONS(2117), 1,
      anon_sym_bitmapfont,
    STATE(477), 1,
      sym__textcolors,
    STATE(371), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [9853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2122), 1,
      sym_assign_equal,
    ACTIONS(2120), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [9868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2126), 1,
      sym_assign_equal,
    ACTIONS(2124), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [9883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2128), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [9896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2132), 1,
      sym_assign_equal,
    ACTIONS(2130), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [9911] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_textcolors,
    ACTIONS(2098), 1,
      anon_sym_bitmapfont,
    ACTIONS(2134), 1,
      anon_sym_RBRACE,
    STATE(477), 1,
      sym__textcolors,
    STATE(371), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [9932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2138), 1,
      sym_assign_equal,
    ACTIONS(2136), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [9947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2142), 1,
      sym_assign_equal,
    ACTIONS(2140), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [9962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2146), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(2144), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_effect,
  [9977] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(2148), 1,
      anon_sym_RBRACE,
    ACTIONS(2150), 1,
      anon_sym_size,
    STATE(463), 1,
      sym__statement_gfx_name,
    STATE(383), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [9997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2152), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2154), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [10021] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    ACTIONS(2150), 1,
      anon_sym_size,
    ACTIONS(2156), 1,
      anon_sym_RBRACE,
    STATE(463), 1,
      sym__statement_gfx_name,
    STATE(406), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [10041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2160), 1,
      sym_assign_equal,
    ACTIONS(2158), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2164), 1,
      sym_assign_equal,
    ACTIONS(2162), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2168), 1,
      sym_assign_equal,
    ACTIONS(2166), 5,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_name,
      anon_sym_position,
      aux_sym__statement_gui_orientation_token1,
  [10083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2170), 1,
      sym_assign_equal,
    ACTIONS(33), 5,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_name,
      anon_sym_position,
      aux_sym__statement_gui_orientation_token1,
  [10097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2172), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [10109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2174), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [10121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2176), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2178), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2180), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2184), 1,
      sym_assign_equal,
    ACTIONS(2182), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2186), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2188), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [10195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2190), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2192), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2194), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2196), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2198), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2200), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2202), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2204), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2206), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2208), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [10315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2210), 1,
      anon_sym_RBRACE,
    ACTIONS(2212), 1,
      anon_sym_name,
    ACTIONS(2215), 1,
      anon_sym_size,
    STATE(463), 1,
      sym__statement_gfx_name,
    STATE(406), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [10335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_guiTypes,
    ACTIONS(2218), 1,
      ts_builtin_sym_end,
    STATE(427), 3,
      sym__gui_types_definition,
      sym__guiTypes,
      aux_sym_dot_gui_repeat1,
  [10350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2220), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10361] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2222), 1,
      anon_sym_x,
    ACTIONS(2224), 1,
      anon_sym_y,
    STATE(509), 1,
      sym__entry_x_integer,
    STATE(510), 1,
      sym__entry_y_integer,
    STATE(686), 1,
      sym__statement_xy_integer,
  [10380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2228), 1,
      sym_assign_equal,
    ACTIONS(2226), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2230), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2234), 1,
      sym_assign_equal,
    ACTIONS(2232), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [10417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2238), 1,
      sym_assign_equal,
    ACTIONS(2236), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [10430] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2222), 1,
      anon_sym_x,
    ACTIONS(2224), 1,
      anon_sym_y,
    STATE(509), 1,
      sym__entry_x_integer,
    STATE(510), 1,
      sym__entry_y_integer,
    STATE(660), 1,
      sym__statement_xy_integer,
  [10449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2242), 1,
      sym_assign_equal,
    ACTIONS(2240), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [10462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2246), 1,
      sym_assign_equal,
    ACTIONS(2244), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [10475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2248), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10486] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2222), 1,
      anon_sym_x,
    ACTIONS(2224), 1,
      anon_sym_y,
    STATE(509), 1,
      sym__entry_x_integer,
    STATE(510), 1,
      sym__entry_y_integer,
    STATE(661), 1,
      sym__statement_xy_integer,
  [10505] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2250), 1,
      anon_sym_x,
    ACTIONS(2252), 1,
      anon_sym_y,
    STATE(552), 1,
      sym__entry_y_float,
    STATE(553), 1,
      sym__entry_x_float,
    STATE(635), 1,
      sym__statement_xy_float,
  [10524] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2222), 1,
      anon_sym_x,
    ACTIONS(2224), 1,
      anon_sym_y,
    STATE(509), 1,
      sym__entry_x_integer,
    STATE(510), 1,
      sym__entry_y_integer,
    STATE(662), 1,
      sym__statement_xy_integer,
  [10543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2254), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2256), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10565] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2222), 1,
      anon_sym_x,
    ACTIONS(2224), 1,
      anon_sym_y,
    STATE(509), 1,
      sym__entry_x_integer,
    STATE(510), 1,
      sym__entry_y_integer,
    STATE(692), 1,
      sym__statement_xy_integer,
  [10584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2222), 1,
      anon_sym_x,
    ACTIONS(2224), 1,
      anon_sym_y,
    STATE(509), 1,
      sym__entry_x_integer,
    STATE(510), 1,
      sym__entry_y_integer,
    STATE(690), 1,
      sym__statement_xy_integer,
  [10603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2258), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2260), 5,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_name,
      anon_sym_position,
      aux_sym__statement_gui_orientation_token1,
  [10625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2262), 1,
      ts_builtin_sym_end,
    ACTIONS(2264), 1,
      anon_sym_guiTypes,
    STATE(427), 3,
      sym__gui_types_definition,
      sym__guiTypes,
      aux_sym_dot_gui_repeat1,
  [10640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2267), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2269), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2271), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2273), 5,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_name,
      anon_sym_position,
      aux_sym__statement_gui_orientation_token1,
  [10684] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2222), 1,
      anon_sym_x,
    ACTIONS(2224), 1,
      anon_sym_y,
    STATE(509), 1,
      sym__entry_x_integer,
    STATE(510), 1,
      sym__entry_y_integer,
    STATE(641), 1,
      sym__statement_xy_integer,
  [10703] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2222), 1,
      anon_sym_x,
    ACTIONS(2224), 1,
      anon_sym_y,
    STATE(509), 1,
      sym__entry_x_integer,
    STATE(510), 1,
      sym__entry_y_integer,
    STATE(648), 1,
      sym__statement_xy_integer,
  [10722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2277), 1,
      sym_assign_equal,
    ACTIONS(2275), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2281), 1,
      sym_assign_equal,
    ACTIONS(2279), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 5,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_name,
      anon_sym_position,
      aux_sym__statement_gui_orientation_token1,
  [10759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2283), 5,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
      anon_sym_iconType,
      anon_sym_scrollbarType,
  [10770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2285), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2287), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [10790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2289), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [10800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2291), 1,
      anon_sym_RBRACE,
    ACTIONS(2293), 1,
      aux_sym__integer_positive_token1,
    STATE(441), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [10814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2296), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [10824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2298), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [10834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2300), 1,
      anon_sym_RBRACE,
    ACTIONS(2302), 1,
      aux_sym__integer_positive_token1,
    STATE(441), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [10848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2304), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2306), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [10868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2310), 1,
      sym_assign_equal,
    ACTIONS(2308), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [10880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2312), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2316), 1,
      sym_assign_equal,
    ACTIONS(2314), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [10902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2318), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2320), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [10922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2322), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [10932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2324), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2326), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2328), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [10962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2330), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2332), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2334), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [10992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2336), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [11002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(249), 1,
      sym__boolean_yes_no,
    ACTIONS(2338), 2,
      anon_sym_yes,
      anon_sym_no,
  [11013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2340), 1,
      anon_sym_RBRACE,
    ACTIONS(2342), 1,
      sym_string,
    STATE(468), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [11026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2344), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [11035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2346), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [11044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2348), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [11053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(133), 1,
      sym__boolean_yes_no,
    ACTIONS(2350), 2,
      anon_sym_yes,
      anon_sym_no,
  [11064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym__boolean_yes_no,
    ACTIONS(2352), 2,
      anon_sym_yes,
      anon_sym_no,
  [11075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2354), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [11084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2342), 1,
      sym_string,
    ACTIONS(2356), 1,
      anon_sym_RBRACE,
    STATE(490), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [11097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(89), 1,
      sym__boolean_yes_no,
    ACTIONS(2358), 2,
      anon_sym_yes,
      anon_sym_no,
  [11108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 1,
      sym__boolean_yes_no,
    ACTIONS(2360), 2,
      anon_sym_yes,
      anon_sym_no,
  [11119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2364), 1,
      sym_assign_equal,
    ACTIONS(2362), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [11130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(82), 1,
      sym__boolean_yes_no,
    ACTIONS(2366), 2,
      anon_sym_yes,
      anon_sym_no,
  [11141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2370), 1,
      sym_assign_equal,
    ACTIONS(2368), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [11152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2374), 1,
      sym_assign_equal,
    ACTIONS(2372), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [11163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(161), 1,
      sym__boolean_yes_no,
    ACTIONS(2376), 2,
      anon_sym_yes,
      anon_sym_no,
  [11174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(162), 1,
      sym__boolean_yes_no,
    ACTIONS(2378), 2,
      anon_sym_yes,
      anon_sym_no,
  [11185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2380), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [11194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(305), 1,
      sym__boolean_yes_no,
    ACTIONS(2382), 2,
      anon_sym_yes,
      anon_sym_no,
  [11205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2384), 1,
      aux_sym__integer_positive_token1,
    STATE(444), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [11216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(180), 1,
      sym__boolean_yes_no,
    ACTIONS(2386), 2,
      anon_sym_yes,
      anon_sym_no,
  [11227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(188), 1,
      sym__boolean_yes_no,
    ACTIONS(2388), 2,
      anon_sym_yes,
      anon_sym_no,
  [11238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(229), 1,
      sym__boolean_0_1,
    ACTIONS(2390), 2,
      anon_sym_0,
      anon_sym_1,
  [11249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(296), 1,
      sym__boolean_yes_no,
    ACTIONS(2392), 2,
      anon_sym_yes,
      anon_sym_no,
  [11260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2394), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [11269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(204), 1,
      sym__boolean_yes_no,
    ACTIONS(2396), 2,
      anon_sym_yes,
      anon_sym_no,
  [11280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2400), 1,
      sym_assign_equal,
    ACTIONS(2398), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [11291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2404), 1,
      sym_assign_equal,
    ACTIONS(2402), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [11302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2406), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [11311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2408), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [11320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2410), 1,
      anon_sym_RBRACE,
    ACTIONS(2412), 1,
      sym_string,
    STATE(490), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [11333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(347), 1,
      sym__boolean_yes_no,
    ACTIONS(2415), 2,
      anon_sym_yes,
      anon_sym_no,
  [11344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2417), 1,
      anon_sym_LBRACE,
    STATE(243), 1,
      sym__mod_tags_block,
  [11354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2419), 1,
      aux_sym__float_positive_token1,
    STATE(99), 1,
      sym__float_positive,
  [11364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2421), 1,
      anon_sym_LBRACE,
    STATE(404), 1,
      sym__pdxparticle_block,
  [11374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2423), 1,
      anon_sym_LBRACE,
    STATE(403), 1,
      sym__arrowType_block,
  [11384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2425), 1,
      anon_sym_LBRACE,
    STATE(402), 1,
      sym__tradeRouteType_block,
  [11394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2427), 1,
      anon_sym_LBRACE,
    STATE(310), 1,
      sym__textcolors_block,
  [11404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2429), 1,
      anon_sym_LBRACE,
    STATE(464), 1,
      sym__bitmapfont_block,
  [11414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2431), 1,
      anon_sym_LBRACE,
    STATE(437), 1,
      sym__windowType_block,
  [11424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2433), 1,
      anon_sym_LBRACE,
    STATE(422), 1,
      sym__textBoxType_block,
  [11434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2435), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym__iconType_block,
  [11444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2437), 1,
      anon_sym_LBRACE,
    STATE(429), 1,
      sym__scrollbarType_block,
  [11454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2439), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [11462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2441), 1,
      aux_sym__float_positive_token1,
    STATE(117), 1,
      sym__float_positive,
  [11472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2443), 1,
      aux_sym__float_positive_token1,
    STATE(507), 1,
      sym__float_positive,
  [11482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2445), 1,
      aux_sym__float_positive_token1,
    STATE(114), 1,
      sym__float_positive,
  [11492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2447), 1,
      aux_sym__float_positive_token1,
    STATE(508), 1,
      sym__float_positive,
  [11502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2449), 1,
      aux_sym__float_positive_token1,
    STATE(687), 1,
      sym__float_positive,
  [11512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2224), 1,
      anon_sym_y,
    STATE(624), 1,
      sym__entry_y_integer,
  [11522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2222), 1,
      anon_sym_x,
    STATE(624), 1,
      sym__entry_x_integer,
  [11532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2451), 1,
      anon_sym_LBRACE,
    STATE(279), 1,
      sym__maskedShieldType_block,
  [11542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2453), 1,
      aux_sym__float_positive_token1,
    STATE(560), 1,
      sym__float_positive,
  [11552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2455), 1,
      aux_sym__float_positive_token1,
    STATE(561), 1,
      sym__float_positive,
  [11562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2457), 1,
      anon_sym_id,
    STATE(521), 1,
      sym__statement_gfx_animation_id,
  [11572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2419), 1,
      aux_sym__float_positive_token1,
    STATE(99), 1,
      sym__float_positive,
  [11582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2459), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(2461), 1,
      aux_sym__statement_gfx_name_token2,
  [11592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2463), 1,
      anon_sym_LBRACE,
    STATE(290), 1,
      sym__textSpriteType_block,
  [11602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2465), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(2467), 1,
      aux_sym__statement_gfx_name_token2,
  [11612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2469), 1,
      aux_sym__integer_positive_token1,
    STATE(64), 1,
      sym__integer_positive,
  [11622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2471), 1,
      anon_sym_type,
    ACTIONS(2473), 1,
      sym_assign_equal,
  [11632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2475), 1,
      anon_sym_type,
    STATE(611), 1,
      sym__statement_gfx_animation_type,
  [11642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2477), 1,
      anon_sym_index,
    STATE(572), 1,
      sym__statement_gfx_meshsettings_index,
  [11652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2479), 1,
      aux_sym__integer_positive_token1,
    STATE(36), 1,
      sym__integer_positive,
  [11662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2481), 1,
      aux_sym__integer_positive_token1,
    STATE(105), 1,
      sym__integer_positive,
  [11672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2483), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym__guiButtonType_block,
  [11682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2485), 1,
      aux_sym__integer_positive_token1,
    STATE(42), 1,
      sym__integer_positive,
  [11692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2487), 1,
      aux_sym__integer_positive_token1,
    STATE(184), 1,
      sym__integer_positive,
  [11702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2489), 1,
      aux_sym__integer_positive_token1,
    STATE(181), 1,
      sym__integer_positive,
  [11712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2491), 1,
      aux_sym__integer_positive_token1,
    STATE(43), 1,
      sym__integer_positive,
  [11722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2493), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym__gfx_animation_block,
  [11732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2495), 1,
      anon_sym_LBRACE,
    STATE(300), 1,
      sym__spriteType_block,
  [11742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2497), 1,
      anon_sym_RBRACE,
    ACTIONS(2499), 1,
      sym_assign_equal,
  [11752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2501), 1,
      aux_sym__orientation_value_token1,
    STATE(29), 1,
      sym__orientation_value,
  [11762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2503), 1,
      anon_sym_shader_file,
    STATE(670), 1,
      sym__statement_gfx_meshsettings_shader_file,
  [11772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2505), 1,
      anon_sym_shader_file,
    ACTIONS(2507), 1,
      sym_assign_equal,
  [11782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2509), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [11790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2511), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [11798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2513), 1,
      anon_sym_LBRACE,
    STATE(239), 1,
      sym__instantTextBoxType_block,
  [11808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2515), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [11816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_name,
    STATE(522), 1,
      sym__statement_gfx_name,
  [11826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2517), 1,
      anon_sym_shader,
    STATE(534), 1,
      sym__statement_gfx_meshsettings_shader,
  [11836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2519), 1,
      anon_sym_LBRACE,
    STATE(240), 1,
      sym__editBoxType_block,
  [11846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2521), 1,
      anon_sym_LBRACE,
    STATE(257), 1,
      sym__listBoxType_block,
  [11856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2523), 1,
      anon_sym_shader,
    ACTIONS(2525), 1,
      sym_assign_equal,
  [11866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2527), 2,
      anon_sym_RBRACE,
      sym_string,
  [11874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2529), 2,
      anon_sym_DQUOTEINGAME_DQUOTE,
      anon_sym_DQUOTEFRONTEND_DQUOTE,
  [11882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2531), 1,
      aux_sym__float_positive_token1,
    STATE(513), 1,
      sym__float_positive,
  [11892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2533), 1,
      anon_sym_texture_specular,
    STATE(541), 1,
      sym__statement_gfx_meshsettings_texture_specular,
  [11902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2535), 1,
      anon_sym_texture_specular,
    ACTIONS(2537), 1,
      sym_assign_equal,
  [11912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2539), 1,
      aux_sym__float_positive_token1,
    STATE(201), 1,
      sym__float_positive,
  [11922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2541), 1,
      aux_sym__float_positive_token1,
    STATE(512), 1,
      sym__float_positive,
  [11932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2250), 1,
      anon_sym_x,
    STATE(652), 1,
      sym__entry_x_float,
  [11942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2252), 1,
      anon_sym_y,
    STATE(652), 1,
      sym__entry_y_float,
  [11952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2543), 1,
      anon_sym_LBRACE,
    STATE(286), 1,
      sym__frameAnimatedSpriteType_block,
  [11962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2545), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [11970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2547), 1,
      aux_sym__integer_positive_token1,
    STATE(160), 1,
      sym__integer_positive,
  [11980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2549), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      sym__progressbartype_block,
  [11990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2551), 1,
      anon_sym_LBRACE,
    STATE(294), 1,
      sym__PieChartType_block,
  [12000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2553), 1,
      aux_sym__float_positive_token1,
    STATE(163), 1,
      sym__float_positive,
  [12010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2555), 1,
      aux_sym__float_positive_token1,
    STATE(607), 1,
      sym__float_positive,
  [12020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2557), 1,
      aux_sym__float_positive_token1,
    STATE(608), 1,
      sym__float_positive,
  [12030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2559), 1,
      anon_sym_texture_normal,
    STATE(548), 1,
      sym__statement_gfx_meshsettings_texture_normal,
  [12040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2561), 1,
      anon_sym_texture_normal,
    ACTIONS(2563), 1,
      sym_assign_equal,
  [12050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2565), 1,
      aux_sym__integer_positive_token1,
    STATE(643), 1,
      sym__integer_positive,
  [12060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2567), 1,
      anon_sym_LBRACE,
    STATE(302), 1,
      sym__LineChartType_block,
  [12070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2569), 1,
      aux_sym__integer_positive_token1,
    STATE(467), 1,
      sym__integer_positive,
  [12080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2571), 1,
      anon_sym_LBRACE,
    STATE(242), 1,
      sym__mod_dependencies_block,
  [12090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2573), 1,
      aux_sym__integer_positive_token1,
    STATE(439), 1,
      sym__integer_positive,
  [12100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2575), 1,
      anon_sym_RBRACE,
    ACTIONS(2577), 1,
      sym_assign_equal,
  [12110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2579), 1,
      aux_sym__float_positive_token1,
    STATE(442), 1,
      sym__float_positive,
  [12120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2581), 1,
      anon_sym_texture_diffuse,
    ACTIONS(2583), 1,
      sym_assign_equal,
  [12130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2585), 1,
      anon_sym_texture_diffuse,
    STATE(562), 1,
      sym__statement_gfx_meshsettings_texture_diffuse,
  [12140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2587), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [12148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2589), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [12156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2591), 1,
      anon_sym_LBRACE,
    STATE(443), 1,
      sym__gfx_textblock,
  [12166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2593), 1,
      aux_sym__float_positive_token1,
    STATE(343), 1,
      sym__float_positive,
  [12176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2595), 1,
      anon_sym_LBRACE,
    STATE(453), 1,
      sym__spriteTypes_block,
  [12186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2597), 1,
      anon_sym_LBRACE,
    STATE(445), 1,
      sym__objectTypes_block,
  [12196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2599), 1,
      anon_sym_LBRACE,
    STATE(438), 1,
      sym__bitmapfonts_block,
  [12206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2601), 1,
      anon_sym_LBRACE,
    STATE(536), 1,
      sym__guiTypes_block,
  [12216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2603), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(250), 1,
      sym__mod_replace_path_folder,
  [12226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2605), 1,
      anon_sym_LBRACE,
    STATE(391), 1,
      sym__pdxmesh_block,
  [12236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2607), 1,
      anon_sym_LBRACE,
    STATE(273), 1,
      sym__corneredTileSpriteType_block,
  [12246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2609), 1,
      anon_sym_LBRACE,
    STATE(394), 1,
      sym__animatedmaptext_block,
  [12256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2611), 1,
      sym_string,
  [12263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2613), 1,
      anon_sym_LBRACE,
  [12270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2615), 1,
      anon_sym_centre,
  [12277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2617), 1,
      aux_sym__statement_mod_supported_version_token1,
  [12284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2619), 1,
      aux_sym__statement_mod_picture_token1,
  [12291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2621), 1,
      aux_sym__statement_mod_version_token1,
  [12298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2623), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [12305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2625), 1,
      sym_string,
  [12312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2627), 1,
      sym_string,
  [12319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2629), 1,
      sym_string,
  [12326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2631), 1,
      sym_string,
  [12333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2633), 1,
      aux_sym__statement_mod_archive_token1,
  [12340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2635), 1,
      sym_string,
  [12347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2637), 1,
      sym_string,
  [12354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2639), 1,
      sym_float,
  [12361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2641), 1,
      anon_sym_LBRACE,
  [12368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2643), 1,
      anon_sym_LBRACE,
  [12375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2645), 1,
      anon_sym_LBRACE,
  [12382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2647), 1,
      sym_byte,
  [12389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2649), 1,
      anon_sym_LBRACE,
  [12396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2651), 1,
      sym_string,
  [12403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2653), 1,
      sym_string,
  [12410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2655), 1,
      anon_sym_RBRACE,
  [12417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2657), 1,
      anon_sym_RBRACE,
  [12424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2659), 1,
      sym_byte,
  [12431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2661), 1,
      anon_sym_RBRACE,
  [12438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2663), 1,
      anon_sym_RBRACE,
  [12445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2665), 1,
      sym_string,
  [12452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2667), 1,
      anon_sym_type,
  [12459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2669), 1,
      sym_string,
  [12466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2671), 1,
      sym_integer,
  [12473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2673), 1,
      anon_sym_centre,
  [12480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2675), 1,
      anon_sym_LBRACE,
  [12487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2677), 1,
      sym_string,
  [12494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2679), 1,
      anon_sym_RBRACE,
  [12501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2681), 1,
      anon_sym_LBRACE,
  [12508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2683), 1,
      anon_sym_LBRACE,
  [12515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2685), 1,
      sym_string,
  [12522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2687), 1,
      sym_string,
  [12529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2689), 1,
      anon_sym_RBRACE,
  [12536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2691), 1,
      aux_sym__animation_entry_dds_token1,
  [12543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2693), 1,
      ts_builtin_sym_end,
  [12550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2695), 1,
      ts_builtin_sym_end,
  [12557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2697), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [12564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2699), 1,
      sym_integer,
  [12571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2701), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [12578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2703), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [12585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2705), 1,
      anon_sym_LBRACE,
  [12592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2707), 1,
      sym_integer,
  [12599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2709), 1,
      sym_integer,
  [12606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2711), 1,
      anon_sym_RBRACE,
  [12613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2713), 1,
      aux_sym__animation_entry_dds_token1,
  [12620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2715), 1,
      aux_sym__statement_gfx_effect_token1,
  [12627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2717), 1,
      anon_sym_LBRACE,
  [12634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2719), 1,
      aux_sym__statement_gfx_alphamaskfile_token1,
  [12641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2721), 1,
      aux_sym__statement_gfx_file_token1,
  [12648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2723), 1,
      anon_sym_RBRACE,
  [12655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2725), 1,
      anon_sym_RBRACE,
  [12662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2727), 1,
      anon_sym_texture_diffuse,
  [12669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2729), 1,
      aux_sym__animation_entry_dds_token1,
  [12676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2731), 1,
      anon_sym_LBRACE,
  [12683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2733), 1,
      sym_angle,
  [12690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2735), 1,
      aux_sym__animation_entry_dds_token1,
  [12697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2737), 1,
      anon_sym_RBRACE,
  [12704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2739), 1,
      sym_float,
  [12711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2741), 1,
      sym_float,
  [12718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2743), 1,
      anon_sym_LBRACE,
  [12725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2745), 1,
      anon_sym_RBRACE,
  [12732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2747), 1,
      aux_sym__animation_entry_dds_token1,
  [12739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2749), 1,
      anon_sym_click,
  [12746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2751), 1,
      sym_string,
  [12753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2753), 1,
      anon_sym_texture_normal,
  [12760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2755), 1,
      aux_sym__animation_entry_dds_token1,
  [12767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2757), 1,
      sym_hexadecimal,
  [12774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2759), 1,
      sym_hexadecimal,
  [12781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2761), 1,
      anon_sym_RBRACE,
  [12788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2763), 1,
      anon_sym_RBRACE,
  [12795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2765), 1,
      anon_sym_RBRACE,
  [12802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2767), 1,
      anon_sym_texture_specular,
  [12809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2769), 1,
      aux_sym__animation_entry_dds_token1,
  [12816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2771), 1,
      anon_sym_LBRACE,
  [12823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2773), 1,
      anon_sym_LBRACE,
  [12830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2775), 1,
      anon_sym_shader,
  [12837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2777), 1,
      aux_sym__statement_gfx_meshsettings_shader_token1,
  [12844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2779), 1,
      sym_string,
  [12851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2781), 1,
      anon_sym_RBRACE,
  [12858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2783), 1,
      anon_sym_shader_file,
  [12865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2785), 1,
      aux_sym__statement_gfx_meshsettings_shader_file_token1,
  [12872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2787), 1,
      anon_sym_LBRACE,
  [12879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2789), 1,
      anon_sym_RBRACE,
  [12886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2791), 1,
      sym_string,
  [12893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2793), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [12900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2795), 1,
      sym_string,
  [12907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2797), 1,
      aux_sym__statement_gui_textureFile_token1,
  [12914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2799), 1,
      sym_string,
  [12921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2801), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [12928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2803), 1,
      sym_byte,
  [12935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2805), 1,
      sym_string,
  [12942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2807), 1,
      sym_string,
  [12949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2809), 1,
      sym_string,
  [12956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2811), 1,
      sym_string,
  [12963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2813), 1,
      anon_sym_RBRACE,
  [12970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2815), 1,
      anon_sym_RBRACE,
  [12977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2817), 1,
      sym_string,
  [12984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2819), 1,
      sym_integer,
  [12991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2821), 1,
      anon_sym_RBRACE,
  [12998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2823), 1,
      anon_sym_LBRACE,
  [13005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2825), 1,
      anon_sym_RBRACE,
  [13012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2827), 1,
      sym_integer,
  [13019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2829), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 121,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 276,
  [SMALL_STATE(8)] = 325,
  [SMALL_STATE(9)] = 401,
  [SMALL_STATE(10)] = 477,
  [SMALL_STATE(11)] = 553,
  [SMALL_STATE(12)] = 595,
  [SMALL_STATE(13)] = 667,
  [SMALL_STATE(14)] = 709,
  [SMALL_STATE(15)] = 781,
  [SMALL_STATE(16)] = 853,
  [SMALL_STATE(17)] = 892,
  [SMALL_STATE(18)] = 931,
  [SMALL_STATE(19)] = 970,
  [SMALL_STATE(20)] = 1008,
  [SMALL_STATE(21)] = 1072,
  [SMALL_STATE(22)] = 1136,
  [SMALL_STATE(23)] = 1172,
  [SMALL_STATE(24)] = 1236,
  [SMALL_STATE(25)] = 1273,
  [SMALL_STATE(26)] = 1310,
  [SMALL_STATE(27)] = 1345,
  [SMALL_STATE(28)] = 1405,
  [SMALL_STATE(29)] = 1465,
  [SMALL_STATE(30)] = 1499,
  [SMALL_STATE(31)] = 1533,
  [SMALL_STATE(32)] = 1593,
  [SMALL_STATE(33)] = 1629,
  [SMALL_STATE(34)] = 1664,
  [SMALL_STATE(35)] = 1699,
  [SMALL_STATE(36)] = 1734,
  [SMALL_STATE(37)] = 1767,
  [SMALL_STATE(38)] = 1801,
  [SMALL_STATE(39)] = 1835,
  [SMALL_STATE(40)] = 1869,
  [SMALL_STATE(41)] = 1900,
  [SMALL_STATE(42)] = 1933,
  [SMALL_STATE(43)] = 1964,
  [SMALL_STATE(44)] = 1995,
  [SMALL_STATE(45)] = 2047,
  [SMALL_STATE(46)] = 2097,
  [SMALL_STATE(47)] = 2127,
  [SMALL_STATE(48)] = 2179,
  [SMALL_STATE(49)] = 2231,
  [SMALL_STATE(50)] = 2283,
  [SMALL_STATE(51)] = 2331,
  [SMALL_STATE(52)] = 2383,
  [SMALL_STATE(53)] = 2431,
  [SMALL_STATE(54)] = 2483,
  [SMALL_STATE(55)] = 2535,
  [SMALL_STATE(56)] = 2565,
  [SMALL_STATE(57)] = 2615,
  [SMALL_STATE(58)] = 2667,
  [SMALL_STATE(59)] = 2719,
  [SMALL_STATE(60)] = 2771,
  [SMALL_STATE(61)] = 2823,
  [SMALL_STATE(62)] = 2871,
  [SMALL_STATE(63)] = 2923,
  [SMALL_STATE(64)] = 2968,
  [SMALL_STATE(65)] = 2995,
  [SMALL_STATE(66)] = 3040,
  [SMALL_STATE(67)] = 3085,
  [SMALL_STATE(68)] = 3133,
  [SMALL_STATE(69)] = 3181,
  [SMALL_STATE(70)] = 3229,
  [SMALL_STATE(71)] = 3277,
  [SMALL_STATE(72)] = 3325,
  [SMALL_STATE(73)] = 3373,
  [SMALL_STATE(74)] = 3421,
  [SMALL_STATE(75)] = 3469,
  [SMALL_STATE(76)] = 3517,
  [SMALL_STATE(77)] = 3546,
  [SMALL_STATE(78)] = 3573,
  [SMALL_STATE(79)] = 3600,
  [SMALL_STATE(80)] = 3626,
  [SMALL_STATE(81)] = 3670,
  [SMALL_STATE(82)] = 3696,
  [SMALL_STATE(83)] = 3720,
  [SMALL_STATE(84)] = 3746,
  [SMALL_STATE(85)] = 3790,
  [SMALL_STATE(86)] = 3816,
  [SMALL_STATE(87)] = 3842,
  [SMALL_STATE(88)] = 3868,
  [SMALL_STATE(89)] = 3894,
  [SMALL_STATE(90)] = 3918,
  [SMALL_STATE(91)] = 3944,
  [SMALL_STATE(92)] = 3972,
  [SMALL_STATE(93)] = 3998,
  [SMALL_STATE(94)] = 4042,
  [SMALL_STATE(95)] = 4068,
  [SMALL_STATE(96)] = 4094,
  [SMALL_STATE(97)] = 4120,
  [SMALL_STATE(98)] = 4143,
  [SMALL_STATE(99)] = 4168,
  [SMALL_STATE(100)] = 4193,
  [SMALL_STATE(101)] = 4220,
  [SMALL_STATE(102)] = 4245,
  [SMALL_STATE(103)] = 4270,
  [SMALL_STATE(104)] = 4295,
  [SMALL_STATE(105)] = 4318,
  [SMALL_STATE(106)] = 4341,
  [SMALL_STATE(107)] = 4364,
  [SMALL_STATE(108)] = 4387,
  [SMALL_STATE(109)] = 4410,
  [SMALL_STATE(110)] = 4433,
  [SMALL_STATE(111)] = 4456,
  [SMALL_STATE(112)] = 4479,
  [SMALL_STATE(113)] = 4504,
  [SMALL_STATE(114)] = 4527,
  [SMALL_STATE(115)] = 4550,
  [SMALL_STATE(116)] = 4573,
  [SMALL_STATE(117)] = 4598,
  [SMALL_STATE(118)] = 4621,
  [SMALL_STATE(119)] = 4644,
  [SMALL_STATE(120)] = 4671,
  [SMALL_STATE(121)] = 4698,
  [SMALL_STATE(122)] = 4720,
  [SMALL_STATE(123)] = 4758,
  [SMALL_STATE(124)] = 4798,
  [SMALL_STATE(125)] = 4824,
  [SMALL_STATE(126)] = 4846,
  [SMALL_STATE(127)] = 4886,
  [SMALL_STATE(128)] = 4910,
  [SMALL_STATE(129)] = 4934,
  [SMALL_STATE(130)] = 4958,
  [SMALL_STATE(131)] = 4998,
  [SMALL_STATE(132)] = 5038,
  [SMALL_STATE(133)] = 5076,
  [SMALL_STATE(134)] = 5098,
  [SMALL_STATE(135)] = 5120,
  [SMALL_STATE(136)] = 5160,
  [SMALL_STATE(137)] = 5200,
  [SMALL_STATE(138)] = 5222,
  [SMALL_STATE(139)] = 5260,
  [SMALL_STATE(140)] = 5282,
  [SMALL_STATE(141)] = 5304,
  [SMALL_STATE(142)] = 5326,
  [SMALL_STATE(143)] = 5349,
  [SMALL_STATE(144)] = 5372,
  [SMALL_STATE(145)] = 5397,
  [SMALL_STATE(146)] = 5420,
  [SMALL_STATE(147)] = 5443,
  [SMALL_STATE(148)] = 5466,
  [SMALL_STATE(149)] = 5493,
  [SMALL_STATE(150)] = 5516,
  [SMALL_STATE(151)] = 5541,
  [SMALL_STATE(152)] = 5566,
  [SMALL_STATE(153)] = 5586,
  [SMALL_STATE(154)] = 5606,
  [SMALL_STATE(155)] = 5642,
  [SMALL_STATE(156)] = 5678,
  [SMALL_STATE(157)] = 5702,
  [SMALL_STATE(158)] = 5738,
  [SMALL_STATE(159)] = 5774,
  [SMALL_STATE(160)] = 5798,
  [SMALL_STATE(161)] = 5818,
  [SMALL_STATE(162)] = 5838,
  [SMALL_STATE(163)] = 5858,
  [SMALL_STATE(164)] = 5878,
  [SMALL_STATE(165)] = 5914,
  [SMALL_STATE(166)] = 5936,
  [SMALL_STATE(167)] = 5972,
  [SMALL_STATE(168)] = 5992,
  [SMALL_STATE(169)] = 6016,
  [SMALL_STATE(170)] = 6040,
  [SMALL_STATE(171)] = 6064,
  [SMALL_STATE(172)] = 6088,
  [SMALL_STATE(173)] = 6108,
  [SMALL_STATE(174)] = 6131,
  [SMALL_STATE(175)] = 6154,
  [SMALL_STATE(176)] = 6185,
  [SMALL_STATE(177)] = 6204,
  [SMALL_STATE(178)] = 6235,
  [SMALL_STATE(179)] = 6256,
  [SMALL_STATE(180)] = 6279,
  [SMALL_STATE(181)] = 6300,
  [SMALL_STATE(182)] = 6321,
  [SMALL_STATE(183)] = 6344,
  [SMALL_STATE(184)] = 6367,
  [SMALL_STATE(185)] = 6388,
  [SMALL_STATE(186)] = 6411,
  [SMALL_STATE(187)] = 6442,
  [SMALL_STATE(188)] = 6463,
  [SMALL_STATE(189)] = 6484,
  [SMALL_STATE(190)] = 6505,
  [SMALL_STATE(191)] = 6526,
  [SMALL_STATE(192)] = 6549,
  [SMALL_STATE(193)] = 6572,
  [SMALL_STATE(194)] = 6594,
  [SMALL_STATE(195)] = 6614,
  [SMALL_STATE(196)] = 6634,
  [SMALL_STATE(197)] = 6666,
  [SMALL_STATE(198)] = 6686,
  [SMALL_STATE(199)] = 6708,
  [SMALL_STATE(200)] = 6728,
  [SMALL_STATE(201)] = 6748,
  [SMALL_STATE(202)] = 6768,
  [SMALL_STATE(203)] = 6788,
  [SMALL_STATE(204)] = 6808,
  [SMALL_STATE(205)] = 6828,
  [SMALL_STATE(206)] = 6848,
  [SMALL_STATE(207)] = 6868,
  [SMALL_STATE(208)] = 6888,
  [SMALL_STATE(209)] = 6908,
  [SMALL_STATE(210)] = 6928,
  [SMALL_STATE(211)] = 6948,
  [SMALL_STATE(212)] = 6968,
  [SMALL_STATE(213)] = 6988,
  [SMALL_STATE(214)] = 7008,
  [SMALL_STATE(215)] = 7028,
  [SMALL_STATE(216)] = 7048,
  [SMALL_STATE(217)] = 7070,
  [SMALL_STATE(218)] = 7102,
  [SMALL_STATE(219)] = 7122,
  [SMALL_STATE(220)] = 7142,
  [SMALL_STATE(221)] = 7174,
  [SMALL_STATE(222)] = 7194,
  [SMALL_STATE(223)] = 7213,
  [SMALL_STATE(224)] = 7230,
  [SMALL_STATE(225)] = 7259,
  [SMALL_STATE(226)] = 7278,
  [SMALL_STATE(227)] = 7295,
  [SMALL_STATE(228)] = 7314,
  [SMALL_STATE(229)] = 7331,
  [SMALL_STATE(230)] = 7348,
  [SMALL_STATE(231)] = 7365,
  [SMALL_STATE(232)] = 7384,
  [SMALL_STATE(233)] = 7403,
  [SMALL_STATE(234)] = 7422,
  [SMALL_STATE(235)] = 7451,
  [SMALL_STATE(236)] = 7468,
  [SMALL_STATE(237)] = 7485,
  [SMALL_STATE(238)] = 7504,
  [SMALL_STATE(239)] = 7523,
  [SMALL_STATE(240)] = 7540,
  [SMALL_STATE(241)] = 7557,
  [SMALL_STATE(242)] = 7576,
  [SMALL_STATE(243)] = 7593,
  [SMALL_STATE(244)] = 7610,
  [SMALL_STATE(245)] = 7627,
  [SMALL_STATE(246)] = 7646,
  [SMALL_STATE(247)] = 7667,
  [SMALL_STATE(248)] = 7686,
  [SMALL_STATE(249)] = 7705,
  [SMALL_STATE(250)] = 7724,
  [SMALL_STATE(251)] = 7741,
  [SMALL_STATE(252)] = 7758,
  [SMALL_STATE(253)] = 7775,
  [SMALL_STATE(254)] = 7792,
  [SMALL_STATE(255)] = 7809,
  [SMALL_STATE(256)] = 7826,
  [SMALL_STATE(257)] = 7843,
  [SMALL_STATE(258)] = 7860,
  [SMALL_STATE(259)] = 7877,
  [SMALL_STATE(260)] = 7894,
  [SMALL_STATE(261)] = 7913,
  [SMALL_STATE(262)] = 7930,
  [SMALL_STATE(263)] = 7947,
  [SMALL_STATE(264)] = 7964,
  [SMALL_STATE(265)] = 7981,
  [SMALL_STATE(266)] = 7998,
  [SMALL_STATE(267)] = 8015,
  [SMALL_STATE(268)] = 8036,
  [SMALL_STATE(269)] = 8057,
  [SMALL_STATE(270)] = 8078,
  [SMALL_STATE(271)] = 8107,
  [SMALL_STATE(272)] = 8123,
  [SMALL_STATE(273)] = 8139,
  [SMALL_STATE(274)] = 8155,
  [SMALL_STATE(275)] = 8171,
  [SMALL_STATE(276)] = 8187,
  [SMALL_STATE(277)] = 8205,
  [SMALL_STATE(278)] = 8223,
  [SMALL_STATE(279)] = 8251,
  [SMALL_STATE(280)] = 8267,
  [SMALL_STATE(281)] = 8283,
  [SMALL_STATE(282)] = 8299,
  [SMALL_STATE(283)] = 8315,
  [SMALL_STATE(284)] = 8331,
  [SMALL_STATE(285)] = 8349,
  [SMALL_STATE(286)] = 8377,
  [SMALL_STATE(287)] = 8393,
  [SMALL_STATE(288)] = 8409,
  [SMALL_STATE(289)] = 8425,
  [SMALL_STATE(290)] = 8441,
  [SMALL_STATE(291)] = 8457,
  [SMALL_STATE(292)] = 8473,
  [SMALL_STATE(293)] = 8489,
  [SMALL_STATE(294)] = 8505,
  [SMALL_STATE(295)] = 8521,
  [SMALL_STATE(296)] = 8537,
  [SMALL_STATE(297)] = 8553,
  [SMALL_STATE(298)] = 8569,
  [SMALL_STATE(299)] = 8585,
  [SMALL_STATE(300)] = 8601,
  [SMALL_STATE(301)] = 8617,
  [SMALL_STATE(302)] = 8645,
  [SMALL_STATE(303)] = 8661,
  [SMALL_STATE(304)] = 8677,
  [SMALL_STATE(305)] = 8693,
  [SMALL_STATE(306)] = 8711,
  [SMALL_STATE(307)] = 8729,
  [SMALL_STATE(308)] = 8747,
  [SMALL_STATE(309)] = 8763,
  [SMALL_STATE(310)] = 8782,
  [SMALL_STATE(311)] = 8797,
  [SMALL_STATE(312)] = 8814,
  [SMALL_STATE(313)] = 8831,
  [SMALL_STATE(314)] = 8848,
  [SMALL_STATE(315)] = 8865,
  [SMALL_STATE(316)] = 8882,
  [SMALL_STATE(317)] = 8897,
  [SMALL_STATE(318)] = 8914,
  [SMALL_STATE(319)] = 8931,
  [SMALL_STATE(320)] = 8948,
  [SMALL_STATE(321)] = 8965,
  [SMALL_STATE(322)] = 8982,
  [SMALL_STATE(323)] = 8999,
  [SMALL_STATE(324)] = 9018,
  [SMALL_STATE(325)] = 9037,
  [SMALL_STATE(326)] = 9056,
  [SMALL_STATE(327)] = 9075,
  [SMALL_STATE(328)] = 9090,
  [SMALL_STATE(329)] = 9107,
  [SMALL_STATE(330)] = 9124,
  [SMALL_STATE(331)] = 9141,
  [SMALL_STATE(332)] = 9157,
  [SMALL_STATE(333)] = 9181,
  [SMALL_STATE(334)] = 9197,
  [SMALL_STATE(335)] = 9211,
  [SMALL_STATE(336)] = 9227,
  [SMALL_STATE(337)] = 9241,
  [SMALL_STATE(338)] = 9257,
  [SMALL_STATE(339)] = 9271,
  [SMALL_STATE(340)] = 9295,
  [SMALL_STATE(341)] = 9319,
  [SMALL_STATE(342)] = 9333,
  [SMALL_STATE(343)] = 9355,
  [SMALL_STATE(344)] = 9369,
  [SMALL_STATE(345)] = 9393,
  [SMALL_STATE(346)] = 9407,
  [SMALL_STATE(347)] = 9421,
  [SMALL_STATE(348)] = 9435,
  [SMALL_STATE(349)] = 9449,
  [SMALL_STATE(350)] = 9473,
  [SMALL_STATE(351)] = 9489,
  [SMALL_STATE(352)] = 9513,
  [SMALL_STATE(353)] = 9535,
  [SMALL_STATE(354)] = 9551,
  [SMALL_STATE(355)] = 9565,
  [SMALL_STATE(356)] = 9581,
  [SMALL_STATE(357)] = 9605,
  [SMALL_STATE(358)] = 9621,
  [SMALL_STATE(359)] = 9637,
  [SMALL_STATE(360)] = 9651,
  [SMALL_STATE(361)] = 9675,
  [SMALL_STATE(362)] = 9689,
  [SMALL_STATE(363)] = 9703,
  [SMALL_STATE(364)] = 9727,
  [SMALL_STATE(365)] = 9740,
  [SMALL_STATE(366)] = 9755,
  [SMALL_STATE(367)] = 9776,
  [SMALL_STATE(368)] = 9789,
  [SMALL_STATE(369)] = 9804,
  [SMALL_STATE(370)] = 9819,
  [SMALL_STATE(371)] = 9832,
  [SMALL_STATE(372)] = 9853,
  [SMALL_STATE(373)] = 9868,
  [SMALL_STATE(374)] = 9883,
  [SMALL_STATE(375)] = 9896,
  [SMALL_STATE(376)] = 9911,
  [SMALL_STATE(377)] = 9932,
  [SMALL_STATE(378)] = 9947,
  [SMALL_STATE(379)] = 9962,
  [SMALL_STATE(380)] = 9977,
  [SMALL_STATE(381)] = 9997,
  [SMALL_STATE(382)] = 10009,
  [SMALL_STATE(383)] = 10021,
  [SMALL_STATE(384)] = 10041,
  [SMALL_STATE(385)] = 10055,
  [SMALL_STATE(386)] = 10069,
  [SMALL_STATE(387)] = 10083,
  [SMALL_STATE(388)] = 10097,
  [SMALL_STATE(389)] = 10109,
  [SMALL_STATE(390)] = 10121,
  [SMALL_STATE(391)] = 10133,
  [SMALL_STATE(392)] = 10145,
  [SMALL_STATE(393)] = 10157,
  [SMALL_STATE(394)] = 10171,
  [SMALL_STATE(395)] = 10183,
  [SMALL_STATE(396)] = 10195,
  [SMALL_STATE(397)] = 10207,
  [SMALL_STATE(398)] = 10219,
  [SMALL_STATE(399)] = 10231,
  [SMALL_STATE(400)] = 10243,
  [SMALL_STATE(401)] = 10255,
  [SMALL_STATE(402)] = 10267,
  [SMALL_STATE(403)] = 10279,
  [SMALL_STATE(404)] = 10291,
  [SMALL_STATE(405)] = 10303,
  [SMALL_STATE(406)] = 10315,
  [SMALL_STATE(407)] = 10335,
  [SMALL_STATE(408)] = 10350,
  [SMALL_STATE(409)] = 10361,
  [SMALL_STATE(410)] = 10380,
  [SMALL_STATE(411)] = 10393,
  [SMALL_STATE(412)] = 10404,
  [SMALL_STATE(413)] = 10417,
  [SMALL_STATE(414)] = 10430,
  [SMALL_STATE(415)] = 10449,
  [SMALL_STATE(416)] = 10462,
  [SMALL_STATE(417)] = 10475,
  [SMALL_STATE(418)] = 10486,
  [SMALL_STATE(419)] = 10505,
  [SMALL_STATE(420)] = 10524,
  [SMALL_STATE(421)] = 10543,
  [SMALL_STATE(422)] = 10554,
  [SMALL_STATE(423)] = 10565,
  [SMALL_STATE(424)] = 10584,
  [SMALL_STATE(425)] = 10603,
  [SMALL_STATE(426)] = 10614,
  [SMALL_STATE(427)] = 10625,
  [SMALL_STATE(428)] = 10640,
  [SMALL_STATE(429)] = 10651,
  [SMALL_STATE(430)] = 10662,
  [SMALL_STATE(431)] = 10673,
  [SMALL_STATE(432)] = 10684,
  [SMALL_STATE(433)] = 10703,
  [SMALL_STATE(434)] = 10722,
  [SMALL_STATE(435)] = 10735,
  [SMALL_STATE(436)] = 10748,
  [SMALL_STATE(437)] = 10759,
  [SMALL_STATE(438)] = 10770,
  [SMALL_STATE(439)] = 10780,
  [SMALL_STATE(440)] = 10790,
  [SMALL_STATE(441)] = 10800,
  [SMALL_STATE(442)] = 10814,
  [SMALL_STATE(443)] = 10824,
  [SMALL_STATE(444)] = 10834,
  [SMALL_STATE(445)] = 10848,
  [SMALL_STATE(446)] = 10858,
  [SMALL_STATE(447)] = 10868,
  [SMALL_STATE(448)] = 10880,
  [SMALL_STATE(449)] = 10890,
  [SMALL_STATE(450)] = 10902,
  [SMALL_STATE(451)] = 10912,
  [SMALL_STATE(452)] = 10922,
  [SMALL_STATE(453)] = 10932,
  [SMALL_STATE(454)] = 10942,
  [SMALL_STATE(455)] = 10952,
  [SMALL_STATE(456)] = 10962,
  [SMALL_STATE(457)] = 10972,
  [SMALL_STATE(458)] = 10982,
  [SMALL_STATE(459)] = 10992,
  [SMALL_STATE(460)] = 11002,
  [SMALL_STATE(461)] = 11013,
  [SMALL_STATE(462)] = 11026,
  [SMALL_STATE(463)] = 11035,
  [SMALL_STATE(464)] = 11044,
  [SMALL_STATE(465)] = 11053,
  [SMALL_STATE(466)] = 11064,
  [SMALL_STATE(467)] = 11075,
  [SMALL_STATE(468)] = 11084,
  [SMALL_STATE(469)] = 11097,
  [SMALL_STATE(470)] = 11108,
  [SMALL_STATE(471)] = 11119,
  [SMALL_STATE(472)] = 11130,
  [SMALL_STATE(473)] = 11141,
  [SMALL_STATE(474)] = 11152,
  [SMALL_STATE(475)] = 11163,
  [SMALL_STATE(476)] = 11174,
  [SMALL_STATE(477)] = 11185,
  [SMALL_STATE(478)] = 11194,
  [SMALL_STATE(479)] = 11205,
  [SMALL_STATE(480)] = 11216,
  [SMALL_STATE(481)] = 11227,
  [SMALL_STATE(482)] = 11238,
  [SMALL_STATE(483)] = 11249,
  [SMALL_STATE(484)] = 11260,
  [SMALL_STATE(485)] = 11269,
  [SMALL_STATE(486)] = 11280,
  [SMALL_STATE(487)] = 11291,
  [SMALL_STATE(488)] = 11302,
  [SMALL_STATE(489)] = 11311,
  [SMALL_STATE(490)] = 11320,
  [SMALL_STATE(491)] = 11333,
  [SMALL_STATE(492)] = 11344,
  [SMALL_STATE(493)] = 11354,
  [SMALL_STATE(494)] = 11364,
  [SMALL_STATE(495)] = 11374,
  [SMALL_STATE(496)] = 11384,
  [SMALL_STATE(497)] = 11394,
  [SMALL_STATE(498)] = 11404,
  [SMALL_STATE(499)] = 11414,
  [SMALL_STATE(500)] = 11424,
  [SMALL_STATE(501)] = 11434,
  [SMALL_STATE(502)] = 11444,
  [SMALL_STATE(503)] = 11454,
  [SMALL_STATE(504)] = 11462,
  [SMALL_STATE(505)] = 11472,
  [SMALL_STATE(506)] = 11482,
  [SMALL_STATE(507)] = 11492,
  [SMALL_STATE(508)] = 11502,
  [SMALL_STATE(509)] = 11512,
  [SMALL_STATE(510)] = 11522,
  [SMALL_STATE(511)] = 11532,
  [SMALL_STATE(512)] = 11542,
  [SMALL_STATE(513)] = 11552,
  [SMALL_STATE(514)] = 11562,
  [SMALL_STATE(515)] = 11572,
  [SMALL_STATE(516)] = 11582,
  [SMALL_STATE(517)] = 11592,
  [SMALL_STATE(518)] = 11602,
  [SMALL_STATE(519)] = 11612,
  [SMALL_STATE(520)] = 11622,
  [SMALL_STATE(521)] = 11632,
  [SMALL_STATE(522)] = 11642,
  [SMALL_STATE(523)] = 11652,
  [SMALL_STATE(524)] = 11662,
  [SMALL_STATE(525)] = 11672,
  [SMALL_STATE(526)] = 11682,
  [SMALL_STATE(527)] = 11692,
  [SMALL_STATE(528)] = 11702,
  [SMALL_STATE(529)] = 11712,
  [SMALL_STATE(530)] = 11722,
  [SMALL_STATE(531)] = 11732,
  [SMALL_STATE(532)] = 11742,
  [SMALL_STATE(533)] = 11752,
  [SMALL_STATE(534)] = 11762,
  [SMALL_STATE(535)] = 11772,
  [SMALL_STATE(536)] = 11782,
  [SMALL_STATE(537)] = 11790,
  [SMALL_STATE(538)] = 11798,
  [SMALL_STATE(539)] = 11808,
  [SMALL_STATE(540)] = 11816,
  [SMALL_STATE(541)] = 11826,
  [SMALL_STATE(542)] = 11836,
  [SMALL_STATE(543)] = 11846,
  [SMALL_STATE(544)] = 11856,
  [SMALL_STATE(545)] = 11866,
  [SMALL_STATE(546)] = 11874,
  [SMALL_STATE(547)] = 11882,
  [SMALL_STATE(548)] = 11892,
  [SMALL_STATE(549)] = 11902,
  [SMALL_STATE(550)] = 11912,
  [SMALL_STATE(551)] = 11922,
  [SMALL_STATE(552)] = 11932,
  [SMALL_STATE(553)] = 11942,
  [SMALL_STATE(554)] = 11952,
  [SMALL_STATE(555)] = 11962,
  [SMALL_STATE(556)] = 11970,
  [SMALL_STATE(557)] = 11980,
  [SMALL_STATE(558)] = 11990,
  [SMALL_STATE(559)] = 12000,
  [SMALL_STATE(560)] = 12010,
  [SMALL_STATE(561)] = 12020,
  [SMALL_STATE(562)] = 12030,
  [SMALL_STATE(563)] = 12040,
  [SMALL_STATE(564)] = 12050,
  [SMALL_STATE(565)] = 12060,
  [SMALL_STATE(566)] = 12070,
  [SMALL_STATE(567)] = 12080,
  [SMALL_STATE(568)] = 12090,
  [SMALL_STATE(569)] = 12100,
  [SMALL_STATE(570)] = 12110,
  [SMALL_STATE(571)] = 12120,
  [SMALL_STATE(572)] = 12130,
  [SMALL_STATE(573)] = 12140,
  [SMALL_STATE(574)] = 12148,
  [SMALL_STATE(575)] = 12156,
  [SMALL_STATE(576)] = 12166,
  [SMALL_STATE(577)] = 12176,
  [SMALL_STATE(578)] = 12186,
  [SMALL_STATE(579)] = 12196,
  [SMALL_STATE(580)] = 12206,
  [SMALL_STATE(581)] = 12216,
  [SMALL_STATE(582)] = 12226,
  [SMALL_STATE(583)] = 12236,
  [SMALL_STATE(584)] = 12246,
  [SMALL_STATE(585)] = 12256,
  [SMALL_STATE(586)] = 12263,
  [SMALL_STATE(587)] = 12270,
  [SMALL_STATE(588)] = 12277,
  [SMALL_STATE(589)] = 12284,
  [SMALL_STATE(590)] = 12291,
  [SMALL_STATE(591)] = 12298,
  [SMALL_STATE(592)] = 12305,
  [SMALL_STATE(593)] = 12312,
  [SMALL_STATE(594)] = 12319,
  [SMALL_STATE(595)] = 12326,
  [SMALL_STATE(596)] = 12333,
  [SMALL_STATE(597)] = 12340,
  [SMALL_STATE(598)] = 12347,
  [SMALL_STATE(599)] = 12354,
  [SMALL_STATE(600)] = 12361,
  [SMALL_STATE(601)] = 12368,
  [SMALL_STATE(602)] = 12375,
  [SMALL_STATE(603)] = 12382,
  [SMALL_STATE(604)] = 12389,
  [SMALL_STATE(605)] = 12396,
  [SMALL_STATE(606)] = 12403,
  [SMALL_STATE(607)] = 12410,
  [SMALL_STATE(608)] = 12417,
  [SMALL_STATE(609)] = 12424,
  [SMALL_STATE(610)] = 12431,
  [SMALL_STATE(611)] = 12438,
  [SMALL_STATE(612)] = 12445,
  [SMALL_STATE(613)] = 12452,
  [SMALL_STATE(614)] = 12459,
  [SMALL_STATE(615)] = 12466,
  [SMALL_STATE(616)] = 12473,
  [SMALL_STATE(617)] = 12480,
  [SMALL_STATE(618)] = 12487,
  [SMALL_STATE(619)] = 12494,
  [SMALL_STATE(620)] = 12501,
  [SMALL_STATE(621)] = 12508,
  [SMALL_STATE(622)] = 12515,
  [SMALL_STATE(623)] = 12522,
  [SMALL_STATE(624)] = 12529,
  [SMALL_STATE(625)] = 12536,
  [SMALL_STATE(626)] = 12543,
  [SMALL_STATE(627)] = 12550,
  [SMALL_STATE(628)] = 12557,
  [SMALL_STATE(629)] = 12564,
  [SMALL_STATE(630)] = 12571,
  [SMALL_STATE(631)] = 12578,
  [SMALL_STATE(632)] = 12585,
  [SMALL_STATE(633)] = 12592,
  [SMALL_STATE(634)] = 12599,
  [SMALL_STATE(635)] = 12606,
  [SMALL_STATE(636)] = 12613,
  [SMALL_STATE(637)] = 12620,
  [SMALL_STATE(638)] = 12627,
  [SMALL_STATE(639)] = 12634,
  [SMALL_STATE(640)] = 12641,
  [SMALL_STATE(641)] = 12648,
  [SMALL_STATE(642)] = 12655,
  [SMALL_STATE(643)] = 12662,
  [SMALL_STATE(644)] = 12669,
  [SMALL_STATE(645)] = 12676,
  [SMALL_STATE(646)] = 12683,
  [SMALL_STATE(647)] = 12690,
  [SMALL_STATE(648)] = 12697,
  [SMALL_STATE(649)] = 12704,
  [SMALL_STATE(650)] = 12711,
  [SMALL_STATE(651)] = 12718,
  [SMALL_STATE(652)] = 12725,
  [SMALL_STATE(653)] = 12732,
  [SMALL_STATE(654)] = 12739,
  [SMALL_STATE(655)] = 12746,
  [SMALL_STATE(656)] = 12753,
  [SMALL_STATE(657)] = 12760,
  [SMALL_STATE(658)] = 12767,
  [SMALL_STATE(659)] = 12774,
  [SMALL_STATE(660)] = 12781,
  [SMALL_STATE(661)] = 12788,
  [SMALL_STATE(662)] = 12795,
  [SMALL_STATE(663)] = 12802,
  [SMALL_STATE(664)] = 12809,
  [SMALL_STATE(665)] = 12816,
  [SMALL_STATE(666)] = 12823,
  [SMALL_STATE(667)] = 12830,
  [SMALL_STATE(668)] = 12837,
  [SMALL_STATE(669)] = 12844,
  [SMALL_STATE(670)] = 12851,
  [SMALL_STATE(671)] = 12858,
  [SMALL_STATE(672)] = 12865,
  [SMALL_STATE(673)] = 12872,
  [SMALL_STATE(674)] = 12879,
  [SMALL_STATE(675)] = 12886,
  [SMALL_STATE(676)] = 12893,
  [SMALL_STATE(677)] = 12900,
  [SMALL_STATE(678)] = 12907,
  [SMALL_STATE(679)] = 12914,
  [SMALL_STATE(680)] = 12921,
  [SMALL_STATE(681)] = 12928,
  [SMALL_STATE(682)] = 12935,
  [SMALL_STATE(683)] = 12942,
  [SMALL_STATE(684)] = 12949,
  [SMALL_STATE(685)] = 12956,
  [SMALL_STATE(686)] = 12963,
  [SMALL_STATE(687)] = 12970,
  [SMALL_STATE(688)] = 12977,
  [SMALL_STATE(689)] = 12984,
  [SMALL_STATE(690)] = 12991,
  [SMALL_STATE(691)] = 12998,
  [SMALL_STATE(692)] = 13005,
  [SMALL_STATE(693)] = 13012,
  [SMALL_STATE(694)] = 13019,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(410),
  [7] = {.count = 1, .reusable = true}, SHIFT(435),
  [9] = {.count = 1, .reusable = true}, SHIFT(434),
  [11] = {.count = 1, .reusable = true}, SHIFT(471),
  [13] = {.count = 1, .reusable = true}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(206),
  [17] = {.count = 1, .reusable = true}, SHIFT(205),
  [19] = {.count = 1, .reusable = true}, SHIFT(202),
  [21] = {.count = 1, .reusable = true}, SHIFT(208),
  [23] = {.count = 1, .reusable = true}, SHIFT(203),
  [25] = {.count = 1, .reusable = true}, SHIFT(207),
  [27] = {.count = 1, .reusable = true}, SHIFT(194),
  [29] = {.count = 1, .reusable = true}, SHIFT(211),
  [31] = {.count = 1, .reusable = true}, SHIFT(221),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym__statement_name, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(598),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_position, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_position, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(666),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_position, 5),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_position, 5),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(518),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 3),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 3),
  [63] = {.count = 1, .reusable = true}, SHIFT(421),
  [65] = {.count = 1, .reusable = true}, SHIFT(81),
  [67] = {.count = 1, .reusable = true}, SHIFT(11),
  [69] = {.count = 1, .reusable = true}, SHIFT(13),
  [71] = {.count = 1, .reusable = true}, SHIFT(4),
  [73] = {.count = 1, .reusable = true}, SHIFT(87),
  [75] = {.count = 1, .reusable = true}, SHIFT(46),
  [77] = {.count = 1, .reusable = true}, SHIFT(94),
  [79] = {.count = 1, .reusable = true}, SHIFT(95),
  [81] = {.count = 1, .reusable = true}, SHIFT(96),
  [83] = {.count = 1, .reusable = true}, SHIFT(92),
  [85] = {.count = 1, .reusable = true}, SHIFT(90),
  [87] = {.count = 1, .reusable = true}, SHIFT(88),
  [89] = {.count = 1, .reusable = true}, SHIFT(85),
  [91] = {.count = 1, .reusable = true}, SHIFT(83),
  [93] = {.count = 1, .reusable = true}, SHIFT(79),
  [95] = {.count = 1, .reusable = true}, SHIFT(428),
  [97] = {.count = 1, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(81),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(2),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(11),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(13),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(4),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(87),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(46),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(94),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(95),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(96),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(92),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(90),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(88),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(85),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(83),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 2), SHIFT_REPEAT(79),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_size, 1),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_size, 1),
  [151] = {.count = 1, .reusable = true}, SHIFT(665),
  [153] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(6),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(24),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(32),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(37),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(38),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(18),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(98),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(101),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(41),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(77),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(102),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(39),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(19),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(78),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(103),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_borderSize, 1),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_borderSize, 1),
  [204] = {.count = 1, .reusable = true}, SHIFT(673),
  [206] = {.count = 1, .reusable = true}, SHIFT(275),
  [208] = {.count = 1, .reusable = true}, SHIFT(6),
  [210] = {.count = 1, .reusable = true}, SHIFT(24),
  [212] = {.count = 1, .reusable = true}, SHIFT(32),
  [214] = {.count = 1, .reusable = true}, SHIFT(37),
  [216] = {.count = 1, .reusable = true}, SHIFT(38),
  [218] = {.count = 1, .reusable = true}, SHIFT(18),
  [220] = {.count = 1, .reusable = true}, SHIFT(98),
  [222] = {.count = 1, .reusable = true}, SHIFT(101),
  [224] = {.count = 1, .reusable = true}, SHIFT(41),
  [226] = {.count = 1, .reusable = true}, SHIFT(77),
  [228] = {.count = 1, .reusable = true}, SHIFT(102),
  [230] = {.count = 1, .reusable = true}, SHIFT(39),
  [232] = {.count = 1, .reusable = true}, SHIFT(19),
  [234] = {.count = 1, .reusable = true}, SHIFT(78),
  [236] = {.count = 1, .reusable = true}, SHIFT(103),
  [238] = {.count = 1, .reusable = true}, SHIFT(283),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_size, 5),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_size, 5),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_borderSize, 5),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_borderSize, 5),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 1),
  [252] = {.count = 1, .reusable = true}, SHIFT(676),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_loadType, 1),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_loadType, 1),
  [258] = {.count = 1, .reusable = true}, SHIFT(546),
  [260] = {.count = 1, .reusable = true}, SHIFT(271),
  [262] = {.count = 1, .reusable = true}, SHIFT(147),
  [264] = {.count = 1, .reusable = true}, SHIFT(142),
  [266] = {.count = 1, .reusable = true}, SHIFT(146),
  [268] = {.count = 1, .reusable = true}, SHIFT(145),
  [270] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(6),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(24),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(32),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(37),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(38),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(18),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(41),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(147),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(142),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(146),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(145),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(39),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(19),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 3),
  [315] = {.count = 1, .reusable = true}, SHIFT(297),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 1),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 1),
  [321] = {.count = 1, .reusable = true}, SHIFT(680),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_orientation, 1),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_orientation, 1),
  [327] = {.count = 1, .reusable = true}, SHIFT(533),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_loadType, 3),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_loadType, 3),
  [333] = {.count = 1, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(2),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(13),
  [341] = {.count = 2, .reusable = false}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(100),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(120),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(4),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(156),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(25),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(119),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(168),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(170),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(169),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(171),
  [371] = {.count = 1, .reusable = true}, SHIFT(261),
  [373] = {.count = 1, .reusable = false}, SHIFT(100),
  [375] = {.count = 1, .reusable = true}, SHIFT(120),
  [377] = {.count = 1, .reusable = true}, SHIFT(156),
  [379] = {.count = 1, .reusable = true}, SHIFT(25),
  [381] = {.count = 1, .reusable = true}, SHIFT(119),
  [383] = {.count = 1, .reusable = true}, SHIFT(168),
  [385] = {.count = 1, .reusable = true}, SHIFT(170),
  [387] = {.count = 1, .reusable = true}, SHIFT(169),
  [389] = {.count = 1, .reusable = true}, SHIFT(171),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_orientation, 3),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_orientation, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 3),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 3),
  [399] = {.count = 1, .reusable = true}, SHIFT(251),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [405] = {.count = 1, .reusable = true}, SHIFT(523),
  [407] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(33),
  [412] = {.count = 1, .reusable = true}, SHIFT(235),
  [414] = {.count = 1, .reusable = true}, SHIFT(33),
  [416] = {.count = 1, .reusable = true}, SHIFT(226),
  [418] = {.count = 1, .reusable = true}, SHIFT(34),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [428] = {.count = 1, .reusable = true}, SHIFT(526),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [434] = {.count = 1, .reusable = true}, SHIFT(529),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 1),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_transparencecheck, 1),
  [440] = {.count = 1, .reusable = true}, SHIFT(470),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 3),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_transparencecheck, 3),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [448] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [450] = {.count = 1, .reusable = true}, SHIFT(466),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [460] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(6),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(24),
  [468] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(32),
  [471] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(37),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(38),
  [477] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(18),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(41),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(102),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(39),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(19),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_priority, 1),
  [496] = {.count = 1, .reusable = true}, SHIFT(519),
  [498] = {.count = 1, .reusable = true}, SHIFT(408),
  [500] = {.count = 1, .reusable = true}, SHIFT(199),
  [502] = {.count = 1, .reusable = true}, SHIFT(219),
  [504] = {.count = 1, .reusable = true}, SHIFT(213),
  [506] = {.count = 1, .reusable = true}, SHIFT(149),
  [508] = {.count = 1, .reusable = true}, SHIFT(210),
  [510] = {.count = 1, .reusable = true}, SHIFT(209),
  [512] = {.count = 1, .reusable = true}, SHIFT(256),
  [514] = {.count = 1, .reusable = true}, SHIFT(193),
  [516] = {.count = 1, .reusable = true}, SHIFT(198),
  [518] = {.count = 1, .reusable = true}, SHIFT(417),
  [520] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(241),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(238),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(237),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(233),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(232),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(231),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(227),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(225),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(116),
  [549] = {.count = 1, .reusable = true}, SHIFT(280),
  [551] = {.count = 1, .reusable = true}, SHIFT(91),
  [553] = {.count = 1, .reusable = true}, SHIFT(200),
  [555] = {.count = 1, .reusable = true}, SHIFT(458),
  [557] = {.count = 1, .reusable = true}, SHIFT(241),
  [559] = {.count = 1, .reusable = true}, SHIFT(238),
  [561] = {.count = 1, .reusable = true}, SHIFT(237),
  [563] = {.count = 1, .reusable = true}, SHIFT(233),
  [565] = {.count = 1, .reusable = true}, SHIFT(232),
  [567] = {.count = 1, .reusable = true}, SHIFT(231),
  [569] = {.count = 1, .reusable = true}, SHIFT(227),
  [571] = {.count = 1, .reusable = true}, SHIFT(225),
  [573] = {.count = 1, .reusable = true}, SHIFT(116),
  [575] = {.count = 1, .reusable = true}, SHIFT(308),
  [577] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2),
  [579] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(6),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(24),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(32),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(18),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(91),
  [594] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(200),
  [597] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(41),
  [600] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(77),
  [603] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(19),
  [606] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(78),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [611] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [613] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [615] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(2),
  [618] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(206),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(205),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(202),
  [627] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(208),
  [630] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(203),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(207),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(194),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(211),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(221),
  [645] = {.count = 1, .reusable = true}, SHIFT(282),
  [647] = {.count = 1, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(193),
  [652] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(2),
  [655] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(11),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(13),
  [661] = {.count = 2, .reusable = false}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(100),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(120),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(4),
  [670] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(25),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(119),
  [676] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(198),
  [679] = {.count = 1, .reusable = true}, SHIFT(253),
  [681] = {.count = 1, .reusable = true}, SHIFT(304),
  [683] = {.count = 1, .reusable = true}, SHIFT(448),
  [685] = {.count = 1, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2),
  [687] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(199),
  [690] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(219),
  [693] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(213),
  [696] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(149),
  [699] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(2),
  [702] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(11),
  [705] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(4),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(210),
  [711] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(209),
  [714] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(25),
  [717] = {.count = 1, .reusable = true}, SHIFT(134),
  [719] = {.count = 1, .reusable = true}, SHIFT(192),
  [721] = {.count = 1, .reusable = false}, SHIFT(191),
  [723] = {.count = 1, .reusable = true}, SHIFT(174),
  [725] = {.count = 1, .reusable = true}, SHIFT(183),
  [727] = {.count = 1, .reusable = true}, SHIFT(173),
  [729] = {.count = 1, .reusable = true}, SHIFT(179),
  [731] = {.count = 1, .reusable = true}, SHIFT(185),
  [733] = {.count = 1, .reusable = true}, SHIFT(182),
  [735] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_priority, 3),
  [737] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [739] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(192),
  [742] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(191),
  [745] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(174),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(183),
  [751] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(173),
  [754] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(179),
  [757] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(185),
  [760] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(182),
  [763] = {.count = 1, .reusable = true}, SHIFT(125),
  [765] = {.count = 1, .reusable = true}, SHIFT(295),
  [767] = {.count = 1, .reusable = true}, SHIFT(124),
  [769] = {.count = 1, .reusable = true}, SHIFT(76),
  [771] = {.count = 1, .reusable = false}, SHIFT(269),
  [773] = {.count = 1, .reusable = true}, SHIFT(268),
  [775] = {.count = 1, .reusable = true}, SHIFT(267),
  [777] = {.count = 1, .reusable = true}, SHIFT(244),
  [779] = {.count = 1, .reusable = true}, SHIFT(247),
  [781] = {.count = 1, .reusable = true}, SHIFT(248),
  [783] = {.count = 1, .reusable = true}, SHIFT(222),
  [785] = {.count = 1, .reusable = true}, SHIFT(274),
  [787] = {.count = 1, .reusable = true}, SHIFT(148),
  [789] = {.count = 1, .reusable = true}, SHIFT(258),
  [791] = {.count = 1, .reusable = true}, SHIFT(303),
  [793] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2),
  [795] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(6),
  [798] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(124),
  [801] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(76),
  [804] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(18),
  [807] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(91),
  [810] = {.count = 2, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(269),
  [813] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(268),
  [816] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(267),
  [819] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(19),
  [822] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2),
  [824] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(6),
  [827] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(124),
  [830] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(76),
  [833] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(148),
  [836] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(32),
  [839] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(37),
  [842] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(38),
  [845] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(18),
  [848] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(39),
  [851] = {.count = 1, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2),
  [853] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(2),
  [856] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(11),
  [859] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(13),
  [862] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(247),
  [865] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(4),
  [868] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(248),
  [871] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(25),
  [874] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(46),
  [877] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(222),
  [880] = {.count = 1, .reusable = true}, SHIFT(289),
  [882] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [884] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [886] = {.count = 1, .reusable = true}, SHIFT(630),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 1),
  [890] = {.count = 1, .reusable = true}, SHIFT(469),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_norefcount, 1),
  [894] = {.count = 1, .reusable = true}, SHIFT(472),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_scroll_speed, 1),
  [898] = {.count = 1, .reusable = true}, SHIFT(504),
  [900] = {.count = 1, .reusable = true}, SHIFT(425),
  [902] = {.count = 1, .reusable = true}, REDUCE(sym__guiButtonType, 1),
  [904] = {.count = 1, .reusable = true}, SHIFT(525),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_norefcount, 3),
  [908] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_startValue, 1),
  [910] = {.count = 1, .reusable = true}, SHIFT(599),
  [912] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2),
  [914] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(2),
  [917] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(13),
  [920] = {.count = 2, .reusable = false}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(100),
  [923] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(120),
  [926] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(4),
  [929] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(119),
  [932] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(168),
  [935] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(170),
  [938] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_stepSize, 1),
  [940] = {.count = 1, .reusable = true}, SHIFT(506),
  [942] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [944] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [946] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_horizontal, 1),
  [948] = {.count = 1, .reusable = true}, SHIFT(524),
  [950] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_minValue, 1),
  [952] = {.count = 1, .reusable = true}, SHIFT(693),
  [954] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 3),
  [956] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxValue, 1),
  [958] = {.count = 1, .reusable = true}, SHIFT(689),
  [960] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_xy, 1),
  [962] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size_xy, 1),
  [964] = {.count = 1, .reusable = true}, SHIFT(638),
  [966] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_rightbutton, 1),
  [968] = {.count = 1, .reusable = true}, SHIFT(688),
  [970] = {.count = 1, .reusable = true}, SHIFT(411),
  [972] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_slider, 1),
  [974] = {.count = 1, .reusable = true}, SHIFT(682),
  [976] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_track, 1),
  [978] = {.count = 1, .reusable = true}, SHIFT(684),
  [980] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_leftbutton, 1),
  [982] = {.count = 1, .reusable = true}, SHIFT(685),
  [984] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxValue, 3),
  [986] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [988] = {.count = 1, .reusable = true}, SHIFT(530),
  [990] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [992] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [994] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_text, 1),
  [996] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_text, 1),
  [998] = {.count = 1, .reusable = true}, SHIFT(675),
  [1000] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alwaystransparent, 1),
  [1002] = {.count = 1, .reusable = true}, SHIFT(465),
  [1004] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 1),
  [1006] = {.count = 1, .reusable = true}, SHIFT(654),
  [1008] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alphamaskfile, 1),
  [1010] = {.count = 1, .reusable = true}, SHIFT(639),
  [1012] = {.count = 1, .reusable = true}, REDUCE(sym__guiButtonType, 3),
  [1014] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_horizontal, 3),
  [1016] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_slider, 3),
  [1018] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_track, 3),
  [1020] = {.count = 1, .reusable = true}, REDUCE(aux_sym__scrollbarType_block_repeat1, 1, .production_id = 4),
  [1022] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_leftbutton, 3),
  [1024] = {.count = 1, .reusable = true}, REDUCE(sym__guiButtonType_block, 3),
  [1026] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_rightbutton, 3),
  [1028] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_xy, 5),
  [1030] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size_xy, 5),
  [1032] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_minValue, 3),
  [1034] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_stepSize, 3),
  [1036] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_startValue, 3),
  [1038] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 1),
  [1040] = {.count = 1, .reusable = true}, SHIFT(604),
  [1042] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_scroll_speed, 3),
  [1044] = {.count = 1, .reusable = true}, REDUCE(sym__guiButtonType_block, 2),
  [1046] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_textureFile, 1),
  [1048] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_textureFile, 1),
  [1050] = {.count = 1, .reusable = true}, SHIFT(678),
  [1052] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_font, 1),
  [1054] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_font, 1),
  [1056] = {.count = 1, .reusable = true}, SHIFT(677),
  [1058] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 4),
  [1060] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2),
  [1062] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(328),
  [1065] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(312),
  [1068] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(330),
  [1071] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(313),
  [1074] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(314),
  [1077] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(315),
  [1080] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(317),
  [1083] = {.count = 1, .reusable = true}, SHIFT(489),
  [1085] = {.count = 1, .reusable = true}, SHIFT(277),
  [1087] = {.count = 1, .reusable = true}, SHIFT(329),
  [1089] = {.count = 1, .reusable = true}, SHIFT(318),
  [1091] = {.count = 1, .reusable = true}, SHIFT(319),
  [1093] = {.count = 1, .reusable = true}, SHIFT(320),
  [1095] = {.count = 1, .reusable = true}, SHIFT(321),
  [1097] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [1099] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [1101] = {.count = 1, .reusable = true}, SHIFT(631),
  [1103] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [1105] = {.count = 1, .reusable = true}, SHIFT(118),
  [1107] = {.count = 1, .reusable = true}, SHIFT(323),
  [1109] = {.count = 1, .reusable = true}, SHIFT(324),
  [1111] = {.count = 1, .reusable = false}, SHIFT(325),
  [1113] = {.count = 1, .reusable = true}, SHIFT(309),
  [1115] = {.count = 1, .reusable = true}, SHIFT(326),
  [1117] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_textureFile, 3),
  [1119] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_textureFile, 3),
  [1121] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_font, 3),
  [1123] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_font, 3),
  [1125] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_text, 3),
  [1127] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_text, 3),
  [1129] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2),
  [1131] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(277),
  [1134] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(329),
  [1137] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(318),
  [1140] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(116),
  [1143] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(319),
  [1146] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(320),
  [1149] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(321),
  [1152] = {.count = 1, .reusable = true}, SHIFT(110),
  [1154] = {.count = 1, .reusable = true}, SHIFT(459),
  [1156] = {.count = 1, .reusable = true}, SHIFT(328),
  [1158] = {.count = 1, .reusable = true}, SHIFT(312),
  [1160] = {.count = 1, .reusable = true}, SHIFT(330),
  [1162] = {.count = 1, .reusable = true}, SHIFT(313),
  [1164] = {.count = 1, .reusable = true}, SHIFT(314),
  [1166] = {.count = 1, .reusable = true}, SHIFT(315),
  [1168] = {.count = 1, .reusable = true}, SHIFT(317),
  [1170] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alwaystransparent, 3),
  [1172] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [1174] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guiButtonType_block_repeat1, 2),
  [1176] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiButtonType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1179] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiButtonType_block_repeat1, 2), SHIFT_REPEAT(4),
  [1182] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiButtonType_block_repeat1, 2), SHIFT_REPEAT(323),
  [1185] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiButtonType_block_repeat1, 2), SHIFT_REPEAT(324),
  [1188] = {.count = 2, .reusable = false}, REDUCE(aux_sym__guiButtonType_block_repeat1, 2), SHIFT_REPEAT(325),
  [1191] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiButtonType_block_repeat1, 2), SHIFT_REPEAT(309),
  [1194] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiButtonType_block_repeat1, 2), SHIFT_REPEAT(326),
  [1197] = {.count = 1, .reusable = true}, SHIFT(462),
  [1199] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alphamaskfile, 3),
  [1201] = {.count = 1, .reusable = true}, SHIFT(452),
  [1203] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 3),
  [1205] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [1207] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [1209] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 1),
  [1211] = {.count = 1, .reusable = true}, SHIFT(475),
  [1213] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [1215] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [1217] = {.count = 1, .reusable = true}, SHIFT(327),
  [1219] = {.count = 1, .reusable = true}, SHIFT(165),
  [1221] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 1),
  [1223] = {.count = 1, .reusable = true}, SHIFT(559),
  [1225] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 1),
  [1227] = {.count = 1, .reusable = true}, SHIFT(476),
  [1229] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 1),
  [1231] = {.count = 1, .reusable = true}, SHIFT(556),
  [1233] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [1235] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [1237] = {.count = 1, .reusable = true}, SHIFT(189),
  [1239] = {.count = 1, .reusable = true}, SHIFT(628),
  [1241] = {.count = 1, .reusable = true}, REDUCE(sym__iconType, 1),
  [1243] = {.count = 1, .reusable = true}, SHIFT(501),
  [1245] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2),
  [1247] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2), SHIFT_REPEAT(165),
  [1250] = {.count = 1, .reusable = true}, SHIFT(316),
  [1252] = {.count = 1, .reusable = true}, REDUCE(sym__iconType, 3),
  [1254] = {.count = 1, .reusable = true}, REDUCE(sym__iconType_block, 3),
  [1256] = {.count = 1, .reusable = true}, SHIFT(401),
  [1258] = {.count = 1, .reusable = true}, SHIFT(350),
  [1260] = {.count = 1, .reusable = true}, SHIFT(216),
  [1262] = {.count = 1, .reusable = true}, SHIFT(353),
  [1264] = {.count = 1, .reusable = true}, SHIFT(355),
  [1266] = {.count = 1, .reusable = true}, SHIFT(311),
  [1268] = {.count = 1, .reusable = true}, SHIFT(396),
  [1270] = {.count = 1, .reusable = false}, SHIFT(24),
  [1272] = {.count = 1, .reusable = true}, SHIFT(246),
  [1274] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_format, 1),
  [1276] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_format, 1),
  [1278] = {.count = 1, .reusable = true}, SHIFT(587),
  [1280] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2),
  [1282] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(6),
  [1285] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(350),
  [1288] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(216),
  [1291] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(353),
  [1294] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(355),
  [1297] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(311),
  [1300] = {.count = 1, .reusable = true}, SHIFT(381),
  [1302] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [1304] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [1306] = {.count = 1, .reusable = true}, SHIFT(187),
  [1308] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 3),
  [1310] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 3),
  [1312] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 3),
  [1314] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 3),
  [1316] = {.count = 1, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2),
  [1318] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(6),
  [1321] = {.count = 2, .reusable = false}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(24),
  [1324] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(76),
  [1327] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(148),
  [1330] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(216),
  [1333] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(246),
  [1336] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 1),
  [1338] = {.count = 1, .reusable = true}, SHIFT(651),
  [1340] = {.count = 1, .reusable = true}, SHIFT(398),
  [1342] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 1, .production_id = 4),
  [1344] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxWidth, 1),
  [1346] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_maxWidth, 1),
  [1348] = {.count = 1, .reusable = true}, SHIFT(528),
  [1350] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_fixedsize, 1),
  [1352] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_fixedsize, 1),
  [1354] = {.count = 1, .reusable = true}, SHIFT(481),
  [1356] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxHeight, 1),
  [1358] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_maxHeight, 1),
  [1360] = {.count = 1, .reusable = true}, SHIFT(527),
  [1362] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_truncate, 1),
  [1364] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_truncate, 1),
  [1366] = {.count = 1, .reusable = true}, SHIFT(480),
  [1368] = {.count = 1, .reusable = true}, REDUCE(sym__iconType_block, 2),
  [1370] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 1),
  [1372] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 1),
  [1374] = {.count = 1, .reusable = true}, SHIFT(645),
  [1376] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [1378] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [1380] = {.count = 1, .reusable = true}, SHIFT(485),
  [1382] = {.count = 1, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2),
  [1384] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(372),
  [1387] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(373),
  [1390] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(375),
  [1393] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(377),
  [1396] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(378),
  [1399] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 7),
  [1401] = {.count = 1, .reusable = true}, SHIFT(456),
  [1403] = {.count = 1, .reusable = true}, SHIFT(372),
  [1405] = {.count = 1, .reusable = true}, SHIFT(373),
  [1407] = {.count = 1, .reusable = true}, SHIFT(375),
  [1409] = {.count = 1, .reusable = true}, SHIFT(377),
  [1411] = {.count = 1, .reusable = true}, SHIFT(378),
  [1413] = {.count = 1, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 1, .production_id = 4),
  [1415] = {.count = 1, .reusable = false}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 1, .production_id = 4),
  [1417] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [1419] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [1421] = {.count = 1, .reusable = true}, SHIFT(484),
  [1423] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_truncate, 3),
  [1425] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_truncate, 3),
  [1427] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxWidth, 3),
  [1429] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_maxWidth, 3),
  [1431] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [1433] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [1435] = {.count = 1, .reusable = true}, SHIFT(586),
  [1437] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [1439] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [1441] = {.count = 1, .reusable = true}, SHIFT(550),
  [1443] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxHeight, 3),
  [1445] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_maxHeight, 3),
  [1447] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [1449] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [1451] = {.count = 1, .reusable = true}, SHIFT(488),
  [1453] = {.count = 1, .reusable = true}, SHIFT(454),
  [1455] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 4),
  [1457] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 4),
  [1459] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_fixedsize, 3),
  [1461] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_fixedsize, 3),
  [1463] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 2),
  [1465] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 2),
  [1467] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_format, 3),
  [1469] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_format, 3),
  [1471] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [1473] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [1475] = {.count = 1, .reusable = true}, SHIFT(646),
  [1477] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [1479] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [1481] = {.count = 1, .reusable = true}, SHIFT(647),
  [1483] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_instantTextBoxType, 1),
  [1485] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_instantTextBoxType, 1),
  [1487] = {.count = 1, .reusable = true}, SHIFT(460),
  [1489] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [1491] = {.count = 1, .reusable = true}, SHIFT(581),
  [1493] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [1495] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [1497] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2),
  [1499] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(6),
  [1502] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(365),
  [1505] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(368),
  [1508] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(369),
  [1511] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(246),
  [1514] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [1516] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [1518] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_cursor, 1),
  [1520] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_cursor, 1),
  [1522] = {.count = 1, .reusable = true}, SHIFT(600),
  [1524] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType, 1),
  [1526] = {.count = 1, .reusable = true}, SHIFT(543),
  [1528] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 1),
  [1530] = {.count = 1, .reusable = true}, SHIFT(632),
  [1532] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [1534] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [1536] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [1538] = {.count = 1, .reusable = true}, SHIFT(591),
  [1540] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [1542] = {.count = 1, .reusable = true}, SHIFT(589),
  [1544] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [1546] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [1548] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [1550] = {.count = 1, .reusable = true}, SHIFT(596),
  [1552] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [1554] = {.count = 1, .reusable = true}, SHIFT(597),
  [1556] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [1558] = {.count = 1, .reusable = true}, SHIFT(588),
  [1560] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [1562] = {.count = 1, .reusable = true}, SHIFT(590),
  [1564] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_moveable, 1),
  [1566] = {.count = 1, .reusable = true}, SHIFT(482),
  [1568] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_backGround, 1),
  [1570] = {.count = 1, .reusable = true}, SHIFT(669),
  [1572] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [1574] = {.count = 1, .reusable = true}, SHIFT(492),
  [1576] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 5),
  [1578] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 5),
  [1580] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType, 1),
  [1582] = {.count = 1, .reusable = true}, SHIFT(538),
  [1584] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [1586] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [1588] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [1590] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [1592] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [1594] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [1596] = {.count = 1, .reusable = true}, SHIFT(493),
  [1598] = {.count = 1, .reusable = true}, SHIFT(397),
  [1600] = {.count = 1, .reusable = true}, SHIFT(365),
  [1602] = {.count = 1, .reusable = true}, SHIFT(368),
  [1604] = {.count = 1, .reusable = true}, SHIFT(369),
  [1606] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [1608] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [1610] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType, 1),
  [1612] = {.count = 1, .reusable = true}, SHIFT(542),
  [1614] = {.count = 1, .reusable = true}, SHIFT(390),
  [1616] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [1618] = {.count = 1, .reusable = true}, SHIFT(567),
  [1620] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_scrollbartype, 1),
  [1622] = {.count = 1, .reusable = true}, SHIFT(605),
  [1624] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [1626] = {.count = 1, .reusable = true}, SHIFT(503),
  [1628] = {.count = 1, .reusable = true}, SHIFT(384),
  [1630] = {.count = 1, .reusable = true}, SHIFT(385),
  [1632] = {.count = 1, .reusable = true}, SHIFT(393),
  [1634] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType, 1),
  [1636] = {.count = 1, .reusable = true}, SHIFT(565),
  [1638] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [1640] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType, 1),
  [1642] = {.count = 1, .reusable = true}, SHIFT(558),
  [1644] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [1646] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_moveable, 3),
  [1648] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_backGround, 3),
  [1650] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype, 1),
  [1652] = {.count = 1, .reusable = true}, SHIFT(557),
  [1654] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 1),
  [1656] = {.count = 1, .reusable = true}, SHIFT(554),
  [1658] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 1),
  [1660] = {.count = 1, .reusable = true}, SHIFT(511),
  [1662] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2),
  [1664] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2), SHIFT_REPEAT(384),
  [1667] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2), SHIFT_REPEAT(385),
  [1670] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2), SHIFT_REPEAT(149),
  [1673] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2), SHIFT_REPEAT(393),
  [1676] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [1678] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [1680] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 1),
  [1682] = {.count = 1, .reusable = true}, SHIFT(583),
  [1684] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 1),
  [1686] = {.count = 1, .reusable = true}, SHIFT(517),
  [1688] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType, 3),
  [1690] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType, 3),
  [1692] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 1),
  [1694] = {.count = 1, .reusable = true}, SHIFT(531),
  [1696] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [1698] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [1700] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType_block, 2),
  [1702] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_cursor, 5),
  [1704] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_cursor, 5),
  [1706] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect, 1),
  [1708] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effect, 1),
  [1710] = {.count = 1, .reusable = true}, SHIFT(637),
  [1712] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_allwaystransparent, 1),
  [1714] = {.count = 1, .reusable = true}, SHIFT(483),
  [1716] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_background, 1),
  [1718] = {.count = 1, .reusable = true}, SHIFT(606),
  [1720] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_instantTextBoxType, 3),
  [1722] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_instantTextBoxType, 3),
  [1724] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [1726] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType_block, 3),
  [1728] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [1730] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType_block, 2),
  [1732] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [1734] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [1736] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType_block, 3),
  [1738] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType, 3),
  [1740] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType_block, 3),
  [1742] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 5),
  [1744] = {.count = 1, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 1, .production_id = 4),
  [1746] = {.count = 1, .reusable = false}, REDUCE(aux_sym__editBoxType_block_repeat1, 1, .production_id = 4),
  [1748] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType_block, 2),
  [1750] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [1752] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 1, .production_id = 4),
  [1754] = {.count = 1, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 1, .production_id = 4),
  [1756] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [1758] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 1, .production_id = 4),
  [1760] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 1),
  [1762] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 1),
  [1764] = {.count = 1, .reusable = true}, SHIFT(478),
  [1766] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 1),
  [1768] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 1),
  [1770] = {.count = 1, .reusable = true}, SHIFT(620),
  [1772] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 1),
  [1774] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 1),
  [1776] = {.count = 1, .reusable = true}, SHIFT(621),
  [1778] = {.count = 1, .reusable = true}, SHIFT(555),
  [1780] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 2),
  [1782] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 1, .production_id = 4),
  [1784] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 3),
  [1786] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 2),
  [1788] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [1790] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [1792] = {.count = 1, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [1794] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 1),
  [1796] = {.count = 1, .reusable = true}, SHIFT(497),
  [1798] = {.count = 1, .reusable = true}, SHIFT(153),
  [1800] = {.count = 1, .reusable = true}, SHIFT(386),
  [1802] = {.count = 1, .reusable = true}, SHIFT(387),
  [1804] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 3),
  [1806] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 2),
  [1808] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType_block, 2),
  [1810] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 2),
  [1812] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [1814] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect, 3),
  [1816] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effect, 3),
  [1818] = {.count = 1, .reusable = true}, SHIFT(172),
  [1820] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 3),
  [1822] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype, 3),
  [1824] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType_block, 2),
  [1826] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 2),
  [1828] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 3),
  [1830] = {.count = 1, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 1, .production_id = 4),
  [1832] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType_block, 3),
  [1834] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType_block, 3),
  [1836] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType, 3),
  [1838] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 3),
  [1840] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_allwaystransparent, 3),
  [1842] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 3),
  [1844] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_background, 3),
  [1846] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_scrollbartype, 3),
  [1848] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [1850] = {.count = 1, .reusable = true}, REDUCE(aux_sym__iconType_block_repeat1, 2),
  [1852] = {.count = 2, .reusable = true}, REDUCE(aux_sym__iconType_block_repeat1, 2), SHIFT_REPEAT(386),
  [1855] = {.count = 2, .reusable = true}, REDUCE(aux_sym__iconType_block_repeat1, 2), SHIFT_REPEAT(387),
  [1858] = {.count = 2, .reusable = true}, REDUCE(aux_sym__iconType_block_repeat1, 2), SHIFT_REPEAT(4),
  [1861] = {.count = 2, .reusable = true}, REDUCE(aux_sym__iconType_block_repeat1, 2), SHIFT_REPEAT(25),
  [1864] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType, 3),
  [1866] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 3),
  [1868] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 3),
  [1870] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 3),
  [1872] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 3),
  [1874] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 7),
  [1876] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 7),
  [1878] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 7),
  [1880] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 7),
  [1882] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 3),
  [1884] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_tooltipText, 1),
  [1886] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_tooltipText, 1),
  [1888] = {.count = 1, .reusable = true}, SHIFT(585),
  [1890] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 3),
  [1892] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 1),
  [1894] = {.count = 1, .reusable = true}, SHIFT(576),
  [1896] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 1),
  [1898] = {.count = 1, .reusable = true}, SHIFT(622),
  [1900] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 1),
  [1902] = {.count = 1, .reusable = true}, SHIFT(618),
  [1904] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 1),
  [1906] = {.count = 1, .reusable = true}, SHIFT(617),
  [1908] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 1),
  [1910] = {.count = 1, .reusable = true}, SHIFT(616),
  [1912] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 2),
  [1914] = {.count = 1, .reusable = true}, SHIFT(515),
  [1916] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 1),
  [1918] = {.count = 1, .reusable = true}, SHIFT(655),
  [1920] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 1),
  [1922] = {.count = 1, .reusable = true}, SHIFT(658),
  [1924] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 1),
  [1926] = {.count = 1, .reusable = true}, SHIFT(659),
  [1928] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect_bool, 1),
  [1930] = {.count = 1, .reusable = true}, SHIFT(491),
  [1932] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 1, .production_id = 4),
  [1934] = {.count = 1, .reusable = false}, REDUCE(aux_sym__textBoxType_block_repeat1, 1, .production_id = 4),
  [1936] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_quadTextureSprite, 1),
  [1938] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_quadTextureSprite, 1),
  [1940] = {.count = 1, .reusable = true}, SHIFT(592),
  [1942] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_parent, 1),
  [1944] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_parent, 1),
  [1946] = {.count = 1, .reusable = true}, SHIFT(593),
  [1948] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_tooltip, 1),
  [1950] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_tooltip, 1),
  [1952] = {.count = 1, .reusable = true}, SHIFT(594),
  [1954] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_delayedTooltipText, 1),
  [1956] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_delayedTooltipText, 1),
  [1958] = {.count = 1, .reusable = true}, SHIFT(595),
  [1960] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 3),
  [1962] = {.count = 1, .reusable = true}, SHIFT(691),
  [1964] = {.count = 1, .reusable = true}, SHIFT(516),
  [1966] = {.count = 1, .reusable = true}, SHIFT(694),
  [1968] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guiButtonType_block_repeat1, 1, .production_id = 4),
  [1970] = {.count = 1, .reusable = false}, REDUCE(aux_sym__guiButtonType_block_repeat1, 1, .production_id = 4),
  [1972] = {.count = 1, .reusable = true}, SHIFT(405),
  [1974] = {.count = 1, .reusable = true}, SHIFT(412),
  [1976] = {.count = 1, .reusable = true}, SHIFT(415),
  [1978] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_tooltip, 3),
  [1980] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_tooltip, 3),
  [1982] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 3, .production_id = 5),
  [1984] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_parent, 3),
  [1986] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_parent, 3),
  [1988] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_quadTextureSprite, 3),
  [1990] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_quadTextureSprite, 3),
  [1992] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 3),
  [1994] = {.count = 1, .reusable = true}, SHIFT(392),
  [1996] = {.count = 1, .reusable = true}, SHIFT(416),
  [1998] = {.count = 1, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2),
  [2000] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(6),
  [2003] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(91),
  [2006] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(413),
  [2009] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 3),
  [2011] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [2013] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 3),
  [2015] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2),
  [2017] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(6),
  [2020] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(412),
  [2023] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(415),
  [2026] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 1, .production_id = 4),
  [2028] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect_bool, 3),
  [2030] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 3),
  [2032] = {.count = 1, .reusable = true}, SHIFT(288),
  [2034] = {.count = 1, .reusable = true}, SHIFT(413),
  [2036] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 1),
  [2038] = {.count = 1, .reusable = true}, SHIFT(601),
  [2040] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2),
  [2042] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(6),
  [2045] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(416),
  [2048] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(311),
  [2051] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [2053] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(410),
  [2056] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(435),
  [2059] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(434),
  [2062] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 1),
  [2064] = {.count = 1, .reusable = true}, SHIFT(640),
  [2066] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_meshsettings, 1),
  [2068] = {.count = 1, .reusable = true}, SHIFT(602),
  [2070] = {.count = 1, .reusable = true}, SHIFT(399),
  [2072] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_delayedTooltipText, 3),
  [2074] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_delayedTooltipText, 3),
  [2076] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_tooltipText, 3),
  [2078] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_tooltipText, 3),
  [2080] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 3),
  [2082] = {.count = 1, .reusable = true}, SHIFT(292),
  [2084] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 5),
  [2086] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 3),
  [2088] = {.count = 1, .reusable = true}, SHIFT(400),
  [2090] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 1, .production_id = 4),
  [2092] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texture, 1),
  [2094] = {.count = 1, .reusable = true}, SHIFT(653),
  [2096] = {.count = 1, .reusable = true}, SHIFT(450),
  [2098] = {.count = 1, .reusable = true}, SHIFT(447),
  [2100] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_meshsettings, 11),
  [2102] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_normal, 1),
  [2104] = {.count = 1, .reusable = true}, SHIFT(625),
  [2106] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_specular, 1),
  [2108] = {.count = 1, .reusable = true}, SHIFT(636),
  [2110] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 6),
  [2112] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2),
  [2114] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(277),
  [2117] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(447),
  [2120] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 1),
  [2122] = {.count = 1, .reusable = true}, SHIFT(584),
  [2124] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh, 1),
  [2126] = {.count = 1, .reusable = true}, SHIFT(582),
  [2128] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 3),
  [2130] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle, 1),
  [2132] = {.count = 1, .reusable = true}, SHIFT(494),
  [2134] = {.count = 1, .reusable = true}, SHIFT(457),
  [2136] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType, 1),
  [2138] = {.count = 1, .reusable = true}, SHIFT(495),
  [2140] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType, 1),
  [2142] = {.count = 1, .reusable = true}, SHIFT(496),
  [2144] = {.count = 1, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 1, .production_id = 4),
  [2146] = {.count = 1, .reusable = false}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 1, .production_id = 4),
  [2148] = {.count = 1, .reusable = true}, SHIFT(281),
  [2150] = {.count = 1, .reusable = true}, SHIFT(449),
  [2152] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType_block, 2),
  [2154] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 1, .production_id = 4),
  [2156] = {.count = 1, .reusable = true}, SHIFT(293),
  [2158] = {.count = 1, .reusable = true}, REDUCE(sym__windowType, 1),
  [2160] = {.count = 1, .reusable = true}, SHIFT(499),
  [2162] = {.count = 1, .reusable = true}, REDUCE(sym__textBoxType, 1),
  [2164] = {.count = 1, .reusable = true}, SHIFT(500),
  [2166] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_spriteType, 1),
  [2168] = {.count = 1, .reusable = true}, SHIFT(679),
  [2170] = {.count = 1, .reusable = true}, SHIFT(683),
  [2172] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texture, 3),
  [2174] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_specular, 3),
  [2176] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType_block, 2),
  [2178] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh, 3),
  [2180] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle_block, 2),
  [2182] = {.count = 1, .reusable = true}, REDUCE(sym__scrollbarType, 1),
  [2184] = {.count = 1, .reusable = true}, SHIFT(502),
  [2186] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 3),
  [2188] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_normal, 3),
  [2190] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType_block, 3),
  [2192] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType_block, 3),
  [2194] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 2),
  [2196] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle_block, 3),
  [2198] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 2),
  [2200] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 3),
  [2202] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType, 3),
  [2204] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType, 3),
  [2206] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle, 3),
  [2208] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 3),
  [2210] = {.count = 1, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2),
  [2212] = {.count = 2, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2), SHIFT_REPEAT(6),
  [2215] = {.count = 2, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2), SHIFT_REPEAT(449),
  [2218] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gui, 1),
  [2220] = {.count = 1, .reusable = true}, REDUCE(sym__windowType_block, 2),
  [2222] = {.count = 1, .reusable = true}, SHIFT(486),
  [2224] = {.count = 1, .reusable = true}, SHIFT(487),
  [2226] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 1),
  [2228] = {.count = 1, .reusable = true}, SHIFT(577),
  [2230] = {.count = 1, .reusable = true}, REDUCE(sym__textBoxType_block, 3),
  [2232] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 1),
  [2234] = {.count = 1, .reusable = true}, SHIFT(570),
  [2236] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_linewidth, 1),
  [2238] = {.count = 1, .reusable = true}, SHIFT(568),
  [2240] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 1),
  [2242] = {.count = 1, .reusable = true}, SHIFT(575),
  [2244] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_type, 1),
  [2246] = {.count = 1, .reusable = true}, SHIFT(623),
  [2248] = {.count = 1, .reusable = true}, REDUCE(sym__windowType_block, 3),
  [2250] = {.count = 1, .reusable = true}, SHIFT(474),
  [2252] = {.count = 1, .reusable = true}, SHIFT(473),
  [2254] = {.count = 1, .reusable = true}, REDUCE(sym__scrollbarType_block, 3),
  [2256] = {.count = 1, .reusable = true}, REDUCE(sym__textBoxType, 3),
  [2258] = {.count = 1, .reusable = true}, REDUCE(sym__textBoxType_block, 2),
  [2260] = {.count = 1, .reusable = true}, REDUCE(aux_sym__iconType_block_repeat1, 1, .production_id = 4),
  [2262] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gui_repeat1, 2),
  [2264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gui_repeat1, 2), SHIFT_REPEAT(471),
  [2267] = {.count = 1, .reusable = true}, REDUCE(sym__scrollbarType_block, 2),
  [2269] = {.count = 1, .reusable = true}, REDUCE(sym__scrollbarType, 3),
  [2271] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes_type, 1, .production_id = 2),
  [2273] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_spriteType, 3),
  [2275] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 1),
  [2277] = {.count = 1, .reusable = true}, SHIFT(579),
  [2279] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 1),
  [2281] = {.count = 1, .reusable = true}, SHIFT(578),
  [2283] = {.count = 1, .reusable = true}, REDUCE(sym__windowType, 3),
  [2285] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 3),
  [2287] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_linewidth, 3),
  [2289] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_type, 3),
  [2291] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [2293] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(441),
  [2296] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 3),
  [2298] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 3),
  [2300] = {.count = 1, .reusable = true}, SHIFT(218),
  [2302] = {.count = 1, .reusable = true}, SHIFT(441),
  [2304] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 3),
  [2306] = {.count = 1, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 1, .production_id = 4),
  [2308] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 1),
  [2310] = {.count = 1, .reusable = true}, SHIFT(498),
  [2312] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [2314] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_integer, 1),
  [2316] = {.count = 1, .reusable = true}, SHIFT(566),
  [2318] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 2),
  [2320] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 1, .production_id = 4),
  [2322] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 3),
  [2324] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [2326] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 3),
  [2328] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 1, .production_id = 4),
  [2330] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 2),
  [2332] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 3),
  [2334] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [2336] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 2),
  [2338] = {.count = 1, .reusable = true}, SHIFT(249),
  [2340] = {.count = 1, .reusable = true}, SHIFT(228),
  [2342] = {.count = 1, .reusable = true}, SHIFT(545),
  [2344] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 2),
  [2346] = {.count = 1, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 1, .production_id = 4),
  [2348] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 3),
  [2350] = {.count = 1, .reusable = true}, SHIFT(133),
  [2352] = {.count = 1, .reusable = true}, SHIFT(55),
  [2354] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_integer, 3),
  [2356] = {.count = 1, .reusable = true}, SHIFT(265),
  [2358] = {.count = 1, .reusable = true}, SHIFT(89),
  [2360] = {.count = 1, .reusable = true}, SHIFT(40),
  [2362] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes, 1),
  [2364] = {.count = 1, .reusable = true}, SHIFT(580),
  [2366] = {.count = 1, .reusable = true}, SHIFT(82),
  [2368] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 1),
  [2370] = {.count = 1, .reusable = true}, SHIFT(650),
  [2372] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 1),
  [2374] = {.count = 1, .reusable = true}, SHIFT(649),
  [2376] = {.count = 1, .reusable = true}, SHIFT(161),
  [2378] = {.count = 1, .reusable = true}, SHIFT(162),
  [2380] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_type, 1, .production_id = 2),
  [2382] = {.count = 1, .reusable = true}, SHIFT(305),
  [2384] = {.count = 1, .reusable = true}, SHIFT(444),
  [2386] = {.count = 1, .reusable = true}, SHIFT(180),
  [2388] = {.count = 1, .reusable = true}, SHIFT(188),
  [2390] = {.count = 1, .reusable = true}, SHIFT(229),
  [2392] = {.count = 1, .reusable = true}, SHIFT(296),
  [2394] = {.count = 1, .reusable = true}, SHIFT(197),
  [2396] = {.count = 1, .reusable = true}, SHIFT(204),
  [2398] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 1),
  [2400] = {.count = 1, .reusable = true}, SHIFT(634),
  [2402] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 1),
  [2404] = {.count = 1, .reusable = true}, SHIFT(633),
  [2406] = {.count = 1, .reusable = true}, SHIFT(195),
  [2408] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 3),
  [2410] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [2412] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(545),
  [2415] = {.count = 1, .reusable = true}, SHIFT(347),
  [2417] = {.count = 1, .reusable = true}, SHIFT(35),
  [2419] = {.count = 1, .reusable = true}, SHIFT(99),
  [2421] = {.count = 1, .reusable = true}, SHIFT(339),
  [2423] = {.count = 1, .reusable = true}, SHIFT(220),
  [2425] = {.count = 1, .reusable = true}, SHIFT(158),
  [2427] = {.count = 1, .reusable = true}, SHIFT(151),
  [2429] = {.count = 1, .reusable = true}, SHIFT(136),
  [2431] = {.count = 1, .reusable = true}, SHIFT(47),
  [2433] = {.count = 1, .reusable = true}, SHIFT(80),
  [2435] = {.count = 1, .reusable = true}, SHIFT(285),
  [2437] = {.count = 1, .reusable = true}, SHIFT(9),
  [2439] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes_block, 3),
  [2441] = {.count = 1, .reusable = true}, SHIFT(117),
  [2443] = {.count = 1, .reusable = true}, SHIFT(507),
  [2445] = {.count = 1, .reusable = true}, SHIFT(114),
  [2447] = {.count = 1, .reusable = true}, SHIFT(508),
  [2449] = {.count = 1, .reusable = true}, SHIFT(687),
  [2451] = {.count = 1, .reusable = true}, SHIFT(69),
  [2453] = {.count = 1, .reusable = true}, SHIFT(560),
  [2455] = {.count = 1, .reusable = true}, SHIFT(561),
  [2457] = {.count = 1, .reusable = true}, SHIFT(520),
  [2459] = {.count = 1, .reusable = true}, SHIFT(336),
  [2461] = {.count = 1, .reusable = false}, SHIFT(336),
  [2463] = {.count = 1, .reusable = true}, SHIFT(57),
  [2465] = {.count = 1, .reusable = true}, SHIFT(7),
  [2467] = {.count = 1, .reusable = false}, SHIFT(7),
  [2469] = {.count = 1, .reusable = true}, SHIFT(64),
  [2471] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 1),
  [2473] = {.count = 1, .reusable = true}, SHIFT(612),
  [2475] = {.count = 1, .reusable = true}, SHIFT(569),
  [2477] = {.count = 1, .reusable = true}, SHIFT(571),
  [2479] = {.count = 1, .reusable = true}, SHIFT(36),
  [2481] = {.count = 1, .reusable = true}, SHIFT(105),
  [2483] = {.count = 1, .reusable = true}, SHIFT(126),
  [2485] = {.count = 1, .reusable = true}, SHIFT(42),
  [2487] = {.count = 1, .reusable = true}, SHIFT(184),
  [2489] = {.count = 1, .reusable = true}, SHIFT(181),
  [2491] = {.count = 1, .reusable = true}, SHIFT(43),
  [2493] = {.count = 1, .reusable = true}, SHIFT(66),
  [2495] = {.count = 1, .reusable = true}, SHIFT(15),
  [2497] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader_file, 1),
  [2499] = {.count = 1, .reusable = true}, SHIFT(672),
  [2501] = {.count = 1, .reusable = true}, SHIFT(29),
  [2503] = {.count = 1, .reusable = true}, SHIFT(532),
  [2505] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader, 1),
  [2507] = {.count = 1, .reusable = true}, SHIFT(668),
  [2509] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes, 3),
  [2511] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 3),
  [2513] = {.count = 1, .reusable = true}, SHIFT(28),
  [2515] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 3),
  [2517] = {.count = 1, .reusable = true}, SHIFT(535),
  [2519] = {.count = 1, .reusable = true}, SHIFT(59),
  [2521] = {.count = 1, .reusable = true}, SHIFT(68),
  [2523] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_specular, 1),
  [2525] = {.count = 1, .reusable = true}, SHIFT(664),
  [2527] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 3),
  [2529] = {.count = 1, .reusable = true}, SHIFT(26),
  [2531] = {.count = 1, .reusable = true}, SHIFT(513),
  [2533] = {.count = 1, .reusable = true}, SHIFT(544),
  [2535] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_normal, 1),
  [2537] = {.count = 1, .reusable = true}, SHIFT(657),
  [2539] = {.count = 1, .reusable = true}, SHIFT(201),
  [2541] = {.count = 1, .reusable = true}, SHIFT(512),
  [2543] = {.count = 1, .reusable = true}, SHIFT(20),
  [2545] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes_block, 2),
  [2547] = {.count = 1, .reusable = true}, SHIFT(160),
  [2549] = {.count = 1, .reusable = true}, SHIFT(75),
  [2551] = {.count = 1, .reusable = true}, SHIFT(380),
  [2553] = {.count = 1, .reusable = true}, SHIFT(163),
  [2555] = {.count = 1, .reusable = true}, SHIFT(607),
  [2557] = {.count = 1, .reusable = true}, SHIFT(608),
  [2559] = {.count = 1, .reusable = true}, SHIFT(549),
  [2561] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_diffuse, 1),
  [2563] = {.count = 1, .reusable = true}, SHIFT(644),
  [2565] = {.count = 1, .reusable = true}, SHIFT(643),
  [2567] = {.count = 1, .reusable = true}, SHIFT(349),
  [2569] = {.count = 1, .reusable = true}, SHIFT(467),
  [2571] = {.count = 1, .reusable = true}, SHIFT(461),
  [2573] = {.count = 1, .reusable = true}, SHIFT(439),
  [2575] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 1),
  [2577] = {.count = 1, .reusable = true}, SHIFT(614),
  [2579] = {.count = 1, .reusable = true}, SHIFT(442),
  [2581] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_index, 1),
  [2583] = {.count = 1, .reusable = true}, SHIFT(564),
  [2585] = {.count = 1, .reusable = true}, SHIFT(563),
  [2587] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 3),
  [2589] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 3),
  [2591] = {.count = 1, .reusable = true}, SHIFT(132),
  [2593] = {.count = 1, .reusable = true}, SHIFT(343),
  [2595] = {.count = 1, .reusable = true}, SHIFT(52),
  [2597] = {.count = 1, .reusable = true}, SHIFT(177),
  [2599] = {.count = 1, .reusable = true}, SHIFT(366),
  [2601] = {.count = 1, .reusable = true}, SHIFT(270),
  [2603] = {.count = 1, .reusable = true}, SHIFT(250),
  [2605] = {.count = 1, .reusable = true}, SHIFT(166),
  [2607] = {.count = 1, .reusable = true}, SHIFT(51),
  [2609] = {.count = 1, .reusable = true}, SHIFT(363),
  [2611] = {.count = 1, .reusable = true}, SHIFT(358),
  [2613] = {.count = 1, .reusable = true}, SHIFT(479),
  [2615] = {.count = 1, .reusable = true}, SHIFT(190),
  [2617] = {.count = 1, .reusable = true}, SHIFT(252),
  [2619] = {.count = 1, .reusable = true}, SHIFT(254),
  [2621] = {.count = 1, .reusable = true}, SHIFT(255),
  [2623] = {.count = 1, .reusable = true}, SHIFT(236),
  [2625] = {.count = 1, .reusable = true}, SHIFT(337),
  [2627] = {.count = 1, .reusable = true}, SHIFT(335),
  [2629] = {.count = 1, .reusable = true}, SHIFT(333),
  [2631] = {.count = 1, .reusable = true}, SHIFT(357),
  [2633] = {.count = 1, .reusable = true}, SHIFT(262),
  [2635] = {.count = 1, .reusable = true}, SHIFT(223),
  [2637] = {.count = 1, .reusable = true}, SHIFT(3),
  [2639] = {.count = 1, .reusable = true}, SHIFT(115),
  [2641] = {.count = 1, .reusable = true}, SHIFT(433),
  [2643] = {.count = 1, .reusable = true}, SHIFT(514),
  [2645] = {.count = 1, .reusable = true}, SHIFT(540),
  [2647] = {.count = 1, .reusable = true}, SHIFT(681),
  [2649] = {.count = 1, .reusable = true}, SHIFT(629),
  [2651] = {.count = 1, .reusable = true}, SHIFT(299),
  [2653] = {.count = 1, .reusable = true}, SHIFT(298),
  [2655] = {.count = 1, .reusable = true}, SHIFT(307),
  [2657] = {.count = 1, .reusable = true}, SHIFT(306),
  [2659] = {.count = 1, .reusable = true}, SHIFT(619),
  [2661] = {.count = 1, .reusable = true}, SHIFT(140),
  [2663] = {.count = 1, .reusable = true}, SHIFT(370),
  [2665] = {.count = 1, .reusable = true}, SHIFT(613),
  [2667] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 3),
  [2669] = {.count = 1, .reusable = true}, SHIFT(642),
  [2671] = {.count = 1, .reusable = true}, SHIFT(610),
  [2673] = {.count = 1, .reusable = true}, SHIFT(334),
  [2675] = {.count = 1, .reusable = true}, SHIFT(432),
  [2677] = {.count = 1, .reusable = true}, SHIFT(338),
  [2679] = {.count = 1, .reusable = true}, SHIFT(176),
  [2681] = {.count = 1, .reusable = true}, SHIFT(547),
  [2683] = {.count = 1, .reusable = true}, SHIFT(551),
  [2685] = {.count = 1, .reusable = true}, SHIFT(341),
  [2687] = {.count = 1, .reusable = true}, SHIFT(440),
  [2689] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_integer, 2),
  [2691] = {.count = 1, .reusable = true}, SHIFT(395),
  [2693] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [2695] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [2697] = {.count = 1, .reusable = true}, SHIFT(159),
  [2699] = {.count = 1, .reusable = true}, SHIFT(615),
  [2701] = {.count = 1, .reusable = true}, SHIFT(86),
  [2703] = {.count = 1, .reusable = true}, SHIFT(143),
  [2705] = {.count = 1, .reusable = true}, SHIFT(424),
  [2707] = {.count = 1, .reusable = true}, SHIFT(573),
  [2709] = {.count = 1, .reusable = true}, SHIFT(574),
  [2711] = {.count = 1, .reusable = true}, SHIFT(212),
  [2713] = {.count = 1, .reusable = true}, SHIFT(389),
  [2715] = {.count = 1, .reusable = true}, SHIFT(284),
  [2717] = {.count = 1, .reusable = true}, SHIFT(423),
  [2719] = {.count = 1, .reusable = true}, SHIFT(137),
  [2721] = {.count = 1, .reusable = true}, SHIFT(374),
  [2723] = {.count = 1, .reusable = true}, SHIFT(361),
  [2725] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 3),
  [2727] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_index, 3),
  [2729] = {.count = 1, .reusable = true}, SHIFT(656),
  [2731] = {.count = 1, .reusable = true}, SHIFT(419),
  [2733] = {.count = 1, .reusable = true}, SHIFT(214),
  [2735] = {.count = 1, .reusable = true}, SHIFT(215),
  [2737] = {.count = 1, .reusable = true}, SHIFT(245),
  [2739] = {.count = 1, .reusable = true}, SHIFT(539),
  [2741] = {.count = 1, .reusable = true}, SHIFT(537),
  [2743] = {.count = 1, .reusable = true}, SHIFT(603),
  [2745] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_float, 2),
  [2747] = {.count = 1, .reusable = true}, SHIFT(388),
  [2749] = {.count = 1, .reusable = true}, SHIFT(139),
  [2751] = {.count = 1, .reusable = true}, SHIFT(359),
  [2753] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_diffuse, 3),
  [2755] = {.count = 1, .reusable = true}, SHIFT(663),
  [2757] = {.count = 1, .reusable = true}, SHIFT(362),
  [2759] = {.count = 1, .reusable = true}, SHIFT(348),
  [2761] = {.count = 1, .reusable = true}, SHIFT(17),
  [2763] = {.count = 1, .reusable = true}, SHIFT(5),
  [2765] = {.count = 1, .reusable = true}, SHIFT(16),
  [2767] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_normal, 3),
  [2769] = {.count = 1, .reusable = true}, SHIFT(667),
  [2771] = {.count = 1, .reusable = true}, SHIFT(420),
  [2773] = {.count = 1, .reusable = true}, SHIFT(418),
  [2775] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_specular, 3),
  [2777] = {.count = 1, .reusable = true}, SHIFT(671),
  [2779] = {.count = 1, .reusable = true}, SHIFT(230),
  [2781] = {.count = 1, .reusable = true}, SHIFT(367),
  [2783] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader, 3),
  [2785] = {.count = 1, .reusable = true}, SHIFT(674),
  [2787] = {.count = 1, .reusable = true}, SHIFT(414),
  [2789] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader_file, 3),
  [2791] = {.count = 1, .reusable = true}, SHIFT(129),
  [2793] = {.count = 1, .reusable = true}, SHIFT(22),
  [2795] = {.count = 1, .reusable = true}, SHIFT(128),
  [2797] = {.count = 1, .reusable = true}, SHIFT(127),
  [2799] = {.count = 1, .reusable = true}, SHIFT(431),
  [2801] = {.count = 1, .reusable = true}, SHIFT(30),
  [2803] = {.count = 1, .reusable = true}, SHIFT(609),
  [2805] = {.count = 1, .reusable = true}, SHIFT(106),
  [2807] = {.count = 1, .reusable = true}, SHIFT(436),
  [2809] = {.count = 1, .reusable = true}, SHIFT(107),
  [2811] = {.count = 1, .reusable = true}, SHIFT(109),
  [2813] = {.count = 1, .reusable = true}, SHIFT(354),
  [2815] = {.count = 1, .reusable = true}, SHIFT(346),
  [2817] = {.count = 1, .reusable = true}, SHIFT(111),
  [2819] = {.count = 1, .reusable = true}, SHIFT(97),
  [2821] = {.count = 1, .reusable = true}, SHIFT(259),
  [2823] = {.count = 1, .reusable = true}, SHIFT(409),
  [2825] = {.count = 1, .reusable = true}, SHIFT(112),
  [2827] = {.count = 1, .reusable = true}, SHIFT(113),
  [2829] = {.count = 1, .reusable = true}, SHIFT(505),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eu4mod(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
