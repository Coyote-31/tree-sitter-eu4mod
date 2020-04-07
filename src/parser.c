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
#define STATE_COUNT 601
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 389
#define ALIAS_COUNT 4
#define TOKEN_COUNT 190
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
  anon_sym_name = 26,
  anon_sym_x = 27,
  anon_sym_y = 28,
  anon_sym_path = 29,
  anon_sym_archive = 30,
  aux_sym__statement_mod_archive_token1 = 31,
  anon_sym_remote_file_id = 32,
  aux_sym__statement_mod_remote_file_id_token1 = 33,
  anon_sym_version = 34,
  aux_sym__statement_mod_version_token1 = 35,
  anon_sym_picture = 36,
  aux_sym__statement_mod_picture_token1 = 37,
  anon_sym_supported_version = 38,
  aux_sym__statement_mod_supported_version_token1 = 39,
  anon_sym_replace_path = 40,
  aux_sym__mod_replace_path_folder_token1 = 41,
  anon_sym_tags = 42,
  aux_sym__mod_tags_keyword_token1 = 43,
  aux_sym__mod_tags_keyword_token2 = 44,
  aux_sym__mod_tags_keyword_token3 = 45,
  aux_sym__mod_tags_keyword_token4 = 46,
  aux_sym__mod_tags_keyword_token5 = 47,
  aux_sym__mod_tags_keyword_token6 = 48,
  aux_sym__mod_tags_keyword_token7 = 49,
  aux_sym__mod_tags_keyword_token8 = 50,
  aux_sym__mod_tags_keyword_token9 = 51,
  aux_sym__mod_tags_keyword_token10 = 52,
  aux_sym__mod_tags_keyword_token11 = 53,
  aux_sym__mod_tags_keyword_token12 = 54,
  aux_sym__mod_tags_keyword_token13 = 55,
  aux_sym__mod_tags_keyword_token14 = 56,
  aux_sym__mod_tags_keyword_token15 = 57,
  aux_sym__mod_tags_keyword_token16 = 58,
  aux_sym__mod_tags_keyword_token17 = 59,
  aux_sym__mod_tags_keyword_token18 = 60,
  aux_sym__mod_tags_keyword_token19 = 61,
  aux_sym__mod_tags_keyword_token20 = 62,
  aux_sym__mod_tags_keyword_token21 = 63,
  aux_sym__mod_tags_keyword_token22 = 64,
  anon_sym_dependencies = 65,
  aux_sym__statement_gfx_name_token1 = 66,
  aux_sym__statement_gfx_name_token2 = 67,
  anon_sym_cursor_offset = 68,
  aux_sym__statement_gfx_textureFile_token1 = 69,
  aux_sym__statement_gfx_textureFile_token2 = 70,
  aux_sym__statement_gfx_textureFile1_token1 = 71,
  aux_sym__statement_gfx_textureFile2_token1 = 72,
  aux_sym__statement_gfx_textureFile3_token1 = 73,
  anon_sym_SEMI = 74,
  anon_sym_noOfFrames = 75,
  anon_sym_overlay_frames_per_row = 76,
  anon_sym_overlay_rows = 77,
  anon_sym_effectFile = 78,
  aux_sym__statement_gfx_effectFile_token1 = 79,
  anon_sym_animation = 80,
  anon_sym_animationmaskfile = 81,
  anon_sym_animationtexturefile = 82,
  aux_sym__animation_entry_dds_token1 = 83,
  anon_sym_animationrotation = 84,
  anon_sym_animationlooping = 85,
  anon_sym_animationtime = 86,
  anon_sym_animationdelay = 87,
  anon_sym_animationrotationoffset = 88,
  anon_sym_animationtexturescale = 89,
  anon_sym_animationblendmode = 90,
  anon_sym_DQUOTEadd_DQUOTE = 91,
  anon_sym_DQUOTEmultiply_DQUOTE = 92,
  anon_sym_DQUOTEoverlay_DQUOTE = 93,
  anon_sym_animationtype = 94,
  anon_sym_DQUOTEscrolling_DQUOTE = 95,
  anon_sym_DQUOTErotating_DQUOTE = 96,
  anon_sym_DQUOTEpulsing_DQUOTE = 97,
  anon_sym_animationframes = 98,
  anon_sym_size = 99,
  anon_sym_borderSize = 100,
  anon_sym_alwaystransparent = 101,
  anon_sym_allwaystransparent = 102,
  anon_sym_legacy_lazy_load = 103,
  anon_sym_clicksound = 104,
  anon_sym_click = 105,
  anon_sym_speed = 106,
  anon_sym_textblock = 107,
  anon_sym_text = 108,
  anon_sym_color = 109,
  anon_sym_colortwo = 110,
  anon_sym_font = 111,
  anon_sym_position = 112,
  anon_sym_format = 113,
  anon_sym_centre = 114,
  anon_sym_cull_distance = 115,
  anon_sym_B = 116,
  anon_sym_b = 117,
  anon_sym_G = 118,
  anon_sym_H = 119,
  anon_sym_l = 120,
  anon_sym_M = 121,
  anon_sym_O = 122,
  anon_sym_g = 123,
  anon_sym_R = 124,
  anon_sym_T = 125,
  anon_sym_W = 126,
  anon_sym_Y = 127,
  anon_sym_border_color = 128,
  anon_sym_animation_rate_fps = 129,
  anon_sym_looping = 130,
  anon_sym_play_on_show = 131,
  anon_sym_pause_on_loop = 132,
  anon_sym_horizontal = 133,
  anon_sym_file = 134,
  aux_sym__statement_gfx_file_token1 = 135,
  anon_sym_id = 136,
  anon_sym_type = 137,
  anon_sym_meshsettings = 138,
  anon_sym_index = 139,
  anon_sym_texture_diffuse = 140,
  anon_sym_texture_normal = 141,
  anon_sym_texture_specular = 142,
  anon_sym_shader = 143,
  aux_sym__statement_gfx_meshsettings_shader_token1 = 144,
  anon_sym_shader_file = 145,
  aux_sym__statement_gfx_meshsettings_shader_file_token1 = 146,
  anon_sym_scale = 147,
  anon_sym_transparencecheck = 148,
  anon_sym_loadType = 149,
  anon_sym_DQUOTEINGAME_DQUOTE = 150,
  anon_sym_DQUOTEFRONTEND_DQUOTE = 151,
  anon_sym_norefcount = 152,
  anon_sym_texture = 153,
  anon_sym_normal = 154,
  anon_sym_specular = 155,
  anon_sym_effect = 156,
  aux_sym__statement_gfx_effect_token1 = 157,
  anon_sym_alphamaskfile = 158,
  aux_sym__statement_gfx_alphamaskfile_token1 = 159,
  anon_sym_linewidth = 160,
  anon_sym_backGround = 161,
  anon_sym_background = 162,
  anon_sym_moveable = 163,
  anon_sym_orientation = 164,
  anon_sym_priority = 165,
  anon_sym_scrollbartype = 166,
  anon_sym_textureFile = 167,
  anon_sym_cursor = 168,
  anon_sym_maxWidth = 169,
  anon_sym_maxHeight = 170,
  anon_sym_fixedsize = 171,
  sym_assign_equal = 172,
  sym_string = 173,
  sym_number = 174,
  sym_float = 175,
  aux_sym__float_positive_token1 = 176,
  sym_integer = 177,
  aux_sym__integer_positive_token1 = 178,
  sym_byte = 179,
  sym_hexadecimal = 180,
  sym_angle = 181,
  anon_sym_true = 182,
  anon_sym_false = 183,
  anon_sym_yes = 184,
  anon_sym_no = 185,
  anon_sym_0 = 186,
  anon_sym_1 = 187,
  sym_comment = 188,
  aux_sym__orientation_value_token1 = 189,
  sym_file = 190,
  sym_dot_mod = 191,
  sym_dot_gfx = 192,
  sym_dot_gui = 193,
  sym__gui_types_definition = 194,
  sym__spriteTypes = 195,
  sym__spriteTypes_block = 196,
  sym__spriteTypes_statement = 197,
  sym__spriteTypes_type = 198,
  sym__objectTypes = 199,
  sym__objectTypes_block = 200,
  sym__objectTypes_type = 201,
  sym__bitmapfonts = 202,
  sym__bitmapfonts_block = 203,
  sym__bitmapfonts_type = 204,
  sym__guiTypes = 205,
  sym__guiTypes_block = 206,
  sym__guiTypes_type = 207,
  sym__spriteType = 208,
  sym__spriteType_block = 209,
  sym__textSpriteType = 210,
  sym__textSpriteType_block = 211,
  sym__corneredTileSpriteType = 212,
  sym__corneredTileSpriteType_block = 213,
  sym__maskedShieldType = 214,
  sym__maskedShieldType_block = 215,
  sym__animatedmaptext = 216,
  sym__animatedmaptext_block = 217,
  sym__textcolors = 218,
  sym__textcolors_block = 219,
  sym__bitmapfont = 220,
  sym__bitmapfont_block = 221,
  sym__frameAnimatedSpriteType = 222,
  sym__frameAnimatedSpriteType_block = 223,
  sym__progressbartype = 224,
  sym__progressbartype_block = 225,
  sym__pdxmesh = 226,
  sym__pdxmesh_block = 227,
  sym__pdxparticle = 228,
  sym__pdxparticle_block = 229,
  sym__arrowType = 230,
  sym__arrowType_block = 231,
  sym__tradeRouteType = 232,
  sym__tradeRouteType_block = 233,
  sym__PieChartType = 234,
  sym__PieChartType_block = 235,
  sym__LineChartType = 236,
  sym__LineChartType_block = 237,
  sym__windowType = 238,
  sym__windowType_block = 239,
  sym__listBoxType = 240,
  sym__listBoxType_block = 241,
  sym__editBoxType = 242,
  sym__editBoxType_block = 243,
  sym__instantTextBoxType = 244,
  sym__instantTextBoxType_block = 245,
  sym__statement_name = 246,
  sym__statement_xy_integer = 247,
  sym__entry_x_integer = 248,
  sym__entry_y_integer = 249,
  sym__statement_xy_float = 250,
  sym__entry_x_float = 251,
  sym__entry_y_float = 252,
  sym__statement_mod_path = 253,
  sym__statement_mod_archive = 254,
  sym__statement_mod_remote_file_id = 255,
  sym__statement_mod_version = 256,
  sym__statement_mod_picture = 257,
  sym__statement_mod_supported_version = 258,
  sym__statement_mod_replace_path = 259,
  sym__mod_replace_path_folder = 260,
  sym__statement_mod_tags = 261,
  sym__mod_tags_block = 262,
  sym__mod_tags_keyword = 263,
  sym__statement_mod_dependencies = 264,
  sym__mod_dependencies_block = 265,
  sym__statement_gfx_name = 266,
  sym__statement_gfx_path = 267,
  sym__statement_gfx_cursor_offset = 268,
  sym__statement_gfx_textureFile = 269,
  sym__statement_gfx_textureFile1 = 270,
  sym__statement_gfx_textureFile2 = 271,
  sym__statement_gfx_textureFile3 = 272,
  sym__statement_gfx_noOfFrames = 273,
  sym__statement_gfx_overlay_frames_per_row = 274,
  sym__statement_gfx_overlay_rows = 275,
  sym__statement_gfx_effectFile = 276,
  sym__statement_gfx_animation = 277,
  sym__gfx_animation_block = 278,
  sym__animation_entry_dds = 279,
  sym__animation_entry_angle = 280,
  sym__animation_entry_bool = 281,
  sym__animation_entry_time = 282,
  sym__animation_entry_xy_float = 283,
  sym__animation_entry_blendmode = 284,
  sym__animation_entry_type = 285,
  sym__animation_entry_frames = 286,
  sym__statement_gfx_size_xy = 287,
  sym__statement_gfx_size_integer = 288,
  sym__statement_gfx_borderSize = 289,
  sym__statement_gfx_alwaystransparent = 290,
  sym__statement_gfx_allwaystransparent = 291,
  sym__statement_gfx_legacy_lazy_load = 292,
  sym__statement_gfx_clicksound = 293,
  sym__statement_gfx_speed = 294,
  sym__statement_gfx_textblock = 295,
  sym__gfx_textblock = 296,
  sym__statement_gfx_text = 297,
  sym__statement_gfx_color = 298,
  sym__statement_gfx_colortwo = 299,
  sym__statement_gfx_font = 300,
  sym__statement_gfx_position = 301,
  sym__statement_gfx_format = 302,
  sym__statement_gfx_cull_distance = 303,
  sym__statement_gfx_textcolors = 304,
  sym__statement_gfx_bitmapfont_color = 305,
  sym__statement_gfx_bitmapfont_border_color = 306,
  sym__statement_gfx_animation_rate_fps = 307,
  sym__statement_gfx_looping = 308,
  sym__statement_gfx_play_on_show = 309,
  sym__statement_gfx_pause_on_loop = 310,
  sym__statement_gfx_horizontal = 311,
  sym__statement_gfx_file = 312,
  sym__statement_gfx_pdxmesh_animation = 313,
  sym__statement_gfx_animation_id = 314,
  sym__statement_gfx_animation_type = 315,
  sym__statement_gfx_pdxmesh_meshsettings = 316,
  sym__statement_gfx_meshsettings_index = 317,
  sym__statement_gfx_meshsettings_texture_diffuse = 318,
  sym__statement_gfx_meshsettings_texture_normal = 319,
  sym__statement_gfx_meshsettings_texture_specular = 320,
  sym__statement_gfx_meshsettings_shader = 321,
  sym__statement_gfx_meshsettings_shader_file = 322,
  sym__statement_gfx_scale = 323,
  sym__statement_gfx_transparencecheck = 324,
  sym__statement_gfx_loadType = 325,
  sym__statement_gfx_norefcount = 326,
  sym__statement_gfx_texture = 327,
  sym__statement_gfx_normal = 328,
  sym__statement_gfx_specular = 329,
  sym__statement_gfx_effect = 330,
  sym__statement_gfx_effect_bool = 331,
  sym__statement_gfx_alphamaskfile = 332,
  sym__statement_gfx_linewidth = 333,
  sym__statement_gfx_type = 334,
  sym__statement_gui_backGround = 335,
  sym__statement_gui_background = 336,
  sym__statement_gui_position = 337,
  sym__statement_gui_size = 338,
  sym__statement_gui_borderSize = 339,
  sym__statement_gui_moveable = 340,
  sym__statement_gui_orientation = 341,
  sym__statement_gui_priority = 342,
  sym__statement_gui_scrollbartype = 343,
  sym__statement_gui_allwaystransparent = 344,
  sym__statement_gui_textureFile = 345,
  sym__statement_gui_font = 346,
  sym__statement_gui_cursor = 347,
  sym__statement_gui_text = 348,
  sym__statement_gui_instantTextBoxType = 349,
  sym__statement_gui_maxWidth = 350,
  sym__statement_gui_maxHeight = 351,
  sym__statement_gui_fixedsize = 352,
  sym__float_positive = 353,
  sym__integer_positive = 354,
  sym__boolean_yes_no = 355,
  sym__boolean_0_1 = 356,
  sym__orientation_value = 357,
  aux_sym_dot_mod_repeat1 = 358,
  aux_sym_dot_gfx_repeat1 = 359,
  aux_sym_dot_gui_repeat1 = 360,
  aux_sym__spriteTypes_block_repeat1 = 361,
  aux_sym__objectTypes_block_repeat1 = 362,
  aux_sym__bitmapfonts_block_repeat1 = 363,
  aux_sym__guiTypes_block_repeat1 = 364,
  aux_sym__spriteType_block_repeat1 = 365,
  aux_sym__textSpriteType_block_repeat1 = 366,
  aux_sym__corneredTileSpriteType_block_repeat1 = 367,
  aux_sym__maskedShieldType_block_repeat1 = 368,
  aux_sym__animatedmaptext_block_repeat1 = 369,
  aux_sym__textcolors_block_repeat1 = 370,
  aux_sym__bitmapfont_block_repeat1 = 371,
  aux_sym__frameAnimatedSpriteType_block_repeat1 = 372,
  aux_sym__progressbartype_block_repeat1 = 373,
  aux_sym__pdxmesh_block_repeat1 = 374,
  aux_sym__pdxparticle_block_repeat1 = 375,
  aux_sym__arrowType_block_repeat1 = 376,
  aux_sym__tradeRouteType_block_repeat1 = 377,
  aux_sym__PieChartType_block_repeat1 = 378,
  aux_sym__LineChartType_block_repeat1 = 379,
  aux_sym__windowType_block_repeat1 = 380,
  aux_sym__listBoxType_block_repeat1 = 381,
  aux_sym__editBoxType_block_repeat1 = 382,
  aux_sym__instantTextBoxType_block_repeat1 = 383,
  aux_sym__mod_tags_block_repeat1 = 384,
  aux_sym__mod_dependencies_block_repeat1 = 385,
  aux_sym__gfx_animation_block_repeat1 = 386,
  aux_sym__animation_entry_frames_repeat1 = 387,
  aux_sym__gfx_textblock_repeat1 = 388,
  alias_sym_dependencies = 389,
  alias_sym_name_value = 390,
  alias_sym_statement = 391,
  alias_sym_type_definition = 392,
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
      if (eof) ADVANCE(1937);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '-') ADVANCE(1913);
      if (lookahead == '0') ADVANCE(2157);
      if (lookahead == '1') ADVANCE(2159);
      if (lookahead == '2') ADVANCE(2131);
      if (lookahead == ';') ADVANCE(2014);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == 'B') ADVANCE(2062);
      if (lookahead == 'G') ADVANCE(2065);
      if (lookahead == 'H') ADVANCE(2066);
      if (lookahead == 'L') ADVANCE(1288);
      if (lookahead == 'M') ADVANCE(2069);
      if (lookahead == 'O') ADVANCE(2070);
      if (lookahead == 'P') ADVANCE(1295);
      if (lookahead == 'R') ADVANCE(2073);
      if (lookahead == 'T') ADVANCE(2074);
      if (lookahead == 'W') ADVANCE(2075);
      if (lookahead == 'Y') ADVANCE(2076);
      if (lookahead == '\\') SKIP(1930)
      if (lookahead == 'a') ADVANCE(1373);
      if (lookahead == 'b') ADVANCE(2064);
      if (lookahead == 'c') ADVANCE(1153);
      if (lookahead == 'd') ADVANCE(1087);
      if (lookahead == 'e') ADVANCE(1065);
      if (lookahead == 'f') ADVANCE(930);
      if (lookahead == 'g') ADVANCE(2072);
      if (lookahead == 'h') ADVANCE(1512);
      if (lookahead == 'i') ADVANCE(1054);
      if (lookahead == 'l') ADVANCE(2068);
      if (lookahead == 'm') ADVANCE(931);
      if (lookahead == 'n') ADVANCE(933);
      if (lookahead == 'o') ADVANCE(1012);
      if (lookahead == 'p') ADVANCE(939);
      if (lookahead == 'r') ADVANCE(1094);
      if (lookahead == 's') ADVANCE(1018);
      if (lookahead == 't') ADVANCE(944);
      if (lookahead == 'v') ADVANCE(1157);
      if (lookahead == 'w') ADVANCE(1293);
      if (lookahead == 'x') ADVANCE(1965);
      if (lookahead == 'y') ADVANCE(1967);
      if (lookahead == '{') ADVANCE(1939);
      if (lookahead == '}') ADVANCE(1940);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(2133);
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
      if (lookahead == '\n') SKIP(549)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(549)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(550)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(550)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(551)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(551)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(555)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(555)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(554)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(554)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(559)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(559)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(556)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(556)
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
      if (lookahead == '\n') SKIP(558)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(558)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(560)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(560)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(561)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(561)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(401);
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
    case 24:
      if (lookahead == ' ') ADVANCE(402);
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
    case 25:
      if (lookahead == ' ') ADVANCE(396);
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
    case 26:
      if (lookahead == ' ') ADVANCE(400);
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
    case 27:
      if (lookahead == ' ') ADVANCE(398);
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
    case 28:
      if (lookahead == ' ') ADVANCE(399);
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
    case 29:
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '"') ADVANCE(2129);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1972);
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
      if (lookahead == '"') ADVANCE(1972);
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
      if (lookahead == '"') ADVANCE(1972);
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
      if (lookahead == '"') ADVANCE(1972);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
    case 332:
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
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
      if (lookahead == '"') ADVANCE(2005);
      if (lookahead == '_') ADVANCE(336);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(2005);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(2129);
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
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'C') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'I') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'K') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(2129);
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
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'g') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'g') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'h') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'y') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 396:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 397:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 398:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 399:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 400:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 401:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 402:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 404:
      if (lookahead == '"') ADVANCE(2129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 405:
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
    case 406:
      if (lookahead == '"') ADVANCE(1992);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 407:
      if (lookahead == '"') ADVANCE(2033);
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
      if (lookahead == '"') ADVANCE(2033);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 409:
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 430:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 431:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 432:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 433:
      if (lookahead == '"') ADVANCE(1980);
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
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 435:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 436:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 437:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 438:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 439:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 440:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'g') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 441:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'h') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 442:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 443:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 444:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 445:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 446:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 447:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 448:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 449:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 450:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 451:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'p') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 452:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 453:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 454:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 455:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 456:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 457:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 458:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 460:
      if (lookahead == '"') ADVANCE(1980);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(460);
      END_STATE();
    case 461:
      if (lookahead == '"') ADVANCE(1974);
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
      if (lookahead == '"') ADVANCE(1974);
      if (lookahead == '.') ADVANCE(1916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 463:
      if (lookahead == '"') ADVANCE(1974);
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
      if (lookahead == '"') ADVANCE(1974);
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
      if (lookahead == '"') ADVANCE(1976);
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
      if (lookahead == '"') ADVANCE(1976);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 467:
      if (lookahead == '"') ADVANCE(1976);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 468:
      if (lookahead == '"') ADVANCE(1976);
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
      if (lookahead == '"') ADVANCE(1976);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 470:
      if (lookahead == '"') ADVANCE(1970);
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
      if (lookahead == '"') ADVANCE(1970);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 472:
      if (lookahead == '"') ADVANCE(1970);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 473:
      if (lookahead == '"') ADVANCE(1970);
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
      if (lookahead == '"') ADVANCE(1970);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 475:
      if (lookahead == '"') ADVANCE(1986);
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
      if (lookahead == '"') ADVANCE(1986);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 477:
      if (lookahead == '"') ADVANCE(1989);
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
      if (lookahead == '"') ADVANCE(1989);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 479:
      if (lookahead == '"') ADVANCE(1998);
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
      if (lookahead == '"') ADVANCE(1998);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 481:
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
    case 482:
      if (lookahead == '"') ADVANCE(2000);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 483:
      if (lookahead == '"') ADVANCE(1978);
      if (lookahead == '.') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 484:
      if (lookahead == '"') ADVANCE(1978);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 485:
      if (lookahead == '"') ADVANCE(1978);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 486:
      if (lookahead == '"') ADVANCE(1978);
      if (lookahead == '.') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 487:
      if (lookahead == '"') ADVANCE(1978);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 488:
      if (lookahead == '"') ADVANCE(1978);
      if (lookahead == '.') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 489:
      if (lookahead == '"') ADVANCE(1978);
      if (lookahead == '.') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 490:
      if (lookahead == '"') ADVANCE(1978);
      if (lookahead == '.') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 491:
      if (lookahead == '"') ADVANCE(2010);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 492:
      if (lookahead == '"') ADVANCE(2010);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 493:
      if (lookahead == '"') ADVANCE(2019);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 494:
      if (lookahead == '"') ADVANCE(2019);
      if (lookahead == '.') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(857);
      END_STATE();
    case 495:
      if (lookahead == '"') ADVANCE(1984);
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
      if (lookahead == '"') ADVANCE(1984);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 497:
      if (lookahead == '"') ADVANCE(2100);
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
      if (lookahead == '"') ADVANCE(2100);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 499:
      if (lookahead == '"') ADVANCE(2084);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 500:
      if (lookahead == '"') ADVANCE(2084);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 501:
      if (lookahead == '"') ADVANCE(2035);
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
      if (lookahead == '"') ADVANCE(2035);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 503:
      if (lookahead == '"') ADVANCE(2039);
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
      if (lookahead == '"') ADVANCE(2039);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 505:
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
    case 506:
      if (lookahead == '"') ADVANCE(1983);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 507:
      if (lookahead == '"') ADVANCE(2101);
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
      if (lookahead == '"') ADVANCE(2101);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 509:
      if (lookahead == '"') ADVANCE(1987);
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
      if (lookahead == '"') ADVANCE(1987);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 511:
      if (lookahead == '"') ADVANCE(1988);
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
      if (lookahead == '"') ADVANCE(1988);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 513:
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
    case 514:
      if (lookahead == '"') ADVANCE(1993);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 515:
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
    case 516:
      if (lookahead == '"') ADVANCE(1997);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 517:
      if (lookahead == '"') ADVANCE(2034);
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
      if (lookahead == '"') ADVANCE(2034);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 519:
      if (lookahead == '"') ADVANCE(2038);
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
      if (lookahead == '"') ADVANCE(2038);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 521:
      if (lookahead == '"') ADVANCE(1985);
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
      if (lookahead == '"') ADVANCE(1985);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 523:
      if (lookahead == '"') ADVANCE(2002);
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
      if (lookahead == '"') ADVANCE(2002);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 525:
      if (lookahead == '"') ADVANCE(2037);
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
      if (lookahead == '"') ADVANCE(2037);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 527:
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
    case 528:
      if (lookahead == '"') ADVANCE(1990);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 529:
      if (lookahead == '"') ADVANCE(1996);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 530:
      if (lookahead == '"') ADVANCE(1996);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 531:
      if (lookahead == '"') ADVANCE(2001);
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
      if (lookahead == '"') ADVANCE(2001);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 533:
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
    case 534:
      if (lookahead == '"') ADVANCE(1999);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 535:
      if (lookahead == '"') ADVANCE(1991);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 536:
      if (lookahead == '"') ADVANCE(1991);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 537:
      if (lookahead == '"') ADVANCE(1995);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 538:
      if (lookahead == '"') ADVANCE(1995);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 539:
      if (lookahead == '"') ADVANCE(1982);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 540:
      if (lookahead == '"') ADVANCE(1982);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 541:
      if (lookahead == '"') ADVANCE(2003);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 542:
      if (lookahead == '"') ADVANCE(2003);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 543:
      if (lookahead == '"') ADVANCE(1994);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 544:
      if (lookahead == '"') ADVANCE(1994);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 545:
      if (lookahead == '"') ADVANCE(2111);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 546:
      if (lookahead == '"') ADVANCE(2161);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 547:
      if (lookahead == '"') ADVANCE(2096);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 548:
      if (lookahead == '"') ADVANCE(2094);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 549:
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == 'L') ADVANCE(1288);
      if (lookahead == 'P') ADVANCE(1295);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(1376);
      if (lookahead == 'b') ADVANCE(1355);
      if (lookahead == 'c') ADVANCE(1429);
      if (lookahead == 'e') ADVANCE(1264);
      if (lookahead == 'f') ADVANCE(1339);
      if (lookahead == 'l') ADVANCE(1091);
      if (lookahead == 'm') ADVANCE(975);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead == 'o') ADVANCE(1842);
      if (lookahead == 'p') ADVANCE(1642);
      if (lookahead == 's') ADVANCE(1049);
      if (lookahead == 't') ADVANCE(1217);
      if (lookahead == '}') ADVANCE(1940);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(549)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2139);
      END_STATE();
    case 550:
      if (lookahead == '"') ADVANCE(1035);
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '0') ADVANCE(2143);
      if (lookahead == '1') ADVANCE(2147);
      if (lookahead == '2') ADVANCE(2144);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(1374);
      if (lookahead == 'b') ADVANCE(1573);
      if (lookahead == 'c') ADVANCE(1430);
      if (lookahead == 'e') ADVANCE(1264);
      if (lookahead == 'h') ADVANCE(1512);
      if (lookahead == 'l') ADVANCE(1089);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead == 'o') ADVANCE(1842);
      if (lookahead == 'p') ADVANCE(991);
      if (lookahead == 's') ADVANCE(1289);
      if (lookahead == 't') ADVANCE(1226);
      if (lookahead == '}') ADVANCE(1940);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(2146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(550)
      END_STATE();
    case 551:
      if (lookahead == '"') ADVANCE(1928);
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '-') ADVANCE(1917);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(1396);
      if (lookahead == 'e') ADVANCE(1264);
      if (lookahead == 'l') ADVANCE(1511);
      if (lookahead == 'n') ADVANCE(936);
      if (lookahead == 'o') ADVANCE(1842);
      if (lookahead == 'p') ADVANCE(991);
      if (lookahead == 't') ADVANCE(1228);
      if (lookahead == '}') ADVANCE(1940);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(551)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2141);
      END_STATE();
    case 552:
      if (lookahead == '"') ADVANCE(2025);
      if (lookahead == '.') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(857);
      END_STATE();
    case 553:
      if (lookahead == '"') ADVANCE(2113);
      if (lookahead == '.') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(857);
      END_STATE();
    case 554:
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '-') ADVANCE(1919);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(1374);
      if (lookahead == 'b') ADVANCE(1573);
      if (lookahead == 'c') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(1264);
      if (lookahead == 'l') ADVANCE(1090);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead == 'o') ADVANCE(1842);
      if (lookahead == 'p') ADVANCE(991);
      if (lookahead == 's') ADVANCE(1289);
      if (lookahead == 't') ADVANCE(1228);
      if (lookahead == '}') ADVANCE(1940);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(554)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2136);
      END_STATE();
    case 555:
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '0') ADVANCE(862);
      if (lookahead == '3') ADVANCE(861);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(1374);
      if (lookahead == 'b') ADVANCE(1573);
      if (lookahead == 'c') ADVANCE(1432);
      if (lookahead == 'e') ADVANCE(1241);
      if (lookahead == 'l') ADVANCE(1090);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead == 'o') ADVANCE(1842);
      if (lookahead == 'p') ADVANCE(991);
      if (lookahead == 's') ADVANCE(1289);
      if (lookahead == 't') ADVANCE(1230);
      if (lookahead == '}') ADVANCE(1940);
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
          lookahead == 65279) SKIP(555)
      END_STATE();
    case 556:
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == ';') ADVANCE(2014);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'c') ADVANCE(1568);
      if (lookahead == 'e') ADVANCE(1241);
      if (lookahead == 'h') ADVANCE(1512);
      if (lookahead == 'l') ADVANCE(1549);
      if (lookahead == 'n') ADVANCE(936);
      if (lookahead == 'o') ADVANCE(1842);
      if (lookahead == 's') ADVANCE(1289);
      if (lookahead == 't') ADVANCE(1226);
      if (lookahead == '}') ADVANCE(1940);
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
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == 'B') ADVANCE(2062);
      if (lookahead == 'G') ADVANCE(2065);
      if (lookahead == 'H') ADVANCE(2066);
      if (lookahead == 'M') ADVANCE(2069);
      if (lookahead == 'O') ADVANCE(2070);
      if (lookahead == 'R') ADVANCE(2073);
      if (lookahead == 'T') ADVANCE(2074);
      if (lookahead == 'W') ADVANCE(2075);
      if (lookahead == 'Y') ADVANCE(2076);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(1508);
      if (lookahead == 'b') ADVANCE(2063);
      if (lookahead == 'c') ADVANCE(1571);
      if (lookahead == 'e') ADVANCE(1266);
      if (lookahead == 'f') ADVANCE(1338);
      if (lookahead == 'g') ADVANCE(2071);
      if (lookahead == 'l') ADVANCE(2067);
      if (lookahead == 'm') ADVANCE(1092);
      if (lookahead == 'n') ADVANCE(932);
      if (lookahead == 'p') ADVANCE(1513);
      if (lookahead == 's') ADVANCE(1048);
      if (lookahead == 't') ADVANCE(1220);
      if (lookahead == '}') ADVANCE(1940);
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
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == 'L') ADVANCE(1288);
      if (lookahead == 'P') ADVANCE(1295);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(1508);
      if (lookahead == 'b') ADVANCE(1356);
      if (lookahead == 'c') ADVANCE(1564);
      if (lookahead == 'e') ADVANCE(1266);
      if (lookahead == 'f') ADVANCE(1339);
      if (lookahead == 'm') ADVANCE(975);
      if (lookahead == 'n') ADVANCE(932);
      if (lookahead == 'p') ADVANCE(977);
      if (lookahead == 's') ADVANCE(1050);
      if (lookahead == 't') ADVANCE(1221);
      if (lookahead == '}') ADVANCE(1940);
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
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'c') ADVANCE(1567);
      if (lookahead == 'e') ADVANCE(1264);
      if (lookahead == 'h') ADVANCE(1512);
      if (lookahead == 'l') ADVANCE(1549);
      if (lookahead == 'n') ADVANCE(936);
      if (lookahead == 'o') ADVANCE(1842);
      if (lookahead == 's') ADVANCE(1289);
      if (lookahead == 't') ADVANCE(1232);
      if (lookahead == '}') ADVANCE(1940);
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
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'e') ADVANCE(1266);
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead == 's') ADVANCE(1616);
      if (lookahead == 't') ADVANCE(1233);
      if (lookahead == '}') ADVANCE(1940);
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
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'c') ADVANCE(1822);
      if (lookahead == 'e') ADVANCE(1266);
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead == 's') ADVANCE(1616);
      if (lookahead == 't') ADVANCE(1234);
      if (lookahead == '}') ADVANCE(1940);
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
      if (lookahead == 'R') ADVANCE(546);
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
      if (lookahead == 'T') ADVANCE(546);
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
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(844);
      END_STATE();
    case 618:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == 'a') ADVANCE(545);
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
      if (lookahead == 'd') ADVANCE(548);
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
      if (lookahead == 'g') ADVANCE(617);
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
      if (lookahead == 'r') ADVANCE(547);
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
      if (lookahead == 's') ADVANCE(492);
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
      if (lookahead == 'u') ADVANCE(618);
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
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 'a') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 846:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 847:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 848:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 'd') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 849:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 'd') ADVANCE(848);
      if (lookahead == 'l') ADVANCE(856);
      if (lookahead == 's') ADVANCE(853);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 850:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 'd') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 851:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 852:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 'g') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 853:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 'h') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 854:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 855:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 856:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == 'u') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 857:
      if (lookahead == '.') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 858:
      if (lookahead == '.') ADVANCE(865);
      END_STATE();
    case 859:
      if (lookahead == '.') ADVANCE(1918);
      END_STATE();
    case 860:
      if (lookahead == '.') ADVANCE(1918);
      if (lookahead == '0') ADVANCE(858);
      END_STATE();
    case 861:
      if (lookahead == '.') ADVANCE(1918);
      if (lookahead == '6') ADVANCE(860);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(863);
      END_STATE();
    case 862:
      if (lookahead == '.') ADVANCE(1918);
      if (lookahead == 'x') ADVANCE(1927);
      END_STATE();
    case 863:
      if (lookahead == '.') ADVANCE(1918);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(859);
      END_STATE();
    case 864:
      if (lookahead == '.') ADVANCE(1918);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(863);
      END_STATE();
    case 865:
      if (lookahead == '0') ADVANCE(2150);
      END_STATE();
    case 866:
      if (lookahead == '1') ADVANCE(2011);
      if (lookahead == '2') ADVANCE(2012);
      if (lookahead == '3') ADVANCE(2013);
      END_STATE();
    case 867:
      if (lookahead == 'A') ADVANCE(1505);
      END_STATE();
    case 868:
      if (lookahead == 'B') ADVANCE(1518);
      END_STATE();
    case 869:
      if (lookahead == 'B') ADVANCE(1575);
      END_STATE();
    case 870:
      if (lookahead == 'B') ADVANCE(1576);
      END_STATE();
    case 871:
      if (lookahead == 'C') ADVANCE(1280);
      END_STATE();
    case 872:
      if (lookahead == 'C') ADVANCE(1287);
      END_STATE();
    case 873:
      if (lookahead == 'F') ADVANCE(1669);
      END_STATE();
    case 874:
      if (lookahead == 'F') ADVANCE(1321);
      END_STATE();
    case 875:
      if (lookahead == 'F') ADVANCE(1341);
      END_STATE();
    case 876:
      if (lookahead == 'G') ADVANCE(1637);
      if (lookahead == 'g') ADVANCE(1670);
      END_STATE();
    case 877:
      if (lookahead == 'H') ADVANCE(1179);
      if (lookahead == 'W') ADVANCE(1301);
      END_STATE();
    case 878:
      if (lookahead == 'O') ADVANCE(1242);
      END_STATE();
    case 879:
      if (lookahead == 'O') ADVANCE(1242);
      if (lookahead == 'r') ADVANCE(1159);
      END_STATE();
    case 880:
      if (lookahead == 'O') ADVANCE(1242);
      if (lookahead == 'r') ADVANCE(1158);
      END_STATE();
    case 881:
      if (lookahead == 'R') ADVANCE(1521);
      END_STATE();
    case 882:
      if (lookahead == 'S') ADVANCE(1614);
      if (lookahead == 'c') ADVANCE(1572);
      if (lookahead == 'u') ADVANCE(1654);
      END_STATE();
    case 883:
      if (lookahead == 'S') ADVANCE(1614);
      if (lookahead == 'c') ADVANCE(1572);
      if (lookahead == 'u') ADVANCE(1681);
      END_STATE();
    case 884:
      if (lookahead == 'S') ADVANCE(1284);
      END_STATE();
    case 885:
      if (lookahead == 'S') ADVANCE(1320);
      END_STATE();
    case 886:
      if (lookahead == 'S') ADVANCE(1320);
      if (lookahead == '_') ADVANCE(1047);
      END_STATE();
    case 887:
      if (lookahead == 'S') ADVANCE(1619);
      END_STATE();
    case 888:
      if (lookahead == 'S') ADVANCE(1620);
      END_STATE();
    case 889:
      if (lookahead == 'T') ADVANCE(1883);
      END_STATE();
    case 890:
      if (lookahead == 'T') ADVANCE(1204);
      END_STATE();
    case 891:
      if (lookahead == 'T') ADVANCE(1884);
      END_STATE();
    case 892:
      if (lookahead == 'T') ADVANCE(1885);
      END_STATE();
    case 893:
      if (lookahead == 'T') ADVANCE(1886);
      END_STATE();
    case 894:
      if (lookahead == 'T') ADVANCE(1887);
      END_STATE();
    case 895:
      if (lookahead == 'T') ADVANCE(1888);
      END_STATE();
    case 896:
      if (lookahead == 'T') ADVANCE(1333);
      END_STATE();
    case 897:
      if (lookahead == 'T') ADVANCE(1889);
      END_STATE();
    case 898:
      if (lookahead == 'T') ADVANCE(1890);
      END_STATE();
    case 899:
      if (lookahead == 'T') ADVANCE(1891);
      END_STATE();
    case 900:
      if (lookahead == 'T') ADVANCE(1892);
      END_STATE();
    case 901:
      if (lookahead == 'T') ADVANCE(1894);
      END_STATE();
    case 902:
      if (lookahead == 'T') ADVANCE(1895);
      END_STATE();
    case 903:
      if (lookahead == 'T') ADVANCE(1897);
      END_STATE();
    case 904:
      if (lookahead == 'T') ADVANCE(1898);
      END_STATE();
    case 905:
      if (lookahead == 'T') ADVANCE(1899);
      END_STATE();
    case 906:
      if (lookahead == 'T') ADVANCE(1900);
      END_STATE();
    case 907:
      if (lookahead == 'T') ADVANCE(1901);
      END_STATE();
    case 908:
      if (lookahead == '_') ADVANCE(1265);
      END_STATE();
    case 909:
      if (lookahead == '_') ADVANCE(1070);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1346);
      END_STATE();
    case 910:
      if (lookahead == '_') ADVANCE(1255);
      END_STATE();
    case 911:
      if (lookahead == '_') ADVANCE(1047);
      END_STATE();
    case 912:
      if (lookahead == '_') ADVANCE(1068);
      END_STATE();
    case 913:
      if (lookahead == '_') ADVANCE(1526);
      END_STATE();
    case 914:
      if (lookahead == '_') ADVANCE(1610);
      END_STATE();
    case 915:
      if (lookahead == '_') ADVANCE(1249);
      END_STATE();
    case 916:
      if (lookahead == '_') ADVANCE(1393);
      END_STATE();
    case 917:
      if (lookahead == '_') ADVANCE(1523);
      END_STATE();
    case 918:
      if (lookahead == '_') ADVANCE(1306);
      END_STATE();
    case 919:
      if (lookahead == '_') ADVANCE(1668);
      END_STATE();
    case 920:
      if (lookahead == '_') ADVANCE(1665);
      END_STATE();
    case 921:
      if (lookahead == '_') ADVANCE(1394);
      END_STATE();
    case 922:
      if (lookahead == '_') ADVANCE(1713);
      END_STATE();
    case 923:
      if (lookahead == '_') ADVANCE(1844);
      END_STATE();
    case 924:
      if (lookahead == '_') ADVANCE(1398);
      END_STATE();
    case 925:
      if (lookahead == '_') ADVANCE(1532);
      END_STATE();
    case 926:
      if (lookahead == '_') ADVANCE(1612);
      END_STATE();
    case 927:
      if (lookahead == '_') ADVANCE(1258);
      END_STATE();
    case 928:
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead == 'i') ADVANCE(1804);
      if (lookahead == 'o') ADVANCE(1674);
      END_STATE();
    case 929:
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead == 'o') ADVANCE(1674);
      END_STATE();
    case 930:
      if (lookahead == 'a') ADVANCE(1388);
      if (lookahead == 'i') ADVANCE(1390);
      if (lookahead == 'o') ADVANCE(1473);
      if (lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 931:
      if (lookahead == 'a') ADVANCE(1704);
      if (lookahead == 'e') ADVANCE(1706);
      if (lookahead == 'o') ADVANCE(1840);
      END_STATE();
    case 932:
      if (lookahead == 'a') ADVANCE(1439);
      END_STATE();
    case 933:
      if (lookahead == 'a') ADVANCE(1439);
      if (lookahead == 'o') ADVANCE(2155);
      END_STATE();
    case 934:
      if (lookahead == 'a') ADVANCE(1439);
      if (lookahead == 'o') ADVANCE(879);
      END_STATE();
    case 935:
      if (lookahead == 'a') ADVANCE(1439);
      if (lookahead == 'o') ADVANCE(2154);
      END_STATE();
    case 936:
      if (lookahead == 'a') ADVANCE(1439);
      if (lookahead == 'o') ADVANCE(878);
      END_STATE();
    case 937:
      if (lookahead == 'a') ADVANCE(1439);
      if (lookahead == 'o') ADVANCE(880);
      END_STATE();
    case 938:
      if (lookahead == 'a') ADVANCE(1439);
      if (lookahead == 'o') ADVANCE(1667);
      END_STATE();
    case 939:
      if (lookahead == 'a') ADVANCE(1762);
      if (lookahead == 'd') ADVANCE(1855);
      if (lookahead == 'i') ADVANCE(1027);
      if (lookahead == 'l') ADVANCE(941);
      if (lookahead == 'o') ADVANCE(1711);
      if (lookahead == 'r') ADVANCE(1350);
      END_STATE();
    case 940:
      if (lookahead == 'a') ADVANCE(1762);
      if (lookahead == 'i') ADVANCE(1027);
      if (lookahead == 'l') ADVANCE(941);
      if (lookahead == 'o') ADVANCE(1711);
      if (lookahead == 'r') ADVANCE(1349);
      END_STATE();
    case 941:
      if (lookahead == 'a') ADVANCE(1878);
      END_STATE();
    case 942:
      if (lookahead == 'a') ADVANCE(1013);
      END_STATE();
    case 943:
      if (lookahead == 'a') ADVANCE(1072);
      if (lookahead == 'u') ADVANCE(1101);
      END_STATE();
    case 944:
      if (lookahead == 'a') ADVANCE(1270);
      if (lookahead == 'e') ADVANCE(1857);
      if (lookahead == 'r') ADVANCE(943);
      if (lookahead == 'y') ADVANCE(1584);
      END_STATE();
    case 945:
      if (lookahead == 'a') ADVANCE(1270);
      if (lookahead == 'e') ADVANCE(1860);
      if (lookahead == 'r') ADVANCE(998);
      if (lookahead == 'y') ADVANCE(1584);
      END_STATE();
    case 946:
      if (lookahead == 'a') ADVANCE(1270);
      if (lookahead == 'e') ADVANCE(1861);
      END_STATE();
    case 947:
      if (lookahead == 'a') ADVANCE(1083);
      END_STATE();
    case 948:
      if (lookahead == 'a') ADVANCE(1083);
      if (lookahead == 'o') ADVANCE(1607);
      END_STATE();
    case 949:
      if (lookahead == 'a') ADVANCE(1882);
      END_STATE();
    case 950:
      if (lookahead == 'a') ADVANCE(1046);
      END_STATE();
    case 951:
      if (lookahead == 'a') ADVANCE(1908);
      END_STATE();
    case 952:
      if (lookahead == 'a') ADVANCE(1400);
      END_STATE();
    case 953:
      if (lookahead == 'a') ADVANCE(1400);
      if (lookahead == 'r') ADVANCE(1524);
      END_STATE();
    case 954:
      if (lookahead == 'a') ADVANCE(1040);
      END_STATE();
    case 955:
      if (lookahead == 'a') ADVANCE(1581);
      END_STATE();
    case 956:
      if (lookahead == 'a') ADVANCE(1877);
      END_STATE();
    case 957:
      if (lookahead == 'a') ADVANCE(1853);
      if (lookahead == 'o') ADVANCE(1840);
      END_STATE();
    case 958:
      if (lookahead == 'a') ADVANCE(1380);
      END_STATE();
    case 959:
      if (lookahead == 'a') ADVANCE(1611);
      END_STATE();
    case 960:
      if (lookahead == 'a') ADVANCE(1744);
      END_STATE();
    case 961:
      if (lookahead == 'a') ADVANCE(1381);
      END_STATE();
    case 962:
      if (lookahead == 'a') ADVANCE(1707);
      END_STATE();
    case 963:
      if (lookahead == 'a') ADVANCE(1662);
      END_STATE();
    case 964:
      if (lookahead == 'a') ADVANCE(1746);
      END_STATE();
    case 965:
      if (lookahead == 'a') ADVANCE(1579);
      if (lookahead == 'i') ADVANCE(1733);
      END_STATE();
    case 966:
      if (lookahead == 'a') ADVANCE(1506);
      END_STATE();
    case 967:
      if (lookahead == 'a') ADVANCE(1382);
      END_STATE();
    case 968:
      if (lookahead == 'a') ADVANCE(1684);
      END_STATE();
    case 969:
      if (lookahead == 'a') ADVANCE(1626);
      END_STATE();
    case 970:
      if (lookahead == 'a') ADVANCE(1422);
      END_STATE();
    case 971:
      if (lookahead == 'a') ADVANCE(1643);
      END_STATE();
    case 972:
      if (lookahead == 'a') ADVANCE(1061);
      END_STATE();
    case 973:
      if (lookahead == 'a') ADVANCE(1628);
      END_STATE();
    case 974:
      if (lookahead == 'a') ADVANCE(1768);
      END_STATE();
    case 975:
      if (lookahead == 'a') ADVANCE(1703);
      if (lookahead == 'e') ADVANCE(1706);
      END_STATE();
    case 976:
      if (lookahead == 'a') ADVANCE(1761);
      if (lookahead == 'i') ADVANCE(1027);
      if (lookahead == 'o') ADVANCE(1711);
      if (lookahead == 'r') ADVANCE(1349);
      END_STATE();
    case 977:
      if (lookahead == 'a') ADVANCE(1761);
      if (lookahead == 'r') ADVANCE(1515);
      END_STATE();
    case 978:
      if (lookahead == 'a') ADVANCE(1442);
      END_STATE();
    case 979:
      if (lookahead == 'a') ADVANCE(1446);
      END_STATE();
    case 980:
      if (lookahead == 'a') ADVANCE(1881);
      END_STATE();
    case 981:
      if (lookahead == 'a') ADVANCE(1484);
      END_STATE();
    case 982:
      if (lookahead == 'a') ADVANCE(1440);
      END_STATE();
    case 983:
      if (lookahead == 'a') ADVANCE(1447);
      END_STATE();
    case 984:
      if (lookahead == 'a') ADVANCE(1045);
      END_STATE();
    case 985:
      if (lookahead == 'a') ADVANCE(1779);
      END_STATE();
    case 986:
      if (lookahead == 'a') ADVANCE(1449);
      END_STATE();
    case 987:
      if (lookahead == 'a') ADVANCE(1650);
      END_STATE();
    case 988:
      if (lookahead == 'a') ADVANCE(1671);
      END_STATE();
    case 989:
      if (lookahead == 'a') ADVANCE(1414);
      END_STATE();
    case 990:
      if (lookahead == 'a') ADVANCE(1078);
      END_STATE();
    case 991:
      if (lookahead == 'a') ADVANCE(1825);
      if (lookahead == 'l') ADVANCE(941);
      END_STATE();
    case 992:
      if (lookahead == 'a') ADVANCE(1781);
      END_STATE();
    case 993:
      if (lookahead == 'a') ADVANCE(1502);
      END_STATE();
    case 994:
      if (lookahead == 'a') ADVANCE(1080);
      END_STATE();
    case 995:
      if (lookahead == 'a') ADVANCE(1081);
      END_STATE();
    case 996:
      if (lookahead == 'a') ADVANCE(1615);
      END_STATE();
    case 997:
      if (lookahead == 'a') ADVANCE(1792);
      END_STATE();
    case 998:
      if (lookahead == 'a') ADVANCE(1478);
      END_STATE();
    case 999:
      if (lookahead == 'a') ADVANCE(1675);
      END_STATE();
    case 1000:
      if (lookahead == 'a') ADVANCE(1618);
      END_STATE();
    case 1001:
      if (lookahead == 'a') ADVANCE(1794);
      END_STATE();
    case 1002:
      if (lookahead == 'a') ADVANCE(1796);
      END_STATE();
    case 1003:
      if (lookahead == 'a') ADVANCE(1797);
      END_STATE();
    case 1004:
      if (lookahead == 'a') ADVANCE(1798);
      END_STATE();
    case 1005:
      if (lookahead == 'a') ADVANCE(1799);
      END_STATE();
    case 1006:
      if (lookahead == 'a') ADVANCE(1801);
      END_STATE();
    case 1007:
      if (lookahead == 'a') ADVANCE(1735);
      END_STATE();
    case 1008:
      if (lookahead == 'a') ADVANCE(1507);
      END_STATE();
    case 1009:
      if (lookahead == 'a') ADVANCE(1678);
      END_STATE();
    case 1010:
      if (lookahead == 'a') ADVANCE(1686);
      END_STATE();
    case 1011:
      if (lookahead == 'a') ADVANCE(1903);
      END_STATE();
    case 1012:
      if (lookahead == 'b') ADVANCE(1363);
      if (lookahead == 'r') ADVANCE(1303);
      if (lookahead == 'v') ADVANCE(1164);
      END_STATE();
    case 1013:
      if (lookahead == 'b') ADVANCE(1401);
      END_STATE();
    case 1014:
      if (lookahead == 'b') ADVANCE(1397);
      if (lookahead == 'u') ADVANCE(1651);
      END_STATE();
    case 1015:
      if (lookahead == 'b') ADVANCE(971);
      END_STATE();
    case 1016:
      if (lookahead == 'b') ADVANCE(1408);
      if (lookahead == 'd') ADVANCE(1211);
      if (lookahead == 'f') ADVANCE(1676);
      if (lookahead == 'l') ADVANCE(1540);
      if (lookahead == 'm') ADVANCE(1007);
      if (lookahead == 'r') ADVANCE(1577);
      if (lookahead == 't') ADVANCE(1215);
      END_STATE();
    case 1017:
      if (lookahead == 'b') ADVANCE(1009);
      END_STATE();
    case 1018:
      if (lookahead == 'c') ADVANCE(953);
      if (lookahead == 'h') ADVANCE(990);
      if (lookahead == 'i') ADVANCE(1905);
      if (lookahead == 'p') ADVANCE(1096);
      if (lookahead == 'u') ADVANCE(1580);
      END_STATE();
    case 1019:
      if (lookahead == 'c') ADVANCE(953);
      if (lookahead == 'h') ADVANCE(994);
      if (lookahead == 'i') ADVANCE(1905);
      if (lookahead == 'p') ADVANCE(1097);
      if (lookahead == 'u') ADVANCE(1580);
      END_STATE();
    case 1020:
      if (lookahead == 'c') ADVANCE(1364);
      END_STATE();
    case 1021:
      if (lookahead == 'c') ADVANCE(1279);
      END_STATE();
    case 1022:
      if (lookahead == 'c') ADVANCE(1279);
      if (lookahead == 'r') ADVANCE(1514);
      END_STATE();
    case 1023:
      if (lookahead == 'c') ADVANCE(1824);
      END_STATE();
    case 1024:
      if (lookahead == 'c') ADVANCE(1824);
      if (lookahead == 'e') ADVANCE(1055);
      END_STATE();
    case 1025:
      if (lookahead == 'c') ADVANCE(1365);
      END_STATE();
    case 1026:
      if (lookahead == 'c') ADVANCE(1366);
      END_STATE();
    case 1027:
      if (lookahead == 'c') ADVANCE(1742);
      END_STATE();
    case 1028:
      if (lookahead == 'c') ADVANCE(1370);
      END_STATE();
    case 1029:
      if (lookahead == 'c') ADVANCE(1367);
      END_STATE();
    case 1030:
      if (lookahead == 'c') ADVANCE(1368);
      END_STATE();
    case 1031:
      if (lookahead == 'c') ADVANCE(1519);
      END_STATE();
    case 1032:
      if (lookahead == 'c') ADVANCE(1745);
      END_STATE();
    case 1033:
      if (lookahead == 'c') ADVANCE(1808);
      END_STATE();
    case 1034:
      if (lookahead == 'c') ADVANCE(1282);
      END_STATE();
    case 1035:
      if (lookahead == 'c') ADVANCE(1517);
      if (lookahead == 'd') ADVANCE(1183);
      if (lookahead == 'e') ADVANCE(1843);
      if (lookahead == 'g') ADVANCE(1247);
      if (lookahead == 'h') ADVANCE(1309);
      if (lookahead == 'i') ADVANCE(1494);
      if (lookahead == 'l') ADVANCE(1558);
      if (lookahead == 'm') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 1036:
      if (lookahead == 'c') ADVANCE(1353);
      END_STATE();
    case 1037:
      if (lookahead == 'c') ADVANCE(989);
      END_STATE();
    case 1038:
      if (lookahead == 'c') ADVANCE(970);
      END_STATE();
    case 1039:
      if (lookahead == 'c') ADVANCE(1633);
      if (lookahead == 'h') ADVANCE(995);
      if (lookahead == 'i') ADVANCE(1905);
      if (lookahead == 'u') ADVANCE(1580);
      END_STATE();
    case 1040:
      if (lookahead == 'c') ADVANCE(1168);
      END_STATE();
    case 1041:
      if (lookahead == 'c') ADVANCE(1803);
      END_STATE();
    case 1042:
      if (lookahead == 'c') ADVANCE(1759);
      END_STATE();
    case 1043:
      if (lookahead == 'c') ADVANCE(1175);
      END_STATE();
    case 1044:
      if (lookahead == 'c') ADVANCE(1128);
      END_STATE();
    case 1045:
      if (lookahead == 'c') ADVANCE(1156);
      END_STATE();
    case 1046:
      if (lookahead == 'c') ADVANCE(1880);
      END_STATE();
    case 1047:
      if (lookahead == 'c') ADVANCE(1531);
      END_STATE();
    case 1048:
      if (lookahead == 'c') ADVANCE(952);
      if (lookahead == 'i') ADVANCE(1905);
      END_STATE();
    case 1049:
      if (lookahead == 'c') ADVANCE(952);
      if (lookahead == 'i') ADVANCE(1905);
      if (lookahead == 'p') ADVANCE(1661);
      END_STATE();
    case 1050:
      if (lookahead == 'c') ADVANCE(952);
      if (lookahead == 'p') ADVANCE(1661);
      END_STATE();
    case 1051:
      if (lookahead == 'c') ADVANCE(1312);
      END_STATE();
    case 1052:
      if (lookahead == 'c') ADVANCE(1403);
      END_STATE();
    case 1053:
      if (lookahead == 'c') ADVANCE(1834);
      END_STATE();
    case 1054:
      if (lookahead == 'd') ADVANCE(2085);
      if (lookahead == 'n') ADVANCE(1066);
      END_STATE();
    case 1055:
      if (lookahead == 'd') ADVANCE(2049);
      END_STATE();
    case 1056:
      if (lookahead == 'd') ADVANCE(884);
      END_STATE();
    case 1057:
      if (lookahead == 'd') ADVANCE(2115);
      END_STATE();
    case 1058:
      if (lookahead == 'd') ADVANCE(2116);
      END_STATE();
    case 1059:
      if (lookahead == 'd') ADVANCE(2046);
      END_STATE();
    case 1060:
      if (lookahead == 'd') ADVANCE(1971);
      END_STATE();
    case 1061:
      if (lookahead == 'd') ADVANCE(2045);
      END_STATE();
    case 1062:
      if (lookahead == 'd') ADVANCE(1441);
      END_STATE();
    case 1063:
      if (lookahead == 'd') ADVANCE(896);
      END_STATE();
    case 1064:
      if (lookahead == 'd') ADVANCE(1294);
      END_STATE();
    case 1065:
      if (lookahead == 'd') ADVANCE(1294);
      if (lookahead == 'f') ADVANCE(1244);
      END_STATE();
    case 1066:
      if (lookahead == 'd') ADVANCE(1161);
      if (lookahead == 's') ADVANCE(1765);
      END_STATE();
    case 1067:
      if (lookahead == 'd') ADVANCE(923);
      END_STATE();
    case 1068:
      if (lookahead == 'd') ADVANCE(1302);
      END_STATE();
    case 1069:
      if (lookahead == 'd') ADVANCE(1766);
      END_STATE();
    case 1070:
      if (lookahead == 'd') ADVANCE(1316);
      if (lookahead == 'n') ADVANCE(1542);
      if (lookahead == 's') ADVANCE(1594);
      END_STATE();
    case 1071:
      if (lookahead == 'd') ADVANCE(1767);
      END_STATE();
    case 1072:
      if (lookahead == 'd') ADVANCE(1106);
      if (lookahead == 'n') ADVANCE(1710);
      END_STATE();
    case 1073:
      if (lookahead == 'd') ADVANCE(1170);
      END_STATE();
    case 1074:
      if (lookahead == 'd') ADVANCE(1135);
      END_STATE();
    case 1075:
      if (lookahead == 'd') ADVANCE(1716);
      END_STATE();
    case 1076:
      if (lookahead == 'd') ADVANCE(1169);
      END_STATE();
    case 1077:
      if (lookahead == 'd') ADVANCE(1443);
      END_STATE();
    case 1078:
      if (lookahead == 'd') ADVANCE(1180);
      END_STATE();
    case 1079:
      if (lookahead == 'd') ADVANCE(1193);
      END_STATE();
    case 1080:
      if (lookahead == 'd') ADVANCE(1195);
      END_STATE();
    case 1081:
      if (lookahead == 'd') ADVANCE(1198);
      END_STATE();
    case 1082:
      if (lookahead == 'd') ADVANCE(1200);
      END_STATE();
    case 1083:
      if (lookahead == 'd') ADVANCE(891);
      END_STATE();
    case 1084:
      if (lookahead == 'd') ADVANCE(903);
      END_STATE();
    case 1085:
      if (lookahead == 'd') ADVANCE(1574);
      END_STATE();
    case 1086:
      if (lookahead == 'd') ADVANCE(888);
      END_STATE();
    case 1087:
      if (lookahead == 'e') ADVANCE(1582);
      END_STATE();
    case 1088:
      if (lookahead == 'e') ADVANCE(1269);
      if (lookahead == 'i') ADVANCE(1481);
      if (lookahead == 'o') ADVANCE(948);
      END_STATE();
    case 1089:
      if (lookahead == 'e') ADVANCE(1269);
      if (lookahead == 'i') ADVANCE(1480);
      if (lookahead == 'o') ADVANCE(948);
      END_STATE();
    case 1090:
      if (lookahead == 'e') ADVANCE(1269);
      if (lookahead == 'o') ADVANCE(948);
      END_STATE();
    case 1091:
      if (lookahead == 'e') ADVANCE(1269);
      if (lookahead == 'o') ADVANCE(947);
      END_STATE();
    case 1092:
      if (lookahead == 'e') ADVANCE(1706);
      END_STATE();
    case 1093:
      if (lookahead == 'e') ADVANCE(1706);
      if (lookahead == 'o') ADVANCE(1840);
      END_STATE();
    case 1094:
      if (lookahead == 'e') ADVANCE(1435);
      END_STATE();
    case 1095:
      if (lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 1096:
      if (lookahead == 'e') ADVANCE(1024);
      if (lookahead == 'r') ADVANCE(1319);
      END_STATE();
    case 1097:
      if (lookahead == 'e') ADVANCE(1024);
      if (lookahead == 'r') ADVANCE(1359);
      END_STATE();
    case 1098:
      if (lookahead == 'e') ADVANCE(2083);
      END_STATE();
    case 1099:
      if (lookahead == 'e') ADVANCE(1964);
      END_STATE();
    case 1100:
      if (lookahead == 'e') ADVANCE(2041);
      END_STATE();
    case 1101:
      if (lookahead == 'e') ADVANCE(2151);
      END_STATE();
    case 1102:
      if (lookahead == 'e') ADVANCE(2086);
      END_STATE();
    case 1103:
      if (lookahead == 'e') ADVANCE(2152);
      END_STATE();
    case 1104:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 1105:
      if (lookahead == 'e') ADVANCE(2097);
      END_STATE();
    case 1106:
      if (lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 1107:
      if (lookahead == 'e') ADVANCE(2060);
      END_STATE();
    case 1108:
      if (lookahead == 'e') ADVANCE(1969);
      END_STATE();
    case 1109:
      if (lookahead == 'e') ADVANCE(1975);
      END_STATE();
    case 1110:
      if (lookahead == 'e') ADVANCE(2104);
      END_STATE();
    case 1111:
      if (lookahead == 'e') ADVANCE(2099);
      END_STATE();
    case 1112:
      if (lookahead == 'e') ADVANCE(2117);
      END_STATE();
    case 1113:
      if (lookahead == 'e') ADVANCE(1956);
      END_STATE();
    case 1114:
      if (lookahead == 'e') ADVANCE(2127);
      END_STATE();
    case 1115:
      if (lookahead == 'e') ADVANCE(2042);
      END_STATE();
    case 1116:
      if (lookahead == 'e') ADVANCE(2018);
      END_STATE();
    case 1117:
      if (lookahead == 'e') ADVANCE(1944);
      END_STATE();
    case 1118:
      if (lookahead == 'e') ADVANCE(1960);
      END_STATE();
    case 1119:
      if (lookahead == 'e') ADVANCE(1962);
      END_STATE();
    case 1120:
      if (lookahead == 'e') ADVANCE(1961);
      END_STATE();
    case 1121:
      if (lookahead == 'e') ADVANCE(1955);
      END_STATE();
    case 1122:
      if (lookahead == 'e') ADVANCE(2095);
      END_STATE();
    case 1123:
      if (lookahead == 'e') ADVANCE(2122);
      END_STATE();
    case 1124:
      if (lookahead == 'e') ADVANCE(2008);
      END_STATE();
    case 1125:
      if (lookahead == 'e') ADVANCE(1958);
      END_STATE();
    case 1126:
      if (lookahead == 'e') ADVANCE(1959);
      END_STATE();
    case 1127:
      if (lookahead == 'e') ADVANCE(2112);
      END_STATE();
    case 1128:
      if (lookahead == 'e') ADVANCE(2061);
      END_STATE();
    case 1129:
      if (lookahead == 'e') ADVANCE(2120);
      END_STATE();
    case 1130:
      if (lookahead == 'e') ADVANCE(1945);
      END_STATE();
    case 1131:
      if (lookahead == 'e') ADVANCE(1957);
      END_STATE();
    case 1132:
      if (lookahead == 'e') ADVANCE(1953);
      END_STATE();
    case 1133:
      if (lookahead == 'e') ADVANCE(2089);
      END_STATE();
    case 1134:
      if (lookahead == 'e') ADVANCE(1947);
      END_STATE();
    case 1135:
      if (lookahead == 'e') ADVANCE(2032);
      END_STATE();
    case 1136:
      if (lookahead == 'e') ADVANCE(1963);
      END_STATE();
    case 1137:
      if (lookahead == 'e') ADVANCE(1946);
      END_STATE();
    case 1138:
      if (lookahead == 'e') ADVANCE(1952);
      END_STATE();
    case 1139:
      if (lookahead == 'e') ADVANCE(2105);
      END_STATE();
    case 1140:
      if (lookahead == 'e') ADVANCE(2121);
      END_STATE();
    case 1141:
      if (lookahead == 'e') ADVANCE(2028);
      END_STATE();
    case 1142:
      if (lookahead == 'e') ADVANCE(2036);
      END_STATE();
    case 1143:
      if (lookahead == 'e') ADVANCE(1263);
      END_STATE();
    case 1144:
      if (lookahead == 'e') ADVANCE(2023);
      END_STATE();
    case 1145:
      if (lookahead == 'e') ADVANCE(2024);
      END_STATE();
    case 1146:
      if (lookahead == 'e') ADVANCE(2031);
      END_STATE();
    case 1147:
      if (lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 1148:
      if (lookahead == 'e') ADVANCE(2007);
      END_STATE();
    case 1149:
      if (lookahead == 'e') ADVANCE(1909);
      END_STATE();
    case 1150:
      if (lookahead == 'e') ADVANCE(2009);
      END_STATE();
    case 1151:
      if (lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 1152:
      if (lookahead == 'e') ADVANCE(2103);
      END_STATE();
    case 1153:
      if (lookahead == 'e') ADVANCE(1470);
      if (lookahead == 'l') ADVANCE(1313);
      if (lookahead == 'o') ADVANCE(1419);
      if (lookahead == 'u') ADVANCE(1384);
      END_STATE();
    case 1154:
      if (lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 1155:
      if (lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 1156:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 1157:
      if (lookahead == 'e') ADVANCE(1659);
      END_STATE();
    case 1158:
      if (lookahead == 'e') ADVANCE(1243);
      END_STATE();
    case 1159:
      if (lookahead == 'e') ADVANCE(1243);
      if (lookahead == 'm') ADVANCE(958);
      END_STATE();
    case 1160:
      if (lookahead == 'e') ADVANCE(1690);
      END_STATE();
    case 1161:
      if (lookahead == 'e') ADVANCE(1854);
      END_STATE();
    case 1162:
      if (lookahead == 'e') ADVANCE(1849);
      END_STATE();
    case 1163:
      if (lookahead == 'e') ADVANCE(1496);
      END_STATE();
    case 1164:
      if (lookahead == 'e') ADVANCE(1634);
      END_STATE();
    case 1165:
      if (lookahead == 'e') ADVANCE(1075);
      END_STATE();
    case 1166:
      if (lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 1167:
      if (lookahead == 'e') ADVANCE(1056);
      END_STATE();
    case 1168:
      if (lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 1169:
      if (lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 1170:
      if (lookahead == 'e') ADVANCE(1477);
      END_STATE();
    case 1171:
      if (lookahead == 'e') ADVANCE(1053);
      END_STATE();
    case 1172:
      if (lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 1173:
      if (lookahead == 'e') ADVANCE(1715);
      END_STATE();
    case 1174:
      if (lookahead == 'e') ADVANCE(1077);
      if (lookahead == 'i') ADVANCE(1535);
      END_STATE();
    case 1175:
      if (lookahead == 'e') ADVANCE(1034);
      END_STATE();
    case 1176:
      if (lookahead == 'e') ADVANCE(1063);
      END_STATE();
    case 1177:
      if (lookahead == 'e') ADVANCE(918);
      END_STATE();
    case 1178:
      if (lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 1179:
      if (lookahead == 'e') ADVANCE(1297);
      END_STATE();
    case 1180:
      if (lookahead == 'e') ADVANCE(1625);
      END_STATE();
    case 1181:
      if (lookahead == 'e') ADVANCE(1434);
      END_STATE();
    case 1182:
      if (lookahead == 'e') ADVANCE(1692);
      END_STATE();
    case 1183:
      if (lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 1184:
      if (lookahead == 'e') ADVANCE(1693);
      END_STATE();
    case 1185:
      if (lookahead == 'e') ADVANCE(1498);
      END_STATE();
    case 1186:
      if (lookahead == 'e') ADVANCE(1695);
      END_STATE();
    case 1187:
      if (lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 1188:
      if (lookahead == 'e') ADVANCE(1772);
      END_STATE();
    case 1189:
      if (lookahead == 'e') ADVANCE(1696);
      END_STATE();
    case 1190:
      if (lookahead == 'e') ADVANCE(1714);
      END_STATE();
    case 1191:
      if (lookahead == 'e') ADVANCE(1639);
      END_STATE();
    case 1192:
      if (lookahead == 'e') ADVANCE(1700);
      END_STATE();
    case 1193:
      if (lookahead == 'e') ADVANCE(1632);
      END_STATE();
    case 1194:
      if (lookahead == 'e') ADVANCE(1750);
      END_STATE();
    case 1195:
      if (lookahead == 'e') ADVANCE(1683);
      END_STATE();
    case 1196:
      if (lookahead == 'e') ADVANCE(1701);
      END_STATE();
    case 1197:
      if (lookahead == 'e') ADVANCE(1754);
      END_STATE();
    case 1198:
      if (lookahead == 'e') ADVANCE(1631);
      END_STATE();
    case 1199:
      if (lookahead == 'e') ADVANCE(1638);
      END_STATE();
    case 1200:
      if (lookahead == 'e') ADVANCE(1640);
      END_STATE();
    case 1201:
      if (lookahead == 'e') ADVANCE(1709);
      END_STATE();
    case 1202:
      if (lookahead == 'e') ADVANCE(1499);
      END_STATE();
    case 1203:
      if (lookahead == 'e') ADVANCE(1032);
      END_STATE();
    case 1204:
      if (lookahead == 'e') ADVANCE(1875);
      END_STATE();
    case 1205:
      if (lookahead == 'e') ADVANCE(915);
      END_STATE();
    case 1206:
      if (lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 1207:
      if (lookahead == 'e') ADVANCE(1033);
      END_STATE();
    case 1208:
      if (lookahead == 'e') ADVANCE(1859);
      END_STATE();
    case 1209:
      if (lookahead == 'e') ADVANCE(1647);
      END_STATE();
    case 1210:
      if (lookahead == 'e') ADVANCE(1041);
      END_STATE();
    case 1211:
      if (lookahead == 'e') ADVANCE(1399);
      END_STATE();
    case 1212:
      if (lookahead == 'e') ADVANCE(1042);
      END_STATE();
    case 1213:
      if (lookahead == 'e') ADVANCE(1486);
      END_STATE();
    case 1214:
      if (lookahead == 'e') ADVANCE(1489);
      END_STATE();
    case 1215:
      if (lookahead == 'e') ADVANCE(1863);
      if (lookahead == 'i') ADVANCE(1448);
      if (lookahead == 'y') ADVANCE(1606);
      END_STATE();
    case 1216:
      if (lookahead == 'e') ADVANCE(1490);
      END_STATE();
    case 1217:
      if (lookahead == 'e') ADVANCE(1862);
      if (lookahead == 'r') ADVANCE(998);
      if (lookahead == 'y') ADVANCE(1584);
      END_STATE();
    case 1218:
      if (lookahead == 'e') ADVANCE(1495);
      END_STATE();
    case 1219:
      if (lookahead == 'e') ADVANCE(925);
      END_STATE();
    case 1220:
      if (lookahead == 'e') ADVANCE(1864);
      END_STATE();
    case 1221:
      if (lookahead == 'e') ADVANCE(1865);
      END_STATE();
    case 1222:
      if (lookahead == 'e') ADVANCE(2106);
      END_STATE();
    case 1223:
      if (lookahead == 'e') ADVANCE(1910);
      END_STATE();
    case 1224:
      if (lookahead == 'e') ADVANCE(1672);
      END_STATE();
    case 1225:
      if (lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 1226:
      if (lookahead == 'e') ADVANCE(1866);
      if (lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 1227:
      if (lookahead == 'e') ADVANCE(1911);
      END_STATE();
    case 1228:
      if (lookahead == 'e') ADVANCE(1869);
      if (lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 1229:
      if (lookahead == 'e') ADVANCE(1912);
      END_STATE();
    case 1230:
      if (lookahead == 'e') ADVANCE(1870);
      if (lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 1231:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 1232:
      if (lookahead == 'e') ADVANCE(1871);
      if (lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 1233:
      if (lookahead == 'e') ADVANCE(1867);
      END_STATE();
    case 1234:
      if (lookahead == 'e') ADVANCE(1868);
      END_STATE();
    case 1235:
      if (lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 1236:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 1237:
      if (lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 1238:
      if (lookahead == 'e') ADVANCE(906);
      END_STATE();
    case 1239:
      if (lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 1240:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 1241:
      if (lookahead == 'f') ADVANCE(1244);
      END_STATE();
    case 1242:
      if (lookahead == 'f') ADVANCE(873);
      END_STATE();
    case 1243:
      if (lookahead == 'f') ADVANCE(1031);
      END_STATE();
    case 1244:
      if (lookahead == 'f') ADVANCE(1203);
      END_STATE();
    case 1245:
      if (lookahead == 'f') ADVANCE(1830);
      END_STATE();
    case 1246:
      if (lookahead == 'f') ADVANCE(1251);
      END_STATE();
    case 1247:
      if (lookahead == 'f') ADVANCE(1856);
      END_STATE();
    case 1248:
      if (lookahead == 'f') ADVANCE(1245);
      END_STATE();
    case 1249:
      if (lookahead == 'f') ADVANCE(1585);
      END_STATE();
    case 1250:
      if (lookahead == 'f') ADVANCE(984);
      END_STATE();
    case 1251:
      if (lookahead == 'f') ADVANCE(1721);
      END_STATE();
    case 1252:
      if (lookahead == 'f') ADVANCE(1723);
      END_STATE();
    case 1253:
      if (lookahead == 'f') ADVANCE(1560);
      END_STATE();
    case 1254:
      if (lookahead == 'f') ADVANCE(1252);
      END_STATE();
    case 1255:
      if (lookahead == 'f') ADVANCE(1324);
      END_STATE();
    case 1256:
      if (lookahead == 'f') ADVANCE(1210);
      END_STATE();
    case 1257:
      if (lookahead == 'f') ADVANCE(1562);
      END_STATE();
    case 1258:
      if (lookahead == 'f') ADVANCE(1326);
      END_STATE();
    case 1259:
      if (lookahead == 'f') ADVANCE(1212);
      END_STATE();
    case 1260:
      if (lookahead == 'f') ADVANCE(1563);
      END_STATE();
    case 1261:
      if (lookahead == 'f') ADVANCE(1335);
      END_STATE();
    case 1262:
      if (lookahead == 'f') ADVANCE(1343);
      END_STATE();
    case 1263:
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 's') ADVANCE(1037);
      END_STATE();
    case 1264:
      if (lookahead == 'f') ADVANCE(1256);
      END_STATE();
    case 1265:
      if (lookahead == 'f') ADVANCE(1673);
      if (lookahead == 'r') ADVANCE(1520);
      END_STATE();
    case 1266:
      if (lookahead == 'f') ADVANCE(1259);
      END_STATE();
    case 1267:
      if (lookahead == 'g') ADVANCE(2079);
      END_STATE();
    case 1268:
      if (lookahead == 'g') ADVANCE(2027);
      END_STATE();
    case 1269:
      if (lookahead == 'g') ADVANCE(950);
      END_STATE();
    case 1270:
      if (lookahead == 'g') ADVANCE(1691);
      END_STATE();
    case 1271:
      if (lookahead == 'g') ADVANCE(1281);
      END_STATE();
    case 1272:
      if (lookahead == 'g') ADVANCE(1697);
      END_STATE();
    case 1273:
      if (lookahead == 'g') ADVANCE(1645);
      END_STATE();
    case 1274:
      if (lookahead == 'h') ADVANCE(1968);
      END_STATE();
    case 1275:
      if (lookahead == 'h') ADVANCE(1954);
      END_STATE();
    case 1276:
      if (lookahead == 'h') ADVANCE(2125);
      END_STATE();
    case 1277:
      if (lookahead == 'h') ADVANCE(2114);
      END_STATE();
    case 1278:
      if (lookahead == 'h') ADVANCE(1979);
      END_STATE();
    case 1279:
      if (lookahead == 'h') ADVANCE(1314);
      END_STATE();
    case 1280:
      if (lookahead == 'h') ADVANCE(968);
      END_STATE();
    case 1281:
      if (lookahead == 'h') ADVANCE(1747);
      END_STATE();
    case 1282:
      if (lookahead == 'h') ADVANCE(1206);
      END_STATE();
    case 1283:
      if (lookahead == 'h') ADVANCE(982);
      END_STATE();
    case 1284:
      if (lookahead == 'h') ADVANCE(1311);
      END_STATE();
    case 1285:
      if (lookahead == 'h') ADVANCE(1525);
      END_STATE();
    case 1286:
      if (lookahead == 'h') ADVANCE(1719);
      END_STATE();
    case 1287:
      if (lookahead == 'h') ADVANCE(1010);
      END_STATE();
    case 1288:
      if (lookahead == 'i') ADVANCE(1509);
      END_STATE();
    case 1289:
      if (lookahead == 'i') ADVANCE(1905);
      END_STATE();
    case 1290:
      if (lookahead == 'i') ADVANCE(889);
      END_STATE();
    case 1291:
      if (lookahead == 'i') ADVANCE(1436);
      END_STATE();
    case 1292:
      if (lookahead == 'i') ADVANCE(1904);
      END_STATE();
    case 1293:
      if (lookahead == 'i') ADVANCE(1472);
      END_STATE();
    case 1294:
      if (lookahead == 'i') ADVANCE(1740);
      END_STATE();
    case 1295:
      if (lookahead == 'i') ADVANCE(1095);
      END_STATE();
    case 1296:
      if (lookahead == 'i') ADVANCE(1474);
      END_STATE();
    case 1297:
      if (lookahead == 'i') ADVANCE(1271);
      END_STATE();
    case 1298:
      if (lookahead == 'i') ADVANCE(1858);
      if (lookahead == 'o') ADVANCE(1473);
      END_STATE();
    case 1299:
      if (lookahead == 'i') ADVANCE(1052);
      END_STATE();
    case 1300:
      if (lookahead == 'i') ADVANCE(1789);
      END_STATE();
    case 1301:
      if (lookahead == 'i') ADVANCE(1069);
      END_STATE();
    case 1302:
      if (lookahead == 'i') ADVANCE(1726);
      END_STATE();
    case 1303:
      if (lookahead == 'i') ADVANCE(1202);
      END_STATE();
    case 1304:
      if (lookahead == 'i') ADVANCE(1497);
      END_STATE();
    case 1305:
      if (lookahead == 'i') ADVANCE(1763);
      END_STATE();
    case 1306:
      if (lookahead == 'i') ADVANCE(1060);
      END_STATE();
    case 1307:
      if (lookahead == 'i') ADVANCE(1475);
      END_STATE();
    case 1308:
      if (lookahead == 'i') ADVANCE(1738);
      END_STATE();
    case 1309:
      if (lookahead == 'i') ADVANCE(1720);
      END_STATE();
    case 1310:
      if (lookahead == 'i') ADVANCE(1736);
      END_STATE();
    case 1311:
      if (lookahead == 'i') ADVANCE(1181);
      END_STATE();
    case 1312:
      if (lookahead == 'i') ADVANCE(1189);
      END_STATE();
    case 1313:
      if (lookahead == 'i') ADVANCE(1025);
      END_STATE();
    case 1314:
      if (lookahead == 'i') ADVANCE(1841);
      END_STATE();
    case 1315:
      if (lookahead == 'i') ADVANCE(1906);
      END_STATE();
    case 1316:
      if (lookahead == 'i') ADVANCE(1248);
      END_STATE();
    case 1317:
      if (lookahead == 'i') ADVANCE(1528);
      END_STATE();
    case 1318:
      if (lookahead == 'i') ADVANCE(1071);
      END_STATE();
    case 1319:
      if (lookahead == 'i') ADVANCE(1776);
      END_STATE();
    case 1320:
      if (lookahead == 'i') ADVANCE(1907);
      END_STATE();
    case 1321:
      if (lookahead == 'i') ADVANCE(1402);
      END_STATE();
    case 1322:
      if (lookahead == 'i') ADVANCE(1028);
      END_STATE();
    case 1323:
      if (lookahead == 'i') ADVANCE(1534);
      END_STATE();
    case 1324:
      if (lookahead == 'i') ADVANCE(1404);
      END_STATE();
    case 1325:
      if (lookahead == 'i') ADVANCE(1030);
      END_STATE();
    case 1326:
      if (lookahead == 'i') ADVANCE(1405);
      END_STATE();
    case 1327:
      if (lookahead == 'i') ADVANCE(1538);
      END_STATE();
    case 1328:
      if (lookahead == 'i') ADVANCE(1406);
      END_STATE();
    case 1329:
      if (lookahead == 'i') ADVANCE(1539);
      END_STATE();
    case 1330:
      if (lookahead == 'i') ADVANCE(1407);
      END_STATE();
    case 1331:
      if (lookahead == 'i') ADVANCE(1541);
      END_STATE();
    case 1332:
      if (lookahead == 'i') ADVANCE(1543);
      END_STATE();
    case 1333:
      if (lookahead == 'i') ADVANCE(1409);
      END_STATE();
    case 1334:
      if (lookahead == 'i') ADVANCE(1545);
      END_STATE();
    case 1335:
      if (lookahead == 'i') ADVANCE(1410);
      END_STATE();
    case 1336:
      if (lookahead == 'i') ADVANCE(1547);
      END_STATE();
    case 1337:
      if (lookahead == 'i') ADVANCE(1389);
      END_STATE();
    case 1338:
      if (lookahead == 'i') ADVANCE(1389);
      if (lookahead == 'o') ADVANCE(1473);
      END_STATE();
    case 1339:
      if (lookahead == 'i') ADVANCE(1389);
      if (lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 1340:
      if (lookahead == 'i') ADVANCE(1548);
      END_STATE();
    case 1341:
      if (lookahead == 'i') ADVANCE(1411);
      END_STATE();
    case 1342:
      if (lookahead == 'i') ADVANCE(1550);
      END_STATE();
    case 1343:
      if (lookahead == 'i') ADVANCE(1412);
      END_STATE();
    case 1344:
      if (lookahead == 'i') ADVANCE(1551);
      END_STATE();
    case 1345:
      if (lookahead == 'i') ADVANCE(1413);
      END_STATE();
    case 1346:
      if (lookahead == 'i') ADVANCE(1415);
      END_STATE();
    case 1347:
      if (lookahead == 'i') ADVANCE(1416);
      END_STATE();
    case 1348:
      if (lookahead == 'i') ADVANCE(1417);
      END_STATE();
    case 1349:
      if (lookahead == 'i') ADVANCE(1557);
      END_STATE();
    case 1350:
      if (lookahead == 'i') ADVANCE(1557);
      if (lookahead == 'o') ADVANCE(1273);
      END_STATE();
    case 1351:
      if (lookahead == 'i') ADVANCE(1452);
      END_STATE();
    case 1352:
      if (lookahead == 'i') ADVANCE(1456);
      END_STATE();
    case 1353:
      if (lookahead == 'i') ADVANCE(1731);
      END_STATE();
    case 1354:
      if (lookahead == 'i') ADVANCE(1812);
      END_STATE();
    case 1355:
      if (lookahead == 'i') ADVANCE(1806);
      if (lookahead == 'o') ADVANCE(1674);
      END_STATE();
    case 1356:
      if (lookahead == 'i') ADVANCE(1806);
      if (lookahead == 'o') ADVANCE(1677);
      END_STATE();
    case 1357:
      if (lookahead == 'i') ADVANCE(1815);
      END_STATE();
    case 1358:
      if (lookahead == 'i') ADVANCE(1816);
      END_STATE();
    case 1359:
      if (lookahead == 'i') ADVANCE(1817);
      END_STATE();
    case 1360:
      if (lookahead == 'i') ADVANCE(1457);
      END_STATE();
    case 1361:
      if (lookahead == 'i') ADVANCE(1458);
      END_STATE();
    case 1362:
      if (lookahead == 'i') ADVANCE(1459);
      END_STATE();
    case 1363:
      if (lookahead == 'j') ADVANCE(1207);
      END_STATE();
    case 1364:
      if (lookahead == 'k') ADVANCE(876);
      END_STATE();
    case 1365:
      if (lookahead == 'k') ADVANCE(2048);
      END_STATE();
    case 1366:
      if (lookahead == 'k') ADVANCE(2098);
      END_STATE();
    case 1367:
      if (lookahead == 'k') ADVANCE(2050);
      END_STATE();
    case 1368:
      if (lookahead == 'k') ADVANCE(2047);
      END_STATE();
    case 1369:
      if (lookahead == 'k') ADVANCE(1167);
      END_STATE();
    case 1370:
      if (lookahead == 'k') ADVANCE(1729);
      END_STATE();
    case 1371:
      if (lookahead == 'k') ADVANCE(1261);
      END_STATE();
    case 1372:
      if (lookahead == 'k') ADVANCE(1262);
      END_STATE();
    case 1373:
      if (lookahead == 'l') ADVANCE(1378);
      if (lookahead == 'n') ADVANCE(1291);
      if (lookahead == 'r') ADVANCE(1022);
      END_STATE();
    case 1374:
      if (lookahead == 'l') ADVANCE(1378);
      if (lookahead == 'n') ADVANCE(1352);
      END_STATE();
    case 1375:
      if (lookahead == 'l') ADVANCE(1378);
      if (lookahead == 'n') ADVANCE(1352);
      if (lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 1376:
      if (lookahead == 'l') ADVANCE(1378);
      if (lookahead == 'n') ADVANCE(1361);
      END_STATE();
    case 1377:
      if (lookahead == 'l') ADVANCE(1852);
      END_STATE();
    case 1378:
      if (lookahead == 'l') ADVANCE(1852);
      if (lookahead == 'p') ADVANCE(1283);
      if (lookahead == 'w') ADVANCE(949);
      END_STATE();
    case 1379:
      if (lookahead == 'l') ADVANCE(912);
      END_STATE();
    case 1380:
      if (lookahead == 'l') ADVANCE(2107);
      END_STATE();
    case 1381:
      if (lookahead == 'l') ADVANCE(2082);
      END_STATE();
    case 1382:
      if (lookahead == 'l') ADVANCE(2090);
      END_STATE();
    case 1383:
      if (lookahead == 'l') ADVANCE(1379);
      END_STATE();
    case 1384:
      if (lookahead == 'l') ADVANCE(1379);
      if (lookahead == 'r') ADVANCE(1725);
      END_STATE();
    case 1385:
      if (lookahead == 'l') ADVANCE(1379);
      if (lookahead == 'r') ADVANCE(1727);
      END_STATE();
    case 1386:
      if (lookahead == 'l') ADVANCE(1379);
      if (lookahead == 'r') ADVANCE(1728);
      END_STATE();
    case 1387:
      if (lookahead == 'l') ADVANCE(1015);
      END_STATE();
    case 1388:
      if (lookahead == 'l') ADVANCE(1717);
      END_STATE();
    case 1389:
      if (lookahead == 'l') ADVANCE(1098);
      END_STATE();
    case 1390:
      if (lookahead == 'l') ADVANCE(1098);
      if (lookahead == 'x') ADVANCE(1165);
      END_STATE();
    case 1391:
      if (lookahead == 'l') ADVANCE(1387);
      END_STATE();
    case 1392:
      if (lookahead == 'l') ADVANCE(954);
      END_STATE();
    case 1393:
      if (lookahead == 'l') ADVANCE(1537);
      END_STATE();
    case 1394:
      if (lookahead == 'l') ADVANCE(1546);
      END_STATE();
    case 1395:
      if (lookahead == 'l') ADVANCE(1377);
      if (lookahead == 'n') ADVANCE(1360);
      if (lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 1396:
      if (lookahead == 'l') ADVANCE(1377);
      if (lookahead == 'n') ADVANCE(1362);
      END_STATE();
    case 1397:
      if (lookahead == 'l') ADVANCE(1561);
      END_STATE();
    case 1398:
      if (lookahead == 'l') ADVANCE(951);
      END_STATE();
    case 1399:
      if (lookahead == 'l') ADVANCE(956);
      END_STATE();
    case 1400:
      if (lookahead == 'l') ADVANCE(1105);
      END_STATE();
    case 1401:
      if (lookahead == 'l') ADVANCE(1112);
      END_STATE();
    case 1402:
      if (lookahead == 'l') ADVANCE(1116);
      END_STATE();
    case 1403:
      if (lookahead == 'l') ADVANCE(1121);
      END_STATE();
    case 1404:
      if (lookahead == 'l') ADVANCE(1177);
      END_STATE();
    case 1405:
      if (lookahead == 'l') ADVANCE(1122);
      END_STATE();
    case 1406:
      if (lookahead == 'l') ADVANCE(1123);
      END_STATE();
    case 1407:
      if (lookahead == 'l') ADVANCE(1124);
      END_STATE();
    case 1408:
      if (lookahead == 'l') ADVANCE(1213);
      END_STATE();
    case 1409:
      if (lookahead == 'l') ADVANCE(1155);
      END_STATE();
    case 1410:
      if (lookahead == 'l') ADVANCE(1127);
      END_STATE();
    case 1411:
      if (lookahead == 'l') ADVANCE(1140);
      END_STATE();
    case 1412:
      if (lookahead == 'l') ADVANCE(1144);
      END_STATE();
    case 1413:
      if (lookahead == 'l') ADVANCE(1145);
      END_STATE();
    case 1414:
      if (lookahead == 'l') ADVANCE(1146);
      END_STATE();
    case 1415:
      if (lookahead == 'l') ADVANCE(1148);
      END_STATE();
    case 1416:
      if (lookahead == 'l') ADVANCE(1150);
      END_STATE();
    case 1417:
      if (lookahead == 'l') ADVANCE(1151);
      END_STATE();
    case 1418:
      if (lookahead == 'l') ADVANCE(1522);
      END_STATE();
    case 1419:
      if (lookahead == 'l') ADVANCE(1522);
      if (lookahead == 'r') ADVANCE(1504);
      END_STATE();
    case 1420:
      if (lookahead == 'l') ADVANCE(980);
      END_STATE();
    case 1421:
      if (lookahead == 'l') ADVANCE(969);
      END_STATE();
    case 1422:
      if (lookahead == 'l') ADVANCE(1310);
      END_STATE();
    case 1423:
      if (lookahead == 'l') ADVANCE(973);
      END_STATE();
    case 1424:
      if (lookahead == 'l') ADVANCE(1544);
      END_STATE();
    case 1425:
      if (lookahead == 'l') ADVANCE(1552);
      END_STATE();
    case 1426:
      if (lookahead == 'l') ADVANCE(1552);
      if (lookahead == 'r') ADVANCE(1504);
      END_STATE();
    case 1427:
      if (lookahead == 'l') ADVANCE(1555);
      END_STATE();
    case 1428:
      if (lookahead == 'l') ADVANCE(1322);
      END_STATE();
    case 1429:
      if (lookahead == 'l') ADVANCE(1322);
      if (lookahead == 'o') ADVANCE(1657);
      if (lookahead == 'u') ADVANCE(1386);
      END_STATE();
    case 1430:
      if (lookahead == 'l') ADVANCE(1322);
      if (lookahead == 'o') ADVANCE(1418);
      END_STATE();
    case 1431:
      if (lookahead == 'l') ADVANCE(1322);
      if (lookahead == 'o') ADVANCE(1418);
      if (lookahead == 'u') ADVANCE(1383);
      END_STATE();
    case 1432:
      if (lookahead == 'l') ADVANCE(1322);
      if (lookahead == 'u') ADVANCE(1383);
      END_STATE();
    case 1433:
      if (lookahead == 'l') ADVANCE(1325);
      if (lookahead == 'o') ADVANCE(1425);
      if (lookahead == 'u') ADVANCE(1385);
      END_STATE();
    case 1434:
      if (lookahead == 'l') ADVANCE(1084);
      END_STATE();
    case 1435:
      if (lookahead == 'm') ADVANCE(1529);
      if (lookahead == 'p') ADVANCE(1392);
      END_STATE();
    case 1436:
      if (lookahead == 'm') ADVANCE(960);
      END_STATE();
    case 1437:
      if (lookahead == 'm') ADVANCE(955);
      END_STATE();
    case 1438:
      if (lookahead == 'm') ADVANCE(958);
      END_STATE();
    case 1439:
      if (lookahead == 'm') ADVANCE(1099);
      END_STATE();
    case 1440:
      if (lookahead == 'm') ADVANCE(962);
      END_STATE();
    case 1441:
      if (lookahead == 'm') ADVANCE(1559);
      END_STATE();
    case 1442:
      if (lookahead == 'm') ADVANCE(1104);
      END_STATE();
    case 1443:
      if (lookahead == 'm') ADVANCE(959);
      END_STATE();
    case 1444:
      if (lookahead == 'm') ADVANCE(1201);
      if (lookahead == 'p') ADVANCE(963);
      END_STATE();
    case 1445:
      if (lookahead == 'm') ADVANCE(967);
      END_STATE();
    case 1446:
      if (lookahead == 'm') ADVANCE(1184);
      END_STATE();
    case 1447:
      if (lookahead == 'm') ADVANCE(1190);
      END_STATE();
    case 1448:
      if (lookahead == 'm') ADVANCE(1141);
      END_STATE();
    case 1449:
      if (lookahead == 'm') ADVANCE(1196);
      END_STATE();
    case 1450:
      if (lookahead == 'm') ADVANCE(1453);
      END_STATE();
    case 1451:
      if (lookahead == 'm') ADVANCE(964);
      END_STATE();
    case 1452:
      if (lookahead == 'm') ADVANCE(985);
      END_STATE();
    case 1453:
      if (lookahead == 'm') ADVANCE(1548);
      END_STATE();
    case 1454:
      if (lookahead == 'm') ADVANCE(996);
      END_STATE();
    case 1455:
      if (lookahead == 'm') ADVANCE(1000);
      END_STATE();
    case 1456:
      if (lookahead == 'm') ADVANCE(1002);
      END_STATE();
    case 1457:
      if (lookahead == 'm') ADVANCE(1003);
      END_STATE();
    case 1458:
      if (lookahead == 'm') ADVANCE(1004);
      END_STATE();
    case 1459:
      if (lookahead == 'm') ADVANCE(1006);
      END_STATE();
    case 1460:
      if (lookahead == 'n') ADVANCE(1066);
      END_STATE();
    case 1461:
      if (lookahead == 'n') ADVANCE(1973);
      END_STATE();
    case 1462:
      if (lookahead == 'n') ADVANCE(2058);
      END_STATE();
    case 1463:
      if (lookahead == 'n') ADVANCE(2022);
      END_STATE();
    case 1464:
      if (lookahead == 'n') ADVANCE(2118);
      END_STATE();
    case 1465:
      if (lookahead == 'n') ADVANCE(2026);
      END_STATE();
    case 1466:
      if (lookahead == 'n') ADVANCE(1977);
      END_STATE();
    case 1467:
      if (lookahead == 'n') ADVANCE(2021);
      END_STATE();
    case 1468:
      if (lookahead == 'n') ADVANCE(1016);
      END_STATE();
    case 1469:
      if (lookahead == 'n') ADVANCE(2020);
      END_STATE();
    case 1470:
      if (lookahead == 'n') ADVANCE(1764);
      END_STATE();
    case 1471:
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 1472:
      if (lookahead == 'n') ADVANCE(1085);
      END_STATE();
    case 1473:
      if (lookahead == 'n') ADVANCE(1741);
      if (lookahead == 'r') ADVANCE(1451);
      END_STATE();
    case 1474:
      if (lookahead == 'n') ADVANCE(1267);
      END_STATE();
    case 1475:
      if (lookahead == 'n') ADVANCE(1268);
      END_STATE();
    case 1476:
      if (lookahead == 'n') ADVANCE(922);
      END_STATE();
    case 1477:
      if (lookahead == 'n') ADVANCE(1051);
      END_STATE();
    case 1478:
      if (lookahead == 'n') ADVANCE(1710);
      END_STATE();
    case 1479:
      if (lookahead == 'n') ADVANCE(916);
      END_STATE();
    case 1480:
      if (lookahead == 'n') ADVANCE(1162);
      END_STATE();
    case 1481:
      if (lookahead == 'n') ADVANCE(1162);
      if (lookahead == 's') ADVANCE(1818);
      END_STATE();
    case 1482:
      if (lookahead == 'n') ADVANCE(1057);
      END_STATE();
    case 1483:
      if (lookahead == 'n') ADVANCE(1058);
      END_STATE();
    case 1484:
      if (lookahead == 'n') ADVANCE(1760);
      END_STATE();
    case 1485:
      if (lookahead == 'n') ADVANCE(1059);
      END_STATE();
    case 1486:
      if (lookahead == 'n') ADVANCE(1062);
      END_STATE();
    case 1487:
      if (lookahead == 'n') ADVANCE(1748);
      END_STATE();
    case 1488:
      if (lookahead == 'n') ADVANCE(1749);
      END_STATE();
    case 1489:
      if (lookahead == 'n') ADVANCE(1752);
      END_STATE();
    case 1490:
      if (lookahead == 'n') ADVANCE(1753);
      END_STATE();
    case 1491:
      if (lookahead == 'n') ADVANCE(1705);
      END_STATE();
    case 1492:
      if (lookahead == 'n') ADVANCE(1774);
      END_STATE();
    case 1493:
      if (lookahead == 'n') ADVANCE(1758);
      END_STATE();
    case 1494:
      if (lookahead == 'n') ADVANCE(1784);
      END_STATE();
    case 1495:
      if (lookahead == 'n') ADVANCE(1777);
      END_STATE();
    case 1496:
      if (lookahead == 'n') ADVANCE(1073);
      END_STATE();
    case 1497:
      if (lookahead == 'n') ADVANCE(1272);
      END_STATE();
    case 1498:
      if (lookahead == 'n') ADVANCE(1043);
      END_STATE();
    case 1499:
      if (lookahead == 'n') ADVANCE(1782);
      END_STATE();
    case 1500:
      if (lookahead == 'n') ADVANCE(1708);
      END_STATE();
    case 1501:
      if (lookahead == 'n') ADVANCE(919);
      END_STATE();
    case 1502:
      if (lookahead == 'n') ADVANCE(1044);
      END_STATE();
    case 1503:
      if (lookahead == 'n') ADVANCE(1771);
      END_STATE();
    case 1504:
      if (lookahead == 'n') ADVANCE(1209);
      END_STATE();
    case 1505:
      if (lookahead == 'n') ADVANCE(1351);
      END_STATE();
    case 1506:
      if (lookahead == 'n') ADVANCE(1732);
      END_STATE();
    case 1507:
      if (lookahead == 'n') ADVANCE(1734);
      END_STATE();
    case 1508:
      if (lookahead == 'n') ADVANCE(1361);
      END_STATE();
    case 1509:
      if (lookahead == 'n') ADVANCE(1240);
      END_STATE();
    case 1510:
      if (lookahead == 'o') ADVANCE(2056);
      END_STATE();
    case 1511:
      if (lookahead == 'o') ADVANCE(948);
      END_STATE();
    case 1512:
      if (lookahead == 'o') ADVANCE(1636);
      END_STATE();
    case 1513:
      if (lookahead == 'o') ADVANCE(1711);
      END_STATE();
    case 1514:
      if (lookahead == 'o') ADVANCE(1850);
      END_STATE();
    case 1515:
      if (lookahead == 'o') ADVANCE(1273);
      END_STATE();
    case 1516:
      if (lookahead == 'o') ADVANCE(1823);
      END_STATE();
    case 1517:
      if (lookahead == 'o') ADVANCE(1450);
      END_STATE();
    case 1518:
      if (lookahead == 'o') ADVANCE(1872);
      END_STATE();
    case 1519:
      if (lookahead == 'o') ADVANCE(1829);
      END_STATE();
    case 1520:
      if (lookahead == 'o') ADVANCE(1848);
      END_STATE();
    case 1521:
      if (lookahead == 'o') ADVANCE(1839);
      END_STATE();
    case 1522:
      if (lookahead == 'o') ADVANCE(1622);
      END_STATE();
    case 1523:
      if (lookahead == 'o') ADVANCE(1246);
      END_STATE();
    case 1524:
      if (lookahead == 'o') ADVANCE(1391);
      END_STATE();
    case 1525:
      if (lookahead == 'o') ADVANCE(1845);
      END_STATE();
    case 1526:
      if (lookahead == 'o') ADVANCE(1476);
      END_STATE();
    case 1527:
      if (lookahead == 'o') ADVANCE(1846);
      END_STATE();
    case 1528:
      if (lookahead == 'o') ADVANCE(1461);
      END_STATE();
    case 1529:
      if (lookahead == 'o') ADVANCE(1775);
      END_STATE();
    case 1530:
      if (lookahead == 'o') ADVANCE(1624);
      END_STATE();
    case 1531:
      if (lookahead == 'o') ADVANCE(1424);
      END_STATE();
    case 1532:
      if (lookahead == 'o') ADVANCE(1479);
      END_STATE();
    case 1533:
      if (lookahead == 'o') ADVANCE(1578);
      END_STATE();
    case 1534:
      if (lookahead == 'o') ADVANCE(1462);
      END_STATE();
    case 1535:
      if (lookahead == 'o') ADVANCE(1463);
      END_STATE();
    case 1536:
      if (lookahead == 'o') ADVANCE(1664);
      END_STATE();
    case 1537:
      if (lookahead == 'o') ADVANCE(1533);
      END_STATE();
    case 1538:
      if (lookahead == 'o') ADVANCE(1464);
      END_STATE();
    case 1539:
      if (lookahead == 'o') ADVANCE(1465);
      END_STATE();
    case 1540:
      if (lookahead == 'o') ADVANCE(1565);
      END_STATE();
    case 1541:
      if (lookahead == 'o') ADVANCE(1466);
      END_STATE();
    case 1542:
      if (lookahead == 'o') ADVANCE(1666);
      END_STATE();
    case 1543:
      if (lookahead == 'o') ADVANCE(1467);
      END_STATE();
    case 1544:
      if (lookahead == 'o') ADVANCE(1627);
      END_STATE();
    case 1545:
      if (lookahead == 'o') ADVANCE(1468);
      END_STATE();
    case 1546:
      if (lookahead == 'o') ADVANCE(972);
      END_STATE();
    case 1547:
      if (lookahead == 'o') ADVANCE(1469);
      END_STATE();
    case 1548:
      if (lookahead == 'o') ADVANCE(1471);
      END_STATE();
    case 1549:
      if (lookahead == 'o') ADVANCE(947);
      END_STATE();
    case 1550:
      if (lookahead == 'o') ADVANCE(1491);
      END_STATE();
    case 1551:
      if (lookahead == 'o') ADVANCE(1501);
      END_STATE();
    case 1552:
      if (lookahead == 'o') ADVANCE(1629);
      END_STATE();
    case 1553:
      if (lookahead == 'o') ADVANCE(1630);
      END_STATE();
    case 1554:
      if (lookahead == 'o') ADVANCE(1660);
      END_STATE();
    case 1555:
      if (lookahead == 'o') ADVANCE(1646);
      END_STATE();
    case 1556:
      if (lookahead == 'o') ADVANCE(1635);
      END_STATE();
    case 1557:
      if (lookahead == 'o') ADVANCE(1663);
      END_STATE();
    case 1558:
      if (lookahead == 'o') ADVANCE(1038);
      END_STATE();
    case 1559:
      if (lookahead == 'o') ADVANCE(1074);
      END_STATE();
    case 1560:
      if (lookahead == 'o') ADVANCE(1487);
      END_STATE();
    case 1561:
      if (lookahead == 'o') ADVANCE(1029);
      END_STATE();
    case 1562:
      if (lookahead == 'o') ADVANCE(1492);
      END_STATE();
    case 1563:
      if (lookahead == 'o') ADVANCE(1493);
      END_STATE();
    case 1564:
      if (lookahead == 'o') ADVANCE(1426);
      if (lookahead == 'u') ADVANCE(1386);
      END_STATE();
    case 1565:
      if (lookahead == 'o') ADVANCE(1609);
      END_STATE();
    case 1566:
      if (lookahead == 'o') ADVANCE(1826);
      END_STATE();
    case 1567:
      if (lookahead == 'o') ADVANCE(1418);
      END_STATE();
    case 1568:
      if (lookahead == 'o') ADVANCE(1418);
      if (lookahead == 'u') ADVANCE(1383);
      END_STATE();
    case 1569:
      if (lookahead == 'o') ADVANCE(1503);
      END_STATE();
    case 1570:
      if (lookahead == 'o') ADVANCE(1827);
      END_STATE();
    case 1571:
      if (lookahead == 'o') ADVANCE(1425);
      if (lookahead == 'u') ADVANCE(1383);
      END_STATE();
    case 1572:
      if (lookahead == 'o') ADVANCE(1427);
      END_STATE();
    case 1573:
      if (lookahead == 'o') ADVANCE(1674);
      END_STATE();
    case 1574:
      if (lookahead == 'o') ADVANCE(1851);
      END_STATE();
    case 1575:
      if (lookahead == 'o') ADVANCE(1873);
      END_STATE();
    case 1576:
      if (lookahead == 'o') ADVANCE(1874);
      END_STATE();
    case 1577:
      if (lookahead == 'o') ADVANCE(1813);
      END_STATE();
    case 1578:
      if (lookahead == 'p') ADVANCE(2081);
      END_STATE();
    case 1579:
      if (lookahead == 'p') ADVANCE(460);
      END_STATE();
    case 1580:
      if (lookahead == 'p') ADVANCE(1608);
      END_STATE();
    case 1581:
      if (lookahead == 'p') ADVANCE(1253);
      END_STATE();
    case 1582:
      if (lookahead == 'p') ADVANCE(1163);
      END_STATE();
    case 1583:
      if (lookahead == 'p') ADVANCE(987);
      END_STATE();
    case 1584:
      if (lookahead == 'p') ADVANCE(1102);
      END_STATE();
    case 1585:
      if (lookahead == 'p') ADVANCE(1699);
      END_STATE();
    case 1586:
      if (lookahead == 'p') ADVANCE(1182);
      END_STATE();
    case 1587:
      if (lookahead == 'p') ADVANCE(1111);
      END_STATE();
    case 1588:
      if (lookahead == 'p') ADVANCE(1113);
      END_STATE();
    case 1589:
      if (lookahead == 'p') ADVANCE(1186);
      END_STATE();
    case 1590:
      if (lookahead == 'p') ADVANCE(1117);
      END_STATE();
    case 1591:
      if (lookahead == 'p') ADVANCE(1118);
      END_STATE();
    case 1592:
      if (lookahead == 'p') ADVANCE(1119);
      END_STATE();
    case 1593:
      if (lookahead == 'p') ADVANCE(1120);
      END_STATE();
    case 1594:
      if (lookahead == 'p') ADVANCE(1171);
      END_STATE();
    case 1595:
      if (lookahead == 'p') ADVANCE(1125);
      END_STATE();
    case 1596:
      if (lookahead == 'p') ADVANCE(1126);
      END_STATE();
    case 1597:
      if (lookahead == 'p') ADVANCE(1129);
      END_STATE();
    case 1598:
      if (lookahead == 'p') ADVANCE(1130);
      END_STATE();
    case 1599:
      if (lookahead == 'p') ADVANCE(1131);
      END_STATE();
    case 1600:
      if (lookahead == 'p') ADVANCE(1132);
      END_STATE();
    case 1601:
      if (lookahead == 'p') ADVANCE(1134);
      END_STATE();
    case 1602:
      if (lookahead == 'p') ADVANCE(1136);
      END_STATE();
    case 1603:
      if (lookahead == 'p') ADVANCE(1137);
      END_STATE();
    case 1604:
      if (lookahead == 'p') ADVANCE(1138);
      END_STATE();
    case 1605:
      if (lookahead == 'p') ADVANCE(1192);
      END_STATE();
    case 1606:
      if (lookahead == 'p') ADVANCE(1142);
      END_STATE();
    case 1607:
      if (lookahead == 'p') ADVANCE(1296);
      END_STATE();
    case 1608:
      if (lookahead == 'p') ADVANCE(1536);
      END_STATE();
    case 1609:
      if (lookahead == 'p') ADVANCE(1307);
      END_STATE();
    case 1610:
      if (lookahead == 'p') ADVANCE(974);
      END_STATE();
    case 1611:
      if (lookahead == 'p') ADVANCE(1790);
      END_STATE();
    case 1612:
      if (lookahead == 'p') ADVANCE(1191);
      END_STATE();
    case 1613:
      if (lookahead == 'p') ADVANCE(988);
      END_STATE();
    case 1614:
      if (lookahead == 'p') ADVANCE(1687);
      END_STATE();
    case 1615:
      if (lookahead == 'p') ADVANCE(1257);
      END_STATE();
    case 1616:
      if (lookahead == 'p') ADVANCE(1225);
      END_STATE();
    case 1617:
      if (lookahead == 'p') ADVANCE(999);
      END_STATE();
    case 1618:
      if (lookahead == 'p') ADVANCE(1260);
      END_STATE();
    case 1619:
      if (lookahead == 'p') ADVANCE(1688);
      END_STATE();
    case 1620:
      if (lookahead == 'p') ADVANCE(1689);
      END_STATE();
    case 1621:
      if (lookahead == 'r') ADVANCE(1076);
      END_STATE();
    case 1622:
      if (lookahead == 'r') ADVANCE(2055);
      END_STATE();
    case 1623:
      if (lookahead == 'r') ADVANCE(886);
      END_STATE();
    case 1624:
      if (lookahead == 'r') ADVANCE(2124);
      END_STATE();
    case 1625:
      if (lookahead == 'r') ADVANCE(2093);
      END_STATE();
    case 1626:
      if (lookahead == 'r') ADVANCE(2108);
      END_STATE();
    case 1627:
      if (lookahead == 'r') ADVANCE(2077);
      END_STATE();
    case 1628:
      if (lookahead == 'r') ADVANCE(2091);
      END_STATE();
    case 1629:
      if (lookahead == 'r') ADVANCE(2054);
      END_STATE();
    case 1630:
      if (lookahead == 'r') ADVANCE(2123);
      END_STATE();
    case 1631:
      if (lookahead == 'r') ADVANCE(2092);
      END_STATE();
    case 1632:
      if (lookahead == 'r') ADVANCE(885);
      END_STATE();
    case 1633:
      if (lookahead == 'r') ADVANCE(1524);
      END_STATE();
    case 1634:
      if (lookahead == 'r') ADVANCE(1420);
      END_STATE();
    case 1635:
      if (lookahead == 'r') ADVANCE(1879);
      END_STATE();
    case 1636:
      if (lookahead == 'r') ADVANCE(1292);
      END_STATE();
    case 1637:
      if (lookahead == 'r') ADVANCE(1516);
      END_STATE();
    case 1638:
      if (lookahead == 'r') ADVANCE(1250);
      END_STATE();
    case 1639:
      if (lookahead == 'r') ADVANCE(920);
      END_STATE();
    case 1640:
      if (lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 1641:
      if (lookahead == 'r') ADVANCE(966);
      END_STATE();
    case 1642:
      if (lookahead == 'r') ADVANCE(1515);
      END_STATE();
    case 1643:
      if (lookahead == 'r') ADVANCE(1800);
      END_STATE();
    case 1644:
      if (lookahead == 'r') ADVANCE(1107);
      END_STATE();
    case 1645:
      if (lookahead == 'r') ADVANCE(1173);
      END_STATE();
    case 1646:
      if (lookahead == 'r') ADVANCE(1702);
      END_STATE();
    case 1647:
      if (lookahead == 'r') ADVANCE(1176);
      END_STATE();
    case 1648:
      if (lookahead == 'r') ADVANCE(1109);
      END_STATE();
    case 1649:
      if (lookahead == 'r') ADVANCE(1110);
      END_STATE();
    case 1650:
      if (lookahead == 'r') ADVANCE(1185);
      END_STATE();
    case 1651:
      if (lookahead == 'r') ADVANCE(1139);
      END_STATE();
    case 1652:
      if (lookahead == 'r') ADVANCE(1154);
      END_STATE();
    case 1653:
      if (lookahead == 'r') ADVANCE(1143);
      END_STATE();
    case 1654:
      if (lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 1655:
      if (lookahead == 'r') ADVANCE(1149);
      END_STATE();
    case 1656:
      if (lookahead == 'r') ADVANCE(1152);
      END_STATE();
    case 1657:
      if (lookahead == 'r') ADVANCE(1504);
      END_STATE();
    case 1658:
      if (lookahead == 'r') ADVANCE(1303);
      END_STATE();
    case 1659:
      if (lookahead == 'r') ADVANCE(1712);
      END_STATE();
    case 1660:
      if (lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 1661:
      if (lookahead == 'r') ADVANCE(1319);
      END_STATE();
    case 1662:
      if (lookahead == 'r') ADVANCE(1770);
      END_STATE();
    case 1663:
      if (lookahead == 'r') ADVANCE(1305);
      END_STATE();
    case 1664:
      if (lookahead == 'r') ADVANCE(1778);
      END_STATE();
    case 1665:
      if (lookahead == 'r') ADVANCE(1527);
      END_STATE();
    case 1666:
      if (lookahead == 'r') ADVANCE(1445);
      END_STATE();
    case 1667:
      if (lookahead == 'r') ADVANCE(1438);
      END_STATE();
    case 1668:
      if (lookahead == 'r') ADVANCE(992);
      END_STATE();
    case 1669:
      if (lookahead == 'r') ADVANCE(979);
      END_STATE();
    case 1670:
      if (lookahead == 'r') ADVANCE(1566);
      END_STATE();
    case 1671:
      if (lookahead == 'r') ADVANCE(1214);
      END_STATE();
    case 1672:
      if (lookahead == 'r') ADVANCE(1730);
      END_STATE();
    case 1673:
      if (lookahead == 'r') ADVANCE(983);
      END_STATE();
    case 1674:
      if (lookahead == 'r') ADVANCE(1079);
      END_STATE();
    case 1675:
      if (lookahead == 'r') ADVANCE(1216);
      END_STATE();
    case 1676:
      if (lookahead == 'r') ADVANCE(986);
      END_STATE();
    case 1677:
      if (lookahead == 'r') ADVANCE(1082);
      END_STATE();
    case 1678:
      if (lookahead == 'r') ADVANCE(1802);
      END_STATE();
    case 1679:
      if (lookahead == 'r') ADVANCE(1222);
      END_STATE();
    case 1680:
      if (lookahead == 'r') ADVANCE(1223);
      END_STATE();
    case 1681:
      if (lookahead == 'r') ADVANCE(1227);
      END_STATE();
    case 1682:
      if (lookahead == 'r') ADVANCE(1229);
      END_STATE();
    case 1683:
      if (lookahead == 'r') ADVANCE(927);
      END_STATE();
    case 1684:
      if (lookahead == 'r') ADVANCE(1810);
      END_STATE();
    case 1685:
      if (lookahead == 'r') ADVANCE(1008);
      END_STATE();
    case 1686:
      if (lookahead == 'r') ADVANCE(1811);
      END_STATE();
    case 1687:
      if (lookahead == 'r') ADVANCE(1354);
      END_STATE();
    case 1688:
      if (lookahead == 'r') ADVANCE(1357);
      END_STATE();
    case 1689:
      if (lookahead == 'r') ADVANCE(1358);
      END_STATE();
    case 1690:
      if (lookahead == 's') ADVANCE(2153);
      END_STATE();
    case 1691:
      if (lookahead == 's') ADVANCE(1981);
      END_STATE();
    case 1692:
      if (lookahead == 's') ADVANCE(1943);
      END_STATE();
    case 1693:
      if (lookahead == 's') ADVANCE(2015);
      END_STATE();
    case 1694:
      if (lookahead == 's') ADVANCE(1942);
      END_STATE();
    case 1695:
      if (lookahead == 's') ADVANCE(1941);
      END_STATE();
    case 1696:
      if (lookahead == 's') ADVANCE(2004);
      END_STATE();
    case 1697:
      if (lookahead == 's') ADVANCE(2087);
      END_STATE();
    case 1698:
      if (lookahead == 's') ADVANCE(2017);
      END_STATE();
    case 1699:
      if (lookahead == 's') ADVANCE(2078);
      END_STATE();
    case 1700:
      if (lookahead == 's') ADVANCE(1938);
      END_STATE();
    case 1701:
      if (lookahead == 's') ADVANCE(2040);
      END_STATE();
    case 1702:
      if (lookahead == 's') ADVANCE(1949);
      END_STATE();
    case 1703:
      if (lookahead == 's') ADVANCE(1369);
      END_STATE();
    case 1704:
      if (lookahead == 's') ADVANCE(1369);
      if (lookahead == 'x') ADVANCE(877);
      END_STATE();
    case 1705:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 1706:
      if (lookahead == 's') ADVANCE(1286);
      END_STATE();
    case 1707:
      if (lookahead == 's') ADVANCE(1371);
      END_STATE();
    case 1708:
      if (lookahead == 's') ADVANCE(1765);
      END_STATE();
    case 1709:
      if (lookahead == 's') ADVANCE(1275);
      END_STATE();
    case 1710:
      if (lookahead == 's') ADVANCE(1583);
      END_STATE();
    case 1711:
      if (lookahead == 's') ADVANCE(1300);
      END_STATE();
    case 1712:
      if (lookahead == 's') ADVANCE(1317);
      END_STATE();
    case 1713:
      if (lookahead == 's') ADVANCE(1285);
      END_STATE();
    case 1714:
      if (lookahead == 's') ADVANCE(926);
      END_STATE();
    case 1715:
      if (lookahead == 's') ADVANCE(1737);
      END_STATE();
    case 1716:
      if (lookahead == 's') ADVANCE(1315);
      END_STATE();
    case 1717:
      if (lookahead == 's') ADVANCE(1103);
      END_STATE();
    case 1718:
      if (lookahead == 's') ADVANCE(1219);
      END_STATE();
    case 1719:
      if (lookahead == 's') ADVANCE(1188);
      END_STATE();
    case 1720:
      if (lookahead == 's') ADVANCE(1785);
      END_STATE();
    case 1721:
      if (lookahead == 's') ADVANCE(1194);
      END_STATE();
    case 1722:
      if (lookahead == 's') ADVANCE(1133);
      END_STATE();
    case 1723:
      if (lookahead == 's') ADVANCE(1197);
      END_STATE();
    case 1724:
      if (lookahead == 's') ADVANCE(1769);
      END_STATE();
    case 1725:
      if (lookahead == 's') ADVANCE(1530);
      END_STATE();
    case 1726:
      if (lookahead == 's') ADVANCE(1773);
      END_STATE();
    case 1727:
      if (lookahead == 's') ADVANCE(1553);
      END_STATE();
    case 1728:
      if (lookahead == 's') ADVANCE(1554);
      END_STATE();
    case 1729:
      if (lookahead == 's') ADVANCE(1570);
      END_STATE();
    case 1730:
      if (lookahead == 's') ADVANCE(1331);
      END_STATE();
    case 1731:
      if (lookahead == 's') ADVANCE(1342);
      END_STATE();
    case 1732:
      if (lookahead == 's') ADVANCE(1613);
      END_STATE();
    case 1733:
      if (lookahead == 's') ADVANCE(1731);
      END_STATE();
    case 1734:
      if (lookahead == 's') ADVANCE(1617);
      END_STATE();
    case 1735:
      if (lookahead == 's') ADVANCE(1372);
      END_STATE();
    case 1736:
      if (lookahead == 's') ADVANCE(1005);
      END_STATE();
    case 1737:
      if (lookahead == 's') ADVANCE(1017);
      END_STATE();
    case 1738:
      if (lookahead == 's') ADVANCE(1818);
      END_STATE();
    case 1739:
      if (lookahead == 's') ADVANCE(1819);
      END_STATE();
    case 1740:
      if (lookahead == 't') ADVANCE(868);
      END_STATE();
    case 1741:
      if (lookahead == 't') ADVANCE(2057);
      END_STATE();
    case 1742:
      if (lookahead == 't') ADVANCE(1828);
      END_STATE();
    case 1743:
      if (lookahead == 't') ADVANCE(2051);
      END_STATE();
    case 1744:
      if (lookahead == 't') ADVANCE(1174);
      END_STATE();
    case 1745:
      if (lookahead == 't') ADVANCE(2110);
      END_STATE();
    case 1746:
      if (lookahead == 't') ADVANCE(2059);
      END_STATE();
    case 1747:
      if (lookahead == 't') ADVANCE(2126);
      END_STATE();
    case 1748:
      if (lookahead == 't') ADVANCE(1951);
      END_STATE();
    case 1749:
      if (lookahead == 't') ADVANCE(2102);
      END_STATE();
    case 1750:
      if (lookahead == 't') ADVANCE(2006);
      END_STATE();
    case 1751:
      if (lookahead == 't') ADVANCE(1948);
      END_STATE();
    case 1752:
      if (lookahead == 't') ADVANCE(2043);
      END_STATE();
    case 1753:
      if (lookahead == 't') ADVANCE(2044);
      END_STATE();
    case 1754:
      if (lookahead == 't') ADVANCE(2030);
      END_STATE();
    case 1755:
      if (lookahead == 't') ADVANCE(1014);
      END_STATE();
    case 1756:
      if (lookahead == 't') ADVANCE(2052);
      END_STATE();
    case 1757:
      if (lookahead == 't') ADVANCE(882);
      END_STATE();
    case 1758:
      if (lookahead == 't') ADVANCE(1950);
      END_STATE();
    case 1759:
      if (lookahead == 't') ADVANCE(2109);
      END_STATE();
    case 1760:
      if (lookahead == 't') ADVANCE(890);
      END_STATE();
    case 1761:
      if (lookahead == 't') ADVANCE(1274);
      END_STATE();
    case 1762:
      if (lookahead == 't') ADVANCE(1274);
      if (lookahead == 'u') ADVANCE(1718);
      END_STATE();
    case 1763:
      if (lookahead == 't') ADVANCE(1876);
      END_STATE();
    case 1764:
      if (lookahead == 't') ADVANCE(1644);
      END_STATE();
    case 1765:
      if (lookahead == 't') ADVANCE(981);
      END_STATE();
    case 1766:
      if (lookahead == 't') ADVANCE(1276);
      END_STATE();
    case 1767:
      if (lookahead == 't') ADVANCE(1277);
      END_STATE();
    case 1768:
      if (lookahead == 't') ADVANCE(1278);
      END_STATE();
    case 1769:
      if (lookahead == 't') ADVANCE(1641);
      END_STATE();
    case 1770:
      if (lookahead == 't') ADVANCE(1299);
      END_STATE();
    case 1771:
      if (lookahead == 't') ADVANCE(961);
      END_STATE();
    case 1772:
      if (lookahead == 't') ADVANCE(1783);
      END_STATE();
    case 1773:
      if (lookahead == 't') ADVANCE(993);
      END_STATE();
    case 1774:
      if (lookahead == 't') ADVANCE(1694);
      END_STATE();
    case 1775:
      if (lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 1776:
      if (lookahead == 't') ADVANCE(1231);
      END_STATE();
    case 1777:
      if (lookahead == 't') ADVANCE(1705);
      END_STATE();
    case 1778:
      if (lookahead == 't') ADVANCE(1178);
      END_STATE();
    case 1779:
      if (lookahead == 't') ADVANCE(1187);
      END_STATE();
    case 1780:
      if (lookahead == 't') ADVANCE(1437);
      END_STATE();
    case 1781:
      if (lookahead == 't') ADVANCE(1205);
      END_STATE();
    case 1782:
      if (lookahead == 't') ADVANCE(997);
      END_STATE();
    case 1783:
      if (lookahead == 't') ADVANCE(1304);
      END_STATE();
    case 1784:
      if (lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 1785:
      if (lookahead == 't') ADVANCE(1556);
      END_STATE();
    case 1786:
      if (lookahead == 't') ADVANCE(1831);
      END_STATE();
    case 1787:
      if (lookahead == 't') ADVANCE(2053);
      END_STATE();
    case 1788:
      if (lookahead == 't') ADVANCE(883);
      END_STATE();
    case 1789:
      if (lookahead == 't') ADVANCE(1323);
      END_STATE();
    case 1790:
      if (lookahead == 't') ADVANCE(1208);
      END_STATE();
    case 1791:
      if (lookahead == 't') ADVANCE(1832);
      END_STATE();
    case 1792:
      if (lookahead == 't') ADVANCE(1327);
      END_STATE();
    case 1793:
      if (lookahead == 't') ADVANCE(1833);
      END_STATE();
    case 1794:
      if (lookahead == 't') ADVANCE(1329);
      END_STATE();
    case 1795:
      if (lookahead == 't') ADVANCE(1835);
      END_STATE();
    case 1796:
      if (lookahead == 't') ADVANCE(1332);
      END_STATE();
    case 1797:
      if (lookahead == 't') ADVANCE(1334);
      END_STATE();
    case 1798:
      if (lookahead == 't') ADVANCE(1336);
      END_STATE();
    case 1799:
      if (lookahead == 't') ADVANCE(1340);
      END_STATE();
    case 1800:
      if (lookahead == 't') ADVANCE(1893);
      END_STATE();
    case 1801:
      if (lookahead == 't') ADVANCE(1344);
      END_STATE();
    case 1802:
      if (lookahead == 't') ADVANCE(1896);
      END_STATE();
    case 1803:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 1804:
      if (lookahead == 't') ADVANCE(1454);
      END_STATE();
    case 1805:
      if (lookahead == 't') ADVANCE(1836);
      END_STATE();
    case 1806:
      if (lookahead == 't') ADVANCE(1455);
      END_STATE();
    case 1807:
      if (lookahead == 't') ADVANCE(1837);
      END_STATE();
    case 1808:
      if (lookahead == 't') ADVANCE(893);
      END_STATE();
    case 1809:
      if (lookahead == 't') ADVANCE(1838);
      END_STATE();
    case 1810:
      if (lookahead == 't') ADVANCE(899);
      END_STATE();
    case 1811:
      if (lookahead == 't') ADVANCE(900);
      END_STATE();
    case 1812:
      if (lookahead == 't') ADVANCE(1235);
      END_STATE();
    case 1813:
      if (lookahead == 't') ADVANCE(1001);
      END_STATE();
    case 1814:
      if (lookahead == 't') ADVANCE(1236);
      END_STATE();
    case 1815:
      if (lookahead == 't') ADVANCE(1237);
      END_STATE();
    case 1816:
      if (lookahead == 't') ADVANCE(1238);
      END_STATE();
    case 1817:
      if (lookahead == 't') ADVANCE(1239);
      END_STATE();
    case 1818:
      if (lookahead == 't') ADVANCE(869);
      END_STATE();
    case 1819:
      if (lookahead == 't') ADVANCE(1685);
      END_STATE();
    case 1820:
      if (lookahead == 't') ADVANCE(870);
      END_STATE();
    case 1821:
      if (lookahead == 'u') ADVANCE(1290);
      END_STATE();
    case 1822:
      if (lookahead == 'u') ADVANCE(1383);
      END_STATE();
    case 1823:
      if (lookahead == 'u') ADVANCE(1482);
      END_STATE();
    case 1824:
      if (lookahead == 'u') ADVANCE(1421);
      END_STATE();
    case 1825:
      if (lookahead == 'u') ADVANCE(1718);
      END_STATE();
    case 1826:
      if (lookahead == 'u') ADVANCE(1483);
      END_STATE();
    case 1827:
      if (lookahead == 'u') ADVANCE(1485);
      END_STATE();
    case 1828:
      if (lookahead == 'u') ADVANCE(1648);
      END_STATE();
    case 1829:
      if (lookahead == 'u') ADVANCE(1488);
      END_STATE();
    case 1830:
      if (lookahead == 'u') ADVANCE(1722);
      END_STATE();
    case 1831:
      if (lookahead == 'u') ADVANCE(1653);
      END_STATE();
    case 1832:
      if (lookahead == 'u') ADVANCE(1655);
      END_STATE();
    case 1833:
      if (lookahead == 'u') ADVANCE(1656);
      END_STATE();
    case 1834:
      if (lookahead == 'u') ADVANCE(1423);
      END_STATE();
    case 1835:
      if (lookahead == 'u') ADVANCE(1679);
      END_STATE();
    case 1836:
      if (lookahead == 'u') ADVANCE(1680);
      END_STATE();
    case 1837:
      if (lookahead == 'u') ADVANCE(1681);
      END_STATE();
    case 1838:
      if (lookahead == 'u') ADVANCE(1682);
      END_STATE();
    case 1839:
      if (lookahead == 'u') ADVANCE(1814);
      END_STATE();
    case 1840:
      if (lookahead == 'v') ADVANCE(1172);
      END_STATE();
    case 1841:
      if (lookahead == 'v') ADVANCE(1108);
      END_STATE();
    case 1842:
      if (lookahead == 'v') ADVANCE(1164);
      END_STATE();
    case 1843:
      if (lookahead == 'v') ADVANCE(1218);
      END_STATE();
    case 1844:
      if (lookahead == 'v') ADVANCE(1224);
      END_STATE();
    case 1845:
      if (lookahead == 'w') ADVANCE(2080);
      END_STATE();
    case 1846:
      if (lookahead == 'w') ADVANCE(2016);
      END_STATE();
    case 1847:
      if (lookahead == 'w') ADVANCE(1510);
      END_STATE();
    case 1848:
      if (lookahead == 'w') ADVANCE(1698);
      END_STATE();
    case 1849:
      if (lookahead == 'w') ADVANCE(1318);
      END_STATE();
    case 1850:
      if (lookahead == 'w') ADVANCE(892);
      END_STATE();
    case 1851:
      if (lookahead == 'w') ADVANCE(895);
      END_STATE();
    case 1852:
      if (lookahead == 'w') ADVANCE(1011);
      END_STATE();
    case 1853:
      if (lookahead == 'x') ADVANCE(877);
      END_STATE();
    case 1854:
      if (lookahead == 'x') ADVANCE(2088);
      END_STATE();
    case 1855:
      if (lookahead == 'x') ADVANCE(1444);
      END_STATE();
    case 1856:
      if (lookahead == 'x') ADVANCE(460);
      END_STATE();
    case 1857:
      if (lookahead == 'x') ADVANCE(1743);
      END_STATE();
    case 1858:
      if (lookahead == 'x') ADVANCE(1165);
      END_STATE();
    case 1859:
      if (lookahead == 'x') ADVANCE(1751);
      END_STATE();
    case 1860:
      if (lookahead == 'x') ADVANCE(1755);
      END_STATE();
    case 1861:
      if (lookahead == 'x') ADVANCE(1756);
      END_STATE();
    case 1862:
      if (lookahead == 'x') ADVANCE(1757);
      END_STATE();
    case 1863:
      if (lookahead == 'x') ADVANCE(1786);
      END_STATE();
    case 1864:
      if (lookahead == 'x') ADVANCE(1787);
      END_STATE();
    case 1865:
      if (lookahead == 'x') ADVANCE(1788);
      END_STATE();
    case 1866:
      if (lookahead == 'x') ADVANCE(1791);
      END_STATE();
    case 1867:
      if (lookahead == 'x') ADVANCE(1793);
      END_STATE();
    case 1868:
      if (lookahead == 'x') ADVANCE(1795);
      END_STATE();
    case 1869:
      if (lookahead == 'x') ADVANCE(1805);
      END_STATE();
    case 1870:
      if (lookahead == 'x') ADVANCE(1807);
      END_STATE();
    case 1871:
      if (lookahead == 'x') ADVANCE(1809);
      END_STATE();
    case 1872:
      if (lookahead == 'x') ADVANCE(897);
      END_STATE();
    case 1873:
      if (lookahead == 'x') ADVANCE(898);
      END_STATE();
    case 1874:
      if (lookahead == 'x') ADVANCE(904);
      END_STATE();
    case 1875:
      if (lookahead == 'x') ADVANCE(1820);
      END_STATE();
    case 1876:
      if (lookahead == 'y') ADVANCE(2119);
      END_STATE();
    case 1877:
      if (lookahead == 'y') ADVANCE(2029);
      END_STATE();
    case 1878:
      if (lookahead == 'y') ADVANCE(913);
      END_STATE();
    case 1879:
      if (lookahead == 'y') ADVANCE(460);
      END_STATE();
    case 1880:
      if (lookahead == 'y') ADVANCE(924);
      END_STATE();
    case 1881:
      if (lookahead == 'y') ADVANCE(908);
      END_STATE();
    case 1882:
      if (lookahead == 'y') ADVANCE(1724);
      END_STATE();
    case 1883:
      if (lookahead == 'y') ADVANCE(1586);
      END_STATE();
    case 1884:
      if (lookahead == 'y') ADVANCE(1587);
      END_STATE();
    case 1885:
      if (lookahead == 'y') ADVANCE(1588);
      END_STATE();
    case 1886:
      if (lookahead == 'y') ADVANCE(1589);
      END_STATE();
    case 1887:
      if (lookahead == 'y') ADVANCE(1590);
      END_STATE();
    case 1888:
      if (lookahead == 'y') ADVANCE(1591);
      END_STATE();
    case 1889:
      if (lookahead == 'y') ADVANCE(1592);
      END_STATE();
    case 1890:
      if (lookahead == 'y') ADVANCE(1593);
      END_STATE();
    case 1891:
      if (lookahead == 'y') ADVANCE(1595);
      END_STATE();
    case 1892:
      if (lookahead == 'y') ADVANCE(1596);
      END_STATE();
    case 1893:
      if (lookahead == 'y') ADVANCE(1597);
      END_STATE();
    case 1894:
      if (lookahead == 'y') ADVANCE(1598);
      END_STATE();
    case 1895:
      if (lookahead == 'y') ADVANCE(1599);
      END_STATE();
    case 1896:
      if (lookahead == 'y') ADVANCE(1600);
      END_STATE();
    case 1897:
      if (lookahead == 'y') ADVANCE(1601);
      END_STATE();
    case 1898:
      if (lookahead == 'y') ADVANCE(1602);
      END_STATE();
    case 1899:
      if (lookahead == 'y') ADVANCE(1603);
      END_STATE();
    case 1900:
      if (lookahead == 'y') ADVANCE(1604);
      END_STATE();
    case 1901:
      if (lookahead == 'y') ADVANCE(1605);
      END_STATE();
    case 1902:
      if (lookahead == 'y') ADVANCE(921);
      END_STATE();
    case 1903:
      if (lookahead == 'y') ADVANCE(1739);
      END_STATE();
    case 1904:
      if (lookahead == 'z') ADVANCE(1569);
      END_STATE();
    case 1905:
      if (lookahead == 'z') ADVANCE(1100);
      END_STATE();
    case 1906:
      if (lookahead == 'z') ADVANCE(1114);
      END_STATE();
    case 1907:
      if (lookahead == 'z') ADVANCE(1115);
      END_STATE();
    case 1908:
      if (lookahead == 'z') ADVANCE(1902);
      END_STATE();
    case 1909:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1330);
      END_STATE();
    case 1910:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1346);
      END_STATE();
    case 1911:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1347);
      END_STATE();
    case 1912:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1348);
      END_STATE();
    case 1913:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2133);
      END_STATE();
    case 1914:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2134);
      END_STATE();
    case 1915:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2140);
      END_STATE();
    case 1916:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 1917:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2141);
      END_STATE();
    case 1918:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2150);
      END_STATE();
    case 1919:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2136);
      END_STATE();
    case 1920:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2137);
      END_STATE();
    case 1921:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2149);
      END_STATE();
    case 1922:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2148);
      END_STATE();
    case 1923:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1921);
      END_STATE();
    case 1924:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1922);
      END_STATE();
    case 1925:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1923);
      END_STATE();
    case 1926:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1924);
      END_STATE();
    case 1927:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1925);
      END_STATE();
    case 1928:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(857);
      END_STATE();
    case 1929:
      if (eof) ADVANCE(1937);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 1930:
      if (eof) ADVANCE(1937);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(1929)
      END_STATE();
    case 1931:
      if (eof) ADVANCE(1937);
      if (lookahead == '\n') SKIP(1935)
      END_STATE();
    case 1932:
      if (eof) ADVANCE(1937);
      if (lookahead == '\n') SKIP(1935)
      if (lookahead == '\r') SKIP(1931)
      END_STATE();
    case 1933:
      if (eof) ADVANCE(1937);
      if (lookahead == '\n') SKIP(1936)
      END_STATE();
    case 1934:
      if (eof) ADVANCE(1937);
      if (lookahead == '\n') SKIP(1936)
      if (lookahead == '\r') SKIP(1933)
      END_STATE();
    case 1935:
      if (eof) ADVANCE(1937);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == '\\') SKIP(1932)
      if (lookahead == 'a') ADVANCE(1375);
      if (lookahead == 'b') ADVANCE(928);
      if (lookahead == 'c') ADVANCE(1431);
      if (lookahead == 'd') ADVANCE(1087);
      if (lookahead == 'e') ADVANCE(1065);
      if (lookahead == 'f') ADVANCE(1337);
      if (lookahead == 'g') ADVANCE(1821);
      if (lookahead == 'h') ADVANCE(1512);
      if (lookahead == 'i') ADVANCE(1460);
      if (lookahead == 'l') ADVANCE(1088);
      if (lookahead == 'm') ADVANCE(1093);
      if (lookahead == 'n') ADVANCE(934);
      if (lookahead == 'o') ADVANCE(1012);
      if (lookahead == 'p') ADVANCE(940);
      if (lookahead == 'r') ADVANCE(1094);
      if (lookahead == 's') ADVANCE(1019);
      if (lookahead == 't') ADVANCE(945);
      if (lookahead == 'v') ADVANCE(1157);
      if (lookahead == 'x') ADVANCE(1965);
      if (lookahead == 'y') ADVANCE(1966);
      if (lookahead == '}') ADVANCE(1940);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1935)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2142);
      END_STATE();
    case 1936:
      if (eof) ADVANCE(1937);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '#') ADVANCE(2160);
      if (lookahead == '0') ADVANCE(2156);
      if (lookahead == '1') ADVANCE(2158);
      if (lookahead == '=') ADVANCE(2128);
      if (lookahead == '\\') SKIP(1934)
      if (lookahead == 'a') ADVANCE(1395);
      if (lookahead == 'b') ADVANCE(929);
      if (lookahead == 'c') ADVANCE(1433);
      if (lookahead == 'd') ADVANCE(1087);
      if (lookahead == 'e') ADVANCE(1064);
      if (lookahead == 'f') ADVANCE(1298);
      if (lookahead == 'i') ADVANCE(1500);
      if (lookahead == 'l') ADVANCE(1308);
      if (lookahead == 'm') ADVANCE(957);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == 'o') ADVANCE(1658);
      if (lookahead == 'p') ADVANCE(976);
      if (lookahead == 'r') ADVANCE(1094);
      if (lookahead == 's') ADVANCE(1039);
      if (lookahead == 't') ADVANCE(946);
      if (lookahead == 'v') ADVANCE(1157);
      if (lookahead == 'y') ADVANCE(1160);
      if (lookahead == '}') ADVANCE(1940);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1936)
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(anon_sym_objectTypes);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(anon_sym_bitmapfonts);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_guiTypes);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_textSpriteType);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_corneredTileSpriteType);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_maskedShieldType);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_animatedmaptext);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(anon_sym_textcolors);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      if (lookahead == 's') ADVANCE(1942);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_frameAnimatedSpriteType);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_progressbartype);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(anon_sym_pdxmesh);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_pdxparticle);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_arrowType);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_tradeRouteType);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_PieChartType);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(anon_sym_LineChartType);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(anon_sym_windowType);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(anon_sym_listBoxType);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_editBoxType);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(anon_sym_instantTextBoxType);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(1690);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(aux_sym__statement_gfx_name_token1);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '1') ADVANCE(2011);
      if (lookahead == '2') ADVANCE(2012);
      if (lookahead == '3') ADVANCE(2013);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '2') ADVANCE(2012);
      if (lookahead == '3') ADVANCE(2013);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token2);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile1_token1);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile2_token1);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile3_token1);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1668);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1668);
      if (lookahead == 'b') ADVANCE(1408);
      if (lookahead == 'd') ADVANCE(1211);
      if (lookahead == 'r') ADVANCE(1577);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(1254);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(anon_sym_borderSize);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(anon_sym_alwaystransparent);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_allwaystransparent);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(anon_sym_legacy_lazy_load);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(anon_sym_clicksound);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == 's') ADVANCE(1570);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(anon_sym_speed);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(anon_sym_textblock);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'S') ADVANCE(1614);
      if (lookahead == 'u') ADVANCE(1649);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'u') ADVANCE(1652);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'u') ADVANCE(1681);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == 't') ADVANCE(1847);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(anon_sym_colortwo);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(anon_sym_cull_distance);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead == 'i') ADVANCE(1780);
      if (lookahead == 'o') ADVANCE(1621);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(1269);
      if (lookahead == 'i') ADVANCE(1481);
      if (lookahead == 'o') ADVANCE(948);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'u') ADVANCE(1290);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(anon_sym_border_color);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(anon_sym_animation_rate_fps);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(anon_sym_looping);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(anon_sym_play_on_show);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(anon_sym_pause_on_loop);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(aux_sym__statement_gfx_file_token1);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(anon_sym_meshsettings);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(anon_sym_texture_diffuse);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(anon_sym_texture_normal);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(anon_sym_texture_specular);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(anon_sym_shader);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(anon_sym_shader);
      if (lookahead == '_') ADVANCE(1258);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(aux_sym__statement_gfx_meshsettings_shader_token1);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(anon_sym_shader_file);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(aux_sym__statement_gfx_meshsettings_shader_file_token1);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(anon_sym_transparencecheck);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(anon_sym_loadType);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(anon_sym_DQUOTEINGAME_DQUOTE);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(anon_sym_DQUOTEFRONTEND_DQUOTE);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(anon_sym_norefcount);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(anon_sym_texture);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F') ADVANCE(1328);
      if (lookahead == '_') ADVANCE(1070);
      if (lookahead == 'f') ADVANCE(1330);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1330);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1347);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(anon_sym_specular);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(anon_sym_effect);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(anon_sym_effect);
      if (lookahead == 'F') ADVANCE(1321);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effect_token1);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(anon_sym_alphamaskfile);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(aux_sym__statement_gfx_alphamaskfile_token1);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(anon_sym_linewidth);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(anon_sym_backGround);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(anon_sym_moveable);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(anon_sym_orientation);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(anon_sym_priority);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(anon_sym_scrollbartype);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(anon_sym_textureFile);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(anon_sym_textureFile);
      if (lookahead == '1') ADVANCE(2011);
      if (lookahead == '2') ADVANCE(2012);
      if (lookahead == '3') ADVANCE(2013);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(anon_sym_cursor);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(anon_sym_cursor);
      if (lookahead == '_') ADVANCE(1523);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(anon_sym_maxWidth);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(anon_sym_maxHeight);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(anon_sym_fixedsize);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1914);
      if (lookahead == '5') ADVANCE(2132);
      if (lookahead == 'f') ADVANCE(2130);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2133);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(2133);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1914);
      if (lookahead == 'f') ADVANCE(2130);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2133);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(2133);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1914);
      if (lookahead == 'f') ADVANCE(2130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2133);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(2130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2134);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(1920);
      if (lookahead == 'f') ADVANCE(2135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2136);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(2135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2137);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      if (lookahead == '.') ADVANCE(1915);
      if (lookahead == 'f') ADVANCE(2138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2139);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      if (lookahead == 'f') ADVANCE(2138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2140);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2141);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2142);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead == '5') ADVANCE(2145);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2143);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(2146);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(2143);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2143);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2146);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(sym_hexadecimal);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1926);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'O') ADVANCE(1242);
      if (lookahead == 'r') ADVANCE(1159);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1914);
      if (lookahead == 'f') ADVANCE(2130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2133);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1914);
      if (lookahead == 'f') ADVANCE(2130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2133);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2160);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(aux_sym__orientation_value_token1);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1935},
  [2] = {.lex_state = 1935},
  [3] = {.lex_state = 1935},
  [4] = {.lex_state = 1936},
  [5] = {.lex_state = 1936},
  [6] = {.lex_state = 549},
  [7] = {.lex_state = 549},
  [8] = {.lex_state = 549},
  [9] = {.lex_state = 550},
  [10] = {.lex_state = 551},
  [11] = {.lex_state = 550},
  [12] = {.lex_state = 551},
  [13] = {.lex_state = 551},
  [14] = {.lex_state = 550},
  [15] = {.lex_state = 555},
  [16] = {.lex_state = 550},
  [17] = {.lex_state = 555},
  [18] = {.lex_state = 550},
  [19] = {.lex_state = 1935},
  [20] = {.lex_state = 1935},
  [21] = {.lex_state = 550},
  [22] = {.lex_state = 1935},
  [23] = {.lex_state = 550},
  [24] = {.lex_state = 550},
  [25] = {.lex_state = 550},
  [26] = {.lex_state = 1936},
  [27] = {.lex_state = 1936},
  [28] = {.lex_state = 550},
  [29] = {.lex_state = 550},
  [30] = {.lex_state = 550},
  [31] = {.lex_state = 554},
  [32] = {.lex_state = 549},
  [33] = {.lex_state = 549},
  [34] = {.lex_state = 549},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 549},
  [37] = {.lex_state = 1936},
  [38] = {.lex_state = 1936},
  [39] = {.lex_state = 549},
  [40] = {.lex_state = 549},
  [41] = {.lex_state = 554},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1936},
  [44] = {.lex_state = 549},
  [45] = {.lex_state = 549},
  [46] = {.lex_state = 1936},
  [47] = {.lex_state = 549},
  [48] = {.lex_state = 1936},
  [49] = {.lex_state = 1936},
  [50] = {.lex_state = 1936},
  [51] = {.lex_state = 1936},
  [52] = {.lex_state = 1935},
  [53] = {.lex_state = 1936},
  [54] = {.lex_state = 1936},
  [55] = {.lex_state = 1936},
  [56] = {.lex_state = 559},
  [57] = {.lex_state = 559},
  [58] = {.lex_state = 559},
  [59] = {.lex_state = 1935},
  [60] = {.lex_state = 559},
  [61] = {.lex_state = 1935},
  [62] = {.lex_state = 1936},
  [63] = {.lex_state = 559},
  [64] = {.lex_state = 559},
  [65] = {.lex_state = 1935},
  [66] = {.lex_state = 1935},
  [67] = {.lex_state = 1935},
  [68] = {.lex_state = 549},
  [69] = {.lex_state = 1936},
  [70] = {.lex_state = 1936},
  [71] = {.lex_state = 549},
  [72] = {.lex_state = 556},
  [73] = {.lex_state = 1936},
  [74] = {.lex_state = 550},
  [75] = {.lex_state = 549},
  [76] = {.lex_state = 556},
  [77] = {.lex_state = 549},
  [78] = {.lex_state = 557},
  [79] = {.lex_state = 549},
  [80] = {.lex_state = 550},
  [81] = {.lex_state = 549},
  [82] = {.lex_state = 549},
  [83] = {.lex_state = 558},
  [84] = {.lex_state = 549},
  [85] = {.lex_state = 1936},
  [86] = {.lex_state = 1936},
  [87] = {.lex_state = 558},
  [88] = {.lex_state = 549},
  [89] = {.lex_state = 549},
  [90] = {.lex_state = 559},
  [91] = {.lex_state = 549},
  [92] = {.lex_state = 549},
  [93] = {.lex_state = 558},
  [94] = {.lex_state = 549},
  [95] = {.lex_state = 558},
  [96] = {.lex_state = 558},
  [97] = {.lex_state = 549},
  [98] = {.lex_state = 1936},
  [99] = {.lex_state = 549},
  [100] = {.lex_state = 551},
  [101] = {.lex_state = 551},
  [102] = {.lex_state = 557},
  [103] = {.lex_state = 557},
  [104] = {.lex_state = 1936},
  [105] = {.lex_state = 551},
  [106] = {.lex_state = 559},
  [107] = {.lex_state = 551},
  [108] = {.lex_state = 556},
  [109] = {.lex_state = 557},
  [110] = {.lex_state = 1936},
  [111] = {.lex_state = 551},
  [112] = {.lex_state = 1936},
  [113] = {.lex_state = 551},
  [114] = {.lex_state = 557},
  [115] = {.lex_state = 549},
  [116] = {.lex_state = 549},
  [117] = {.lex_state = 551},
  [118] = {.lex_state = 558},
  [119] = {.lex_state = 551},
  [120] = {.lex_state = 551},
  [121] = {.lex_state = 558},
  [122] = {.lex_state = 549},
  [123] = {.lex_state = 558},
  [124] = {.lex_state = 1936},
  [125] = {.lex_state = 556},
  [126] = {.lex_state = 1936},
  [127] = {.lex_state = 1936},
  [128] = {.lex_state = 1936},
  [129] = {.lex_state = 557},
  [130] = {.lex_state = 1936},
  [131] = {.lex_state = 556},
  [132] = {.lex_state = 1936},
  [133] = {.lex_state = 1936},
  [134] = {.lex_state = 556},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1936},
  [138] = {.lex_state = 1936},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1936},
  [142] = {.lex_state = 1936},
  [143] = {.lex_state = 560},
  [144] = {.lex_state = 560},
  [145] = {.lex_state = 1936},
  [146] = {.lex_state = 1936},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 558},
  [152] = {.lex_state = 560},
  [153] = {.lex_state = 1936},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1936},
  [159] = {.lex_state = 1936},
  [160] = {.lex_state = 1936},
  [161] = {.lex_state = 1936},
  [162] = {.lex_state = 1936},
  [163] = {.lex_state = 1936},
  [164] = {.lex_state = 549},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1936},
  [170] = {.lex_state = 1936},
  [171] = {.lex_state = 1936},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 549},
  [174] = {.lex_state = 1935},
  [175] = {.lex_state = 549},
  [176] = {.lex_state = 549},
  [177] = {.lex_state = 549},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 1936},
  [180] = {.lex_state = 1936},
  [181] = {.lex_state = 1935},
  [182] = {.lex_state = 1935},
  [183] = {.lex_state = 1935},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1936},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 559},
  [192] = {.lex_state = 559},
  [193] = {.lex_state = 559},
  [194] = {.lex_state = 549},
  [195] = {.lex_state = 549},
  [196] = {.lex_state = 549},
  [197] = {.lex_state = 1935},
  [198] = {.lex_state = 561},
  [199] = {.lex_state = 1935},
  [200] = {.lex_state = 1936},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 549},
  [203] = {.lex_state = 1935},
  [204] = {.lex_state = 549},
  [205] = {.lex_state = 549},
  [206] = {.lex_state = 1935},
  [207] = {.lex_state = 1935},
  [208] = {.lex_state = 549},
  [209] = {.lex_state = 549},
  [210] = {.lex_state = 549},
  [211] = {.lex_state = 549},
  [212] = {.lex_state = 559},
  [213] = {.lex_state = 549},
  [214] = {.lex_state = 1935},
  [215] = {.lex_state = 1935},
  [216] = {.lex_state = 559},
  [217] = {.lex_state = 549},
  [218] = {.lex_state = 549},
  [219] = {.lex_state = 1935},
  [220] = {.lex_state = 549},
  [221] = {.lex_state = 549},
  [222] = {.lex_state = 549},
  [223] = {.lex_state = 549},
  [224] = {.lex_state = 549},
  [225] = {.lex_state = 549},
  [226] = {.lex_state = 549},
  [227] = {.lex_state = 561},
  [228] = {.lex_state = 559},
  [229] = {.lex_state = 1935},
  [230] = {.lex_state = 1935},
  [231] = {.lex_state = 559},
  [232] = {.lex_state = 1935},
  [233] = {.lex_state = 1935},
  [234] = {.lex_state = 1935},
  [235] = {.lex_state = 1935},
  [236] = {.lex_state = 549},
  [237] = {.lex_state = 1935},
  [238] = {.lex_state = 558},
  [239] = {.lex_state = 549},
  [240] = {.lex_state = 1935},
  [241] = {.lex_state = 549},
  [242] = {.lex_state = 1935},
  [243] = {.lex_state = 549},
  [244] = {.lex_state = 549},
  [245] = {.lex_state = 549},
  [246] = {.lex_state = 1936},
  [247] = {.lex_state = 1936},
  [248] = {.lex_state = 1936},
  [249] = {.lex_state = 549},
  [250] = {.lex_state = 549},
  [251] = {.lex_state = 1935},
  [252] = {.lex_state = 1935},
  [253] = {.lex_state = 549},
  [254] = {.lex_state = 559},
  [255] = {.lex_state = 1935},
  [256] = {.lex_state = 1935},
  [257] = {.lex_state = 1935},
  [258] = {.lex_state = 549},
  [259] = {.lex_state = 1936},
  [260] = {.lex_state = 549},
  [261] = {.lex_state = 558},
  [262] = {.lex_state = 558},
  [263] = {.lex_state = 558},
  [264] = {.lex_state = 558},
  [265] = {.lex_state = 558},
  [266] = {.lex_state = 558},
  [267] = {.lex_state = 558},
  [268] = {.lex_state = 549},
  [269] = {.lex_state = 1936},
  [270] = {.lex_state = 1936},
  [271] = {.lex_state = 1936},
  [272] = {.lex_state = 558},
  [273] = {.lex_state = 1936},
  [274] = {.lex_state = 1936},
  [275] = {.lex_state = 1936},
  [276] = {.lex_state = 1936},
  [277] = {.lex_state = 558},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 1935},
  [280] = {.lex_state = 549},
  [281] = {.lex_state = 1936},
  [282] = {.lex_state = 1935},
  [283] = {.lex_state = 1936},
  [284] = {.lex_state = 1936},
  [285] = {.lex_state = 1936},
  [286] = {.lex_state = 558},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 1936},
  [289] = {.lex_state = 1936},
  [290] = {.lex_state = 558},
  [291] = {.lex_state = 549},
  [292] = {.lex_state = 1935},
  [293] = {.lex_state = 1935},
  [294] = {.lex_state = 558},
  [295] = {.lex_state = 1935},
  [296] = {.lex_state = 549},
  [297] = {.lex_state = 1935},
  [298] = {.lex_state = 558},
  [299] = {.lex_state = 1935},
  [300] = {.lex_state = 549},
  [301] = {.lex_state = 1935},
  [302] = {.lex_state = 558},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 549},
  [306] = {.lex_state = 560},
  [307] = {.lex_state = 560},
  [308] = {.lex_state = 549},
  [309] = {.lex_state = 549},
  [310] = {.lex_state = 560},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 558},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 549},
  [317] = {.lex_state = 549},
  [318] = {.lex_state = 549},
  [319] = {.lex_state = 549},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 560},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 560},
  [326] = {.lex_state = 560},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 560},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 1935},
  [343] = {.lex_state = 1935},
  [344] = {.lex_state = 1935},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 1935},
  [347] = {.lex_state = 1935},
  [348] = {.lex_state = 1935},
  [349] = {.lex_state = 1935},
  [350] = {.lex_state = 1935},
  [351] = {.lex_state = 1935},
  [352] = {.lex_state = 1935},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 1935},
  [357] = {.lex_state = 1935},
  [358] = {.lex_state = 1935},
  [359] = {.lex_state = 1935},
  [360] = {.lex_state = 1935},
  [361] = {.lex_state = 1935},
  [362] = {.lex_state = 1935},
  [363] = {.lex_state = 549},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 1935},
  [366] = {.lex_state = 1935},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 1935},
  [369] = {.lex_state = 1935},
  [370] = {.lex_state = 1935},
  [371] = {.lex_state = 1935},
  [372] = {.lex_state = 1935},
  [373] = {.lex_state = 1935},
  [374] = {.lex_state = 1935},
  [375] = {.lex_state = 1935},
  [376] = {.lex_state = 1935},
  [377] = {.lex_state = 1935},
  [378] = {.lex_state = 1935},
  [379] = {.lex_state = 1935},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 1935},
  [382] = {.lex_state = 1935},
  [383] = {.lex_state = 1935},
  [384] = {.lex_state = 1935},
  [385] = {.lex_state = 1936},
  [386] = {.lex_state = 1935},
  [387] = {.lex_state = 1936},
  [388] = {.lex_state = 1936},
  [389] = {.lex_state = 1936},
  [390] = {.lex_state = 1936},
  [391] = {.lex_state = 1936},
  [392] = {.lex_state = 1935},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 1935},
  [395] = {.lex_state = 1935},
  [396] = {.lex_state = 1936},
  [397] = {.lex_state = 549},
  [398] = {.lex_state = 1936},
  [399] = {.lex_state = 1936},
  [400] = {.lex_state = 1936},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 1936},
  [403] = {.lex_state = 1936},
  [404] = {.lex_state = 1936},
  [405] = {.lex_state = 1936},
  [406] = {.lex_state = 1936},
  [407] = {.lex_state = 1935},
  [408] = {.lex_state = 1936},
  [409] = {.lex_state = 1936},
  [410] = {.lex_state = 549},
  [411] = {.lex_state = 1935},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 549},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 549},
  [417] = {.lex_state = 549},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 549},
  [421] = {.lex_state = 549},
  [422] = {.lex_state = 1935},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 1935},
  [425] = {.lex_state = 1935},
  [426] = {.lex_state = 1935},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 1935},
  [431] = {.lex_state = 549},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 549},
  [437] = {.lex_state = 1935},
  [438] = {.lex_state = 1935},
  [439] = {.lex_state = 1935},
  [440] = {.lex_state = 1936},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 549},
  [443] = {.lex_state = 1936},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 1935},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 1935},
  [451] = {.lex_state = 549},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 549},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 1936},
  [457] = {.lex_state = 549},
  [458] = {.lex_state = 1935},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 549},
  [464] = {.lex_state = 1935},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 1935},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 549},
  [470] = {.lex_state = 549},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 549},
  [476] = {.lex_state = 549},
  [477] = {.lex_state = 549},
  [478] = {.lex_state = 1935},
  [479] = {.lex_state = 549},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 1935},
  [483] = {.lex_state = 550},
  [484] = {.lex_state = 1935},
  [485] = {.lex_state = 1935},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 1935},
  [488] = {.lex_state = 1935},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 1935},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 549},
  [495] = {.lex_state = 549},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 1935},
  [500] = {.lex_state = 549},
  [501] = {.lex_state = 549},
  [502] = {.lex_state = 549},
  [503] = {.lex_state = 549},
  [504] = {.lex_state = 549},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 1935},
  [507] = {.lex_state = 1936},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 1936},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 1936},
  [512] = {.lex_state = 1936},
  [513] = {.lex_state = 1935},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 550},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 1936},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 1936},
  [522] = {.lex_state = 1936},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 1936},
  [525] = {.lex_state = 1935},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 1935},
  [528] = {.lex_state = 550},
  [529] = {.lex_state = 1935},
  [530] = {.lex_state = 1935},
  [531] = {.lex_state = 1936},
  [532] = {.lex_state = 550},
  [533] = {.lex_state = 1936},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 551},
  [536] = {.lex_state = 551},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 555},
  [540] = {.lex_state = 551},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 550},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 549},
  [551] = {.lex_state = 551},
  [552] = {.lex_state = 551},
  [553] = {.lex_state = 551},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 554},
  [558] = {.lex_state = 554},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 1936},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 549},
  [565] = {.lex_state = 551},
  [566] = {.lex_state = 555},
  [567] = {.lex_state = 555},
  [568] = {.lex_state = 1936},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 1935},
  [571] = {.lex_state = 551},
  [572] = {.lex_state = 549},
  [573] = {.lex_state = 551},
  [574] = {.lex_state = 551},
  [575] = {.lex_state = 551},
  [576] = {.lex_state = 1936},
  [577] = {.lex_state = 1935},
  [578] = {.lex_state = 1936},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 1935},
  [581] = {.lex_state = 1935},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 1935},
  [589] = {.lex_state = 1935},
  [590] = {.lex_state = 1935},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 551},
  [596] = {.lex_state = 1936},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 551},
  [599] = {.lex_state = 1935},
  [600] = {.lex_state = 0},
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
    [sym_file] = STATE(559),
    [sym_dot_mod] = STATE(554),
    [sym_dot_gfx] = STATE(554),
    [sym_dot_gui] = STATE(554),
    [sym__gui_types_definition] = STATE(356),
    [sym__spriteTypes] = STATE(279),
    [sym__objectTypes] = STATE(279),
    [sym__bitmapfonts] = STATE(279),
    [sym__guiTypes] = STATE(356),
    [sym__statement_name] = STATE(35),
    [sym__statement_mod_path] = STATE(35),
    [sym__statement_mod_archive] = STATE(35),
    [sym__statement_mod_remote_file_id] = STATE(35),
    [sym__statement_mod_version] = STATE(35),
    [sym__statement_mod_picture] = STATE(35),
    [sym__statement_mod_supported_version] = STATE(35),
    [sym__statement_mod_replace_path] = STATE(35),
    [sym__statement_mod_tags] = STATE(35),
    [sym__statement_mod_dependencies] = STATE(35),
    [aux_sym_dot_mod_repeat1] = STATE(35),
    [aux_sym_dot_gfx_repeat1] = STATE(279),
    [aux_sym_dot_gui_repeat1] = STATE(356),
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
  [144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_text,
    ACTIONS(49), 31,
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
  [184] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(57), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(59), 1,
      anon_sym_noOfFrames,
    ACTIONS(61), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(63), 1,
      anon_sym_overlay_rows,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(67), 1,
      anon_sym_animation,
    ACTIONS(69), 1,
      anon_sym_alwaystransparent,
    ACTIONS(71), 1,
      anon_sym_allwaystransparent,
    ACTIONS(73), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(75), 1,
      anon_sym_clicksound,
    ACTIONS(77), 1,
      anon_sym_transparencecheck,
    ACTIONS(79), 1,
      anon_sym_loadType,
    ACTIONS(81), 1,
      anon_sym_norefcount,
    ACTIONS(83), 1,
      anon_sym_alphamaskfile,
    STATE(99), 1,
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
  [256] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(57), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(59), 1,
      anon_sym_noOfFrames,
    ACTIONS(61), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(63), 1,
      anon_sym_overlay_rows,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(67), 1,
      anon_sym_animation,
    ACTIONS(69), 1,
      anon_sym_alwaystransparent,
    ACTIONS(71), 1,
      anon_sym_allwaystransparent,
    ACTIONS(73), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(75), 1,
      anon_sym_clicksound,
    ACTIONS(77), 1,
      anon_sym_transparencecheck,
    ACTIONS(79), 1,
      anon_sym_loadType,
    ACTIONS(81), 1,
      anon_sym_norefcount,
    ACTIONS(83), 1,
      anon_sym_alphamaskfile,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym__statement_gfx_name,
    STATE(6), 15,
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
  [328] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      anon_sym_name,
    ACTIONS(92), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(95), 1,
      anon_sym_noOfFrames,
    ACTIONS(98), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(101), 1,
      anon_sym_overlay_rows,
    ACTIONS(104), 1,
      anon_sym_effectFile,
    ACTIONS(107), 1,
      anon_sym_animation,
    ACTIONS(110), 1,
      anon_sym_alwaystransparent,
    ACTIONS(113), 1,
      anon_sym_allwaystransparent,
    ACTIONS(116), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(119), 1,
      anon_sym_clicksound,
    ACTIONS(122), 1,
      anon_sym_transparencecheck,
    ACTIONS(125), 1,
      anon_sym_loadType,
    ACTIONS(128), 1,
      anon_sym_norefcount,
    ACTIONS(131), 1,
      anon_sym_alphamaskfile,
    STATE(99), 1,
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
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(57), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(59), 1,
      anon_sym_noOfFrames,
    ACTIONS(61), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(63), 1,
      anon_sym_overlay_rows,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(71), 1,
      anon_sym_allwaystransparent,
    ACTIONS(77), 1,
      anon_sym_transparencecheck,
    ACTIONS(79), 1,
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
    STATE(119), 1,
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
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(57), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(59), 1,
      anon_sym_noOfFrames,
    ACTIONS(61), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(63), 1,
      anon_sym_overlay_rows,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(71), 1,
      anon_sym_allwaystransparent,
    ACTIONS(77), 1,
      anon_sym_transparencecheck,
    ACTIONS(79), 1,
      anon_sym_loadType,
    ACTIONS(142), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(144), 1,
      anon_sym_looping,
    ACTIONS(146), 1,
      anon_sym_play_on_show,
    ACTIONS(148), 1,
      anon_sym_pause_on_loop,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym__statement_gfx_name,
    STATE(13), 13,
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
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_name,
    ACTIONS(161), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(164), 1,
      anon_sym_noOfFrames,
    ACTIONS(167), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(170), 1,
      anon_sym_overlay_rows,
    ACTIONS(173), 1,
      anon_sym_effectFile,
    ACTIONS(176), 1,
      anon_sym_allwaystransparent,
    ACTIONS(179), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(182), 1,
      anon_sym_looping,
    ACTIONS(185), 1,
      anon_sym_play_on_show,
    ACTIONS(188), 1,
      anon_sym_pause_on_loop,
    ACTIONS(191), 1,
      anon_sym_transparencecheck,
    ACTIONS(194), 1,
      anon_sym_loadType,
    STATE(119), 1,
      sym__statement_gfx_name,
    STATE(13), 13,
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
  [705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_assign_equal,
    ACTIONS(205), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_effect,
    ACTIONS(203), 23,
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
  [742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(209), 24,
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
  [777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_effect,
    ACTIONS(213), 23,
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
  [811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_assign_equal,
    ACTIONS(219), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(217), 23,
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
  [882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(230), 22,
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
  [917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(232), 23,
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
  [950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
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
  [1087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_text,
    ACTIONS(262), 1,
      sym_assign_equal,
    ACTIONS(258), 21,
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
  [1120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_text,
    ACTIONS(268), 1,
      sym_assign_equal,
    ACTIONS(264), 21,
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
  [1153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(270), 21,
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
  [1184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(274), 21,
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
  [1215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(278), 21,
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
  [1246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_animation,
    ACTIONS(286), 1,
      sym_assign_equal,
    ACTIONS(282), 21,
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
  [1279] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(57), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(59), 1,
      anon_sym_noOfFrames,
    ACTIONS(61), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(63), 1,
      anon_sym_overlay_rows,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(71), 1,
      anon_sym_allwaystransparent,
    ACTIONS(75), 1,
      anon_sym_clicksound,
    ACTIONS(77), 1,
      anon_sym_transparencecheck,
    ACTIONS(79), 1,
      anon_sym_loadType,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
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
  [1331] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(57), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(59), 1,
      anon_sym_noOfFrames,
    ACTIONS(61), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(63), 1,
      anon_sym_overlay_rows,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(71), 1,
      anon_sym_allwaystransparent,
    ACTIONS(75), 1,
      anon_sym_clicksound,
    ACTIONS(77), 1,
      anon_sym_transparencecheck,
    ACTIONS(79), 1,
      anon_sym_loadType,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym__statement_gfx_name,
    STATE(32), 10,
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
  [1383] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(57), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(59), 1,
      anon_sym_noOfFrames,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(71), 1,
      anon_sym_allwaystransparent,
    ACTIONS(73), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(79), 1,
      anon_sym_loadType,
    ACTIONS(81), 1,
      anon_sym_norefcount,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(296), 1,
      anon_sym_borderSize,
    STATE(176), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(36), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1435] = 13,
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
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    STATE(42), 11,
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
  [1485] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    ACTIONS(302), 1,
      anon_sym_name,
    ACTIONS(305), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(308), 1,
      anon_sym_noOfFrames,
    ACTIONS(311), 1,
      anon_sym_effectFile,
    ACTIONS(314), 1,
      anon_sym_size,
    ACTIONS(317), 1,
      anon_sym_borderSize,
    ACTIONS(320), 1,
      anon_sym_allwaystransparent,
    ACTIONS(323), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(326), 1,
      anon_sym_loadType,
    ACTIONS(329), 1,
      anon_sym_norefcount,
    STATE(176), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(36), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_text,
    ACTIONS(332), 21,
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
  [1567] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(341), 1,
      anon_sym_name,
    ACTIONS(344), 1,
      anon_sym_size,
    ACTIONS(347), 1,
      anon_sym_borderSize,
    ACTIONS(350), 1,
      anon_sym_text,
    ACTIONS(353), 1,
      anon_sym_font,
    ACTIONS(356), 1,
      anon_sym_position,
    ACTIONS(359), 1,
      anon_sym_orientation,
    ACTIONS(362), 1,
      anon_sym_textureFile,
    ACTIONS(365), 1,
      anon_sym_cursor,
    STATE(189), 1,
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
  [1619] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(370), 1,
      anon_sym_spriteType,
    ACTIONS(372), 1,
      anon_sym_textSpriteType,
    ACTIONS(374), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(376), 1,
      anon_sym_maskedShieldType,
    ACTIONS(378), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(380), 1,
      anon_sym_progressbartype,
    ACTIONS(382), 1,
      anon_sym_PieChartType,
    ACTIONS(384), 1,
      anon_sym_LineChartType,
    ACTIONS(386), 1,
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
  [1667] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      anon_sym_spriteType,
    ACTIONS(393), 1,
      anon_sym_textSpriteType,
    ACTIONS(396), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(399), 1,
      anon_sym_maskedShieldType,
    ACTIONS(402), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(405), 1,
      anon_sym_progressbartype,
    ACTIONS(408), 1,
      anon_sym_PieChartType,
    ACTIONS(411), 1,
      anon_sym_LineChartType,
    ACTIONS(414), 1,
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
  [1715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_animation,
    ACTIONS(417), 21,
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
  [1745] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 1,
      anon_sym_name,
    ACTIONS(426), 1,
      anon_sym_path,
    ACTIONS(429), 1,
      anon_sym_archive,
    ACTIONS(432), 1,
      anon_sym_remote_file_id,
    ACTIONS(435), 1,
      anon_sym_version,
    ACTIONS(438), 1,
      anon_sym_picture,
    ACTIONS(441), 1,
      anon_sym_supported_version,
    ACTIONS(444), 1,
      anon_sym_replace_path,
    ACTIONS(447), 1,
      anon_sym_tags,
    ACTIONS(450), 1,
      anon_sym_dependencies,
    STATE(42), 11,
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
  [1795] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(455), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(457), 1,
      anon_sym_size,
    ACTIONS(459), 1,
      anon_sym_borderSize,
    ACTIONS(461), 1,
      anon_sym_text,
    ACTIONS(463), 1,
      anon_sym_font,
    ACTIONS(465), 1,
      anon_sym_position,
    ACTIONS(467), 1,
      anon_sym_orientation,
    ACTIONS(469), 1,
      anon_sym_textureFile,
    ACTIONS(471), 1,
      anon_sym_cursor,
    STATE(189), 1,
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
  [1847] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_spriteType,
    ACTIONS(372), 1,
      anon_sym_textSpriteType,
    ACTIONS(374), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(376), 1,
      anon_sym_maskedShieldType,
    ACTIONS(378), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(380), 1,
      anon_sym_progressbartype,
    ACTIONS(382), 1,
      anon_sym_PieChartType,
    ACTIONS(384), 1,
      anon_sym_LineChartType,
    ACTIONS(386), 1,
      anon_sym_cursor_offset,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    STATE(39), 12,
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
  [1895] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(57), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(59), 1,
      anon_sym_noOfFrames,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(71), 1,
      anon_sym_allwaystransparent,
    ACTIONS(73), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(79), 1,
      anon_sym_loadType,
    ACTIONS(81), 1,
      anon_sym_norefcount,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(296), 1,
      anon_sym_borderSize,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(176), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(34), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_text,
    ACTIONS(477), 21,
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
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    ACTIONS(483), 1,
      anon_sym_name,
    ACTIONS(486), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(489), 1,
      anon_sym_noOfFrames,
    ACTIONS(492), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(495), 1,
      anon_sym_overlay_rows,
    ACTIONS(498), 1,
      anon_sym_effectFile,
    ACTIONS(501), 1,
      anon_sym_allwaystransparent,
    ACTIONS(504), 1,
      anon_sym_clicksound,
    ACTIONS(507), 1,
      anon_sym_transparencecheck,
    ACTIONS(510), 1,
      anon_sym_loadType,
    STATE(175), 1,
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
  [2029] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(455), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(457), 1,
      anon_sym_size,
    ACTIONS(459), 1,
      anon_sym_borderSize,
    ACTIONS(461), 1,
      anon_sym_text,
    ACTIONS(463), 1,
      anon_sym_font,
    ACTIONS(465), 1,
      anon_sym_position,
    ACTIONS(467), 1,
      anon_sym_orientation,
    ACTIONS(469), 1,
      anon_sym_textureFile,
    ACTIONS(471), 1,
      anon_sym_cursor,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
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
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    ACTIONS(563), 1,
      anon_sym_name,
    ACTIONS(566), 1,
      anon_sym_size,
    ACTIONS(569), 1,
      anon_sym_borderSize,
    ACTIONS(572), 1,
      anon_sym_allwaystransparent,
    ACTIONS(575), 1,
      anon_sym_position,
    ACTIONS(578), 1,
      anon_sym_background,
    ACTIONS(581), 1,
      anon_sym_orientation,
    ACTIONS(584), 1,
      anon_sym_priority,
    ACTIONS(587), 1,
      anon_sym_scrollbartype,
    STATE(240), 1,
      sym__statement_name,
    STATE(52), 9,
      sym__statement_gui_background,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_priority,
      sym__statement_gui_scrollbartype,
      sym__statement_gui_allwaystransparent,
      aux_sym__listBoxType_block_repeat1,
  [2264] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(459), 1,
      anon_sym_borderSize,
    ACTIONS(463), 1,
      anon_sym_font,
    ACTIONS(465), 1,
      anon_sym_position,
    ACTIONS(467), 1,
      anon_sym_orientation,
    ACTIONS(469), 1,
      anon_sym_textureFile,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    ACTIONS(592), 1,
      anon_sym_maxWidth,
    ACTIONS(594), 1,
      anon_sym_maxHeight,
    ACTIONS(596), 1,
      anon_sym_fixedsize,
    STATE(259), 1,
      sym__statement_name,
    STATE(62), 9,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      sym__statement_gui_fixedsize,
      aux_sym__instantTextBoxType_block_repeat1,
  [2312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_text,
    ACTIONS(602), 1,
      sym_assign_equal,
    ACTIONS(598), 18,
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
  [2342] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(459), 1,
      anon_sym_borderSize,
    ACTIONS(463), 1,
      anon_sym_font,
    ACTIONS(465), 1,
      anon_sym_position,
    ACTIONS(467), 1,
      anon_sym_orientation,
    ACTIONS(469), 1,
      anon_sym_textureFile,
    ACTIONS(592), 1,
      anon_sym_maxWidth,
    ACTIONS(594), 1,
      anon_sym_maxHeight,
    ACTIONS(596), 1,
      anon_sym_fixedsize,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym__statement_name,
    STATE(53), 9,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      sym__statement_gui_fixedsize,
      aux_sym__instantTextBoxType_block_repeat1,
  [2390] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(59), 1,
      anon_sym_noOfFrames,
    ACTIONS(61), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(63), 1,
      anon_sym_overlay_rows,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(77), 1,
      anon_sym_transparencecheck,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    ACTIONS(608), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(610), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(612), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    STATE(254), 1,
      sym__statement_gfx_name,
    STATE(63), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [2438] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(79), 1,
      anon_sym_loadType,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(608), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(610), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(616), 1,
      anon_sym_color,
    ACTIONS(618), 1,
      anon_sym_colortwo,
    ACTIONS(620), 1,
      anon_sym_horizontal,
    STATE(212), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(64), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [2486] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(79), 1,
      anon_sym_loadType,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(608), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(610), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(616), 1,
      anon_sym_color,
    ACTIONS(618), 1,
      anon_sym_colortwo,
    ACTIONS(620), 1,
      anon_sym_horizontal,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    STATE(212), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(57), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [2534] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(457), 1,
      anon_sym_size,
    ACTIONS(459), 1,
      anon_sym_borderSize,
    ACTIONS(465), 1,
      anon_sym_position,
    ACTIONS(467), 1,
      anon_sym_orientation,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(626), 1,
      anon_sym_allwaystransparent,
    ACTIONS(628), 1,
      anon_sym_background,
    ACTIONS(630), 1,
      anon_sym_priority,
    ACTIONS(632), 1,
      anon_sym_scrollbartype,
    STATE(240), 1,
      sym__statement_name,
    STATE(66), 9,
      sym__statement_gui_background,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_priority,
      sym__statement_gui_scrollbartype,
      sym__statement_gui_allwaystransparent,
      aux_sym__listBoxType_block_repeat1,
  [2582] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    ACTIONS(636), 1,
      anon_sym_name,
    ACTIONS(639), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(642), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(645), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(648), 1,
      anon_sym_noOfFrames,
    ACTIONS(651), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(654), 1,
      anon_sym_overlay_rows,
    ACTIONS(657), 1,
      anon_sym_effectFile,
    ACTIONS(660), 1,
      anon_sym_transparencecheck,
    STATE(254), 1,
      sym__statement_gfx_name,
    STATE(60), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [2630] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(457), 1,
      anon_sym_size,
    ACTIONS(465), 1,
      anon_sym_position,
    ACTIONS(467), 1,
      anon_sym_orientation,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 1,
      anon_sym_listBoxType,
    ACTIONS(667), 1,
      anon_sym_editBoxType,
    ACTIONS(669), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(671), 1,
      anon_sym_backGround,
    ACTIONS(673), 1,
      anon_sym_moveable,
    STATE(252), 1,
      sym__statement_name,
    STATE(65), 9,
      sym__listBoxType,
      sym__editBoxType,
      sym__instantTextBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [2678] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      anon_sym_name,
    ACTIONS(680), 1,
      anon_sym_borderSize,
    ACTIONS(683), 1,
      anon_sym_font,
    ACTIONS(686), 1,
      anon_sym_position,
    ACTIONS(689), 1,
      anon_sym_orientation,
    ACTIONS(692), 1,
      anon_sym_textureFile,
    ACTIONS(695), 1,
      anon_sym_maxWidth,
    ACTIONS(698), 1,
      anon_sym_maxHeight,
    ACTIONS(701), 1,
      anon_sym_fixedsize,
    STATE(259), 1,
      sym__statement_name,
    STATE(62), 9,
      sym__statement_gui_position,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_textureFile,
      sym__statement_gui_font,
      sym__statement_gui_maxWidth,
      sym__statement_gui_maxHeight,
      sym__statement_gui_fixedsize,
      aux_sym__instantTextBoxType_block_repeat1,
  [2726] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(59), 1,
      anon_sym_noOfFrames,
    ACTIONS(61), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(63), 1,
      anon_sym_overlay_rows,
    ACTIONS(65), 1,
      anon_sym_effectFile,
    ACTIONS(77), 1,
      anon_sym_transparencecheck,
    ACTIONS(608), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(610), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(612), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      sym__statement_gfx_name,
    STATE(60), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [2774] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    ACTIONS(708), 1,
      anon_sym_name,
    ACTIONS(711), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(714), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(717), 1,
      anon_sym_effectFile,
    ACTIONS(720), 1,
      anon_sym_size,
    ACTIONS(723), 1,
      anon_sym_color,
    ACTIONS(726), 1,
      anon_sym_colortwo,
    ACTIONS(729), 1,
      anon_sym_horizontal,
    ACTIONS(732), 1,
      anon_sym_loadType,
    STATE(212), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(64), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [2822] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(457), 1,
      anon_sym_size,
    ACTIONS(465), 1,
      anon_sym_position,
    ACTIONS(467), 1,
      anon_sym_orientation,
    ACTIONS(665), 1,
      anon_sym_listBoxType,
    ACTIONS(667), 1,
      anon_sym_editBoxType,
    ACTIONS(669), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(671), 1,
      anon_sym_backGround,
    ACTIONS(673), 1,
      anon_sym_moveable,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym__statement_name,
    STATE(67), 9,
      sym__listBoxType,
      sym__editBoxType,
      sym__instantTextBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [2870] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(457), 1,
      anon_sym_size,
    ACTIONS(459), 1,
      anon_sym_borderSize,
    ACTIONS(465), 1,
      anon_sym_position,
    ACTIONS(467), 1,
      anon_sym_orientation,
    ACTIONS(626), 1,
      anon_sym_allwaystransparent,
    ACTIONS(628), 1,
      anon_sym_background,
    ACTIONS(630), 1,
      anon_sym_priority,
    ACTIONS(632), 1,
      anon_sym_scrollbartype,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym__statement_name,
    STATE(52), 9,
      sym__statement_gui_background,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_borderSize,
      sym__statement_gui_orientation,
      sym__statement_gui_priority,
      sym__statement_gui_scrollbartype,
      sym__statement_gui_allwaystransparent,
      aux_sym__listBoxType_block_repeat1,
  [2918] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    ACTIONS(741), 1,
      anon_sym_listBoxType,
    ACTIONS(744), 1,
      anon_sym_editBoxType,
    ACTIONS(747), 1,
      anon_sym_instantTextBoxType,
    ACTIONS(750), 1,
      anon_sym_name,
    ACTIONS(753), 1,
      anon_sym_size,
    ACTIONS(756), 1,
      anon_sym_position,
    ACTIONS(759), 1,
      anon_sym_backGround,
    ACTIONS(762), 1,
      anon_sym_moveable,
    ACTIONS(765), 1,
      anon_sym_orientation,
    STATE(252), 1,
      sym__statement_name,
    STATE(67), 9,
      sym__listBoxType,
      sym__editBoxType,
      sym__instantTextBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [2966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym_assign_equal,
    ACTIONS(768), 18,
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
  [2993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_text,
    ACTIONS(776), 1,
      sym_assign_equal,
    ACTIONS(772), 17,
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
  [3022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_text,
    ACTIONS(778), 18,
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
  [3049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_assign_equal,
    ACTIONS(782), 18,
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
  [3076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_assign_equal,
    ACTIONS(788), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
      anon_sym_effect,
    ACTIONS(786), 15,
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
  [3105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_text,
    ACTIONS(792), 17,
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
  [3131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_assign_equal,
    ACTIONS(798), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(796), 15,
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
  [3159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 18,
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
  [3183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
      anon_sym_effect,
    ACTIONS(804), 15,
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
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 18,
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
  [3233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_text,
    ACTIONS(810), 15,
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
  [3258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym_assign_equal,
    ACTIONS(814), 16,
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
  [3283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(818), 15,
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
  [3308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym_assign_equal,
    ACTIONS(822), 16,
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
  [3333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_assign_equal,
    ACTIONS(826), 16,
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
  [3358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym_assign_equal,
    ACTIONS(830), 16,
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
  [3383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym_assign_equal,
    ACTIONS(834), 16,
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
  [3408] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
    ACTIONS(840), 1,
      anon_sym_size,
    ACTIONS(842), 1,
      anon_sym_text,
    ACTIONS(844), 1,
      anon_sym_color,
    ACTIONS(846), 1,
      anon_sym_font,
    ACTIONS(848), 1,
      anon_sym_position,
    ACTIONS(850), 1,
      anon_sym_format,
    ACTIONS(852), 1,
      anon_sym_cull_distance,
    STATE(98), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [3446] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
    ACTIONS(856), 1,
      anon_sym_size,
    ACTIONS(859), 1,
      anon_sym_text,
    ACTIONS(862), 1,
      anon_sym_color,
    ACTIONS(865), 1,
      anon_sym_font,
    ACTIONS(868), 1,
      anon_sym_position,
    ACTIONS(871), 1,
      anon_sym_format,
    ACTIONS(874), 1,
      anon_sym_cull_distance,
    STATE(86), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [3484] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_cursor_offset,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
    ACTIONS(879), 1,
      anon_sym_textcolors,
    ACTIONS(881), 1,
      anon_sym_name,
    ACTIONS(883), 1,
      anon_sym_path,
    ACTIONS(885), 1,
      anon_sym_color,
    ACTIONS(887), 1,
      anon_sym_border_color,
    ACTIONS(889), 1,
      anon_sym_effect,
    STATE(290), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(96), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [3524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 16,
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
  [3546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 16,
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
  [3568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_color,
    ACTIONS(899), 1,
      sym_assign_equal,
    ACTIONS(895), 14,
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
  [3594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 16,
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
  [3616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 16,
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
  [3638] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_cursor_offset,
    ACTIONS(879), 1,
      anon_sym_textcolors,
    ACTIONS(881), 1,
      anon_sym_name,
    ACTIONS(883), 1,
      anon_sym_path,
    ACTIONS(885), 1,
      anon_sym_color,
    ACTIONS(887), 1,
      anon_sym_border_color,
    ACTIONS(889), 1,
      anon_sym_effect,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    STATE(290), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(87), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [3678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 16,
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
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 16,
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
  [3722] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
    ACTIONS(913), 1,
      anon_sym_textcolors,
    ACTIONS(916), 1,
      anon_sym_name,
    ACTIONS(919), 1,
      anon_sym_path,
    ACTIONS(922), 1,
      anon_sym_cursor_offset,
    ACTIONS(925), 1,
      anon_sym_color,
    ACTIONS(928), 1,
      anon_sym_border_color,
    ACTIONS(931), 1,
      anon_sym_effect,
    STATE(290), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(96), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 16,
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
  [3784] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_size,
    ACTIONS(842), 1,
      anon_sym_text,
    ACTIONS(844), 1,
      anon_sym_color,
    ACTIONS(846), 1,
      anon_sym_font,
    ACTIONS(848), 1,
      anon_sym_position,
    ACTIONS(850), 1,
      anon_sym_format,
    ACTIONS(852), 1,
      anon_sym_cull_distance,
    ACTIONS(936), 1,
      anon_sym_RBRACE,
    STATE(86), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [3822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 16,
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
  [3844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_assign_equal,
    ACTIONS(940), 14,
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
  [3867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_assign_equal,
    ACTIONS(944), 14,
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
  [3890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_RBRACE,
    STATE(102), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(950), 12,
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
  [3915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
    STATE(102), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(955), 12,
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
  [3940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_text,
    ACTIONS(961), 1,
      sym_assign_equal,
    ACTIONS(957), 13,
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
  [3965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym_assign_equal,
    ACTIONS(963), 14,
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
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_color,
    ACTIONS(967), 14,
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
  [4011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym_assign_equal,
    ACTIONS(971), 14,
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
  [4034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_SEMI,
    ACTIONS(981), 1,
      sym_assign_equal,
    ACTIONS(977), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(975), 11,
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
  [4061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
    STATE(103), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(955), 12,
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
  [4086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_text,
    ACTIONS(989), 1,
      sym_assign_equal,
    ACTIONS(985), 13,
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
  [4111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 14,
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
  [4131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_text,
    ACTIONS(993), 13,
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
  [4153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 14,
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
  [4173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym_assign_equal,
    ACTIONS(999), 13,
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
  [4195] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_RBRACE,
    ACTIONS(1005), 1,
      anon_sym_name,
    ACTIONS(1008), 1,
      anon_sym_animation,
    ACTIONS(1011), 1,
      anon_sym_cull_distance,
    ACTIONS(1014), 1,
      anon_sym_file,
    ACTIONS(1017), 1,
      anon_sym_meshsettings,
    ACTIONS(1020), 1,
      anon_sym_scale,
    STATE(316), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(115), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [4231] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    ACTIONS(1025), 1,
      anon_sym_animation,
    ACTIONS(1027), 1,
      anon_sym_cull_distance,
    ACTIONS(1029), 1,
      anon_sym_file,
    ACTIONS(1031), 1,
      anon_sym_meshsettings,
    ACTIONS(1033), 1,
      anon_sym_scale,
    STATE(316), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(115), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [4267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 14,
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
  [4287] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(610), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(612), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(1027), 1,
      anon_sym_cull_distance,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    ACTIONS(1039), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1041), 1,
      anon_sym_effect,
    STATE(312), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(123), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [4323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 14,
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
  [4343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 14,
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
  [4363] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(610), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(612), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(1027), 1,
      anon_sym_cull_distance,
    ACTIONS(1039), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1041), 1,
      anon_sym_effect,
    ACTIONS(1047), 1,
      anon_sym_RBRACE,
    STATE(312), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(118), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [4399] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(1025), 1,
      anon_sym_animation,
    ACTIONS(1027), 1,
      anon_sym_cull_distance,
    ACTIONS(1029), 1,
      anon_sym_file,
    ACTIONS(1031), 1,
      anon_sym_meshsettings,
    ACTIONS(1033), 1,
      anon_sym_scale,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
    STATE(316), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(116), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [4435] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_RBRACE,
    ACTIONS(1053), 1,
      anon_sym_name,
    ACTIONS(1056), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1059), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(1062), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(1065), 1,
      anon_sym_cull_distance,
    ACTIONS(1068), 1,
      anon_sym_effect,
    STATE(312), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(123), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [4471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_text,
    ACTIONS(1071), 13,
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
  [4493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_SEMI,
    ACTIONS(1077), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(1075), 11,
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
  [4517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_animationrotation,
    ACTIONS(1085), 1,
      sym_assign_equal,
    ACTIONS(1081), 11,
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
  [4540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_animationrotation,
    ACTIONS(1091), 1,
      sym_assign_equal,
    ACTIONS(1087), 11,
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
  [4563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_animationrotation,
    ACTIONS(1097), 1,
      sym_assign_equal,
    ACTIONS(1093), 11,
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
  [4586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 13,
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
  [4605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_animationrotation,
    ACTIONS(1105), 1,
      sym_assign_equal,
    ACTIONS(1101), 11,
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
  [4628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(1107), 11,
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
  [4649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_animationrotation,
    ACTIONS(1115), 1,
      sym_assign_equal,
    ACTIONS(1111), 11,
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
  [4672] = 4,
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
  [4695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(1123), 11,
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
  [4716] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_RBRACE,
    ACTIONS(1129), 1,
      anon_sym_animatedmaptext,
    ACTIONS(1131), 1,
      anon_sym_pdxmesh,
    ACTIONS(1133), 1,
      anon_sym_pdxparticle,
    ACTIONS(1135), 1,
      anon_sym_arrowType,
    ACTIONS(1137), 1,
      anon_sym_tradeRouteType,
    STATE(139), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [4747] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_animatedmaptext,
    ACTIONS(1131), 1,
      anon_sym_pdxmesh,
    ACTIONS(1133), 1,
      anon_sym_pdxparticle,
    ACTIONS(1135), 1,
      anon_sym_arrowType,
    ACTIONS(1137), 1,
      anon_sym_tradeRouteType,
    ACTIONS(1139), 1,
      anon_sym_RBRACE,
    STATE(135), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [4778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_animationrotation,
    ACTIONS(1145), 1,
      sym_assign_equal,
    ACTIONS(1141), 11,
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
  [4801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_animationrotation,
    ACTIONS(1151), 1,
      sym_assign_equal,
    ACTIONS(1147), 11,
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
  [4824] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_RBRACE,
    ACTIONS(1155), 1,
      anon_sym_animatedmaptext,
    ACTIONS(1158), 1,
      anon_sym_pdxmesh,
    ACTIONS(1161), 1,
      anon_sym_pdxparticle,
    ACTIONS(1164), 1,
      anon_sym_arrowType,
    ACTIONS(1167), 1,
      anon_sym_tradeRouteType,
    STATE(139), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [4855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym_assign_equal,
    ACTIONS(1170), 11,
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
  [4875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_animationrotation,
    ACTIONS(1174), 11,
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
  [4895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_text,
    ACTIONS(1182), 1,
      sym_assign_equal,
    ACTIONS(1178), 10,
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
  [4917] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(1041), 1,
      anon_sym_effect,
    ACTIONS(1184), 1,
      anon_sym_RBRACE,
    ACTIONS(1186), 1,
      anon_sym_texture,
    ACTIONS(1188), 1,
      anon_sym_normal,
    ACTIONS(1190), 1,
      anon_sym_specular,
    STATE(336), 1,
      sym__statement_gfx_name,
    STATE(152), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [4949] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
    ACTIONS(1194), 1,
      anon_sym_name,
    ACTIONS(1197), 1,
      anon_sym_texture,
    ACTIONS(1200), 1,
      anon_sym_normal,
    ACTIONS(1203), 1,
      anon_sym_specular,
    ACTIONS(1206), 1,
      anon_sym_effect,
    STATE(336), 1,
      sym__statement_gfx_name,
    STATE(144), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [4981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_animationrotation,
    ACTIONS(1209), 11,
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
  [5001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_animationrotation,
    ACTIONS(1213), 11,
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
  [5021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      sym_assign_equal,
    ACTIONS(1217), 11,
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
  [5041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      sym_assign_equal,
    ACTIONS(1221), 11,
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
  [5061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      sym_assign_equal,
    ACTIONS(1225), 11,
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
  [5081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      sym_assign_equal,
    ACTIONS(1229), 11,
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
  [5101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1237), 1,
      sym_assign_equal,
    ACTIONS(1233), 10,
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
  [5123] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(1041), 1,
      anon_sym_effect,
    ACTIONS(1186), 1,
      anon_sym_texture,
    ACTIONS(1188), 1,
      anon_sym_normal,
    ACTIONS(1190), 1,
      anon_sym_specular,
    ACTIONS(1239), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      sym__statement_gfx_name,
    STATE(144), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [5155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_text,
    ACTIONS(1245), 1,
      sym_assign_equal,
    ACTIONS(1241), 10,
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
  [5177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      sym_assign_equal,
    ACTIONS(1247), 11,
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
  [5197] = 3,
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
  [5217] = 3,
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
  [5237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      sym_assign_equal,
    ACTIONS(1259), 11,
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
  [5257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_text,
    ACTIONS(1267), 1,
      sym_assign_equal,
    ACTIONS(1263), 10,
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
  [5279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_animationrotation,
    ACTIONS(1269), 11,
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
  [5299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_animationrotation,
    ACTIONS(1273), 11,
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
  [5319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_animationrotation,
    ACTIONS(1277), 11,
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
  [5339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      anon_sym_animationrotation,
    ACTIONS(1281), 11,
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
  [5359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_animationrotation,
    ACTIONS(1285), 11,
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
  [5379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      sym_assign_equal,
    ACTIONS(1289), 11,
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
  [5399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 11,
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
  [5416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 11,
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
  [5433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 11,
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
  [5450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 11,
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
  [5467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      sym_assign_equal,
    ACTIONS(1301), 10,
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
  [5486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      sym_assign_equal,
    ACTIONS(1305), 10,
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
  [5505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      sym_assign_equal,
    ACTIONS(1309), 10,
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
  [5524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 11,
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
  [5541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 11,
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
  [5558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      sym_assign_equal,
    ACTIONS(1317), 10,
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
  [5577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 11,
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
  [5594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 11,
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
  [5611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      sym_assign_equal,
    ACTIONS(1325), 10,
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
  [5630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 11,
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
  [5647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      anon_sym_text,
    ACTIONS(1331), 10,
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
  [5666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      anon_sym_text,
    ACTIONS(1335), 10,
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
  [5685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      sym_assign_equal,
    ACTIONS(1339), 10,
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
  [5704] = 3,
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
  [5723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      sym_assign_equal,
    ACTIONS(1347), 10,
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
  [5742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 11,
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
  [5759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 11,
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
  [5776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 11,
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
  [5793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 11,
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
  [5810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 11,
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
  [5827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_text,
    ACTIONS(1361), 10,
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
  [5846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 11,
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
  [5863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_color,
    ACTIONS(1371), 1,
      sym_assign_equal,
    ACTIONS(1367), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [5884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      anon_sym_color,
    ACTIONS(1377), 1,
      sym_assign_equal,
    ACTIONS(1373), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [5905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      anon_sym_color,
    ACTIONS(1383), 1,
      sym_assign_equal,
    ACTIONS(1379), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [5926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      sym_assign_equal,
    ACTIONS(1385), 10,
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
  [5945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      sym_assign_equal,
    ACTIONS(1389), 10,
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
  [5964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      sym_assign_equal,
    ACTIONS(1393), 10,
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
  [5983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      sym_assign_equal,
    ACTIONS(1397), 10,
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
  [6002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      sym_assign_equal,
    ACTIONS(1403), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_texture,
    ACTIONS(1401), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      sym_assign_equal,
    ACTIONS(1407), 10,
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
  [6042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_text,
    ACTIONS(1411), 10,
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
  [6061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 11,
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
  [6078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      sym_assign_equal,
    ACTIONS(1417), 10,
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
  [6097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      sym_assign_equal,
    ACTIONS(1421), 10,
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
  [6116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      sym_assign_equal,
    ACTIONS(1425), 10,
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
  [6135] = 3,
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
  [6154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      sym_assign_equal,
    ACTIONS(1433), 10,
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
  [6173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      sym_assign_equal,
    ACTIONS(1437), 10,
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
  [6192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      sym_assign_equal,
    ACTIONS(1441), 10,
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
  [6211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 10,
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
  [6227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 10,
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
  [6243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 10,
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
  [6259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_color,
    ACTIONS(1451), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [6277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 10,
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
  [6293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 10,
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
  [6309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 10,
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
  [6325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_color,
    ACTIONS(1461), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [6343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 10,
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
  [6359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 10,
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
  [6375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 10,
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
  [6391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1471), 10,
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
    ACTIONS(1473), 10,
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
  [6423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 10,
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
  [6439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 10,
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
  [6455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 10,
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
  [6471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 10,
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
  [6487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 10,
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
  [6503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_texture,
    ACTIONS(1485), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      anon_sym_color,
    ACTIONS(1489), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [6539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 10,
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
  [6555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 10,
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
  [6571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      anon_sym_color,
    ACTIONS(1497), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [6589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 10,
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
  [6605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 10,
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
  [6621] = 2,
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
  [6637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 10,
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
  [6653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 10,
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
  [6669] = 2,
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
  [6685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      sym_assign_equal,
    ACTIONS(1513), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [6703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 10,
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
  [6719] = 2,
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
  [6735] = 2,
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
  [6751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 10,
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
  [6767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 10,
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
  [6783] = 2,
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
  [6799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1529), 10,
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
  [6815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 10,
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
  [6831] = 2,
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
  [6847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 10,
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
  [6863] = 2,
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
  [6879] = 2,
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
  [6895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 10,
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
  [6911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 10,
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
  [6927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1545), 10,
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
    ACTIONS(1547), 10,
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
  [6959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 10,
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
  [6975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 10,
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
  [6991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1553), 10,
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
  [7007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 10,
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
  [7023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1557), 10,
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
  [7039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1559), 10,
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
  [7055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1561), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1563), 1,
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
  [7087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1565), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1569), 1,
      sym_assign_equal,
    ACTIONS(1567), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1573), 1,
      sym_assign_equal,
    ACTIONS(1571), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1577), 1,
      sym_assign_equal,
    ACTIONS(1575), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1581), 1,
      sym_assign_equal,
    ACTIONS(1579), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1585), 1,
      sym_assign_equal,
    ACTIONS(1583), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_scale,
  [7187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1589), 1,
      sym_assign_equal,
    ACTIONS(1587), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1593), 1,
      sym_assign_equal,
    ACTIONS(1591), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 1,
      sym_assign_equal,
    ACTIONS(1595), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1603), 1,
      sym_assign_equal,
    ACTIONS(1601), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1605), 1,
      sym_assign_equal,
    ACTIONS(1233), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 1,
      sym_assign_equal,
    ACTIONS(1367), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1609), 1,
      sym_assign_equal,
    ACTIONS(796), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1611), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7335] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1613), 1,
      anon_sym_RBRACE,
    ACTIONS(1615), 1,
      anon_sym_name,
    ACTIONS(1618), 1,
      anon_sym_type,
    ACTIONS(1621), 1,
      anon_sym_scale,
    STATE(367), 1,
      sym__statement_gfx_name,
    STATE(278), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [7359] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(7), 1,
      anon_sym_objectTypes,
    ACTIONS(9), 1,
      anon_sym_bitmapfonts,
    ACTIONS(1624), 1,
      ts_builtin_sym_end,
    STATE(293), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [7381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_scale,
  [7395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7409] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(1630), 1,
      anon_sym_RBRACE,
    ACTIONS(1632), 1,
      anon_sym_linewidth,
    STATE(299), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(365), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [7433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7475] = 2,
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
  [7489] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(1033), 1,
      anon_sym_scale,
    ACTIONS(1636), 1,
      anon_sym_RBRACE,
    ACTIONS(1638), 1,
      anon_sym_type,
    STATE(367), 1,
      sym__statement_gfx_name,
    STATE(303), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [7513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [7541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      sym_assign_equal,
    ACTIONS(1646), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [7571] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(1650), 1,
      anon_sym_RBRACE,
    ACTIONS(1652), 1,
      anon_sym_speed,
    ACTIONS(1654), 1,
      anon_sym_textblock,
    STATE(366), 1,
      sym__statement_gfx_name,
    STATE(301), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [7595] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      ts_builtin_sym_end,
    ACTIONS(1658), 1,
      anon_sym_spriteTypes,
    ACTIONS(1661), 1,
      anon_sym_objectTypes,
    ACTIONS(1664), 1,
      anon_sym_bitmapfonts,
    STATE(293), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [7617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1667), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7631] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(294), 1,
      anon_sym_size,
    ACTIONS(1632), 1,
      anon_sym_linewidth,
    ACTIONS(1669), 1,
      anon_sym_RBRACE,
    STATE(282), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(365), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [7655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1673), 1,
      sym_assign_equal,
    ACTIONS(1671), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [7671] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(1652), 1,
      anon_sym_speed,
    ACTIONS(1654), 1,
      anon_sym_textblock,
    ACTIONS(1675), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      sym__statement_gfx_name,
    STATE(292), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [7695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1677), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7709] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1679), 1,
      anon_sym_RBRACE,
    ACTIONS(1681), 1,
      anon_sym_name,
    ACTIONS(1684), 1,
      anon_sym_size,
    ACTIONS(1687), 1,
      anon_sym_linewidth,
    STATE(299), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(365), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [7733] = 3,
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
  [7749] = 7,
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
    STATE(366), 1,
      sym__statement_gfx_name,
    STATE(301), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [7773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1705), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [7787] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(1033), 1,
      anon_sym_scale,
    ACTIONS(1638), 1,
      anon_sym_type,
    ACTIONS(1707), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      sym__statement_gfx_name,
    STATE(278), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [7811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1711), 1,
      sym_assign_equal,
    ACTIONS(1709), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [7826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_textcolors,
    ACTIONS(1713), 1,
      anon_sym_RBRACE,
    ACTIONS(1715), 1,
      anon_sym_bitmapfont,
    STATE(416), 1,
      sym__textcolors,
    STATE(309), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [7847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      sym_assign_equal,
    ACTIONS(1717), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [7862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 1,
      sym_assign_equal,
    ACTIONS(1721), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [7877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [7890] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1727), 1,
      anon_sym_RBRACE,
    ACTIONS(1729), 1,
      anon_sym_textcolors,
    ACTIONS(1732), 1,
      anon_sym_bitmapfont,
    STATE(416), 1,
      sym__textcolors,
    STATE(309), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [7911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 1,
      sym_assign_equal,
    ACTIONS(1735), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [7926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1741), 1,
      sym_assign_equal,
    ACTIONS(1739), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [7941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1745), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1743), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_effect,
  [7956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 1,
      sym_assign_equal,
    ACTIONS(1747), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [7971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1753), 1,
      sym_assign_equal,
    ACTIONS(1751), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [7986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 1,
      sym_assign_equal,
    ACTIONS(1755), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1759), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [8014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1761), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [8027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1763), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [8040] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_textcolors,
    ACTIONS(1715), 1,
      anon_sym_bitmapfont,
    ACTIONS(1765), 1,
      anon_sym_RBRACE,
    STATE(416), 1,
      sym__textcolors,
    STATE(305), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [8061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1767), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1769), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1771), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1773), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1775), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1777), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1779), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8145] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(1781), 1,
      anon_sym_RBRACE,
    ACTIONS(1783), 1,
      anon_sym_size,
    STATE(415), 1,
      sym__statement_gfx_name,
    STATE(329), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [8165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1785), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8177] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    ACTIONS(1783), 1,
      anon_sym_size,
    ACTIONS(1787), 1,
      anon_sym_RBRACE,
    STATE(415), 1,
      sym__statement_gfx_name,
    STATE(333), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [8197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1791), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1793), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8233] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 1,
      anon_sym_RBRACE,
    ACTIONS(1797), 1,
      anon_sym_name,
    ACTIONS(1800), 1,
      anon_sym_size,
    STATE(415), 1,
      sym__statement_gfx_name,
    STATE(333), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [8253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1803), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1805), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1807), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [8289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1809), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1811), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1813), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1815), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1817), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [8349] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_x,
    ACTIONS(1821), 1,
      anon_sym_y,
    STATE(439), 1,
      sym__entry_x_integer,
    STATE(462), 1,
      sym__entry_y_integer,
    STATE(548), 1,
      sym__statement_xy_integer,
  [8368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1823), 1,
      ts_builtin_sym_end,
    ACTIONS(1825), 1,
      anon_sym_guiTypes,
    STATE(343), 3,
      sym__gui_types_definition,
      sym__guiTypes,
      aux_sym_dot_gui_repeat1,
  [8383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1828), 1,
      anon_sym_x,
    ACTIONS(1830), 1,
      anon_sym_y,
    STATE(419), 1,
      sym__entry_y_float,
    STATE(430), 1,
      sym__entry_x_float,
    STATE(542), 1,
      sym__statement_xy_float,
  [8402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1832), 1,
      anon_sym_RBRACE,
    ACTIONS(1834), 1,
      anon_sym_windowType,
    STATE(355), 3,
      sym__guiTypes_type,
      sym__windowType,
      aux_sym__guiTypes_block_repeat1,
  [8417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1838), 1,
      sym_assign_equal,
    ACTIONS(1836), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8430] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_x,
    ACTIONS(1821), 1,
      anon_sym_y,
    STATE(439), 1,
      sym__entry_x_integer,
    STATE(462), 1,
      sym__entry_y_integer,
    STATE(543), 1,
      sym__statement_xy_integer,
  [8449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1842), 1,
      sym_assign_equal,
    ACTIONS(1840), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1846), 1,
      sym_assign_equal,
    ACTIONS(1844), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1850), 1,
      sym_assign_equal,
    ACTIONS(1848), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_x,
    ACTIONS(1821), 1,
      anon_sym_y,
    STATE(439), 1,
      sym__entry_x_integer,
    STATE(462), 1,
      sym__entry_y_integer,
    STATE(541), 1,
      sym__statement_xy_integer,
  [8507] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_x,
    ACTIONS(1821), 1,
      anon_sym_y,
    STATE(439), 1,
      sym__entry_x_integer,
    STATE(462), 1,
      sym__entry_y_integer,
    STATE(555), 1,
      sym__statement_xy_integer,
  [8526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1834), 1,
      anon_sym_windowType,
    ACTIONS(1852), 1,
      anon_sym_RBRACE,
    STATE(345), 3,
      sym__guiTypes_type,
      sym__windowType,
      aux_sym__guiTypes_block_repeat1,
  [8541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1856), 1,
      sym_assign_equal,
    ACTIONS(1854), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [8554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1858), 1,
      anon_sym_RBRACE,
    ACTIONS(1860), 1,
      anon_sym_windowType,
    STATE(355), 3,
      sym__guiTypes_type,
      sym__windowType,
      aux_sym__guiTypes_block_repeat1,
  [8569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_guiTypes,
    ACTIONS(1863), 1,
      ts_builtin_sym_end,
    STATE(343), 3,
      sym__gui_types_definition,
      sym__guiTypes,
      aux_sym_dot_gui_repeat1,
  [8584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_x,
    ACTIONS(1821), 1,
      anon_sym_y,
    STATE(439), 1,
      sym__entry_x_integer,
    STATE(462), 1,
      sym__entry_y_integer,
    STATE(546), 1,
      sym__statement_xy_integer,
  [8603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_x,
    ACTIONS(1821), 1,
      anon_sym_y,
    STATE(439), 1,
      sym__entry_x_integer,
    STATE(462), 1,
      sym__entry_y_integer,
    STATE(545), 1,
      sym__statement_xy_integer,
  [8622] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_x,
    ACTIONS(1821), 1,
      anon_sym_y,
    STATE(439), 1,
      sym__entry_x_integer,
    STATE(462), 1,
      sym__entry_y_integer,
    STATE(556), 1,
      sym__statement_xy_integer,
  [8641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1867), 1,
      sym_assign_equal,
    ACTIONS(1865), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8654] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_x,
    ACTIONS(1821), 1,
      anon_sym_y,
    STATE(439), 1,
      sym__entry_x_integer,
    STATE(462), 1,
      sym__entry_y_integer,
    STATE(592), 1,
      sym__statement_xy_integer,
  [8673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1871), 1,
      sym_assign_equal,
    ACTIONS(1869), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [8686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1875), 1,
      sym_assign_equal,
    ACTIONS(1873), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [8698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1879), 1,
      sym_assign_equal,
    ACTIONS(1877), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [8710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1881), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [8720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1883), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1885), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [8740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1887), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [8750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1889), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1891), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1893), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1895), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1897), 1,
      anon_sym_RBRACE,
    ACTIONS(1899), 1,
      aux_sym__integer_positive_token1,
    STATE(377), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [8804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1901), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1903), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1905), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1907), 1,
      anon_sym_RBRACE,
    ACTIONS(1909), 1,
      aux_sym__integer_positive_token1,
    STATE(377), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [8848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1912), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1914), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [8868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1916), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [8878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1918), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1920), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1922), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1924), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [8918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym__boolean_yes_no,
    ACTIONS(1926), 2,
      anon_sym_yes,
      anon_sym_no,
  [8929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1930), 1,
      sym_assign_equal,
    ACTIONS(1928), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [8940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(91), 1,
      sym__boolean_yes_no,
    ACTIONS(1932), 2,
      anon_sym_yes,
      anon_sym_no,
  [8951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      sym__boolean_yes_no,
    ACTIONS(1934), 2,
      anon_sym_yes,
      anon_sym_no,
  [8962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1936), 1,
      anon_sym_RBRACE,
    ACTIONS(1938), 1,
      sym_string,
    STATE(389), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [8975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(77), 1,
      sym__boolean_yes_no,
    ACTIONS(1941), 2,
      anon_sym_yes,
      anon_sym_no,
  [8986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(234), 1,
      sym__boolean_0_1,
    ACTIONS(1943), 2,
      anon_sym_0,
      anon_sym_1,
  [8997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1947), 1,
      sym_assign_equal,
    ACTIONS(1945), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [9008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1951), 1,
      sym_assign_equal,
    ACTIONS(1949), 2,
      anon_sym_RBRACE,
      anon_sym_windowType,
  [9019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1953), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [9028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1955), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [9037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(163), 1,
      sym__boolean_yes_no,
    ACTIONS(1957), 2,
      anon_sym_yes,
      anon_sym_no,
  [9048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1959), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [9057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(294), 1,
      sym__boolean_yes_no,
    ACTIONS(1961), 2,
      anon_sym_yes,
      anon_sym_no,
  [9068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(75), 1,
      sym__boolean_yes_no,
    ACTIONS(1963), 2,
      anon_sym_yes,
      anon_sym_no,
  [9079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(219), 1,
      sym__boolean_yes_no,
    ACTIONS(1965), 2,
      anon_sym_yes,
      anon_sym_no,
  [9090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1969), 1,
      sym_assign_equal,
    ACTIONS(1967), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [9101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(179), 1,
      sym__boolean_yes_no,
    ACTIONS(1971), 2,
      anon_sym_yes,
      anon_sym_no,
  [9112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(113), 1,
      sym__boolean_yes_no,
    ACTIONS(1973), 2,
      anon_sym_yes,
      anon_sym_no,
  [9123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(111), 1,
      sym__boolean_yes_no,
    ACTIONS(1975), 2,
      anon_sym_yes,
      anon_sym_no,
  [9134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1977), 1,
      anon_sym_RBRACE,
    ACTIONS(1979), 1,
      sym_string,
    STATE(408), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [9147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(248), 1,
      sym__boolean_yes_no,
    ACTIONS(1981), 2,
      anon_sym_yes,
      anon_sym_no,
  [9158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1983), 1,
      aux_sym__integer_positive_token1,
    STATE(373), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [9169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1979), 1,
      sym_string,
    ACTIONS(1985), 1,
      anon_sym_RBRACE,
    STATE(389), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [9182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(216), 1,
      sym__boolean_yes_no,
    ACTIONS(1987), 2,
      anon_sym_yes,
      anon_sym_no,
  [9193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1989), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [9202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1993), 1,
      sym_assign_equal,
    ACTIONS(1991), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [9213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1997), 1,
      sym_assign_equal,
    ACTIONS(1995), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [9224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1999), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [9233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2001), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [9242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2003), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [9251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2005), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [9260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2007), 1,
      aux_sym__float_positive_token1,
    STATE(78), 1,
      sym__float_positive,
  [9270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2009), 1,
      anon_sym_LBRACE,
    STATE(321), 1,
      sym__animatedmaptext_block,
  [9280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1828), 1,
      anon_sym_x,
    STATE(560), 1,
      sym__entry_x_float,
  [9290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2011), 1,
      aux_sym__float_positive_token1,
    STATE(469), 1,
      sym__float_positive,
  [9300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2013), 1,
      aux_sym__float_positive_token1,
    STATE(470), 1,
      sym__float_positive,
  [9310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2015), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [9318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2017), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [9326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2019), 1,
      anon_sym_shader_file,
    ACTIONS(2021), 1,
      sym_assign_equal,
  [9336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2023), 1,
      anon_sym_shader_file,
    STATE(579), 1,
      sym__statement_gfx_meshsettings_shader_file,
  [9346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2025), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [9354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2027), 1,
      anon_sym_type,
    ACTIONS(2029), 1,
      sym_assign_equal,
  [9364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2031), 1,
      anon_sym_type,
    STATE(508), 1,
      sym__statement_gfx_animation_type,
  [9374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2033), 1,
      anon_sym_index,
    STATE(476), 1,
      sym__statement_gfx_meshsettings_index,
  [9384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1830), 1,
      anon_sym_y,
    STATE(560), 1,
      sym__entry_y_float,
  [9394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2035), 1,
      aux_sym__float_positive_token1,
    STATE(280), 1,
      sym__float_positive,
  [9404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2037), 1,
      anon_sym_RBRACE,
    ACTIONS(2039), 1,
      sym_assign_equal,
  [9414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2041), 1,
      anon_sym_LBRACE,
    STATE(410), 1,
      sym__bitmapfont_block,
  [9424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2043), 1,
      anon_sym_LBRACE,
    STATE(370), 1,
      sym__gfx_textblock,
  [9434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2045), 1,
      anon_sym_LBRACE,
    STATE(272), 1,
      sym__textcolors_block,
  [9444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2047), 1,
      aux_sym__float_positive_token1,
    STATE(369), 1,
      sym__float_positive,
  [9454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2049), 1,
      aux_sym__integer_positive_token1,
    STATE(368), 1,
      sym__integer_positive,
  [9464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2051), 1,
      aux_sym__integer_positive_token1,
    STATE(414), 1,
      sym__integer_positive,
  [9474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1821), 1,
      anon_sym_y,
    STATE(534), 1,
      sym__entry_y_integer,
  [9484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2053), 1,
      anon_sym_shader,
    STATE(425), 1,
      sym__statement_gfx_meshsettings_shader,
  [9494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2055), 2,
      anon_sym_RBRACE,
      anon_sym_windowType,
  [9502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2057), 1,
      aux_sym__float_positive_token1,
    STATE(120), 1,
      sym__float_positive,
  [9512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2059), 2,
      anon_sym_RBRACE,
      sym_string,
  [9520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2061), 1,
      anon_sym_LBRACE,
    STATE(218), 1,
      sym__spriteType_block,
  [9530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2063), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym__textSpriteType_block,
  [9540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2065), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym__corneredTileSpriteType_block,
  [9550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2067), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [9558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2069), 1,
      anon_sym_LBRACE,
    STATE(222), 1,
      sym__maskedShieldType_block,
  [9568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2071), 1,
      anon_sym_LBRACE,
    STATE(223), 1,
      sym__frameAnimatedSpriteType_block,
  [9578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2073), 1,
      aux_sym__integer_positive_token1,
    STATE(117), 1,
      sym__integer_positive,
  [9588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2075), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(2077), 1,
      aux_sym__statement_gfx_name_token2,
  [9598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2079), 1,
      anon_sym_LBRACE,
    STATE(224), 1,
      sym__progressbartype_block,
  [9608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2081), 1,
      anon_sym_LBRACE,
    STATE(225), 1,
      sym__PieChartType_block,
  [9618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2007), 1,
      aux_sym__float_positive_token1,
    STATE(78), 1,
      sym__float_positive,
  [9628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2083), 1,
      anon_sym_LBRACE,
    STATE(226), 1,
      sym__LineChartType_block,
  [9638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2085), 1,
      anon_sym_shader,
    ACTIONS(2087), 1,
      sym_assign_equal,
  [9648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2089), 1,
      aux_sym__float_positive_token1,
    STATE(141), 1,
      sym__float_positive,
  [9658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2091), 2,
      anon_sym_DQUOTEINGAME_DQUOTE,
      anon_sym_DQUOTEFRONTEND_DQUOTE,
  [9666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2093), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym__listBoxType_block,
  [9676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2095), 1,
      anon_sym_LBRACE,
    STATE(230), 1,
      sym__editBoxType_block,
  [9686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2097), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym__instantTextBoxType_block,
  [9696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_x,
    STATE(534), 1,
      sym__entry_x_integer,
  [9706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2099), 1,
      anon_sym_texture_specular,
    STATE(440), 1,
      sym__statement_gfx_meshsettings_texture_specular,
  [9716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2101), 1,
      aux_sym__orientation_value_token1,
    STATE(46), 1,
      sym__orientation_value,
  [9726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2103), 2,
      anon_sym_RBRACE,
      anon_sym_windowType,
  [9734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2105), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [9742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2107), 1,
      anon_sym_LBRACE,
    STATE(382), 1,
      sym__spriteTypes_block,
  [9752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2109), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym__gfx_animation_block,
  [9762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2111), 1,
      aux_sym__float_positive_token1,
    STATE(514), 1,
      sym__float_positive,
  [9772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2113), 1,
      aux_sym__float_positive_token1,
    STATE(515), 1,
      sym__float_positive,
  [9782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2115), 1,
      anon_sym_LBRACE,
    STATE(384), 1,
      sym__objectTypes_block,
  [9792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2117), 1,
      anon_sym_LBRACE,
    STATE(441), 1,
      sym__windowType_block,
  [9802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2119), 1,
      anon_sym_LBRACE,
    STATE(190), 1,
      sym__mod_dependencies_block,
  [9812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2121), 1,
      anon_sym_RBRACE,
    ACTIONS(2123), 1,
      sym_assign_equal,
  [9822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2125), 1,
      anon_sym_texture_diffuse,
    ACTIONS(2127), 1,
      sym_assign_equal,
  [9832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2129), 1,
      anon_sym_texture_diffuse,
    STATE(501), 1,
      sym__statement_gfx_meshsettings_texture_diffuse,
  [9842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2131), 1,
      anon_sym_texture_specular,
    ACTIONS(2133), 1,
      sym_assign_equal,
  [9852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2135), 1,
      aux_sym__integer_positive_token1,
    STATE(214), 1,
      sym__integer_positive,
  [9862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2137), 1,
      aux_sym__float_positive_token1,
    STATE(593), 1,
      sym__float_positive,
  [9872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2139), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym__mod_tags_block,
  [9882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_name,
    STATE(429), 1,
      sym__statement_gfx_name,
  [9892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2141), 1,
      aux_sym__integer_positive_token1,
    STATE(29), 1,
      sym__integer_positive,
  [9902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2143), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(166), 1,
      sym__mod_replace_path_folder,
  [9912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2145), 1,
      aux_sym__integer_positive_token1,
    STATE(246), 1,
      sym__integer_positive,
  [9922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2147), 1,
      aux_sym__integer_positive_token1,
    STATE(247), 1,
      sym__integer_positive,
  [9932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2149), 1,
      anon_sym_LBRACE,
    STATE(340), 1,
      sym__pdxmesh_block,
  [9942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2151), 1,
      aux_sym__integer_positive_token1,
    STATE(30), 1,
      sym__integer_positive,
  [9952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2153), 1,
      aux_sym__integer_positive_token1,
    STATE(21), 1,
      sym__integer_positive,
  [9962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2155), 1,
      anon_sym_LBRACE,
    STATE(447), 1,
      sym__guiTypes_block,
  [9972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2157), 1,
      anon_sym_LBRACE,
    STATE(376), 1,
      sym__bitmapfonts_block,
  [9982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2159), 1,
      anon_sym_id,
    STATE(428), 1,
      sym__statement_gfx_animation_id,
  [9992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2161), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [10000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2163), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [10008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2165), 1,
      aux_sym__float_positive_token1,
    STATE(479), 1,
      sym__float_positive,
  [10018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2167), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(2169), 1,
      aux_sym__statement_gfx_name_token2,
  [10028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2171), 2,
      anon_sym_RBRACE,
      anon_sym_windowType,
  [10036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2173), 1,
      anon_sym_LBRACE,
    STATE(324), 1,
      sym__pdxparticle_block,
  [10046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2175), 1,
      anon_sym_LBRACE,
    STATE(341), 1,
      sym__arrowType_block,
  [10056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2177), 1,
      aux_sym__integer_positive_token1,
    STATE(550), 1,
      sym__integer_positive,
  [10066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2179), 1,
      anon_sym_texture_normal,
    ACTIONS(2181), 1,
      sym_assign_equal,
  [10076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2183), 1,
      anon_sym_texture_normal,
    STATE(463), 1,
      sym__statement_gfx_meshsettings_texture_normal,
  [10086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2185), 1,
      aux_sym__float_positive_token1,
    STATE(421), 1,
      sym__float_positive,
  [10096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2187), 1,
      aux_sym__float_positive_token1,
    STATE(494), 1,
      sym__float_positive,
  [10106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2189), 1,
      aux_sym__float_positive_token1,
    STATE(420), 1,
      sym__float_positive,
  [10116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2191), 1,
      anon_sym_LBRACE,
    STATE(322), 1,
      sym__tradeRouteType_block,
  [10126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2193), 1,
      aux_sym__statement_gfx_file_token1,
  [10133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2195), 1,
      sym_string,
  [10140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2197), 1,
      anon_sym_RBRACE,
  [10147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2199), 1,
      sym_string,
  [10154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2201), 1,
      anon_sym_LBRACE,
  [10161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2203), 1,
      sym_string,
  [10168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2205), 1,
      sym_string,
  [10175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2207), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [10182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2209), 1,
      anon_sym_RBRACE,
  [10189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2211), 1,
      anon_sym_RBRACE,
  [10196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2213), 1,
      anon_sym_LBRACE,
  [10203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2215), 1,
      sym_byte,
  [10210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2217), 1,
      anon_sym_LBRACE,
  [10217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2219), 1,
      sym_string,
  [10224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2221), 1,
      anon_sym_type,
  [10231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2223), 1,
      sym_string,
  [10238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2225), 1,
      sym_string,
  [10245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2227), 1,
      anon_sym_centre,
  [10252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2229), 1,
      sym_string,
  [10259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2231), 1,
      aux_sym__statement_mod_supported_version_token1,
  [10266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2233), 1,
      anon_sym_RBRACE,
  [10273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2235), 1,
      aux_sym__statement_mod_picture_token1,
  [10280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2237), 1,
      aux_sym__statement_mod_version_token1,
  [10287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2239), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [10294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2241), 1,
      aux_sym__statement_mod_archive_token1,
  [10301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2243), 1,
      sym_string,
  [10308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2245), 1,
      sym_byte,
  [10315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2247), 1,
      sym_string,
  [10322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2249), 1,
      anon_sym_RBRACE,
  [10329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2251), 1,
      sym_integer,
  [10336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2253), 1,
      sym_integer,
  [10343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2255), 1,
      anon_sym_LBRACE,
  [10350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2257), 1,
      anon_sym_LBRACE,
  [10357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2259), 1,
      sym_angle,
  [10364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2261), 1,
      aux_sym__animation_entry_dds_token1,
  [10371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2263), 1,
      anon_sym_RBRACE,
  [10378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2265), 1,
      anon_sym_RBRACE,
  [10385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2267), 1,
      anon_sym_RBRACE,
  [10392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2269), 1,
      sym_byte,
  [10399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2271), 1,
      anon_sym_RBRACE,
  [10406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2273), 1,
      anon_sym_RBRACE,
  [10413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2275), 1,
      anon_sym_LBRACE,
  [10420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2277), 1,
      anon_sym_RBRACE,
  [10427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2279), 1,
      anon_sym_RBRACE,
  [10434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2281), 1,
      anon_sym_texture_diffuse,
  [10441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2283), 1,
      aux_sym__animation_entry_dds_token1,
  [10448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2285), 1,
      sym_integer,
  [10455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2287), 1,
      sym_integer,
  [10462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2289), 1,
      ts_builtin_sym_end,
  [10469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2291), 1,
      anon_sym_RBRACE,
  [10476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2293), 1,
      anon_sym_RBRACE,
  [10483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2295), 1,
      sym_float,
  [10490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2297), 1,
      sym_float,
  [10497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2299), 1,
      ts_builtin_sym_end,
  [10504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2301), 1,
      anon_sym_RBRACE,
  [10511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2303), 1,
      sym_string,
  [10518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2305), 1,
      anon_sym_LBRACE,
  [10525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2307), 1,
      anon_sym_LBRACE,
  [10532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2309), 1,
      anon_sym_texture_normal,
  [10539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2311), 1,
      aux_sym__animation_entry_dds_token1,
  [10546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2313), 1,
      sym_hexadecimal,
  [10553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2315), 1,
      sym_hexadecimal,
  [10560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2317), 1,
      sym_string,
  [10567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2319), 1,
      anon_sym_LBRACE,
  [10574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2321), 1,
      aux_sym__statement_gfx_effect_token1,
  [10581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2323), 1,
      aux_sym__animation_entry_dds_token1,
  [10588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2325), 1,
      anon_sym_texture_specular,
  [10595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2327), 1,
      aux_sym__animation_entry_dds_token1,
  [10602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2329), 1,
      aux_sym__animation_entry_dds_token1,
  [10609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2331), 1,
      aux_sym__animation_entry_dds_token1,
  [10616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2333), 1,
      anon_sym_shader,
  [10623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2335), 1,
      aux_sym__statement_gfx_meshsettings_shader_token1,
  [10630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2337), 1,
      sym_string,
  [10637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2339), 1,
      anon_sym_RBRACE,
  [10644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2341), 1,
      anon_sym_shader_file,
  [10651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2343), 1,
      aux_sym__statement_gfx_meshsettings_shader_file_token1,
  [10658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2345), 1,
      anon_sym_LBRACE,
  [10665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2347), 1,
      anon_sym_RBRACE,
  [10672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2349), 1,
      anon_sym_LBRACE,
  [10679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2351), 1,
      anon_sym_RBRACE,
  [10686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2353), 1,
      anon_sym_LBRACE,
  [10693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2355), 1,
      anon_sym_LBRACE,
  [10700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2357), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [10707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2359), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [10714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2361), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [10721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2363), 1,
      anon_sym_LBRACE,
  [10728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2365), 1,
      anon_sym_RBRACE,
  [10735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2367), 1,
      anon_sym_RBRACE,
  [10742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2369), 1,
      anon_sym_LBRACE,
  [10749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2371), 1,
      aux_sym__statement_gfx_alphamaskfile_token1,
  [10756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2373), 1,
      anon_sym_click,
  [10763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2375), 1,
      anon_sym_LBRACE,
  [10770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2377), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [10777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2379), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [10784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2381), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 101,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 256,
  [SMALL_STATE(8)] = 328,
  [SMALL_STATE(9)] = 400,
  [SMALL_STATE(10)] = 439,
  [SMALL_STATE(11)] = 503,
  [SMALL_STATE(12)] = 539,
  [SMALL_STATE(13)] = 603,
  [SMALL_STATE(14)] = 667,
  [SMALL_STATE(15)] = 705,
  [SMALL_STATE(16)] = 742,
  [SMALL_STATE(17)] = 777,
  [SMALL_STATE(18)] = 811,
  [SMALL_STATE(19)] = 847,
  [SMALL_STATE(20)] = 882,
  [SMALL_STATE(21)] = 917,
  [SMALL_STATE(22)] = 950,
  [SMALL_STATE(23)] = 985,
  [SMALL_STATE(24)] = 1019,
  [SMALL_STATE(25)] = 1053,
  [SMALL_STATE(26)] = 1087,
  [SMALL_STATE(27)] = 1120,
  [SMALL_STATE(28)] = 1153,
  [SMALL_STATE(29)] = 1184,
  [SMALL_STATE(30)] = 1215,
  [SMALL_STATE(31)] = 1246,
  [SMALL_STATE(32)] = 1279,
  [SMALL_STATE(33)] = 1331,
  [SMALL_STATE(34)] = 1383,
  [SMALL_STATE(35)] = 1435,
  [SMALL_STATE(36)] = 1485,
  [SMALL_STATE(37)] = 1537,
  [SMALL_STATE(38)] = 1567,
  [SMALL_STATE(39)] = 1619,
  [SMALL_STATE(40)] = 1667,
  [SMALL_STATE(41)] = 1715,
  [SMALL_STATE(42)] = 1745,
  [SMALL_STATE(43)] = 1795,
  [SMALL_STATE(44)] = 1847,
  [SMALL_STATE(45)] = 1895,
  [SMALL_STATE(46)] = 1947,
  [SMALL_STATE(47)] = 1977,
  [SMALL_STATE(48)] = 2029,
  [SMALL_STATE(49)] = 2081,
  [SMALL_STATE(50)] = 2126,
  [SMALL_STATE(51)] = 2171,
  [SMALL_STATE(52)] = 2216,
  [SMALL_STATE(53)] = 2264,
  [SMALL_STATE(54)] = 2312,
  [SMALL_STATE(55)] = 2342,
  [SMALL_STATE(56)] = 2390,
  [SMALL_STATE(57)] = 2438,
  [SMALL_STATE(58)] = 2486,
  [SMALL_STATE(59)] = 2534,
  [SMALL_STATE(60)] = 2582,
  [SMALL_STATE(61)] = 2630,
  [SMALL_STATE(62)] = 2678,
  [SMALL_STATE(63)] = 2726,
  [SMALL_STATE(64)] = 2774,
  [SMALL_STATE(65)] = 2822,
  [SMALL_STATE(66)] = 2870,
  [SMALL_STATE(67)] = 2918,
  [SMALL_STATE(68)] = 2966,
  [SMALL_STATE(69)] = 2993,
  [SMALL_STATE(70)] = 3022,
  [SMALL_STATE(71)] = 3049,
  [SMALL_STATE(72)] = 3076,
  [SMALL_STATE(73)] = 3105,
  [SMALL_STATE(74)] = 3131,
  [SMALL_STATE(75)] = 3159,
  [SMALL_STATE(76)] = 3183,
  [SMALL_STATE(77)] = 3209,
  [SMALL_STATE(78)] = 3233,
  [SMALL_STATE(79)] = 3258,
  [SMALL_STATE(80)] = 3283,
  [SMALL_STATE(81)] = 3308,
  [SMALL_STATE(82)] = 3333,
  [SMALL_STATE(83)] = 3358,
  [SMALL_STATE(84)] = 3383,
  [SMALL_STATE(85)] = 3408,
  [SMALL_STATE(86)] = 3446,
  [SMALL_STATE(87)] = 3484,
  [SMALL_STATE(88)] = 3524,
  [SMALL_STATE(89)] = 3546,
  [SMALL_STATE(90)] = 3568,
  [SMALL_STATE(91)] = 3594,
  [SMALL_STATE(92)] = 3616,
  [SMALL_STATE(93)] = 3638,
  [SMALL_STATE(94)] = 3678,
  [SMALL_STATE(95)] = 3700,
  [SMALL_STATE(96)] = 3722,
  [SMALL_STATE(97)] = 3762,
  [SMALL_STATE(98)] = 3784,
  [SMALL_STATE(99)] = 3822,
  [SMALL_STATE(100)] = 3844,
  [SMALL_STATE(101)] = 3867,
  [SMALL_STATE(102)] = 3890,
  [SMALL_STATE(103)] = 3915,
  [SMALL_STATE(104)] = 3940,
  [SMALL_STATE(105)] = 3965,
  [SMALL_STATE(106)] = 3988,
  [SMALL_STATE(107)] = 4011,
  [SMALL_STATE(108)] = 4034,
  [SMALL_STATE(109)] = 4061,
  [SMALL_STATE(110)] = 4086,
  [SMALL_STATE(111)] = 4111,
  [SMALL_STATE(112)] = 4131,
  [SMALL_STATE(113)] = 4153,
  [SMALL_STATE(114)] = 4173,
  [SMALL_STATE(115)] = 4195,
  [SMALL_STATE(116)] = 4231,
  [SMALL_STATE(117)] = 4267,
  [SMALL_STATE(118)] = 4287,
  [SMALL_STATE(119)] = 4323,
  [SMALL_STATE(120)] = 4343,
  [SMALL_STATE(121)] = 4363,
  [SMALL_STATE(122)] = 4399,
  [SMALL_STATE(123)] = 4435,
  [SMALL_STATE(124)] = 4471,
  [SMALL_STATE(125)] = 4493,
  [SMALL_STATE(126)] = 4517,
  [SMALL_STATE(127)] = 4540,
  [SMALL_STATE(128)] = 4563,
  [SMALL_STATE(129)] = 4586,
  [SMALL_STATE(130)] = 4605,
  [SMALL_STATE(131)] = 4628,
  [SMALL_STATE(132)] = 4649,
  [SMALL_STATE(133)] = 4672,
  [SMALL_STATE(134)] = 4695,
  [SMALL_STATE(135)] = 4716,
  [SMALL_STATE(136)] = 4747,
  [SMALL_STATE(137)] = 4778,
  [SMALL_STATE(138)] = 4801,
  [SMALL_STATE(139)] = 4824,
  [SMALL_STATE(140)] = 4855,
  [SMALL_STATE(141)] = 4875,
  [SMALL_STATE(142)] = 4895,
  [SMALL_STATE(143)] = 4917,
  [SMALL_STATE(144)] = 4949,
  [SMALL_STATE(145)] = 4981,
  [SMALL_STATE(146)] = 5001,
  [SMALL_STATE(147)] = 5021,
  [SMALL_STATE(148)] = 5041,
  [SMALL_STATE(149)] = 5061,
  [SMALL_STATE(150)] = 5081,
  [SMALL_STATE(151)] = 5101,
  [SMALL_STATE(152)] = 5123,
  [SMALL_STATE(153)] = 5155,
  [SMALL_STATE(154)] = 5177,
  [SMALL_STATE(155)] = 5197,
  [SMALL_STATE(156)] = 5217,
  [SMALL_STATE(157)] = 5237,
  [SMALL_STATE(158)] = 5257,
  [SMALL_STATE(159)] = 5279,
  [SMALL_STATE(160)] = 5299,
  [SMALL_STATE(161)] = 5319,
  [SMALL_STATE(162)] = 5339,
  [SMALL_STATE(163)] = 5359,
  [SMALL_STATE(164)] = 5379,
  [SMALL_STATE(165)] = 5399,
  [SMALL_STATE(166)] = 5416,
  [SMALL_STATE(167)] = 5433,
  [SMALL_STATE(168)] = 5450,
  [SMALL_STATE(169)] = 5467,
  [SMALL_STATE(170)] = 5486,
  [SMALL_STATE(171)] = 5505,
  [SMALL_STATE(172)] = 5524,
  [SMALL_STATE(173)] = 5541,
  [SMALL_STATE(174)] = 5558,
  [SMALL_STATE(175)] = 5577,
  [SMALL_STATE(176)] = 5594,
  [SMALL_STATE(177)] = 5611,
  [SMALL_STATE(178)] = 5630,
  [SMALL_STATE(179)] = 5647,
  [SMALL_STATE(180)] = 5666,
  [SMALL_STATE(181)] = 5685,
  [SMALL_STATE(182)] = 5704,
  [SMALL_STATE(183)] = 5723,
  [SMALL_STATE(184)] = 5742,
  [SMALL_STATE(185)] = 5759,
  [SMALL_STATE(186)] = 5776,
  [SMALL_STATE(187)] = 5793,
  [SMALL_STATE(188)] = 5810,
  [SMALL_STATE(189)] = 5827,
  [SMALL_STATE(190)] = 5846,
  [SMALL_STATE(191)] = 5863,
  [SMALL_STATE(192)] = 5884,
  [SMALL_STATE(193)] = 5905,
  [SMALL_STATE(194)] = 5926,
  [SMALL_STATE(195)] = 5945,
  [SMALL_STATE(196)] = 5964,
  [SMALL_STATE(197)] = 5983,
  [SMALL_STATE(198)] = 6002,
  [SMALL_STATE(199)] = 6023,
  [SMALL_STATE(200)] = 6042,
  [SMALL_STATE(201)] = 6061,
  [SMALL_STATE(202)] = 6078,
  [SMALL_STATE(203)] = 6097,
  [SMALL_STATE(204)] = 6116,
  [SMALL_STATE(205)] = 6135,
  [SMALL_STATE(206)] = 6154,
  [SMALL_STATE(207)] = 6173,
  [SMALL_STATE(208)] = 6192,
  [SMALL_STATE(209)] = 6211,
  [SMALL_STATE(210)] = 6227,
  [SMALL_STATE(211)] = 6243,
  [SMALL_STATE(212)] = 6259,
  [SMALL_STATE(213)] = 6277,
  [SMALL_STATE(214)] = 6293,
  [SMALL_STATE(215)] = 6309,
  [SMALL_STATE(216)] = 6325,
  [SMALL_STATE(217)] = 6343,
  [SMALL_STATE(218)] = 6359,
  [SMALL_STATE(219)] = 6375,
  [SMALL_STATE(220)] = 6391,
  [SMALL_STATE(221)] = 6407,
  [SMALL_STATE(222)] = 6423,
  [SMALL_STATE(223)] = 6439,
  [SMALL_STATE(224)] = 6455,
  [SMALL_STATE(225)] = 6471,
  [SMALL_STATE(226)] = 6487,
  [SMALL_STATE(227)] = 6503,
  [SMALL_STATE(228)] = 6521,
  [SMALL_STATE(229)] = 6539,
  [SMALL_STATE(230)] = 6555,
  [SMALL_STATE(231)] = 6571,
  [SMALL_STATE(232)] = 6589,
  [SMALL_STATE(233)] = 6605,
  [SMALL_STATE(234)] = 6621,
  [SMALL_STATE(235)] = 6637,
  [SMALL_STATE(236)] = 6653,
  [SMALL_STATE(237)] = 6669,
  [SMALL_STATE(238)] = 6685,
  [SMALL_STATE(239)] = 6703,
  [SMALL_STATE(240)] = 6719,
  [SMALL_STATE(241)] = 6735,
  [SMALL_STATE(242)] = 6751,
  [SMALL_STATE(243)] = 6767,
  [SMALL_STATE(244)] = 6783,
  [SMALL_STATE(245)] = 6799,
  [SMALL_STATE(246)] = 6815,
  [SMALL_STATE(247)] = 6831,
  [SMALL_STATE(248)] = 6847,
  [SMALL_STATE(249)] = 6863,
  [SMALL_STATE(250)] = 6879,
  [SMALL_STATE(251)] = 6895,
  [SMALL_STATE(252)] = 6911,
  [SMALL_STATE(253)] = 6927,
  [SMALL_STATE(254)] = 6943,
  [SMALL_STATE(255)] = 6959,
  [SMALL_STATE(256)] = 6975,
  [SMALL_STATE(257)] = 6991,
  [SMALL_STATE(258)] = 7007,
  [SMALL_STATE(259)] = 7023,
  [SMALL_STATE(260)] = 7039,
  [SMALL_STATE(261)] = 7055,
  [SMALL_STATE(262)] = 7070,
  [SMALL_STATE(263)] = 7087,
  [SMALL_STATE(264)] = 7102,
  [SMALL_STATE(265)] = 7119,
  [SMALL_STATE(266)] = 7136,
  [SMALL_STATE(267)] = 7153,
  [SMALL_STATE(268)] = 7170,
  [SMALL_STATE(269)] = 7187,
  [SMALL_STATE(270)] = 7204,
  [SMALL_STATE(271)] = 7221,
  [SMALL_STATE(272)] = 7238,
  [SMALL_STATE(273)] = 7253,
  [SMALL_STATE(274)] = 7270,
  [SMALL_STATE(275)] = 7287,
  [SMALL_STATE(276)] = 7304,
  [SMALL_STATE(277)] = 7321,
  [SMALL_STATE(278)] = 7335,
  [SMALL_STATE(279)] = 7359,
  [SMALL_STATE(280)] = 7381,
  [SMALL_STATE(281)] = 7395,
  [SMALL_STATE(282)] = 7409,
  [SMALL_STATE(283)] = 7433,
  [SMALL_STATE(284)] = 7447,
  [SMALL_STATE(285)] = 7461,
  [SMALL_STATE(286)] = 7475,
  [SMALL_STATE(287)] = 7489,
  [SMALL_STATE(288)] = 7513,
  [SMALL_STATE(289)] = 7527,
  [SMALL_STATE(290)] = 7541,
  [SMALL_STATE(291)] = 7555,
  [SMALL_STATE(292)] = 7571,
  [SMALL_STATE(293)] = 7595,
  [SMALL_STATE(294)] = 7617,
  [SMALL_STATE(295)] = 7631,
  [SMALL_STATE(296)] = 7655,
  [SMALL_STATE(297)] = 7671,
  [SMALL_STATE(298)] = 7695,
  [SMALL_STATE(299)] = 7709,
  [SMALL_STATE(300)] = 7733,
  [SMALL_STATE(301)] = 7749,
  [SMALL_STATE(302)] = 7773,
  [SMALL_STATE(303)] = 7787,
  [SMALL_STATE(304)] = 7811,
  [SMALL_STATE(305)] = 7826,
  [SMALL_STATE(306)] = 7847,
  [SMALL_STATE(307)] = 7862,
  [SMALL_STATE(308)] = 7877,
  [SMALL_STATE(309)] = 7890,
  [SMALL_STATE(310)] = 7911,
  [SMALL_STATE(311)] = 7926,
  [SMALL_STATE(312)] = 7941,
  [SMALL_STATE(313)] = 7956,
  [SMALL_STATE(314)] = 7971,
  [SMALL_STATE(315)] = 7986,
  [SMALL_STATE(316)] = 8001,
  [SMALL_STATE(317)] = 8014,
  [SMALL_STATE(318)] = 8027,
  [SMALL_STATE(319)] = 8040,
  [SMALL_STATE(320)] = 8061,
  [SMALL_STATE(321)] = 8073,
  [SMALL_STATE(322)] = 8085,
  [SMALL_STATE(323)] = 8097,
  [SMALL_STATE(324)] = 8109,
  [SMALL_STATE(325)] = 8121,
  [SMALL_STATE(326)] = 8133,
  [SMALL_STATE(327)] = 8145,
  [SMALL_STATE(328)] = 8165,
  [SMALL_STATE(329)] = 8177,
  [SMALL_STATE(330)] = 8197,
  [SMALL_STATE(331)] = 8209,
  [SMALL_STATE(332)] = 8221,
  [SMALL_STATE(333)] = 8233,
  [SMALL_STATE(334)] = 8253,
  [SMALL_STATE(335)] = 8265,
  [SMALL_STATE(336)] = 8277,
  [SMALL_STATE(337)] = 8289,
  [SMALL_STATE(338)] = 8301,
  [SMALL_STATE(339)] = 8313,
  [SMALL_STATE(340)] = 8325,
  [SMALL_STATE(341)] = 8337,
  [SMALL_STATE(342)] = 8349,
  [SMALL_STATE(343)] = 8368,
  [SMALL_STATE(344)] = 8383,
  [SMALL_STATE(345)] = 8402,
  [SMALL_STATE(346)] = 8417,
  [SMALL_STATE(347)] = 8430,
  [SMALL_STATE(348)] = 8449,
  [SMALL_STATE(349)] = 8462,
  [SMALL_STATE(350)] = 8475,
  [SMALL_STATE(351)] = 8488,
  [SMALL_STATE(352)] = 8507,
  [SMALL_STATE(353)] = 8526,
  [SMALL_STATE(354)] = 8541,
  [SMALL_STATE(355)] = 8554,
  [SMALL_STATE(356)] = 8569,
  [SMALL_STATE(357)] = 8584,
  [SMALL_STATE(358)] = 8603,
  [SMALL_STATE(359)] = 8622,
  [SMALL_STATE(360)] = 8641,
  [SMALL_STATE(361)] = 8654,
  [SMALL_STATE(362)] = 8673,
  [SMALL_STATE(363)] = 8686,
  [SMALL_STATE(364)] = 8698,
  [SMALL_STATE(365)] = 8710,
  [SMALL_STATE(366)] = 8720,
  [SMALL_STATE(367)] = 8730,
  [SMALL_STATE(368)] = 8740,
  [SMALL_STATE(369)] = 8750,
  [SMALL_STATE(370)] = 8760,
  [SMALL_STATE(371)] = 8770,
  [SMALL_STATE(372)] = 8780,
  [SMALL_STATE(373)] = 8790,
  [SMALL_STATE(374)] = 8804,
  [SMALL_STATE(375)] = 8814,
  [SMALL_STATE(376)] = 8824,
  [SMALL_STATE(377)] = 8834,
  [SMALL_STATE(378)] = 8848,
  [SMALL_STATE(379)] = 8858,
  [SMALL_STATE(380)] = 8868,
  [SMALL_STATE(381)] = 8878,
  [SMALL_STATE(382)] = 8888,
  [SMALL_STATE(383)] = 8898,
  [SMALL_STATE(384)] = 8908,
  [SMALL_STATE(385)] = 8918,
  [SMALL_STATE(386)] = 8929,
  [SMALL_STATE(387)] = 8940,
  [SMALL_STATE(388)] = 8951,
  [SMALL_STATE(389)] = 8962,
  [SMALL_STATE(390)] = 8975,
  [SMALL_STATE(391)] = 8986,
  [SMALL_STATE(392)] = 8997,
  [SMALL_STATE(393)] = 9008,
  [SMALL_STATE(394)] = 9019,
  [SMALL_STATE(395)] = 9028,
  [SMALL_STATE(396)] = 9037,
  [SMALL_STATE(397)] = 9048,
  [SMALL_STATE(398)] = 9057,
  [SMALL_STATE(399)] = 9068,
  [SMALL_STATE(400)] = 9079,
  [SMALL_STATE(401)] = 9090,
  [SMALL_STATE(402)] = 9101,
  [SMALL_STATE(403)] = 9112,
  [SMALL_STATE(404)] = 9123,
  [SMALL_STATE(405)] = 9134,
  [SMALL_STATE(406)] = 9147,
  [SMALL_STATE(407)] = 9158,
  [SMALL_STATE(408)] = 9169,
  [SMALL_STATE(409)] = 9182,
  [SMALL_STATE(410)] = 9193,
  [SMALL_STATE(411)] = 9202,
  [SMALL_STATE(412)] = 9213,
  [SMALL_STATE(413)] = 9224,
  [SMALL_STATE(414)] = 9233,
  [SMALL_STATE(415)] = 9242,
  [SMALL_STATE(416)] = 9251,
  [SMALL_STATE(417)] = 9260,
  [SMALL_STATE(418)] = 9270,
  [SMALL_STATE(419)] = 9280,
  [SMALL_STATE(420)] = 9290,
  [SMALL_STATE(421)] = 9300,
  [SMALL_STATE(422)] = 9310,
  [SMALL_STATE(423)] = 9318,
  [SMALL_STATE(424)] = 9326,
  [SMALL_STATE(425)] = 9336,
  [SMALL_STATE(426)] = 9346,
  [SMALL_STATE(427)] = 9354,
  [SMALL_STATE(428)] = 9364,
  [SMALL_STATE(429)] = 9374,
  [SMALL_STATE(430)] = 9384,
  [SMALL_STATE(431)] = 9394,
  [SMALL_STATE(432)] = 9404,
  [SMALL_STATE(433)] = 9414,
  [SMALL_STATE(434)] = 9424,
  [SMALL_STATE(435)] = 9434,
  [SMALL_STATE(436)] = 9444,
  [SMALL_STATE(437)] = 9454,
  [SMALL_STATE(438)] = 9464,
  [SMALL_STATE(439)] = 9474,
  [SMALL_STATE(440)] = 9484,
  [SMALL_STATE(441)] = 9494,
  [SMALL_STATE(442)] = 9502,
  [SMALL_STATE(443)] = 9512,
  [SMALL_STATE(444)] = 9520,
  [SMALL_STATE(445)] = 9530,
  [SMALL_STATE(446)] = 9540,
  [SMALL_STATE(447)] = 9550,
  [SMALL_STATE(448)] = 9558,
  [SMALL_STATE(449)] = 9568,
  [SMALL_STATE(450)] = 9578,
  [SMALL_STATE(451)] = 9588,
  [SMALL_STATE(452)] = 9598,
  [SMALL_STATE(453)] = 9608,
  [SMALL_STATE(454)] = 9618,
  [SMALL_STATE(455)] = 9628,
  [SMALL_STATE(456)] = 9638,
  [SMALL_STATE(457)] = 9648,
  [SMALL_STATE(458)] = 9658,
  [SMALL_STATE(459)] = 9666,
  [SMALL_STATE(460)] = 9676,
  [SMALL_STATE(461)] = 9686,
  [SMALL_STATE(462)] = 9696,
  [SMALL_STATE(463)] = 9706,
  [SMALL_STATE(464)] = 9716,
  [SMALL_STATE(465)] = 9726,
  [SMALL_STATE(466)] = 9734,
  [SMALL_STATE(467)] = 9742,
  [SMALL_STATE(468)] = 9752,
  [SMALL_STATE(469)] = 9762,
  [SMALL_STATE(470)] = 9772,
  [SMALL_STATE(471)] = 9782,
  [SMALL_STATE(472)] = 9792,
  [SMALL_STATE(473)] = 9802,
  [SMALL_STATE(474)] = 9812,
  [SMALL_STATE(475)] = 9822,
  [SMALL_STATE(476)] = 9832,
  [SMALL_STATE(477)] = 9842,
  [SMALL_STATE(478)] = 9852,
  [SMALL_STATE(479)] = 9862,
  [SMALL_STATE(480)] = 9872,
  [SMALL_STATE(481)] = 9882,
  [SMALL_STATE(482)] = 9892,
  [SMALL_STATE(483)] = 9902,
  [SMALL_STATE(484)] = 9912,
  [SMALL_STATE(485)] = 9922,
  [SMALL_STATE(486)] = 9932,
  [SMALL_STATE(487)] = 9942,
  [SMALL_STATE(488)] = 9952,
  [SMALL_STATE(489)] = 9962,
  [SMALL_STATE(490)] = 9972,
  [SMALL_STATE(491)] = 9982,
  [SMALL_STATE(492)] = 9992,
  [SMALL_STATE(493)] = 10000,
  [SMALL_STATE(494)] = 10008,
  [SMALL_STATE(495)] = 10018,
  [SMALL_STATE(496)] = 10028,
  [SMALL_STATE(497)] = 10036,
  [SMALL_STATE(498)] = 10046,
  [SMALL_STATE(499)] = 10056,
  [SMALL_STATE(500)] = 10066,
  [SMALL_STATE(501)] = 10076,
  [SMALL_STATE(502)] = 10086,
  [SMALL_STATE(503)] = 10096,
  [SMALL_STATE(504)] = 10106,
  [SMALL_STATE(505)] = 10116,
  [SMALL_STATE(506)] = 10126,
  [SMALL_STATE(507)] = 10133,
  [SMALL_STATE(508)] = 10140,
  [SMALL_STATE(509)] = 10147,
  [SMALL_STATE(510)] = 10154,
  [SMALL_STATE(511)] = 10161,
  [SMALL_STATE(512)] = 10168,
  [SMALL_STATE(513)] = 10175,
  [SMALL_STATE(514)] = 10182,
  [SMALL_STATE(515)] = 10189,
  [SMALL_STATE(516)] = 10196,
  [SMALL_STATE(517)] = 10203,
  [SMALL_STATE(518)] = 10210,
  [SMALL_STATE(519)] = 10217,
  [SMALL_STATE(520)] = 10224,
  [SMALL_STATE(521)] = 10231,
  [SMALL_STATE(522)] = 10238,
  [SMALL_STATE(523)] = 10245,
  [SMALL_STATE(524)] = 10252,
  [SMALL_STATE(525)] = 10259,
  [SMALL_STATE(526)] = 10266,
  [SMALL_STATE(527)] = 10273,
  [SMALL_STATE(528)] = 10280,
  [SMALL_STATE(529)] = 10287,
  [SMALL_STATE(530)] = 10294,
  [SMALL_STATE(531)] = 10301,
  [SMALL_STATE(532)] = 10308,
  [SMALL_STATE(533)] = 10315,
  [SMALL_STATE(534)] = 10322,
  [SMALL_STATE(535)] = 10329,
  [SMALL_STATE(536)] = 10336,
  [SMALL_STATE(537)] = 10343,
  [SMALL_STATE(538)] = 10350,
  [SMALL_STATE(539)] = 10357,
  [SMALL_STATE(540)] = 10364,
  [SMALL_STATE(541)] = 10371,
  [SMALL_STATE(542)] = 10378,
  [SMALL_STATE(543)] = 10385,
  [SMALL_STATE(544)] = 10392,
  [SMALL_STATE(545)] = 10399,
  [SMALL_STATE(546)] = 10406,
  [SMALL_STATE(547)] = 10413,
  [SMALL_STATE(548)] = 10420,
  [SMALL_STATE(549)] = 10427,
  [SMALL_STATE(550)] = 10434,
  [SMALL_STATE(551)] = 10441,
  [SMALL_STATE(552)] = 10448,
  [SMALL_STATE(553)] = 10455,
  [SMALL_STATE(554)] = 10462,
  [SMALL_STATE(555)] = 10469,
  [SMALL_STATE(556)] = 10476,
  [SMALL_STATE(557)] = 10483,
  [SMALL_STATE(558)] = 10490,
  [SMALL_STATE(559)] = 10497,
  [SMALL_STATE(560)] = 10504,
  [SMALL_STATE(561)] = 10511,
  [SMALL_STATE(562)] = 10518,
  [SMALL_STATE(563)] = 10525,
  [SMALL_STATE(564)] = 10532,
  [SMALL_STATE(565)] = 10539,
  [SMALL_STATE(566)] = 10546,
  [SMALL_STATE(567)] = 10553,
  [SMALL_STATE(568)] = 10560,
  [SMALL_STATE(569)] = 10567,
  [SMALL_STATE(570)] = 10574,
  [SMALL_STATE(571)] = 10581,
  [SMALL_STATE(572)] = 10588,
  [SMALL_STATE(573)] = 10595,
  [SMALL_STATE(574)] = 10602,
  [SMALL_STATE(575)] = 10609,
  [SMALL_STATE(576)] = 10616,
  [SMALL_STATE(577)] = 10623,
  [SMALL_STATE(578)] = 10630,
  [SMALL_STATE(579)] = 10637,
  [SMALL_STATE(580)] = 10644,
  [SMALL_STATE(581)] = 10651,
  [SMALL_STATE(582)] = 10658,
  [SMALL_STATE(583)] = 10665,
  [SMALL_STATE(584)] = 10672,
  [SMALL_STATE(585)] = 10679,
  [SMALL_STATE(586)] = 10686,
  [SMALL_STATE(587)] = 10693,
  [SMALL_STATE(588)] = 10700,
  [SMALL_STATE(589)] = 10707,
  [SMALL_STATE(590)] = 10714,
  [SMALL_STATE(591)] = 10721,
  [SMALL_STATE(592)] = 10728,
  [SMALL_STATE(593)] = 10735,
  [SMALL_STATE(594)] = 10742,
  [SMALL_STATE(595)] = 10749,
  [SMALL_STATE(596)] = 10756,
  [SMALL_STATE(597)] = 10763,
  [SMALL_STATE(598)] = 10770,
  [SMALL_STATE(599)] = 10777,
  [SMALL_STATE(600)] = 10784,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(348),
  [7] = {.count = 1, .reusable = true}, SHIFT(346),
  [9] = {.count = 1, .reusable = true}, SHIFT(360),
  [11] = {.count = 1, .reusable = true}, SHIFT(392),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(147),
  [17] = {.count = 1, .reusable = true}, SHIFT(148),
  [19] = {.count = 1, .reusable = true}, SHIFT(149),
  [21] = {.count = 1, .reusable = true}, SHIFT(150),
  [23] = {.count = 1, .reusable = true}, SHIFT(154),
  [25] = {.count = 1, .reusable = true}, SHIFT(155),
  [27] = {.count = 1, .reusable = true}, SHIFT(156),
  [29] = {.count = 1, .reusable = true}, SHIFT(157),
  [31] = {.count = 1, .reusable = true}, SHIFT(140),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(495),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 3),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 3),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym__statement_name, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(507),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(250),
  [55] = {.count = 1, .reusable = true}, SHIFT(2),
  [57] = {.count = 1, .reusable = true}, SHIFT(15),
  [59] = {.count = 1, .reusable = true}, SHIFT(18),
  [61] = {.count = 1, .reusable = true}, SHIFT(24),
  [63] = {.count = 1, .reusable = true}, SHIFT(23),
  [65] = {.count = 1, .reusable = true}, SHIFT(9),
  [67] = {.count = 1, .reusable = true}, SHIFT(84),
  [69] = {.count = 1, .reusable = true}, SHIFT(79),
  [71] = {.count = 1, .reusable = true}, SHIFT(31),
  [73] = {.count = 1, .reusable = true}, SHIFT(71),
  [75] = {.count = 1, .reusable = true}, SHIFT(82),
  [77] = {.count = 1, .reusable = true}, SHIFT(25),
  [79] = {.count = 1, .reusable = true}, SHIFT(14),
  [81] = {.count = 1, .reusable = true}, SHIFT(68),
  [83] = {.count = 1, .reusable = true}, SHIFT(81),
  [85] = {.count = 1, .reusable = true}, SHIFT(209),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(18),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(24),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(84),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(79),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(31),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(71),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(82),
  [122] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(25),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(68),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(81),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 1),
  [138] = {.count = 1, .reusable = true}, SHIFT(598),
  [140] = {.count = 1, .reusable = true}, SHIFT(236),
  [142] = {.count = 1, .reusable = true}, SHIFT(105),
  [144] = {.count = 1, .reusable = true}, SHIFT(100),
  [146] = {.count = 1, .reusable = true}, SHIFT(101),
  [148] = {.count = 1, .reusable = true}, SHIFT(107),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 3),
  [154] = {.count = 1, .reusable = true}, SHIFT(245),
  [156] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(18),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(24),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(31),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(105),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(100),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(101),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(107),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(25),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_loadType, 1),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_loadType, 1),
  [201] = {.count = 1, .reusable = true}, SHIFT(458),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 1),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 1),
  [207] = {.count = 1, .reusable = true}, SHIFT(599),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_loadType, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_loadType, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 3),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [221] = {.count = 1, .reusable = true}, SHIFT(488),
  [223] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(19),
  [228] = {.count = 1, .reusable = true}, SHIFT(184),
  [230] = {.count = 1, .reusable = true}, SHIFT(22),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [236] = {.count = 1, .reusable = true}, SHIFT(172),
  [238] = {.count = 1, .reusable = true}, SHIFT(19),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [244] = {.count = 1, .reusable = true}, SHIFT(482),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [250] = {.count = 1, .reusable = true}, SHIFT(487),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 1),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_transparencecheck, 1),
  [256] = {.count = 1, .reusable = true}, SHIFT(385),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_orientation, 1),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_orientation, 1),
  [262] = {.count = 1, .reusable = true}, SHIFT(464),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_position, 1),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_position, 1),
  [268] = {.count = 1, .reusable = true}, SHIFT(562),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 3),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_transparencecheck, 3),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [286] = {.count = 1, .reusable = true}, SHIFT(388),
  [288] = {.count = 1, .reusable = true}, SHIFT(253),
  [290] = {.count = 1, .reusable = true}, SHIFT(244),
  [292] = {.count = 1, .reusable = true}, SHIFT(260),
  [294] = {.count = 1, .reusable = true}, SHIFT(74),
  [296] = {.count = 1, .reusable = true}, SHIFT(164),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [300] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(18),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(74),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(164),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(31),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(71),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(68),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_position, 5),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_position, 5),
  [336] = {.count = 1, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(158),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(4),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(54),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(69),
  [350] = {.count = 2, .reusable = false}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(142),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(110),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(27),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(26),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(104),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 2), SHIFT_REPEAT(153),
  [368] = {.count = 1, .reusable = true}, SHIFT(383),
  [370] = {.count = 1, .reusable = true}, SHIFT(194),
  [372] = {.count = 1, .reusable = true}, SHIFT(195),
  [374] = {.count = 1, .reusable = true}, SHIFT(196),
  [376] = {.count = 1, .reusable = true}, SHIFT(202),
  [378] = {.count = 1, .reusable = true}, SHIFT(204),
  [380] = {.count = 1, .reusable = true}, SHIFT(205),
  [382] = {.count = 1, .reusable = true}, SHIFT(208),
  [384] = {.count = 1, .reusable = true}, SHIFT(177),
  [386] = {.count = 1, .reusable = true}, SHIFT(83),
  [388] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(194),
  [393] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(195),
  [396] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(196),
  [399] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(202),
  [402] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(204),
  [405] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(205),
  [408] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(208),
  [411] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(177),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(83),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [421] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [423] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(4),
  [426] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(147),
  [429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(148),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(149),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(150),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(154),
  [441] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(155),
  [444] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(156),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(157),
  [450] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(140),
  [453] = {.count = 1, .reusable = true}, SHIFT(242),
  [455] = {.count = 1, .reusable = true}, SHIFT(158),
  [457] = {.count = 1, .reusable = true}, SHIFT(54),
  [459] = {.count = 1, .reusable = true}, SHIFT(69),
  [461] = {.count = 1, .reusable = false}, SHIFT(142),
  [463] = {.count = 1, .reusable = true}, SHIFT(110),
  [465] = {.count = 1, .reusable = true}, SHIFT(27),
  [467] = {.count = 1, .reusable = true}, SHIFT(26),
  [469] = {.count = 1, .reusable = true}, SHIFT(104),
  [471] = {.count = 1, .reusable = true}, SHIFT(153),
  [473] = {.count = 1, .reusable = true}, SHIFT(375),
  [475] = {.count = 1, .reusable = true}, SHIFT(249),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_orientation, 3),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_orientation, 3),
  [481] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(18),
  [492] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(24),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [498] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(31),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(82),
  [507] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(25),
  [510] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [513] = {.count = 1, .reusable = true}, SHIFT(256),
  [515] = {.count = 1, .reusable = true}, SHIFT(97),
  [517] = {.count = 1, .reusable = true}, SHIFT(138),
  [519] = {.count = 1, .reusable = false}, SHIFT(137),
  [521] = {.count = 1, .reusable = true}, SHIFT(133),
  [523] = {.count = 1, .reusable = true}, SHIFT(132),
  [525] = {.count = 1, .reusable = true}, SHIFT(128),
  [527] = {.count = 1, .reusable = true}, SHIFT(126),
  [529] = {.count = 1, .reusable = true}, SHIFT(127),
  [531] = {.count = 1, .reusable = true}, SHIFT(130),
  [533] = {.count = 1, .reusable = true}, SHIFT(94),
  [535] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(138),
  [540] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(137),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(133),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(132),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(128),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(126),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(127),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(130),
  [561] = {.count = 1, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2),
  [563] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(4),
  [566] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(54),
  [569] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(69),
  [572] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(183),
  [575] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(27),
  [578] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(182),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(26),
  [584] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(181),
  [587] = {.count = 2, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 2), SHIFT_REPEAT(174),
  [590] = {.count = 1, .reusable = true}, SHIFT(255),
  [592] = {.count = 1, .reusable = true}, SHIFT(169),
  [594] = {.count = 1, .reusable = true}, SHIFT(170),
  [596] = {.count = 1, .reusable = true}, SHIFT(171),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_size, 1),
  [600] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_size, 1),
  [602] = {.count = 1, .reusable = true}, SHIFT(563),
  [604] = {.count = 1, .reusable = true}, SHIFT(251),
  [606] = {.count = 1, .reusable = true}, SHIFT(210),
  [608] = {.count = 1, .reusable = true}, SHIFT(90),
  [610] = {.count = 1, .reusable = true}, SHIFT(72),
  [612] = {.count = 1, .reusable = true}, SHIFT(108),
  [614] = {.count = 1, .reusable = true}, SHIFT(243),
  [616] = {.count = 1, .reusable = false}, SHIFT(191),
  [618] = {.count = 1, .reusable = true}, SHIFT(192),
  [620] = {.count = 1, .reusable = true}, SHIFT(193),
  [622] = {.count = 1, .reusable = true}, SHIFT(211),
  [624] = {.count = 1, .reusable = true}, SHIFT(235),
  [626] = {.count = 1, .reusable = true}, SHIFT(183),
  [628] = {.count = 1, .reusable = true}, SHIFT(182),
  [630] = {.count = 1, .reusable = true}, SHIFT(181),
  [632] = {.count = 1, .reusable = true}, SHIFT(174),
  [634] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(2),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(90),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(72),
  [645] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(108),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(18),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(24),
  [654] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(23),
  [657] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(9),
  [660] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(25),
  [663] = {.count = 1, .reusable = true}, SHIFT(496),
  [665] = {.count = 1, .reusable = true}, SHIFT(197),
  [667] = {.count = 1, .reusable = true}, SHIFT(199),
  [669] = {.count = 1, .reusable = true}, SHIFT(203),
  [671] = {.count = 1, .reusable = true}, SHIFT(206),
  [673] = {.count = 1, .reusable = true}, SHIFT(207),
  [675] = {.count = 1, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(4),
  [680] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(69),
  [683] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(110),
  [686] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(27),
  [689] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(26),
  [692] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(104),
  [695] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(169),
  [698] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(170),
  [701] = {.count = 2, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 2), SHIFT_REPEAT(171),
  [704] = {.count = 1, .reusable = true}, SHIFT(258),
  [706] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(2),
  [711] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(90),
  [714] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(72),
  [717] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(9),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(74),
  [723] = {.count = 2, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(191),
  [726] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(192),
  [729] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(193),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(14),
  [735] = {.count = 1, .reusable = true}, SHIFT(465),
  [737] = {.count = 1, .reusable = true}, SHIFT(257),
  [739] = {.count = 1, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(197),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(199),
  [747] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(203),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(4),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(54),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(27),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(206),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(207),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(26),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_norefcount, 1),
  [770] = {.count = 1, .reusable = true}, SHIFT(399),
  [772] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_borderSize, 1),
  [774] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_borderSize, 1),
  [776] = {.count = 1, .reusable = true}, SHIFT(518),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_size, 5),
  [780] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_size, 5),
  [782] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 1),
  [784] = {.count = 1, .reusable = true}, SHIFT(390),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [788] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [790] = {.count = 1, .reusable = true}, SHIFT(589),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_borderSize, 5),
  [794] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_borderSize, 5),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_xy, 1),
  [798] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size_xy, 1),
  [800] = {.count = 1, .reusable = true}, SHIFT(594),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_norefcount, 3),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [806] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 3),
  [810] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [812] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alwaystransparent, 1),
  [816] = {.count = 1, .reusable = true}, SHIFT(387),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_xy, 5),
  [820] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size_xy, 5),
  [822] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alphamaskfile, 1),
  [824] = {.count = 1, .reusable = true}, SHIFT(595),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 1),
  [828] = {.count = 1, .reusable = true}, SHIFT(596),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 1),
  [832] = {.count = 1, .reusable = true}, SHIFT(547),
  [834] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [836] = {.count = 1, .reusable = true}, SHIFT(468),
  [838] = {.count = 1, .reusable = true}, SHIFT(371),
  [840] = {.count = 1, .reusable = true}, SHIFT(276),
  [842] = {.count = 1, .reusable = true}, SHIFT(269),
  [844] = {.count = 1, .reusable = true}, SHIFT(275),
  [846] = {.count = 1, .reusable = true}, SHIFT(270),
  [848] = {.count = 1, .reusable = true}, SHIFT(271),
  [850] = {.count = 1, .reusable = true}, SHIFT(273),
  [852] = {.count = 1, .reusable = true}, SHIFT(274),
  [854] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2),
  [856] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(276),
  [859] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(269),
  [862] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(275),
  [865] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(270),
  [868] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(271),
  [871] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(273),
  [874] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(274),
  [877] = {.count = 1, .reusable = true}, SHIFT(397),
  [879] = {.count = 1, .reusable = true}, SHIFT(238),
  [881] = {.count = 1, .reusable = true}, SHIFT(262),
  [883] = {.count = 1, .reusable = true}, SHIFT(264),
  [885] = {.count = 1, .reusable = true}, SHIFT(265),
  [887] = {.count = 1, .reusable = true}, SHIFT(266),
  [889] = {.count = 1, .reusable = true}, SHIFT(267),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alphamaskfile, 3),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [897] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [899] = {.count = 1, .reusable = true}, SHIFT(590),
  [901] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alwaystransparent, 3),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 3),
  [905] = {.count = 1, .reusable = true}, SHIFT(413),
  [907] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [909] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [911] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2),
  [913] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(238),
  [916] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(262),
  [919] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(264),
  [922] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(83),
  [925] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(265),
  [928] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(266),
  [931] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(267),
  [934] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [936] = {.count = 1, .reusable = true}, SHIFT(379),
  [938] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 4),
  [940] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 1),
  [942] = {.count = 1, .reusable = true}, SHIFT(403),
  [944] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 1),
  [946] = {.count = 1, .reusable = true}, SHIFT(404),
  [948] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2),
  [950] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2), SHIFT_REPEAT(114),
  [953] = {.count = 1, .reusable = true}, SHIFT(261),
  [955] = {.count = 1, .reusable = true}, SHIFT(114),
  [957] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_textureFile, 1),
  [959] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_textureFile, 1),
  [961] = {.count = 1, .reusable = true}, SHIFT(513),
  [963] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 1),
  [965] = {.count = 1, .reusable = true}, SHIFT(450),
  [967] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [969] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [971] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 1),
  [973] = {.count = 1, .reusable = true}, SHIFT(442),
  [975] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [977] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [979] = {.count = 1, .reusable = true}, SHIFT(134),
  [981] = {.count = 1, .reusable = true}, SHIFT(588),
  [983] = {.count = 1, .reusable = true}, SHIFT(263),
  [985] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_font, 1),
  [987] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_font, 1),
  [989] = {.count = 1, .reusable = true}, SHIFT(512),
  [991] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 3),
  [993] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_font, 3),
  [995] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_font, 3),
  [997] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 3),
  [999] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 1),
  [1001] = {.count = 1, .reusable = true}, SHIFT(569),
  [1003] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2),
  [1005] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(2),
  [1008] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(296),
  [1011] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(151),
  [1014] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(300),
  [1017] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(291),
  [1020] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(268),
  [1023] = {.count = 1, .reusable = true}, SHIFT(337),
  [1025] = {.count = 1, .reusable = true}, SHIFT(296),
  [1027] = {.count = 1, .reusable = true}, SHIFT(151),
  [1029] = {.count = 1, .reusable = true}, SHIFT(300),
  [1031] = {.count = 1, .reusable = true}, SHIFT(291),
  [1033] = {.count = 1, .reusable = true}, SHIFT(268),
  [1035] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 3),
  [1037] = {.count = 1, .reusable = true}, SHIFT(320),
  [1039] = {.count = 1, .reusable = false}, SHIFT(15),
  [1041] = {.count = 1, .reusable = true}, SHIFT(198),
  [1043] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 1, .production_id = 4),
  [1045] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 3),
  [1047] = {.count = 1, .reusable = true}, SHIFT(332),
  [1049] = {.count = 1, .reusable = true}, SHIFT(334),
  [1051] = {.count = 1, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2),
  [1053] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1056] = {.count = 2, .reusable = false}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [1059] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(72),
  [1062] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(108),
  [1065] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(151),
  [1068] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(198),
  [1071] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_textureFile, 3),
  [1073] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_textureFile, 3),
  [1075] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [1077] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [1079] = {.count = 1, .reusable = true}, SHIFT(131),
  [1081] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [1083] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [1085] = {.count = 1, .reusable = true}, SHIFT(395),
  [1087] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [1089] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [1091] = {.count = 1, .reusable = true}, SHIFT(394),
  [1093] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 1),
  [1095] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 1),
  [1097] = {.count = 1, .reusable = true}, SHIFT(538),
  [1099] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 7),
  [1101] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [1103] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [1105] = {.count = 1, .reusable = true}, SHIFT(537),
  [1107] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 4),
  [1109] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 4),
  [1111] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [1113] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [1115] = {.count = 1, .reusable = true}, SHIFT(457),
  [1117] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [1119] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [1121] = {.count = 1, .reusable = true}, SHIFT(396),
  [1123] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 2),
  [1125] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 2),
  [1127] = {.count = 1, .reusable = true}, SHIFT(378),
  [1129] = {.count = 1, .reusable = true}, SHIFT(304),
  [1131] = {.count = 1, .reusable = true}, SHIFT(315),
  [1133] = {.count = 1, .reusable = true}, SHIFT(314),
  [1135] = {.count = 1, .reusable = true}, SHIFT(313),
  [1137] = {.count = 1, .reusable = true}, SHIFT(311),
  [1139] = {.count = 1, .reusable = true}, SHIFT(374),
  [1141] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [1143] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [1145] = {.count = 1, .reusable = true}, SHIFT(539),
  [1147] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [1149] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [1151] = {.count = 1, .reusable = true}, SHIFT(540),
  [1153] = {.count = 1, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2),
  [1155] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(304),
  [1158] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(315),
  [1161] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(314),
  [1164] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(313),
  [1167] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(311),
  [1170] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [1172] = {.count = 1, .reusable = true}, SHIFT(473),
  [1174] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [1176] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [1178] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_text, 1),
  [1180] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_text, 1),
  [1182] = {.count = 1, .reusable = true}, SHIFT(511),
  [1184] = {.count = 1, .reusable = true}, SHIFT(339),
  [1186] = {.count = 1, .reusable = true}, SHIFT(307),
  [1188] = {.count = 1, .reusable = true}, SHIFT(306),
  [1190] = {.count = 1, .reusable = true}, SHIFT(310),
  [1192] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2),
  [1194] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1197] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(307),
  [1200] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(306),
  [1203] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(310),
  [1206] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(198),
  [1209] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [1211] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [1213] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 5),
  [1215] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 5),
  [1217] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [1219] = {.count = 1, .reusable = true}, SHIFT(531),
  [1221] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [1223] = {.count = 1, .reusable = true}, SHIFT(530),
  [1225] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [1227] = {.count = 1, .reusable = true}, SHIFT(529),
  [1229] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [1231] = {.count = 1, .reusable = true}, SHIFT(528),
  [1233] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [1235] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [1237] = {.count = 1, .reusable = true}, SHIFT(417),
  [1239] = {.count = 1, .reusable = true}, SHIFT(330),
  [1241] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_cursor, 1),
  [1243] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_cursor, 1),
  [1245] = {.count = 1, .reusable = true}, SHIFT(516),
  [1247] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [1249] = {.count = 1, .reusable = true}, SHIFT(527),
  [1251] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [1253] = {.count = 1, .reusable = true}, SHIFT(525),
  [1255] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [1257] = {.count = 1, .reusable = true}, SHIFT(483),
  [1259] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [1261] = {.count = 1, .reusable = true}, SHIFT(480),
  [1263] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_instantTextBoxType, 1),
  [1265] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_instantTextBoxType, 1),
  [1267] = {.count = 1, .reusable = true}, SHIFT(402),
  [1269] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [1271] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [1273] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [1275] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [1277] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [1279] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [1281] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [1283] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [1285] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [1287] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [1289] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 1),
  [1291] = {.count = 1, .reusable = true}, SHIFT(591),
  [1293] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [1295] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [1297] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [1299] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [1301] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxWidth, 1),
  [1303] = {.count = 1, .reusable = true}, SHIFT(484),
  [1305] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxHeight, 1),
  [1307] = {.count = 1, .reusable = true}, SHIFT(485),
  [1309] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_fixedsize, 1),
  [1311] = {.count = 1, .reusable = true}, SHIFT(406),
  [1313] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [1315] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 5),
  [1317] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_scrollbartype, 1),
  [1319] = {.count = 1, .reusable = true}, SHIFT(524),
  [1321] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 1, .production_id = 4),
  [1323] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 1, .production_id = 4),
  [1325] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType, 1),
  [1327] = {.count = 1, .reusable = true}, SHIFT(455),
  [1329] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [1331] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_instantTextBoxType, 3),
  [1333] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_instantTextBoxType, 3),
  [1335] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_text, 3),
  [1337] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_text, 3),
  [1339] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_priority, 1),
  [1341] = {.count = 1, .reusable = true}, SHIFT(478),
  [1343] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_background, 1),
  [1345] = {.count = 1, .reusable = true}, SHIFT(522),
  [1347] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_allwaystransparent, 1),
  [1349] = {.count = 1, .reusable = true}, SHIFT(400),
  [1351] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [1353] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [1355] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [1357] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [1359] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [1361] = {.count = 1, .reusable = true}, REDUCE(aux_sym__editBoxType_block_repeat1, 1, .production_id = 4),
  [1363] = {.count = 1, .reusable = false}, REDUCE(aux_sym__editBoxType_block_repeat1, 1, .production_id = 4),
  [1365] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [1367] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 1),
  [1369] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 1),
  [1371] = {.count = 1, .reusable = true}, SHIFT(587),
  [1373] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 1),
  [1375] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 1),
  [1377] = {.count = 1, .reusable = true}, SHIFT(586),
  [1379] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 1),
  [1381] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 1),
  [1383] = {.count = 1, .reusable = true}, SHIFT(409),
  [1385] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 1),
  [1387] = {.count = 1, .reusable = true}, SHIFT(444),
  [1389] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 1),
  [1391] = {.count = 1, .reusable = true}, SHIFT(445),
  [1393] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 1),
  [1395] = {.count = 1, .reusable = true}, SHIFT(446),
  [1397] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType, 1),
  [1399] = {.count = 1, .reusable = true}, SHIFT(459),
  [1401] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect, 1),
  [1403] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effect, 1),
  [1405] = {.count = 1, .reusable = true}, SHIFT(570),
  [1407] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType, 1),
  [1409] = {.count = 1, .reusable = true}, SHIFT(460),
  [1411] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_cursor, 5),
  [1413] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gui_cursor, 5),
  [1415] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [1417] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 1),
  [1419] = {.count = 1, .reusable = true}, SHIFT(448),
  [1421] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType, 1),
  [1423] = {.count = 1, .reusable = true}, SHIFT(461),
  [1425] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 1),
  [1427] = {.count = 1, .reusable = true}, SHIFT(449),
  [1429] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype, 1),
  [1431] = {.count = 1, .reusable = true}, SHIFT(452),
  [1433] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_backGround, 1),
  [1435] = {.count = 1, .reusable = true}, SHIFT(561),
  [1437] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_moveable, 1),
  [1439] = {.count = 1, .reusable = true}, SHIFT(391),
  [1441] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType, 1),
  [1443] = {.count = 1, .reusable = true}, SHIFT(453),
  [1445] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [1447] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 2),
  [1449] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 2),
  [1451] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [1453] = {.count = 1, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [1455] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType_block, 2),
  [1457] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_priority, 3),
  [1459] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_background, 3),
  [1461] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 3),
  [1463] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 3),
  [1465] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType_block, 2),
  [1467] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [1469] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_allwaystransparent, 3),
  [1471] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 3),
  [1473] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 3),
  [1475] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 3),
  [1477] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 3),
  [1479] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype, 3),
  [1481] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType, 3),
  [1483] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType, 3),
  [1485] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect, 3),
  [1487] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effect, 3),
  [1489] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 7),
  [1491] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 7),
  [1493] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType, 3),
  [1495] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType, 3),
  [1497] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 7),
  [1499] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 7),
  [1501] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType, 3),
  [1503] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_backGround, 3),
  [1505] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_moveable, 3),
  [1507] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType_block, 2),
  [1509] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 2),
  [1511] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_scrollbartype, 3),
  [1513] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 1),
  [1515] = {.count = 1, .reusable = true}, SHIFT(435),
  [1517] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType_block, 3),
  [1519] = {.count = 1, .reusable = true}, REDUCE(aux_sym__listBoxType_block_repeat1, 1, .production_id = 4),
  [1521] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType_block, 3),
  [1523] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType_block, 2),
  [1525] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 3),
  [1527] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 2),
  [1529] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 3),
  [1531] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxWidth, 3),
  [1533] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_maxHeight, 3),
  [1535] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_fixedsize, 3),
  [1537] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 2),
  [1539] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [1541] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType_block, 2),
  [1543] = {.count = 1, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 1, .production_id = 4),
  [1545] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 3),
  [1547] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 1, .production_id = 4),
  [1549] = {.count = 1, .reusable = true}, REDUCE(sym__instantTextBoxType_block, 3),
  [1551] = {.count = 1, .reusable = true}, REDUCE(sym__editBoxType_block, 3),
  [1553] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType_block, 3),
  [1555] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 3),
  [1557] = {.count = 1, .reusable = true}, REDUCE(aux_sym__instantTextBoxType_block_repeat1, 1, .production_id = 4),
  [1559] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 3),
  [1561] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 3),
  [1563] = {.count = 1, .reusable = true}, SHIFT(451),
  [1565] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 2),
  [1567] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 1),
  [1569] = {.count = 1, .reusable = true}, SHIFT(568),
  [1571] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 1),
  [1573] = {.count = 1, .reusable = true}, SHIFT(567),
  [1575] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 1),
  [1577] = {.count = 1, .reusable = true}, SHIFT(566),
  [1579] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect_bool, 1),
  [1581] = {.count = 1, .reusable = true}, SHIFT(398),
  [1583] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 1),
  [1585] = {.count = 1, .reusable = true}, SHIFT(431),
  [1587] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 1),
  [1589] = {.count = 1, .reusable = true}, SHIFT(533),
  [1591] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 1),
  [1593] = {.count = 1, .reusable = true}, SHIFT(509),
  [1595] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 1),
  [1597] = {.count = 1, .reusable = true}, SHIFT(510),
  [1599] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 3),
  [1601] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 1),
  [1603] = {.count = 1, .reusable = true}, SHIFT(523),
  [1605] = {.count = 1, .reusable = true}, SHIFT(454),
  [1607] = {.count = 1, .reusable = true}, SHIFT(600),
  [1609] = {.count = 1, .reusable = true}, SHIFT(597),
  [1611] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 3),
  [1613] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2),
  [1615] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(2),
  [1618] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(354),
  [1621] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(268),
  [1624] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [1626] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 3),
  [1628] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 3),
  [1630] = {.count = 1, .reusable = true}, SHIFT(239),
  [1632] = {.count = 1, .reusable = true}, SHIFT(362),
  [1634] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 5),
  [1636] = {.count = 1, .reusable = true}, SHIFT(331),
  [1638] = {.count = 1, .reusable = true}, SHIFT(354),
  [1640] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 3),
  [1642] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 3),
  [1644] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 1, .production_id = 4),
  [1646] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_meshsettings, 1),
  [1648] = {.count = 1, .reusable = true}, SHIFT(582),
  [1650] = {.count = 1, .reusable = true}, SHIFT(338),
  [1652] = {.count = 1, .reusable = true}, SHIFT(350),
  [1654] = {.count = 1, .reusable = true}, SHIFT(349),
  [1656] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [1658] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(348),
  [1661] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(346),
  [1664] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(360),
  [1667] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect_bool, 3),
  [1669] = {.count = 1, .reusable = true}, SHIFT(217),
  [1671] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 1),
  [1673] = {.count = 1, .reusable = true}, SHIFT(584),
  [1675] = {.count = 1, .reusable = true}, SHIFT(328),
  [1677] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 3),
  [1679] = {.count = 1, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2),
  [1681] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1684] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(74),
  [1687] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(362),
  [1690] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 1),
  [1692] = {.count = 1, .reusable = true}, SHIFT(506),
  [1694] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2),
  [1696] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(2),
  [1699] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(350),
  [1702] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(349),
  [1705] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 3),
  [1707] = {.count = 1, .reusable = true}, SHIFT(335),
  [1709] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 1),
  [1711] = {.count = 1, .reusable = true}, SHIFT(418),
  [1713] = {.count = 1, .reusable = true}, SHIFT(381),
  [1715] = {.count = 1, .reusable = true}, SHIFT(363),
  [1717] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_normal, 1),
  [1719] = {.count = 1, .reusable = true}, SHIFT(574),
  [1721] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texture, 1),
  [1723] = {.count = 1, .reusable = true}, SHIFT(575),
  [1725] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_meshsettings, 11),
  [1727] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2),
  [1729] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(238),
  [1732] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(363),
  [1735] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_specular, 1),
  [1737] = {.count = 1, .reusable = true}, SHIFT(571),
  [1739] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType, 1),
  [1741] = {.count = 1, .reusable = true}, SHIFT(505),
  [1743] = {.count = 1, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 1, .production_id = 4),
  [1745] = {.count = 1, .reusable = false}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 1, .production_id = 4),
  [1747] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType, 1),
  [1749] = {.count = 1, .reusable = true}, SHIFT(498),
  [1751] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle, 1),
  [1753] = {.count = 1, .reusable = true}, SHIFT(497),
  [1755] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh, 1),
  [1757] = {.count = 1, .reusable = true}, SHIFT(486),
  [1759] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 1, .production_id = 4),
  [1761] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 3),
  [1763] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 6),
  [1765] = {.count = 1, .reusable = true}, SHIFT(372),
  [1767] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType_block, 3),
  [1769] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 3),
  [1771] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType, 3),
  [1773] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texture, 3),
  [1775] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle, 3),
  [1777] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_normal, 3),
  [1779] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_specular, 3),
  [1781] = {.count = 1, .reusable = true}, SHIFT(213),
  [1783] = {.count = 1, .reusable = true}, SHIFT(364),
  [1785] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 2),
  [1787] = {.count = 1, .reusable = true}, SHIFT(241),
  [1789] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType_block, 3),
  [1791] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle_block, 2),
  [1793] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType_block, 2),
  [1795] = {.count = 1, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2),
  [1797] = {.count = 2, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1800] = {.count = 2, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2), SHIFT_REPEAT(364),
  [1803] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 2),
  [1805] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle_block, 3),
  [1807] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 1, .production_id = 4),
  [1809] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 3),
  [1811] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 3),
  [1813] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType_block, 2),
  [1815] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh, 3),
  [1817] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType, 3),
  [1819] = {.count = 1, .reusable = true}, SHIFT(411),
  [1821] = {.count = 1, .reusable = true}, SHIFT(412),
  [1823] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gui_repeat1, 2),
  [1825] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gui_repeat1, 2), SHIFT_REPEAT(392),
  [1828] = {.count = 1, .reusable = true}, SHIFT(386),
  [1830] = {.count = 1, .reusable = true}, SHIFT(401),
  [1832] = {.count = 1, .reusable = true}, SHIFT(466),
  [1834] = {.count = 1, .reusable = true}, SHIFT(393),
  [1836] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 1),
  [1838] = {.count = 1, .reusable = true}, SHIFT(471),
  [1840] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 1),
  [1842] = {.count = 1, .reusable = true}, SHIFT(467),
  [1844] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 1),
  [1846] = {.count = 1, .reusable = true}, SHIFT(434),
  [1848] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 1),
  [1850] = {.count = 1, .reusable = true}, SHIFT(436),
  [1852] = {.count = 1, .reusable = true}, SHIFT(426),
  [1854] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_type, 1),
  [1856] = {.count = 1, .reusable = true}, SHIFT(578),
  [1858] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2),
  [1860] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2), SHIFT_REPEAT(393),
  [1863] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gui, 1),
  [1865] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 1),
  [1867] = {.count = 1, .reusable = true}, SHIFT(490),
  [1869] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_linewidth, 1),
  [1871] = {.count = 1, .reusable = true}, SHIFT(437),
  [1873] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 1),
  [1875] = {.count = 1, .reusable = true}, SHIFT(433),
  [1877] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_integer, 1),
  [1879] = {.count = 1, .reusable = true}, SHIFT(438),
  [1881] = {.count = 1, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 1, .production_id = 4),
  [1883] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 1, .production_id = 4),
  [1885] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 1, .production_id = 4),
  [1887] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_linewidth, 3),
  [1889] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 3),
  [1891] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 3),
  [1893] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 2),
  [1895] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 2),
  [1897] = {.count = 1, .reusable = true}, SHIFT(145),
  [1899] = {.count = 1, .reusable = true}, SHIFT(377),
  [1901] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 2),
  [1903] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [1905] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 3),
  [1907] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [1909] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(377),
  [1912] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 3),
  [1914] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 3),
  [1916] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_type, 3),
  [1918] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 3),
  [1920] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [1922] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [1924] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 3),
  [1926] = {.count = 1, .reusable = true}, SHIFT(28),
  [1928] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 1),
  [1930] = {.count = 1, .reusable = true}, SHIFT(557),
  [1932] = {.count = 1, .reusable = true}, SHIFT(91),
  [1934] = {.count = 1, .reusable = true}, SHIFT(41),
  [1936] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [1938] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(443),
  [1941] = {.count = 1, .reusable = true}, SHIFT(77),
  [1943] = {.count = 1, .reusable = true}, SHIFT(234),
  [1945] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes, 1),
  [1947] = {.count = 1, .reusable = true}, SHIFT(489),
  [1949] = {.count = 1, .reusable = true}, REDUCE(sym__windowType, 1),
  [1951] = {.count = 1, .reusable = true}, SHIFT(472),
  [1953] = {.count = 1, .reusable = true}, SHIFT(159),
  [1955] = {.count = 1, .reusable = true}, SHIFT(160),
  [1957] = {.count = 1, .reusable = true}, SHIFT(163),
  [1959] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 3),
  [1961] = {.count = 1, .reusable = true}, SHIFT(294),
  [1963] = {.count = 1, .reusable = true}, SHIFT(75),
  [1965] = {.count = 1, .reusable = true}, SHIFT(219),
  [1967] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 1),
  [1969] = {.count = 1, .reusable = true}, SHIFT(558),
  [1971] = {.count = 1, .reusable = true}, SHIFT(179),
  [1973] = {.count = 1, .reusable = true}, SHIFT(113),
  [1975] = {.count = 1, .reusable = true}, SHIFT(111),
  [1977] = {.count = 1, .reusable = true}, SHIFT(188),
  [1979] = {.count = 1, .reusable = true}, SHIFT(443),
  [1981] = {.count = 1, .reusable = true}, SHIFT(248),
  [1983] = {.count = 1, .reusable = true}, SHIFT(373),
  [1985] = {.count = 1, .reusable = true}, SHIFT(201),
  [1987] = {.count = 1, .reusable = true}, SHIFT(216),
  [1989] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 3),
  [1991] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 1),
  [1993] = {.count = 1, .reusable = true}, SHIFT(536),
  [1995] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 1),
  [1997] = {.count = 1, .reusable = true}, SHIFT(535),
  [1999] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 2),
  [2001] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_integer, 3),
  [2003] = {.count = 1, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 1, .production_id = 4),
  [2005] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_type, 1, .production_id = 2),
  [2007] = {.count = 1, .reusable = true}, SHIFT(78),
  [2009] = {.count = 1, .reusable = true}, SHIFT(297),
  [2011] = {.count = 1, .reusable = true}, SHIFT(469),
  [2013] = {.count = 1, .reusable = true}, SHIFT(470),
  [2015] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 3),
  [2017] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 3),
  [2019] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader, 1),
  [2021] = {.count = 1, .reusable = true}, SHIFT(577),
  [2023] = {.count = 1, .reusable = true}, SHIFT(432),
  [2025] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes_block, 2),
  [2027] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 1),
  [2029] = {.count = 1, .reusable = true}, SHIFT(519),
  [2031] = {.count = 1, .reusable = true}, SHIFT(474),
  [2033] = {.count = 1, .reusable = true}, SHIFT(475),
  [2035] = {.count = 1, .reusable = true}, SHIFT(280),
  [2037] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader_file, 1),
  [2039] = {.count = 1, .reusable = true}, SHIFT(581),
  [2041] = {.count = 1, .reusable = true}, SHIFT(93),
  [2043] = {.count = 1, .reusable = true}, SHIFT(85),
  [2045] = {.count = 1, .reusable = true}, SHIFT(109),
  [2047] = {.count = 1, .reusable = true}, SHIFT(369),
  [2049] = {.count = 1, .reusable = true}, SHIFT(368),
  [2051] = {.count = 1, .reusable = true}, SHIFT(414),
  [2053] = {.count = 1, .reusable = true}, SHIFT(424),
  [2055] = {.count = 1, .reusable = true}, REDUCE(sym__windowType, 3),
  [2057] = {.count = 1, .reusable = true}, SHIFT(120),
  [2059] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 3),
  [2061] = {.count = 1, .reusable = true}, SHIFT(7),
  [2063] = {.count = 1, .reusable = true}, SHIFT(33),
  [2065] = {.count = 1, .reusable = true}, SHIFT(45),
  [2067] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes, 3),
  [2069] = {.count = 1, .reusable = true}, SHIFT(56),
  [2071] = {.count = 1, .reusable = true}, SHIFT(10),
  [2073] = {.count = 1, .reusable = true}, SHIFT(117),
  [2075] = {.count = 1, .reusable = true}, SHIFT(286),
  [2077] = {.count = 1, .reusable = false}, SHIFT(286),
  [2079] = {.count = 1, .reusable = true}, SHIFT(58),
  [2081] = {.count = 1, .reusable = true}, SHIFT(327),
  [2083] = {.count = 1, .reusable = true}, SHIFT(295),
  [2085] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_specular, 1),
  [2087] = {.count = 1, .reusable = true}, SHIFT(573),
  [2089] = {.count = 1, .reusable = true}, SHIFT(141),
  [2091] = {.count = 1, .reusable = true}, SHIFT(16),
  [2093] = {.count = 1, .reusable = true}, SHIFT(59),
  [2095] = {.count = 1, .reusable = true}, SHIFT(43),
  [2097] = {.count = 1, .reusable = true}, SHIFT(55),
  [2099] = {.count = 1, .reusable = true}, SHIFT(456),
  [2101] = {.count = 1, .reusable = true}, SHIFT(46),
  [2103] = {.count = 1, .reusable = true}, REDUCE(sym__windowType_block, 3),
  [2105] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes_block, 3),
  [2107] = {.count = 1, .reusable = true}, SHIFT(44),
  [2109] = {.count = 1, .reusable = true}, SHIFT(50),
  [2111] = {.count = 1, .reusable = true}, SHIFT(514),
  [2113] = {.count = 1, .reusable = true}, SHIFT(515),
  [2115] = {.count = 1, .reusable = true}, SHIFT(136),
  [2117] = {.count = 1, .reusable = true}, SHIFT(61),
  [2119] = {.count = 1, .reusable = true}, SHIFT(405),
  [2121] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 1),
  [2123] = {.count = 1, .reusable = true}, SHIFT(521),
  [2125] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_index, 1),
  [2127] = {.count = 1, .reusable = true}, SHIFT(499),
  [2129] = {.count = 1, .reusable = true}, SHIFT(500),
  [2131] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_normal, 1),
  [2133] = {.count = 1, .reusable = true}, SHIFT(565),
  [2135] = {.count = 1, .reusable = true}, SHIFT(214),
  [2137] = {.count = 1, .reusable = true}, SHIFT(593),
  [2139] = {.count = 1, .reusable = true}, SHIFT(20),
  [2141] = {.count = 1, .reusable = true}, SHIFT(29),
  [2143] = {.count = 1, .reusable = true}, SHIFT(166),
  [2145] = {.count = 1, .reusable = true}, SHIFT(246),
  [2147] = {.count = 1, .reusable = true}, SHIFT(247),
  [2149] = {.count = 1, .reusable = true}, SHIFT(122),
  [2151] = {.count = 1, .reusable = true}, SHIFT(30),
  [2153] = {.count = 1, .reusable = true}, SHIFT(21),
  [2155] = {.count = 1, .reusable = true}, SHIFT(353),
  [2157] = {.count = 1, .reusable = true}, SHIFT(319),
  [2159] = {.count = 1, .reusable = true}, SHIFT(427),
  [2161] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 3),
  [2163] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 3),
  [2165] = {.count = 1, .reusable = true}, SHIFT(479),
  [2167] = {.count = 1, .reusable = true}, SHIFT(3),
  [2169] = {.count = 1, .reusable = false}, SHIFT(3),
  [2171] = {.count = 1, .reusable = true}, REDUCE(sym__windowType_block, 2),
  [2173] = {.count = 1, .reusable = true}, SHIFT(287),
  [2175] = {.count = 1, .reusable = true}, SHIFT(143),
  [2177] = {.count = 1, .reusable = true}, SHIFT(550),
  [2179] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_diffuse, 1),
  [2181] = {.count = 1, .reusable = true}, SHIFT(551),
  [2183] = {.count = 1, .reusable = true}, SHIFT(477),
  [2185] = {.count = 1, .reusable = true}, SHIFT(421),
  [2187] = {.count = 1, .reusable = true}, SHIFT(494),
  [2189] = {.count = 1, .reusable = true}, SHIFT(420),
  [2191] = {.count = 1, .reusable = true}, SHIFT(121),
  [2193] = {.count = 1, .reusable = true}, SHIFT(317),
  [2195] = {.count = 1, .reusable = true}, SHIFT(5),
  [2197] = {.count = 1, .reusable = true}, SHIFT(318),
  [2199] = {.count = 1, .reusable = true}, SHIFT(289),
  [2201] = {.count = 1, .reusable = true}, SHIFT(342),
  [2203] = {.count = 1, .reusable = true}, SHIFT(180),
  [2205] = {.count = 1, .reusable = true}, SHIFT(112),
  [2207] = {.count = 1, .reusable = true}, SHIFT(124),
  [2209] = {.count = 1, .reusable = true}, SHIFT(231),
  [2211] = {.count = 1, .reusable = true}, SHIFT(228),
  [2213] = {.count = 1, .reusable = true}, SHIFT(359),
  [2215] = {.count = 1, .reusable = true}, SHIFT(526),
  [2217] = {.count = 1, .reusable = true}, SHIFT(352),
  [2219] = {.count = 1, .reusable = true}, SHIFT(520),
  [2221] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 3),
  [2223] = {.count = 1, .reusable = true}, SHIFT(549),
  [2225] = {.count = 1, .reusable = true}, SHIFT(215),
  [2227] = {.count = 1, .reusable = true}, SHIFT(281),
  [2229] = {.count = 1, .reusable = true}, SHIFT(237),
  [2231] = {.count = 1, .reusable = true}, SHIFT(165),
  [2233] = {.count = 1, .reusable = true}, SHIFT(129),
  [2235] = {.count = 1, .reusable = true}, SHIFT(185),
  [2237] = {.count = 1, .reusable = true}, SHIFT(178),
  [2239] = {.count = 1, .reusable = true}, SHIFT(186),
  [2241] = {.count = 1, .reusable = true}, SHIFT(167),
  [2243] = {.count = 1, .reusable = true}, SHIFT(168),
  [2245] = {.count = 1, .reusable = true}, SHIFT(544),
  [2247] = {.count = 1, .reusable = true}, SHIFT(288),
  [2249] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_integer, 2),
  [2251] = {.count = 1, .reusable = true}, SHIFT(493),
  [2253] = {.count = 1, .reusable = true}, SHIFT(492),
  [2255] = {.count = 1, .reusable = true}, SHIFT(407),
  [2257] = {.count = 1, .reusable = true}, SHIFT(344),
  [2259] = {.count = 1, .reusable = true}, SHIFT(162),
  [2261] = {.count = 1, .reusable = true}, SHIFT(161),
  [2263] = {.count = 1, .reusable = true}, SHIFT(37),
  [2265] = {.count = 1, .reusable = true}, SHIFT(146),
  [2267] = {.count = 1, .reusable = true}, SHIFT(70),
  [2269] = {.count = 1, .reusable = true}, SHIFT(517),
  [2271] = {.count = 1, .reusable = true}, SHIFT(173),
  [2273] = {.count = 1, .reusable = true}, SHIFT(80),
  [2275] = {.count = 1, .reusable = true}, SHIFT(553),
  [2277] = {.count = 1, .reusable = true}, SHIFT(283),
  [2279] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 3),
  [2281] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_index, 3),
  [2283] = {.count = 1, .reusable = true}, SHIFT(564),
  [2285] = {.count = 1, .reusable = true}, SHIFT(585),
  [2287] = {.count = 1, .reusable = true}, SHIFT(552),
  [2289] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [2291] = {.count = 1, .reusable = true}, SHIFT(73),
  [2293] = {.count = 1, .reusable = true}, SHIFT(200),
  [2295] = {.count = 1, .reusable = true}, SHIFT(422),
  [2297] = {.count = 1, .reusable = true}, SHIFT(423),
  [2299] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [2301] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_float, 2),
  [2303] = {.count = 1, .reusable = true}, SHIFT(233),
  [2305] = {.count = 1, .reusable = true}, SHIFT(351),
  [2307] = {.count = 1, .reusable = true}, SHIFT(347),
  [2309] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_diffuse, 3),
  [2311] = {.count = 1, .reusable = true}, SHIFT(572),
  [2313] = {.count = 1, .reusable = true}, SHIFT(298),
  [2315] = {.count = 1, .reusable = true}, SHIFT(277),
  [2317] = {.count = 1, .reusable = true}, SHIFT(302),
  [2319] = {.count = 1, .reusable = true}, SHIFT(532),
  [2321] = {.count = 1, .reusable = true}, SHIFT(227),
  [2323] = {.count = 1, .reusable = true}, SHIFT(326),
  [2325] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_normal, 3),
  [2327] = {.count = 1, .reusable = true}, SHIFT(576),
  [2329] = {.count = 1, .reusable = true}, SHIFT(325),
  [2331] = {.count = 1, .reusable = true}, SHIFT(323),
  [2333] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_specular, 3),
  [2335] = {.count = 1, .reusable = true}, SHIFT(580),
  [2337] = {.count = 1, .reusable = true}, SHIFT(380),
  [2339] = {.count = 1, .reusable = true}, SHIFT(308),
  [2341] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader, 3),
  [2343] = {.count = 1, .reusable = true}, SHIFT(583),
  [2345] = {.count = 1, .reusable = true}, SHIFT(481),
  [2347] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader_file, 3),
  [2349] = {.count = 1, .reusable = true}, SHIFT(491),
  [2351] = {.count = 1, .reusable = true}, SHIFT(95),
  [2353] = {.count = 1, .reusable = true}, SHIFT(502),
  [2355] = {.count = 1, .reusable = true}, SHIFT(504),
  [2357] = {.count = 1, .reusable = true}, SHIFT(125),
  [2359] = {.count = 1, .reusable = true}, SHIFT(76),
  [2361] = {.count = 1, .reusable = true}, SHIFT(106),
  [2363] = {.count = 1, .reusable = true}, SHIFT(358),
  [2365] = {.count = 1, .reusable = true}, SHIFT(285),
  [2367] = {.count = 1, .reusable = true}, SHIFT(284),
  [2369] = {.count = 1, .reusable = true}, SHIFT(357),
  [2371] = {.count = 1, .reusable = true}, SHIFT(88),
  [2373] = {.count = 1, .reusable = true}, SHIFT(92),
  [2375] = {.count = 1, .reusable = true}, SHIFT(361),
  [2377] = {.count = 1, .reusable = true}, SHIFT(11),
  [2379] = {.count = 1, .reusable = true}, SHIFT(17),
  [2381] = {.count = 1, .reusable = true}, SHIFT(503),
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
