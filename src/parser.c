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
#define STATE_COUNT 610
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 393
#define ALIAS_COUNT 4
#define TOKEN_COUNT 191
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
  anon_sym_name = 27,
  anon_sym_x = 28,
  anon_sym_y = 29,
  anon_sym_path = 30,
  anon_sym_archive = 31,
  aux_sym__statement_mod_archive_token1 = 32,
  anon_sym_remote_file_id = 33,
  aux_sym__statement_mod_remote_file_id_token1 = 34,
  anon_sym_version = 35,
  aux_sym__statement_mod_version_token1 = 36,
  anon_sym_picture = 37,
  aux_sym__statement_mod_picture_token1 = 38,
  anon_sym_supported_version = 39,
  aux_sym__statement_mod_supported_version_token1 = 40,
  anon_sym_replace_path = 41,
  aux_sym__mod_replace_path_folder_token1 = 42,
  anon_sym_tags = 43,
  aux_sym__mod_tags_keyword_token1 = 44,
  aux_sym__mod_tags_keyword_token2 = 45,
  aux_sym__mod_tags_keyword_token3 = 46,
  aux_sym__mod_tags_keyword_token4 = 47,
  aux_sym__mod_tags_keyword_token5 = 48,
  aux_sym__mod_tags_keyword_token6 = 49,
  aux_sym__mod_tags_keyword_token7 = 50,
  aux_sym__mod_tags_keyword_token8 = 51,
  aux_sym__mod_tags_keyword_token9 = 52,
  aux_sym__mod_tags_keyword_token10 = 53,
  aux_sym__mod_tags_keyword_token11 = 54,
  aux_sym__mod_tags_keyword_token12 = 55,
  aux_sym__mod_tags_keyword_token13 = 56,
  aux_sym__mod_tags_keyword_token14 = 57,
  aux_sym__mod_tags_keyword_token15 = 58,
  aux_sym__mod_tags_keyword_token16 = 59,
  aux_sym__mod_tags_keyword_token17 = 60,
  aux_sym__mod_tags_keyword_token18 = 61,
  aux_sym__mod_tags_keyword_token19 = 62,
  aux_sym__mod_tags_keyword_token20 = 63,
  aux_sym__mod_tags_keyword_token21 = 64,
  aux_sym__mod_tags_keyword_token22 = 65,
  anon_sym_dependencies = 66,
  aux_sym__statement_gfx_name_token1 = 67,
  aux_sym__statement_gfx_name_token2 = 68,
  anon_sym_cursor_offset = 69,
  aux_sym__statement_gfx_textureFile_token1 = 70,
  aux_sym__statement_gfx_textureFile_token2 = 71,
  aux_sym__statement_gfx_textureFile1_token1 = 72,
  aux_sym__statement_gfx_textureFile2_token1 = 73,
  aux_sym__statement_gfx_textureFile3_token1 = 74,
  anon_sym_SEMI = 75,
  anon_sym_noOfFrames = 76,
  anon_sym_overlay_frames_per_row = 77,
  anon_sym_overlay_rows = 78,
  anon_sym_effectFile = 79,
  aux_sym__statement_gfx_effectFile_token1 = 80,
  anon_sym_animation = 81,
  anon_sym_animationmaskfile = 82,
  anon_sym_animationtexturefile = 83,
  aux_sym__animation_entry_dds_token1 = 84,
  anon_sym_animationrotation = 85,
  anon_sym_animationlooping = 86,
  anon_sym_animationtime = 87,
  anon_sym_animationdelay = 88,
  anon_sym_animationrotationoffset = 89,
  anon_sym_animationtexturescale = 90,
  anon_sym_animationblendmode = 91,
  anon_sym_DQUOTEadd_DQUOTE = 92,
  anon_sym_DQUOTEmultiply_DQUOTE = 93,
  anon_sym_DQUOTEoverlay_DQUOTE = 94,
  anon_sym_animationtype = 95,
  anon_sym_DQUOTEscrolling_DQUOTE = 96,
  anon_sym_DQUOTErotating_DQUOTE = 97,
  anon_sym_DQUOTEpulsing_DQUOTE = 98,
  anon_sym_animationframes = 99,
  anon_sym_size = 100,
  anon_sym_borderSize = 101,
  anon_sym_alwaystransparent = 102,
  anon_sym_allwaystransparent = 103,
  anon_sym_legacy_lazy_load = 104,
  anon_sym_clicksound = 105,
  anon_sym_click = 106,
  anon_sym_speed = 107,
  anon_sym_textblock = 108,
  anon_sym_text = 109,
  anon_sym_color = 110,
  anon_sym_colortwo = 111,
  anon_sym_font = 112,
  anon_sym_position = 113,
  anon_sym_format = 114,
  anon_sym_centre = 115,
  anon_sym_cull_distance = 116,
  anon_sym_B = 117,
  anon_sym_b = 118,
  anon_sym_G = 119,
  anon_sym_H = 120,
  anon_sym_l = 121,
  anon_sym_M = 122,
  anon_sym_O = 123,
  anon_sym_g = 124,
  anon_sym_R = 125,
  anon_sym_T = 126,
  anon_sym_W = 127,
  anon_sym_Y = 128,
  anon_sym_border_color = 129,
  anon_sym_animation_rate_fps = 130,
  anon_sym_looping = 131,
  anon_sym_play_on_show = 132,
  anon_sym_pause_on_loop = 133,
  anon_sym_horizontal = 134,
  anon_sym_file = 135,
  aux_sym__statement_gfx_file_token1 = 136,
  anon_sym_id = 137,
  anon_sym_type = 138,
  anon_sym_meshsettings = 139,
  anon_sym_index = 140,
  anon_sym_texture_diffuse = 141,
  anon_sym_texture_normal = 142,
  anon_sym_texture_specular = 143,
  anon_sym_shader = 144,
  aux_sym__statement_gfx_meshsettings_shader_token1 = 145,
  anon_sym_shader_file = 146,
  aux_sym__statement_gfx_meshsettings_shader_file_token1 = 147,
  anon_sym_scale = 148,
  anon_sym_transparencecheck = 149,
  anon_sym_loadType = 150,
  anon_sym_DQUOTEINGAME_DQUOTE = 151,
  anon_sym_DQUOTEFRONTEND_DQUOTE = 152,
  anon_sym_norefcount = 153,
  anon_sym_texture = 154,
  anon_sym_normal = 155,
  anon_sym_specular = 156,
  anon_sym_effect = 157,
  aux_sym__statement_gfx_effect_token1 = 158,
  anon_sym_alphamaskfile = 159,
  aux_sym__statement_gfx_alphamaskfile_token1 = 160,
  anon_sym_linewidth = 161,
  anon_sym_backGround = 162,
  anon_sym_background = 163,
  anon_sym_moveable = 164,
  anon_sym_orientation = 165,
  anon_sym_priority = 166,
  anon_sym_scrollbartype = 167,
  anon_sym_textureFile = 168,
  anon_sym_cursor = 169,
  anon_sym_maxWidth = 170,
  anon_sym_maxHeight = 171,
  anon_sym_fixedsize = 172,
  sym_assign_equal = 173,
  sym_string = 174,
  sym_number = 175,
  sym_float = 176,
  aux_sym__float_positive_token1 = 177,
  sym_integer = 178,
  aux_sym__integer_positive_token1 = 179,
  sym_byte = 180,
  sym_hexadecimal = 181,
  sym_angle = 182,
  anon_sym_true = 183,
  anon_sym_false = 184,
  anon_sym_yes = 185,
  anon_sym_no = 186,
  anon_sym_0 = 187,
  anon_sym_1 = 188,
  sym_comment = 189,
  aux_sym__orientation_value_token1 = 190,
  sym_file = 191,
  sym_dot_mod = 192,
  sym_dot_gfx = 193,
  sym_dot_gui = 194,
  sym__gui_types_definition = 195,
  sym__spriteTypes = 196,
  sym__spriteTypes_block = 197,
  sym__spriteTypes_statement = 198,
  sym__spriteTypes_type = 199,
  sym__objectTypes = 200,
  sym__objectTypes_block = 201,
  sym__objectTypes_type = 202,
  sym__bitmapfonts = 203,
  sym__bitmapfonts_block = 204,
  sym__bitmapfonts_type = 205,
  sym__guiTypes = 206,
  sym__guiTypes_block = 207,
  sym__guiTypes_type = 208,
  sym__spriteType = 209,
  sym__spriteType_block = 210,
  sym__textSpriteType = 211,
  sym__textSpriteType_block = 212,
  sym__corneredTileSpriteType = 213,
  sym__corneredTileSpriteType_block = 214,
  sym__maskedShieldType = 215,
  sym__maskedShieldType_block = 216,
  sym__animatedmaptext = 217,
  sym__animatedmaptext_block = 218,
  sym__textcolors = 219,
  sym__textcolors_block = 220,
  sym__bitmapfont = 221,
  sym__bitmapfont_block = 222,
  sym__frameAnimatedSpriteType = 223,
  sym__frameAnimatedSpriteType_block = 224,
  sym__progressbartype = 225,
  sym__progressbartype_block = 226,
  sym__pdxmesh = 227,
  sym__pdxmesh_block = 228,
  sym__pdxparticle = 229,
  sym__pdxparticle_block = 230,
  sym__arrowType = 231,
  sym__arrowType_block = 232,
  sym__tradeRouteType = 233,
  sym__tradeRouteType_block = 234,
  sym__PieChartType = 235,
  sym__PieChartType_block = 236,
  sym__LineChartType = 237,
  sym__LineChartType_block = 238,
  sym__windowType = 239,
  sym__windowType_block = 240,
  sym__listBoxType = 241,
  sym__listBoxType_block = 242,
  sym__editBoxType = 243,
  sym__editBoxType_block = 244,
  sym__instantTextBoxType = 245,
  sym__instantTextBoxType_block = 246,
  sym__textBoxType = 247,
  sym__textBoxType_block = 248,
  sym__statement_name = 249,
  sym__statement_xy_integer = 250,
  sym__entry_x_integer = 251,
  sym__entry_y_integer = 252,
  sym__statement_xy_float = 253,
  sym__entry_x_float = 254,
  sym__entry_y_float = 255,
  sym__statement_mod_path = 256,
  sym__statement_mod_archive = 257,
  sym__statement_mod_remote_file_id = 258,
  sym__statement_mod_version = 259,
  sym__statement_mod_picture = 260,
  sym__statement_mod_supported_version = 261,
  sym__statement_mod_replace_path = 262,
  sym__mod_replace_path_folder = 263,
  sym__statement_mod_tags = 264,
  sym__mod_tags_block = 265,
  sym__mod_tags_keyword = 266,
  sym__statement_mod_dependencies = 267,
  sym__mod_dependencies_block = 268,
  sym__statement_gfx_name = 269,
  sym__statement_gfx_path = 270,
  sym__statement_gfx_cursor_offset = 271,
  sym__statement_gfx_textureFile = 272,
  sym__statement_gfx_textureFile1 = 273,
  sym__statement_gfx_textureFile2 = 274,
  sym__statement_gfx_textureFile3 = 275,
  sym__statement_gfx_noOfFrames = 276,
  sym__statement_gfx_overlay_frames_per_row = 277,
  sym__statement_gfx_overlay_rows = 278,
  sym__statement_gfx_effectFile = 279,
  sym__statement_gfx_animation = 280,
  sym__gfx_animation_block = 281,
  sym__animation_entry_dds = 282,
  sym__animation_entry_angle = 283,
  sym__animation_entry_bool = 284,
  sym__animation_entry_time = 285,
  sym__animation_entry_xy_float = 286,
  sym__animation_entry_blendmode = 287,
  sym__animation_entry_type = 288,
  sym__animation_entry_frames = 289,
  sym__statement_gfx_size_xy = 290,
  sym__statement_gfx_size_integer = 291,
  sym__statement_gfx_borderSize = 292,
  sym__statement_gfx_alwaystransparent = 293,
  sym__statement_gfx_allwaystransparent = 294,
  sym__statement_gfx_legacy_lazy_load = 295,
  sym__statement_gfx_clicksound = 296,
  sym__statement_gfx_speed = 297,
  sym__statement_gfx_textblock = 298,
  sym__gfx_textblock = 299,
  sym__statement_gfx_text = 300,
  sym__statement_gfx_color = 301,
  sym__statement_gfx_colortwo = 302,
  sym__statement_gfx_font = 303,
  sym__statement_gfx_position = 304,
  sym__statement_gfx_format = 305,
  sym__statement_gfx_cull_distance = 306,
  sym__statement_gfx_textcolors = 307,
  sym__statement_gfx_bitmapfont_color = 308,
  sym__statement_gfx_bitmapfont_border_color = 309,
  sym__statement_gfx_animation_rate_fps = 310,
  sym__statement_gfx_looping = 311,
  sym__statement_gfx_play_on_show = 312,
  sym__statement_gfx_pause_on_loop = 313,
  sym__statement_gfx_horizontal = 314,
  sym__statement_gfx_file = 315,
  sym__statement_gfx_pdxmesh_animation = 316,
  sym__statement_gfx_animation_id = 317,
  sym__statement_gfx_animation_type = 318,
  sym__statement_gfx_pdxmesh_meshsettings = 319,
  sym__statement_gfx_meshsettings_index = 320,
  sym__statement_gfx_meshsettings_texture_diffuse = 321,
  sym__statement_gfx_meshsettings_texture_normal = 322,
  sym__statement_gfx_meshsettings_texture_specular = 323,
  sym__statement_gfx_meshsettings_shader = 324,
  sym__statement_gfx_meshsettings_shader_file = 325,
  sym__statement_gfx_scale = 326,
  sym__statement_gfx_transparencecheck = 327,
  sym__statement_gfx_loadType = 328,
  sym__statement_gfx_norefcount = 329,
  sym__statement_gfx_texture = 330,
  sym__statement_gfx_normal = 331,
  sym__statement_gfx_specular = 332,
  sym__statement_gfx_effect = 333,
  sym__statement_gfx_effect_bool = 334,
  sym__statement_gfx_alphamaskfile = 335,
  sym__statement_gfx_linewidth = 336,
  sym__statement_gfx_type = 337,
  sym__statement_gui_backGround = 338,
  sym__statement_gui_background = 339,
  sym__statement_gui_position = 340,
  sym__statement_gui_size = 341,
  sym__statement_gui_borderSize = 342,
  sym__statement_gui_moveable = 343,
  sym__statement_gui_orientation = 344,
  sym__statement_gui_priority = 345,
  sym__statement_gui_scrollbartype = 346,
  sym__statement_gui_allwaystransparent = 347,
  sym__statement_gui_textureFile = 348,
  sym__statement_gui_font = 349,
  sym__statement_gui_cursor = 350,
  sym__statement_gui_text = 351,
  sym__statement_gui_instantTextBoxType = 352,
  sym__statement_gui_maxWidth = 353,
  sym__statement_gui_maxHeight = 354,
  sym__statement_gui_fixedsize = 355,
  sym__float_positive = 356,
  sym__integer_positive = 357,
  sym__boolean_yes_no = 358,
  sym__boolean_0_1 = 359,
  sym__orientation_value = 360,
  aux_sym_dot_mod_repeat1 = 361,
  aux_sym_dot_gfx_repeat1 = 362,
  aux_sym_dot_gui_repeat1 = 363,
  aux_sym__spriteTypes_block_repeat1 = 364,
  aux_sym__objectTypes_block_repeat1 = 365,
  aux_sym__bitmapfonts_block_repeat1 = 366,
  aux_sym__guiTypes_block_repeat1 = 367,
  aux_sym__spriteType_block_repeat1 = 368,
  aux_sym__textSpriteType_block_repeat1 = 369,
  aux_sym__corneredTileSpriteType_block_repeat1 = 370,
  aux_sym__maskedShieldType_block_repeat1 = 371,
  aux_sym__animatedmaptext_block_repeat1 = 372,
  aux_sym__textcolors_block_repeat1 = 373,
  aux_sym__bitmapfont_block_repeat1 = 374,
  aux_sym__frameAnimatedSpriteType_block_repeat1 = 375,
  aux_sym__progressbartype_block_repeat1 = 376,
  aux_sym__pdxmesh_block_repeat1 = 377,
  aux_sym__pdxparticle_block_repeat1 = 378,
  aux_sym__arrowType_block_repeat1 = 379,
  aux_sym__tradeRouteType_block_repeat1 = 380,
  aux_sym__PieChartType_block_repeat1 = 381,
  aux_sym__LineChartType_block_repeat1 = 382,
  aux_sym__windowType_block_repeat1 = 383,
  aux_sym__listBoxType_block_repeat1 = 384,
  aux_sym__editBoxType_block_repeat1 = 385,
  aux_sym__instantTextBoxType_block_repeat1 = 386,
  aux_sym__textBoxType_block_repeat1 = 387,
  aux_sym__mod_tags_block_repeat1 = 388,
  aux_sym__mod_dependencies_block_repeat1 = 389,
  aux_sym__gfx_animation_block_repeat1 = 390,
  aux_sym__animation_entry_frames_repeat1 = 391,
  aux_sym__gfx_textblock_repeat1 = 392,
  alias_sym_dependencies = 393,
  alias_sym_name_value = 394,
  alias_sym_statement = 395,
  alias_sym_type_definition = 396,
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
  [anon_sym_centre] = "keyword",
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
  [anon_sym_orientation] = "identifier",
  [anon_sym_priority] = "identifier",
  [anon_sym_scrollbartype] = "identifier",
  [anon_sym_textureFile] = "identifier",
  [anon_sym_cursor] = "identifier",
  [anon_sym_maxWidth] = "identifier",
  [anon_sym_maxHeight] = "identifier",
  [anon_sym_fixedsize] = "identifier",
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
  [aux_sym__mod_tags_block_repeat1] = "_mod_tags_block_repeat1",
  [aux_sym__mod_dependencies_block_repeat1] = "_mod_dependencies_block_repeat1",
  [aux_sym__gfx_animation_block_repeat1] = "_gfx_animation_block_repeat1",
  [aux_sym__animation_entry_frames_repeat1] = "_animation_entry_frames_repeat1",
  [aux_sym__gfx_textblock_repeat1] = "_gfx_textblock_repeat1",
  [alias_sym_dependencies] = "dependencies",
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
  [anon_sym_centre] = anon_sym_x,
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
  [anon_sym_orientation] = anon_sym_spriteTypes,
  [anon_sym_priority] = anon_sym_spriteTypes,
  [anon_sym_scrollbartype] = anon_sym_spriteTypes,
  [anon_sym_textureFile] = anon_sym_spriteTypes,
  [anon_sym_cursor] = anon_sym_spriteTypes,
  [anon_sym_maxWidth] = anon_sym_spriteTypes,
  [anon_sym_maxHeight] = anon_sym_spriteTypes,
  [anon_sym_fixedsize] = anon_sym_spriteTypes,
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
  [aux_sym__mod_tags_block_repeat1] = aux_sym__mod_tags_block_repeat1,
  [aux_sym__mod_dependencies_block_repeat1] = aux_sym__mod_dependencies_block_repeat1,
  [aux_sym__gfx_animation_block_repeat1] = aux_sym__gfx_animation_block_repeat1,
  [aux_sym__animation_entry_frames_repeat1] = aux_sym__animation_entry_frames_repeat1,
  [aux_sym__gfx_textblock_repeat1] = aux_sym__gfx_textblock_repeat1,
  [alias_sym_dependencies] = alias_sym_dependencies,
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
    .named = true,
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
  [anon_sym_orientation] = {
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

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1943);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '-') ADVANCE(1919);
      if (lookahead == '0') ADVANCE(2164);
      if (lookahead == '1') ADVANCE(2166);
      if (lookahead == '2') ADVANCE(2138);
      if (lookahead == ';') ADVANCE(2021);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == 'B') ADVANCE(2069);
      if (lookahead == 'G') ADVANCE(2072);
      if (lookahead == 'H') ADVANCE(2073);
      if (lookahead == 'L') ADVANCE(1290);
      if (lookahead == 'M') ADVANCE(2076);
      if (lookahead == 'O') ADVANCE(2077);
      if (lookahead == 'P') ADVANCE(1297);
      if (lookahead == 'R') ADVANCE(2080);
      if (lookahead == 'T') ADVANCE(2081);
      if (lookahead == 'W') ADVANCE(2082);
      if (lookahead == 'Y') ADVANCE(2083);
      if (lookahead == '\\') SKIP(1936)
      if (lookahead == 'a') ADVANCE(1375);
      if (lookahead == 'b') ADVANCE(2071);
      if (lookahead == 'c') ADVANCE(1155);
      if (lookahead == 'd') ADVANCE(1088);
      if (lookahead == 'e') ADVANCE(1066);
      if (lookahead == 'f') ADVANCE(932);
      if (lookahead == 'g') ADVANCE(2079);
      if (lookahead == 'h') ADVANCE(1514);
      if (lookahead == 'i') ADVANCE(1055);
      if (lookahead == 'l') ADVANCE(2075);
      if (lookahead == 'm') ADVANCE(933);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == 'o') ADVANCE(1014);
      if (lookahead == 'p') ADVANCE(941);
      if (lookahead == 'r') ADVANCE(1095);
      if (lookahead == 's') ADVANCE(1019);
      if (lookahead == 't') ADVANCE(946);
      if (lookahead == 'v') ADVANCE(1159);
      if (lookahead == 'w') ADVANCE(1295);
      if (lookahead == 'x') ADVANCE(1972);
      if (lookahead == 'y') ADVANCE(1974);
      if (lookahead == '{') ADVANCE(1945);
      if (lookahead == '}') ADVANCE(1946);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(2140);
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
      if (lookahead == '\n') SKIP(551)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(551)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(552)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(552)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(553)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(553)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(554)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(554)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(559)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(559)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(556)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(556)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(558)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(558)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(557)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(557)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(560)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(560)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(561)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(561)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(555)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(555)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(398);
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(842);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(843);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(837);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(841);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(839);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(840);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(838);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(565);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(457);
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(458);
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1979);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == 'A') ADVANCE(199);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == 'E') ADVANCE(318);
      if (lookahead == 'F') ADVANCE(73);
      if (lookahead == 'G') ADVANCE(55);
      if (lookahead == 'H') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'M') ADVANCE(87);
      if (lookahead == 'P') ADVANCE(118);
      if (lookahead == 'R') ADVANCE(133);
      if (lookahead == 'S') ADVANCE(245);
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'g') ADVANCE(84);
      if (lookahead == 'h') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 'p') ADVANCE(315);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(297);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1979);
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1979);
      if (lookahead == '.') ADVANCE(712);
      if (lookahead == 'A') ADVANCE(713);
      if (lookahead == 'C') ADVANCE(569);
      if (lookahead == 'F') ADVANCE(592);
      if (lookahead == 'I') ADVANCE(584);
      if (lookahead == 'L') ADVANCE(588);
      if (lookahead == 'M') ADVANCE(605);
      if (lookahead == 'P') ADVANCE(634);
      if (lookahead == 'R') ADVANCE(651);
      if (lookahead == 'S') ADVANCE(753);
      if (lookahead == 'U') ADVANCE(590);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'c') ADVANCE(755);
      if (lookahead == 'f') ADVANCE(685);
      if (lookahead == 'l') ADVANCE(754);
      if (lookahead == 'm') ADVANCE(604);
      if (lookahead == 'o') ADVANCE(825);
      if (lookahead == 'p') ADVANCE(822);
      if (lookahead == 'r') ADVANCE(650);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead == 'u') ADVANCE(806);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(606);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(826);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(601);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(686);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1979);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '*') ADVANCE(485);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'j') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == 'z') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '*') ADVANCE(484);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'j') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == 'z') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'D') ADVANCE(507);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(497);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'F') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'G') ADVANCE(47);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'G') ADVANCE(59);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'H') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'L') ADVANCE(50);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'M') ADVANCE(150);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'N') ADVANCE(48);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'O') ADVANCE(67);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'P') ADVANCE(71);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'P') ADVANCE(49);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(331);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(82);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(306);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'T') ADVANCE(331);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'W') ADVANCE(49);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'X') ADVANCE(81);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(331);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'j') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == 'z') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'j') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == 'z') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'j') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == 'z') ADVANCE(173);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(479);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(83);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(503);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(519);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(525);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(188);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(331);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(236);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'y') ADVANCE(428);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'j') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 'z') ADVANCE(173);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(250);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(142);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(515);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(214);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(210);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(149);
      if (lookahead == 'x') ADVANCE(263);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(135);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(143);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(263);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'x') ADVANCE(63);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'x') ADVANCE(428);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'x') ADVANCE(140);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(501);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(509);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(513);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 330:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(517);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == 'F') ADVANCE(334);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == 'G') ADVANCE(332);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == 'X') ADVANCE(335);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '_') ADVANCE(336);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(2012);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '*') ADVANCE(484);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(355);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 's') ADVANCE(362);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == 'z') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'C') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'I') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'K') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(355);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 's') ADVANCE(362);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == 'z') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'g') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'g') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'h') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'y') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 396:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 397:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 398:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 399:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 400:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 401:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 402:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 404:
      if (lookahead == '"') ADVANCE(2136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 405:
      if (lookahead == '"') ADVANCE(1999);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 406:
      if (lookahead == '"') ADVANCE(1999);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 407:
      if (lookahead == '"') ADVANCE(2040);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 408:
      if (lookahead == '"') ADVANCE(2040);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 409:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 410:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 411:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == 'j') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 'p') ADVANCE(421);
      if (lookahead == 's') ADVANCE(419);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == 'z') ADVANCE(420);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 412:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'd') ADVANCE(425);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 413:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 414:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 415:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 416:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'g') ADVANCE(409);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 417:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'g') ADVANCE(468);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 418:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'h') ADVANCE(428);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 419:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'h') ADVANCE(410);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 420:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 421:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 422:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 423:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'p') ADVANCE(473);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 424:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 425:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 426:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 's') ADVANCE(418);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 427:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(409);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 428:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 429:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 430:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 431:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 432:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 433:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'j') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(438);
      if (lookahead == 'p') ADVANCE(447);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead == 'z') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 434:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 435:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 436:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 437:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 438:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 439:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 440:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 441:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'h') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 442:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 443:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 444:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 445:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 446:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 447:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 448:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 449:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 450:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 451:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 452:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 453:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 454:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 455:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 456:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 457:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 458:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 460:
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(460);
      END_STATE();
    case 461:
      if (lookahead == '"') ADVANCE(1981);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 462:
      if (lookahead == '"') ADVANCE(1981);
      if (lookahead == '.') ADVANCE(1922);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 463:
      if (lookahead == '"') ADVANCE(1981);
      if (lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 464:
      if (lookahead == '"') ADVANCE(1981);
      if (lookahead == '.') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 465:
      if (lookahead == '"') ADVANCE(1983);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 466:
      if (lookahead == '"') ADVANCE(1983);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 467:
      if (lookahead == '"') ADVANCE(1983);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 468:
      if (lookahead == '"') ADVANCE(1983);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 469:
      if (lookahead == '"') ADVANCE(1983);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 470:
      if (lookahead == '"') ADVANCE(1977);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 471:
      if (lookahead == '"') ADVANCE(1977);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 472:
      if (lookahead == '"') ADVANCE(1977);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 473:
      if (lookahead == '"') ADVANCE(1977);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 474:
      if (lookahead == '"') ADVANCE(1977);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 475:
      if (lookahead == '"') ADVANCE(1993);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 476:
      if (lookahead == '"') ADVANCE(1993);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 477:
      if (lookahead == '"') ADVANCE(1996);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 478:
      if (lookahead == '"') ADVANCE(1996);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 479:
      if (lookahead == '"') ADVANCE(2005);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 480:
      if (lookahead == '"') ADVANCE(2005);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 481:
      if (lookahead == '"') ADVANCE(2007);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 482:
      if (lookahead == '"') ADVANCE(2007);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 483:
      if (lookahead == '"') ADVANCE(1985);
      if (lookahead == '.') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 484:
      if (lookahead == '"') ADVANCE(1985);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 485:
      if (lookahead == '"') ADVANCE(1985);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 486:
      if (lookahead == '"') ADVANCE(1985);
      if (lookahead == '.') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 487:
      if (lookahead == '"') ADVANCE(1985);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 488:
      if (lookahead == '"') ADVANCE(1985);
      if (lookahead == '.') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 489:
      if (lookahead == '"') ADVANCE(1985);
      if (lookahead == '.') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 490:
      if (lookahead == '"') ADVANCE(1985);
      if (lookahead == '.') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 491:
      if (lookahead == '"') ADVANCE(2017);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 492:
      if (lookahead == '"') ADVANCE(2017);
      if (lookahead == '.') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 493:
      if (lookahead == '"') ADVANCE(2026);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 494:
      if (lookahead == '"') ADVANCE(2026);
      if (lookahead == '.') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 495:
      if (lookahead == '"') ADVANCE(1991);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 496:
      if (lookahead == '"') ADVANCE(1991);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 497:
      if (lookahead == '"') ADVANCE(2107);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 498:
      if (lookahead == '"') ADVANCE(2107);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 499:
      if (lookahead == '"') ADVANCE(2091);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 500:
      if (lookahead == '"') ADVANCE(2091);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 501:
      if (lookahead == '"') ADVANCE(2042);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 502:
      if (lookahead == '"') ADVANCE(2042);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 503:
      if (lookahead == '"') ADVANCE(2046);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 504:
      if (lookahead == '"') ADVANCE(2046);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 505:
      if (lookahead == '"') ADVANCE(1990);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 506:
      if (lookahead == '"') ADVANCE(1990);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 507:
      if (lookahead == '"') ADVANCE(2108);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 508:
      if (lookahead == '"') ADVANCE(2108);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 509:
      if (lookahead == '"') ADVANCE(1994);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 510:
      if (lookahead == '"') ADVANCE(1994);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 511:
      if (lookahead == '"') ADVANCE(1995);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 512:
      if (lookahead == '"') ADVANCE(1995);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 513:
      if (lookahead == '"') ADVANCE(2000);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 514:
      if (lookahead == '"') ADVANCE(2000);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 515:
      if (lookahead == '"') ADVANCE(2004);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 516:
      if (lookahead == '"') ADVANCE(2004);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 517:
      if (lookahead == '"') ADVANCE(2041);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 518:
      if (lookahead == '"') ADVANCE(2041);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 519:
      if (lookahead == '"') ADVANCE(2045);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 520:
      if (lookahead == '"') ADVANCE(2045);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 521:
      if (lookahead == '"') ADVANCE(1992);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 522:
      if (lookahead == '"') ADVANCE(1992);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 523:
      if (lookahead == '"') ADVANCE(2009);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 524:
      if (lookahead == '"') ADVANCE(2009);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 525:
      if (lookahead == '"') ADVANCE(2044);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 526:
      if (lookahead == '"') ADVANCE(2044);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 527:
      if (lookahead == '"') ADVANCE(1997);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 528:
      if (lookahead == '"') ADVANCE(1997);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 529:
      if (lookahead == '"') ADVANCE(2003);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 530:
      if (lookahead == '"') ADVANCE(2003);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 531:
      if (lookahead == '"') ADVANCE(2008);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 532:
      if (lookahead == '"') ADVANCE(2008);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 533:
      if (lookahead == '"') ADVANCE(2006);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 534:
      if (lookahead == '"') ADVANCE(2006);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 535:
      if (lookahead == '"') ADVANCE(1998);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 536:
      if (lookahead == '"') ADVANCE(1998);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 537:
      if (lookahead == '"') ADVANCE(2002);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 538:
      if (lookahead == '"') ADVANCE(2002);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 539:
      if (lookahead == '"') ADVANCE(1989);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 540:
      if (lookahead == '"') ADVANCE(1989);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 541:
      if (lookahead == '"') ADVANCE(2010);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 542:
      if (lookahead == '"') ADVANCE(2010);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 543:
      if (lookahead == '"') ADVANCE(2001);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 544:
      if (lookahead == '"') ADVANCE(2001);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 545:
      if (lookahead == '"') ADVANCE(2032);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 546:
      if (lookahead == '"') ADVANCE(2118);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 547:
      if (lookahead == '"') ADVANCE(2120);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 548:
      if (lookahead == '"') ADVANCE(2168);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 549:
      if (lookahead == '"') ADVANCE(2103);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 550:
      if (lookahead == '"') ADVANCE(2101);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 551:
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == 'L') ADVANCE(1290);
      if (lookahead == 'P') ADVANCE(1297);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(1378);
      if (lookahead == 'b') ADVANCE(1357);
      if (lookahead == 'c') ADVANCE(1431);
      if (lookahead == 'e') ADVANCE(1266);
      if (lookahead == 'f') ADVANCE(1341);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'm') ADVANCE(977);
      if (lookahead == 'n') ADVANCE(939);
      if (lookahead == 'o') ADVANCE(1846);
      if (lookahead == 'p') ADVANCE(1646);
      if (lookahead == 's') ADVANCE(1050);
      if (lookahead == 't') ADVANCE(1219);
      if (lookahead == '}') ADVANCE(1946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(551)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2146);
      END_STATE();
    case 552:
      if (lookahead == '"') ADVANCE(1036);
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '0') ADVANCE(862);
      if (lookahead == '3') ADVANCE(861);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(1376);
      if (lookahead == 'b') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1432);
      if (lookahead == 'e') ADVANCE(1266);
      if (lookahead == 'h') ADVANCE(1514);
      if (lookahead == 'l') ADVANCE(1090);
      if (lookahead == 'n') ADVANCE(939);
      if (lookahead == 'o') ADVANCE(1846);
      if (lookahead == 'p') ADVANCE(993);
      if (lookahead == 's') ADVANCE(1291);
      if (lookahead == 't') ADVANCE(1228);
      if (lookahead == '}') ADVANCE(1946);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(864);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(863);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(552)
      END_STATE();
    case 553:
      if (lookahead == '"') ADVANCE(1934);
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '0') ADVANCE(2150);
      if (lookahead == '1') ADVANCE(2154);
      if (lookahead == '2') ADVANCE(2151);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(1398);
      if (lookahead == 'e') ADVANCE(1266);
      if (lookahead == 'l') ADVANCE(1513);
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead == 'o') ADVANCE(1846);
      if (lookahead == 'p') ADVANCE(993);
      if (lookahead == 't') ADVANCE(1230);
      if (lookahead == '}') ADVANCE(1946);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(2153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(553)
      END_STATE();
    case 554:
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '-') ADVANCE(1924);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(1376);
      if (lookahead == 'b') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1434);
      if (lookahead == 'e') ADVANCE(1243);
      if (lookahead == 'l') ADVANCE(1091);
      if (lookahead == 'n') ADVANCE(939);
      if (lookahead == 'o') ADVANCE(1846);
      if (lookahead == 'p') ADVANCE(993);
      if (lookahead == 's') ADVANCE(1291);
      if (lookahead == 't') ADVANCE(1232);
      if (lookahead == '}') ADVANCE(1946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(554)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2148);
      END_STATE();
    case 555:
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '-') ADVANCE(1925);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'a') ADVANCE(1376);
      if (lookahead == 'b') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1430);
      if (lookahead == 'e') ADVANCE(1266);
      if (lookahead == 'l') ADVANCE(1091);
      if (lookahead == 'n') ADVANCE(939);
      if (lookahead == 'o') ADVANCE(1846);
      if (lookahead == 'p') ADVANCE(993);
      if (lookahead == 's') ADVANCE(1291);
      if (lookahead == 't') ADVANCE(1230);
      if (lookahead == '}') ADVANCE(1946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(555)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2143);
      END_STATE();
    case 556:
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == ';') ADVANCE(2021);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'c') ADVANCE(1570);
      if (lookahead == 'e') ADVANCE(1243);
      if (lookahead == 'h') ADVANCE(1514);
      if (lookahead == 'l') ADVANCE(1551);
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead == 'o') ADVANCE(1846);
      if (lookahead == 's') ADVANCE(1291);
      if (lookahead == 't') ADVANCE(1228);
      if (lookahead == '}') ADVANCE(1946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(556)
      END_STATE();
    case 557:
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == 'B') ADVANCE(2069);
      if (lookahead == 'G') ADVANCE(2072);
      if (lookahead == 'H') ADVANCE(2073);
      if (lookahead == 'M') ADVANCE(2076);
      if (lookahead == 'O') ADVANCE(2077);
      if (lookahead == 'R') ADVANCE(2080);
      if (lookahead == 'T') ADVANCE(2081);
      if (lookahead == 'W') ADVANCE(2082);
      if (lookahead == 'Y') ADVANCE(2083);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(1510);
      if (lookahead == 'b') ADVANCE(2070);
      if (lookahead == 'c') ADVANCE(1573);
      if (lookahead == 'e') ADVANCE(1268);
      if (lookahead == 'f') ADVANCE(1340);
      if (lookahead == 'g') ADVANCE(2078);
      if (lookahead == 'l') ADVANCE(2074);
      if (lookahead == 'm') ADVANCE(1093);
      if (lookahead == 'n') ADVANCE(934);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == 's') ADVANCE(1049);
      if (lookahead == 't') ADVANCE(1222);
      if (lookahead == '}') ADVANCE(1946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(557)
      END_STATE();
    case 558:
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == 'L') ADVANCE(1290);
      if (lookahead == 'P') ADVANCE(1297);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'a') ADVANCE(1510);
      if (lookahead == 'b') ADVANCE(1358);
      if (lookahead == 'c') ADVANCE(1566);
      if (lookahead == 'e') ADVANCE(1268);
      if (lookahead == 'f') ADVANCE(1341);
      if (lookahead == 'm') ADVANCE(977);
      if (lookahead == 'n') ADVANCE(934);
      if (lookahead == 'p') ADVANCE(979);
      if (lookahead == 's') ADVANCE(1051);
      if (lookahead == 't') ADVANCE(1223);
      if (lookahead == '}') ADVANCE(1946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(558)
      END_STATE();
    case 559:
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'c') ADVANCE(1569);
      if (lookahead == 'e') ADVANCE(1266);
      if (lookahead == 'h') ADVANCE(1514);
      if (lookahead == 'l') ADVANCE(1551);
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead == 'o') ADVANCE(1846);
      if (lookahead == 's') ADVANCE(1291);
      if (lookahead == 't') ADVANCE(1234);
      if (lookahead == '}') ADVANCE(1946);
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
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'e') ADVANCE(1268);
      if (lookahead == 'n') ADVANCE(940);
      if (lookahead == 's') ADVANCE(1620);
      if (lookahead == 't') ADVANCE(1235);
      if (lookahead == '}') ADVANCE(1946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(560)
      END_STATE();
    case 561:
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'c') ADVANCE(1826);
      if (lookahead == 'e') ADVANCE(1268);
      if (lookahead == 'n') ADVANCE(940);
      if (lookahead == 's') ADVANCE(1620);
      if (lookahead == 't') ADVANCE(1236);
      if (lookahead == '}') ADVANCE(1946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(561)
      END_STATE();
    case 562:
      if (lookahead == '*') ADVANCE(490);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'j') ADVANCE(769);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(656);
      if (lookahead == 'p') ADVANCE(732);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == 'z') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 563:
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'j') ADVANCE(769);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(656);
      if (lookahead == 'p') ADVANCE(732);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == 'z') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 564:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'A') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 565:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'C') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 566:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'D') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 567:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'E') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 568:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'E') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 569:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'E') ADVANCE(585);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 570:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'E') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 571:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'E') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 572:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'E') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 573:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'F') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 574:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'G') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 575:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'G') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 576:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'H') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 577:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'I') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 578:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'I') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 579:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'I') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 580:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'K') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 581:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'L') ADVANCE(568);
      if (lookahead == 'R') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 582:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'M') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 583:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'M') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 584:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 585:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'N') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 586:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'N') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 587:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'N') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 588:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'O') ADVANCE(599);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 589:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'O') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 590:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'P') ADVANCE(591);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 591:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'P') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 592:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'R') ADVANCE(589);
      if (lookahead == 'i') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 593:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'R') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 594:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'R') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 595:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'S') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 596:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'T') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 597:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 598:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'T') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 599:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'W') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 600:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == '_') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 601:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead == 'r') ADVANCE(608);
      if (lookahead == 'u') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 602:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 603:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 604:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(716);
      if (lookahead == 'u') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 605:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 606:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 607:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 608:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 609:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 610:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 611:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 612:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 613:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 614:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 615:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 616:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 617:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 618:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 619:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(810);
      if (lookahead == 'e') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 620:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 621:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 622:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 623:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 624:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 625:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 626:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(776);
      if (lookahead == 'o') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 627:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 628:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 629:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 630:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 631:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 632:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'c') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 633:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 634:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 635:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'j') ADVANCE(769);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(656);
      if (lookahead == 'p') ADVANCE(732);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == 'z') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 636:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'j') ADVANCE(769);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(656);
      if (lookahead == 'p') ADVANCE(732);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == 'z') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 637:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 638:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 639:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 640:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 641:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 642:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 643:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 644:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 645:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 646:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 647:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(664);
      if (lookahead == 'n') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 648:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 649:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead == 'r') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 650:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead == 'o') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 651:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 652:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 653:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 654:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 655:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 656:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 657:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 658:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 659:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 660:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 661:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 662:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 663:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 664:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 665:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 666:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 667:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 668:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 669:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 670:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 671:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 672:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'g') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 673:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'g') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 674:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'g') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 675:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'g') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 676:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'g') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 677:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'g') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 678:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'g') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 679:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'g') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 680:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'h') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 681:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'h') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 682:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'h') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 683:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'h') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 684:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'h') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 685:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 686:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 687:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 688:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 689:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 690:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 691:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 692:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 693:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 694:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 695:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 696:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 697:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 698:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 699:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 700:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 701:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 702:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 703:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 704:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 705:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 706:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 707:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 708:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 709:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 710:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 711:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 712:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'j') ADVANCE(769);
      if (lookahead == 'p') ADVANCE(732);
      if (lookahead == 'z') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 713:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 714:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 715:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 716:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 's') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 717:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 718:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 719:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 720:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 721:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 722:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 723:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 724:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 725:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 726:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 727:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 728:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 729:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'm') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 730:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'm') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 731:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 732:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 733:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 734:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 735:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 736:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 737:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 738:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 739:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 740:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 741:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 742:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 743:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 744:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 745:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 746:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 747:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 748:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 749:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 750:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 751:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 752:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 753:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 754:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 755:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 756:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 757:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 758:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 759:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 760:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 761:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 762:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 763:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 764:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 765:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 766:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 767:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 768:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'o') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 769:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 770:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 771:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 772:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 773:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 774:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 775:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 776:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 777:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 778:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 779:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 780:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 781:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 782:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 783:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 784:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 785:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 786:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 787:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 788:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 789:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 790:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 791:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 792:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 793:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 794:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 795:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 796:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 797:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 798:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 799:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 800:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 801:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 802:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 803:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 804:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 805:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 's') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 806:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 807:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 808:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 809:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 810:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 811:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 812:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 813:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 814:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 815:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 816:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 817:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 818:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 819:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 820:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 821:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 't') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 822:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'u') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 823:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'u') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 824:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'u') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 825:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'v') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 826:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'v') ADVANCE(654);
      if (lookahead == 'x') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 827:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'v') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 828:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'v') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 829:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 830:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'x') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 831:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'x') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 832:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'y') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 833:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'y') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 834:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'y') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 835:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'y') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 836:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'y') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 837:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 838:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 839:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 840:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 841:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 842:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 843:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 844:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 845:
      if (lookahead == '.') ADVANCE(865);
      END_STATE();
    case 846:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'a') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 847:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 848:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 849:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'd') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 850:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'd') ADVANCE(849);
      if (lookahead == 'l') ADVANCE(857);
      if (lookahead == 's') ADVANCE(854);
      if (lookahead == 't') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 851:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'd') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 852:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 853:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'g') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 854:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'h') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 855:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 856:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 857:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'u') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 858:
      if (lookahead == '.') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 859:
      if (lookahead == '.') ADVANCE(1923);
      END_STATE();
    case 860:
      if (lookahead == '.') ADVANCE(1923);
      if (lookahead == '0') ADVANCE(845);
      END_STATE();
    case 861:
      if (lookahead == '.') ADVANCE(1923);
      if (lookahead == '6') ADVANCE(860);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(863);
      END_STATE();
    case 862:
      if (lookahead == '.') ADVANCE(1923);
      if (lookahead == 'x') ADVANCE(1933);
      END_STATE();
    case 863:
      if (lookahead == '.') ADVANCE(1923);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(859);
      END_STATE();
    case 864:
      if (lookahead == '.') ADVANCE(1923);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(863);
      END_STATE();
    case 865:
      if (lookahead == '0') ADVANCE(2157);
      END_STATE();
    case 866:
      if (lookahead == '1') ADVANCE(2018);
      if (lookahead == '2') ADVANCE(2019);
      if (lookahead == '3') ADVANCE(2020);
      END_STATE();
    case 867:
      if (lookahead == 'A') ADVANCE(1507);
      END_STATE();
    case 868:
      if (lookahead == 'B') ADVANCE(1520);
      END_STATE();
    case 869:
      if (lookahead == 'B') ADVANCE(1577);
      END_STATE();
    case 870:
      if (lookahead == 'B') ADVANCE(1578);
      if (lookahead == 'b') ADVANCE(1399);
      if (lookahead == 'u') ADVANCE(1655);
      END_STATE();
    case 871:
      if (lookahead == 'B') ADVANCE(1579);
      END_STATE();
    case 872:
      if (lookahead == 'C') ADVANCE(1282);
      END_STATE();
    case 873:
      if (lookahead == 'C') ADVANCE(1289);
      END_STATE();
    case 874:
      if (lookahead == 'F') ADVANCE(1673);
      END_STATE();
    case 875:
      if (lookahead == 'F') ADVANCE(1323);
      END_STATE();
    case 876:
      if (lookahead == 'F') ADVANCE(1343);
      END_STATE();
    case 877:
      if (lookahead == 'G') ADVANCE(1641);
      if (lookahead == 'g') ADVANCE(1674);
      END_STATE();
    case 878:
      if (lookahead == 'H') ADVANCE(1181);
      if (lookahead == 'W') ADVANCE(1303);
      END_STATE();
    case 879:
      if (lookahead == 'O') ADVANCE(1244);
      END_STATE();
    case 880:
      if (lookahead == 'O') ADVANCE(1244);
      if (lookahead == 'r') ADVANCE(1161);
      END_STATE();
    case 881:
      if (lookahead == 'O') ADVANCE(1244);
      if (lookahead == 'r') ADVANCE(1160);
      END_STATE();
    case 882:
      if (lookahead == 'R') ADVANCE(1523);
      END_STATE();
    case 883:
      if (lookahead == 'S') ADVANCE(1618);
      if (lookahead == 'c') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1658);
      END_STATE();
    case 884:
      if (lookahead == 'S') ADVANCE(1618);
      if (lookahead == 'c') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1685);
      END_STATE();
    case 885:
      if (lookahead == 'S') ADVANCE(1286);
      END_STATE();
    case 886:
      if (lookahead == 'S') ADVANCE(1322);
      END_STATE();
    case 887:
      if (lookahead == 'S') ADVANCE(1322);
      if (lookahead == '_') ADVANCE(1048);
      END_STATE();
    case 888:
      if (lookahead == 'S') ADVANCE(1623);
      END_STATE();
    case 889:
      if (lookahead == 'S') ADVANCE(1624);
      END_STATE();
    case 890:
      if (lookahead == 'T') ADVANCE(1888);
      END_STATE();
    case 891:
      if (lookahead == 'T') ADVANCE(1206);
      END_STATE();
    case 892:
      if (lookahead == 'T') ADVANCE(1889);
      END_STATE();
    case 893:
      if (lookahead == 'T') ADVANCE(1890);
      END_STATE();
    case 894:
      if (lookahead == 'T') ADVANCE(1891);
      END_STATE();
    case 895:
      if (lookahead == 'T') ADVANCE(1892);
      END_STATE();
    case 896:
      if (lookahead == 'T') ADVANCE(1893);
      END_STATE();
    case 897:
      if (lookahead == 'T') ADVANCE(1335);
      END_STATE();
    case 898:
      if (lookahead == 'T') ADVANCE(1894);
      END_STATE();
    case 899:
      if (lookahead == 'T') ADVANCE(1895);
      END_STATE();
    case 900:
      if (lookahead == 'T') ADVANCE(1896);
      END_STATE();
    case 901:
      if (lookahead == 'T') ADVANCE(1897);
      END_STATE();
    case 902:
      if (lookahead == 'T') ADVANCE(1898);
      END_STATE();
    case 903:
      if (lookahead == 'T') ADVANCE(1900);
      END_STATE();
    case 904:
      if (lookahead == 'T') ADVANCE(1901);
      END_STATE();
    case 905:
      if (lookahead == 'T') ADVANCE(1903);
      END_STATE();
    case 906:
      if (lookahead == 'T') ADVANCE(1904);
      END_STATE();
    case 907:
      if (lookahead == 'T') ADVANCE(1905);
      END_STATE();
    case 908:
      if (lookahead == 'T') ADVANCE(1906);
      END_STATE();
    case 909:
      if (lookahead == 'T') ADVANCE(1907);
      END_STATE();
    case 910:
      if (lookahead == '_') ADVANCE(1267);
      END_STATE();
    case 911:
      if (lookahead == '_') ADVANCE(1071);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1348);
      END_STATE();
    case 912:
      if (lookahead == '_') ADVANCE(1257);
      END_STATE();
    case 913:
      if (lookahead == '_') ADVANCE(1048);
      END_STATE();
    case 914:
      if (lookahead == '_') ADVANCE(1069);
      END_STATE();
    case 915:
      if (lookahead == '_') ADVANCE(1528);
      END_STATE();
    case 916:
      if (lookahead == '_') ADVANCE(1614);
      END_STATE();
    case 917:
      if (lookahead == '_') ADVANCE(1251);
      END_STATE();
    case 918:
      if (lookahead == '_') ADVANCE(1395);
      END_STATE();
    case 919:
      if (lookahead == '_') ADVANCE(1525);
      END_STATE();
    case 920:
      if (lookahead == '_') ADVANCE(1308);
      END_STATE();
    case 921:
      if (lookahead == '_') ADVANCE(1672);
      END_STATE();
    case 922:
      if (lookahead == '_') ADVANCE(1669);
      END_STATE();
    case 923:
      if (lookahead == '_') ADVANCE(1396);
      END_STATE();
    case 924:
      if (lookahead == '_') ADVANCE(1717);
      END_STATE();
    case 925:
      if (lookahead == '_') ADVANCE(1848);
      END_STATE();
    case 926:
      if (lookahead == '_') ADVANCE(1400);
      END_STATE();
    case 927:
      if (lookahead == '_') ADVANCE(1534);
      END_STATE();
    case 928:
      if (lookahead == '_') ADVANCE(1616);
      END_STATE();
    case 929:
      if (lookahead == '_') ADVANCE(1260);
      END_STATE();
    case 930:
      if (lookahead == 'a') ADVANCE(1021);
      if (lookahead == 'i') ADVANCE(1808);
      if (lookahead == 'o') ADVANCE(1678);
      END_STATE();
    case 931:
      if (lookahead == 'a') ADVANCE(1021);
      if (lookahead == 'o') ADVANCE(1678);
      END_STATE();
    case 932:
      if (lookahead == 'a') ADVANCE(1390);
      if (lookahead == 'i') ADVANCE(1392);
      if (lookahead == 'o') ADVANCE(1475);
      if (lookahead == 'r') ADVANCE(980);
      END_STATE();
    case 933:
      if (lookahead == 'a') ADVANCE(1708);
      if (lookahead == 'e') ADVANCE(1710);
      if (lookahead == 'o') ADVANCE(1844);
      END_STATE();
    case 934:
      if (lookahead == 'a') ADVANCE(1441);
      END_STATE();
    case 935:
      if (lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'o') ADVANCE(2162);
      END_STATE();
    case 936:
      if (lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'o') ADVANCE(880);
      END_STATE();
    case 937:
      if (lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'o') ADVANCE(2161);
      END_STATE();
    case 938:
      if (lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'o') ADVANCE(879);
      END_STATE();
    case 939:
      if (lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 940:
      if (lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'o') ADVANCE(1671);
      END_STATE();
    case 941:
      if (lookahead == 'a') ADVANCE(1766);
      if (lookahead == 'd') ADVANCE(1859);
      if (lookahead == 'i') ADVANCE(1028);
      if (lookahead == 'l') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1715);
      if (lookahead == 'r') ADVANCE(1352);
      END_STATE();
    case 942:
      if (lookahead == 'a') ADVANCE(1766);
      if (lookahead == 'i') ADVANCE(1028);
      if (lookahead == 'l') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1715);
      if (lookahead == 'r') ADVANCE(1351);
      END_STATE();
    case 943:
      if (lookahead == 'a') ADVANCE(1883);
      END_STATE();
    case 944:
      if (lookahead == 'a') ADVANCE(1015);
      END_STATE();
    case 945:
      if (lookahead == 'a') ADVANCE(1073);
      if (lookahead == 'u') ADVANCE(1102);
      END_STATE();
    case 946:
      if (lookahead == 'a') ADVANCE(1272);
      if (lookahead == 'e') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(945);
      if (lookahead == 'y') ADVANCE(1587);
      END_STATE();
    case 947:
      if (lookahead == 'a') ADVANCE(1272);
      if (lookahead == 'e') ADVANCE(1864);
      if (lookahead == 'r') ADVANCE(1000);
      if (lookahead == 'y') ADVANCE(1587);
      END_STATE();
    case 948:
      if (lookahead == 'a') ADVANCE(1272);
      if (lookahead == 'e') ADVANCE(1865);
      END_STATE();
    case 949:
      if (lookahead == 'a') ADVANCE(1084);
      END_STATE();
    case 950:
      if (lookahead == 'a') ADVANCE(1084);
      if (lookahead == 'o') ADVANCE(1611);
      END_STATE();
    case 951:
      if (lookahead == 'a') ADVANCE(1887);
      END_STATE();
    case 952:
      if (lookahead == 'a') ADVANCE(1047);
      END_STATE();
    case 953:
      if (lookahead == 'a') ADVANCE(1914);
      END_STATE();
    case 954:
      if (lookahead == 'a') ADVANCE(1402);
      END_STATE();
    case 955:
      if (lookahead == 'a') ADVANCE(1402);
      if (lookahead == 'r') ADVANCE(1526);
      END_STATE();
    case 956:
      if (lookahead == 'a') ADVANCE(1041);
      END_STATE();
    case 957:
      if (lookahead == 'a') ADVANCE(1584);
      END_STATE();
    case 958:
      if (lookahead == 'a') ADVANCE(1882);
      END_STATE();
    case 959:
      if (lookahead == 'a') ADVANCE(1857);
      if (lookahead == 'o') ADVANCE(1844);
      END_STATE();
    case 960:
      if (lookahead == 'a') ADVANCE(1382);
      END_STATE();
    case 961:
      if (lookahead == 'a') ADVANCE(1615);
      END_STATE();
    case 962:
      if (lookahead == 'a') ADVANCE(1748);
      END_STATE();
    case 963:
      if (lookahead == 'a') ADVANCE(1383);
      END_STATE();
    case 964:
      if (lookahead == 'a') ADVANCE(1711);
      END_STATE();
    case 965:
      if (lookahead == 'a') ADVANCE(1666);
      END_STATE();
    case 966:
      if (lookahead == 'a') ADVANCE(1750);
      END_STATE();
    case 967:
      if (lookahead == 'a') ADVANCE(1582);
      if (lookahead == 'i') ADVANCE(1737);
      END_STATE();
    case 968:
      if (lookahead == 'a') ADVANCE(1508);
      END_STATE();
    case 969:
      if (lookahead == 'a') ADVANCE(1384);
      END_STATE();
    case 970:
      if (lookahead == 'a') ADVANCE(1688);
      END_STATE();
    case 971:
      if (lookahead == 'a') ADVANCE(1630);
      END_STATE();
    case 972:
      if (lookahead == 'a') ADVANCE(1424);
      END_STATE();
    case 973:
      if (lookahead == 'a') ADVANCE(1647);
      END_STATE();
    case 974:
      if (lookahead == 'a') ADVANCE(1062);
      END_STATE();
    case 975:
      if (lookahead == 'a') ADVANCE(1632);
      END_STATE();
    case 976:
      if (lookahead == 'a') ADVANCE(1772);
      END_STATE();
    case 977:
      if (lookahead == 'a') ADVANCE(1707);
      if (lookahead == 'e') ADVANCE(1710);
      END_STATE();
    case 978:
      if (lookahead == 'a') ADVANCE(1765);
      if (lookahead == 'i') ADVANCE(1028);
      if (lookahead == 'o') ADVANCE(1715);
      if (lookahead == 'r') ADVANCE(1351);
      END_STATE();
    case 979:
      if (lookahead == 'a') ADVANCE(1765);
      if (lookahead == 'r') ADVANCE(1517);
      END_STATE();
    case 980:
      if (lookahead == 'a') ADVANCE(1444);
      END_STATE();
    case 981:
      if (lookahead == 'a') ADVANCE(1448);
      END_STATE();
    case 982:
      if (lookahead == 'a') ADVANCE(1886);
      END_STATE();
    case 983:
      if (lookahead == 'a') ADVANCE(1486);
      END_STATE();
    case 984:
      if (lookahead == 'a') ADVANCE(1442);
      END_STATE();
    case 985:
      if (lookahead == 'a') ADVANCE(1449);
      END_STATE();
    case 986:
      if (lookahead == 'a') ADVANCE(1046);
      END_STATE();
    case 987:
      if (lookahead == 'a') ADVANCE(1783);
      END_STATE();
    case 988:
      if (lookahead == 'a') ADVANCE(1451);
      END_STATE();
    case 989:
      if (lookahead == 'a') ADVANCE(1654);
      END_STATE();
    case 990:
      if (lookahead == 'a') ADVANCE(1675);
      END_STATE();
    case 991:
      if (lookahead == 'a') ADVANCE(1416);
      END_STATE();
    case 992:
      if (lookahead == 'a') ADVANCE(1079);
      END_STATE();
    case 993:
      if (lookahead == 'a') ADVANCE(1829);
      if (lookahead == 'l') ADVANCE(943);
      END_STATE();
    case 994:
      if (lookahead == 'a') ADVANCE(1785);
      END_STATE();
    case 995:
      if (lookahead == 'a') ADVANCE(1504);
      END_STATE();
    case 996:
      if (lookahead == 'a') ADVANCE(1081);
      END_STATE();
    case 997:
      if (lookahead == 'a') ADVANCE(1082);
      END_STATE();
    case 998:
      if (lookahead == 'a') ADVANCE(1619);
      END_STATE();
    case 999:
      if (lookahead == 'a') ADVANCE(1796);
      END_STATE();
    case 1000:
      if (lookahead == 'a') ADVANCE(1480);
      END_STATE();
    case 1001:
      if (lookahead == 'a') ADVANCE(1679);
      END_STATE();
    case 1002:
      if (lookahead == 'a') ADVANCE(1622);
      END_STATE();
    case 1003:
      if (lookahead == 'a') ADVANCE(1798);
      END_STATE();
    case 1004:
      if (lookahead == 'a') ADVANCE(1800);
      END_STATE();
    case 1005:
      if (lookahead == 'a') ADVANCE(1801);
      END_STATE();
    case 1006:
      if (lookahead == 'a') ADVANCE(1802);
      END_STATE();
    case 1007:
      if (lookahead == 'a') ADVANCE(1803);
      END_STATE();
    case 1008:
      if (lookahead == 'a') ADVANCE(1804);
      END_STATE();
    case 1009:
      if (lookahead == 'a') ADVANCE(1739);
      END_STATE();
    case 1010:
      if (lookahead == 'a') ADVANCE(1509);
      END_STATE();
    case 1011:
      if (lookahead == 'a') ADVANCE(1682);
      END_STATE();
    case 1012:
      if (lookahead == 'a') ADVANCE(1690);
      END_STATE();
    case 1013:
      if (lookahead == 'a') ADVANCE(1909);
      END_STATE();
    case 1014:
      if (lookahead == 'b') ADVANCE(1365);
      if (lookahead == 'r') ADVANCE(1305);
      if (lookahead == 'v') ADVANCE(1166);
      END_STATE();
    case 1015:
      if (lookahead == 'b') ADVANCE(1403);
      END_STATE();
    case 1016:
      if (lookahead == 'b') ADVANCE(973);
      END_STATE();
    case 1017:
      if (lookahead == 'b') ADVANCE(1410);
      if (lookahead == 'd') ADVANCE(1213);
      if (lookahead == 'f') ADVANCE(1680);
      if (lookahead == 'l') ADVANCE(1542);
      if (lookahead == 'm') ADVANCE(1009);
      if (lookahead == 'r') ADVANCE(1580);
      if (lookahead == 't') ADVANCE(1217);
      END_STATE();
    case 1018:
      if (lookahead == 'b') ADVANCE(1011);
      END_STATE();
    case 1019:
      if (lookahead == 'c') ADVANCE(955);
      if (lookahead == 'h') ADVANCE(992);
      if (lookahead == 'i') ADVANCE(1911);
      if (lookahead == 'p') ADVANCE(1097);
      if (lookahead == 'u') ADVANCE(1583);
      END_STATE();
    case 1020:
      if (lookahead == 'c') ADVANCE(955);
      if (lookahead == 'h') ADVANCE(996);
      if (lookahead == 'i') ADVANCE(1911);
      if (lookahead == 'p') ADVANCE(1098);
      if (lookahead == 'u') ADVANCE(1583);
      END_STATE();
    case 1021:
      if (lookahead == 'c') ADVANCE(1366);
      END_STATE();
    case 1022:
      if (lookahead == 'c') ADVANCE(1281);
      END_STATE();
    case 1023:
      if (lookahead == 'c') ADVANCE(1281);
      if (lookahead == 'r') ADVANCE(1516);
      END_STATE();
    case 1024:
      if (lookahead == 'c') ADVANCE(1828);
      END_STATE();
    case 1025:
      if (lookahead == 'c') ADVANCE(1828);
      if (lookahead == 'e') ADVANCE(1056);
      END_STATE();
    case 1026:
      if (lookahead == 'c') ADVANCE(1367);
      END_STATE();
    case 1027:
      if (lookahead == 'c') ADVANCE(1368);
      END_STATE();
    case 1028:
      if (lookahead == 'c') ADVANCE(1746);
      END_STATE();
    case 1029:
      if (lookahead == 'c') ADVANCE(1372);
      END_STATE();
    case 1030:
      if (lookahead == 'c') ADVANCE(1369);
      END_STATE();
    case 1031:
      if (lookahead == 'c') ADVANCE(1370);
      END_STATE();
    case 1032:
      if (lookahead == 'c') ADVANCE(1521);
      END_STATE();
    case 1033:
      if (lookahead == 'c') ADVANCE(1749);
      END_STATE();
    case 1034:
      if (lookahead == 'c') ADVANCE(1812);
      END_STATE();
    case 1035:
      if (lookahead == 'c') ADVANCE(1284);
      END_STATE();
    case 1036:
      if (lookahead == 'c') ADVANCE(1519);
      if (lookahead == 'd') ADVANCE(1185);
      if (lookahead == 'e') ADVANCE(1847);
      if (lookahead == 'g') ADVANCE(1249);
      if (lookahead == 'h') ADVANCE(1311);
      if (lookahead == 'i') ADVANCE(1496);
      if (lookahead == 'l') ADVANCE(1560);
      if (lookahead == 'm') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 1037:
      if (lookahead == 'c') ADVANCE(1355);
      END_STATE();
    case 1038:
      if (lookahead == 'c') ADVANCE(991);
      END_STATE();
    case 1039:
      if (lookahead == 'c') ADVANCE(972);
      END_STATE();
    case 1040:
      if (lookahead == 'c') ADVANCE(1637);
      if (lookahead == 'h') ADVANCE(997);
      if (lookahead == 'i') ADVANCE(1911);
      if (lookahead == 'u') ADVANCE(1583);
      END_STATE();
    case 1041:
      if (lookahead == 'c') ADVANCE(1170);
      END_STATE();
    case 1042:
      if (lookahead == 'c') ADVANCE(1807);
      END_STATE();
    case 1043:
      if (lookahead == 'c') ADVANCE(1763);
      END_STATE();
    case 1044:
      if (lookahead == 'c') ADVANCE(1177);
      END_STATE();
    case 1045:
      if (lookahead == 'c') ADVANCE(1130);
      END_STATE();
    case 1046:
      if (lookahead == 'c') ADVANCE(1158);
      END_STATE();
    case 1047:
      if (lookahead == 'c') ADVANCE(1885);
      END_STATE();
    case 1048:
      if (lookahead == 'c') ADVANCE(1533);
      END_STATE();
    case 1049:
      if (lookahead == 'c') ADVANCE(954);
      if (lookahead == 'i') ADVANCE(1911);
      END_STATE();
    case 1050:
      if (lookahead == 'c') ADVANCE(954);
      if (lookahead == 'i') ADVANCE(1911);
      if (lookahead == 'p') ADVANCE(1665);
      END_STATE();
    case 1051:
      if (lookahead == 'c') ADVANCE(954);
      if (lookahead == 'p') ADVANCE(1665);
      END_STATE();
    case 1052:
      if (lookahead == 'c') ADVANCE(1314);
      END_STATE();
    case 1053:
      if (lookahead == 'c') ADVANCE(1405);
      END_STATE();
    case 1054:
      if (lookahead == 'c') ADVANCE(1838);
      END_STATE();
    case 1055:
      if (lookahead == 'd') ADVANCE(2092);
      if (lookahead == 'n') ADVANCE(1067);
      END_STATE();
    case 1056:
      if (lookahead == 'd') ADVANCE(2056);
      END_STATE();
    case 1057:
      if (lookahead == 'd') ADVANCE(885);
      END_STATE();
    case 1058:
      if (lookahead == 'd') ADVANCE(2122);
      END_STATE();
    case 1059:
      if (lookahead == 'd') ADVANCE(2123);
      END_STATE();
    case 1060:
      if (lookahead == 'd') ADVANCE(2053);
      END_STATE();
    case 1061:
      if (lookahead == 'd') ADVANCE(1978);
      END_STATE();
    case 1062:
      if (lookahead == 'd') ADVANCE(2052);
      END_STATE();
    case 1063:
      if (lookahead == 'd') ADVANCE(1443);
      END_STATE();
    case 1064:
      if (lookahead == 'd') ADVANCE(897);
      END_STATE();
    case 1065:
      if (lookahead == 'd') ADVANCE(1296);
      END_STATE();
    case 1066:
      if (lookahead == 'd') ADVANCE(1296);
      if (lookahead == 'f') ADVANCE(1246);
      END_STATE();
    case 1067:
      if (lookahead == 'd') ADVANCE(1163);
      if (lookahead == 's') ADVANCE(1769);
      END_STATE();
    case 1068:
      if (lookahead == 'd') ADVANCE(925);
      END_STATE();
    case 1069:
      if (lookahead == 'd') ADVANCE(1304);
      END_STATE();
    case 1070:
      if (lookahead == 'd') ADVANCE(1770);
      END_STATE();
    case 1071:
      if (lookahead == 'd') ADVANCE(1318);
      if (lookahead == 'n') ADVANCE(1544);
      if (lookahead == 's') ADVANCE(1598);
      END_STATE();
    case 1072:
      if (lookahead == 'd') ADVANCE(1771);
      END_STATE();
    case 1073:
      if (lookahead == 'd') ADVANCE(1107);
      if (lookahead == 'n') ADVANCE(1714);
      END_STATE();
    case 1074:
      if (lookahead == 'd') ADVANCE(1172);
      END_STATE();
    case 1075:
      if (lookahead == 'd') ADVANCE(1137);
      END_STATE();
    case 1076:
      if (lookahead == 'd') ADVANCE(1720);
      END_STATE();
    case 1077:
      if (lookahead == 'd') ADVANCE(1171);
      END_STATE();
    case 1078:
      if (lookahead == 'd') ADVANCE(1445);
      END_STATE();
    case 1079:
      if (lookahead == 'd') ADVANCE(1182);
      END_STATE();
    case 1080:
      if (lookahead == 'd') ADVANCE(1195);
      END_STATE();
    case 1081:
      if (lookahead == 'd') ADVANCE(1197);
      END_STATE();
    case 1082:
      if (lookahead == 'd') ADVANCE(1200);
      END_STATE();
    case 1083:
      if (lookahead == 'd') ADVANCE(1202);
      END_STATE();
    case 1084:
      if (lookahead == 'd') ADVANCE(892);
      END_STATE();
    case 1085:
      if (lookahead == 'd') ADVANCE(905);
      END_STATE();
    case 1086:
      if (lookahead == 'd') ADVANCE(1576);
      END_STATE();
    case 1087:
      if (lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 1088:
      if (lookahead == 'e') ADVANCE(1585);
      END_STATE();
    case 1089:
      if (lookahead == 'e') ADVANCE(1271);
      if (lookahead == 'i') ADVANCE(1483);
      if (lookahead == 'o') ADVANCE(950);
      END_STATE();
    case 1090:
      if (lookahead == 'e') ADVANCE(1271);
      if (lookahead == 'i') ADVANCE(1482);
      if (lookahead == 'o') ADVANCE(950);
      END_STATE();
    case 1091:
      if (lookahead == 'e') ADVANCE(1271);
      if (lookahead == 'o') ADVANCE(950);
      END_STATE();
    case 1092:
      if (lookahead == 'e') ADVANCE(1271);
      if (lookahead == 'o') ADVANCE(949);
      END_STATE();
    case 1093:
      if (lookahead == 'e') ADVANCE(1710);
      END_STATE();
    case 1094:
      if (lookahead == 'e') ADVANCE(1710);
      if (lookahead == 'o') ADVANCE(1844);
      END_STATE();
    case 1095:
      if (lookahead == 'e') ADVANCE(1437);
      END_STATE();
    case 1096:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 1097:
      if (lookahead == 'e') ADVANCE(1025);
      if (lookahead == 'r') ADVANCE(1321);
      END_STATE();
    case 1098:
      if (lookahead == 'e') ADVANCE(1025);
      if (lookahead == 'r') ADVANCE(1361);
      END_STATE();
    case 1099:
      if (lookahead == 'e') ADVANCE(2090);
      END_STATE();
    case 1100:
      if (lookahead == 'e') ADVANCE(1971);
      END_STATE();
    case 1101:
      if (lookahead == 'e') ADVANCE(2048);
      END_STATE();
    case 1102:
      if (lookahead == 'e') ADVANCE(2158);
      END_STATE();
    case 1103:
      if (lookahead == 'e') ADVANCE(2093);
      END_STATE();
    case 1104:
      if (lookahead == 'e') ADVANCE(2159);
      END_STATE();
    case 1105:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 1106:
      if (lookahead == 'e') ADVANCE(2104);
      END_STATE();
    case 1107:
      if (lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 1108:
      if (lookahead == 'e') ADVANCE(2067);
      END_STATE();
    case 1109:
      if (lookahead == 'e') ADVANCE(1976);
      END_STATE();
    case 1110:
      if (lookahead == 'e') ADVANCE(1982);
      END_STATE();
    case 1111:
      if (lookahead == 'e') ADVANCE(2111);
      END_STATE();
    case 1112:
      if (lookahead == 'e') ADVANCE(2106);
      END_STATE();
    case 1113:
      if (lookahead == 'e') ADVANCE(2124);
      END_STATE();
    case 1114:
      if (lookahead == 'e') ADVANCE(1962);
      END_STATE();
    case 1115:
      if (lookahead == 'e') ADVANCE(2134);
      END_STATE();
    case 1116:
      if (lookahead == 'e') ADVANCE(2049);
      END_STATE();
    case 1117:
      if (lookahead == 'e') ADVANCE(2025);
      END_STATE();
    case 1118:
      if (lookahead == 'e') ADVANCE(1950);
      END_STATE();
    case 1119:
      if (lookahead == 'e') ADVANCE(1966);
      END_STATE();
    case 1120:
      if (lookahead == 'e') ADVANCE(1968);
      END_STATE();
    case 1121:
      if (lookahead == 'e') ADVANCE(1967);
      END_STATE();
    case 1122:
      if (lookahead == 'e') ADVANCE(1961);
      END_STATE();
    case 1123:
      if (lookahead == 'e') ADVANCE(2102);
      END_STATE();
    case 1124:
      if (lookahead == 'e') ADVANCE(1970);
      END_STATE();
    case 1125:
      if (lookahead == 'e') ADVANCE(2129);
      END_STATE();
    case 1126:
      if (lookahead == 'e') ADVANCE(2015);
      END_STATE();
    case 1127:
      if (lookahead == 'e') ADVANCE(1964);
      END_STATE();
    case 1128:
      if (lookahead == 'e') ADVANCE(1965);
      END_STATE();
    case 1129:
      if (lookahead == 'e') ADVANCE(2119);
      END_STATE();
    case 1130:
      if (lookahead == 'e') ADVANCE(2068);
      END_STATE();
    case 1131:
      if (lookahead == 'e') ADVANCE(2127);
      END_STATE();
    case 1132:
      if (lookahead == 'e') ADVANCE(1951);
      END_STATE();
    case 1133:
      if (lookahead == 'e') ADVANCE(1963);
      END_STATE();
    case 1134:
      if (lookahead == 'e') ADVANCE(1959);
      END_STATE();
    case 1135:
      if (lookahead == 'e') ADVANCE(2096);
      END_STATE();
    case 1136:
      if (lookahead == 'e') ADVANCE(1953);
      END_STATE();
    case 1137:
      if (lookahead == 'e') ADVANCE(2039);
      END_STATE();
    case 1138:
      if (lookahead == 'e') ADVANCE(1969);
      END_STATE();
    case 1139:
      if (lookahead == 'e') ADVANCE(1952);
      END_STATE();
    case 1140:
      if (lookahead == 'e') ADVANCE(1958);
      END_STATE();
    case 1141:
      if (lookahead == 'e') ADVANCE(2112);
      END_STATE();
    case 1142:
      if (lookahead == 'e') ADVANCE(2128);
      END_STATE();
    case 1143:
      if (lookahead == 'e') ADVANCE(2035);
      END_STATE();
    case 1144:
      if (lookahead == 'e') ADVANCE(2043);
      END_STATE();
    case 1145:
      if (lookahead == 'e') ADVANCE(1265);
      END_STATE();
    case 1146:
      if (lookahead == 'e') ADVANCE(2030);
      END_STATE();
    case 1147:
      if (lookahead == 'e') ADVANCE(2031);
      END_STATE();
    case 1148:
      if (lookahead == 'e') ADVANCE(2038);
      END_STATE();
    case 1149:
      if (lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 1150:
      if (lookahead == 'e') ADVANCE(2014);
      END_STATE();
    case 1151:
      if (lookahead == 'e') ADVANCE(1915);
      END_STATE();
    case 1152:
      if (lookahead == 'e') ADVANCE(2016);
      END_STATE();
    case 1153:
      if (lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 1154:
      if (lookahead == 'e') ADVANCE(2110);
      END_STATE();
    case 1155:
      if (lookahead == 'e') ADVANCE(1472);
      if (lookahead == 'l') ADVANCE(1315);
      if (lookahead == 'o') ADVANCE(1421);
      if (lookahead == 'u') ADVANCE(1386);
      END_STATE();
    case 1156:
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 1157:
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 1158:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 1159:
      if (lookahead == 'e') ADVANCE(1663);
      END_STATE();
    case 1160:
      if (lookahead == 'e') ADVANCE(1245);
      END_STATE();
    case 1161:
      if (lookahead == 'e') ADVANCE(1245);
      if (lookahead == 'm') ADVANCE(960);
      END_STATE();
    case 1162:
      if (lookahead == 'e') ADVANCE(1694);
      END_STATE();
    case 1163:
      if (lookahead == 'e') ADVANCE(1858);
      END_STATE();
    case 1164:
      if (lookahead == 'e') ADVANCE(1853);
      END_STATE();
    case 1165:
      if (lookahead == 'e') ADVANCE(1498);
      END_STATE();
    case 1166:
      if (lookahead == 'e') ADVANCE(1638);
      END_STATE();
    case 1167:
      if (lookahead == 'e') ADVANCE(1076);
      END_STATE();
    case 1168:
      if (lookahead == 'e') ADVANCE(912);
      END_STATE();
    case 1169:
      if (lookahead == 'e') ADVANCE(1057);
      END_STATE();
    case 1170:
      if (lookahead == 'e') ADVANCE(916);
      END_STATE();
    case 1171:
      if (lookahead == 'e') ADVANCE(1627);
      END_STATE();
    case 1172:
      if (lookahead == 'e') ADVANCE(1479);
      END_STATE();
    case 1173:
      if (lookahead == 'e') ADVANCE(1054);
      END_STATE();
    case 1174:
      if (lookahead == 'e') ADVANCE(944);
      END_STATE();
    case 1175:
      if (lookahead == 'e') ADVANCE(1719);
      END_STATE();
    case 1176:
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == 'i') ADVANCE(1537);
      END_STATE();
    case 1177:
      if (lookahead == 'e') ADVANCE(1035);
      END_STATE();
    case 1178:
      if (lookahead == 'e') ADVANCE(1064);
      END_STATE();
    case 1179:
      if (lookahead == 'e') ADVANCE(920);
      END_STATE();
    case 1180:
      if (lookahead == 'e') ADVANCE(1068);
      END_STATE();
    case 1181:
      if (lookahead == 'e') ADVANCE(1299);
      END_STATE();
    case 1182:
      if (lookahead == 'e') ADVANCE(1629);
      END_STATE();
    case 1183:
      if (lookahead == 'e') ADVANCE(1436);
      END_STATE();
    case 1184:
      if (lookahead == 'e') ADVANCE(1696);
      END_STATE();
    case 1185:
      if (lookahead == 'e') ADVANCE(1037);
      END_STATE();
    case 1186:
      if (lookahead == 'e') ADVANCE(1697);
      END_STATE();
    case 1187:
      if (lookahead == 'e') ADVANCE(1500);
      END_STATE();
    case 1188:
      if (lookahead == 'e') ADVANCE(1699);
      END_STATE();
    case 1189:
      if (lookahead == 'e') ADVANCE(1087);
      END_STATE();
    case 1190:
      if (lookahead == 'e') ADVANCE(1776);
      END_STATE();
    case 1191:
      if (lookahead == 'e') ADVANCE(1700);
      END_STATE();
    case 1192:
      if (lookahead == 'e') ADVANCE(1718);
      END_STATE();
    case 1193:
      if (lookahead == 'e') ADVANCE(1643);
      END_STATE();
    case 1194:
      if (lookahead == 'e') ADVANCE(1704);
      END_STATE();
    case 1195:
      if (lookahead == 'e') ADVANCE(1636);
      END_STATE();
    case 1196:
      if (lookahead == 'e') ADVANCE(1754);
      END_STATE();
    case 1197:
      if (lookahead == 'e') ADVANCE(1687);
      END_STATE();
    case 1198:
      if (lookahead == 'e') ADVANCE(1705);
      END_STATE();
    case 1199:
      if (lookahead == 'e') ADVANCE(1758);
      END_STATE();
    case 1200:
      if (lookahead == 'e') ADVANCE(1635);
      END_STATE();
    case 1201:
      if (lookahead == 'e') ADVANCE(1642);
      END_STATE();
    case 1202:
      if (lookahead == 'e') ADVANCE(1644);
      END_STATE();
    case 1203:
      if (lookahead == 'e') ADVANCE(1713);
      END_STATE();
    case 1204:
      if (lookahead == 'e') ADVANCE(1501);
      END_STATE();
    case 1205:
      if (lookahead == 'e') ADVANCE(1033);
      END_STATE();
    case 1206:
      if (lookahead == 'e') ADVANCE(1880);
      END_STATE();
    case 1207:
      if (lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 1208:
      if (lookahead == 'e') ADVANCE(1027);
      END_STATE();
    case 1209:
      if (lookahead == 'e') ADVANCE(1034);
      END_STATE();
    case 1210:
      if (lookahead == 'e') ADVANCE(1863);
      END_STATE();
    case 1211:
      if (lookahead == 'e') ADVANCE(1651);
      END_STATE();
    case 1212:
      if (lookahead == 'e') ADVANCE(1042);
      END_STATE();
    case 1213:
      if (lookahead == 'e') ADVANCE(1401);
      END_STATE();
    case 1214:
      if (lookahead == 'e') ADVANCE(1043);
      END_STATE();
    case 1215:
      if (lookahead == 'e') ADVANCE(1488);
      END_STATE();
    case 1216:
      if (lookahead == 'e') ADVANCE(1491);
      END_STATE();
    case 1217:
      if (lookahead == 'e') ADVANCE(1867);
      if (lookahead == 'i') ADVANCE(1450);
      if (lookahead == 'y') ADVANCE(1610);
      END_STATE();
    case 1218:
      if (lookahead == 'e') ADVANCE(1492);
      END_STATE();
    case 1219:
      if (lookahead == 'e') ADVANCE(1866);
      if (lookahead == 'r') ADVANCE(1000);
      if (lookahead == 'y') ADVANCE(1587);
      END_STATE();
    case 1220:
      if (lookahead == 'e') ADVANCE(1497);
      END_STATE();
    case 1221:
      if (lookahead == 'e') ADVANCE(927);
      END_STATE();
    case 1222:
      if (lookahead == 'e') ADVANCE(1868);
      END_STATE();
    case 1223:
      if (lookahead == 'e') ADVANCE(1869);
      END_STATE();
    case 1224:
      if (lookahead == 'e') ADVANCE(2113);
      END_STATE();
    case 1225:
      if (lookahead == 'e') ADVANCE(1916);
      END_STATE();
    case 1226:
      if (lookahead == 'e') ADVANCE(1676);
      END_STATE();
    case 1227:
      if (lookahead == 'e') ADVANCE(1024);
      END_STATE();
    case 1228:
      if (lookahead == 'e') ADVANCE(1870);
      if (lookahead == 'r') ADVANCE(1000);
      END_STATE();
    case 1229:
      if (lookahead == 'e') ADVANCE(1917);
      END_STATE();
    case 1230:
      if (lookahead == 'e') ADVANCE(1873);
      if (lookahead == 'r') ADVANCE(1000);
      END_STATE();
    case 1231:
      if (lookahead == 'e') ADVANCE(1918);
      END_STATE();
    case 1232:
      if (lookahead == 'e') ADVANCE(1874);
      if (lookahead == 'r') ADVANCE(1000);
      END_STATE();
    case 1233:
      if (lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 1234:
      if (lookahead == 'e') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(1000);
      END_STATE();
    case 1235:
      if (lookahead == 'e') ADVANCE(1871);
      END_STATE();
    case 1236:
      if (lookahead == 'e') ADVANCE(1872);
      END_STATE();
    case 1237:
      if (lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 1238:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 1239:
      if (lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 1240:
      if (lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 1241:
      if (lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 1242:
      if (lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 1243:
      if (lookahead == 'f') ADVANCE(1246);
      END_STATE();
    case 1244:
      if (lookahead == 'f') ADVANCE(874);
      END_STATE();
    case 1245:
      if (lookahead == 'f') ADVANCE(1032);
      END_STATE();
    case 1246:
      if (lookahead == 'f') ADVANCE(1205);
      END_STATE();
    case 1247:
      if (lookahead == 'f') ADVANCE(1834);
      END_STATE();
    case 1248:
      if (lookahead == 'f') ADVANCE(1253);
      END_STATE();
    case 1249:
      if (lookahead == 'f') ADVANCE(1860);
      END_STATE();
    case 1250:
      if (lookahead == 'f') ADVANCE(1247);
      END_STATE();
    case 1251:
      if (lookahead == 'f') ADVANCE(1588);
      END_STATE();
    case 1252:
      if (lookahead == 'f') ADVANCE(986);
      END_STATE();
    case 1253:
      if (lookahead == 'f') ADVANCE(1725);
      END_STATE();
    case 1254:
      if (lookahead == 'f') ADVANCE(1727);
      END_STATE();
    case 1255:
      if (lookahead == 'f') ADVANCE(1562);
      END_STATE();
    case 1256:
      if (lookahead == 'f') ADVANCE(1254);
      END_STATE();
    case 1257:
      if (lookahead == 'f') ADVANCE(1326);
      END_STATE();
    case 1258:
      if (lookahead == 'f') ADVANCE(1212);
      END_STATE();
    case 1259:
      if (lookahead == 'f') ADVANCE(1564);
      END_STATE();
    case 1260:
      if (lookahead == 'f') ADVANCE(1328);
      END_STATE();
    case 1261:
      if (lookahead == 'f') ADVANCE(1214);
      END_STATE();
    case 1262:
      if (lookahead == 'f') ADVANCE(1565);
      END_STATE();
    case 1263:
      if (lookahead == 'f') ADVANCE(1337);
      END_STATE();
    case 1264:
      if (lookahead == 'f') ADVANCE(1345);
      END_STATE();
    case 1265:
      if (lookahead == 'f') ADVANCE(1347);
      if (lookahead == 's') ADVANCE(1038);
      END_STATE();
    case 1266:
      if (lookahead == 'f') ADVANCE(1258);
      END_STATE();
    case 1267:
      if (lookahead == 'f') ADVANCE(1677);
      if (lookahead == 'r') ADVANCE(1522);
      END_STATE();
    case 1268:
      if (lookahead == 'f') ADVANCE(1261);
      END_STATE();
    case 1269:
      if (lookahead == 'g') ADVANCE(2086);
      END_STATE();
    case 1270:
      if (lookahead == 'g') ADVANCE(2034);
      END_STATE();
    case 1271:
      if (lookahead == 'g') ADVANCE(952);
      END_STATE();
    case 1272:
      if (lookahead == 'g') ADVANCE(1695);
      END_STATE();
    case 1273:
      if (lookahead == 'g') ADVANCE(1283);
      END_STATE();
    case 1274:
      if (lookahead == 'g') ADVANCE(1701);
      END_STATE();
    case 1275:
      if (lookahead == 'g') ADVANCE(1649);
      END_STATE();
    case 1276:
      if (lookahead == 'h') ADVANCE(1975);
      END_STATE();
    case 1277:
      if (lookahead == 'h') ADVANCE(1960);
      END_STATE();
    case 1278:
      if (lookahead == 'h') ADVANCE(2132);
      END_STATE();
    case 1279:
      if (lookahead == 'h') ADVANCE(2121);
      END_STATE();
    case 1280:
      if (lookahead == 'h') ADVANCE(1986);
      END_STATE();
    case 1281:
      if (lookahead == 'h') ADVANCE(1316);
      END_STATE();
    case 1282:
      if (lookahead == 'h') ADVANCE(970);
      END_STATE();
    case 1283:
      if (lookahead == 'h') ADVANCE(1751);
      END_STATE();
    case 1284:
      if (lookahead == 'h') ADVANCE(1208);
      END_STATE();
    case 1285:
      if (lookahead == 'h') ADVANCE(984);
      END_STATE();
    case 1286:
      if (lookahead == 'h') ADVANCE(1313);
      END_STATE();
    case 1287:
      if (lookahead == 'h') ADVANCE(1527);
      END_STATE();
    case 1288:
      if (lookahead == 'h') ADVANCE(1723);
      END_STATE();
    case 1289:
      if (lookahead == 'h') ADVANCE(1012);
      END_STATE();
    case 1290:
      if (lookahead == 'i') ADVANCE(1511);
      END_STATE();
    case 1291:
      if (lookahead == 'i') ADVANCE(1911);
      END_STATE();
    case 1292:
      if (lookahead == 'i') ADVANCE(890);
      END_STATE();
    case 1293:
      if (lookahead == 'i') ADVANCE(1438);
      END_STATE();
    case 1294:
      if (lookahead == 'i') ADVANCE(1910);
      END_STATE();
    case 1295:
      if (lookahead == 'i') ADVANCE(1474);
      END_STATE();
    case 1296:
      if (lookahead == 'i') ADVANCE(1744);
      END_STATE();
    case 1297:
      if (lookahead == 'i') ADVANCE(1096);
      END_STATE();
    case 1298:
      if (lookahead == 'i') ADVANCE(1476);
      END_STATE();
    case 1299:
      if (lookahead == 'i') ADVANCE(1273);
      END_STATE();
    case 1300:
      if (lookahead == 'i') ADVANCE(1862);
      if (lookahead == 'o') ADVANCE(1475);
      END_STATE();
    case 1301:
      if (lookahead == 'i') ADVANCE(1053);
      END_STATE();
    case 1302:
      if (lookahead == 'i') ADVANCE(1793);
      END_STATE();
    case 1303:
      if (lookahead == 'i') ADVANCE(1070);
      END_STATE();
    case 1304:
      if (lookahead == 'i') ADVANCE(1730);
      END_STATE();
    case 1305:
      if (lookahead == 'i') ADVANCE(1204);
      END_STATE();
    case 1306:
      if (lookahead == 'i') ADVANCE(1499);
      END_STATE();
    case 1307:
      if (lookahead == 'i') ADVANCE(1767);
      END_STATE();
    case 1308:
      if (lookahead == 'i') ADVANCE(1061);
      END_STATE();
    case 1309:
      if (lookahead == 'i') ADVANCE(1477);
      END_STATE();
    case 1310:
      if (lookahead == 'i') ADVANCE(1742);
      END_STATE();
    case 1311:
      if (lookahead == 'i') ADVANCE(1724);
      END_STATE();
    case 1312:
      if (lookahead == 'i') ADVANCE(1740);
      END_STATE();
    case 1313:
      if (lookahead == 'i') ADVANCE(1183);
      END_STATE();
    case 1314:
      if (lookahead == 'i') ADVANCE(1191);
      END_STATE();
    case 1315:
      if (lookahead == 'i') ADVANCE(1026);
      END_STATE();
    case 1316:
      if (lookahead == 'i') ADVANCE(1845);
      END_STATE();
    case 1317:
      if (lookahead == 'i') ADVANCE(1912);
      END_STATE();
    case 1318:
      if (lookahead == 'i') ADVANCE(1250);
      END_STATE();
    case 1319:
      if (lookahead == 'i') ADVANCE(1530);
      END_STATE();
    case 1320:
      if (lookahead == 'i') ADVANCE(1072);
      END_STATE();
    case 1321:
      if (lookahead == 'i') ADVANCE(1780);
      END_STATE();
    case 1322:
      if (lookahead == 'i') ADVANCE(1913);
      END_STATE();
    case 1323:
      if (lookahead == 'i') ADVANCE(1404);
      END_STATE();
    case 1324:
      if (lookahead == 'i') ADVANCE(1029);
      END_STATE();
    case 1325:
      if (lookahead == 'i') ADVANCE(1536);
      END_STATE();
    case 1326:
      if (lookahead == 'i') ADVANCE(1406);
      END_STATE();
    case 1327:
      if (lookahead == 'i') ADVANCE(1031);
      END_STATE();
    case 1328:
      if (lookahead == 'i') ADVANCE(1407);
      END_STATE();
    case 1329:
      if (lookahead == 'i') ADVANCE(1540);
      END_STATE();
    case 1330:
      if (lookahead == 'i') ADVANCE(1408);
      END_STATE();
    case 1331:
      if (lookahead == 'i') ADVANCE(1541);
      END_STATE();
    case 1332:
      if (lookahead == 'i') ADVANCE(1409);
      END_STATE();
    case 1333:
      if (lookahead == 'i') ADVANCE(1543);
      END_STATE();
    case 1334:
      if (lookahead == 'i') ADVANCE(1545);
      END_STATE();
    case 1335:
      if (lookahead == 'i') ADVANCE(1411);
      END_STATE();
    case 1336:
      if (lookahead == 'i') ADVANCE(1547);
      END_STATE();
    case 1337:
      if (lookahead == 'i') ADVANCE(1412);
      END_STATE();
    case 1338:
      if (lookahead == 'i') ADVANCE(1549);
      END_STATE();
    case 1339:
      if (lookahead == 'i') ADVANCE(1391);
      END_STATE();
    case 1340:
      if (lookahead == 'i') ADVANCE(1391);
      if (lookahead == 'o') ADVANCE(1475);
      END_STATE();
    case 1341:
      if (lookahead == 'i') ADVANCE(1391);
      if (lookahead == 'r') ADVANCE(980);
      END_STATE();
    case 1342:
      if (lookahead == 'i') ADVANCE(1550);
      END_STATE();
    case 1343:
      if (lookahead == 'i') ADVANCE(1413);
      END_STATE();
    case 1344:
      if (lookahead == 'i') ADVANCE(1552);
      END_STATE();
    case 1345:
      if (lookahead == 'i') ADVANCE(1414);
      END_STATE();
    case 1346:
      if (lookahead == 'i') ADVANCE(1553);
      END_STATE();
    case 1347:
      if (lookahead == 'i') ADVANCE(1415);
      END_STATE();
    case 1348:
      if (lookahead == 'i') ADVANCE(1417);
      END_STATE();
    case 1349:
      if (lookahead == 'i') ADVANCE(1418);
      END_STATE();
    case 1350:
      if (lookahead == 'i') ADVANCE(1419);
      END_STATE();
    case 1351:
      if (lookahead == 'i') ADVANCE(1559);
      END_STATE();
    case 1352:
      if (lookahead == 'i') ADVANCE(1559);
      if (lookahead == 'o') ADVANCE(1275);
      END_STATE();
    case 1353:
      if (lookahead == 'i') ADVANCE(1454);
      END_STATE();
    case 1354:
      if (lookahead == 'i') ADVANCE(1458);
      END_STATE();
    case 1355:
      if (lookahead == 'i') ADVANCE(1735);
      END_STATE();
    case 1356:
      if (lookahead == 'i') ADVANCE(1816);
      END_STATE();
    case 1357:
      if (lookahead == 'i') ADVANCE(1810);
      if (lookahead == 'o') ADVANCE(1678);
      END_STATE();
    case 1358:
      if (lookahead == 'i') ADVANCE(1810);
      if (lookahead == 'o') ADVANCE(1681);
      END_STATE();
    case 1359:
      if (lookahead == 'i') ADVANCE(1819);
      END_STATE();
    case 1360:
      if (lookahead == 'i') ADVANCE(1820);
      END_STATE();
    case 1361:
      if (lookahead == 'i') ADVANCE(1821);
      END_STATE();
    case 1362:
      if (lookahead == 'i') ADVANCE(1459);
      END_STATE();
    case 1363:
      if (lookahead == 'i') ADVANCE(1460);
      END_STATE();
    case 1364:
      if (lookahead == 'i') ADVANCE(1461);
      END_STATE();
    case 1365:
      if (lookahead == 'j') ADVANCE(1209);
      END_STATE();
    case 1366:
      if (lookahead == 'k') ADVANCE(877);
      END_STATE();
    case 1367:
      if (lookahead == 'k') ADVANCE(2055);
      END_STATE();
    case 1368:
      if (lookahead == 'k') ADVANCE(2105);
      END_STATE();
    case 1369:
      if (lookahead == 'k') ADVANCE(2057);
      END_STATE();
    case 1370:
      if (lookahead == 'k') ADVANCE(2054);
      END_STATE();
    case 1371:
      if (lookahead == 'k') ADVANCE(1169);
      END_STATE();
    case 1372:
      if (lookahead == 'k') ADVANCE(1733);
      END_STATE();
    case 1373:
      if (lookahead == 'k') ADVANCE(1263);
      END_STATE();
    case 1374:
      if (lookahead == 'k') ADVANCE(1264);
      END_STATE();
    case 1375:
      if (lookahead == 'l') ADVANCE(1380);
      if (lookahead == 'n') ADVANCE(1293);
      if (lookahead == 'r') ADVANCE(1023);
      END_STATE();
    case 1376:
      if (lookahead == 'l') ADVANCE(1380);
      if (lookahead == 'n') ADVANCE(1354);
      END_STATE();
    case 1377:
      if (lookahead == 'l') ADVANCE(1380);
      if (lookahead == 'n') ADVANCE(1354);
      if (lookahead == 'r') ADVANCE(1022);
      END_STATE();
    case 1378:
      if (lookahead == 'l') ADVANCE(1380);
      if (lookahead == 'n') ADVANCE(1363);
      END_STATE();
    case 1379:
      if (lookahead == 'l') ADVANCE(1856);
      END_STATE();
    case 1380:
      if (lookahead == 'l') ADVANCE(1856);
      if (lookahead == 'p') ADVANCE(1285);
      if (lookahead == 'w') ADVANCE(951);
      END_STATE();
    case 1381:
      if (lookahead == 'l') ADVANCE(914);
      END_STATE();
    case 1382:
      if (lookahead == 'l') ADVANCE(2114);
      END_STATE();
    case 1383:
      if (lookahead == 'l') ADVANCE(2089);
      END_STATE();
    case 1384:
      if (lookahead == 'l') ADVANCE(2097);
      END_STATE();
    case 1385:
      if (lookahead == 'l') ADVANCE(1381);
      END_STATE();
    case 1386:
      if (lookahead == 'l') ADVANCE(1381);
      if (lookahead == 'r') ADVANCE(1729);
      END_STATE();
    case 1387:
      if (lookahead == 'l') ADVANCE(1381);
      if (lookahead == 'r') ADVANCE(1731);
      END_STATE();
    case 1388:
      if (lookahead == 'l') ADVANCE(1381);
      if (lookahead == 'r') ADVANCE(1732);
      END_STATE();
    case 1389:
      if (lookahead == 'l') ADVANCE(1016);
      END_STATE();
    case 1390:
      if (lookahead == 'l') ADVANCE(1721);
      END_STATE();
    case 1391:
      if (lookahead == 'l') ADVANCE(1099);
      END_STATE();
    case 1392:
      if (lookahead == 'l') ADVANCE(1099);
      if (lookahead == 'x') ADVANCE(1167);
      END_STATE();
    case 1393:
      if (lookahead == 'l') ADVANCE(1389);
      END_STATE();
    case 1394:
      if (lookahead == 'l') ADVANCE(956);
      END_STATE();
    case 1395:
      if (lookahead == 'l') ADVANCE(1539);
      END_STATE();
    case 1396:
      if (lookahead == 'l') ADVANCE(1548);
      END_STATE();
    case 1397:
      if (lookahead == 'l') ADVANCE(1379);
      if (lookahead == 'n') ADVANCE(1362);
      if (lookahead == 'r') ADVANCE(1022);
      END_STATE();
    case 1398:
      if (lookahead == 'l') ADVANCE(1379);
      if (lookahead == 'n') ADVANCE(1364);
      END_STATE();
    case 1399:
      if (lookahead == 'l') ADVANCE(1563);
      END_STATE();
    case 1400:
      if (lookahead == 'l') ADVANCE(953);
      END_STATE();
    case 1401:
      if (lookahead == 'l') ADVANCE(958);
      END_STATE();
    case 1402:
      if (lookahead == 'l') ADVANCE(1106);
      END_STATE();
    case 1403:
      if (lookahead == 'l') ADVANCE(1113);
      END_STATE();
    case 1404:
      if (lookahead == 'l') ADVANCE(1117);
      END_STATE();
    case 1405:
      if (lookahead == 'l') ADVANCE(1122);
      END_STATE();
    case 1406:
      if (lookahead == 'l') ADVANCE(1179);
      END_STATE();
    case 1407:
      if (lookahead == 'l') ADVANCE(1123);
      END_STATE();
    case 1408:
      if (lookahead == 'l') ADVANCE(1125);
      END_STATE();
    case 1409:
      if (lookahead == 'l') ADVANCE(1126);
      END_STATE();
    case 1410:
      if (lookahead == 'l') ADVANCE(1215);
      END_STATE();
    case 1411:
      if (lookahead == 'l') ADVANCE(1157);
      END_STATE();
    case 1412:
      if (lookahead == 'l') ADVANCE(1129);
      END_STATE();
    case 1413:
      if (lookahead == 'l') ADVANCE(1142);
      END_STATE();
    case 1414:
      if (lookahead == 'l') ADVANCE(1146);
      END_STATE();
    case 1415:
      if (lookahead == 'l') ADVANCE(1147);
      END_STATE();
    case 1416:
      if (lookahead == 'l') ADVANCE(1148);
      END_STATE();
    case 1417:
      if (lookahead == 'l') ADVANCE(1150);
      END_STATE();
    case 1418:
      if (lookahead == 'l') ADVANCE(1152);
      END_STATE();
    case 1419:
      if (lookahead == 'l') ADVANCE(1153);
      END_STATE();
    case 1420:
      if (lookahead == 'l') ADVANCE(1524);
      END_STATE();
    case 1421:
      if (lookahead == 'l') ADVANCE(1524);
      if (lookahead == 'r') ADVANCE(1506);
      END_STATE();
    case 1422:
      if (lookahead == 'l') ADVANCE(982);
      END_STATE();
    case 1423:
      if (lookahead == 'l') ADVANCE(971);
      END_STATE();
    case 1424:
      if (lookahead == 'l') ADVANCE(1312);
      END_STATE();
    case 1425:
      if (lookahead == 'l') ADVANCE(975);
      END_STATE();
    case 1426:
      if (lookahead == 'l') ADVANCE(1546);
      END_STATE();
    case 1427:
      if (lookahead == 'l') ADVANCE(1554);
      END_STATE();
    case 1428:
      if (lookahead == 'l') ADVANCE(1554);
      if (lookahead == 'r') ADVANCE(1506);
      END_STATE();
    case 1429:
      if (lookahead == 'l') ADVANCE(1557);
      END_STATE();
    case 1430:
      if (lookahead == 'l') ADVANCE(1324);
      END_STATE();
    case 1431:
      if (lookahead == 'l') ADVANCE(1324);
      if (lookahead == 'o') ADVANCE(1661);
      if (lookahead == 'u') ADVANCE(1388);
      END_STATE();
    case 1432:
      if (lookahead == 'l') ADVANCE(1324);
      if (lookahead == 'o') ADVANCE(1420);
      END_STATE();
    case 1433:
      if (lookahead == 'l') ADVANCE(1324);
      if (lookahead == 'o') ADVANCE(1420);
      if (lookahead == 'u') ADVANCE(1385);
      END_STATE();
    case 1434:
      if (lookahead == 'l') ADVANCE(1324);
      if (lookahead == 'u') ADVANCE(1385);
      END_STATE();
    case 1435:
      if (lookahead == 'l') ADVANCE(1327);
      if (lookahead == 'o') ADVANCE(1427);
      if (lookahead == 'u') ADVANCE(1387);
      END_STATE();
    case 1436:
      if (lookahead == 'l') ADVANCE(1085);
      END_STATE();
    case 1437:
      if (lookahead == 'm') ADVANCE(1531);
      if (lookahead == 'p') ADVANCE(1394);
      END_STATE();
    case 1438:
      if (lookahead == 'm') ADVANCE(962);
      END_STATE();
    case 1439:
      if (lookahead == 'm') ADVANCE(957);
      END_STATE();
    case 1440:
      if (lookahead == 'm') ADVANCE(960);
      END_STATE();
    case 1441:
      if (lookahead == 'm') ADVANCE(1100);
      END_STATE();
    case 1442:
      if (lookahead == 'm') ADVANCE(964);
      END_STATE();
    case 1443:
      if (lookahead == 'm') ADVANCE(1561);
      END_STATE();
    case 1444:
      if (lookahead == 'm') ADVANCE(1105);
      END_STATE();
    case 1445:
      if (lookahead == 'm') ADVANCE(961);
      END_STATE();
    case 1446:
      if (lookahead == 'm') ADVANCE(1203);
      if (lookahead == 'p') ADVANCE(965);
      END_STATE();
    case 1447:
      if (lookahead == 'm') ADVANCE(969);
      END_STATE();
    case 1448:
      if (lookahead == 'm') ADVANCE(1186);
      END_STATE();
    case 1449:
      if (lookahead == 'm') ADVANCE(1192);
      END_STATE();
    case 1450:
      if (lookahead == 'm') ADVANCE(1143);
      END_STATE();
    case 1451:
      if (lookahead == 'm') ADVANCE(1198);
      END_STATE();
    case 1452:
      if (lookahead == 'm') ADVANCE(1455);
      END_STATE();
    case 1453:
      if (lookahead == 'm') ADVANCE(966);
      END_STATE();
    case 1454:
      if (lookahead == 'm') ADVANCE(987);
      END_STATE();
    case 1455:
      if (lookahead == 'm') ADVANCE(1550);
      END_STATE();
    case 1456:
      if (lookahead == 'm') ADVANCE(998);
      END_STATE();
    case 1457:
      if (lookahead == 'm') ADVANCE(1002);
      END_STATE();
    case 1458:
      if (lookahead == 'm') ADVANCE(1004);
      END_STATE();
    case 1459:
      if (lookahead == 'm') ADVANCE(1005);
      END_STATE();
    case 1460:
      if (lookahead == 'm') ADVANCE(1006);
      END_STATE();
    case 1461:
      if (lookahead == 'm') ADVANCE(1008);
      END_STATE();
    case 1462:
      if (lookahead == 'n') ADVANCE(1067);
      END_STATE();
    case 1463:
      if (lookahead == 'n') ADVANCE(1980);
      END_STATE();
    case 1464:
      if (lookahead == 'n') ADVANCE(2065);
      END_STATE();
    case 1465:
      if (lookahead == 'n') ADVANCE(2029);
      END_STATE();
    case 1466:
      if (lookahead == 'n') ADVANCE(2125);
      END_STATE();
    case 1467:
      if (lookahead == 'n') ADVANCE(2033);
      END_STATE();
    case 1468:
      if (lookahead == 'n') ADVANCE(1984);
      END_STATE();
    case 1469:
      if (lookahead == 'n') ADVANCE(2028);
      END_STATE();
    case 1470:
      if (lookahead == 'n') ADVANCE(1017);
      END_STATE();
    case 1471:
      if (lookahead == 'n') ADVANCE(2027);
      END_STATE();
    case 1472:
      if (lookahead == 'n') ADVANCE(1768);
      END_STATE();
    case 1473:
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 1474:
      if (lookahead == 'n') ADVANCE(1086);
      END_STATE();
    case 1475:
      if (lookahead == 'n') ADVANCE(1745);
      if (lookahead == 'r') ADVANCE(1453);
      END_STATE();
    case 1476:
      if (lookahead == 'n') ADVANCE(1269);
      END_STATE();
    case 1477:
      if (lookahead == 'n') ADVANCE(1270);
      END_STATE();
    case 1478:
      if (lookahead == 'n') ADVANCE(924);
      END_STATE();
    case 1479:
      if (lookahead == 'n') ADVANCE(1052);
      END_STATE();
    case 1480:
      if (lookahead == 'n') ADVANCE(1714);
      END_STATE();
    case 1481:
      if (lookahead == 'n') ADVANCE(918);
      END_STATE();
    case 1482:
      if (lookahead == 'n') ADVANCE(1164);
      END_STATE();
    case 1483:
      if (lookahead == 'n') ADVANCE(1164);
      if (lookahead == 's') ADVANCE(1822);
      END_STATE();
    case 1484:
      if (lookahead == 'n') ADVANCE(1058);
      END_STATE();
    case 1485:
      if (lookahead == 'n') ADVANCE(1059);
      END_STATE();
    case 1486:
      if (lookahead == 'n') ADVANCE(1764);
      END_STATE();
    case 1487:
      if (lookahead == 'n') ADVANCE(1060);
      END_STATE();
    case 1488:
      if (lookahead == 'n') ADVANCE(1063);
      END_STATE();
    case 1489:
      if (lookahead == 'n') ADVANCE(1752);
      END_STATE();
    case 1490:
      if (lookahead == 'n') ADVANCE(1753);
      END_STATE();
    case 1491:
      if (lookahead == 'n') ADVANCE(1756);
      END_STATE();
    case 1492:
      if (lookahead == 'n') ADVANCE(1757);
      END_STATE();
    case 1493:
      if (lookahead == 'n') ADVANCE(1709);
      END_STATE();
    case 1494:
      if (lookahead == 'n') ADVANCE(1778);
      END_STATE();
    case 1495:
      if (lookahead == 'n') ADVANCE(1762);
      END_STATE();
    case 1496:
      if (lookahead == 'n') ADVANCE(1788);
      END_STATE();
    case 1497:
      if (lookahead == 'n') ADVANCE(1781);
      END_STATE();
    case 1498:
      if (lookahead == 'n') ADVANCE(1074);
      END_STATE();
    case 1499:
      if (lookahead == 'n') ADVANCE(1274);
      END_STATE();
    case 1500:
      if (lookahead == 'n') ADVANCE(1044);
      END_STATE();
    case 1501:
      if (lookahead == 'n') ADVANCE(1786);
      END_STATE();
    case 1502:
      if (lookahead == 'n') ADVANCE(1712);
      END_STATE();
    case 1503:
      if (lookahead == 'n') ADVANCE(921);
      END_STATE();
    case 1504:
      if (lookahead == 'n') ADVANCE(1045);
      END_STATE();
    case 1505:
      if (lookahead == 'n') ADVANCE(1775);
      END_STATE();
    case 1506:
      if (lookahead == 'n') ADVANCE(1211);
      END_STATE();
    case 1507:
      if (lookahead == 'n') ADVANCE(1353);
      END_STATE();
    case 1508:
      if (lookahead == 'n') ADVANCE(1736);
      END_STATE();
    case 1509:
      if (lookahead == 'n') ADVANCE(1738);
      END_STATE();
    case 1510:
      if (lookahead == 'n') ADVANCE(1363);
      END_STATE();
    case 1511:
      if (lookahead == 'n') ADVANCE(1242);
      END_STATE();
    case 1512:
      if (lookahead == 'o') ADVANCE(2063);
      END_STATE();
    case 1513:
      if (lookahead == 'o') ADVANCE(950);
      END_STATE();
    case 1514:
      if (lookahead == 'o') ADVANCE(1640);
      END_STATE();
    case 1515:
      if (lookahead == 'o') ADVANCE(1715);
      END_STATE();
    case 1516:
      if (lookahead == 'o') ADVANCE(1854);
      END_STATE();
    case 1517:
      if (lookahead == 'o') ADVANCE(1275);
      END_STATE();
    case 1518:
      if (lookahead == 'o') ADVANCE(1827);
      END_STATE();
    case 1519:
      if (lookahead == 'o') ADVANCE(1452);
      END_STATE();
    case 1520:
      if (lookahead == 'o') ADVANCE(1876);
      END_STATE();
    case 1521:
      if (lookahead == 'o') ADVANCE(1833);
      END_STATE();
    case 1522:
      if (lookahead == 'o') ADVANCE(1852);
      END_STATE();
    case 1523:
      if (lookahead == 'o') ADVANCE(1843);
      END_STATE();
    case 1524:
      if (lookahead == 'o') ADVANCE(1626);
      END_STATE();
    case 1525:
      if (lookahead == 'o') ADVANCE(1248);
      END_STATE();
    case 1526:
      if (lookahead == 'o') ADVANCE(1393);
      END_STATE();
    case 1527:
      if (lookahead == 'o') ADVANCE(1849);
      END_STATE();
    case 1528:
      if (lookahead == 'o') ADVANCE(1478);
      END_STATE();
    case 1529:
      if (lookahead == 'o') ADVANCE(1850);
      END_STATE();
    case 1530:
      if (lookahead == 'o') ADVANCE(1463);
      END_STATE();
    case 1531:
      if (lookahead == 'o') ADVANCE(1779);
      END_STATE();
    case 1532:
      if (lookahead == 'o') ADVANCE(1628);
      END_STATE();
    case 1533:
      if (lookahead == 'o') ADVANCE(1426);
      END_STATE();
    case 1534:
      if (lookahead == 'o') ADVANCE(1481);
      END_STATE();
    case 1535:
      if (lookahead == 'o') ADVANCE(1581);
      END_STATE();
    case 1536:
      if (lookahead == 'o') ADVANCE(1464);
      END_STATE();
    case 1537:
      if (lookahead == 'o') ADVANCE(1465);
      END_STATE();
    case 1538:
      if (lookahead == 'o') ADVANCE(1668);
      END_STATE();
    case 1539:
      if (lookahead == 'o') ADVANCE(1535);
      END_STATE();
    case 1540:
      if (lookahead == 'o') ADVANCE(1466);
      END_STATE();
    case 1541:
      if (lookahead == 'o') ADVANCE(1467);
      END_STATE();
    case 1542:
      if (lookahead == 'o') ADVANCE(1567);
      END_STATE();
    case 1543:
      if (lookahead == 'o') ADVANCE(1468);
      END_STATE();
    case 1544:
      if (lookahead == 'o') ADVANCE(1670);
      END_STATE();
    case 1545:
      if (lookahead == 'o') ADVANCE(1469);
      END_STATE();
    case 1546:
      if (lookahead == 'o') ADVANCE(1631);
      END_STATE();
    case 1547:
      if (lookahead == 'o') ADVANCE(1470);
      END_STATE();
    case 1548:
      if (lookahead == 'o') ADVANCE(974);
      END_STATE();
    case 1549:
      if (lookahead == 'o') ADVANCE(1471);
      END_STATE();
    case 1550:
      if (lookahead == 'o') ADVANCE(1473);
      END_STATE();
    case 1551:
      if (lookahead == 'o') ADVANCE(949);
      END_STATE();
    case 1552:
      if (lookahead == 'o') ADVANCE(1493);
      END_STATE();
    case 1553:
      if (lookahead == 'o') ADVANCE(1503);
      END_STATE();
    case 1554:
      if (lookahead == 'o') ADVANCE(1633);
      END_STATE();
    case 1555:
      if (lookahead == 'o') ADVANCE(1634);
      END_STATE();
    case 1556:
      if (lookahead == 'o') ADVANCE(1664);
      END_STATE();
    case 1557:
      if (lookahead == 'o') ADVANCE(1650);
      END_STATE();
    case 1558:
      if (lookahead == 'o') ADVANCE(1639);
      END_STATE();
    case 1559:
      if (lookahead == 'o') ADVANCE(1667);
      END_STATE();
    case 1560:
      if (lookahead == 'o') ADVANCE(1039);
      END_STATE();
    case 1561:
      if (lookahead == 'o') ADVANCE(1075);
      END_STATE();
    case 1562:
      if (lookahead == 'o') ADVANCE(1489);
      END_STATE();
    case 1563:
      if (lookahead == 'o') ADVANCE(1030);
      END_STATE();
    case 1564:
      if (lookahead == 'o') ADVANCE(1494);
      END_STATE();
    case 1565:
      if (lookahead == 'o') ADVANCE(1495);
      END_STATE();
    case 1566:
      if (lookahead == 'o') ADVANCE(1428);
      if (lookahead == 'u') ADVANCE(1388);
      END_STATE();
    case 1567:
      if (lookahead == 'o') ADVANCE(1613);
      END_STATE();
    case 1568:
      if (lookahead == 'o') ADVANCE(1830);
      END_STATE();
    case 1569:
      if (lookahead == 'o') ADVANCE(1420);
      END_STATE();
    case 1570:
      if (lookahead == 'o') ADVANCE(1420);
      if (lookahead == 'u') ADVANCE(1385);
      END_STATE();
    case 1571:
      if (lookahead == 'o') ADVANCE(1505);
      END_STATE();
    case 1572:
      if (lookahead == 'o') ADVANCE(1831);
      END_STATE();
    case 1573:
      if (lookahead == 'o') ADVANCE(1427);
      if (lookahead == 'u') ADVANCE(1385);
      END_STATE();
    case 1574:
      if (lookahead == 'o') ADVANCE(1429);
      END_STATE();
    case 1575:
      if (lookahead == 'o') ADVANCE(1678);
      END_STATE();
    case 1576:
      if (lookahead == 'o') ADVANCE(1855);
      END_STATE();
    case 1577:
      if (lookahead == 'o') ADVANCE(1877);
      END_STATE();
    case 1578:
      if (lookahead == 'o') ADVANCE(1878);
      END_STATE();
    case 1579:
      if (lookahead == 'o') ADVANCE(1879);
      END_STATE();
    case 1580:
      if (lookahead == 'o') ADVANCE(1817);
      END_STATE();
    case 1581:
      if (lookahead == 'p') ADVANCE(2088);
      END_STATE();
    case 1582:
      if (lookahead == 'p') ADVANCE(460);
      END_STATE();
    case 1583:
      if (lookahead == 'p') ADVANCE(1612);
      END_STATE();
    case 1584:
      if (lookahead == 'p') ADVANCE(1255);
      END_STATE();
    case 1585:
      if (lookahead == 'p') ADVANCE(1165);
      END_STATE();
    case 1586:
      if (lookahead == 'p') ADVANCE(989);
      END_STATE();
    case 1587:
      if (lookahead == 'p') ADVANCE(1103);
      END_STATE();
    case 1588:
      if (lookahead == 'p') ADVANCE(1703);
      END_STATE();
    case 1589:
      if (lookahead == 'p') ADVANCE(1184);
      END_STATE();
    case 1590:
      if (lookahead == 'p') ADVANCE(1112);
      END_STATE();
    case 1591:
      if (lookahead == 'p') ADVANCE(1114);
      END_STATE();
    case 1592:
      if (lookahead == 'p') ADVANCE(1188);
      END_STATE();
    case 1593:
      if (lookahead == 'p') ADVANCE(1118);
      END_STATE();
    case 1594:
      if (lookahead == 'p') ADVANCE(1119);
      END_STATE();
    case 1595:
      if (lookahead == 'p') ADVANCE(1120);
      END_STATE();
    case 1596:
      if (lookahead == 'p') ADVANCE(1121);
      END_STATE();
    case 1597:
      if (lookahead == 'p') ADVANCE(1124);
      END_STATE();
    case 1598:
      if (lookahead == 'p') ADVANCE(1173);
      END_STATE();
    case 1599:
      if (lookahead == 'p') ADVANCE(1127);
      END_STATE();
    case 1600:
      if (lookahead == 'p') ADVANCE(1128);
      END_STATE();
    case 1601:
      if (lookahead == 'p') ADVANCE(1131);
      END_STATE();
    case 1602:
      if (lookahead == 'p') ADVANCE(1132);
      END_STATE();
    case 1603:
      if (lookahead == 'p') ADVANCE(1133);
      END_STATE();
    case 1604:
      if (lookahead == 'p') ADVANCE(1134);
      END_STATE();
    case 1605:
      if (lookahead == 'p') ADVANCE(1136);
      END_STATE();
    case 1606:
      if (lookahead == 'p') ADVANCE(1138);
      END_STATE();
    case 1607:
      if (lookahead == 'p') ADVANCE(1139);
      END_STATE();
    case 1608:
      if (lookahead == 'p') ADVANCE(1140);
      END_STATE();
    case 1609:
      if (lookahead == 'p') ADVANCE(1194);
      END_STATE();
    case 1610:
      if (lookahead == 'p') ADVANCE(1144);
      END_STATE();
    case 1611:
      if (lookahead == 'p') ADVANCE(1298);
      END_STATE();
    case 1612:
      if (lookahead == 'p') ADVANCE(1538);
      END_STATE();
    case 1613:
      if (lookahead == 'p') ADVANCE(1309);
      END_STATE();
    case 1614:
      if (lookahead == 'p') ADVANCE(976);
      END_STATE();
    case 1615:
      if (lookahead == 'p') ADVANCE(1794);
      END_STATE();
    case 1616:
      if (lookahead == 'p') ADVANCE(1193);
      END_STATE();
    case 1617:
      if (lookahead == 'p') ADVANCE(990);
      END_STATE();
    case 1618:
      if (lookahead == 'p') ADVANCE(1691);
      END_STATE();
    case 1619:
      if (lookahead == 'p') ADVANCE(1259);
      END_STATE();
    case 1620:
      if (lookahead == 'p') ADVANCE(1227);
      END_STATE();
    case 1621:
      if (lookahead == 'p') ADVANCE(1001);
      END_STATE();
    case 1622:
      if (lookahead == 'p') ADVANCE(1262);
      END_STATE();
    case 1623:
      if (lookahead == 'p') ADVANCE(1692);
      END_STATE();
    case 1624:
      if (lookahead == 'p') ADVANCE(1693);
      END_STATE();
    case 1625:
      if (lookahead == 'r') ADVANCE(1077);
      END_STATE();
    case 1626:
      if (lookahead == 'r') ADVANCE(2062);
      END_STATE();
    case 1627:
      if (lookahead == 'r') ADVANCE(887);
      END_STATE();
    case 1628:
      if (lookahead == 'r') ADVANCE(2131);
      END_STATE();
    case 1629:
      if (lookahead == 'r') ADVANCE(2100);
      END_STATE();
    case 1630:
      if (lookahead == 'r') ADVANCE(2115);
      END_STATE();
    case 1631:
      if (lookahead == 'r') ADVANCE(2084);
      END_STATE();
    case 1632:
      if (lookahead == 'r') ADVANCE(2098);
      END_STATE();
    case 1633:
      if (lookahead == 'r') ADVANCE(2061);
      END_STATE();
    case 1634:
      if (lookahead == 'r') ADVANCE(2130);
      END_STATE();
    case 1635:
      if (lookahead == 'r') ADVANCE(2099);
      END_STATE();
    case 1636:
      if (lookahead == 'r') ADVANCE(886);
      END_STATE();
    case 1637:
      if (lookahead == 'r') ADVANCE(1526);
      END_STATE();
    case 1638:
      if (lookahead == 'r') ADVANCE(1422);
      END_STATE();
    case 1639:
      if (lookahead == 'r') ADVANCE(1884);
      END_STATE();
    case 1640:
      if (lookahead == 'r') ADVANCE(1294);
      END_STATE();
    case 1641:
      if (lookahead == 'r') ADVANCE(1518);
      END_STATE();
    case 1642:
      if (lookahead == 'r') ADVANCE(1252);
      END_STATE();
    case 1643:
      if (lookahead == 'r') ADVANCE(922);
      END_STATE();
    case 1644:
      if (lookahead == 'r') ADVANCE(913);
      END_STATE();
    case 1645:
      if (lookahead == 'r') ADVANCE(968);
      END_STATE();
    case 1646:
      if (lookahead == 'r') ADVANCE(1517);
      END_STATE();
    case 1647:
      if (lookahead == 'r') ADVANCE(1805);
      END_STATE();
    case 1648:
      if (lookahead == 'r') ADVANCE(1108);
      END_STATE();
    case 1649:
      if (lookahead == 'r') ADVANCE(1175);
      END_STATE();
    case 1650:
      if (lookahead == 'r') ADVANCE(1706);
      END_STATE();
    case 1651:
      if (lookahead == 'r') ADVANCE(1178);
      END_STATE();
    case 1652:
      if (lookahead == 'r') ADVANCE(1110);
      END_STATE();
    case 1653:
      if (lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 1654:
      if (lookahead == 'r') ADVANCE(1187);
      END_STATE();
    case 1655:
      if (lookahead == 'r') ADVANCE(1141);
      END_STATE();
    case 1656:
      if (lookahead == 'r') ADVANCE(1156);
      END_STATE();
    case 1657:
      if (lookahead == 'r') ADVANCE(1145);
      END_STATE();
    case 1658:
      if (lookahead == 'r') ADVANCE(1149);
      END_STATE();
    case 1659:
      if (lookahead == 'r') ADVANCE(1151);
      END_STATE();
    case 1660:
      if (lookahead == 'r') ADVANCE(1154);
      END_STATE();
    case 1661:
      if (lookahead == 'r') ADVANCE(1506);
      END_STATE();
    case 1662:
      if (lookahead == 'r') ADVANCE(1305);
      END_STATE();
    case 1663:
      if (lookahead == 'r') ADVANCE(1716);
      END_STATE();
    case 1664:
      if (lookahead == 'r') ADVANCE(919);
      END_STATE();
    case 1665:
      if (lookahead == 'r') ADVANCE(1321);
      END_STATE();
    case 1666:
      if (lookahead == 'r') ADVANCE(1774);
      END_STATE();
    case 1667:
      if (lookahead == 'r') ADVANCE(1307);
      END_STATE();
    case 1668:
      if (lookahead == 'r') ADVANCE(1782);
      END_STATE();
    case 1669:
      if (lookahead == 'r') ADVANCE(1529);
      END_STATE();
    case 1670:
      if (lookahead == 'r') ADVANCE(1447);
      END_STATE();
    case 1671:
      if (lookahead == 'r') ADVANCE(1440);
      END_STATE();
    case 1672:
      if (lookahead == 'r') ADVANCE(994);
      END_STATE();
    case 1673:
      if (lookahead == 'r') ADVANCE(981);
      END_STATE();
    case 1674:
      if (lookahead == 'r') ADVANCE(1568);
      END_STATE();
    case 1675:
      if (lookahead == 'r') ADVANCE(1216);
      END_STATE();
    case 1676:
      if (lookahead == 'r') ADVANCE(1734);
      END_STATE();
    case 1677:
      if (lookahead == 'r') ADVANCE(985);
      END_STATE();
    case 1678:
      if (lookahead == 'r') ADVANCE(1080);
      END_STATE();
    case 1679:
      if (lookahead == 'r') ADVANCE(1218);
      END_STATE();
    case 1680:
      if (lookahead == 'r') ADVANCE(988);
      END_STATE();
    case 1681:
      if (lookahead == 'r') ADVANCE(1083);
      END_STATE();
    case 1682:
      if (lookahead == 'r') ADVANCE(1806);
      END_STATE();
    case 1683:
      if (lookahead == 'r') ADVANCE(1224);
      END_STATE();
    case 1684:
      if (lookahead == 'r') ADVANCE(1225);
      END_STATE();
    case 1685:
      if (lookahead == 'r') ADVANCE(1229);
      END_STATE();
    case 1686:
      if (lookahead == 'r') ADVANCE(1231);
      END_STATE();
    case 1687:
      if (lookahead == 'r') ADVANCE(929);
      END_STATE();
    case 1688:
      if (lookahead == 'r') ADVANCE(1814);
      END_STATE();
    case 1689:
      if (lookahead == 'r') ADVANCE(1010);
      END_STATE();
    case 1690:
      if (lookahead == 'r') ADVANCE(1815);
      END_STATE();
    case 1691:
      if (lookahead == 'r') ADVANCE(1356);
      END_STATE();
    case 1692:
      if (lookahead == 'r') ADVANCE(1359);
      END_STATE();
    case 1693:
      if (lookahead == 'r') ADVANCE(1360);
      END_STATE();
    case 1694:
      if (lookahead == 's') ADVANCE(2160);
      END_STATE();
    case 1695:
      if (lookahead == 's') ADVANCE(1988);
      END_STATE();
    case 1696:
      if (lookahead == 's') ADVANCE(1949);
      END_STATE();
    case 1697:
      if (lookahead == 's') ADVANCE(2022);
      END_STATE();
    case 1698:
      if (lookahead == 's') ADVANCE(1948);
      END_STATE();
    case 1699:
      if (lookahead == 's') ADVANCE(1947);
      END_STATE();
    case 1700:
      if (lookahead == 's') ADVANCE(2011);
      END_STATE();
    case 1701:
      if (lookahead == 's') ADVANCE(2094);
      END_STATE();
    case 1702:
      if (lookahead == 's') ADVANCE(2024);
      END_STATE();
    case 1703:
      if (lookahead == 's') ADVANCE(2085);
      END_STATE();
    case 1704:
      if (lookahead == 's') ADVANCE(1944);
      END_STATE();
    case 1705:
      if (lookahead == 's') ADVANCE(2047);
      END_STATE();
    case 1706:
      if (lookahead == 's') ADVANCE(1955);
      END_STATE();
    case 1707:
      if (lookahead == 's') ADVANCE(1371);
      END_STATE();
    case 1708:
      if (lookahead == 's') ADVANCE(1371);
      if (lookahead == 'x') ADVANCE(878);
      END_STATE();
    case 1709:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 1710:
      if (lookahead == 's') ADVANCE(1288);
      END_STATE();
    case 1711:
      if (lookahead == 's') ADVANCE(1373);
      END_STATE();
    case 1712:
      if (lookahead == 's') ADVANCE(1769);
      END_STATE();
    case 1713:
      if (lookahead == 's') ADVANCE(1277);
      END_STATE();
    case 1714:
      if (lookahead == 's') ADVANCE(1586);
      END_STATE();
    case 1715:
      if (lookahead == 's') ADVANCE(1302);
      END_STATE();
    case 1716:
      if (lookahead == 's') ADVANCE(1319);
      END_STATE();
    case 1717:
      if (lookahead == 's') ADVANCE(1287);
      END_STATE();
    case 1718:
      if (lookahead == 's') ADVANCE(928);
      END_STATE();
    case 1719:
      if (lookahead == 's') ADVANCE(1741);
      END_STATE();
    case 1720:
      if (lookahead == 's') ADVANCE(1317);
      END_STATE();
    case 1721:
      if (lookahead == 's') ADVANCE(1104);
      END_STATE();
    case 1722:
      if (lookahead == 's') ADVANCE(1221);
      END_STATE();
    case 1723:
      if (lookahead == 's') ADVANCE(1190);
      END_STATE();
    case 1724:
      if (lookahead == 's') ADVANCE(1789);
      END_STATE();
    case 1725:
      if (lookahead == 's') ADVANCE(1196);
      END_STATE();
    case 1726:
      if (lookahead == 's') ADVANCE(1135);
      END_STATE();
    case 1727:
      if (lookahead == 's') ADVANCE(1199);
      END_STATE();
    case 1728:
      if (lookahead == 's') ADVANCE(1773);
      END_STATE();
    case 1729:
      if (lookahead == 's') ADVANCE(1532);
      END_STATE();
    case 1730:
      if (lookahead == 's') ADVANCE(1777);
      END_STATE();
    case 1731:
      if (lookahead == 's') ADVANCE(1555);
      END_STATE();
    case 1732:
      if (lookahead == 's') ADVANCE(1556);
      END_STATE();
    case 1733:
      if (lookahead == 's') ADVANCE(1572);
      END_STATE();
    case 1734:
      if (lookahead == 's') ADVANCE(1333);
      END_STATE();
    case 1735:
      if (lookahead == 's') ADVANCE(1344);
      END_STATE();
    case 1736:
      if (lookahead == 's') ADVANCE(1617);
      END_STATE();
    case 1737:
      if (lookahead == 's') ADVANCE(1735);
      END_STATE();
    case 1738:
      if (lookahead == 's') ADVANCE(1621);
      END_STATE();
    case 1739:
      if (lookahead == 's') ADVANCE(1374);
      END_STATE();
    case 1740:
      if (lookahead == 's') ADVANCE(1007);
      END_STATE();
    case 1741:
      if (lookahead == 's') ADVANCE(1018);
      END_STATE();
    case 1742:
      if (lookahead == 's') ADVANCE(1822);
      END_STATE();
    case 1743:
      if (lookahead == 's') ADVANCE(1823);
      END_STATE();
    case 1744:
      if (lookahead == 't') ADVANCE(868);
      END_STATE();
    case 1745:
      if (lookahead == 't') ADVANCE(2064);
      END_STATE();
    case 1746:
      if (lookahead == 't') ADVANCE(1832);
      END_STATE();
    case 1747:
      if (lookahead == 't') ADVANCE(2058);
      END_STATE();
    case 1748:
      if (lookahead == 't') ADVANCE(1176);
      END_STATE();
    case 1749:
      if (lookahead == 't') ADVANCE(2117);
      END_STATE();
    case 1750:
      if (lookahead == 't') ADVANCE(2066);
      END_STATE();
    case 1751:
      if (lookahead == 't') ADVANCE(2133);
      END_STATE();
    case 1752:
      if (lookahead == 't') ADVANCE(1957);
      END_STATE();
    case 1753:
      if (lookahead == 't') ADVANCE(2109);
      END_STATE();
    case 1754:
      if (lookahead == 't') ADVANCE(2013);
      END_STATE();
    case 1755:
      if (lookahead == 't') ADVANCE(1954);
      END_STATE();
    case 1756:
      if (lookahead == 't') ADVANCE(2050);
      END_STATE();
    case 1757:
      if (lookahead == 't') ADVANCE(2051);
      END_STATE();
    case 1758:
      if (lookahead == 't') ADVANCE(2037);
      END_STATE();
    case 1759:
      if (lookahead == 't') ADVANCE(870);
      END_STATE();
    case 1760:
      if (lookahead == 't') ADVANCE(2059);
      END_STATE();
    case 1761:
      if (lookahead == 't') ADVANCE(883);
      END_STATE();
    case 1762:
      if (lookahead == 't') ADVANCE(1956);
      END_STATE();
    case 1763:
      if (lookahead == 't') ADVANCE(2116);
      END_STATE();
    case 1764:
      if (lookahead == 't') ADVANCE(891);
      END_STATE();
    case 1765:
      if (lookahead == 't') ADVANCE(1276);
      END_STATE();
    case 1766:
      if (lookahead == 't') ADVANCE(1276);
      if (lookahead == 'u') ADVANCE(1722);
      END_STATE();
    case 1767:
      if (lookahead == 't') ADVANCE(1881);
      END_STATE();
    case 1768:
      if (lookahead == 't') ADVANCE(1648);
      END_STATE();
    case 1769:
      if (lookahead == 't') ADVANCE(983);
      END_STATE();
    case 1770:
      if (lookahead == 't') ADVANCE(1278);
      END_STATE();
    case 1771:
      if (lookahead == 't') ADVANCE(1279);
      END_STATE();
    case 1772:
      if (lookahead == 't') ADVANCE(1280);
      END_STATE();
    case 1773:
      if (lookahead == 't') ADVANCE(1645);
      END_STATE();
    case 1774:
      if (lookahead == 't') ADVANCE(1301);
      END_STATE();
    case 1775:
      if (lookahead == 't') ADVANCE(963);
      END_STATE();
    case 1776:
      if (lookahead == 't') ADVANCE(1787);
      END_STATE();
    case 1777:
      if (lookahead == 't') ADVANCE(995);
      END_STATE();
    case 1778:
      if (lookahead == 't') ADVANCE(1698);
      END_STATE();
    case 1779:
      if (lookahead == 't') ADVANCE(1168);
      END_STATE();
    case 1780:
      if (lookahead == 't') ADVANCE(1233);
      END_STATE();
    case 1781:
      if (lookahead == 't') ADVANCE(1709);
      END_STATE();
    case 1782:
      if (lookahead == 't') ADVANCE(1180);
      END_STATE();
    case 1783:
      if (lookahead == 't') ADVANCE(1189);
      END_STATE();
    case 1784:
      if (lookahead == 't') ADVANCE(1439);
      END_STATE();
    case 1785:
      if (lookahead == 't') ADVANCE(1207);
      END_STATE();
    case 1786:
      if (lookahead == 't') ADVANCE(999);
      END_STATE();
    case 1787:
      if (lookahead == 't') ADVANCE(1306);
      END_STATE();
    case 1788:
      if (lookahead == 't') ADVANCE(1201);
      END_STATE();
    case 1789:
      if (lookahead == 't') ADVANCE(1558);
      END_STATE();
    case 1790:
      if (lookahead == 't') ADVANCE(1835);
      END_STATE();
    case 1791:
      if (lookahead == 't') ADVANCE(2060);
      END_STATE();
    case 1792:
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 1793:
      if (lookahead == 't') ADVANCE(1325);
      END_STATE();
    case 1794:
      if (lookahead == 't') ADVANCE(1210);
      END_STATE();
    case 1795:
      if (lookahead == 't') ADVANCE(1836);
      END_STATE();
    case 1796:
      if (lookahead == 't') ADVANCE(1329);
      END_STATE();
    case 1797:
      if (lookahead == 't') ADVANCE(1837);
      END_STATE();
    case 1798:
      if (lookahead == 't') ADVANCE(1331);
      END_STATE();
    case 1799:
      if (lookahead == 't') ADVANCE(1839);
      END_STATE();
    case 1800:
      if (lookahead == 't') ADVANCE(1334);
      END_STATE();
    case 1801:
      if (lookahead == 't') ADVANCE(1336);
      END_STATE();
    case 1802:
      if (lookahead == 't') ADVANCE(1338);
      END_STATE();
    case 1803:
      if (lookahead == 't') ADVANCE(1342);
      END_STATE();
    case 1804:
      if (lookahead == 't') ADVANCE(1346);
      END_STATE();
    case 1805:
      if (lookahead == 't') ADVANCE(1899);
      END_STATE();
    case 1806:
      if (lookahead == 't') ADVANCE(1902);
      END_STATE();
    case 1807:
      if (lookahead == 't') ADVANCE(875);
      END_STATE();
    case 1808:
      if (lookahead == 't') ADVANCE(1456);
      END_STATE();
    case 1809:
      if (lookahead == 't') ADVANCE(1840);
      END_STATE();
    case 1810:
      if (lookahead == 't') ADVANCE(1457);
      END_STATE();
    case 1811:
      if (lookahead == 't') ADVANCE(1841);
      END_STATE();
    case 1812:
      if (lookahead == 't') ADVANCE(894);
      END_STATE();
    case 1813:
      if (lookahead == 't') ADVANCE(1842);
      END_STATE();
    case 1814:
      if (lookahead == 't') ADVANCE(901);
      END_STATE();
    case 1815:
      if (lookahead == 't') ADVANCE(902);
      END_STATE();
    case 1816:
      if (lookahead == 't') ADVANCE(1237);
      END_STATE();
    case 1817:
      if (lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 1818:
      if (lookahead == 't') ADVANCE(1238);
      END_STATE();
    case 1819:
      if (lookahead == 't') ADVANCE(1239);
      END_STATE();
    case 1820:
      if (lookahead == 't') ADVANCE(1240);
      END_STATE();
    case 1821:
      if (lookahead == 't') ADVANCE(1241);
      END_STATE();
    case 1822:
      if (lookahead == 't') ADVANCE(869);
      END_STATE();
    case 1823:
      if (lookahead == 't') ADVANCE(1689);
      END_STATE();
    case 1824:
      if (lookahead == 't') ADVANCE(871);
      END_STATE();
    case 1825:
      if (lookahead == 'u') ADVANCE(1292);
      END_STATE();
    case 1826:
      if (lookahead == 'u') ADVANCE(1385);
      END_STATE();
    case 1827:
      if (lookahead == 'u') ADVANCE(1484);
      END_STATE();
    case 1828:
      if (lookahead == 'u') ADVANCE(1423);
      END_STATE();
    case 1829:
      if (lookahead == 'u') ADVANCE(1722);
      END_STATE();
    case 1830:
      if (lookahead == 'u') ADVANCE(1485);
      END_STATE();
    case 1831:
      if (lookahead == 'u') ADVANCE(1487);
      END_STATE();
    case 1832:
      if (lookahead == 'u') ADVANCE(1652);
      END_STATE();
    case 1833:
      if (lookahead == 'u') ADVANCE(1490);
      END_STATE();
    case 1834:
      if (lookahead == 'u') ADVANCE(1726);
      END_STATE();
    case 1835:
      if (lookahead == 'u') ADVANCE(1657);
      END_STATE();
    case 1836:
      if (lookahead == 'u') ADVANCE(1659);
      END_STATE();
    case 1837:
      if (lookahead == 'u') ADVANCE(1660);
      END_STATE();
    case 1838:
      if (lookahead == 'u') ADVANCE(1425);
      END_STATE();
    case 1839:
      if (lookahead == 'u') ADVANCE(1683);
      END_STATE();
    case 1840:
      if (lookahead == 'u') ADVANCE(1684);
      END_STATE();
    case 1841:
      if (lookahead == 'u') ADVANCE(1685);
      END_STATE();
    case 1842:
      if (lookahead == 'u') ADVANCE(1686);
      END_STATE();
    case 1843:
      if (lookahead == 'u') ADVANCE(1818);
      END_STATE();
    case 1844:
      if (lookahead == 'v') ADVANCE(1174);
      END_STATE();
    case 1845:
      if (lookahead == 'v') ADVANCE(1109);
      END_STATE();
    case 1846:
      if (lookahead == 'v') ADVANCE(1166);
      END_STATE();
    case 1847:
      if (lookahead == 'v') ADVANCE(1220);
      END_STATE();
    case 1848:
      if (lookahead == 'v') ADVANCE(1226);
      END_STATE();
    case 1849:
      if (lookahead == 'w') ADVANCE(2087);
      END_STATE();
    case 1850:
      if (lookahead == 'w') ADVANCE(2023);
      END_STATE();
    case 1851:
      if (lookahead == 'w') ADVANCE(1512);
      END_STATE();
    case 1852:
      if (lookahead == 'w') ADVANCE(1702);
      END_STATE();
    case 1853:
      if (lookahead == 'w') ADVANCE(1320);
      END_STATE();
    case 1854:
      if (lookahead == 'w') ADVANCE(893);
      END_STATE();
    case 1855:
      if (lookahead == 'w') ADVANCE(896);
      END_STATE();
    case 1856:
      if (lookahead == 'w') ADVANCE(1013);
      END_STATE();
    case 1857:
      if (lookahead == 'x') ADVANCE(878);
      END_STATE();
    case 1858:
      if (lookahead == 'x') ADVANCE(2095);
      END_STATE();
    case 1859:
      if (lookahead == 'x') ADVANCE(1446);
      END_STATE();
    case 1860:
      if (lookahead == 'x') ADVANCE(460);
      END_STATE();
    case 1861:
      if (lookahead == 'x') ADVANCE(1747);
      END_STATE();
    case 1862:
      if (lookahead == 'x') ADVANCE(1167);
      END_STATE();
    case 1863:
      if (lookahead == 'x') ADVANCE(1755);
      END_STATE();
    case 1864:
      if (lookahead == 'x') ADVANCE(1759);
      END_STATE();
    case 1865:
      if (lookahead == 'x') ADVANCE(1760);
      END_STATE();
    case 1866:
      if (lookahead == 'x') ADVANCE(1761);
      END_STATE();
    case 1867:
      if (lookahead == 'x') ADVANCE(1790);
      END_STATE();
    case 1868:
      if (lookahead == 'x') ADVANCE(1791);
      END_STATE();
    case 1869:
      if (lookahead == 'x') ADVANCE(1792);
      END_STATE();
    case 1870:
      if (lookahead == 'x') ADVANCE(1795);
      END_STATE();
    case 1871:
      if (lookahead == 'x') ADVANCE(1797);
      END_STATE();
    case 1872:
      if (lookahead == 'x') ADVANCE(1799);
      END_STATE();
    case 1873:
      if (lookahead == 'x') ADVANCE(1809);
      END_STATE();
    case 1874:
      if (lookahead == 'x') ADVANCE(1811);
      END_STATE();
    case 1875:
      if (lookahead == 'x') ADVANCE(1813);
      END_STATE();
    case 1876:
      if (lookahead == 'x') ADVANCE(898);
      END_STATE();
    case 1877:
      if (lookahead == 'x') ADVANCE(899);
      END_STATE();
    case 1878:
      if (lookahead == 'x') ADVANCE(900);
      END_STATE();
    case 1879:
      if (lookahead == 'x') ADVANCE(906);
      END_STATE();
    case 1880:
      if (lookahead == 'x') ADVANCE(1824);
      END_STATE();
    case 1881:
      if (lookahead == 'y') ADVANCE(2126);
      END_STATE();
    case 1882:
      if (lookahead == 'y') ADVANCE(2036);
      END_STATE();
    case 1883:
      if (lookahead == 'y') ADVANCE(915);
      END_STATE();
    case 1884:
      if (lookahead == 'y') ADVANCE(460);
      END_STATE();
    case 1885:
      if (lookahead == 'y') ADVANCE(926);
      END_STATE();
    case 1886:
      if (lookahead == 'y') ADVANCE(910);
      END_STATE();
    case 1887:
      if (lookahead == 'y') ADVANCE(1728);
      END_STATE();
    case 1888:
      if (lookahead == 'y') ADVANCE(1589);
      END_STATE();
    case 1889:
      if (lookahead == 'y') ADVANCE(1590);
      END_STATE();
    case 1890:
      if (lookahead == 'y') ADVANCE(1591);
      END_STATE();
    case 1891:
      if (lookahead == 'y') ADVANCE(1592);
      END_STATE();
    case 1892:
      if (lookahead == 'y') ADVANCE(1593);
      END_STATE();
    case 1893:
      if (lookahead == 'y') ADVANCE(1594);
      END_STATE();
    case 1894:
      if (lookahead == 'y') ADVANCE(1595);
      END_STATE();
    case 1895:
      if (lookahead == 'y') ADVANCE(1596);
      END_STATE();
    case 1896:
      if (lookahead == 'y') ADVANCE(1597);
      END_STATE();
    case 1897:
      if (lookahead == 'y') ADVANCE(1599);
      END_STATE();
    case 1898:
      if (lookahead == 'y') ADVANCE(1600);
      END_STATE();
    case 1899:
      if (lookahead == 'y') ADVANCE(1601);
      END_STATE();
    case 1900:
      if (lookahead == 'y') ADVANCE(1602);
      END_STATE();
    case 1901:
      if (lookahead == 'y') ADVANCE(1603);
      END_STATE();
    case 1902:
      if (lookahead == 'y') ADVANCE(1604);
      END_STATE();
    case 1903:
      if (lookahead == 'y') ADVANCE(1605);
      END_STATE();
    case 1904:
      if (lookahead == 'y') ADVANCE(1606);
      END_STATE();
    case 1905:
      if (lookahead == 'y') ADVANCE(1607);
      END_STATE();
    case 1906:
      if (lookahead == 'y') ADVANCE(1608);
      END_STATE();
    case 1907:
      if (lookahead == 'y') ADVANCE(1609);
      END_STATE();
    case 1908:
      if (lookahead == 'y') ADVANCE(923);
      END_STATE();
    case 1909:
      if (lookahead == 'y') ADVANCE(1743);
      END_STATE();
    case 1910:
      if (lookahead == 'z') ADVANCE(1571);
      END_STATE();
    case 1911:
      if (lookahead == 'z') ADVANCE(1101);
      END_STATE();
    case 1912:
      if (lookahead == 'z') ADVANCE(1115);
      END_STATE();
    case 1913:
      if (lookahead == 'z') ADVANCE(1116);
      END_STATE();
    case 1914:
      if (lookahead == 'z') ADVANCE(1908);
      END_STATE();
    case 1915:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1332);
      END_STATE();
    case 1916:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1348);
      END_STATE();
    case 1917:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1349);
      END_STATE();
    case 1918:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1350);
      END_STATE();
    case 1919:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2140);
      END_STATE();
    case 1920:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2141);
      END_STATE();
    case 1921:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2147);
      END_STATE();
    case 1922:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 1923:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2157);
      END_STATE();
    case 1924:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2148);
      END_STATE();
    case 1925:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2143);
      END_STATE();
    case 1926:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2144);
      END_STATE();
    case 1927:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2156);
      END_STATE();
    case 1928:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2155);
      END_STATE();
    case 1929:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1927);
      END_STATE();
    case 1930:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1928);
      END_STATE();
    case 1931:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1929);
      END_STATE();
    case 1932:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1930);
      END_STATE();
    case 1933:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1931);
      END_STATE();
    case 1934:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(858);
      END_STATE();
    case 1935:
      if (eof) ADVANCE(1943);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 1936:
      if (eof) ADVANCE(1943);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(1935)
      END_STATE();
    case 1937:
      if (eof) ADVANCE(1943);
      if (lookahead == '\n') SKIP(1941)
      END_STATE();
    case 1938:
      if (eof) ADVANCE(1943);
      if (lookahead == '\n') SKIP(1941)
      if (lookahead == '\r') SKIP(1937)
      END_STATE();
    case 1939:
      if (eof) ADVANCE(1943);
      if (lookahead == '\n') SKIP(1942)
      END_STATE();
    case 1940:
      if (eof) ADVANCE(1943);
      if (lookahead == '\n') SKIP(1942)
      if (lookahead == '\r') SKIP(1939)
      END_STATE();
    case 1941:
      if (eof) ADVANCE(1943);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == '\\') SKIP(1938)
      if (lookahead == 'a') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(930);
      if (lookahead == 'c') ADVANCE(1433);
      if (lookahead == 'd') ADVANCE(1088);
      if (lookahead == 'e') ADVANCE(1066);
      if (lookahead == 'f') ADVANCE(1339);
      if (lookahead == 'g') ADVANCE(1825);
      if (lookahead == 'h') ADVANCE(1514);
      if (lookahead == 'i') ADVANCE(1462);
      if (lookahead == 'l') ADVANCE(1089);
      if (lookahead == 'm') ADVANCE(1094);
      if (lookahead == 'n') ADVANCE(936);
      if (lookahead == 'o') ADVANCE(1014);
      if (lookahead == 'p') ADVANCE(942);
      if (lookahead == 'r') ADVANCE(1095);
      if (lookahead == 's') ADVANCE(1020);
      if (lookahead == 't') ADVANCE(947);
      if (lookahead == 'v') ADVANCE(1159);
      if (lookahead == 'w') ADVANCE(1295);
      if (lookahead == 'x') ADVANCE(1972);
      if (lookahead == 'y') ADVANCE(1973);
      if (lookahead == '}') ADVANCE(1946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1941)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2149);
      END_STATE();
    case 1942:
      if (eof) ADVANCE(1943);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '#') ADVANCE(2167);
      if (lookahead == '0') ADVANCE(2163);
      if (lookahead == '1') ADVANCE(2165);
      if (lookahead == '=') ADVANCE(2135);
      if (lookahead == '\\') SKIP(1940)
      if (lookahead == 'a') ADVANCE(1397);
      if (lookahead == 'b') ADVANCE(931);
      if (lookahead == 'c') ADVANCE(1435);
      if (lookahead == 'd') ADVANCE(1088);
      if (lookahead == 'e') ADVANCE(1065);
      if (lookahead == 'f') ADVANCE(1300);
      if (lookahead == 'i') ADVANCE(1502);
      if (lookahead == 'l') ADVANCE(1310);
      if (lookahead == 'm') ADVANCE(959);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead == 'o') ADVANCE(1662);
      if (lookahead == 'p') ADVANCE(978);
      if (lookahead == 'r') ADVANCE(1095);
      if (lookahead == 's') ADVANCE(1040);
      if (lookahead == 't') ADVANCE(948);
      if (lookahead == 'v') ADVANCE(1159);
      if (lookahead == 'y') ADVANCE(1162);
      if (lookahead == '}') ADVANCE(1946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1942)
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_objectTypes);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_bitmapfonts);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(anon_sym_guiTypes);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_textSpriteType);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_corneredTileSpriteType);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_maskedShieldType);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(anon_sym_animatedmaptext);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_textcolors);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      if (lookahead == 's') ADVANCE(1948);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_frameAnimatedSpriteType);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(anon_sym_progressbartype);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(anon_sym_pdxmesh);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(anon_sym_pdxparticle);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_arrowType);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(anon_sym_tradeRouteType);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(anon_sym_PieChartType);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_LineChartType);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(anon_sym_windowType);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_listBoxType);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(anon_sym_editBoxType);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(anon_sym_instantTextBoxType);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(anon_sym_textBoxType);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(1694);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(aux_sym__statement_gfx_name_token1);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '1') ADVANCE(2018);
      if (lookahead == '2') ADVANCE(2019);
      if (lookahead == '3') ADVANCE(2020);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '2') ADVANCE(2019);
      if (lookahead == '3') ADVANCE(2020);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token2);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile1_token1);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile2_token1);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile3_token1);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1672);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1672);
      if (lookahead == 'b') ADVANCE(1410);
      if (lookahead == 'd') ADVANCE(1213);
      if (lookahead == 'r') ADVANCE(1580);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(1256);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(anon_sym_borderSize);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(anon_sym_alwaystransparent);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(anon_sym_allwaystransparent);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(anon_sym_legacy_lazy_load);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(anon_sym_clicksound);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == 's') ADVANCE(1572);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(anon_sym_speed);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(anon_sym_textblock);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'B') ADVANCE(1578);
      if (lookahead == 'S') ADVANCE(1618);
      if (lookahead == 'u') ADVANCE(1653);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'u') ADVANCE(1656);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'u') ADVANCE(1685);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == 't') ADVANCE(1851);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(anon_sym_colortwo);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(anon_sym_cull_distance);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'a') ADVANCE(1021);
      if (lookahead == 'i') ADVANCE(1784);
      if (lookahead == 'o') ADVANCE(1625);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(1271);
      if (lookahead == 'i') ADVANCE(1483);
      if (lookahead == 'o') ADVANCE(950);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'u') ADVANCE(1292);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(anon_sym_border_color);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(anon_sym_animation_rate_fps);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(anon_sym_looping);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(anon_sym_play_on_show);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(anon_sym_pause_on_loop);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(aux_sym__statement_gfx_file_token1);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(anon_sym_meshsettings);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(anon_sym_texture_diffuse);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(anon_sym_texture_normal);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(anon_sym_texture_specular);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(anon_sym_shader);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(anon_sym_shader);
      if (lookahead == '_') ADVANCE(1260);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(aux_sym__statement_gfx_meshsettings_shader_token1);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(anon_sym_shader_file);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(aux_sym__statement_gfx_meshsettings_shader_file_token1);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(anon_sym_transparencecheck);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(anon_sym_loadType);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(anon_sym_DQUOTEINGAME_DQUOTE);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(anon_sym_DQUOTEFRONTEND_DQUOTE);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(anon_sym_norefcount);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(anon_sym_texture);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F') ADVANCE(1330);
      if (lookahead == '_') ADVANCE(1071);
      if (lookahead == 'f') ADVANCE(1332);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1332);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1349);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(anon_sym_specular);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(anon_sym_effect);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(anon_sym_effect);
      if (lookahead == 'F') ADVANCE(1323);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effect_token1);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(anon_sym_alphamaskfile);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(aux_sym__statement_gfx_alphamaskfile_token1);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(anon_sym_linewidth);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(anon_sym_backGround);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(anon_sym_moveable);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(anon_sym_orientation);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(anon_sym_priority);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(anon_sym_scrollbartype);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(anon_sym_textureFile);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(anon_sym_textureFile);
      if (lookahead == '1') ADVANCE(2018);
      if (lookahead == '2') ADVANCE(2019);
      if (lookahead == '3') ADVANCE(2020);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(anon_sym_cursor);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(anon_sym_cursor);
      if (lookahead == '_') ADVANCE(1525);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(anon_sym_maxWidth);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(anon_sym_maxHeight);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(anon_sym_fixedsize);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1920);
      if (lookahead == '5') ADVANCE(2139);
      if (lookahead == 'f') ADVANCE(2137);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2140);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(2140);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1920);
      if (lookahead == 'f') ADVANCE(2137);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2140);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(2140);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1920);
      if (lookahead == 'f') ADVANCE(2137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2140);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(2137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2141);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(1926);
      if (lookahead == 'f') ADVANCE(2142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2143);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(2142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2144);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      if (lookahead == '.') ADVANCE(1921);
      if (lookahead == 'f') ADVANCE(2145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2146);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      if (lookahead == 'f') ADVANCE(2145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2147);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2148);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2149);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead == '5') ADVANCE(2152);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2150);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(2153);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(2150);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2150);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2153);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(sym_hexadecimal);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1932);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'O') ADVANCE(1244);
      if (lookahead == 'r') ADVANCE(1161);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1920);
      if (lookahead == 'f') ADVANCE(2137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2140);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1920);
      if (lookahead == 'f') ADVANCE(2137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2140);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2167);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(aux_sym__orientation_value_token1);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1941},
  [2] = {.lex_state = 1941},
  [3] = {.lex_state = 1941},
  [4] = {.lex_state = 1942},
  [5] = {.lex_state = 551},
  [6] = {.lex_state = 551},
  [7] = {.lex_state = 1942},
  [8] = {.lex_state = 551},
  [9] = {.lex_state = 552},
  [10] = {.lex_state = 553},
  [11] = {.lex_state = 552},
  [12] = {.lex_state = 553},
  [13] = {.lex_state = 553},
  [14] = {.lex_state = 552},
  [15] = {.lex_state = 552},
  [16] = {.lex_state = 554},
  [17] = {.lex_state = 552},
  [18] = {.lex_state = 554},
  [19] = {.lex_state = 1941},
  [20] = {.lex_state = 552},
  [21] = {.lex_state = 1941},
  [22] = {.lex_state = 1941},
  [23] = {.lex_state = 552},
  [24] = {.lex_state = 552},
  [25] = {.lex_state = 552},
  [26] = {.lex_state = 552},
  [27] = {.lex_state = 1942},
  [28] = {.lex_state = 552},
  [29] = {.lex_state = 552},
  [30] = {.lex_state = 555},
  [31] = {.lex_state = 1942},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1942},
  [34] = {.lex_state = 551},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 551},
  [37] = {.lex_state = 551},
  [38] = {.lex_state = 1942},
  [39] = {.lex_state = 551},
  [40] = {.lex_state = 551},
  [41] = {.lex_state = 1942},
  [42] = {.lex_state = 551},
  [43] = {.lex_state = 551},
  [44] = {.lex_state = 1942},
  [45] = {.lex_state = 555},
  [46] = {.lex_state = 1942},
  [47] = {.lex_state = 551},
  [48] = {.lex_state = 551},
  [49] = {.lex_state = 1942},
  [50] = {.lex_state = 1942},
  [51] = {.lex_state = 1942},
  [52] = {.lex_state = 1942},
  [53] = {.lex_state = 1941},
  [54] = {.lex_state = 1942},
  [55] = {.lex_state = 559},
  [56] = {.lex_state = 1942},
  [57] = {.lex_state = 559},
  [58] = {.lex_state = 1941},
  [59] = {.lex_state = 559},
  [60] = {.lex_state = 559},
  [61] = {.lex_state = 1941},
  [62] = {.lex_state = 1941},
  [63] = {.lex_state = 559},
  [64] = {.lex_state = 1941},
  [65] = {.lex_state = 559},
  [66] = {.lex_state = 1941},
  [67] = {.lex_state = 1942},
  [68] = {.lex_state = 1942},
  [69] = {.lex_state = 556},
  [70] = {.lex_state = 1942},
  [71] = {.lex_state = 551},
  [72] = {.lex_state = 551},
  [73] = {.lex_state = 556},
  [74] = {.lex_state = 1942},
  [75] = {.lex_state = 1942},
  [76] = {.lex_state = 1942},
  [77] = {.lex_state = 551},
  [78] = {.lex_state = 552},
  [79] = {.lex_state = 1942},
  [80] = {.lex_state = 551},
  [81] = {.lex_state = 551},
  [82] = {.lex_state = 558},
  [83] = {.lex_state = 551},
  [84] = {.lex_state = 551},
  [85] = {.lex_state = 552},
  [86] = {.lex_state = 557},
  [87] = {.lex_state = 551},
  [88] = {.lex_state = 551},
  [89] = {.lex_state = 551},
  [90] = {.lex_state = 551},
  [91] = {.lex_state = 1942},
  [92] = {.lex_state = 558},
  [93] = {.lex_state = 551},
  [94] = {.lex_state = 551},
  [95] = {.lex_state = 1942},
  [96] = {.lex_state = 1942},
  [97] = {.lex_state = 558},
  [98] = {.lex_state = 559},
  [99] = {.lex_state = 551},
  [100] = {.lex_state = 551},
  [101] = {.lex_state = 558},
  [102] = {.lex_state = 558},
  [103] = {.lex_state = 559},
  [104] = {.lex_state = 557},
  [105] = {.lex_state = 1942},
  [106] = {.lex_state = 1942},
  [107] = {.lex_state = 556},
  [108] = {.lex_state = 553},
  [109] = {.lex_state = 553},
  [110] = {.lex_state = 557},
  [111] = {.lex_state = 553},
  [112] = {.lex_state = 553},
  [113] = {.lex_state = 557},
  [114] = {.lex_state = 1942},
  [115] = {.lex_state = 558},
  [116] = {.lex_state = 556},
  [117] = {.lex_state = 553},
  [118] = {.lex_state = 557},
  [119] = {.lex_state = 551},
  [120] = {.lex_state = 558},
  [121] = {.lex_state = 553},
  [122] = {.lex_state = 558},
  [123] = {.lex_state = 1942},
  [124] = {.lex_state = 553},
  [125] = {.lex_state = 553},
  [126] = {.lex_state = 551},
  [127] = {.lex_state = 551},
  [128] = {.lex_state = 553},
  [129] = {.lex_state = 1942},
  [130] = {.lex_state = 1942},
  [131] = {.lex_state = 1942},
  [132] = {.lex_state = 1942},
  [133] = {.lex_state = 1942},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1942},
  [136] = {.lex_state = 556},
  [137] = {.lex_state = 557},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 556},
  [141] = {.lex_state = 1942},
  [142] = {.lex_state = 1942},
  [143] = {.lex_state = 1942},
  [144] = {.lex_state = 1942},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 560},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 560},
  [150] = {.lex_state = 1942},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1942},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1942},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 560},
  [159] = {.lex_state = 551},
  [160] = {.lex_state = 1942},
  [161] = {.lex_state = 1942},
  [162] = {.lex_state = 558},
  [163] = {.lex_state = 1942},
  [164] = {.lex_state = 1942},
  [165] = {.lex_state = 1942},
  [166] = {.lex_state = 1942},
  [167] = {.lex_state = 1942},
  [168] = {.lex_state = 1942},
  [169] = {.lex_state = 1942},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 551},
  [172] = {.lex_state = 1941},
  [173] = {.lex_state = 1942},
  [174] = {.lex_state = 551},
  [175] = {.lex_state = 1942},
  [176] = {.lex_state = 551},
  [177] = {.lex_state = 1942},
  [178] = {.lex_state = 1942},
  [179] = {.lex_state = 551},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1941},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 1941},
  [191] = {.lex_state = 551},
  [192] = {.lex_state = 551},
  [193] = {.lex_state = 551},
  [194] = {.lex_state = 551},
  [195] = {.lex_state = 559},
  [196] = {.lex_state = 559},
  [197] = {.lex_state = 559},
  [198] = {.lex_state = 551},
  [199] = {.lex_state = 551},
  [200] = {.lex_state = 551},
  [201] = {.lex_state = 1941},
  [202] = {.lex_state = 1941},
  [203] = {.lex_state = 1941},
  [204] = {.lex_state = 1942},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1942},
  [207] = {.lex_state = 1941},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 1941},
  [211] = {.lex_state = 1941},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 561},
  [214] = {.lex_state = 551},
  [215] = {.lex_state = 551},
  [216] = {.lex_state = 559},
  [217] = {.lex_state = 551},
  [218] = {.lex_state = 1941},
  [219] = {.lex_state = 551},
  [220] = {.lex_state = 1942},
  [221] = {.lex_state = 551},
  [222] = {.lex_state = 1941},
  [223] = {.lex_state = 1941},
  [224] = {.lex_state = 1941},
  [225] = {.lex_state = 1941},
  [226] = {.lex_state = 1941},
  [227] = {.lex_state = 551},
  [228] = {.lex_state = 1941},
  [229] = {.lex_state = 1941},
  [230] = {.lex_state = 551},
  [231] = {.lex_state = 1941},
  [232] = {.lex_state = 1941},
  [233] = {.lex_state = 551},
  [234] = {.lex_state = 1941},
  [235] = {.lex_state = 551},
  [236] = {.lex_state = 1942},
  [237] = {.lex_state = 551},
  [238] = {.lex_state = 551},
  [239] = {.lex_state = 551},
  [240] = {.lex_state = 551},
  [241] = {.lex_state = 558},
  [242] = {.lex_state = 551},
  [243] = {.lex_state = 551},
  [244] = {.lex_state = 551},
  [245] = {.lex_state = 559},
  [246] = {.lex_state = 559},
  [247] = {.lex_state = 551},
  [248] = {.lex_state = 551},
  [249] = {.lex_state = 1941},
  [250] = {.lex_state = 559},
  [251] = {.lex_state = 551},
  [252] = {.lex_state = 551},
  [253] = {.lex_state = 561},
  [254] = {.lex_state = 1941},
  [255] = {.lex_state = 1941},
  [256] = {.lex_state = 1941},
  [257] = {.lex_state = 1941},
  [258] = {.lex_state = 1941},
  [259] = {.lex_state = 551},
  [260] = {.lex_state = 559},
  [261] = {.lex_state = 551},
  [262] = {.lex_state = 551},
  [263] = {.lex_state = 551},
  [264] = {.lex_state = 1942},
  [265] = {.lex_state = 558},
  [266] = {.lex_state = 1942},
  [267] = {.lex_state = 1942},
  [268] = {.lex_state = 558},
  [269] = {.lex_state = 1942},
  [270] = {.lex_state = 1942},
  [271] = {.lex_state = 1942},
  [272] = {.lex_state = 558},
  [273] = {.lex_state = 1942},
  [274] = {.lex_state = 1942},
  [275] = {.lex_state = 551},
  [276] = {.lex_state = 558},
  [277] = {.lex_state = 558},
  [278] = {.lex_state = 558},
  [279] = {.lex_state = 558},
  [280] = {.lex_state = 558},
  [281] = {.lex_state = 551},
  [282] = {.lex_state = 1942},
  [283] = {.lex_state = 558},
  [284] = {.lex_state = 558},
  [285] = {.lex_state = 558},
  [286] = {.lex_state = 1942},
  [287] = {.lex_state = 551},
  [288] = {.lex_state = 1941},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 1942},
  [291] = {.lex_state = 1941},
  [292] = {.lex_state = 1942},
  [293] = {.lex_state = 1942},
  [294] = {.lex_state = 551},
  [295] = {.lex_state = 1941},
  [296] = {.lex_state = 558},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 1941},
  [299] = {.lex_state = 1941},
  [300] = {.lex_state = 1941},
  [301] = {.lex_state = 1941},
  [302] = {.lex_state = 558},
  [303] = {.lex_state = 1941},
  [304] = {.lex_state = 558},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 1942},
  [307] = {.lex_state = 551},
  [308] = {.lex_state = 551},
  [309] = {.lex_state = 551},
  [310] = {.lex_state = 551},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 551},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 560},
  [317] = {.lex_state = 560},
  [318] = {.lex_state = 551},
  [319] = {.lex_state = 560},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 551},
  [322] = {.lex_state = 1941},
  [323] = {.lex_state = 1941},
  [324] = {.lex_state = 558},
  [325] = {.lex_state = 1941},
  [326] = {.lex_state = 551},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 560},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 560},
  [337] = {.lex_state = 560},
  [338] = {.lex_state = 560},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 1941},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 1941},
  [352] = {.lex_state = 1941},
  [353] = {.lex_state = 1941},
  [354] = {.lex_state = 1941},
  [355] = {.lex_state = 1941},
  [356] = {.lex_state = 1941},
  [357] = {.lex_state = 1941},
  [358] = {.lex_state = 1941},
  [359] = {.lex_state = 1941},
  [360] = {.lex_state = 1941},
  [361] = {.lex_state = 1941},
  [362] = {.lex_state = 1941},
  [363] = {.lex_state = 1941},
  [364] = {.lex_state = 1941},
  [365] = {.lex_state = 1941},
  [366] = {.lex_state = 1941},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 1941},
  [369] = {.lex_state = 1941},
  [370] = {.lex_state = 1941},
  [371] = {.lex_state = 1941},
  [372] = {.lex_state = 1941},
  [373] = {.lex_state = 1941},
  [374] = {.lex_state = 1941},
  [375] = {.lex_state = 1941},
  [376] = {.lex_state = 1941},
  [377] = {.lex_state = 1941},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 1941},
  [380] = {.lex_state = 1941},
  [381] = {.lex_state = 1941},
  [382] = {.lex_state = 1941},
  [383] = {.lex_state = 1941},
  [384] = {.lex_state = 1941},
  [385] = {.lex_state = 1941},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 1941},
  [388] = {.lex_state = 551},
  [389] = {.lex_state = 1941},
  [390] = {.lex_state = 1941},
  [391] = {.lex_state = 1942},
  [392] = {.lex_state = 1942},
  [393] = {.lex_state = 1941},
  [394] = {.lex_state = 1941},
  [395] = {.lex_state = 1942},
  [396] = {.lex_state = 551},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 1942},
  [399] = {.lex_state = 1942},
  [400] = {.lex_state = 551},
  [401] = {.lex_state = 1942},
  [402] = {.lex_state = 1941},
  [403] = {.lex_state = 1942},
  [404] = {.lex_state = 1941},
  [405] = {.lex_state = 1942},
  [406] = {.lex_state = 1941},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 1942},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 1941},
  [411] = {.lex_state = 1941},
  [412] = {.lex_state = 1942},
  [413] = {.lex_state = 1941},
  [414] = {.lex_state = 1942},
  [415] = {.lex_state = 551},
  [416] = {.lex_state = 1942},
  [417] = {.lex_state = 1942},
  [418] = {.lex_state = 1941},
  [419] = {.lex_state = 1942},
  [420] = {.lex_state = 1942},
  [421] = {.lex_state = 1942},
  [422] = {.lex_state = 1942},
  [423] = {.lex_state = 1941},
  [424] = {.lex_state = 1941},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 1941},
  [427] = {.lex_state = 551},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 1941},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 551},
  [434] = {.lex_state = 551},
  [435] = {.lex_state = 551},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 551},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 551},
  [441] = {.lex_state = 1941},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 551},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 551},
  [446] = {.lex_state = 551},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 1941},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 551},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 551},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 1941},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 1941},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 1941},
  [462] = {.lex_state = 1941},
  [463] = {.lex_state = 1941},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 1941},
  [469] = {.lex_state = 1942},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 1941},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 1941},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 1941},
  [478] = {.lex_state = 1941},
  [479] = {.lex_state = 551},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 1941},
  [482] = {.lex_state = 1942},
  [483] = {.lex_state = 1942},
  [484] = {.lex_state = 551},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 551},
  [487] = {.lex_state = 1941},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 551},
  [490] = {.lex_state = 552},
  [491] = {.lex_state = 551},
  [492] = {.lex_state = 551},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 1941},
  [495] = {.lex_state = 1941},
  [496] = {.lex_state = 1941},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 551},
  [499] = {.lex_state = 551},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 551},
  [502] = {.lex_state = 551},
  [503] = {.lex_state = 551},
  [504] = {.lex_state = 551},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 1941},
  [507] = {.lex_state = 1941},
  [508] = {.lex_state = 551},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 1941},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 1941},
  [517] = {.lex_state = 1941},
  [518] = {.lex_state = 1941},
  [519] = {.lex_state = 1942},
  [520] = {.lex_state = 1942},
  [521] = {.lex_state = 1942},
  [522] = {.lex_state = 1942},
  [523] = {.lex_state = 552},
  [524] = {.lex_state = 552},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 1941},
  [527] = {.lex_state = 1941},
  [528] = {.lex_state = 1941},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 552},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 1941},
  [534] = {.lex_state = 1942},
  [535] = {.lex_state = 1941},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 1942},
  [539] = {.lex_state = 1941},
  [540] = {.lex_state = 1942},
  [541] = {.lex_state = 1942},
  [542] = {.lex_state = 553},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 1942},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 1941},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 1942},
  [556] = {.lex_state = 1942},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 553},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 551},
  [562] = {.lex_state = 554},
  [563] = {.lex_state = 554},
  [564] = {.lex_state = 554},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 555},
  [568] = {.lex_state = 555},
  [569] = {.lex_state = 553},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 553},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 551},
  [575] = {.lex_state = 1941},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 1941},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 1942},
  [581] = {.lex_state = 551},
  [582] = {.lex_state = 1941},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 554},
  [585] = {.lex_state = 1942},
  [586] = {.lex_state = 1941},
  [587] = {.lex_state = 552},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 1941},
  [590] = {.lex_state = 1941},
  [591] = {.lex_state = 1941},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 1942},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 553},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 553},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 553},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 553},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 553},
  [608] = {.lex_state = 1942},
  [609] = {.lex_state = 0},
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
    [anon_sym_noOfFrames] = ACTIONS(1),
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
    [anon_sym_orientation] = ACTIONS(1),
    [anon_sym_priority] = ACTIONS(1),
    [anon_sym_scrollbartype] = ACTIONS(1),
    [anon_sym_textureFile] = ACTIONS(1),
    [anon_sym_cursor] = ACTIONS(1),
    [anon_sym_maxWidth] = ACTIONS(1),
    [anon_sym_maxHeight] = ACTIONS(1),
    [anon_sym_fixedsize] = ACTIONS(1),
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
    [sym_file] = STATE(565),
    [sym_dot_mod] = STATE(548),
    [sym_dot_gfx] = STATE(548),
    [sym_dot_gui] = STATE(548),
    [sym__gui_types_definition] = STATE(352),
    [sym__spriteTypes] = STATE(288),
    [sym__objectTypes] = STATE(288),
    [sym__bitmapfonts] = STATE(288),
    [sym__guiTypes] = STATE(352),
    [sym__statement_name] = STATE(32),
    [sym__statement_mod_path] = STATE(32),
    [sym__statement_mod_archive] = STATE(32),
    [sym__statement_mod_remote_file_id] = STATE(32),
    [sym__statement_mod_version] = STATE(32),
    [sym__statement_mod_picture] = STATE(32),
    [sym__statement_mod_supported_version] = STATE(32),
    [sym__statement_mod_replace_path] = STATE(32),
    [sym__statement_mod_tags] = STATE(32),
    [sym__statement_mod_dependencies] = STATE(32),
    [aux_sym_dot_mod_repeat1] = STATE(32),
    [aux_sym_dot_gfx_repeat1] = STATE(288),
    [aux_sym_dot_gui_repeat1] = STATE(352),
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
    ACTIONS(35), 5,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
      anon_sym_texture,
      anon_sym_effect,
    ACTIONS(33), 36,
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
  [52] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 5,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
      anon_sym_texture,
      anon_sym_effect,
    ACTIONS(39), 36,
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
  [101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_text,
    ACTIONS(47), 1,
      sym_assign_equal,
    ACTIONS(43), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
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
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [144] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_name,
    ACTIONS(54), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(57), 1,
      anon_sym_noOfFrames,
    ACTIONS(60), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(63), 1,
      anon_sym_overlay_rows,
    ACTIONS(66), 1,
      anon_sym_effectFile,
    ACTIONS(69), 1,
      anon_sym_animation,
    ACTIONS(72), 1,
      anon_sym_alwaystransparent,
    ACTIONS(75), 1,
      anon_sym_allwaystransparent,
    ACTIONS(78), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(81), 1,
      anon_sym_clicksound,
    ACTIONS(84), 1,
      anon_sym_transparencecheck,
    ACTIONS(87), 1,
      anon_sym_loadType,
    ACTIONS(90), 1,
      anon_sym_norefcount,
    ACTIONS(93), 1,
      anon_sym_alphamaskfile,
    STATE(93), 1,
      sym__statement_gfx_name,
    STATE(5), 15,
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
  [216] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(100), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(102), 1,
      anon_sym_noOfFrames,
    ACTIONS(104), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(106), 1,
      anon_sym_overlay_rows,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(110), 1,
      anon_sym_animation,
    ACTIONS(112), 1,
      anon_sym_alwaystransparent,
    ACTIONS(114), 1,
      anon_sym_allwaystransparent,
    ACTIONS(116), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(118), 1,
      anon_sym_clicksound,
    ACTIONS(120), 1,
      anon_sym_transparencecheck,
    ACTIONS(122), 1,
      anon_sym_loadType,
    ACTIONS(124), 1,
      anon_sym_norefcount,
    ACTIONS(126), 1,
      anon_sym_alphamaskfile,
    STATE(93), 1,
      sym__statement_gfx_name,
    STATE(8), 15,
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
  [288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_text,
    ACTIONS(128), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
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
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [328] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(100), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(102), 1,
      anon_sym_noOfFrames,
    ACTIONS(104), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(106), 1,
      anon_sym_overlay_rows,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(110), 1,
      anon_sym_animation,
    ACTIONS(112), 1,
      anon_sym_alwaystransparent,
    ACTIONS(114), 1,
      anon_sym_allwaystransparent,
    ACTIONS(116), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(118), 1,
      anon_sym_clicksound,
    ACTIONS(120), 1,
      anon_sym_transparencecheck,
    ACTIONS(122), 1,
      anon_sym_loadType,
    ACTIONS(124), 1,
      anon_sym_norefcount,
    ACTIONS(126), 1,
      anon_sym_alphamaskfile,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym__statement_gfx_name,
    STATE(5), 15,
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
  [400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_assign_equal,
    ACTIONS(136), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(134), 25,
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
  [439] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(100), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(102), 1,
      anon_sym_noOfFrames,
    ACTIONS(104), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(106), 1,
      anon_sym_overlay_rows,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(114), 1,
      anon_sym_allwaystransparent,
    ACTIONS(120), 1,
      anon_sym_transparencecheck,
    ACTIONS(122), 1,
      anon_sym_loadType,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(144), 1,
      anon_sym_looping,
    ACTIONS(146), 1,
      anon_sym_play_on_show,
    ACTIONS(148), 1,
      anon_sym_pause_on_loop,
    STATE(124), 1,
      sym__statement_gfx_name,
    STATE(12), 13,
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
  [503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(150), 25,
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
  [539] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(159), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(162), 1,
      anon_sym_noOfFrames,
    ACTIONS(165), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(168), 1,
      anon_sym_overlay_rows,
    ACTIONS(171), 1,
      anon_sym_effectFile,
    ACTIONS(174), 1,
      anon_sym_allwaystransparent,
    ACTIONS(177), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(180), 1,
      anon_sym_looping,
    ACTIONS(183), 1,
      anon_sym_play_on_show,
    ACTIONS(186), 1,
      anon_sym_pause_on_loop,
    ACTIONS(189), 1,
      anon_sym_transparencecheck,
    ACTIONS(192), 1,
      anon_sym_loadType,
    STATE(124), 1,
      sym__statement_gfx_name,
    STATE(12), 13,
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
  [603] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(100), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(102), 1,
      anon_sym_noOfFrames,
    ACTIONS(104), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(106), 1,
      anon_sym_overlay_rows,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(114), 1,
      anon_sym_allwaystransparent,
    ACTIONS(120), 1,
      anon_sym_transparencecheck,
    ACTIONS(122), 1,
      anon_sym_loadType,
    ACTIONS(142), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(144), 1,
      anon_sym_looping,
    ACTIONS(146), 1,
      anon_sym_play_on_show,
    ACTIONS(148), 1,
      anon_sym_pause_on_loop,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym__statement_gfx_name,
    STATE(10), 13,
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
  [667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_assign_equal,
    ACTIONS(199), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(197), 24,
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
  [705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(203), 24,
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
  [740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_assign_equal,
    ACTIONS(209), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_effect,
    ACTIONS(207), 23,
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
  [777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_assign_equal,
    ACTIONS(215), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(213), 23,
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
  [813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_effect,
    ACTIONS(219), 23,
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
  [847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(225), 22,
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
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(228), 23,
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
  [915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(234), 22,
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
  [950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(238), 22,
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
  [985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_assign_equal,
    ACTIONS(242), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(240), 21,
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
  [1019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_assign_equal,
    ACTIONS(248), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(246), 21,
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
  [1053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_assign_equal,
    ACTIONS(254), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(252), 21,
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
  [1087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(258), 21,
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
  [1118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_text,
    ACTIONS(266), 1,
      sym_assign_equal,
    ACTIONS(262), 21,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [1151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(268), 21,
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
  [1182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(272), 21,
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
  [1213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_animation,
    ACTIONS(280), 1,
      sym_assign_equal,
    ACTIONS(276), 21,
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
  [1246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_text,
    ACTIONS(286), 1,
      sym_assign_equal,
    ACTIONS(282), 21,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [1279] = 13,
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
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    STATE(35), 11,
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
  [1329] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(296), 1,
      anon_sym_borderSize,
    ACTIONS(298), 1,
      anon_sym_text,
    ACTIONS(300), 1,
      anon_sym_font,
    ACTIONS(302), 1,
      anon_sym_position,
    ACTIONS(304), 1,
      anon_sym_orientation,
    ACTIONS(306), 1,
      anon_sym_textureFile,
    ACTIONS(308), 1,
      anon_sym_cursor,
    STATE(177), 1,
      sym__statement_name,
    STATE(38), 10,
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
  [1381] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(100), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(102), 1,
      anon_sym_noOfFrames,
    ACTIONS(104), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(106), 1,
      anon_sym_overlay_rows,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(114), 1,
      anon_sym_allwaystransparent,
    ACTIONS(118), 1,
      anon_sym_clicksound,
    ACTIONS(120), 1,
      anon_sym_transparencecheck,
    ACTIONS(122), 1,
      anon_sym_loadType,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym__statement_gfx_name,
    STATE(47), 10,
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
  [1433] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      anon_sym_name,
    ACTIONS(317), 1,
      anon_sym_path,
    ACTIONS(320), 1,
      anon_sym_archive,
    ACTIONS(323), 1,
      anon_sym_remote_file_id,
    ACTIONS(326), 1,
      anon_sym_version,
    ACTIONS(329), 1,
      anon_sym_picture,
    ACTIONS(332), 1,
      anon_sym_supported_version,
    ACTIONS(335), 1,
      anon_sym_replace_path,
    ACTIONS(338), 1,
      anon_sym_tags,
    ACTIONS(341), 1,
      anon_sym_dependencies,
    STATE(35), 11,
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
  [1483] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      anon_sym_spriteType,
    ACTIONS(348), 1,
      anon_sym_textSpriteType,
    ACTIONS(350), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(352), 1,
      anon_sym_maskedShieldType,
    ACTIONS(354), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(356), 1,
      anon_sym_progressbartype,
    ACTIONS(358), 1,
      anon_sym_PieChartType,
    ACTIONS(360), 1,
      anon_sym_LineChartType,
    ACTIONS(362), 1,
      anon_sym_cursor_offset,
    STATE(40), 12,
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
  [1531] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_spriteType,
    ACTIONS(348), 1,
      anon_sym_textSpriteType,
    ACTIONS(350), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(352), 1,
      anon_sym_maskedShieldType,
    ACTIONS(354), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(356), 1,
      anon_sym_progressbartype,
    ACTIONS(358), 1,
      anon_sym_PieChartType,
    ACTIONS(360), 1,
      anon_sym_LineChartType,
    ACTIONS(362), 1,
      anon_sym_cursor_offset,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(36), 12,
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
  [1579] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(292), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(296), 1,
      anon_sym_borderSize,
    ACTIONS(298), 1,
      anon_sym_text,
    ACTIONS(300), 1,
      anon_sym_font,
    ACTIONS(302), 1,
      anon_sym_position,
    ACTIONS(304), 1,
      anon_sym_orientation,
    ACTIONS(306), 1,
      anon_sym_textureFile,
    ACTIONS(308), 1,
      anon_sym_cursor,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      sym__statement_name,
    STATE(41), 10,
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
  [1631] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(100), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(102), 1,
      anon_sym_noOfFrames,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(114), 1,
      anon_sym_allwaystransparent,
    ACTIONS(116), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(122), 1,
      anon_sym_loadType,
    ACTIONS(124), 1,
      anon_sym_norefcount,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(370), 1,
      anon_sym_size,
    ACTIONS(372), 1,
      anon_sym_borderSize,
    STATE(179), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(48), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1683] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      anon_sym_spriteType,
    ACTIONS(379), 1,
      anon_sym_textSpriteType,
    ACTIONS(382), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(385), 1,
      anon_sym_maskedShieldType,
    ACTIONS(388), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(391), 1,
      anon_sym_progressbartype,
    ACTIONS(394), 1,
      anon_sym_PieChartType,
    ACTIONS(397), 1,
      anon_sym_LineChartType,
    ACTIONS(400), 1,
      anon_sym_cursor_offset,
    STATE(40), 12,
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
  [1731] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(408), 1,
      anon_sym_name,
    ACTIONS(411), 1,
      anon_sym_size,
    ACTIONS(414), 1,
      anon_sym_borderSize,
    ACTIONS(417), 1,
      anon_sym_text,
    ACTIONS(420), 1,
      anon_sym_font,
    ACTIONS(423), 1,
      anon_sym_position,
    ACTIONS(426), 1,
      anon_sym_orientation,
    ACTIONS(429), 1,
      anon_sym_textureFile,
    ACTIONS(432), 1,
      anon_sym_cursor,
    STATE(177), 1,
      sym__statement_name,
    STATE(41), 10,
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
  [1783] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      anon_sym_name,
    ACTIONS(440), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(443), 1,
      anon_sym_noOfFrames,
    ACTIONS(446), 1,
      anon_sym_effectFile,
    ACTIONS(449), 1,
      anon_sym_size,
    ACTIONS(452), 1,
      anon_sym_borderSize,
    ACTIONS(455), 1,
      anon_sym_allwaystransparent,
    ACTIONS(458), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(461), 1,
      anon_sym_loadType,
    ACTIONS(464), 1,
      anon_sym_norefcount,
    STATE(179), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(42), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1835] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      anon_sym_name,
    ACTIONS(472), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(475), 1,
      anon_sym_noOfFrames,
    ACTIONS(478), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(481), 1,
      anon_sym_overlay_rows,
    ACTIONS(484), 1,
      anon_sym_effectFile,
    ACTIONS(487), 1,
      anon_sym_allwaystransparent,
    ACTIONS(490), 1,
      anon_sym_clicksound,
    ACTIONS(493), 1,
      anon_sym_transparencecheck,
    ACTIONS(496), 1,
      anon_sym_loadType,
    STATE(174), 1,
      sym__statement_gfx_name,
    STATE(43), 10,
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
  [1887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_text,
    ACTIONS(499), 21,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [1917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_animation,
    ACTIONS(503), 21,
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
  [1947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_text,
    ACTIONS(507), 21,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [1977] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(100), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(102), 1,
      anon_sym_noOfFrames,
    ACTIONS(104), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(106), 1,
      anon_sym_overlay_rows,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(114), 1,
      anon_sym_allwaystransparent,
    ACTIONS(118), 1,
      anon_sym_clicksound,
    ACTIONS(120), 1,
      anon_sym_transparencecheck,
    ACTIONS(122), 1,
      anon_sym_loadType,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym__statement_gfx_name,
    STATE(43), 10,
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
  [2029] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(100), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(102), 1,
      anon_sym_noOfFrames,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(114), 1,
      anon_sym_allwaystransparent,
    ACTIONS(116), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(122), 1,
      anon_sym_loadType,
    ACTIONS(124), 1,
      anon_sym_norefcount,
    ACTIONS(370), 1,
      anon_sym_size,
    ACTIONS(372), 1,
      anon_sym_borderSize,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(179), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(42), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [2081] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      anon_sym_animationrotation,
    ACTIONS(521), 1,
      anon_sym_animationlooping,
    ACTIONS(527), 1,
      anon_sym_animationblendmode,
    ACTIONS(529), 1,
      anon_sym_animationtype,
    ACTIONS(531), 1,
      anon_sym_animationframes,
    ACTIONS(517), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(523), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(525), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(51), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [2126] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_animationrotation,
    ACTIONS(521), 1,
      anon_sym_animationlooping,
    ACTIONS(527), 1,
      anon_sym_animationblendmode,
    ACTIONS(529), 1,
      anon_sym_animationtype,
    ACTIONS(531), 1,
      anon_sym_animationframes,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(523), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(525), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(49), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [2171] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    ACTIONS(540), 1,
      anon_sym_animationrotation,
    ACTIONS(543), 1,
      anon_sym_animationlooping,
    ACTIONS(552), 1,
      anon_sym_animationblendmode,
    ACTIONS(555), 1,
      anon_sym_animationtype,
    ACTIONS(558), 1,
      anon_sym_animationframes,
    ACTIONS(537), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(546), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(549), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(51), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [2216] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(296), 1,
      anon_sym_borderSize,
    ACTIONS(300), 1,
      anon_sym_font,
    ACTIONS(302), 1,
      anon_sym_position,
    ACTIONS(304), 1,
      anon_sym_orientation,
    ACTIONS(306), 1,
      anon_sym_textureFile,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    ACTIONS(563), 1,
      anon_sym_maxWidth,
    ACTIONS(565), 1,
      anon_sym_maxHeight,
    ACTIONS(567), 1,
      anon_sym_fixedsize,
    STATE(220), 1,
      sym__statement_name,
    STATE(54), 9,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      sym__statement_gui_fixedsize,
      aux_sym__instantTextBoxType_block_repeat1,
  [2264] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(302), 1,
      anon_sym_position,
    ACTIONS(304), 1,
      anon_sym_orientation,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    ACTIONS(571), 1,
      anon_sym_listBoxType,
    ACTIONS(573), 1,
      anon_sym_editBoxType,
    ACTIONS(575), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(577), 1,
      anon_sym_backGround,
    ACTIONS(579), 1,
      anon_sym_moveable,
    STATE(256), 1,
      sym__statement_name,
    STATE(66), 9,
      sym__listBoxType,
      sym__editBoxType,
      sym__instantTextBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [2312] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(296), 1,
      anon_sym_borderSize,
    ACTIONS(300), 1,
      anon_sym_font,
    ACTIONS(302), 1,
      anon_sym_position,
    ACTIONS(304), 1,
      anon_sym_orientation,
    ACTIONS(306), 1,
      anon_sym_textureFile,
    ACTIONS(563), 1,
      anon_sym_maxWidth,
    ACTIONS(565), 1,
      anon_sym_maxHeight,
    ACTIONS(567), 1,
      anon_sym_fixedsize,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym__statement_name,
    STATE(56), 9,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      sym__statement_gui_fixedsize,
      aux_sym__instantTextBoxType_block_repeat1,
  [2360] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(102), 1,
      anon_sym_noOfFrames,
    ACTIONS(104), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(106), 1,
      anon_sym_overlay_rows,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(120), 1,
      anon_sym_transparencecheck,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
    ACTIONS(585), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(587), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(589), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    STATE(260), 1,
      sym__statement_gfx_name,
    STATE(59), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [2408] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    ACTIONS(593), 1,
      anon_sym_name,
    ACTIONS(596), 1,
      anon_sym_borderSize,
    ACTIONS(599), 1,
      anon_sym_font,
    ACTIONS(602), 1,
      anon_sym_position,
    ACTIONS(605), 1,
      anon_sym_orientation,
    ACTIONS(608), 1,
      anon_sym_textureFile,
    ACTIONS(611), 1,
      anon_sym_maxWidth,
    ACTIONS(614), 1,
      anon_sym_maxHeight,
    ACTIONS(617), 1,
      anon_sym_fixedsize,
    STATE(220), 1,
      sym__statement_name,
    STATE(56), 9,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      sym__statement_gui_fixedsize,
      aux_sym__instantTextBoxType_block_repeat1,
  [2456] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(622), 1,
      anon_sym_name,
    ACTIONS(625), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(628), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(631), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(634), 1,
      anon_sym_noOfFrames,
    ACTIONS(637), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(640), 1,
      anon_sym_overlay_rows,
    ACTIONS(643), 1,
      anon_sym_effectFile,
    ACTIONS(646), 1,
      anon_sym_transparencecheck,
    STATE(260), 1,
      sym__statement_gfx_name,
    STATE(57), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [2504] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(296), 1,
      anon_sym_borderSize,
    ACTIONS(302), 1,
      anon_sym_position,
    ACTIONS(304), 1,
      anon_sym_orientation,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(651), 1,
      anon_sym_allwaystransparent,
    ACTIONS(653), 1,
      anon_sym_background,
    ACTIONS(655), 1,
      anon_sym_priority,
    ACTIONS(657), 1,
      anon_sym_scrollbartype,
    STATE(223), 1,
      sym__statement_name,
    STATE(62), 9,
      sym__statement_gui_background,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_priority,
      sym__statement_gui_scrollbartype,
      sym__statement_gui_allwaystransparent,
      aux_sym__listBoxType_block_repeat1,
  [2552] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(102), 1,
      anon_sym_noOfFrames,
    ACTIONS(104), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(106), 1,
      anon_sym_overlay_rows,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(120), 1,
      anon_sym_transparencecheck,
    ACTIONS(585), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(587), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(589), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym__statement_gfx_name,
    STATE(57), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [2600] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    ACTIONS(663), 1,
      anon_sym_name,
    ACTIONS(666), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(669), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(672), 1,
      anon_sym_effectFile,
    ACTIONS(675), 1,
      anon_sym_size,
    ACTIONS(678), 1,
      anon_sym_color,
    ACTIONS(681), 1,
      anon_sym_colortwo,
    ACTIONS(684), 1,
      anon_sym_horizontal,
    ACTIONS(687), 1,
      anon_sym_loadType,
    STATE(216), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(60), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [2648] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    ACTIONS(692), 1,
      anon_sym_listBoxType,
    ACTIONS(695), 1,
      anon_sym_editBoxType,
    ACTIONS(698), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(701), 1,
      anon_sym_name,
    ACTIONS(704), 1,
      anon_sym_size,
    ACTIONS(707), 1,
      anon_sym_position,
    ACTIONS(710), 1,
      anon_sym_backGround,
    ACTIONS(713), 1,
      anon_sym_moveable,
    ACTIONS(716), 1,
      anon_sym_orientation,
    STATE(256), 1,
      sym__statement_name,
    STATE(61), 9,
      sym__listBoxType,
      sym__editBoxType,
      sym__instantTextBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [2696] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(296), 1,
      anon_sym_borderSize,
    ACTIONS(302), 1,
      anon_sym_position,
    ACTIONS(304), 1,
      anon_sym_orientation,
    ACTIONS(651), 1,
      anon_sym_allwaystransparent,
    ACTIONS(653), 1,
      anon_sym_background,
    ACTIONS(655), 1,
      anon_sym_priority,
    ACTIONS(657), 1,
      anon_sym_scrollbartype,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym__statement_name,
    STATE(64), 9,
      sym__statement_gui_background,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_priority,
      sym__statement_gui_scrollbartype,
      sym__statement_gui_allwaystransparent,
      aux_sym__listBoxType_block_repeat1,
  [2744] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(122), 1,
      anon_sym_loadType,
    ACTIONS(370), 1,
      anon_sym_size,
    ACTIONS(585), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(587), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 1,
      anon_sym_color,
    ACTIONS(725), 1,
      anon_sym_colortwo,
    ACTIONS(727), 1,
      anon_sym_horizontal,
    STATE(216), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(65), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [2792] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    ACTIONS(731), 1,
      anon_sym_name,
    ACTIONS(734), 1,
      anon_sym_size,
    ACTIONS(737), 1,
      anon_sym_borderSize,
    ACTIONS(740), 1,
      anon_sym_allwaystransparent,
    ACTIONS(743), 1,
      anon_sym_position,
    ACTIONS(746), 1,
      anon_sym_background,
    ACTIONS(749), 1,
      anon_sym_orientation,
    ACTIONS(752), 1,
      anon_sym_priority,
    ACTIONS(755), 1,
      anon_sym_scrollbartype,
    STATE(223), 1,
      sym__statement_name,
    STATE(64), 9,
      sym__statement_gui_background,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_priority,
      sym__statement_gui_scrollbartype,
      sym__statement_gui_allwaystransparent,
      aux_sym__listBoxType_block_repeat1,
  [2840] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(108), 1,
      anon_sym_effectFile,
    ACTIONS(122), 1,
      anon_sym_loadType,
    ACTIONS(370), 1,
      anon_sym_size,
    ACTIONS(585), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(587), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(723), 1,
      anon_sym_color,
    ACTIONS(725), 1,
      anon_sym_colortwo,
    ACTIONS(727), 1,
      anon_sym_horizontal,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(216), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(60), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [2888] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(302), 1,
      anon_sym_position,
    ACTIONS(304), 1,
      anon_sym_orientation,
    ACTIONS(571), 1,
      anon_sym_listBoxType,
    ACTIONS(573), 1,
      anon_sym_editBoxType,
    ACTIONS(575), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(577), 1,
      anon_sym_backGround,
    ACTIONS(579), 1,
      anon_sym_moveable,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      sym__statement_name,
    STATE(61), 9,
      sym__listBoxType,
      sym__editBoxType,
      sym__instantTextBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [2936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_text,
    ACTIONS(766), 1,
      sym_assign_equal,
    ACTIONS(762), 18,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
  [2966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_text,
    ACTIONS(768), 18,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_background,
      anon_sym_moveable,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
  [2993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_assign_equal,
    ACTIONS(774), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
      anon_sym_effect,
    ACTIONS(772), 15,
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
  [3022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_text,
    ACTIONS(782), 1,
      sym_assign_equal,
    ACTIONS(778), 17,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_background,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [3051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_assign_equal,
    ACTIONS(784), 18,
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
  [3078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_assign_equal,
    ACTIONS(788), 18,
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
  [3105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
      anon_sym_effect,
    ACTIONS(792), 15,
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
  [3131] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    ACTIONS(798), 1,
      anon_sym_name,
    ACTIONS(801), 1,
      anon_sym_borderSize,
    ACTIONS(804), 1,
      anon_sym_text,
    ACTIONS(807), 1,
      anon_sym_font,
    ACTIONS(810), 1,
      anon_sym_position,
    ACTIONS(813), 1,
      anon_sym_textureFile,
    ACTIONS(816), 1,
      anon_sym_maxWidth,
    ACTIONS(819), 1,
      anon_sym_maxHeight,
    STATE(274), 1,
      sym__statement_name,
    STATE(74), 8,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_text,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      aux_sym__textBoxType_block_repeat1,
  [3175] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(296), 1,
      anon_sym_borderSize,
    ACTIONS(298), 1,
      anon_sym_text,
    ACTIONS(300), 1,
      anon_sym_font,
    ACTIONS(302), 1,
      anon_sym_position,
    ACTIONS(306), 1,
      anon_sym_textureFile,
    ACTIONS(563), 1,
      anon_sym_maxWidth,
    ACTIONS(565), 1,
      anon_sym_maxHeight,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      sym__statement_name,
    STATE(76), 8,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_text,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      aux_sym__textBoxType_block_repeat1,
  [3219] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(296), 1,
      anon_sym_borderSize,
    ACTIONS(298), 1,
      anon_sym_text,
    ACTIONS(300), 1,
      anon_sym_font,
    ACTIONS(302), 1,
      anon_sym_position,
    ACTIONS(306), 1,
      anon_sym_textureFile,
    ACTIONS(563), 1,
      anon_sym_maxWidth,
    ACTIONS(565), 1,
      anon_sym_maxHeight,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      sym__statement_name,
    STATE(74), 8,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_text,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      aux_sym__textBoxType_block_repeat1,
  [3263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 18,
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
  [3287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym_assign_equal,
    ACTIONS(830), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(828), 15,
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
  [3315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_text,
    ACTIONS(834), 17,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_font,
      anon_sym_position,
      anon_sym_background,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [3341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 18,
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
  [3365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym_assign_equal,
    ACTIONS(840), 16,
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
  [3390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_assign_equal,
    ACTIONS(844), 16,
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
  [3415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym_assign_equal,
    ACTIONS(848), 16,
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
  [3440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym_assign_equal,
    ACTIONS(852), 16,
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
  [3465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(856), 15,
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
  [3490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_text,
    ACTIONS(860), 15,
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
  [3515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_assign_equal,
    ACTIONS(864), 16,
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
  [3540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 16,
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
  [3562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 16,
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
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 16,
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
  [3606] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
    ACTIONS(876), 1,
      anon_sym_size,
    ACTIONS(878), 1,
      anon_sym_text,
    ACTIONS(880), 1,
      anon_sym_color,
    ACTIONS(882), 1,
      anon_sym_font,
    ACTIONS(884), 1,
      anon_sym_position,
    ACTIONS(886), 1,
      anon_sym_format,
    ACTIONS(888), 1,
      anon_sym_cull_distance,
    STATE(95), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [3644] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RBRACE,
    ACTIONS(892), 1,
      anon_sym_textcolors,
    ACTIONS(895), 1,
      anon_sym_name,
    ACTIONS(898), 1,
      anon_sym_path,
    ACTIONS(901), 1,
      anon_sym_cursor_offset,
    ACTIONS(904), 1,
      anon_sym_color,
    ACTIONS(907), 1,
      anon_sym_border_color,
    ACTIONS(910), 1,
      anon_sym_effect,
    STATE(285), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(92), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 16,
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
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 16,
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
  [3728] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    ACTIONS(919), 1,
      anon_sym_size,
    ACTIONS(922), 1,
      anon_sym_text,
    ACTIONS(925), 1,
      anon_sym_color,
    ACTIONS(928), 1,
      anon_sym_font,
    ACTIONS(931), 1,
      anon_sym_position,
    ACTIONS(934), 1,
      anon_sym_format,
    ACTIONS(937), 1,
      anon_sym_cull_distance,
    STATE(95), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [3766] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_size,
    ACTIONS(878), 1,
      anon_sym_text,
    ACTIONS(880), 1,
      anon_sym_color,
    ACTIONS(882), 1,
      anon_sym_font,
    ACTIONS(884), 1,
      anon_sym_position,
    ACTIONS(886), 1,
      anon_sym_format,
    ACTIONS(888), 1,
      anon_sym_cull_distance,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
    STATE(91), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 16,
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
  [3826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_color,
    ACTIONS(948), 1,
      sym_assign_equal,
    ACTIONS(944), 14,
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
  [3852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 16,
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
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 16,
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
  [3896] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_cursor_offset,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
    ACTIONS(956), 1,
      anon_sym_textcolors,
    ACTIONS(958), 1,
      anon_sym_name,
    ACTIONS(960), 1,
      anon_sym_path,
    ACTIONS(962), 1,
      anon_sym_color,
    ACTIONS(964), 1,
      anon_sym_border_color,
    ACTIONS(966), 1,
      anon_sym_effect,
    STATE(285), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(102), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [3936] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_cursor_offset,
    ACTIONS(956), 1,
      anon_sym_textcolors,
    ACTIONS(958), 1,
      anon_sym_name,
    ACTIONS(960), 1,
      anon_sym_path,
    ACTIONS(962), 1,
      anon_sym_color,
    ACTIONS(964), 1,
      anon_sym_border_color,
    ACTIONS(966), 1,
      anon_sym_effect,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
    STATE(285), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(92), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [3976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_color,
    ACTIONS(970), 14,
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
  [3999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_RBRACE,
    STATE(113), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(976), 12,
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
  [4024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_text,
    ACTIONS(982), 1,
      sym_assign_equal,
    ACTIONS(978), 13,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [4049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_text,
    ACTIONS(988), 1,
      sym_assign_equal,
    ACTIONS(984), 13,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [4074] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_SEMI,
    ACTIONS(996), 1,
      sym_assign_equal,
    ACTIONS(992), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(990), 11,
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
  [4101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      sym_assign_equal,
    ACTIONS(998), 14,
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
  [4124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      sym_assign_equal,
    ACTIONS(1002), 14,
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
  [4147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
    STATE(104), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(976), 12,
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
  [4172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      sym_assign_equal,
    ACTIONS(1008), 14,
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
  [4195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym_assign_equal,
    ACTIONS(1012), 14,
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
  [4218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_RBRACE,
    STATE(113), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(1018), 12,
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
  [4243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_text,
    ACTIONS(1025), 1,
      sym_assign_equal,
    ACTIONS(1021), 12,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
  [4267] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    ACTIONS(1029), 1,
      anon_sym_name,
    ACTIONS(1032), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1035), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(1038), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(1041), 1,
      anon_sym_cull_distance,
    ACTIONS(1044), 1,
      anon_sym_effect,
    STATE(324), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(115), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [4303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
    ACTIONS(1049), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(1047), 11,
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
  [4327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 14,
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
  [4347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym_assign_equal,
    ACTIONS(1055), 13,
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
  [4369] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(1059), 1,
      anon_sym_RBRACE,
    ACTIONS(1061), 1,
      anon_sym_animation,
    ACTIONS(1063), 1,
      anon_sym_cull_distance,
    ACTIONS(1065), 1,
      anon_sym_file,
    ACTIONS(1067), 1,
      anon_sym_meshsettings,
    ACTIONS(1069), 1,
      anon_sym_scale,
    STATE(310), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(126), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [4405] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(587), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(589), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(1063), 1,
      anon_sym_cull_distance,
    ACTIONS(1071), 1,
      anon_sym_RBRACE,
    ACTIONS(1073), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1075), 1,
      anon_sym_effect,
    STATE(324), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(115), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [4441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 14,
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
  [4461] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(587), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(589), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(1063), 1,
      anon_sym_cull_distance,
    ACTIONS(1073), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1075), 1,
      anon_sym_effect,
    ACTIONS(1079), 1,
      anon_sym_RBRACE,
    STATE(324), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(120), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [4497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_text,
    ACTIONS(1081), 13,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [4519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 14,
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
  [4539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 14,
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
  [4559] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_RBRACE,
    ACTIONS(1091), 1,
      anon_sym_name,
    ACTIONS(1094), 1,
      anon_sym_animation,
    ACTIONS(1097), 1,
      anon_sym_cull_distance,
    ACTIONS(1100), 1,
      anon_sym_file,
    ACTIONS(1103), 1,
      anon_sym_meshsettings,
    ACTIONS(1106), 1,
      anon_sym_scale,
    STATE(310), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(126), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [4595] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(1061), 1,
      anon_sym_animation,
    ACTIONS(1063), 1,
      anon_sym_cull_distance,
    ACTIONS(1065), 1,
      anon_sym_file,
    ACTIONS(1067), 1,
      anon_sym_meshsettings,
    ACTIONS(1069), 1,
      anon_sym_scale,
    ACTIONS(1109), 1,
      anon_sym_RBRACE,
    STATE(310), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(119), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [4631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 14,
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
  [4651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_text,
    ACTIONS(1113), 13,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [4673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_animationrotation,
    ACTIONS(1121), 1,
      sym_assign_equal,
    ACTIONS(1117), 11,
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
  [4696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_animationrotation,
    ACTIONS(1127), 1,
      sym_assign_equal,
    ACTIONS(1123), 11,
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
  [4719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_animationrotation,
    ACTIONS(1133), 1,
      sym_assign_equal,
    ACTIONS(1129), 11,
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
  [4742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_animationrotation,
    ACTIONS(1139), 1,
      sym_assign_equal,
    ACTIONS(1135), 11,
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
  [4765] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_RBRACE,
    ACTIONS(1143), 1,
      anon_sym_animatedmaptext,
    ACTIONS(1145), 1,
      anon_sym_pdxmesh,
    ACTIONS(1147), 1,
      anon_sym_pdxparticle,
    ACTIONS(1149), 1,
      anon_sym_arrowType,
    ACTIONS(1151), 1,
      anon_sym_tradeRouteType,
    STATE(139), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [4796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_animationrotation,
    ACTIONS(1157), 1,
      sym_assign_equal,
    ACTIONS(1153), 11,
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
  [4819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(1159), 11,
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
  [4840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 13,
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
  [4859] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_animatedmaptext,
    ACTIONS(1145), 1,
      anon_sym_pdxmesh,
    ACTIONS(1147), 1,
      anon_sym_pdxparticle,
    ACTIONS(1149), 1,
      anon_sym_arrowType,
    ACTIONS(1151), 1,
      anon_sym_tradeRouteType,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    STATE(134), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [4890] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_RBRACE,
    ACTIONS(1169), 1,
      anon_sym_animatedmaptext,
    ACTIONS(1172), 1,
      anon_sym_pdxmesh,
    ACTIONS(1175), 1,
      anon_sym_pdxparticle,
    ACTIONS(1178), 1,
      anon_sym_arrowType,
    ACTIONS(1181), 1,
      anon_sym_tradeRouteType,
    STATE(139), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(1184), 11,
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
  [4942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_text,
    ACTIONS(1188), 12,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_cursor,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
  [4963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_animationrotation,
    ACTIONS(1196), 1,
      sym_assign_equal,
    ACTIONS(1192), 11,
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
  [4986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_animationrotation,
    ACTIONS(1202), 1,
      sym_assign_equal,
    ACTIONS(1198), 11,
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
  [5009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_animationrotation,
    ACTIONS(1208), 1,
      sym_assign_equal,
    ACTIONS(1204), 11,
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
  [5032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      sym_assign_equal,
    ACTIONS(1210), 11,
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
  [5052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_assign_equal,
    ACTIONS(1214), 11,
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
  [5072] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_RBRACE,
    ACTIONS(1220), 1,
      anon_sym_name,
    ACTIONS(1223), 1,
      anon_sym_texture,
    ACTIONS(1226), 1,
      anon_sym_normal,
    ACTIONS(1229), 1,
      anon_sym_specular,
    ACTIONS(1232), 1,
      anon_sym_effect,
    STATE(338), 1,
      sym__statement_gfx_name,
    STATE(147), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [5104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      sym_assign_equal,
    ACTIONS(1235), 11,
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
  [5124] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(1075), 1,
      anon_sym_effect,
    ACTIONS(1239), 1,
      anon_sym_RBRACE,
    ACTIONS(1241), 1,
      anon_sym_texture,
    ACTIONS(1243), 1,
      anon_sym_normal,
    ACTIONS(1245), 1,
      anon_sym_specular,
    STATE(338), 1,
      sym__statement_gfx_name,
    STATE(158), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [5156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_animationrotation,
    ACTIONS(1247), 11,
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
  [5176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      sym_assign_equal,
    ACTIONS(1251), 11,
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
  [5196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      sym_assign_equal,
    ACTIONS(1255), 11,
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
  [5216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_animationrotation,
    ACTIONS(1259), 11,
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
  [5236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      sym_assign_equal,
    ACTIONS(1263), 11,
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
  [5256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_text,
    ACTIONS(1271), 1,
      sym_assign_equal,
    ACTIONS(1267), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [5278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      sym_assign_equal,
    ACTIONS(1273), 11,
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
  [5298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      sym_assign_equal,
    ACTIONS(1277), 11,
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
  [5318] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(1075), 1,
      anon_sym_effect,
    ACTIONS(1241), 1,
      anon_sym_texture,
    ACTIONS(1243), 1,
      anon_sym_normal,
    ACTIONS(1245), 1,
      anon_sym_specular,
    ACTIONS(1281), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      sym__statement_gfx_name,
    STATE(147), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [5350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      sym_assign_equal,
    ACTIONS(1283), 11,
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
  [5370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_text,
    ACTIONS(1291), 1,
      sym_assign_equal,
    ACTIONS(1287), 10,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_cursor,
  [5392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      anon_sym_text,
    ACTIONS(1297), 1,
      sym_assign_equal,
    ACTIONS(1293), 10,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_cursor,
  [5414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1303), 1,
      sym_assign_equal,
    ACTIONS(1299), 10,
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
  [5436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_animationrotation,
    ACTIONS(1305), 11,
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
  [5456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_animationrotation,
    ACTIONS(1309), 11,
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
  [5476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_animationrotation,
    ACTIONS(1313), 11,
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
  [5496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_animationrotation,
    ACTIONS(1317), 11,
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
  [5516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_animationrotation,
    ACTIONS(1321), 11,
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
  [5536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      anon_sym_animationrotation,
    ACTIONS(1325), 11,
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
  [5556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_text,
    ACTIONS(1333), 1,
      sym_assign_equal,
    ACTIONS(1329), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [5578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      sym_assign_equal,
    ACTIONS(1335), 11,
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
  [5598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      sym_assign_equal,
    ACTIONS(1339), 10,
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
  [5617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 1,
      sym_assign_equal,
    ACTIONS(1343), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [5636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      sym_assign_equal,
    ACTIONS(1347), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [5655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 11,
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
  [5672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_text,
    ACTIONS(1353), 10,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_cursor,
  [5691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 11,
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
  [5708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_text,
    ACTIONS(1359), 10,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_cursor,
  [5727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 1,
      anon_sym_text,
    ACTIONS(1363), 10,
      anon_sym_RBRACE,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_cursor,
  [5746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 11,
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
  [5763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 11,
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
  [5780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 11,
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
  [5797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 11,
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
  [5814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 11,
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
  [5831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 11,
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
  [5848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 11,
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
  [5865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 11,
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
  [5882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 11,
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
  [5899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      sym_assign_equal,
    ACTIONS(1385), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [5918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 11,
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
  [5935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      sym_assign_equal,
    ACTIONS(1391), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [5954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      sym_assign_equal,
    ACTIONS(1395), 10,
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
  [5973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      sym_assign_equal,
    ACTIONS(1399), 10,
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
  [5992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      sym_assign_equal,
    ACTIONS(1403), 10,
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
  [6011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      sym_assign_equal,
    ACTIONS(1407), 10,
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
  [6030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_color,
    ACTIONS(1415), 1,
      sym_assign_equal,
    ACTIONS(1411), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [6051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_color,
    ACTIONS(1421), 1,
      sym_assign_equal,
    ACTIONS(1417), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [6072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_color,
    ACTIONS(1427), 1,
      sym_assign_equal,
    ACTIONS(1423), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [6093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      sym_assign_equal,
    ACTIONS(1429), 10,
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
  [6112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      sym_assign_equal,
    ACTIONS(1433), 10,
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
  [6131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      sym_assign_equal,
    ACTIONS(1437), 10,
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
  [6150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      sym_assign_equal,
    ACTIONS(1441), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      sym_assign_equal,
    ACTIONS(1445), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [6188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      sym_assign_equal,
    ACTIONS(1449), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_text,
    ACTIONS(1453), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [6226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 11,
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
  [6243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_text,
    ACTIONS(1459), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [6262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      sym_assign_equal,
    ACTIONS(1463), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 11,
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
  [6298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 11,
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
  [6315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      sym_assign_equal,
    ACTIONS(1471), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      sym_assign_equal,
    ACTIONS(1475), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 11,
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
  [6370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      sym_assign_equal,
    ACTIONS(1483), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_texture,
    ACTIONS(1481), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 10,
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
  [6407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 10,
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
  [6423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_color,
    ACTIONS(1491), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [6441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 10,
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
  [6457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 10,
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
  [6489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [6505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 10,
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
  [6521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [6553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [6585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 10,
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
  [6617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [6633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [6649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 10,
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
  [6665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_position,
      anon_sym_background,
      anon_sym_orientation,
      anon_sym_priority,
      anon_sym_scrollbartype,
  [6681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 10,
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
  [6713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1529), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 10,
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
  [6745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_orientation,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
      anon_sym_fixedsize,
  [6761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 10,
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
  [6777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 10,
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
  [6793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 10,
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
  [6809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 10,
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
  [6825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1545), 1,
      sym_assign_equal,
    ACTIONS(1543), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [6843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1547), 10,
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
  [6859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 10,
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
  [6875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 10,
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
  [6891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 1,
      anon_sym_color,
    ACTIONS(1553), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [6909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1559), 1,
      anon_sym_color,
    ACTIONS(1557), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [6927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1561), 10,
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
  [6943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1563), 10,
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
  [6959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1565), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1569), 1,
      anon_sym_color,
    ACTIONS(1567), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [6993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1571), 10,
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
  [7009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1573), 10,
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
  [7025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1577), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_texture,
    ACTIONS(1575), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [7043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1579), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [7059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1581), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [7075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [7091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1585), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [7107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1587), 10,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_editBoxType,
      anon_sym_instantTextBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [7123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1589), 10,
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
  [7139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 10,
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
  [7155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1593), 10,
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
  [7171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 10,
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
  [7187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 10,
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
  [7203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 1,
      sym_assign_equal,
    ACTIONS(828), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1603), 1,
      sym_assign_equal,
    ACTIONS(1601), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1605), 1,
      sym_assign_equal,
    ACTIONS(1299), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1609), 1,
      sym_assign_equal,
    ACTIONS(1607), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1611), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 1,
      sym_assign_equal,
    ACTIONS(1613), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1617), 1,
      sym_assign_equal,
    ACTIONS(1411), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1621), 1,
      sym_assign_equal,
    ACTIONS(1619), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1623), 1,
      sym_assign_equal,
    ACTIONS(33), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1627), 1,
      sym_assign_equal,
    ACTIONS(1625), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1631), 1,
      anon_sym_text,
    ACTIONS(1629), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_borderSize,
      anon_sym_font,
      anon_sym_position,
      anon_sym_textureFile,
      anon_sym_maxWidth,
      anon_sym_maxHeight,
  [7388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1635), 1,
      sym_assign_equal,
    ACTIONS(1633), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_scale,
  [7405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1639), 1,
      sym_assign_equal,
    ACTIONS(1637), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1643), 1,
      sym_assign_equal,
    ACTIONS(1641), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1645), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1649), 1,
      sym_assign_equal,
    ACTIONS(1647), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1651), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      sym_assign_equal,
    ACTIONS(1653), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [7502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1657), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1659), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1665), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_scale,
  [7586] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(7), 1,
      anon_sym_objectTypes,
    ACTIONS(9), 1,
      anon_sym_bitmapfonts,
    ACTIONS(1667), 1,
      ts_builtin_sym_end,
    STATE(303), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [7608] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1669), 1,
      anon_sym_RBRACE,
    ACTIONS(1671), 1,
      anon_sym_name,
    ACTIONS(1674), 1,
      anon_sym_type,
    ACTIONS(1677), 1,
      anon_sym_scale,
    STATE(386), 1,
      sym__statement_gfx_name,
    STATE(289), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [7632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7646] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(370), 1,
      anon_sym_size,
    ACTIONS(1682), 1,
      anon_sym_RBRACE,
    ACTIONS(1684), 1,
      anon_sym_linewidth,
    STATE(300), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(380), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [7670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 1,
      sym_assign_equal,
    ACTIONS(1690), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [7714] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_RBRACE,
    ACTIONS(1696), 1,
      anon_sym_name,
    ACTIONS(1699), 1,
      anon_sym_speed,
    ACTIONS(1702), 1,
      anon_sym_textblock,
    STATE(384), 1,
      sym__statement_gfx_name,
    STATE(295), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [7738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7752] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(1069), 1,
      anon_sym_scale,
    ACTIONS(1705), 1,
      anon_sym_RBRACE,
    ACTIONS(1707), 1,
      anon_sym_type,
    STATE(386), 1,
      sym__statement_gfx_name,
    STATE(289), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [7776] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(1709), 1,
      anon_sym_RBRACE,
    ACTIONS(1711), 1,
      anon_sym_speed,
    ACTIONS(1713), 1,
      anon_sym_textblock,
    STATE(384), 1,
      sym__statement_gfx_name,
    STATE(299), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [7800] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(1711), 1,
      anon_sym_speed,
    ACTIONS(1713), 1,
      anon_sym_textblock,
    ACTIONS(1715), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      sym__statement_gfx_name,
    STATE(295), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [7824] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      anon_sym_RBRACE,
    ACTIONS(1719), 1,
      anon_sym_name,
    ACTIONS(1722), 1,
      anon_sym_size,
    ACTIONS(1725), 1,
      anon_sym_linewidth,
    STATE(300), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(380), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [7848] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(370), 1,
      anon_sym_size,
    ACTIONS(1684), 1,
      anon_sym_linewidth,
    ACTIONS(1728), 1,
      anon_sym_RBRACE,
    STATE(291), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(380), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [7872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1730), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7886] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1732), 1,
      ts_builtin_sym_end,
    ACTIONS(1734), 1,
      anon_sym_spriteTypes,
    ACTIONS(1737), 1,
      anon_sym_objectTypes,
    ACTIONS(1740), 1,
      anon_sym_bitmapfonts,
    STATE(303), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [7908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1743), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7922] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(1069), 1,
      anon_sym_scale,
    ACTIONS(1707), 1,
      anon_sym_type,
    ACTIONS(1745), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      sym__statement_gfx_name,
    STATE(297), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [7946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1553), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 1,
      sym_assign_equal,
    ACTIONS(1747), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [7976] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_textcolors,
    ACTIONS(1751), 1,
      anon_sym_RBRACE,
    ACTIONS(1753), 1,
      anon_sym_bitmapfont,
    STATE(400), 1,
      sym__textcolors,
    STATE(326), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [7997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [8010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [8023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1761), 1,
      sym_assign_equal,
    ACTIONS(1759), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1765), 1,
      sym_assign_equal,
    ACTIONS(1763), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8053] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_textcolors,
    ACTIONS(1753), 1,
      anon_sym_bitmapfont,
    ACTIONS(1767), 1,
      anon_sym_RBRACE,
    STATE(400), 1,
      sym__textcolors,
    STATE(308), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [8074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1771), 1,
      sym_assign_equal,
    ACTIONS(1769), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1775), 1,
      sym_assign_equal,
    ACTIONS(1773), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1779), 1,
      sym_assign_equal,
    ACTIONS(1777), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1783), 1,
      sym_assign_equal,
    ACTIONS(1781), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1785), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [8147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 1,
      sym_assign_equal,
    ACTIONS(1787), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1793), 1,
      sym_assign_equal,
    ACTIONS(1791), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [8190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1797), 1,
      anon_sym_RBRACE,
    ACTIONS(1799), 1,
      anon_sym_windowType,
    ACTIONS(1801), 1,
      anon_sym_textBoxType,
    STATE(325), 4,
      sym__guiTypes_type,
      sym__windowType,
      sym__textBoxType,
      aux_sym__guiTypes_block_repeat1,
  [8209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1799), 1,
      anon_sym_windowType,
    ACTIONS(1801), 1,
      anon_sym_textBoxType,
    ACTIONS(1803), 1,
      anon_sym_RBRACE,
    STATE(322), 4,
      sym__guiTypes_type,
      sym__windowType,
      sym__textBoxType,
      aux_sym__guiTypes_block_repeat1,
  [8228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1807), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1805), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_effect,
  [8243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1809), 1,
      anon_sym_RBRACE,
    ACTIONS(1811), 1,
      anon_sym_windowType,
    ACTIONS(1814), 1,
      anon_sym_textBoxType,
    STATE(325), 4,
      sym__guiTypes_type,
      sym__windowType,
      sym__textBoxType,
      aux_sym__guiTypes_block_repeat1,
  [8262] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1817), 1,
      anon_sym_RBRACE,
    ACTIONS(1819), 1,
      anon_sym_textcolors,
    ACTIONS(1822), 1,
      anon_sym_bitmapfont,
    STATE(400), 1,
      sym__textcolors,
    STATE(326), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [8283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1825), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1827), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1829), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1831), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1833), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1835), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1837), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(1839), 1,
      anon_sym_RBRACE,
    ACTIONS(1841), 1,
      anon_sym_size,
    STATE(409), 1,
      sym__statement_gfx_name,
    STATE(340), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [8387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1843), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1845), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1847), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1849), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1851), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8447] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1853), 1,
      anon_sym_RBRACE,
    ACTIONS(1855), 1,
      anon_sym_name,
    ACTIONS(1858), 1,
      anon_sym_size,
    STATE(409), 1,
      sym__statement_gfx_name,
    STATE(340), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [8467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1861), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1863), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8491] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    ACTIONS(1841), 1,
      anon_sym_size,
    ACTIONS(1865), 1,
      anon_sym_RBRACE,
    STATE(409), 1,
      sym__statement_gfx_name,
    STATE(334), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [8511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1867), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1869), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1871), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1873), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1875), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8571] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_x,
    ACTIONS(1879), 1,
      anon_sym_y,
    STATE(441), 1,
      sym__entry_x_integer,
    STATE(442), 1,
      sym__entry_y_integer,
    STATE(601), 1,
      sym__statement_xy_integer,
  [8590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1883), 1,
      sym_assign_equal,
    ACTIONS(1881), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [8603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1885), 1,
      ts_builtin_sym_end,
    ACTIONS(1887), 1,
      anon_sym_guiTypes,
    STATE(351), 3,
      sym__gui_types_definition,
      sym__guiTypes,
      aux_sym_dot_gui_repeat1,
  [8618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_guiTypes,
    ACTIONS(1890), 1,
      ts_builtin_sym_end,
    STATE(351), 3,
      sym__gui_types_definition,
      sym__guiTypes,
      aux_sym_dot_gui_repeat1,
  [8633] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_x,
    ACTIONS(1879), 1,
      anon_sym_y,
    STATE(441), 1,
      sym__entry_x_integer,
    STATE(442), 1,
      sym__entry_y_integer,
    STATE(594), 1,
      sym__statement_xy_integer,
  [8652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_x,
    ACTIONS(1879), 1,
      anon_sym_y,
    STATE(441), 1,
      sym__entry_x_integer,
    STATE(442), 1,
      sym__entry_y_integer,
    STATE(515), 1,
      sym__statement_xy_integer,
  [8671] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_x,
    ACTIONS(1879), 1,
      anon_sym_y,
    STATE(441), 1,
      sym__entry_x_integer,
    STATE(442), 1,
      sym__entry_y_integer,
    STATE(596), 1,
      sym__statement_xy_integer,
  [8690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1894), 1,
      sym_assign_equal,
    ACTIONS(1892), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8703] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_x,
    ACTIONS(1879), 1,
      anon_sym_y,
    STATE(441), 1,
      sym__entry_x_integer,
    STATE(442), 1,
      sym__entry_y_integer,
    STATE(566), 1,
      sym__statement_xy_integer,
  [8722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1898), 1,
      sym_assign_equal,
    ACTIONS(1896), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1902), 1,
      sym_assign_equal,
    ACTIONS(1900), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1906), 1,
      sym_assign_equal,
    ACTIONS(1904), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_x,
    ACTIONS(1879), 1,
      anon_sym_y,
    STATE(441), 1,
      sym__entry_x_integer,
    STATE(442), 1,
      sym__entry_y_integer,
    STATE(604), 1,
      sym__statement_xy_integer,
  [8780] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_x,
    ACTIONS(1879), 1,
      anon_sym_y,
    STATE(441), 1,
      sym__entry_x_integer,
    STATE(442), 1,
      sym__entry_y_integer,
    STATE(559), 1,
      sym__statement_xy_integer,
  [8799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1910), 1,
      sym_assign_equal,
    ACTIONS(1908), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [8812] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_x,
    ACTIONS(1879), 1,
      anon_sym_y,
    STATE(441), 1,
      sym__entry_x_integer,
    STATE(442), 1,
      sym__entry_y_integer,
    STATE(600), 1,
      sym__statement_xy_integer,
  [8831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1914), 1,
      sym_assign_equal,
    ACTIONS(1912), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8844] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1916), 1,
      anon_sym_x,
    ACTIONS(1918), 1,
      anon_sym_y,
    STATE(493), 1,
      sym__entry_y_float,
    STATE(494), 1,
      sym__entry_x_float,
    STATE(553), 1,
      sym__statement_xy_float,
  [8863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1920), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [8873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1922), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1924), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1926), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1928), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1930), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1932), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1934), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [8943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1936), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1938), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1940), 1,
      anon_sym_RBRACE,
    ACTIONS(1942), 1,
      aux_sym__integer_positive_token1,
    STATE(377), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [8977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1947), 1,
      sym_assign_equal,
    ACTIONS(1945), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [8989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1949), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1951), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [9009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1953), 1,
      anon_sym_RBRACE,
    ACTIONS(1955), 1,
      aux_sym__integer_positive_token1,
    STATE(377), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [9023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1957), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [9033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1959), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [9043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1961), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [9053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1963), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [9063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1965), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [9073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1967), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [9083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1971), 1,
      sym_assign_equal,
    ACTIONS(1969), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [9095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1975), 1,
      sym_assign_equal,
    ACTIONS(1973), 3,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
  [9107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1979), 1,
      sym_assign_equal,
    ACTIONS(1977), 3,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
  [9119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(26), 1,
      sym__boolean_yes_no,
    ACTIONS(1981), 2,
      anon_sym_yes,
      anon_sym_no,
  [9130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(249), 1,
      sym__boolean_0_1,
    ACTIONS(1983), 2,
      anon_sym_0,
      anon_sym_1,
  [9141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1985), 3,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
  [9150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1987), 3,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
  [9159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1989), 1,
      anon_sym_RBRACE,
    ACTIONS(1991), 1,
      sym_string,
    STATE(421), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [9172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1993), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [9181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1997), 1,
      sym_assign_equal,
    ACTIONS(1995), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [9192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(117), 1,
      sym__boolean_yes_no,
    ACTIONS(1999), 2,
      anon_sym_yes,
      anon_sym_no,
  [9203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(250), 1,
      sym__boolean_yes_no,
    ACTIONS(2001), 2,
      anon_sym_yes,
      anon_sym_no,
  [9214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2003), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [9223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 1,
      sym__boolean_yes_no,
    ACTIONS(2005), 2,
      anon_sym_yes,
      anon_sym_no,
  [9234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2007), 3,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
  [9243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym__boolean_yes_no,
    ACTIONS(2009), 2,
      anon_sym_yes,
      anon_sym_no,
  [9254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2011), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [9263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(80), 1,
      sym__boolean_yes_no,
    ACTIONS(2013), 2,
      anon_sym_yes,
      anon_sym_no,
  [9274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2017), 1,
      sym_assign_equal,
    ACTIONS(2015), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [9285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2021), 1,
      sym_assign_equal,
    ACTIONS(2019), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [9296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(165), 1,
      sym__boolean_yes_no,
    ACTIONS(2023), 2,
      anon_sym_yes,
      anon_sym_no,
  [9307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2025), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [9316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2027), 3,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
  [9325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2029), 3,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
  [9334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(125), 1,
      sym__boolean_yes_no,
    ACTIONS(2031), 2,
      anon_sym_yes,
      anon_sym_no,
  [9345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2035), 1,
      sym_assign_equal,
    ACTIONS(2033), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [9356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(225), 1,
      sym__boolean_yes_no,
    ACTIONS(2037), 2,
      anon_sym_yes,
      anon_sym_no,
  [9367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2039), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [9376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(302), 1,
      sym__boolean_yes_no,
    ACTIONS(2041), 2,
      anon_sym_yes,
      anon_sym_no,
  [9387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(77), 1,
      sym__boolean_yes_no,
    ACTIONS(2043), 2,
      anon_sym_yes,
      anon_sym_no,
  [9398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2045), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [9407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1991), 1,
      sym_string,
    ACTIONS(2047), 1,
      anon_sym_RBRACE,
    STATE(395), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [9420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(175), 1,
      sym__boolean_yes_no,
    ACTIONS(2049), 2,
      anon_sym_yes,
      anon_sym_no,
  [9431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2051), 1,
      anon_sym_RBRACE,
    ACTIONS(2053), 1,
      sym_string,
    STATE(421), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [9444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(236), 1,
      sym__boolean_yes_no,
    ACTIONS(2056), 2,
      anon_sym_yes,
      anon_sym_no,
  [9455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2058), 1,
      aux_sym__integer_positive_token1,
    STATE(381), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [9466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2060), 3,
      anon_sym_RBRACE,
      anon_sym_windowType,
      anon_sym_textBoxType,
  [9475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2062), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [9484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2066), 1,
      sym_assign_equal,
    ACTIONS(2064), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [9495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2068), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [9504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2070), 1,
      anon_sym_LBRACE,
    STATE(376), 1,
      sym__gfx_textblock,
  [9514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2072), 1,
      anon_sym_LBRACE,
    STATE(463), 1,
      sym__guiTypes_block,
  [9524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2074), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [9532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_name,
    STATE(455), 1,
      sym__statement_gfx_name,
  [9542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2076), 1,
      anon_sym_LBRACE,
    STATE(278), 1,
      sym__textcolors_block,
  [9552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2078), 1,
      aux_sym__float_positive_token1,
    STATE(434), 1,
      sym__float_positive,
  [9562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2080), 1,
      aux_sym__float_positive_token1,
    STATE(435), 1,
      sym__float_positive,
  [9572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2082), 1,
      aux_sym__float_positive_token1,
    STATE(602), 1,
      sym__float_positive,
  [9582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2084), 1,
      anon_sym_LBRACE,
    STATE(335), 1,
      sym__tradeRouteType_block,
  [9592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2086), 1,
      anon_sym_LBRACE,
    STATE(342), 1,
      sym__arrowType_block,
  [9602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2088), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(2090), 1,
      aux_sym__statement_gfx_name_token2,
  [9612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2092), 1,
      anon_sym_LBRACE,
    STATE(346), 1,
      sym__pdxparticle_block,
  [9622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2094), 1,
      aux_sym__float_positive_token1,
    STATE(86), 1,
      sym__float_positive,
  [9632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1879), 1,
      anon_sym_y,
    STATE(557), 1,
      sym__entry_y_integer,
  [9642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_x,
    STATE(557), 1,
      sym__entry_x_integer,
  [9652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2096), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(2098), 1,
      aux_sym__statement_gfx_name_token2,
  [9662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2100), 1,
      anon_sym_LBRACE,
    STATE(341), 1,
      sym__pdxmesh_block,
  [9672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2102), 1,
      aux_sym__float_positive_token1,
    STATE(491), 1,
      sym__float_positive,
  [9682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2104), 1,
      aux_sym__float_positive_token1,
    STATE(492), 1,
      sym__float_positive,
  [9692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2106), 1,
      anon_sym_LBRACE,
    STATE(332), 1,
      sym__animatedmaptext_block,
  [9702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2108), 1,
      aux_sym__integer_positive_token1,
    STATE(206), 1,
      sym__integer_positive,
  [9712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2110), 1,
      anon_sym_LBRACE,
    STATE(219), 1,
      sym__progressbartype_block,
  [9722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2112), 1,
      aux_sym__float_positive_token1,
    STATE(445), 1,
      sym__float_positive,
  [9732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2114), 1,
      anon_sym_LBRACE,
    STATE(239), 1,
      sym__frameAnimatedSpriteType_block,
  [9742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2116), 1,
      aux_sym__float_positive_token1,
    STATE(446), 1,
      sym__float_positive,
  [9752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2118), 1,
      anon_sym_type,
    ACTIONS(2120), 1,
      sym_assign_equal,
  [9762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2122), 1,
      anon_sym_type,
    STATE(544), 1,
      sym__statement_gfx_animation_type,
  [9772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2124), 1,
      anon_sym_index,
    STATE(503), 1,
      sym__statement_gfx_meshsettings_index,
  [9782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2126), 1,
      aux_sym__integer_positive_token1,
    STATE(20), 1,
      sym__integer_positive,
  [9792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2128), 1,
      anon_sym_LBRACE,
    STATE(240), 1,
      sym__maskedShieldType_block,
  [9802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2130), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [9810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2132), 1,
      anon_sym_LBRACE,
    STATE(411), 1,
      sym__textBoxType_block,
  [9820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2134), 1,
      anon_sym_LBRACE,
    STATE(424), 1,
      sym__windowType_block,
  [9830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2136), 1,
      aux_sym__integer_positive_token1,
    STATE(28), 1,
      sym__integer_positive,
  [9840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2138), 1,
      aux_sym__integer_positive_token1,
    STATE(204), 1,
      sym__integer_positive,
  [9850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2140), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [9858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2142), 1,
      anon_sym_LBRACE,
    STATE(242), 1,
      sym__corneredTileSpriteType_block,
  [9868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2144), 1,
      anon_sym_LBRACE,
    STATE(235), 1,
      sym__LineChartType_block,
  [9878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2146), 1,
      anon_sym_LBRACE,
    STATE(243), 1,
      sym__textSpriteType_block,
  [9888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2148), 1,
      anon_sym_LBRACE,
    STATE(247), 1,
      sym__spriteType_block,
  [9898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2150), 1,
      aux_sym__integer_positive_token1,
    STATE(29), 1,
      sym__integer_positive,
  [9908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2152), 2,
      anon_sym_RBRACE,
      sym_string,
  [9916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2154), 1,
      anon_sym_id,
    STATE(454), 1,
      sym__statement_gfx_animation_id,
  [9926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2156), 1,
      anon_sym_LBRACE,
    STATE(237), 1,
      sym__PieChartType_block,
  [9936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2158), 1,
      aux_sym__orientation_value_token1,
    STATE(46), 1,
      sym__orientation_value,
  [9946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2160), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym__gfx_animation_block,
  [9956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2162), 1,
      anon_sym_LBRACE,
    STATE(427), 1,
      sym__bitmapfont_block,
  [9966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2164), 2,
      anon_sym_DQUOTEINGAME_DQUOTE,
      anon_sym_DQUOTEFRONTEND_DQUOTE,
  [9974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2166), 1,
      anon_sym_RBRACE,
    ACTIONS(2168), 1,
      sym_assign_equal,
  [9984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2170), 1,
      anon_sym_shader_file,
    STATE(588), 1,
      sym__statement_gfx_meshsettings_shader_file,
  [9994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2172), 1,
      anon_sym_shader_file,
    ACTIONS(2174), 1,
      sym_assign_equal,
  [10004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2176), 1,
      aux_sym__float_positive_token1,
    STATE(166), 1,
      sym__float_positive,
  [10014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2178), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [10022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2180), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [10030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2182), 1,
      anon_sym_shader,
    STATE(477), 1,
      sym__statement_gfx_meshsettings_shader,
  [10040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2184), 1,
      anon_sym_shader,
    ACTIONS(2186), 1,
      sym_assign_equal,
  [10050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2188), 1,
      anon_sym_texture_specular,
    STATE(482), 1,
      sym__statement_gfx_meshsettings_texture_specular,
  [10060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2190), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym__mod_dependencies_block,
  [10070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2192), 1,
      anon_sym_texture_specular,
    ACTIONS(2194), 1,
      sym_assign_equal,
  [10080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2196), 1,
      aux_sym__integer_positive_token1,
    STATE(128), 1,
      sym__integer_positive,
  [10090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2198), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym__mod_tags_block,
  [10100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2200), 1,
      aux_sym__float_positive_token1,
    STATE(121), 1,
      sym__float_positive,
  [10110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2202), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(186), 1,
      sym__mod_replace_path_folder,
  [10120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2204), 1,
      aux_sym__float_positive_token1,
    STATE(531), 1,
      sym__float_positive,
  [10130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2206), 1,
      aux_sym__float_positive_token1,
    STATE(532), 1,
      sym__float_positive,
  [10140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1916), 1,
      anon_sym_x,
    STATE(570), 1,
      sym__entry_x_float,
  [10150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1918), 1,
      anon_sym_y,
    STATE(570), 1,
      sym__entry_y_float,
  [10160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2208), 1,
      aux_sym__integer_positive_token1,
    STATE(425), 1,
      sym__integer_positive,
  [10170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2210), 1,
      aux_sym__integer_positive_token1,
    STATE(374), 1,
      sym__integer_positive,
  [10180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2212), 1,
      anon_sym_LBRACE,
    STATE(257), 1,
      sym__instantTextBoxType_block,
  [10190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2214), 1,
      aux_sym__float_positive_token1,
    STATE(375), 1,
      sym__float_positive,
  [10200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2094), 1,
      aux_sym__float_positive_token1,
    STATE(86), 1,
      sym__float_positive,
  [10210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2216), 1,
      anon_sym_RBRACE,
    ACTIONS(2218), 1,
      sym_assign_equal,
  [10220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2220), 1,
      anon_sym_texture_normal,
    STATE(484), 1,
      sym__statement_gfx_meshsettings_texture_normal,
  [10230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2222), 1,
      anon_sym_texture_diffuse,
    ACTIONS(2224), 1,
      sym_assign_equal,
  [10240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2226), 1,
      anon_sym_texture_diffuse,
    STATE(501), 1,
      sym__statement_gfx_meshsettings_texture_diffuse,
  [10250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2228), 1,
      anon_sym_texture_normal,
    ACTIONS(2230), 1,
      sym_assign_equal,
  [10260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2232), 1,
      anon_sym_LBRACE,
    STATE(258), 1,
      sym__editBoxType_block,
  [10270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2234), 1,
      aux_sym__integer_positive_token1,
    STATE(561), 1,
      sym__integer_positive,
  [10280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2236), 1,
      aux_sym__integer_positive_token1,
    STATE(229), 1,
      sym__integer_positive,
  [10290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2238), 1,
      aux_sym__float_positive_token1,
    STATE(287), 1,
      sym__float_positive,
  [10300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2240), 1,
      anon_sym_LBRACE,
    STATE(254), 1,
      sym__listBoxType_block,
  [10310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2242), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [10318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2244), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [10326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2246), 1,
      anon_sym_LBRACE,
    STATE(369), 1,
      sym__spriteTypes_block,
  [10336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2248), 1,
      anon_sym_LBRACE,
    STATE(373), 1,
      sym__objectTypes_block,
  [10346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2250), 1,
      anon_sym_LBRACE,
    STATE(379), 1,
      sym__bitmapfonts_block,
  [10356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2252), 1,
      anon_sym_RBRACE,
  [10363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2254), 1,
      aux_sym__animation_entry_dds_token1,
  [10370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2256), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [10377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2258), 1,
      aux_sym__statement_mod_archive_token1,
  [10384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2260), 1,
      sym_string,
  [10391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2262), 1,
      sym_string,
  [10398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2264), 1,
      sym_string,
  [10405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2266), 1,
      sym_string,
  [10412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2268), 1,
      aux_sym__statement_mod_version_token1,
  [10419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2270), 1,
      sym_hexadecimal,
  [10426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2272), 1,
      anon_sym_LBRACE,
  [10433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2274), 1,
      aux_sym__statement_gfx_effect_token1,
  [10440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2276), 1,
      aux_sym__animation_entry_dds_token1,
  [10447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2278), 1,
      aux_sym__animation_entry_dds_token1,
  [10454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2280), 1,
      anon_sym_LBRACE,
  [10461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2282), 1,
      sym_hexadecimal,
  [10468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2284), 1,
      anon_sym_RBRACE,
  [10475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2286), 1,
      anon_sym_RBRACE,
  [10482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2288), 1,
      aux_sym__animation_entry_dds_token1,
  [10489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2290), 1,
      sym_string,
  [10496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2292), 1,
      aux_sym__statement_mod_picture_token1,
  [10503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2294), 1,
      anon_sym_LBRACE,
  [10510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2296), 1,
      anon_sym_type,
  [10517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2298), 1,
      sym_string,
  [10524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2300), 1,
      aux_sym__statement_gfx_file_token1,
  [10531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2302), 1,
      sym_string,
  [10538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2304), 1,
      sym_string,
  [10545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2306), 1,
      sym_byte,
  [10552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2308), 1,
      anon_sym_RBRACE,
  [10559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2310), 1,
      anon_sym_RBRACE,
  [10566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2312), 1,
      anon_sym_LBRACE,
  [10573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2314), 1,
      sym_string,
  [10580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2316), 1,
      anon_sym_RBRACE,
  [10587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2318), 1,
      ts_builtin_sym_end,
  [10594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2320), 1,
      aux_sym__statement_mod_supported_version_token1,
  [10601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2322), 1,
      anon_sym_centre,
  [10608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2324), 1,
      anon_sym_LBRACE,
  [10615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2326), 1,
      anon_sym_LBRACE,
  [10622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2328), 1,
      anon_sym_RBRACE,
  [10629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2330), 1,
      anon_sym_LBRACE,
  [10636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2332), 1,
      sym_string,
  [10643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2334), 1,
      sym_string,
  [10650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2336), 1,
      anon_sym_RBRACE,
  [10657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2338), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [10664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2340), 1,
      anon_sym_RBRACE,
  [10671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2342), 1,
      anon_sym_RBRACE,
  [10678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2344), 1,
      anon_sym_texture_diffuse,
  [10685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2346), 1,
      sym_integer,
  [10692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2348), 1,
      sym_integer,
  [10699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2350), 1,
      sym_integer,
  [10706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2352), 1,
      ts_builtin_sym_end,
  [10713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2354), 1,
      anon_sym_RBRACE,
  [10720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2356), 1,
      sym_float,
  [10727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2358), 1,
      sym_float,
  [10734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2360), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [10741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2362), 1,
      anon_sym_RBRACE,
  [10748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2364), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [10755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2366), 1,
      anon_sym_LBRACE,
  [10762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2368), 1,
      anon_sym_LBRACE,
  [10769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2370), 1,
      anon_sym_texture_normal,
  [10776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2372), 1,
      aux_sym__animation_entry_dds_token1,
  [10783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2374), 1,
      anon_sym_LBRACE,
  [10790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2376), 1,
      anon_sym_LBRACE,
  [10797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2378), 1,
      aux_sym__statement_gfx_alphamaskfile_token1,
  [10804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2380), 1,
      anon_sym_LBRACE,
  [10811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2382), 1,
      sym_string,
  [10818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2384), 1,
      anon_sym_texture_specular,
  [10825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2386), 1,
      aux_sym__animation_entry_dds_token1,
  [10832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2388), 1,
      anon_sym_LBRACE,
  [10839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2390), 1,
      sym_integer,
  [10846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2392), 1,
      anon_sym_shader,
  [10853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2394), 1,
      aux_sym__statement_gfx_meshsettings_shader_token1,
  [10860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2396), 1,
      sym_angle,
  [10867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2398), 1,
      anon_sym_RBRACE,
  [10874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2400), 1,
      anon_sym_shader_file,
  [10881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2402), 1,
      aux_sym__statement_gfx_meshsettings_shader_file_token1,
  [10888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2404), 1,
      aux_sym__animation_entry_dds_token1,
  [10895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2406), 1,
      anon_sym_RBRACE,
  [10902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2408), 1,
      anon_sym_click,
  [10909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2410), 1,
      anon_sym_RBRACE,
  [10916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2412), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [10923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2414), 1,
      anon_sym_RBRACE,
  [10930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2416), 1,
      anon_sym_LBRACE,
  [10937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2418), 1,
      anon_sym_LBRACE,
  [10944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2420), 1,
      sym_byte,
  [10951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2422), 1,
      anon_sym_RBRACE,
  [10958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2424), 1,
      anon_sym_RBRACE,
  [10965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2426), 1,
      anon_sym_RBRACE,
  [10972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2428), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [10979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2430), 1,
      anon_sym_RBRACE,
  [10986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2432), 1,
      sym_byte,
  [10993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2434), 1,
      anon_sym_LBRACE,
  [11000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2436), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [11007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2438), 1,
      sym_string,
  [11014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2440), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 101,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 288,
  [SMALL_STATE(8)] = 328,
  [SMALL_STATE(9)] = 400,
  [SMALL_STATE(10)] = 439,
  [SMALL_STATE(11)] = 503,
  [SMALL_STATE(12)] = 539,
  [SMALL_STATE(13)] = 603,
  [SMALL_STATE(14)] = 667,
  [SMALL_STATE(15)] = 705,
  [SMALL_STATE(16)] = 740,
  [SMALL_STATE(17)] = 777,
  [SMALL_STATE(18)] = 813,
  [SMALL_STATE(19)] = 847,
  [SMALL_STATE(20)] = 882,
  [SMALL_STATE(21)] = 915,
  [SMALL_STATE(22)] = 950,
  [SMALL_STATE(23)] = 985,
  [SMALL_STATE(24)] = 1019,
  [SMALL_STATE(25)] = 1053,
  [SMALL_STATE(26)] = 1087,
  [SMALL_STATE(27)] = 1118,
  [SMALL_STATE(28)] = 1151,
  [SMALL_STATE(29)] = 1182,
  [SMALL_STATE(30)] = 1213,
  [SMALL_STATE(31)] = 1246,
  [SMALL_STATE(32)] = 1279,
  [SMALL_STATE(33)] = 1329,
  [SMALL_STATE(34)] = 1381,
  [SMALL_STATE(35)] = 1433,
  [SMALL_STATE(36)] = 1483,
  [SMALL_STATE(37)] = 1531,
  [SMALL_STATE(38)] = 1579,
  [SMALL_STATE(39)] = 1631,
  [SMALL_STATE(40)] = 1683,
  [SMALL_STATE(41)] = 1731,
  [SMALL_STATE(42)] = 1783,
  [SMALL_STATE(43)] = 1835,
  [SMALL_STATE(44)] = 1887,
  [SMALL_STATE(45)] = 1917,
  [SMALL_STATE(46)] = 1947,
  [SMALL_STATE(47)] = 1977,
  [SMALL_STATE(48)] = 2029,
  [SMALL_STATE(49)] = 2081,
  [SMALL_STATE(50)] = 2126,
  [SMALL_STATE(51)] = 2171,
  [SMALL_STATE(52)] = 2216,
  [SMALL_STATE(53)] = 2264,
  [SMALL_STATE(54)] = 2312,
  [SMALL_STATE(55)] = 2360,
  [SMALL_STATE(56)] = 2408,
  [SMALL_STATE(57)] = 2456,
  [SMALL_STATE(58)] = 2504,
  [SMALL_STATE(59)] = 2552,
  [SMALL_STATE(60)] = 2600,
  [SMALL_STATE(61)] = 2648,
  [SMALL_STATE(62)] = 2696,
  [SMALL_STATE(63)] = 2744,
  [SMALL_STATE(64)] = 2792,
  [SMALL_STATE(65)] = 2840,
  [SMALL_STATE(66)] = 2888,
  [SMALL_STATE(67)] = 2936,
  [SMALL_STATE(68)] = 2966,
  [SMALL_STATE(69)] = 2993,
  [SMALL_STATE(70)] = 3022,
  [SMALL_STATE(71)] = 3051,
  [SMALL_STATE(72)] = 3078,
  [SMALL_STATE(73)] = 3105,
  [SMALL_STATE(74)] = 3131,
  [SMALL_STATE(75)] = 3175,
  [SMALL_STATE(76)] = 3219,
  [SMALL_STATE(77)] = 3263,
  [SMALL_STATE(78)] = 3287,
  [SMALL_STATE(79)] = 3315,
  [SMALL_STATE(80)] = 3341,
  [SMALL_STATE(81)] = 3365,
  [SMALL_STATE(82)] = 3390,
  [SMALL_STATE(83)] = 3415,
  [SMALL_STATE(84)] = 3440,
  [SMALL_STATE(85)] = 3465,
  [SMALL_STATE(86)] = 3490,
  [SMALL_STATE(87)] = 3515,
  [SMALL_STATE(88)] = 3540,
  [SMALL_STATE(89)] = 3562,
  [SMALL_STATE(90)] = 3584,
  [SMALL_STATE(91)] = 3606,
  [SMALL_STATE(92)] = 3644,
  [SMALL_STATE(93)] = 3684,
  [SMALL_STATE(94)] = 3706,
  [SMALL_STATE(95)] = 3728,
  [SMALL_STATE(96)] = 3766,
  [SMALL_STATE(97)] = 3804,
  [SMALL_STATE(98)] = 3826,
  [SMALL_STATE(99)] = 3852,
  [SMALL_STATE(100)] = 3874,
  [SMALL_STATE(101)] = 3896,
  [SMALL_STATE(102)] = 3936,
  [SMALL_STATE(103)] = 3976,
  [SMALL_STATE(104)] = 3999,
  [SMALL_STATE(105)] = 4024,
  [SMALL_STATE(106)] = 4049,
  [SMALL_STATE(107)] = 4074,
  [SMALL_STATE(108)] = 4101,
  [SMALL_STATE(109)] = 4124,
  [SMALL_STATE(110)] = 4147,
  [SMALL_STATE(111)] = 4172,
  [SMALL_STATE(112)] = 4195,
  [SMALL_STATE(113)] = 4218,
  [SMALL_STATE(114)] = 4243,
  [SMALL_STATE(115)] = 4267,
  [SMALL_STATE(116)] = 4303,
  [SMALL_STATE(117)] = 4327,
  [SMALL_STATE(118)] = 4347,
  [SMALL_STATE(119)] = 4369,
  [SMALL_STATE(120)] = 4405,
  [SMALL_STATE(121)] = 4441,
  [SMALL_STATE(122)] = 4461,
  [SMALL_STATE(123)] = 4497,
  [SMALL_STATE(124)] = 4519,
  [SMALL_STATE(125)] = 4539,
  [SMALL_STATE(126)] = 4559,
  [SMALL_STATE(127)] = 4595,
  [SMALL_STATE(128)] = 4631,
  [SMALL_STATE(129)] = 4651,
  [SMALL_STATE(130)] = 4673,
  [SMALL_STATE(131)] = 4696,
  [SMALL_STATE(132)] = 4719,
  [SMALL_STATE(133)] = 4742,
  [SMALL_STATE(134)] = 4765,
  [SMALL_STATE(135)] = 4796,
  [SMALL_STATE(136)] = 4819,
  [SMALL_STATE(137)] = 4840,
  [SMALL_STATE(138)] = 4859,
  [SMALL_STATE(139)] = 4890,
  [SMALL_STATE(140)] = 4921,
  [SMALL_STATE(141)] = 4942,
  [SMALL_STATE(142)] = 4963,
  [SMALL_STATE(143)] = 4986,
  [SMALL_STATE(144)] = 5009,
  [SMALL_STATE(145)] = 5032,
  [SMALL_STATE(146)] = 5052,
  [SMALL_STATE(147)] = 5072,
  [SMALL_STATE(148)] = 5104,
  [SMALL_STATE(149)] = 5124,
  [SMALL_STATE(150)] = 5156,
  [SMALL_STATE(151)] = 5176,
  [SMALL_STATE(152)] = 5196,
  [SMALL_STATE(153)] = 5216,
  [SMALL_STATE(154)] = 5236,
  [SMALL_STATE(155)] = 5256,
  [SMALL_STATE(156)] = 5278,
  [SMALL_STATE(157)] = 5298,
  [SMALL_STATE(158)] = 5318,
  [SMALL_STATE(159)] = 5350,
  [SMALL_STATE(160)] = 5370,
  [SMALL_STATE(161)] = 5392,
  [SMALL_STATE(162)] = 5414,
  [SMALL_STATE(163)] = 5436,
  [SMALL_STATE(164)] = 5456,
  [SMALL_STATE(165)] = 5476,
  [SMALL_STATE(166)] = 5496,
  [SMALL_STATE(167)] = 5516,
  [SMALL_STATE(168)] = 5536,
  [SMALL_STATE(169)] = 5556,
  [SMALL_STATE(170)] = 5578,
  [SMALL_STATE(171)] = 5598,
  [SMALL_STATE(172)] = 5617,
  [SMALL_STATE(173)] = 5636,
  [SMALL_STATE(174)] = 5655,
  [SMALL_STATE(175)] = 5672,
  [SMALL_STATE(176)] = 5691,
  [SMALL_STATE(177)] = 5708,
  [SMALL_STATE(178)] = 5727,
  [SMALL_STATE(179)] = 5746,
  [SMALL_STATE(180)] = 5763,
  [SMALL_STATE(181)] = 5780,
  [SMALL_STATE(182)] = 5797,
  [SMALL_STATE(183)] = 5814,
  [SMALL_STATE(184)] = 5831,
  [SMALL_STATE(185)] = 5848,
  [SMALL_STATE(186)] = 5865,
  [SMALL_STATE(187)] = 5882,
  [SMALL_STATE(188)] = 5899,
  [SMALL_STATE(189)] = 5918,
  [SMALL_STATE(190)] = 5935,
  [SMALL_STATE(191)] = 5954,
  [SMALL_STATE(192)] = 5973,
  [SMALL_STATE(193)] = 5992,
  [SMALL_STATE(194)] = 6011,
  [SMALL_STATE(195)] = 6030,
  [SMALL_STATE(196)] = 6051,
  [SMALL_STATE(197)] = 6072,
  [SMALL_STATE(198)] = 6093,
  [SMALL_STATE(199)] = 6112,
  [SMALL_STATE(200)] = 6131,
  [SMALL_STATE(201)] = 6150,
  [SMALL_STATE(202)] = 6169,
  [SMALL_STATE(203)] = 6188,
  [SMALL_STATE(204)] = 6207,
  [SMALL_STATE(205)] = 6226,
  [SMALL_STATE(206)] = 6243,
  [SMALL_STATE(207)] = 6262,
  [SMALL_STATE(208)] = 6281,
  [SMALL_STATE(209)] = 6298,
  [SMALL_STATE(210)] = 6315,
  [SMALL_STATE(211)] = 6334,
  [SMALL_STATE(212)] = 6353,
  [SMALL_STATE(213)] = 6370,
  [SMALL_STATE(214)] = 6391,
  [SMALL_STATE(215)] = 6407,
  [SMALL_STATE(216)] = 6423,
  [SMALL_STATE(217)] = 6441,
  [SMALL_STATE(218)] = 6457,
  [SMALL_STATE(219)] = 6473,
  [SMALL_STATE(220)] = 6489,
  [SMALL_STATE(221)] = 6505,
  [SMALL_STATE(222)] = 6521,
  [SMALL_STATE(223)] = 6537,
  [SMALL_STATE(224)] = 6553,
  [SMALL_STATE(225)] = 6569,
  [SMALL_STATE(226)] = 6585,
  [SMALL_STATE(227)] = 6601,
  [SMALL_STATE(228)] = 6617,
  [SMALL_STATE(229)] = 6633,
  [SMALL_STATE(230)] = 6649,
  [SMALL_STATE(231)] = 6665,
  [SMALL_STATE(232)] = 6681,
  [SMALL_STATE(233)] = 6697,
  [SMALL_STATE(234)] = 6713,
  [SMALL_STATE(235)] = 6729,
  [SMALL_STATE(236)] = 6745,
  [SMALL_STATE(237)] = 6761,
  [SMALL_STATE(238)] = 6777,
  [SMALL_STATE(239)] = 6793,
  [SMALL_STATE(240)] = 6809,
  [SMALL_STATE(241)] = 6825,
  [SMALL_STATE(242)] = 6843,
  [SMALL_STATE(243)] = 6859,
  [SMALL_STATE(244)] = 6875,
  [SMALL_STATE(245)] = 6891,
  [SMALL_STATE(246)] = 6909,
  [SMALL_STATE(247)] = 6927,
  [SMALL_STATE(248)] = 6943,
  [SMALL_STATE(249)] = 6959,
  [SMALL_STATE(250)] = 6975,
  [SMALL_STATE(251)] = 6993,
  [SMALL_STATE(252)] = 7009,
  [SMALL_STATE(253)] = 7025,
  [SMALL_STATE(254)] = 7043,
  [SMALL_STATE(255)] = 7059,
  [SMALL_STATE(256)] = 7075,
  [SMALL_STATE(257)] = 7091,
  [SMALL_STATE(258)] = 7107,
  [SMALL_STATE(259)] = 7123,
  [SMALL_STATE(260)] = 7139,
  [SMALL_STATE(261)] = 7155,
  [SMALL_STATE(262)] = 7171,
  [SMALL_STATE(263)] = 7187,
  [SMALL_STATE(264)] = 7203,
  [SMALL_STATE(265)] = 7220,
  [SMALL_STATE(266)] = 7237,
  [SMALL_STATE(267)] = 7254,
  [SMALL_STATE(268)] = 7271,
  [SMALL_STATE(269)] = 7286,
  [SMALL_STATE(270)] = 7303,
  [SMALL_STATE(271)] = 7320,
  [SMALL_STATE(272)] = 7337,
  [SMALL_STATE(273)] = 7354,
  [SMALL_STATE(274)] = 7371,
  [SMALL_STATE(275)] = 7388,
  [SMALL_STATE(276)] = 7405,
  [SMALL_STATE(277)] = 7422,
  [SMALL_STATE(278)] = 7439,
  [SMALL_STATE(279)] = 7454,
  [SMALL_STATE(280)] = 7471,
  [SMALL_STATE(281)] = 7486,
  [SMALL_STATE(282)] = 7502,
  [SMALL_STATE(283)] = 7516,
  [SMALL_STATE(284)] = 7530,
  [SMALL_STATE(285)] = 7544,
  [SMALL_STATE(286)] = 7558,
  [SMALL_STATE(287)] = 7572,
  [SMALL_STATE(288)] = 7586,
  [SMALL_STATE(289)] = 7608,
  [SMALL_STATE(290)] = 7632,
  [SMALL_STATE(291)] = 7646,
  [SMALL_STATE(292)] = 7670,
  [SMALL_STATE(293)] = 7684,
  [SMALL_STATE(294)] = 7698,
  [SMALL_STATE(295)] = 7714,
  [SMALL_STATE(296)] = 7738,
  [SMALL_STATE(297)] = 7752,
  [SMALL_STATE(298)] = 7776,
  [SMALL_STATE(299)] = 7800,
  [SMALL_STATE(300)] = 7824,
  [SMALL_STATE(301)] = 7848,
  [SMALL_STATE(302)] = 7872,
  [SMALL_STATE(303)] = 7886,
  [SMALL_STATE(304)] = 7908,
  [SMALL_STATE(305)] = 7922,
  [SMALL_STATE(306)] = 7946,
  [SMALL_STATE(307)] = 7960,
  [SMALL_STATE(308)] = 7976,
  [SMALL_STATE(309)] = 7997,
  [SMALL_STATE(310)] = 8010,
  [SMALL_STATE(311)] = 8023,
  [SMALL_STATE(312)] = 8038,
  [SMALL_STATE(313)] = 8053,
  [SMALL_STATE(314)] = 8074,
  [SMALL_STATE(315)] = 8089,
  [SMALL_STATE(316)] = 8104,
  [SMALL_STATE(317)] = 8119,
  [SMALL_STATE(318)] = 8134,
  [SMALL_STATE(319)] = 8147,
  [SMALL_STATE(320)] = 8162,
  [SMALL_STATE(321)] = 8177,
  [SMALL_STATE(322)] = 8190,
  [SMALL_STATE(323)] = 8209,
  [SMALL_STATE(324)] = 8228,
  [SMALL_STATE(325)] = 8243,
  [SMALL_STATE(326)] = 8262,
  [SMALL_STATE(327)] = 8283,
  [SMALL_STATE(328)] = 8295,
  [SMALL_STATE(329)] = 8307,
  [SMALL_STATE(330)] = 8319,
  [SMALL_STATE(331)] = 8331,
  [SMALL_STATE(332)] = 8343,
  [SMALL_STATE(333)] = 8355,
  [SMALL_STATE(334)] = 8367,
  [SMALL_STATE(335)] = 8387,
  [SMALL_STATE(336)] = 8399,
  [SMALL_STATE(337)] = 8411,
  [SMALL_STATE(338)] = 8423,
  [SMALL_STATE(339)] = 8435,
  [SMALL_STATE(340)] = 8447,
  [SMALL_STATE(341)] = 8467,
  [SMALL_STATE(342)] = 8479,
  [SMALL_STATE(343)] = 8491,
  [SMALL_STATE(344)] = 8511,
  [SMALL_STATE(345)] = 8523,
  [SMALL_STATE(346)] = 8535,
  [SMALL_STATE(347)] = 8547,
  [SMALL_STATE(348)] = 8559,
  [SMALL_STATE(349)] = 8571,
  [SMALL_STATE(350)] = 8590,
  [SMALL_STATE(351)] = 8603,
  [SMALL_STATE(352)] = 8618,
  [SMALL_STATE(353)] = 8633,
  [SMALL_STATE(354)] = 8652,
  [SMALL_STATE(355)] = 8671,
  [SMALL_STATE(356)] = 8690,
  [SMALL_STATE(357)] = 8703,
  [SMALL_STATE(358)] = 8722,
  [SMALL_STATE(359)] = 8735,
  [SMALL_STATE(360)] = 8748,
  [SMALL_STATE(361)] = 8761,
  [SMALL_STATE(362)] = 8780,
  [SMALL_STATE(363)] = 8799,
  [SMALL_STATE(364)] = 8812,
  [SMALL_STATE(365)] = 8831,
  [SMALL_STATE(366)] = 8844,
  [SMALL_STATE(367)] = 8863,
  [SMALL_STATE(368)] = 8873,
  [SMALL_STATE(369)] = 8883,
  [SMALL_STATE(370)] = 8893,
  [SMALL_STATE(371)] = 8903,
  [SMALL_STATE(372)] = 8913,
  [SMALL_STATE(373)] = 8923,
  [SMALL_STATE(374)] = 8933,
  [SMALL_STATE(375)] = 8943,
  [SMALL_STATE(376)] = 8953,
  [SMALL_STATE(377)] = 8963,
  [SMALL_STATE(378)] = 8977,
  [SMALL_STATE(379)] = 8989,
  [SMALL_STATE(380)] = 8999,
  [SMALL_STATE(381)] = 9009,
  [SMALL_STATE(382)] = 9023,
  [SMALL_STATE(383)] = 9033,
  [SMALL_STATE(384)] = 9043,
  [SMALL_STATE(385)] = 9053,
  [SMALL_STATE(386)] = 9063,
  [SMALL_STATE(387)] = 9073,
  [SMALL_STATE(388)] = 9083,
  [SMALL_STATE(389)] = 9095,
  [SMALL_STATE(390)] = 9107,
  [SMALL_STATE(391)] = 9119,
  [SMALL_STATE(392)] = 9130,
  [SMALL_STATE(393)] = 9141,
  [SMALL_STATE(394)] = 9150,
  [SMALL_STATE(395)] = 9159,
  [SMALL_STATE(396)] = 9172,
  [SMALL_STATE(397)] = 9181,
  [SMALL_STATE(398)] = 9192,
  [SMALL_STATE(399)] = 9203,
  [SMALL_STATE(400)] = 9214,
  [SMALL_STATE(401)] = 9223,
  [SMALL_STATE(402)] = 9234,
  [SMALL_STATE(403)] = 9243,
  [SMALL_STATE(404)] = 9254,
  [SMALL_STATE(405)] = 9263,
  [SMALL_STATE(406)] = 9274,
  [SMALL_STATE(407)] = 9285,
  [SMALL_STATE(408)] = 9296,
  [SMALL_STATE(409)] = 9307,
  [SMALL_STATE(410)] = 9316,
  [SMALL_STATE(411)] = 9325,
  [SMALL_STATE(412)] = 9334,
  [SMALL_STATE(413)] = 9345,
  [SMALL_STATE(414)] = 9356,
  [SMALL_STATE(415)] = 9367,
  [SMALL_STATE(416)] = 9376,
  [SMALL_STATE(417)] = 9387,
  [SMALL_STATE(418)] = 9398,
  [SMALL_STATE(419)] = 9407,
  [SMALL_STATE(420)] = 9420,
  [SMALL_STATE(421)] = 9431,
  [SMALL_STATE(422)] = 9444,
  [SMALL_STATE(423)] = 9455,
  [SMALL_STATE(424)] = 9466,
  [SMALL_STATE(425)] = 9475,
  [SMALL_STATE(426)] = 9484,
  [SMALL_STATE(427)] = 9495,
  [SMALL_STATE(428)] = 9504,
  [SMALL_STATE(429)] = 9514,
  [SMALL_STATE(430)] = 9524,
  [SMALL_STATE(431)] = 9532,
  [SMALL_STATE(432)] = 9542,
  [SMALL_STATE(433)] = 9552,
  [SMALL_STATE(434)] = 9562,
  [SMALL_STATE(435)] = 9572,
  [SMALL_STATE(436)] = 9582,
  [SMALL_STATE(437)] = 9592,
  [SMALL_STATE(438)] = 9602,
  [SMALL_STATE(439)] = 9612,
  [SMALL_STATE(440)] = 9622,
  [SMALL_STATE(441)] = 9632,
  [SMALL_STATE(442)] = 9642,
  [SMALL_STATE(443)] = 9652,
  [SMALL_STATE(444)] = 9662,
  [SMALL_STATE(445)] = 9672,
  [SMALL_STATE(446)] = 9682,
  [SMALL_STATE(447)] = 9692,
  [SMALL_STATE(448)] = 9702,
  [SMALL_STATE(449)] = 9712,
  [SMALL_STATE(450)] = 9722,
  [SMALL_STATE(451)] = 9732,
  [SMALL_STATE(452)] = 9742,
  [SMALL_STATE(453)] = 9752,
  [SMALL_STATE(454)] = 9762,
  [SMALL_STATE(455)] = 9772,
  [SMALL_STATE(456)] = 9782,
  [SMALL_STATE(457)] = 9792,
  [SMALL_STATE(458)] = 9802,
  [SMALL_STATE(459)] = 9810,
  [SMALL_STATE(460)] = 9820,
  [SMALL_STATE(461)] = 9830,
  [SMALL_STATE(462)] = 9840,
  [SMALL_STATE(463)] = 9850,
  [SMALL_STATE(464)] = 9858,
  [SMALL_STATE(465)] = 9868,
  [SMALL_STATE(466)] = 9878,
  [SMALL_STATE(467)] = 9888,
  [SMALL_STATE(468)] = 9898,
  [SMALL_STATE(469)] = 9908,
  [SMALL_STATE(470)] = 9916,
  [SMALL_STATE(471)] = 9926,
  [SMALL_STATE(472)] = 9936,
  [SMALL_STATE(473)] = 9946,
  [SMALL_STATE(474)] = 9956,
  [SMALL_STATE(475)] = 9966,
  [SMALL_STATE(476)] = 9974,
  [SMALL_STATE(477)] = 9984,
  [SMALL_STATE(478)] = 9994,
  [SMALL_STATE(479)] = 10004,
  [SMALL_STATE(480)] = 10014,
  [SMALL_STATE(481)] = 10022,
  [SMALL_STATE(482)] = 10030,
  [SMALL_STATE(483)] = 10040,
  [SMALL_STATE(484)] = 10050,
  [SMALL_STATE(485)] = 10060,
  [SMALL_STATE(486)] = 10070,
  [SMALL_STATE(487)] = 10080,
  [SMALL_STATE(488)] = 10090,
  [SMALL_STATE(489)] = 10100,
  [SMALL_STATE(490)] = 10110,
  [SMALL_STATE(491)] = 10120,
  [SMALL_STATE(492)] = 10130,
  [SMALL_STATE(493)] = 10140,
  [SMALL_STATE(494)] = 10150,
  [SMALL_STATE(495)] = 10160,
  [SMALL_STATE(496)] = 10170,
  [SMALL_STATE(497)] = 10180,
  [SMALL_STATE(498)] = 10190,
  [SMALL_STATE(499)] = 10200,
  [SMALL_STATE(500)] = 10210,
  [SMALL_STATE(501)] = 10220,
  [SMALL_STATE(502)] = 10230,
  [SMALL_STATE(503)] = 10240,
  [SMALL_STATE(504)] = 10250,
  [SMALL_STATE(505)] = 10260,
  [SMALL_STATE(506)] = 10270,
  [SMALL_STATE(507)] = 10280,
  [SMALL_STATE(508)] = 10290,
  [SMALL_STATE(509)] = 10300,
  [SMALL_STATE(510)] = 10310,
  [SMALL_STATE(511)] = 10318,
  [SMALL_STATE(512)] = 10326,
  [SMALL_STATE(513)] = 10336,
  [SMALL_STATE(514)] = 10346,
  [SMALL_STATE(515)] = 10356,
  [SMALL_STATE(516)] = 10363,
  [SMALL_STATE(517)] = 10370,
  [SMALL_STATE(518)] = 10377,
  [SMALL_STATE(519)] = 10384,
  [SMALL_STATE(520)] = 10391,
  [SMALL_STATE(521)] = 10398,
  [SMALL_STATE(522)] = 10405,
  [SMALL_STATE(523)] = 10412,
  [SMALL_STATE(524)] = 10419,
  [SMALL_STATE(525)] = 10426,
  [SMALL_STATE(526)] = 10433,
  [SMALL_STATE(527)] = 10440,
  [SMALL_STATE(528)] = 10447,
  [SMALL_STATE(529)] = 10454,
  [SMALL_STATE(530)] = 10461,
  [SMALL_STATE(531)] = 10468,
  [SMALL_STATE(532)] = 10475,
  [SMALL_STATE(533)] = 10482,
  [SMALL_STATE(534)] = 10489,
  [SMALL_STATE(535)] = 10496,
  [SMALL_STATE(536)] = 10503,
  [SMALL_STATE(537)] = 10510,
  [SMALL_STATE(538)] = 10517,
  [SMALL_STATE(539)] = 10524,
  [SMALL_STATE(540)] = 10531,
  [SMALL_STATE(541)] = 10538,
  [SMALL_STATE(542)] = 10545,
  [SMALL_STATE(543)] = 10552,
  [SMALL_STATE(544)] = 10559,
  [SMALL_STATE(545)] = 10566,
  [SMALL_STATE(546)] = 10573,
  [SMALL_STATE(547)] = 10580,
  [SMALL_STATE(548)] = 10587,
  [SMALL_STATE(549)] = 10594,
  [SMALL_STATE(550)] = 10601,
  [SMALL_STATE(551)] = 10608,
  [SMALL_STATE(552)] = 10615,
  [SMALL_STATE(553)] = 10622,
  [SMALL_STATE(554)] = 10629,
  [SMALL_STATE(555)] = 10636,
  [SMALL_STATE(556)] = 10643,
  [SMALL_STATE(557)] = 10650,
  [SMALL_STATE(558)] = 10657,
  [SMALL_STATE(559)] = 10664,
  [SMALL_STATE(560)] = 10671,
  [SMALL_STATE(561)] = 10678,
  [SMALL_STATE(562)] = 10685,
  [SMALL_STATE(563)] = 10692,
  [SMALL_STATE(564)] = 10699,
  [SMALL_STATE(565)] = 10706,
  [SMALL_STATE(566)] = 10713,
  [SMALL_STATE(567)] = 10720,
  [SMALL_STATE(568)] = 10727,
  [SMALL_STATE(569)] = 10734,
  [SMALL_STATE(570)] = 10741,
  [SMALL_STATE(571)] = 10748,
  [SMALL_STATE(572)] = 10755,
  [SMALL_STATE(573)] = 10762,
  [SMALL_STATE(574)] = 10769,
  [SMALL_STATE(575)] = 10776,
  [SMALL_STATE(576)] = 10783,
  [SMALL_STATE(577)] = 10790,
  [SMALL_STATE(578)] = 10797,
  [SMALL_STATE(579)] = 10804,
  [SMALL_STATE(580)] = 10811,
  [SMALL_STATE(581)] = 10818,
  [SMALL_STATE(582)] = 10825,
  [SMALL_STATE(583)] = 10832,
  [SMALL_STATE(584)] = 10839,
  [SMALL_STATE(585)] = 10846,
  [SMALL_STATE(586)] = 10853,
  [SMALL_STATE(587)] = 10860,
  [SMALL_STATE(588)] = 10867,
  [SMALL_STATE(589)] = 10874,
  [SMALL_STATE(590)] = 10881,
  [SMALL_STATE(591)] = 10888,
  [SMALL_STATE(592)] = 10895,
  [SMALL_STATE(593)] = 10902,
  [SMALL_STATE(594)] = 10909,
  [SMALL_STATE(595)] = 10916,
  [SMALL_STATE(596)] = 10923,
  [SMALL_STATE(597)] = 10930,
  [SMALL_STATE(598)] = 10937,
  [SMALL_STATE(599)] = 10944,
  [SMALL_STATE(600)] = 10951,
  [SMALL_STATE(601)] = 10958,
  [SMALL_STATE(602)] = 10965,
  [SMALL_STATE(603)] = 10972,
  [SMALL_STATE(604)] = 10979,
  [SMALL_STATE(605)] = 10986,
  [SMALL_STATE(606)] = 10993,
  [SMALL_STATE(607)] = 11000,
  [SMALL_STATE(608)] = 11007,
  [SMALL_STATE(609)] = 11014,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(358),
  [7] = {.count = 1, .reusable = true}, SHIFT(359),
  [9] = {.count = 1, .reusable = true}, SHIFT(365),
  [11] = {.count = 1, .reusable = true}, SHIFT(413),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(157),
  [17] = {.count = 1, .reusable = true}, SHIFT(170),
  [19] = {.count = 1, .reusable = true}, SHIFT(148),
  [21] = {.count = 1, .reusable = true}, SHIFT(151),
  [23] = {.count = 1, .reusable = true}, SHIFT(145),
  [25] = {.count = 1, .reusable = true}, SHIFT(154),
  [27] = {.count = 1, .reusable = true}, SHIFT(156),
  [29] = {.count = 1, .reusable = true}, SHIFT(146),
  [31] = {.count = 1, .reusable = true}, SHIFT(152),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(438),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 3),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 3),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym__statement_name, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(520),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(17),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(24),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(25),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(83),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(84),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(30),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(71),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(81),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(72),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(87),
  [96] = {.count = 1, .reusable = true}, SHIFT(215),
  [98] = {.count = 1, .reusable = true}, SHIFT(2),
  [100] = {.count = 1, .reusable = true}, SHIFT(16),
  [102] = {.count = 1, .reusable = true}, SHIFT(17),
  [104] = {.count = 1, .reusable = true}, SHIFT(24),
  [106] = {.count = 1, .reusable = true}, SHIFT(25),
  [108] = {.count = 1, .reusable = true}, SHIFT(9),
  [110] = {.count = 1, .reusable = true}, SHIFT(83),
  [112] = {.count = 1, .reusable = true}, SHIFT(84),
  [114] = {.count = 1, .reusable = true}, SHIFT(30),
  [116] = {.count = 1, .reusable = true}, SHIFT(71),
  [118] = {.count = 1, .reusable = true}, SHIFT(81),
  [120] = {.count = 1, .reusable = true}, SHIFT(23),
  [122] = {.count = 1, .reusable = true}, SHIFT(14),
  [124] = {.count = 1, .reusable = true}, SHIFT(72),
  [126] = {.count = 1, .reusable = true}, SHIFT(87),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [132] = {.count = 1, .reusable = true}, SHIFT(252),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 1),
  [138] = {.count = 1, .reusable = true}, SHIFT(595),
  [140] = {.count = 1, .reusable = true}, SHIFT(238),
  [142] = {.count = 1, .reusable = true}, SHIFT(108),
  [144] = {.count = 1, .reusable = true}, SHIFT(109),
  [146] = {.count = 1, .reusable = true}, SHIFT(111),
  [148] = {.count = 1, .reusable = true}, SHIFT(112),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(17),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(24),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(25),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(30),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(108),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(109),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(111),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(112),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [195] = {.count = 1, .reusable = true}, SHIFT(259),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_loadType, 1),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_loadType, 1),
  [201] = {.count = 1, .reusable = true}, SHIFT(475),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_loadType, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_loadType, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 1),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 1),
  [211] = {.count = 1, .reusable = true}, SHIFT(603),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [217] = {.count = 1, .reusable = true}, SHIFT(456),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 3),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 3),
  [223] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(19),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [232] = {.count = 1, .reusable = true}, SHIFT(208),
  [234] = {.count = 1, .reusable = true}, SHIFT(19),
  [236] = {.count = 1, .reusable = true}, SHIFT(209),
  [238] = {.count = 1, .reusable = true}, SHIFT(21),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 1),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_transparencecheck, 1),
  [244] = {.count = 1, .reusable = true}, SHIFT(391),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [250] = {.count = 1, .reusable = true}, SHIFT(461),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [256] = {.count = 1, .reusable = true}, SHIFT(468),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 3),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_transparencecheck, 3),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_orientation, 1),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_orientation, 1),
  [266] = {.count = 1, .reusable = true}, SHIFT(472),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [280] = {.count = 1, .reusable = true}, SHIFT(403),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_position, 1),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_position, 1),
  [286] = {.count = 1, .reusable = true}, SHIFT(579),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [290] = {.count = 1, .reusable = true}, SHIFT(222),
  [292] = {.count = 1, .reusable = true}, SHIFT(160),
  [294] = {.count = 1, .reusable = true}, SHIFT(67),
  [296] = {.count = 1, .reusable = true}, SHIFT(70),
  [298] = {.count = 1, .reusable = false}, SHIFT(114),
  [300] = {.count = 1, .reusable = true}, SHIFT(106),
  [302] = {.count = 1, .reusable = true}, SHIFT(31),
  [304] = {.count = 1, .reusable = true}, SHIFT(27),
  [306] = {.count = 1, .reusable = true}, SHIFT(105),
  [308] = {.count = 1, .reusable = true}, SHIFT(161),
  [310] = {.count = 1, .reusable = true}, SHIFT(263),
  [312] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(4),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(157),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(170),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(148),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(151),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(145),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(154),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(156),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(146),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(152),
  [344] = {.count = 1, .reusable = true}, SHIFT(372),
  [346] = {.count = 1, .reusable = true}, SHIFT(191),
  [348] = {.count = 1, .reusable = true}, SHIFT(192),
  [350] = {.count = 1, .reusable = true}, SHIFT(193),
  [352] = {.count = 1, .reusable = true}, SHIFT(194),
  [354] = {.count = 1, .reusable = true}, SHIFT(198),
  [356] = {.count = 1, .reusable = true}, SHIFT(199),
  [358] = {.count = 1, .reusable = true}, SHIFT(200),
  [360] = {.count = 1, .reusable = true}, SHIFT(171),
  [362] = {.count = 1, .reusable = true}, SHIFT(82),
  [364] = {.count = 1, .reusable = true}, SHIFT(382),
  [366] = {.count = 1, .reusable = true}, SHIFT(232),
  [368] = {.count = 1, .reusable = true}, SHIFT(262),
  [370] = {.count = 1, .reusable = true}, SHIFT(78),
  [372] = {.count = 1, .reusable = true}, SHIFT(159),
  [374] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(191),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(192),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(193),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(194),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(198),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(199),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(200),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(171),
  [400] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(82),
  [403] = {.count = 1, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2),
  [405] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(160),
  [408] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(4),
  [411] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(67),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(70),
  [417] = {.count = 2, .reusable = false}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(114),
  [420] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(106),
  [423] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(31),
  [426] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(27),
  [429] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(105),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(161),
  [435] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(17),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [449] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(78),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(159),
  [455] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(30),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(71),
  [461] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [464] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(72),
  [467] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2),
  [469] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [472] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [475] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(17),
  [478] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(24),
  [481] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(25),
  [484] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [487] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(30),
  [490] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(81),
  [493] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_position, 5),
  [501] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_position, 5),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_orientation, 3),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_orientation, 3),
  [511] = {.count = 1, .reusable = true}, SHIFT(251),
  [513] = {.count = 1, .reusable = true}, SHIFT(248),
  [515] = {.count = 1, .reusable = true}, SHIFT(100),
  [517] = {.count = 1, .reusable = true}, SHIFT(143),
  [519] = {.count = 1, .reusable = false}, SHIFT(142),
  [521] = {.count = 1, .reusable = true}, SHIFT(131),
  [523] = {.count = 1, .reusable = true}, SHIFT(144),
  [525] = {.count = 1, .reusable = true}, SHIFT(132),
  [527] = {.count = 1, .reusable = true}, SHIFT(133),
  [529] = {.count = 1, .reusable = true}, SHIFT(135),
  [531] = {.count = 1, .reusable = true}, SHIFT(130),
  [533] = {.count = 1, .reusable = true}, SHIFT(99),
  [535] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(143),
  [540] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(142),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(131),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(144),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(132),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(133),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(135),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(130),
  [561] = {.count = 1, .reusable = true}, SHIFT(218),
  [563] = {.count = 1, .reusable = true}, SHIFT(169),
  [565] = {.count = 1, .reusable = true}, SHIFT(155),
  [567] = {.count = 1, .reusable = true}, SHIFT(173),
  [569] = {.count = 1, .reusable = true}, SHIFT(393),
  [571] = {.count = 1, .reusable = true}, SHIFT(201),
  [573] = {.count = 1, .reusable = true}, SHIFT(203),
  [575] = {.count = 1, .reusable = true}, SHIFT(207),
  [577] = {.count = 1, .reusable = true}, SHIFT(210),
  [579] = {.count = 1, .reusable = true}, SHIFT(211),
  [581] = {.count = 1, .reusable = true}, SHIFT(224),
  [583] = {.count = 1, .reusable = true}, SHIFT(261),
  [585] = {.count = 1, .reusable = true}, SHIFT(98),
  [587] = {.count = 1, .reusable = true}, SHIFT(69),
  [589] = {.count = 1, .reusable = true}, SHIFT(107),
  [591] = {.count = 1, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2),
  [593] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(4),
  [596] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(70),
  [599] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(106),
  [602] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(31),
  [605] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(27),
  [608] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(105),
  [611] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(169),
  [614] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(155),
  [617] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(173),
  [620] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2),
  [622] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(2),
  [625] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(98),
  [628] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(69),
  [631] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(107),
  [634] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(17),
  [637] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(24),
  [640] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(25),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(9),
  [646] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(23),
  [649] = {.count = 1, .reusable = true}, SHIFT(226),
  [651] = {.count = 1, .reusable = true}, SHIFT(202),
  [653] = {.count = 1, .reusable = true}, SHIFT(190),
  [655] = {.count = 1, .reusable = true}, SHIFT(188),
  [657] = {.count = 1, .reusable = true}, SHIFT(172),
  [659] = {.count = 1, .reusable = true}, SHIFT(244),
  [661] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2),
  [663] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(2),
  [666] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(98),
  [669] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(69),
  [672] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(9),
  [675] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(78),
  [678] = {.count = 2, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(195),
  [681] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(196),
  [684] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(197),
  [687] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(14),
  [690] = {.count = 1, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2),
  [692] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(201),
  [695] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(203),
  [698] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(207),
  [701] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(4),
  [704] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(67),
  [707] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(31),
  [710] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(210),
  [713] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(211),
  [716] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(27),
  [719] = {.count = 1, .reusable = true}, SHIFT(234),
  [721] = {.count = 1, .reusable = true}, SHIFT(227),
  [723] = {.count = 1, .reusable = false}, SHIFT(195),
  [725] = {.count = 1, .reusable = true}, SHIFT(196),
  [727] = {.count = 1, .reusable = true}, SHIFT(197),
  [729] = {.count = 1, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2),
  [731] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(4),
  [734] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(67),
  [737] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(70),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(202),
  [743] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(31),
  [746] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(190),
  [749] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(27),
  [752] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(188),
  [755] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(172),
  [758] = {.count = 1, .reusable = true}, SHIFT(214),
  [760] = {.count = 1, .reusable = true}, SHIFT(402),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_size, 1),
  [764] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_size, 1),
  [766] = {.count = 1, .reusable = true}, SHIFT(576),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_size, 5),
  [770] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_size, 5),
  [772] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [774] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [776] = {.count = 1, .reusable = true}, SHIFT(569),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_borderSize, 1),
  [780] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_borderSize, 1),
  [782] = {.count = 1, .reusable = true}, SHIFT(597),
  [784] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 1),
  [786] = {.count = 1, .reusable = true}, SHIFT(405),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_norefcount, 1),
  [790] = {.count = 1, .reusable = true}, SHIFT(417),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [794] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [796] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2),
  [798] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(4),
  [801] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(70),
  [804] = {.count = 2, .reusable = false}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(114),
  [807] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(106),
  [810] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(31),
  [813] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(105),
  [816] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(169),
  [819] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 2), SHIFT_REPEAT(155),
  [822] = {.count = 1, .reusable = true}, SHIFT(410),
  [824] = {.count = 1, .reusable = true}, SHIFT(394),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_norefcount, 3),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_xy, 1),
  [830] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size_xy, 1),
  [832] = {.count = 1, .reusable = true}, SHIFT(573),
  [834] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_borderSize, 5),
  [836] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_borderSize, 5),
  [838] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 3),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 1),
  [842] = {.count = 1, .reusable = true}, SHIFT(593),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 1),
  [846] = {.count = 1, .reusable = true}, SHIFT(598),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [850] = {.count = 1, .reusable = true}, SHIFT(473),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alwaystransparent, 1),
  [854] = {.count = 1, .reusable = true}, SHIFT(401),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_xy, 5),
  [858] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size_xy, 5),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [862] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alphamaskfile, 1),
  [866] = {.count = 1, .reusable = true}, SHIFT(578),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alwaystransparent, 3),
  [870] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 3),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alphamaskfile, 3),
  [874] = {.count = 1, .reusable = true}, SHIFT(368),
  [876] = {.count = 1, .reusable = true}, SHIFT(264),
  [878] = {.count = 1, .reusable = true}, SHIFT(273),
  [880] = {.count = 1, .reusable = true}, SHIFT(270),
  [882] = {.count = 1, .reusable = true}, SHIFT(271),
  [884] = {.count = 1, .reusable = true}, SHIFT(269),
  [886] = {.count = 1, .reusable = true}, SHIFT(267),
  [888] = {.count = 1, .reusable = true}, SHIFT(266),
  [890] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2),
  [892] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(241),
  [895] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(272),
  [898] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(276),
  [901] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(82),
  [904] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(279),
  [907] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(277),
  [910] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(265),
  [913] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 4),
  [915] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [917] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2),
  [919] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(264),
  [922] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(273),
  [925] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(270),
  [928] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(271),
  [931] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(269),
  [934] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(267),
  [937] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(266),
  [940] = {.count = 1, .reusable = true}, SHIFT(385),
  [942] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [944] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [946] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [948] = {.count = 1, .reusable = true}, SHIFT(571),
  [950] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [952] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [954] = {.count = 1, .reusable = true}, SHIFT(396),
  [956] = {.count = 1, .reusable = true}, SHIFT(241),
  [958] = {.count = 1, .reusable = true}, SHIFT(272),
  [960] = {.count = 1, .reusable = true}, SHIFT(276),
  [962] = {.count = 1, .reusable = true}, SHIFT(279),
  [964] = {.count = 1, .reusable = true}, SHIFT(277),
  [966] = {.count = 1, .reusable = true}, SHIFT(265),
  [968] = {.count = 1, .reusable = true}, SHIFT(415),
  [970] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [972] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [974] = {.count = 1, .reusable = true}, SHIFT(268),
  [976] = {.count = 1, .reusable = true}, SHIFT(118),
  [978] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_textureFile, 1),
  [980] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_textureFile, 1),
  [982] = {.count = 1, .reusable = true}, SHIFT(607),
  [984] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_font, 1),
  [986] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_font, 1),
  [988] = {.count = 1, .reusable = true}, SHIFT(608),
  [990] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [992] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [994] = {.count = 1, .reusable = true}, SHIFT(140),
  [996] = {.count = 1, .reusable = true}, SHIFT(558),
  [998] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 1),
  [1000] = {.count = 1, .reusable = true}, SHIFT(487),
  [1002] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 1),
  [1004] = {.count = 1, .reusable = true}, SHIFT(412),
  [1006] = {.count = 1, .reusable = true}, SHIFT(280),
  [1008] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 1),
  [1010] = {.count = 1, .reusable = true}, SHIFT(398),
  [1012] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 1),
  [1014] = {.count = 1, .reusable = true}, SHIFT(489),
  [1016] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2),
  [1018] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2), SHIFT_REPEAT(118),
  [1021] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_text, 1),
  [1023] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_text, 1),
  [1025] = {.count = 1, .reusable = true}, SHIFT(521),
  [1027] = {.count = 1, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2),
  [1029] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1032] = {.count = 2, .reusable = false}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [1035] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(69),
  [1038] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(107),
  [1041] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(162),
  [1044] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(213),
  [1047] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [1049] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [1051] = {.count = 1, .reusable = true}, SHIFT(136),
  [1053] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 3),
  [1055] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 1),
  [1057] = {.count = 1, .reusable = true}, SHIFT(525),
  [1059] = {.count = 1, .reusable = true}, SHIFT(327),
  [1061] = {.count = 1, .reusable = true}, SHIFT(281),
  [1063] = {.count = 1, .reusable = true}, SHIFT(162),
  [1065] = {.count = 1, .reusable = true}, SHIFT(294),
  [1067] = {.count = 1, .reusable = true}, SHIFT(307),
  [1069] = {.count = 1, .reusable = true}, SHIFT(275),
  [1071] = {.count = 1, .reusable = true}, SHIFT(333),
  [1073] = {.count = 1, .reusable = false}, SHIFT(16),
  [1075] = {.count = 1, .reusable = true}, SHIFT(213),
  [1077] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 3),
  [1079] = {.count = 1, .reusable = true}, SHIFT(344),
  [1081] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_font, 3),
  [1083] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_font, 3),
  [1085] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 1, .production_id = 4),
  [1087] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 3),
  [1089] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2),
  [1091] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(2),
  [1094] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(281),
  [1097] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(162),
  [1100] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(294),
  [1103] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(307),
  [1106] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(275),
  [1109] = {.count = 1, .reusable = true}, SHIFT(345),
  [1111] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 3),
  [1113] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_textureFile, 3),
  [1115] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_textureFile, 3),
  [1117] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [1119] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [1121] = {.count = 1, .reusable = true}, SHIFT(577),
  [1123] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [1125] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [1127] = {.count = 1, .reusable = true}, SHIFT(408),
  [1129] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 1),
  [1131] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 1),
  [1133] = {.count = 1, .reusable = true}, SHIFT(583),
  [1135] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [1137] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [1139] = {.count = 1, .reusable = true}, SHIFT(404),
  [1141] = {.count = 1, .reusable = true}, SHIFT(371),
  [1143] = {.count = 1, .reusable = true}, SHIFT(320),
  [1145] = {.count = 1, .reusable = true}, SHIFT(315),
  [1147] = {.count = 1, .reusable = true}, SHIFT(311),
  [1149] = {.count = 1, .reusable = true}, SHIFT(312),
  [1151] = {.count = 1, .reusable = true}, SHIFT(314),
  [1153] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [1155] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [1157] = {.count = 1, .reusable = true}, SHIFT(418),
  [1159] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 4),
  [1161] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 4),
  [1163] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 7),
  [1165] = {.count = 1, .reusable = true}, SHIFT(383),
  [1167] = {.count = 1, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2),
  [1169] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(320),
  [1172] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(315),
  [1175] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(311),
  [1178] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(312),
  [1181] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(314),
  [1184] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 2),
  [1186] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 2),
  [1188] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_text, 3),
  [1190] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_text, 3),
  [1192] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [1194] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [1196] = {.count = 1, .reusable = true}, SHIFT(587),
  [1198] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [1200] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [1202] = {.count = 1, .reusable = true}, SHIFT(591),
  [1204] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [1206] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [1208] = {.count = 1, .reusable = true}, SHIFT(479),
  [1210] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [1212] = {.count = 1, .reusable = true}, SHIFT(535),
  [1214] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [1216] = {.count = 1, .reusable = true}, SHIFT(488),
  [1218] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2),
  [1220] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1223] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(316),
  [1226] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(317),
  [1229] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(319),
  [1232] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(213),
  [1235] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [1237] = {.count = 1, .reusable = true}, SHIFT(517),
  [1239] = {.count = 1, .reusable = true}, SHIFT(348),
  [1241] = {.count = 1, .reusable = true}, SHIFT(316),
  [1243] = {.count = 1, .reusable = true}, SHIFT(317),
  [1245] = {.count = 1, .reusable = true}, SHIFT(319),
  [1247] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 5),
  [1249] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 5),
  [1251] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [1253] = {.count = 1, .reusable = true}, SHIFT(523),
  [1255] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [1257] = {.count = 1, .reusable = true}, SHIFT(485),
  [1259] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [1261] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [1263] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [1265] = {.count = 1, .reusable = true}, SHIFT(549),
  [1267] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxHeight, 1),
  [1269] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_maxHeight, 1),
  [1271] = {.count = 1, .reusable = true}, SHIFT(462),
  [1273] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [1275] = {.count = 1, .reusable = true}, SHIFT(490),
  [1277] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [1279] = {.count = 1, .reusable = true}, SHIFT(519),
  [1281] = {.count = 1, .reusable = true}, SHIFT(331),
  [1283] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 1),
  [1285] = {.count = 1, .reusable = true}, SHIFT(572),
  [1287] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_instantTextBoxType, 1),
  [1289] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_instantTextBoxType, 1),
  [1291] = {.count = 1, .reusable = true}, SHIFT(420),
  [1293] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_cursor, 1),
  [1295] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_cursor, 1),
  [1297] = {.count = 1, .reusable = true}, SHIFT(529),
  [1299] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [1301] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [1303] = {.count = 1, .reusable = true}, SHIFT(499),
  [1305] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [1307] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [1309] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [1311] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [1313] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [1315] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [1317] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [1319] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [1321] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [1323] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [1325] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [1327] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [1329] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxWidth, 1),
  [1331] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_maxWidth, 1),
  [1333] = {.count = 1, .reusable = true}, SHIFT(448),
  [1335] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [1337] = {.count = 1, .reusable = true}, SHIFT(518),
  [1339] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType, 1),
  [1341] = {.count = 1, .reusable = true}, SHIFT(465),
  [1343] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_scrollbartype, 1),
  [1345] = {.count = 1, .reusable = true}, SHIFT(540),
  [1347] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_fixedsize, 1),
  [1349] = {.count = 1, .reusable = true}, SHIFT(422),
  [1351] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 1, .production_id = 4),
  [1353] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_instantTextBoxType, 3),
  [1355] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_instantTextBoxType, 3),
  [1357] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 5),
  [1359] = {.count = 1, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 1, .production_id = 4),
  [1361] = {.count = 1, .reusable = false}, REDUCE(aux_sym__editBoxType_block_repeat1, 1, .production_id = 4),
  [1363] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_cursor, 5),
  [1365] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_cursor, 5),
  [1367] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 1, .production_id = 4),
  [1369] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [1371] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [1373] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [1375] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [1377] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [1379] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [1381] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [1383] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [1385] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_priority, 1),
  [1387] = {.count = 1, .reusable = true}, SHIFT(507),
  [1389] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [1391] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_background, 1),
  [1393] = {.count = 1, .reusable = true}, SHIFT(541),
  [1395] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 1),
  [1397] = {.count = 1, .reusable = true}, SHIFT(467),
  [1399] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 1),
  [1401] = {.count = 1, .reusable = true}, SHIFT(466),
  [1403] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 1),
  [1405] = {.count = 1, .reusable = true}, SHIFT(464),
  [1407] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 1),
  [1409] = {.count = 1, .reusable = true}, SHIFT(457),
  [1411] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 1),
  [1413] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 1),
  [1415] = {.count = 1, .reusable = true}, SHIFT(552),
  [1417] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 1),
  [1419] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 1),
  [1421] = {.count = 1, .reusable = true}, SHIFT(551),
  [1423] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 1),
  [1425] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 1),
  [1427] = {.count = 1, .reusable = true}, SHIFT(399),
  [1429] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 1),
  [1431] = {.count = 1, .reusable = true}, SHIFT(451),
  [1433] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype, 1),
  [1435] = {.count = 1, .reusable = true}, SHIFT(449),
  [1437] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType, 1),
  [1439] = {.count = 1, .reusable = true}, SHIFT(471),
  [1441] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType, 1),
  [1443] = {.count = 1, .reusable = true}, SHIFT(509),
  [1445] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_allwaystransparent, 1),
  [1447] = {.count = 1, .reusable = true}, SHIFT(414),
  [1449] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType, 1),
  [1451] = {.count = 1, .reusable = true}, SHIFT(505),
  [1453] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxHeight, 3),
  [1455] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_maxHeight, 3),
  [1457] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [1459] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxWidth, 3),
  [1461] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_maxWidth, 3),
  [1463] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType, 1),
  [1465] = {.count = 1, .reusable = true}, SHIFT(497),
  [1467] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [1469] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [1471] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_backGround, 1),
  [1473] = {.count = 1, .reusable = true}, SHIFT(580),
  [1475] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_moveable, 1),
  [1477] = {.count = 1, .reusable = true}, SHIFT(392),
  [1479] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [1481] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect, 1),
  [1483] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effect, 1),
  [1485] = {.count = 1, .reusable = true}, SHIFT(526),
  [1487] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 3),
  [1489] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [1491] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [1493] = {.count = 1, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [1495] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType_block, 2),
  [1497] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType_block, 2),
  [1499] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype, 3),
  [1501] = {.count = 1, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 1, .production_id = 4),
  [1503] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType_block, 2),
  [1505] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType_block, 2),
  [1507] = {.count = 1, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 1, .production_id = 4),
  [1509] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType_block, 3),
  [1511] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_allwaystransparent, 3),
  [1513] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType_block, 2),
  [1515] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 2),
  [1517] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_background, 3),
  [1519] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_priority, 3),
  [1521] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType_block, 3),
  [1523] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_scrollbartype, 3),
  [1525] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType_block, 3),
  [1527] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType_block, 3),
  [1529] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType_block, 3),
  [1531] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType, 3),
  [1533] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_fixedsize, 3),
  [1535] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType, 3),
  [1537] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 3),
  [1539] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 3),
  [1541] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 3),
  [1543] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 1),
  [1545] = {.count = 1, .reusable = true}, SHIFT(432),
  [1547] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 3),
  [1549] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 3),
  [1551] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 3),
  [1553] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 7),
  [1555] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 7),
  [1557] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 7),
  [1559] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 7),
  [1561] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [1563] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 3),
  [1565] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_moveable, 3),
  [1567] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 3),
  [1569] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 3),
  [1571] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 3),
  [1573] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [1575] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect, 3),
  [1577] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effect, 3),
  [1579] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType, 3),
  [1581] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_backGround, 3),
  [1583] = {.count = 1, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 1, .production_id = 4),
  [1585] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType, 3),
  [1587] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType, 3),
  [1589] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 2),
  [1591] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 1, .production_id = 4),
  [1593] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 2),
  [1595] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 2),
  [1597] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 2),
  [1599] = {.count = 1, .reusable = true}, SHIFT(606),
  [1601] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect_bool, 1),
  [1603] = {.count = 1, .reusable = true}, SHIFT(416),
  [1605] = {.count = 1, .reusable = true}, SHIFT(440),
  [1607] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 1),
  [1609] = {.count = 1, .reusable = true}, SHIFT(550),
  [1611] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 3),
  [1613] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 1),
  [1615] = {.count = 1, .reusable = true}, SHIFT(554),
  [1617] = {.count = 1, .reusable = true}, SHIFT(609),
  [1619] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 1),
  [1621] = {.count = 1, .reusable = true}, SHIFT(555),
  [1623] = {.count = 1, .reusable = true}, SHIFT(443),
  [1625] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 1),
  [1627] = {.count = 1, .reusable = true}, SHIFT(556),
  [1629] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textBoxType_block_repeat1, 1, .production_id = 4),
  [1631] = {.count = 1, .reusable = false}, REDUCE(aux_sym__textBoxType_block_repeat1, 1, .production_id = 4),
  [1633] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 1),
  [1635] = {.count = 1, .reusable = true}, SHIFT(508),
  [1637] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 1),
  [1639] = {.count = 1, .reusable = true}, SHIFT(522),
  [1641] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 1),
  [1643] = {.count = 1, .reusable = true}, SHIFT(530),
  [1645] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 3),
  [1647] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 1),
  [1649] = {.count = 1, .reusable = true}, SHIFT(524),
  [1651] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 2),
  [1653] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 1),
  [1655] = {.count = 1, .reusable = true}, SHIFT(545),
  [1657] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 3),
  [1659] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 3),
  [1661] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 1, .production_id = 4),
  [1663] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 5),
  [1665] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 3),
  [1667] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [1669] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2),
  [1671] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(2),
  [1674] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(350),
  [1677] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(275),
  [1680] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 3),
  [1682] = {.count = 1, .reusable = true}, SHIFT(230),
  [1684] = {.count = 1, .reusable = true}, SHIFT(363),
  [1686] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 3),
  [1688] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 3),
  [1690] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 1),
  [1692] = {.count = 1, .reusable = true}, SHIFT(539),
  [1694] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2),
  [1696] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(2),
  [1699] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(360),
  [1702] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(356),
  [1705] = {.count = 1, .reusable = true}, SHIFT(329),
  [1707] = {.count = 1, .reusable = true}, SHIFT(350),
  [1709] = {.count = 1, .reusable = true}, SHIFT(339),
  [1711] = {.count = 1, .reusable = true}, SHIFT(360),
  [1713] = {.count = 1, .reusable = true}, SHIFT(356),
  [1715] = {.count = 1, .reusable = true}, SHIFT(328),
  [1717] = {.count = 1, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2),
  [1719] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1722] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(78),
  [1725] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(363),
  [1728] = {.count = 1, .reusable = true}, SHIFT(221),
  [1730] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect_bool, 3),
  [1732] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [1734] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(358),
  [1737] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(359),
  [1740] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(365),
  [1743] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 3),
  [1745] = {.count = 1, .reusable = true}, SHIFT(347),
  [1747] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_meshsettings, 1),
  [1749] = {.count = 1, .reusable = true}, SHIFT(536),
  [1751] = {.count = 1, .reusable = true}, SHIFT(370),
  [1753] = {.count = 1, .reusable = true}, SHIFT(388),
  [1755] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 3),
  [1757] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 1, .production_id = 4),
  [1759] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle, 1),
  [1761] = {.count = 1, .reusable = true}, SHIFT(439),
  [1763] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType, 1),
  [1765] = {.count = 1, .reusable = true}, SHIFT(437),
  [1767] = {.count = 1, .reusable = true}, SHIFT(387),
  [1769] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType, 1),
  [1771] = {.count = 1, .reusable = true}, SHIFT(436),
  [1773] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh, 1),
  [1775] = {.count = 1, .reusable = true}, SHIFT(444),
  [1777] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texture, 1),
  [1779] = {.count = 1, .reusable = true}, SHIFT(533),
  [1781] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_normal, 1),
  [1783] = {.count = 1, .reusable = true}, SHIFT(528),
  [1785] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 6),
  [1787] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_specular, 1),
  [1789] = {.count = 1, .reusable = true}, SHIFT(527),
  [1791] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 1),
  [1793] = {.count = 1, .reusable = true}, SHIFT(447),
  [1795] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_meshsettings, 11),
  [1797] = {.count = 1, .reusable = true}, SHIFT(458),
  [1799] = {.count = 1, .reusable = true}, SHIFT(389),
  [1801] = {.count = 1, .reusable = true}, SHIFT(390),
  [1803] = {.count = 1, .reusable = true}, SHIFT(430),
  [1805] = {.count = 1, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 1, .production_id = 4),
  [1807] = {.count = 1, .reusable = false}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 1, .production_id = 4),
  [1809] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2),
  [1811] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2), SHIFT_REPEAT(389),
  [1814] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2), SHIFT_REPEAT(390),
  [1817] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2),
  [1819] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(241),
  [1822] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(388),
  [1825] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 3),
  [1827] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 3),
  [1829] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle_block, 3),
  [1831] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texture, 3),
  [1833] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType_block, 3),
  [1835] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 3),
  [1837] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType_block, 3),
  [1839] = {.count = 1, .reusable = true}, SHIFT(233),
  [1841] = {.count = 1, .reusable = true}, SHIFT(378),
  [1843] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType, 3),
  [1845] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_normal, 3),
  [1847] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_specular, 3),
  [1849] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 1, .production_id = 4),
  [1851] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 2),
  [1853] = {.count = 1, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2),
  [1855] = {.count = 2, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1858] = {.count = 2, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2), SHIFT_REPEAT(378),
  [1861] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh, 3),
  [1863] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType, 3),
  [1865] = {.count = 1, .reusable = true}, SHIFT(217),
  [1867] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType_block, 2),
  [1869] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 2),
  [1871] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle, 3),
  [1873] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle_block, 2),
  [1875] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType_block, 2),
  [1877] = {.count = 1, .reusable = true}, SHIFT(406),
  [1879] = {.count = 1, .reusable = true}, SHIFT(407),
  [1881] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_type, 1),
  [1883] = {.count = 1, .reusable = true}, SHIFT(534),
  [1885] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gui_repeat1, 2),
  [1887] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gui_repeat1, 2), SHIFT_REPEAT(413),
  [1890] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gui, 1),
  [1892] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 1),
  [1894] = {.count = 1, .reusable = true}, SHIFT(428),
  [1896] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 1),
  [1898] = {.count = 1, .reusable = true}, SHIFT(512),
  [1900] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 1),
  [1902] = {.count = 1, .reusable = true}, SHIFT(513),
  [1904] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 1),
  [1906] = {.count = 1, .reusable = true}, SHIFT(498),
  [1908] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_linewidth, 1),
  [1910] = {.count = 1, .reusable = true}, SHIFT(496),
  [1912] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 1),
  [1914] = {.count = 1, .reusable = true}, SHIFT(514),
  [1916] = {.count = 1, .reusable = true}, SHIFT(426),
  [1918] = {.count = 1, .reusable = true}, SHIFT(397),
  [1920] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_type, 3),
  [1922] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 3),
  [1924] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [1926] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 3),
  [1928] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 3),
  [1930] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [1932] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 3),
  [1934] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_linewidth, 3),
  [1936] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 3),
  [1938] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 3),
  [1940] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [1942] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(377),
  [1945] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_integer, 1),
  [1947] = {.count = 1, .reusable = true}, SHIFT(495),
  [1949] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 3),
  [1951] = {.count = 1, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 1, .production_id = 4),
  [1953] = {.count = 1, .reusable = true}, SHIFT(153),
  [1955] = {.count = 1, .reusable = true}, SHIFT(377),
  [1957] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [1959] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 2),
  [1961] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 1, .production_id = 4),
  [1963] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 2),
  [1965] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 1, .production_id = 4),
  [1967] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 2),
  [1969] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 1),
  [1971] = {.count = 1, .reusable = true}, SHIFT(474),
  [1973] = {.count = 1, .reusable = true}, REDUCE(sym__windowType, 1),
  [1975] = {.count = 1, .reusable = true}, SHIFT(460),
  [1977] = {.count = 1, .reusable = true}, REDUCE(sym__textBoxType, 1),
  [1979] = {.count = 1, .reusable = true}, SHIFT(459),
  [1981] = {.count = 1, .reusable = true}, SHIFT(26),
  [1983] = {.count = 1, .reusable = true}, SHIFT(249),
  [1985] = {.count = 1, .reusable = true}, REDUCE(sym__windowType_block, 2),
  [1987] = {.count = 1, .reusable = true}, REDUCE(sym__textBoxType_block, 3),
  [1989] = {.count = 1, .reusable = true}, SHIFT(205),
  [1991] = {.count = 1, .reusable = true}, SHIFT(469),
  [1993] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 2),
  [1995] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 1),
  [1997] = {.count = 1, .reusable = true}, SHIFT(568),
  [1999] = {.count = 1, .reusable = true}, SHIFT(117),
  [2001] = {.count = 1, .reusable = true}, SHIFT(250),
  [2003] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_type, 1, .production_id = 2),
  [2005] = {.count = 1, .reusable = true}, SHIFT(88),
  [2007] = {.count = 1, .reusable = true}, REDUCE(sym__windowType_block, 3),
  [2009] = {.count = 1, .reusable = true}, SHIFT(45),
  [2011] = {.count = 1, .reusable = true}, SHIFT(167),
  [2013] = {.count = 1, .reusable = true}, SHIFT(80),
  [2015] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 1),
  [2017] = {.count = 1, .reusable = true}, SHIFT(564),
  [2019] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 1),
  [2021] = {.count = 1, .reusable = true}, SHIFT(563),
  [2023] = {.count = 1, .reusable = true}, SHIFT(165),
  [2025] = {.count = 1, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 1, .production_id = 4),
  [2027] = {.count = 1, .reusable = true}, REDUCE(sym__textBoxType_block, 2),
  [2029] = {.count = 1, .reusable = true}, REDUCE(sym__textBoxType, 3),
  [2031] = {.count = 1, .reusable = true}, SHIFT(125),
  [2033] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes, 1),
  [2035] = {.count = 1, .reusable = true}, SHIFT(429),
  [2037] = {.count = 1, .reusable = true}, SHIFT(225),
  [2039] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 3),
  [2041] = {.count = 1, .reusable = true}, SHIFT(302),
  [2043] = {.count = 1, .reusable = true}, SHIFT(77),
  [2045] = {.count = 1, .reusable = true}, SHIFT(168),
  [2047] = {.count = 1, .reusable = true}, SHIFT(212),
  [2049] = {.count = 1, .reusable = true}, SHIFT(175),
  [2051] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [2053] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(469),
  [2056] = {.count = 1, .reusable = true}, SHIFT(236),
  [2058] = {.count = 1, .reusable = true}, SHIFT(381),
  [2060] = {.count = 1, .reusable = true}, REDUCE(sym__windowType, 3),
  [2062] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_integer, 3),
  [2064] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 1),
  [2066] = {.count = 1, .reusable = true}, SHIFT(567),
  [2068] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 3),
  [2070] = {.count = 1, .reusable = true}, SHIFT(96),
  [2072] = {.count = 1, .reusable = true}, SHIFT(323),
  [2074] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes_block, 2),
  [2076] = {.count = 1, .reusable = true}, SHIFT(110),
  [2078] = {.count = 1, .reusable = true}, SHIFT(434),
  [2080] = {.count = 1, .reusable = true}, SHIFT(435),
  [2082] = {.count = 1, .reusable = true}, SHIFT(602),
  [2084] = {.count = 1, .reusable = true}, SHIFT(122),
  [2086] = {.count = 1, .reusable = true}, SHIFT(149),
  [2088] = {.count = 1, .reusable = true}, SHIFT(3),
  [2090] = {.count = 1, .reusable = false}, SHIFT(3),
  [2092] = {.count = 1, .reusable = true}, SHIFT(305),
  [2094] = {.count = 1, .reusable = true}, SHIFT(86),
  [2096] = {.count = 1, .reusable = true}, SHIFT(296),
  [2098] = {.count = 1, .reusable = false}, SHIFT(296),
  [2100] = {.count = 1, .reusable = true}, SHIFT(127),
  [2102] = {.count = 1, .reusable = true}, SHIFT(491),
  [2104] = {.count = 1, .reusable = true}, SHIFT(492),
  [2106] = {.count = 1, .reusable = true}, SHIFT(298),
  [2108] = {.count = 1, .reusable = true}, SHIFT(206),
  [2110] = {.count = 1, .reusable = true}, SHIFT(63),
  [2112] = {.count = 1, .reusable = true}, SHIFT(445),
  [2114] = {.count = 1, .reusable = true}, SHIFT(13),
  [2116] = {.count = 1, .reusable = true}, SHIFT(446),
  [2118] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 1),
  [2120] = {.count = 1, .reusable = true}, SHIFT(546),
  [2122] = {.count = 1, .reusable = true}, SHIFT(500),
  [2124] = {.count = 1, .reusable = true}, SHIFT(502),
  [2126] = {.count = 1, .reusable = true}, SHIFT(20),
  [2128] = {.count = 1, .reusable = true}, SHIFT(55),
  [2130] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes_block, 3),
  [2132] = {.count = 1, .reusable = true}, SHIFT(75),
  [2134] = {.count = 1, .reusable = true}, SHIFT(53),
  [2136] = {.count = 1, .reusable = true}, SHIFT(28),
  [2138] = {.count = 1, .reusable = true}, SHIFT(204),
  [2140] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes, 3),
  [2142] = {.count = 1, .reusable = true}, SHIFT(39),
  [2144] = {.count = 1, .reusable = true}, SHIFT(301),
  [2146] = {.count = 1, .reusable = true}, SHIFT(34),
  [2148] = {.count = 1, .reusable = true}, SHIFT(6),
  [2150] = {.count = 1, .reusable = true}, SHIFT(29),
  [2152] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 3),
  [2154] = {.count = 1, .reusable = true}, SHIFT(453),
  [2156] = {.count = 1, .reusable = true}, SHIFT(343),
  [2158] = {.count = 1, .reusable = true}, SHIFT(46),
  [2160] = {.count = 1, .reusable = true}, SHIFT(50),
  [2162] = {.count = 1, .reusable = true}, SHIFT(101),
  [2164] = {.count = 1, .reusable = true}, SHIFT(15),
  [2166] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader_file, 1),
  [2168] = {.count = 1, .reusable = true}, SHIFT(590),
  [2170] = {.count = 1, .reusable = true}, SHIFT(476),
  [2172] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader, 1),
  [2174] = {.count = 1, .reusable = true}, SHIFT(586),
  [2176] = {.count = 1, .reusable = true}, SHIFT(166),
  [2178] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 3),
  [2180] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 3),
  [2182] = {.count = 1, .reusable = true}, SHIFT(478),
  [2184] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_specular, 1),
  [2186] = {.count = 1, .reusable = true}, SHIFT(582),
  [2188] = {.count = 1, .reusable = true}, SHIFT(483),
  [2190] = {.count = 1, .reusable = true}, SHIFT(419),
  [2192] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_normal, 1),
  [2194] = {.count = 1, .reusable = true}, SHIFT(575),
  [2196] = {.count = 1, .reusable = true}, SHIFT(128),
  [2198] = {.count = 1, .reusable = true}, SHIFT(22),
  [2200] = {.count = 1, .reusable = true}, SHIFT(121),
  [2202] = {.count = 1, .reusable = true}, SHIFT(186),
  [2204] = {.count = 1, .reusable = true}, SHIFT(531),
  [2206] = {.count = 1, .reusable = true}, SHIFT(532),
  [2208] = {.count = 1, .reusable = true}, SHIFT(425),
  [2210] = {.count = 1, .reusable = true}, SHIFT(374),
  [2212] = {.count = 1, .reusable = true}, SHIFT(52),
  [2214] = {.count = 1, .reusable = true}, SHIFT(375),
  [2216] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 1),
  [2218] = {.count = 1, .reusable = true}, SHIFT(538),
  [2220] = {.count = 1, .reusable = true}, SHIFT(486),
  [2222] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_index, 1),
  [2224] = {.count = 1, .reusable = true}, SHIFT(506),
  [2226] = {.count = 1, .reusable = true}, SHIFT(504),
  [2228] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_diffuse, 1),
  [2230] = {.count = 1, .reusable = true}, SHIFT(516),
  [2232] = {.count = 1, .reusable = true}, SHIFT(33),
  [2234] = {.count = 1, .reusable = true}, SHIFT(561),
  [2236] = {.count = 1, .reusable = true}, SHIFT(229),
  [2238] = {.count = 1, .reusable = true}, SHIFT(287),
  [2240] = {.count = 1, .reusable = true}, SHIFT(58),
  [2242] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 3),
  [2244] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 3),
  [2246] = {.count = 1, .reusable = true}, SHIFT(37),
  [2248] = {.count = 1, .reusable = true}, SHIFT(138),
  [2250] = {.count = 1, .reusable = true}, SHIFT(313),
  [2252] = {.count = 1, .reusable = true}, SHIFT(44),
  [2254] = {.count = 1, .reusable = true}, SHIFT(574),
  [2256] = {.count = 1, .reusable = true}, SHIFT(182),
  [2258] = {.count = 1, .reusable = true}, SHIFT(181),
  [2260] = {.count = 1, .reusable = true}, SHIFT(180),
  [2262] = {.count = 1, .reusable = true}, SHIFT(7),
  [2264] = {.count = 1, .reusable = true}, SHIFT(141),
  [2266] = {.count = 1, .reusable = true}, SHIFT(284),
  [2268] = {.count = 1, .reusable = true}, SHIFT(183),
  [2270] = {.count = 1, .reusable = true}, SHIFT(283),
  [2272] = {.count = 1, .reusable = true}, SHIFT(605),
  [2274] = {.count = 1, .reusable = true}, SHIFT(253),
  [2276] = {.count = 1, .reusable = true}, SHIFT(337),
  [2278] = {.count = 1, .reusable = true}, SHIFT(336),
  [2280] = {.count = 1, .reusable = true}, SHIFT(357),
  [2282] = {.count = 1, .reusable = true}, SHIFT(304),
  [2284] = {.count = 1, .reusable = true}, SHIFT(245),
  [2286] = {.count = 1, .reusable = true}, SHIFT(246),
  [2288] = {.count = 1, .reusable = true}, SHIFT(330),
  [2290] = {.count = 1, .reusable = true}, SHIFT(367),
  [2292] = {.count = 1, .reusable = true}, SHIFT(184),
  [2294] = {.count = 1, .reusable = true}, SHIFT(431),
  [2296] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 3),
  [2298] = {.count = 1, .reusable = true}, SHIFT(560),
  [2300] = {.count = 1, .reusable = true}, SHIFT(309),
  [2302] = {.count = 1, .reusable = true}, SHIFT(231),
  [2304] = {.count = 1, .reusable = true}, SHIFT(228),
  [2306] = {.count = 1, .reusable = true}, SHIFT(543),
  [2308] = {.count = 1, .reusable = true}, SHIFT(137),
  [2310] = {.count = 1, .reusable = true}, SHIFT(318),
  [2312] = {.count = 1, .reusable = true}, SHIFT(470),
  [2314] = {.count = 1, .reusable = true}, SHIFT(537),
  [2316] = {.count = 1, .reusable = true}, SHIFT(97),
  [2318] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [2320] = {.count = 1, .reusable = true}, SHIFT(185),
  [2322] = {.count = 1, .reusable = true}, SHIFT(293),
  [2324] = {.count = 1, .reusable = true}, SHIFT(452),
  [2326] = {.count = 1, .reusable = true}, SHIFT(450),
  [2328] = {.count = 1, .reusable = true}, SHIFT(150),
  [2330] = {.count = 1, .reusable = true}, SHIFT(362),
  [2332] = {.count = 1, .reusable = true}, SHIFT(292),
  [2334] = {.count = 1, .reusable = true}, SHIFT(290),
  [2336] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_integer, 2),
  [2338] = {.count = 1, .reusable = true}, SHIFT(116),
  [2340] = {.count = 1, .reusable = true}, SHIFT(286),
  [2342] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 3),
  [2344] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_index, 3),
  [2346] = {.count = 1, .reusable = true}, SHIFT(584),
  [2348] = {.count = 1, .reusable = true}, SHIFT(510),
  [2350] = {.count = 1, .reusable = true}, SHIFT(511),
  [2352] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [2354] = {.count = 1, .reusable = true}, SHIFT(178),
  [2356] = {.count = 1, .reusable = true}, SHIFT(481),
  [2358] = {.count = 1, .reusable = true}, SHIFT(480),
  [2360] = {.count = 1, .reusable = true}, SHIFT(73),
  [2362] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_float, 2),
  [2364] = {.count = 1, .reusable = true}, SHIFT(103),
  [2366] = {.count = 1, .reusable = true}, SHIFT(364),
  [2368] = {.count = 1, .reusable = true}, SHIFT(361),
  [2370] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_diffuse, 3),
  [2372] = {.count = 1, .reusable = true}, SHIFT(581),
  [2374] = {.count = 1, .reusable = true}, SHIFT(355),
  [2376] = {.count = 1, .reusable = true}, SHIFT(423),
  [2378] = {.count = 1, .reusable = true}, SHIFT(90),
  [2380] = {.count = 1, .reusable = true}, SHIFT(354),
  [2382] = {.count = 1, .reusable = true}, SHIFT(255),
  [2384] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_normal, 3),
  [2386] = {.count = 1, .reusable = true}, SHIFT(585),
  [2388] = {.count = 1, .reusable = true}, SHIFT(366),
  [2390] = {.count = 1, .reusable = true}, SHIFT(547),
  [2392] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_specular, 3),
  [2394] = {.count = 1, .reusable = true}, SHIFT(589),
  [2396] = {.count = 1, .reusable = true}, SHIFT(164),
  [2398] = {.count = 1, .reusable = true}, SHIFT(321),
  [2400] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader, 3),
  [2402] = {.count = 1, .reusable = true}, SHIFT(592),
  [2404] = {.count = 1, .reusable = true}, SHIFT(163),
  [2406] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader_file, 3),
  [2408] = {.count = 1, .reusable = true}, SHIFT(89),
  [2410] = {.count = 1, .reusable = true}, SHIFT(79),
  [2412] = {.count = 1, .reusable = true}, SHIFT(11),
  [2414] = {.count = 1, .reusable = true}, SHIFT(68),
  [2416] = {.count = 1, .reusable = true}, SHIFT(353),
  [2418] = {.count = 1, .reusable = true}, SHIFT(562),
  [2420] = {.count = 1, .reusable = true}, SHIFT(542),
  [2422] = {.count = 1, .reusable = true}, SHIFT(176),
  [2424] = {.count = 1, .reusable = true}, SHIFT(282),
  [2426] = {.count = 1, .reusable = true}, SHIFT(306),
  [2428] = {.count = 1, .reusable = true}, SHIFT(18),
  [2430] = {.count = 1, .reusable = true}, SHIFT(85),
  [2432] = {.count = 1, .reusable = true}, SHIFT(599),
  [2434] = {.count = 1, .reusable = true}, SHIFT(349),
  [2436] = {.count = 1, .reusable = true}, SHIFT(129),
  [2438] = {.count = 1, .reusable = true}, SHIFT(123),
  [2440] = {.count = 1, .reusable = true}, SHIFT(433),
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
