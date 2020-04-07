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
#define STATE_COUNT 536
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 359
#define ALIAS_COUNT 4
#define TOKEN_COUNT 180
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
  anon_sym_name = 24,
  anon_sym_x = 25,
  anon_sym_y = 26,
  anon_sym_path = 27,
  anon_sym_archive = 28,
  aux_sym__statement_mod_archive_token1 = 29,
  anon_sym_remote_file_id = 30,
  aux_sym__statement_mod_remote_file_id_token1 = 31,
  anon_sym_version = 32,
  aux_sym__statement_mod_version_token1 = 33,
  anon_sym_picture = 34,
  aux_sym__statement_mod_picture_token1 = 35,
  anon_sym_supported_version = 36,
  aux_sym__statement_mod_supported_version_token1 = 37,
  anon_sym_replace_path = 38,
  aux_sym__mod_replace_path_folder_token1 = 39,
  anon_sym_tags = 40,
  aux_sym__mod_tags_keyword_token1 = 41,
  aux_sym__mod_tags_keyword_token2 = 42,
  aux_sym__mod_tags_keyword_token3 = 43,
  aux_sym__mod_tags_keyword_token4 = 44,
  aux_sym__mod_tags_keyword_token5 = 45,
  aux_sym__mod_tags_keyword_token6 = 46,
  aux_sym__mod_tags_keyword_token7 = 47,
  aux_sym__mod_tags_keyword_token8 = 48,
  aux_sym__mod_tags_keyword_token9 = 49,
  aux_sym__mod_tags_keyword_token10 = 50,
  aux_sym__mod_tags_keyword_token11 = 51,
  aux_sym__mod_tags_keyword_token12 = 52,
  aux_sym__mod_tags_keyword_token13 = 53,
  aux_sym__mod_tags_keyword_token14 = 54,
  aux_sym__mod_tags_keyword_token15 = 55,
  aux_sym__mod_tags_keyword_token16 = 56,
  aux_sym__mod_tags_keyword_token17 = 57,
  aux_sym__mod_tags_keyword_token18 = 58,
  aux_sym__mod_tags_keyword_token19 = 59,
  aux_sym__mod_tags_keyword_token20 = 60,
  aux_sym__mod_tags_keyword_token21 = 61,
  aux_sym__mod_tags_keyword_token22 = 62,
  anon_sym_dependencies = 63,
  aux_sym__statement_gfx_name_token1 = 64,
  aux_sym__statement_gfx_name_token2 = 65,
  anon_sym_cursor_offset = 66,
  aux_sym__statement_gfx_textureFile_token1 = 67,
  aux_sym__statement_gfx_textureFile_token2 = 68,
  aux_sym__statement_gfx_textureFile1_token1 = 69,
  aux_sym__statement_gfx_textureFile2_token1 = 70,
  aux_sym__statement_gfx_textureFile3_token1 = 71,
  anon_sym_SEMI = 72,
  anon_sym_noOfFrames = 73,
  anon_sym_overlay_frames_per_row = 74,
  anon_sym_overlay_rows = 75,
  anon_sym_effectFile = 76,
  aux_sym__statement_gfx_effectFile_token1 = 77,
  anon_sym_animation = 78,
  anon_sym_animationmaskfile = 79,
  anon_sym_animationtexturefile = 80,
  aux_sym__animation_entry_dds_token1 = 81,
  anon_sym_animationrotation = 82,
  anon_sym_animationlooping = 83,
  anon_sym_animationtime = 84,
  anon_sym_animationdelay = 85,
  anon_sym_animationrotationoffset = 86,
  anon_sym_animationtexturescale = 87,
  anon_sym_animationblendmode = 88,
  anon_sym_DQUOTEadd_DQUOTE = 89,
  anon_sym_DQUOTEmultiply_DQUOTE = 90,
  anon_sym_DQUOTEoverlay_DQUOTE = 91,
  anon_sym_animationtype = 92,
  anon_sym_DQUOTEscrolling_DQUOTE = 93,
  anon_sym_DQUOTErotating_DQUOTE = 94,
  anon_sym_DQUOTEpulsing_DQUOTE = 95,
  anon_sym_animationframes = 96,
  anon_sym_size = 97,
  anon_sym_borderSize = 98,
  anon_sym_alwaystransparent = 99,
  anon_sym_allwaystransparent = 100,
  anon_sym_legacy_lazy_load = 101,
  anon_sym_clicksound = 102,
  anon_sym_click = 103,
  anon_sym_speed = 104,
  anon_sym_textblock = 105,
  anon_sym_text = 106,
  anon_sym_color = 107,
  anon_sym_colortwo = 108,
  anon_sym_font = 109,
  anon_sym_position = 110,
  anon_sym_format = 111,
  anon_sym_centre = 112,
  anon_sym_cull_distance = 113,
  anon_sym_B = 114,
  anon_sym_b = 115,
  anon_sym_G = 116,
  anon_sym_H = 117,
  anon_sym_l = 118,
  anon_sym_M = 119,
  anon_sym_O = 120,
  anon_sym_g = 121,
  anon_sym_R = 122,
  anon_sym_T = 123,
  anon_sym_W = 124,
  anon_sym_Y = 125,
  anon_sym_border_color = 126,
  anon_sym_animation_rate_fps = 127,
  anon_sym_looping = 128,
  anon_sym_play_on_show = 129,
  anon_sym_pause_on_loop = 130,
  anon_sym_horizontal = 131,
  anon_sym_file = 132,
  aux_sym__statement_gfx_file_token1 = 133,
  anon_sym_id = 134,
  anon_sym_type = 135,
  anon_sym_meshsettings = 136,
  anon_sym_index = 137,
  anon_sym_texture_diffuse = 138,
  anon_sym_texture_normal = 139,
  anon_sym_texture_specular = 140,
  anon_sym_shader = 141,
  aux_sym__statement_gfx_meshsettings_shader_token1 = 142,
  anon_sym_shader_file = 143,
  aux_sym__statement_gfx_meshsettings_shader_file_token1 = 144,
  anon_sym_scale = 145,
  anon_sym_transparencecheck = 146,
  anon_sym_loadType = 147,
  anon_sym_DQUOTEINGAME_DQUOTE = 148,
  anon_sym_DQUOTEFRONTEND_DQUOTE = 149,
  anon_sym_norefcount = 150,
  anon_sym_texture = 151,
  anon_sym_normal = 152,
  anon_sym_specular = 153,
  anon_sym_effect = 154,
  aux_sym__statement_gfx_effect_token1 = 155,
  anon_sym_alphamaskfile = 156,
  aux_sym__statement_gfx_alphamaskfile_token1 = 157,
  anon_sym_linewidth = 158,
  anon_sym_backGround = 159,
  anon_sym_moveable = 160,
  anon_sym_orientation = 161,
  sym_assign_equal = 162,
  sym_string = 163,
  sym_number = 164,
  sym_float = 165,
  aux_sym__float_positive_token1 = 166,
  sym_integer = 167,
  aux_sym__integer_positive_token1 = 168,
  sym_byte = 169,
  sym_hexadecimal = 170,
  sym_angle = 171,
  anon_sym_true = 172,
  anon_sym_false = 173,
  anon_sym_yes = 174,
  anon_sym_no = 175,
  anon_sym_0 = 176,
  anon_sym_1 = 177,
  sym_comment = 178,
  aux_sym__orientation_value_token1 = 179,
  sym_file = 180,
  sym_dot_mod = 181,
  sym_dot_gfx = 182,
  sym_dot_gui = 183,
  sym__gui_types_definition = 184,
  sym__spriteTypes = 185,
  sym__spriteTypes_block = 186,
  sym__spriteTypes_statement = 187,
  sym__spriteTypes_type = 188,
  sym__objectTypes = 189,
  sym__objectTypes_block = 190,
  sym__objectTypes_type = 191,
  sym__bitmapfonts = 192,
  sym__bitmapfonts_block = 193,
  sym__bitmapfonts_type = 194,
  sym__guiTypes = 195,
  sym__guiTypes_block = 196,
  sym__guiTypes_type = 197,
  sym__spriteType = 198,
  sym__spriteType_block = 199,
  sym__textSpriteType = 200,
  sym__textSpriteType_block = 201,
  sym__corneredTileSpriteType = 202,
  sym__corneredTileSpriteType_block = 203,
  sym__maskedShieldType = 204,
  sym__maskedShieldType_block = 205,
  sym__animatedmaptext = 206,
  sym__animatedmaptext_block = 207,
  sym__textcolors = 208,
  sym__textcolors_block = 209,
  sym__bitmapfont = 210,
  sym__bitmapfont_block = 211,
  sym__frameAnimatedSpriteType = 212,
  sym__frameAnimatedSpriteType_block = 213,
  sym__progressbartype = 214,
  sym__progressbartype_block = 215,
  sym__pdxmesh = 216,
  sym__pdxmesh_block = 217,
  sym__pdxparticle = 218,
  sym__pdxparticle_block = 219,
  sym__arrowType = 220,
  sym__arrowType_block = 221,
  sym__tradeRouteType = 222,
  sym__tradeRouteType_block = 223,
  sym__PieChartType = 224,
  sym__PieChartType_block = 225,
  sym__LineChartType = 226,
  sym__LineChartType_block = 227,
  sym__windowType = 228,
  sym__windowType_block = 229,
  sym__listBoxType = 230,
  sym__listBoxType_block = 231,
  sym__statement_name = 232,
  sym__statement_xy_integer = 233,
  sym__entry_x_integer = 234,
  sym__entry_y_integer = 235,
  sym__statement_xy_float = 236,
  sym__entry_x_float = 237,
  sym__entry_y_float = 238,
  sym__statement_mod_path = 239,
  sym__statement_mod_archive = 240,
  sym__statement_mod_remote_file_id = 241,
  sym__statement_mod_version = 242,
  sym__statement_mod_picture = 243,
  sym__statement_mod_supported_version = 244,
  sym__statement_mod_replace_path = 245,
  sym__mod_replace_path_folder = 246,
  sym__statement_mod_tags = 247,
  sym__mod_tags_block = 248,
  sym__mod_tags_keyword = 249,
  sym__statement_mod_dependencies = 250,
  sym__mod_dependencies_block = 251,
  sym__statement_gfx_name = 252,
  sym__statement_gfx_path = 253,
  sym__statement_gfx_cursor_offset = 254,
  sym__statement_gfx_textureFile = 255,
  sym__statement_gfx_textureFile1 = 256,
  sym__statement_gfx_textureFile2 = 257,
  sym__statement_gfx_textureFile3 = 258,
  sym__statement_gfx_noOfFrames = 259,
  sym__statement_gfx_overlay_frames_per_row = 260,
  sym__statement_gfx_overlay_rows = 261,
  sym__statement_gfx_effectFile = 262,
  sym__statement_gfx_animation = 263,
  sym__gfx_animation_block = 264,
  sym__animation_entry_dds = 265,
  sym__animation_entry_angle = 266,
  sym__animation_entry_bool = 267,
  sym__animation_entry_time = 268,
  sym__animation_entry_xy_float = 269,
  sym__animation_entry_blendmode = 270,
  sym__animation_entry_type = 271,
  sym__animation_entry_frames = 272,
  sym__statement_gfx_size_xy = 273,
  sym__statement_gfx_size_integer = 274,
  sym__statement_gfx_borderSize = 275,
  sym__statement_gfx_alwaystransparent = 276,
  sym__statement_gfx_allwaystransparent = 277,
  sym__statement_gfx_legacy_lazy_load = 278,
  sym__statement_gfx_clicksound = 279,
  sym__statement_gfx_speed = 280,
  sym__statement_gfx_textblock = 281,
  sym__gfx_textblock = 282,
  sym__statement_gfx_text = 283,
  sym__statement_gfx_color = 284,
  sym__statement_gfx_colortwo = 285,
  sym__statement_gfx_font = 286,
  sym__statement_gfx_position = 287,
  sym__statement_gfx_format = 288,
  sym__statement_gfx_cull_distance = 289,
  sym__statement_gfx_textcolors = 290,
  sym__statement_gfx_bitmapfont_color = 291,
  sym__statement_gfx_bitmapfont_border_color = 292,
  sym__statement_gfx_animation_rate_fps = 293,
  sym__statement_gfx_looping = 294,
  sym__statement_gfx_play_on_show = 295,
  sym__statement_gfx_pause_on_loop = 296,
  sym__statement_gfx_horizontal = 297,
  sym__statement_gfx_file = 298,
  sym__statement_gfx_pdxmesh_animation = 299,
  sym__statement_gfx_animation_id = 300,
  sym__statement_gfx_animation_type = 301,
  sym__statement_gfx_pdxmesh_meshsettings = 302,
  sym__statement_gfx_meshsettings_index = 303,
  sym__statement_gfx_meshsettings_texture_diffuse = 304,
  sym__statement_gfx_meshsettings_texture_normal = 305,
  sym__statement_gfx_meshsettings_texture_specular = 306,
  sym__statement_gfx_meshsettings_shader = 307,
  sym__statement_gfx_meshsettings_shader_file = 308,
  sym__statement_gfx_scale = 309,
  sym__statement_gfx_transparencecheck = 310,
  sym__statement_gfx_loadType = 311,
  sym__statement_gfx_norefcount = 312,
  sym__statement_gfx_texture = 313,
  sym__statement_gfx_normal = 314,
  sym__statement_gfx_specular = 315,
  sym__statement_gfx_effect = 316,
  sym__statement_gfx_effect_bool = 317,
  sym__statement_gfx_alphamaskfile = 318,
  sym__statement_gfx_linewidth = 319,
  sym__statement_gfx_type = 320,
  sym__statement_gui_backGround = 321,
  sym__statement_gui_position = 322,
  sym__statement_gui_size = 323,
  sym__statement_gui_moveable = 324,
  sym__statement_gui_orientation = 325,
  sym__float_positive = 326,
  sym__integer_positive = 327,
  sym__boolean_yes_no = 328,
  sym__boolean_0_1 = 329,
  sym__orientation_value = 330,
  aux_sym_dot_mod_repeat1 = 331,
  aux_sym_dot_gfx_repeat1 = 332,
  aux_sym_dot_gui_repeat1 = 333,
  aux_sym__spriteTypes_block_repeat1 = 334,
  aux_sym__objectTypes_block_repeat1 = 335,
  aux_sym__bitmapfonts_block_repeat1 = 336,
  aux_sym__guiTypes_block_repeat1 = 337,
  aux_sym__spriteType_block_repeat1 = 338,
  aux_sym__textSpriteType_block_repeat1 = 339,
  aux_sym__corneredTileSpriteType_block_repeat1 = 340,
  aux_sym__maskedShieldType_block_repeat1 = 341,
  aux_sym__animatedmaptext_block_repeat1 = 342,
  aux_sym__textcolors_block_repeat1 = 343,
  aux_sym__bitmapfont_block_repeat1 = 344,
  aux_sym__frameAnimatedSpriteType_block_repeat1 = 345,
  aux_sym__progressbartype_block_repeat1 = 346,
  aux_sym__pdxmesh_block_repeat1 = 347,
  aux_sym__pdxparticle_block_repeat1 = 348,
  aux_sym__arrowType_block_repeat1 = 349,
  aux_sym__tradeRouteType_block_repeat1 = 350,
  aux_sym__PieChartType_block_repeat1 = 351,
  aux_sym__LineChartType_block_repeat1 = 352,
  aux_sym__windowType_block_repeat1 = 353,
  aux_sym__mod_tags_block_repeat1 = 354,
  aux_sym__mod_dependencies_block_repeat1 = 355,
  aux_sym__gfx_animation_block_repeat1 = 356,
  aux_sym__animation_entry_frames_repeat1 = 357,
  aux_sym__gfx_textblock_repeat1 = 358,
  alias_sym_dependencies = 359,
  alias_sym_name_value = 360,
  alias_sym_statement = 361,
  alias_sym_type_definition = 362,
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
  [anon_sym_moveable] = "identifier",
  [anon_sym_orientation] = "identifier",
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
  [sym__statement_gui_position] = "statement",
  [sym__statement_gui_size] = "statement",
  [sym__statement_gui_moveable] = "statement",
  [sym__statement_gui_orientation] = "statement",
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
  [anon_sym_moveable] = anon_sym_spriteTypes,
  [anon_sym_orientation] = anon_sym_spriteTypes,
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
  [sym__statement_gui_position] = sym__listBoxType,
  [sym__statement_gui_size] = sym__listBoxType,
  [sym__statement_gui_moveable] = sym__listBoxType,
  [sym__statement_gui_orientation] = sym__listBoxType,
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
  [anon_sym_moveable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_orientation] = {
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
  [sym__statement_gui_position] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gui_size] = {
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
      if (eof) ADVANCE(1834);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '-') ADVANCE(1813);
      if (lookahead == '0') ADVANCE(2042);
      if (lookahead == '1') ADVANCE(2044);
      if (lookahead == '2') ADVANCE(2016);
      if (lookahead == ';') ADVANCE(1909);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == 'B') ADVANCE(1957);
      if (lookahead == 'G') ADVANCE(1960);
      if (lookahead == 'H') ADVANCE(1961);
      if (lookahead == 'L') ADVANCE(1256);
      if (lookahead == 'M') ADVANCE(1964);
      if (lookahead == 'O') ADVANCE(1965);
      if (lookahead == 'P') ADVANCE(1265);
      if (lookahead == 'R') ADVANCE(1968);
      if (lookahead == 'T') ADVANCE(1969);
      if (lookahead == 'W') ADVANCE(1970);
      if (lookahead == 'Y') ADVANCE(1971);
      if (lookahead == '\\') SKIP(1830)
      if (lookahead == 'a') ADVANCE(1328);
      if (lookahead == 'b') ADVANCE(1959);
      if (lookahead == 'c') ADVANCE(1125);
      if (lookahead == 'd') ADVANCE(1067);
      if (lookahead == 'e') ADVANCE(1213);
      if (lookahead == 'f') ADVANCE(926);
      if (lookahead == 'g') ADVANCE(1967);
      if (lookahead == 'h') ADVANCE(1455);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(1963);
      if (lookahead == 'm') ADVANCE(929);
      if (lookahead == 'n') ADVANCE(931);
      if (lookahead == 'o') ADVANCE(1002);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 'r') ADVANCE(1072);
      if (lookahead == 's') ADVANCE(1011);
      if (lookahead == 't') ADVANCE(944);
      if (lookahead == 'v') ADVANCE(1130);
      if (lookahead == 'w') ADVANCE(1264);
      if (lookahead == 'x') ADVANCE(1860);
      if (lookahead == 'y') ADVANCE(1862);
      if (lookahead == '{') ADVANCE(1836);
      if (lookahead == '}') ADVANCE(1837);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(2018);
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
      if (lookahead == '\n') SKIP(553)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(553)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(554)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(554)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(555)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(555)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(556)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(556)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(558)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(558)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(557)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(557)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(559)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(559)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(560)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(560)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(561)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(561)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(562)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(562)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(563)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(563)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(564)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(564)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(398);
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(846);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(847);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(841);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(845);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(843);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(844);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(842);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(569);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(459);
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(460);
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1867);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == 'A') ADVANCE(201);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(320);
      if (lookahead == 'F') ADVANCE(75);
      if (lookahead == 'G') ADVANCE(57);
      if (lookahead == 'H') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead == 'M') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(120);
      if (lookahead == 'R') ADVANCE(135);
      if (lookahead == 'S') ADVANCE(247);
      if (lookahead == 'U') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(245);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == 'p') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(299);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(90);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1867);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1867);
      if (lookahead == '.') ADVANCE(1820);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1867);
      if (lookahead == 'c') ADVANCE(1460);
      if (lookahead == 'd') ADVANCE(1152);
      if (lookahead == 'e') ADVANCE(1753);
      if (lookahead == 'g') ADVANCE(1215);
      if (lookahead == 'h') ADVANCE(1283);
      if (lookahead == 'i') ADVANCE(1438);
      if (lookahead == 'l') ADVANCE(1477);
      if (lookahead == 'm') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'j') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'z') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'j') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'z') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'D') ADVANCE(509);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'E') ADVANCE(499);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'G') ADVANCE(49);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'G') ADVANCE(61);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'L') ADVANCE(52);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'M') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'M') ADVANCE(152);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'O') ADVANCE(69);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'P') ADVANCE(73);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'P') ADVANCE(51);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'R') ADVANCE(333);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'R') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'S') ADVANCE(308);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'W') ADVANCE(51);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'X') ADVANCE(83);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '_') ADVANCE(333);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(326);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'j') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'z') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'j') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'z') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'j') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'z') ADVANCE(175);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(409);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(481);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'g') ADVANCE(26);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'g') ADVANCE(467);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'g') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'g') ADVANCE(505);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'g') ADVANCE(521);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'g') ADVANCE(527);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'g') ADVANCE(190);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'h') ADVANCE(333);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'h') ADVANCE(174);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'y') ADVANCE(430);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'j') ADVANCE(262);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'z') ADVANCE(175);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(430);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(298);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(407);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(216);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(497);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(513);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(217);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(211);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(235);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(265);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(137);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(143);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(145);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(265);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(430);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(142);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(503);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 330:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(511);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(515);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(519);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == 'F') ADVANCE(336);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == 'G') ADVANCE(334);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == 'X') ADVANCE(337);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '_') ADVANCE(338);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'd') ADVANCE(352);
      if (lookahead == 'j') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == 'z') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'C') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'I') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'I') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'K') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'd') ADVANCE(352);
      if (lookahead == 'j') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == 'z') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'd') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'd') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'd') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'g') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'g') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'h') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'p') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 's') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 396:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'u') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 397:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'y') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 398:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 399:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 400:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 401:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 402:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 403:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 404:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 406:
      if (lookahead == '"') ADVANCE(2014);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(406);
      END_STATE();
    case 407:
      if (lookahead == '"') ADVANCE(1887);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 408:
      if (lookahead == '"') ADVANCE(1887);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 409:
      if (lookahead == '"') ADVANCE(1928);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 410:
      if (lookahead == '"') ADVANCE(1928);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 411:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(430);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 412:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 413:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'd') ADVANCE(414);
      if (lookahead == 'j') ADVANCE(424);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(423);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == 'z') ADVANCE(422);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 414:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 415:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 416:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 417:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 418:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'g') ADVANCE(411);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 419:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'g') ADVANCE(470);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 420:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 421:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'h') ADVANCE(412);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 422:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 423:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 424:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(419);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 425:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(475);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 426:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 427:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 428:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 's') ADVANCE(420);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 429:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'u') ADVANCE(411);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 430:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 431:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 432:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 433:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 434:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 435:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(436);
      if (lookahead == 'j') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(440);
      if (lookahead == 'p') ADVANCE(449);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == 't') ADVANCE(441);
      if (lookahead == 'z') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 436:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 437:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 438:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 439:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 440:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 441:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'g') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 442:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'g') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 443:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'h') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 444:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'h') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 445:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 446:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 447:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 448:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 449:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 450:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 451:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 452:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 453:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 454:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 455:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 456:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 457:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 458:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'u') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 459:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 460:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 462:
      if (lookahead == '"') ADVANCE(1875);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(462);
      END_STATE();
    case 463:
      if (lookahead == '"') ADVANCE(1869);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 464:
      if (lookahead == '"') ADVANCE(1869);
      if (lookahead == '.') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 465:
      if (lookahead == '"') ADVANCE(1869);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 466:
      if (lookahead == '"') ADVANCE(1869);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 467:
      if (lookahead == '"') ADVANCE(1871);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 468:
      if (lookahead == '"') ADVANCE(1871);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 469:
      if (lookahead == '"') ADVANCE(1871);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 470:
      if (lookahead == '"') ADVANCE(1871);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 471:
      if (lookahead == '"') ADVANCE(1871);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 472:
      if (lookahead == '"') ADVANCE(1865);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 473:
      if (lookahead == '"') ADVANCE(1865);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 474:
      if (lookahead == '"') ADVANCE(1865);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 475:
      if (lookahead == '"') ADVANCE(1865);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 476:
      if (lookahead == '"') ADVANCE(1865);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 477:
      if (lookahead == '"') ADVANCE(1881);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 478:
      if (lookahead == '"') ADVANCE(1881);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 479:
      if (lookahead == '"') ADVANCE(1884);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 480:
      if (lookahead == '"') ADVANCE(1884);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 481:
      if (lookahead == '"') ADVANCE(1893);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 482:
      if (lookahead == '"') ADVANCE(1893);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 483:
      if (lookahead == '"') ADVANCE(1895);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 484:
      if (lookahead == '"') ADVANCE(1895);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 485:
      if (lookahead == '"') ADVANCE(1873);
      END_STATE();
    case 486:
      if (lookahead == '"') ADVANCE(1873);
      if (lookahead == '.') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 487:
      if (lookahead == '"') ADVANCE(1873);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 488:
      if (lookahead == '"') ADVANCE(1873);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 489:
      if (lookahead == '"') ADVANCE(1873);
      if (lookahead == '.') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 490:
      if (lookahead == '"') ADVANCE(1873);
      if (lookahead == '.') ADVANCE(566);
      END_STATE();
    case 491:
      if (lookahead == '"') ADVANCE(1873);
      if (lookahead == '.') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 492:
      if (lookahead == '"') ADVANCE(1873);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      END_STATE();
    case 493:
      if (lookahead == '"') ADVANCE(1905);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 494:
      if (lookahead == '"') ADVANCE(1905);
      if (lookahead == '.') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(861);
      END_STATE();
    case 495:
      if (lookahead == '"') ADVANCE(1914);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 496:
      if (lookahead == '"') ADVANCE(1914);
      if (lookahead == '.') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(861);
      END_STATE();
    case 497:
      if (lookahead == '"') ADVANCE(1879);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 498:
      if (lookahead == '"') ADVANCE(1879);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 499:
      if (lookahead == '"') ADVANCE(1995);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 500:
      if (lookahead == '"') ADVANCE(1995);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 501:
      if (lookahead == '"') ADVANCE(1979);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 502:
      if (lookahead == '"') ADVANCE(1979);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 503:
      if (lookahead == '"') ADVANCE(1930);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 504:
      if (lookahead == '"') ADVANCE(1930);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 505:
      if (lookahead == '"') ADVANCE(1934);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 506:
      if (lookahead == '"') ADVANCE(1934);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 507:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 508:
      if (lookahead == '"') ADVANCE(1878);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 509:
      if (lookahead == '"') ADVANCE(1996);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 510:
      if (lookahead == '"') ADVANCE(1996);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 511:
      if (lookahead == '"') ADVANCE(1882);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 512:
      if (lookahead == '"') ADVANCE(1882);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 513:
      if (lookahead == '"') ADVANCE(1883);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 514:
      if (lookahead == '"') ADVANCE(1883);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 515:
      if (lookahead == '"') ADVANCE(1888);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 516:
      if (lookahead == '"') ADVANCE(1888);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 517:
      if (lookahead == '"') ADVANCE(1892);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 518:
      if (lookahead == '"') ADVANCE(1892);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 519:
      if (lookahead == '"') ADVANCE(1929);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 520:
      if (lookahead == '"') ADVANCE(1929);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 521:
      if (lookahead == '"') ADVANCE(1933);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 522:
      if (lookahead == '"') ADVANCE(1933);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 523:
      if (lookahead == '"') ADVANCE(1880);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 524:
      if (lookahead == '"') ADVANCE(1880);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 525:
      if (lookahead == '"') ADVANCE(1897);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 526:
      if (lookahead == '"') ADVANCE(1897);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 527:
      if (lookahead == '"') ADVANCE(1932);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 528:
      if (lookahead == '"') ADVANCE(1932);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 529:
      if (lookahead == '"') ADVANCE(1885);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 530:
      if (lookahead == '"') ADVANCE(1885);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 531:
      if (lookahead == '"') ADVANCE(1891);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 532:
      if (lookahead == '"') ADVANCE(1891);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 533:
      if (lookahead == '"') ADVANCE(1896);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 534:
      if (lookahead == '"') ADVANCE(1896);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 535:
      if (lookahead == '"') ADVANCE(1894);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 536:
      if (lookahead == '"') ADVANCE(1894);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 537:
      if (lookahead == '"') ADVANCE(1886);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 538:
      if (lookahead == '"') ADVANCE(1886);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 539:
      if (lookahead == '"') ADVANCE(1890);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 540:
      if (lookahead == '"') ADVANCE(1890);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 541:
      if (lookahead == '"') ADVANCE(1877);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 542:
      if (lookahead == '"') ADVANCE(1877);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 543:
      if (lookahead == '"') ADVANCE(1898);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 544:
      if (lookahead == '"') ADVANCE(1898);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 545:
      if (lookahead == '"') ADVANCE(1889);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 546:
      if (lookahead == '"') ADVANCE(1889);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 547:
      if (lookahead == '"') ADVANCE(1920);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 548:
      if (lookahead == '"') ADVANCE(2006);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 549:
      if (lookahead == '"') ADVANCE(2008);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 550:
      if (lookahead == '"') ADVANCE(2046);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 551:
      if (lookahead == '"') ADVANCE(1991);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 552:
      if (lookahead == '"') ADVANCE(1989);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 553:
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '0') ADVANCE(2041);
      if (lookahead == '1') ADVANCE(2043);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == 'L') ADVANCE(1256);
      if (lookahead == 'P') ADVANCE(1265);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(1331);
      if (lookahead == 'b') ADVANCE(1311);
      if (lookahead == 'c') ADVANCE(1376);
      if (lookahead == 'e') ADVANCE(1235);
      if (lookahead == 'f') ADVANCE(1261);
      if (lookahead == 'l') ADVANCE(1071);
      if (lookahead == 'm') ADVANCE(928);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == 'o') ADVANCE(1752);
      if (lookahead == 'p') ADVANCE(1563);
      if (lookahead == 's') ADVANCE(1013);
      if (lookahead == 't') ADVANCE(1181);
      if (lookahead == '}') ADVANCE(1837);
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
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead == 'b') ADVANCE(1510);
      if (lookahead == 'c') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1235);
      if (lookahead == 'h') ADVANCE(1455);
      if (lookahead == 'l') ADVANCE(1069);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == 'o') ADVANCE(1752);
      if (lookahead == 'p') ADVANCE(982);
      if (lookahead == 's') ADVANCE(1257);
      if (lookahead == 't') ADVANCE(1185);
      if (lookahead == '}') ADVANCE(1837);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(554)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2024);
      END_STATE();
    case 555:
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '0') ADVANCE(2028);
      if (lookahead == '1') ADVANCE(2032);
      if (lookahead == '2') ADVANCE(2029);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(1344);
      if (lookahead == 'c') ADVANCE(1380);
      if (lookahead == 'e') ADVANCE(1235);
      if (lookahead == 'l') ADVANCE(1454);
      if (lookahead == 'n') ADVANCE(933);
      if (lookahead == 'o') ADVANCE(1752);
      if (lookahead == 'p') ADVANCE(982);
      if (lookahead == 't') ADVANCE(1208);
      if (lookahead == '}') ADVANCE(1837);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(2031);
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
      if (lookahead == '"') ADVANCE(1828);
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '-') ADVANCE(1816);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead == 'b') ADVANCE(1510);
      if (lookahead == 'c') ADVANCE(1379);
      if (lookahead == 'e') ADVANCE(1213);
      if (lookahead == 'l') ADVANCE(1070);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == 'o') ADVANCE(1752);
      if (lookahead == 'p') ADVANCE(982);
      if (lookahead == 's') ADVANCE(1257);
      if (lookahead == 't') ADVANCE(1209);
      if (lookahead == '}') ADVANCE(1837);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(556)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2026);
      END_STATE();
    case 557:
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '-') ADVANCE(1818);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'c') ADVANCE(1506);
      if (lookahead == 'e') ADVANCE(1235);
      if (lookahead == 'h') ADVANCE(1455);
      if (lookahead == 'l') ADVANCE(1492);
      if (lookahead == 'n') ADVANCE(933);
      if (lookahead == 'o') ADVANCE(1752);
      if (lookahead == 's') ADVANCE(1257);
      if (lookahead == 't') ADVANCE(1210);
      if (lookahead == '}') ADVANCE(1837);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(557)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2021);
      END_STATE();
    case 558:
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '0') ADVANCE(866);
      if (lookahead == '3') ADVANCE(865);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead == 'b') ADVANCE(1510);
      if (lookahead == 'c') ADVANCE(1375);
      if (lookahead == 'e') ADVANCE(1235);
      if (lookahead == 'l') ADVANCE(1070);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == 'o') ADVANCE(1752);
      if (lookahead == 'p') ADVANCE(982);
      if (lookahead == 's') ADVANCE(1257);
      if (lookahead == 't') ADVANCE(1208);
      if (lookahead == '}') ADVANCE(1837);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(868);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(867);
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
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == ';') ADVANCE(1909);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'c') ADVANCE(1507);
      if (lookahead == 'e') ADVANCE(1213);
      if (lookahead == 'h') ADVANCE(1455);
      if (lookahead == 'l') ADVANCE(1492);
      if (lookahead == 'n') ADVANCE(933);
      if (lookahead == 'o') ADVANCE(1752);
      if (lookahead == 's') ADVANCE(1257);
      if (lookahead == 't') ADVANCE(1185);
      if (lookahead == '}') ADVANCE(1837);
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
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == 'B') ADVANCE(1957);
      if (lookahead == 'G') ADVANCE(1960);
      if (lookahead == 'H') ADVANCE(1961);
      if (lookahead == 'M') ADVANCE(1964);
      if (lookahead == 'O') ADVANCE(1965);
      if (lookahead == 'R') ADVANCE(1968);
      if (lookahead == 'T') ADVANCE(1969);
      if (lookahead == 'W') ADVANCE(1970);
      if (lookahead == 'Y') ADVANCE(1971);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(1450);
      if (lookahead == 'b') ADVANCE(1958);
      if (lookahead == 'c') ADVANCE(1509);
      if (lookahead == 'e') ADVANCE(1237);
      if (lookahead == 'f') ADVANCE(1260);
      if (lookahead == 'g') ADVANCE(1966);
      if (lookahead == 'l') ADVANCE(1962);
      if (lookahead == 'm') ADVANCE(1126);
      if (lookahead == 'n') ADVANCE(934);
      if (lookahead == 'p') ADVANCE(1458);
      if (lookahead == 's') ADVANCE(1014);
      if (lookahead == 't') ADVANCE(1187);
      if (lookahead == 'y') ADVANCE(1137);
      if (lookahead == '}') ADVANCE(1837);
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
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == 'L') ADVANCE(1256);
      if (lookahead == 'P') ADVANCE(1265);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'b') ADVANCE(1312);
      if (lookahead == 'c') ADVANCE(1503);
      if (lookahead == 'e') ADVANCE(1237);
      if (lookahead == 'f') ADVANCE(1554);
      if (lookahead == 'm') ADVANCE(927);
      if (lookahead == 'n') ADVANCE(930);
      if (lookahead == 'p') ADVANCE(968);
      if (lookahead == 's') ADVANCE(1553);
      if (lookahead == 't') ADVANCE(1192);
      if (lookahead == '}') ADVANCE(1837);
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
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'c') ADVANCE(1509);
      if (lookahead == 'f') ADVANCE(1452);
      if (lookahead == 'p') ADVANCE(1458);
      if (lookahead == 's') ADVANCE(1257);
      if (lookahead == 't') ADVANCE(1189);
      if (lookahead == '}') ADVANCE(1837);
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
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'e') ADVANCE(1237);
      if (lookahead == 'n') ADVANCE(936);
      if (lookahead == 's') ADVANCE(1548);
      if (lookahead == 't') ADVANCE(1199);
      if (lookahead == '}') ADVANCE(1837);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(563)
      END_STATE();
    case 564:
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'c') ADVANCE(1733);
      if (lookahead == 'e') ADVANCE(1237);
      if (lookahead == 'n') ADVANCE(936);
      if (lookahead == 's') ADVANCE(1548);
      if (lookahead == 't') ADVANCE(1201);
      if (lookahead == '}') ADVANCE(1837);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(564)
      END_STATE();
    case 565:
      if (lookahead == '*') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 566:
      if (lookahead == '*') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      END_STATE();
    case 567:
      if (lookahead == '.') ADVANCE(716);
      if (lookahead == 'A') ADVANCE(717);
      if (lookahead == 'C') ADVANCE(573);
      if (lookahead == 'F') ADVANCE(596);
      if (lookahead == 'I') ADVANCE(588);
      if (lookahead == 'L') ADVANCE(592);
      if (lookahead == 'M') ADVANCE(609);
      if (lookahead == 'P') ADVANCE(638);
      if (lookahead == 'R') ADVANCE(655);
      if (lookahead == 'S') ADVANCE(757);
      if (lookahead == 'U') ADVANCE(594);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'c') ADVANCE(759);
      if (lookahead == 'f') ADVANCE(689);
      if (lookahead == 'l') ADVANCE(758);
      if (lookahead == 'm') ADVANCE(608);
      if (lookahead == 'o') ADVANCE(829);
      if (lookahead == 'p') ADVANCE(826);
      if (lookahead == 'r') ADVANCE(654);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 'u') ADVANCE(810);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(610);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(605);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(690);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(623);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 568:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'A') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 569:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'C') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 570:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'D') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 571:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'E') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 572:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'E') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 573:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'E') ADVANCE(589);
      if (lookahead == 'o') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 574:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'E') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 575:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'E') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 576:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'E') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 577:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'F') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 578:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'G') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 579:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'G') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 580:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'H') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 581:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'I') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 582:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'I') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 583:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'I') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 584:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'K') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 585:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'R') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 586:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'M') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 587:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'M') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 588:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'N') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 589:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'N') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 590:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'N') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 591:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'N') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 592:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'O') ADVANCE(603);
      if (lookahead == 'o') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 593:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'O') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 594:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'P') ADVANCE(595);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 595:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'P') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 596:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'R') ADVANCE(593);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 597:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'R') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 598:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'R') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 599:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'S') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 600:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'T') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 601:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'T') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 602:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'T') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 603:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'W') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 604:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '_') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 605:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(733);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == 'u') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 606:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 607:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 608:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead == 'u') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 609:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 610:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 611:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 612:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 613:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 614:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 615:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 616:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 617:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 618:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 619:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 620:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 621:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 622:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 623:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 624:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 625:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 626:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 627:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 628:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 629:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 630:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'c') ADVANCE(780);
      if (lookahead == 'o') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 631:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'c') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 632:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'c') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 633:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'c') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 634:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'c') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 635:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'c') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 636:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'c') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 637:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(648);
      if (lookahead == 'l') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 638:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 639:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(641);
      if (lookahead == 'j') ADVANCE(773);
      if (lookahead == 'l') ADVANCE(828);
      if (lookahead == 'm') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(736);
      if (lookahead == 's') ADVANCE(688);
      if (lookahead == 't') ADVANCE(681);
      if (lookahead == 'z') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 640:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(641);
      if (lookahead == 'j') ADVANCE(773);
      if (lookahead == 'l') ADVANCE(828);
      if (lookahead == 'm') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(736);
      if (lookahead == 's') ADVANCE(688);
      if (lookahead == 't') ADVANCE(681);
      if (lookahead == 'z') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 641:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 642:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 643:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 644:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 645:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 646:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 647:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 648:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 649:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 650:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 651:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(668);
      if (lookahead == 'n') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 652:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 653:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 654:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(722);
      if (lookahead == 'o') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 655:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 656:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 657:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 658:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 659:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 660:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 661:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 662:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 663:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 664:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 665:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 666:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 667:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 668:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 669:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 670:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 671:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 672:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 673:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 674:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 675:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 676:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 677:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'g') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 678:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'g') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 679:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'g') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 680:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'g') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 681:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'g') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 682:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'g') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 683:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'g') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 684:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'h') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 685:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'h') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 686:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'h') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 687:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'h') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 688:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'h') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 689:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 690:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 691:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 692:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 693:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 694:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 695:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 696:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 697:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 698:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 699:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 700:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 701:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 702:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 703:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 704:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 705:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 706:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 707:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 708:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 709:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 710:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 711:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 712:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 713:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 714:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 715:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 716:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'j') ADVANCE(773);
      if (lookahead == 'p') ADVANCE(736);
      if (lookahead == 'z') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 717:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 718:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 719:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 720:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(701);
      if (lookahead == 's') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 721:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 722:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 723:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 724:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 725:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 726:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 727:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 728:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 729:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 730:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 731:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 732:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 733:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'm') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 734:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 735:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 736:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 737:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 738:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 739:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 740:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 741:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 742:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 743:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 744:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 745:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 746:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 747:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 748:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 749:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 750:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 751:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 752:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 753:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 754:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 755:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 756:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'n') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 757:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 758:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 759:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 760:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 761:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 762:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 763:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 764:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 765:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 766:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 767:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 768:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 769:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 770:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 771:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 772:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 773:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 774:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 775:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 776:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 777:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 778:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 779:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 780:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 781:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 782:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 783:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 784:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 785:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 786:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 787:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 788:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 789:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 790:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 791:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 792:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 793:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 794:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 795:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 796:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 797:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 798:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 799:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 800:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 801:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 802:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 803:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 804:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 805:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 806:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 807:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 808:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 809:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 's') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 810:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 811:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 812:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 813:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 814:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 815:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 816:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 817:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 818:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 819:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 820:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 821:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 822:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 823:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 824:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 825:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 't') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 826:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 827:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 828:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 829:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'v') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 830:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == 'x') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 831:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'v') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 832:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'v') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 833:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 834:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'x') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 835:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'x') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 836:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'y') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 837:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'y') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 838:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'y') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 839:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'y') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 840:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'y') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 841:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 842:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 843:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 844:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 845:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 846:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 847:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 848:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 849:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 'a') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 850:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 851:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 852:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 'd') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 853:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 'd') ADVANCE(852);
      if (lookahead == 'l') ADVANCE(860);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead == 't') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 854:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 'd') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 855:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 'e') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 856:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 'g') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 857:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 'h') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 858:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 859:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 860:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead == 'u') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 861:
      if (lookahead == '.') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 862:
      if (lookahead == '.') ADVANCE(869);
      END_STATE();
    case 863:
      if (lookahead == '.') ADVANCE(1817);
      END_STATE();
    case 864:
      if (lookahead == '.') ADVANCE(1817);
      if (lookahead == '0') ADVANCE(862);
      END_STATE();
    case 865:
      if (lookahead == '.') ADVANCE(1817);
      if (lookahead == '6') ADVANCE(864);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(867);
      END_STATE();
    case 866:
      if (lookahead == '.') ADVANCE(1817);
      if (lookahead == 'x') ADVANCE(1827);
      END_STATE();
    case 867:
      if (lookahead == '.') ADVANCE(1817);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(863);
      END_STATE();
    case 868:
      if (lookahead == '.') ADVANCE(1817);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(867);
      END_STATE();
    case 869:
      if (lookahead == '0') ADVANCE(2035);
      END_STATE();
    case 870:
      if (lookahead == '1') ADVANCE(1906);
      if (lookahead == '2') ADVANCE(1907);
      if (lookahead == '3') ADVANCE(1908);
      END_STATE();
    case 871:
      if (lookahead == 'A') ADVANCE(1447);
      END_STATE();
    case 872:
      if (lookahead == 'B') ADVANCE(1461);
      END_STATE();
    case 873:
      if (lookahead == 'C') ADVANCE(1249);
      END_STATE();
    case 874:
      if (lookahead == 'C') ADVANCE(1255);
      END_STATE();
    case 875:
      if (lookahead == 'F') ADVANCE(1597);
      END_STATE();
    case 876:
      if (lookahead == 'F') ADVANCE(1285);
      END_STATE();
    case 877:
      if (lookahead == 'G') ADVANCE(1568);
      END_STATE();
    case 878:
      if (lookahead == 'O') ADVANCE(1212);
      END_STATE();
    case 879:
      if (lookahead == 'O') ADVANCE(1212);
      if (lookahead == 'r') ADVANCE(1134);
      END_STATE();
    case 880:
      if (lookahead == 'O') ADVANCE(1212);
      if (lookahead == 'r') ADVANCE(1133);
      END_STATE();
    case 881:
      if (lookahead == 'R') ADVANCE(1464);
      END_STATE();
    case 882:
      if (lookahead == 'S') ADVANCE(1539);
      if (lookahead == 'c') ADVANCE(1508);
      if (lookahead == 'u') ADVANCE(1583);
      END_STATE();
    case 883:
      if (lookahead == 'S') ADVANCE(1539);
      if (lookahead == 'c') ADVANCE(1508);
      if (lookahead == 'u') ADVANCE(1607);
      END_STATE();
    case 884:
      if (lookahead == 'S') ADVANCE(1253);
      END_STATE();
    case 885:
      if (lookahead == 'S') ADVANCE(1280);
      END_STATE();
    case 886:
      if (lookahead == 'S') ADVANCE(1280);
      if (lookahead == '_') ADVANCE(1025);
      END_STATE();
    case 887:
      if (lookahead == 'S') ADVANCE(1551);
      END_STATE();
    case 888:
      if (lookahead == 'S') ADVANCE(1552);
      END_STATE();
    case 889:
      if (lookahead == 'T') ADVANCE(1787);
      END_STATE();
    case 890:
      if (lookahead == 'T') ADVANCE(1788);
      END_STATE();
    case 891:
      if (lookahead == 'T') ADVANCE(1789);
      END_STATE();
    case 892:
      if (lookahead == 'T') ADVANCE(1790);
      END_STATE();
    case 893:
      if (lookahead == 'T') ADVANCE(1791);
      END_STATE();
    case 894:
      if (lookahead == 'T') ADVANCE(1297);
      END_STATE();
    case 895:
      if (lookahead == 'T') ADVANCE(1792);
      END_STATE();
    case 896:
      if (lookahead == 'T') ADVANCE(1793);
      END_STATE();
    case 897:
      if (lookahead == 'T') ADVANCE(1794);
      END_STATE();
    case 898:
      if (lookahead == 'T') ADVANCE(1795);
      END_STATE();
    case 899:
      if (lookahead == 'T') ADVANCE(1796);
      END_STATE();
    case 900:
      if (lookahead == 'T') ADVANCE(1797);
      END_STATE();
    case 901:
      if (lookahead == 'T') ADVANCE(1799);
      END_STATE();
    case 902:
      if (lookahead == 'T') ADVANCE(1800);
      END_STATE();
    case 903:
      if (lookahead == 'T') ADVANCE(1801);
      END_STATE();
    case 904:
      if (lookahead == 'T') ADVANCE(1802);
      END_STATE();
    case 905:
      if (lookahead == '_') ADVANCE(1236);
      END_STATE();
    case 906:
      if (lookahead == '_') ADVANCE(1051);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1301);
      END_STATE();
    case 907:
      if (lookahead == '_') ADVANCE(1050);
      END_STATE();
    case 908:
      if (lookahead == '_') ADVANCE(1226);
      END_STATE();
    case 909:
      if (lookahead == '_') ADVANCE(1467);
      END_STATE();
    case 910:
      if (lookahead == '_') ADVANCE(1220);
      END_STATE();
    case 911:
      if (lookahead == '_') ADVANCE(1495);
      END_STATE();
    case 912:
      if (lookahead == '_') ADVANCE(1273);
      END_STATE();
    case 913:
      if (lookahead == '_') ADVANCE(1595);
      if (lookahead == 'b') ADVANCE(1356);
      if (lookahead == 'd') ADVANCE(1183);
      if (lookahead == 'f') ADVANCE(1603);
      if (lookahead == 'l') ADVANCE(1491);
      if (lookahead == 'm') ADVANCE(999);
      if (lookahead == 'r') ADVANCE(1512);
      if (lookahead == 't') ADVANCE(1197);
      END_STATE();
    case 914:
      if (lookahead == '_') ADVANCE(1025);
      END_STATE();
    case 915:
      if (lookahead == '_') ADVANCE(1574);
      END_STATE();
    case 916:
      if (lookahead == '_') ADVANCE(1542);
      END_STATE();
    case 917:
      if (lookahead == '_') ADVANCE(1345);
      END_STATE();
    case 918:
      if (lookahead == '_') ADVANCE(1754);
      END_STATE();
    case 919:
      if (lookahead == '_') ADVANCE(1638);
      END_STATE();
    case 920:
      if (lookahead == '_') ADVANCE(1347);
      END_STATE();
    case 921:
      if (lookahead == '_') ADVANCE(1474);
      END_STATE();
    case 922:
      if (lookahead == '_') ADVANCE(1346);
      END_STATE();
    case 923:
      if (lookahead == '_') ADVANCE(1545);
      END_STATE();
    case 924:
      if (lookahead == '_') ADVANCE(1229);
      END_STATE();
    case 925:
      if (lookahead == 'a') ADVANCE(1006);
      if (lookahead == 'i') ADVANCE(1717);
      if (lookahead == 'o') ADVANCE(1602);
      END_STATE();
    case 926:
      if (lookahead == 'a') ADVANCE(1340);
      if (lookahead == 'i') ADVANCE(1341);
      if (lookahead == 'o') ADVANCE(1418);
      if (lookahead == 'r') ADVANCE(970);
      END_STATE();
    case 927:
      if (lookahead == 'a') ADVANCE(1629);
      END_STATE();
    case 928:
      if (lookahead == 'a') ADVANCE(1629);
      if (lookahead == 'e') ADVANCE(1632);
      END_STATE();
    case 929:
      if (lookahead == 'a') ADVANCE(1629);
      if (lookahead == 'e') ADVANCE(1632);
      if (lookahead == 'o') ADVANCE(1750);
      END_STATE();
    case 930:
      if (lookahead == 'a') ADVANCE(1386);
      END_STATE();
    case 931:
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'o') ADVANCE(2040);
      END_STATE();
    case 932:
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'o') ADVANCE(879);
      END_STATE();
    case 933:
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'o') ADVANCE(878);
      END_STATE();
    case 934:
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'o') ADVANCE(2039);
      END_STATE();
    case 935:
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'o') ADVANCE(880);
      END_STATE();
    case 936:
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'o') ADVANCE(1596);
      END_STATE();
    case 937:
      if (lookahead == 'a') ADVANCE(1682);
      if (lookahead == 'd') ADVANCE(1764);
      if (lookahead == 'i') ADVANCE(1016);
      if (lookahead == 'l') ADVANCE(939);
      if (lookahead == 'o') ADVANCE(1635);
      if (lookahead == 'r') ADVANCE(1457);
      END_STATE();
    case 938:
      if (lookahead == 'a') ADVANCE(1682);
      if (lookahead == 'i') ADVANCE(1016);
      if (lookahead == 'l') ADVANCE(939);
      if (lookahead == 'o') ADVANCE(1635);
      END_STATE();
    case 939:
      if (lookahead == 'a') ADVANCE(1782);
      END_STATE();
    case 940:
      if (lookahead == 'a') ADVANCE(1004);
      END_STATE();
    case 941:
      if (lookahead == 'a') ADVANCE(1053);
      if (lookahead == 'u') ADVANCE(1079);
      END_STATE();
    case 942:
      if (lookahead == 'a') ADVANCE(1063);
      END_STATE();
    case 943:
      if (lookahead == 'a') ADVANCE(1063);
      if (lookahead == 'o') ADVANCE(1540);
      END_STATE();
    case 944:
      if (lookahead == 'a') ADVANCE(1241);
      if (lookahead == 'e') ADVANCE(1766);
      if (lookahead == 'r') ADVANCE(941);
      if (lookahead == 'y') ADVANCE(1518);
      END_STATE();
    case 945:
      if (lookahead == 'a') ADVANCE(1241);
      if (lookahead == 'e') ADVANCE(1768);
      if (lookahead == 'r') ADVANCE(990);
      if (lookahead == 'y') ADVANCE(1518);
      END_STATE();
    case 946:
      if (lookahead == 'a') ADVANCE(1786);
      END_STATE();
    case 947:
      if (lookahead == 'a') ADVANCE(1034);
      END_STATE();
    case 948:
      if (lookahead == 'a') ADVANCE(1808);
      END_STATE();
    case 949:
      if (lookahead == 'a') ADVANCE(1781);
      END_STATE();
    case 950:
      if (lookahead == 'a') ADVANCE(1029);
      END_STATE();
    case 951:
      if (lookahead == 'a') ADVANCE(1517);
      END_STATE();
    case 952:
      if (lookahead == 'a') ADVANCE(1335);
      END_STATE();
    case 953:
      if (lookahead == 'a') ADVANCE(1544);
      END_STATE();
    case 954:
      if (lookahead == 'a') ADVANCE(1664);
      END_STATE();
    case 955:
      if (lookahead == 'a') ADVANCE(1336);
      END_STATE();
    case 956:
      if (lookahead == 'a') ADVANCE(1666);
      END_STATE();
    case 957:
      if (lookahead == 'a') ADVANCE(1592);
      END_STATE();
    case 958:
      if (lookahead == 'a') ADVANCE(1514);
      if (lookahead == 'i') ADVANCE(1655);
      END_STATE();
    case 959:
      if (lookahead == 'a') ADVANCE(1337);
      END_STATE();
    case 960:
      if (lookahead == 'a') ADVANCE(1448);
      END_STATE();
    case 961:
      if (lookahead == 'a') ADVANCE(1368);
      END_STATE();
    case 962:
      if (lookahead == 'a') ADVANCE(1610);
      END_STATE();
    case 963:
      if (lookahead == 'a') ADVANCE(1558);
      END_STATE();
    case 964:
      if (lookahead == 'a') ADVANCE(1045);
      END_STATE();
    case 965:
      if (lookahead == 'a') ADVANCE(1573);
      END_STATE();
    case 966:
      if (lookahead == 'a') ADVANCE(1685);
      END_STATE();
    case 967:
      if (lookahead == 'a') ADVANCE(1560);
      END_STATE();
    case 968:
      if (lookahead == 'a') ADVANCE(1681);
      if (lookahead == 'r') ADVANCE(1457);
      END_STATE();
    case 969:
      if (lookahead == 'a') ADVANCE(1633);
      END_STATE();
    case 970:
      if (lookahead == 'a') ADVANCE(1388);
      END_STATE();
    case 971:
      if (lookahead == 'a') ADVANCE(1348);
      END_STATE();
    case 972:
      if (lookahead == 'a') ADVANCE(1393);
      END_STATE();
    case 973:
      if (lookahead == 'a') ADVANCE(1785);
      END_STATE();
    case 974:
      if (lookahead == 'a') ADVANCE(1387);
      END_STATE();
    case 975:
      if (lookahead == 'a') ADVANCE(1394);
      END_STATE();
    case 976:
      if (lookahead == 'a') ADVANCE(1033);
      END_STATE();
    case 977:
      if (lookahead == 'a') ADVANCE(1697);
      END_STATE();
    case 978:
      if (lookahead == 'a') ADVANCE(1396);
      END_STATE();
    case 979:
      if (lookahead == 'a') ADVANCE(1581);
      END_STATE();
    case 980:
      if (lookahead == 'a') ADVANCE(1598);
      END_STATE();
    case 981:
      if (lookahead == 'a') ADVANCE(1362);
      END_STATE();
    case 982:
      if (lookahead == 'a') ADVANCE(1736);
      if (lookahead == 'l') ADVANCE(939);
      END_STATE();
    case 983:
      if (lookahead == 'a') ADVANCE(1700);
      END_STATE();
    case 984:
      if (lookahead == 'a') ADVANCE(1445);
      END_STATE();
    case 985:
      if (lookahead == 'a') ADVANCE(1058);
      END_STATE();
    case 986:
      if (lookahead == 'a') ADVANCE(1060);
      END_STATE();
    case 987:
      if (lookahead == 'a') ADVANCE(1061);
      END_STATE();
    case 988:
      if (lookahead == 'a') ADVANCE(1547);
      END_STATE();
    case 989:
      if (lookahead == 'a') ADVANCE(1708);
      END_STATE();
    case 990:
      if (lookahead == 'a') ADVANCE(1424);
      END_STATE();
    case 991:
      if (lookahead == 'a') ADVANCE(1601);
      END_STATE();
    case 992:
      if (lookahead == 'a') ADVANCE(1550);
      END_STATE();
    case 993:
      if (lookahead == 'a') ADVANCE(1710);
      END_STATE();
    case 994:
      if (lookahead == 'a') ADVANCE(1712);
      END_STATE();
    case 995:
      if (lookahead == 'a') ADVANCE(1713);
      END_STATE();
    case 996:
      if (lookahead == 'a') ADVANCE(1714);
      END_STATE();
    case 997:
      if (lookahead == 'a') ADVANCE(1715);
      END_STATE();
    case 998:
      if (lookahead == 'a') ADVANCE(1449);
      END_STATE();
    case 999:
      if (lookahead == 'a') ADVANCE(1657);
      END_STATE();
    case 1000:
      if (lookahead == 'a') ADVANCE(1612);
      END_STATE();
    case 1001:
      if (lookahead == 'a') ADVANCE(1804);
      END_STATE();
    case 1002:
      if (lookahead == 'b') ADVANCE(1318);
      if (lookahead == 'r') ADVANCE(1271);
      if (lookahead == 'v') ADVANCE(1136);
      END_STATE();
    case 1003:
      if (lookahead == 'b') ADVANCE(1342);
      if (lookahead == 'u') ADVANCE(1582);
      END_STATE();
    case 1004:
      if (lookahead == 'b') ADVANCE(1350);
      END_STATE();
    case 1005:
      if (lookahead == 'b') ADVANCE(965);
      END_STATE();
    case 1006:
      if (lookahead == 'c') ADVANCE(1319);
      END_STATE();
    case 1007:
      if (lookahead == 'c') ADVANCE(1248);
      END_STATE();
    case 1008:
      if (lookahead == 'c') ADVANCE(1248);
      if (lookahead == 'r') ADVANCE(1456);
      END_STATE();
    case 1009:
      if (lookahead == 'c') ADVANCE(1735);
      END_STATE();
    case 1010:
      if (lookahead == 'c') ADVANCE(1735);
      if (lookahead == 'e') ADVANCE(1040);
      END_STATE();
    case 1011:
      if (lookahead == 'c') ADVANCE(971);
      if (lookahead == 'h') ADVANCE(985);
      if (lookahead == 'i') ADVANCE(1806);
      if (lookahead == 'p') ADVANCE(1074);
      if (lookahead == 'u') ADVANCE(1515);
      END_STATE();
    case 1012:
      if (lookahead == 'c') ADVANCE(971);
      if (lookahead == 'h') ADVANCE(986);
      if (lookahead == 'i') ADVANCE(1806);
      if (lookahead == 'p') ADVANCE(1075);
      if (lookahead == 'u') ADVANCE(1515);
      END_STATE();
    case 1013:
      if (lookahead == 'c') ADVANCE(971);
      if (lookahead == 'h') ADVANCE(987);
      if (lookahead == 'i') ADVANCE(1806);
      if (lookahead == 'p') ADVANCE(1591);
      END_STATE();
    case 1014:
      if (lookahead == 'c') ADVANCE(971);
      if (lookahead == 'i') ADVANCE(1806);
      END_STATE();
    case 1015:
      if (lookahead == 'c') ADVANCE(1320);
      END_STATE();
    case 1016:
      if (lookahead == 'c') ADVANCE(1662);
      END_STATE();
    case 1017:
      if (lookahead == 'c') ADVANCE(1321);
      END_STATE();
    case 1018:
      if (lookahead == 'c') ADVANCE(1322);
      END_STATE();
    case 1019:
      if (lookahead == 'c') ADVANCE(1325);
      END_STATE();
    case 1020:
      if (lookahead == 'c') ADVANCE(1323);
      END_STATE();
    case 1021:
      if (lookahead == 'c') ADVANCE(1462);
      END_STATE();
    case 1022:
      if (lookahead == 'c') ADVANCE(1665);
      END_STATE();
    case 1023:
      if (lookahead == 'c') ADVANCE(1251);
      END_STATE();
    case 1024:
      if (lookahead == 'c') ADVANCE(1721);
      END_STATE();
    case 1025:
      if (lookahead == 'c') ADVANCE(1471);
      END_STATE();
    case 1026:
      if (lookahead == 'c') ADVANCE(1309);
      END_STATE();
    case 1027:
      if (lookahead == 'c') ADVANCE(961);
      END_STATE();
    case 1028:
      if (lookahead == 'c') ADVANCE(1680);
      END_STATE();
    case 1029:
      if (lookahead == 'c') ADVANCE(1140);
      END_STATE();
    case 1030:
      if (lookahead == 'c') ADVANCE(1678);
      END_STATE();
    case 1031:
      if (lookahead == 'c') ADVANCE(1145);
      END_STATE();
    case 1032:
      if (lookahead == 'c') ADVANCE(1103);
      END_STATE();
    case 1033:
      if (lookahead == 'c') ADVANCE(1129);
      END_STATE();
    case 1034:
      if (lookahead == 'c') ADVANCE(1784);
      END_STATE();
    case 1035:
      if (lookahead == 'c') ADVANCE(1277);
      END_STATE();
    case 1036:
      if (lookahead == 'c') ADVANCE(1352);
      END_STATE();
    case 1037:
      if (lookahead == 'c') ADVANCE(981);
      END_STATE();
    case 1038:
      if (lookahead == 'c') ADVANCE(1744);
      END_STATE();
    case 1039:
      if (lookahead == 'd') ADVANCE(1980);
      if (lookahead == 'n') ADVANCE(1048);
      END_STATE();
    case 1040:
      if (lookahead == 'd') ADVANCE(1944);
      END_STATE();
    case 1041:
      if (lookahead == 'd') ADVANCE(884);
      END_STATE();
    case 1042:
      if (lookahead == 'd') ADVANCE(2010);
      END_STATE();
    case 1043:
      if (lookahead == 'd') ADVANCE(1941);
      END_STATE();
    case 1044:
      if (lookahead == 'd') ADVANCE(1866);
      END_STATE();
    case 1045:
      if (lookahead == 'd') ADVANCE(1940);
      END_STATE();
    case 1046:
      if (lookahead == 'd') ADVANCE(894);
      END_STATE();
    case 1047:
      if (lookahead == 'd') ADVANCE(1390);
      END_STATE();
    case 1048:
      if (lookahead == 'd') ADVANCE(1131);
      END_STATE();
    case 1049:
      if (lookahead == 'd') ADVANCE(918);
      END_STATE();
    case 1050:
      if (lookahead == 'd') ADVANCE(1270);
      END_STATE();
    case 1051:
      if (lookahead == 'd') ADVANCE(1284);
      if (lookahead == 'n') ADVANCE(1484);
      if (lookahead == 's') ADVANCE(1528);
      END_STATE();
    case 1052:
      if (lookahead == 'd') ADVANCE(1684);
      END_STATE();
    case 1053:
      if (lookahead == 'd') ADVANCE(1084);
      if (lookahead == 'n') ADVANCE(1636);
      END_STATE();
    case 1054:
      if (lookahead == 'd') ADVANCE(1144);
      END_STATE();
    case 1055:
      if (lookahead == 'd') ADVANCE(1109);
      END_STATE();
    case 1056:
      if (lookahead == 'd') ADVANCE(1142);
      END_STATE();
    case 1057:
      if (lookahead == 'd') ADVANCE(1391);
      END_STATE();
    case 1058:
      if (lookahead == 'd') ADVANCE(1153);
      END_STATE();
    case 1059:
      if (lookahead == 'd') ADVANCE(1164);
      END_STATE();
    case 1060:
      if (lookahead == 'd') ADVANCE(1166);
      END_STATE();
    case 1061:
      if (lookahead == 'd') ADVANCE(1168);
      END_STATE();
    case 1062:
      if (lookahead == 'd') ADVANCE(1171);
      END_STATE();
    case 1063:
      if (lookahead == 'd') ADVANCE(890);
      END_STATE();
    case 1064:
      if (lookahead == 'd') ADVANCE(901);
      END_STATE();
    case 1065:
      if (lookahead == 'd') ADVANCE(1511);
      END_STATE();
    case 1066:
      if (lookahead == 'd') ADVANCE(888);
      END_STATE();
    case 1067:
      if (lookahead == 'e') ADVANCE(1516);
      END_STATE();
    case 1068:
      if (lookahead == 'e') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(1426);
      if (lookahead == 'o') ADVANCE(943);
      END_STATE();
    case 1069:
      if (lookahead == 'e') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(1425);
      if (lookahead == 'o') ADVANCE(943);
      END_STATE();
    case 1070:
      if (lookahead == 'e') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(943);
      END_STATE();
    case 1071:
      if (lookahead == 'e') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(942);
      END_STATE();
    case 1072:
      if (lookahead == 'e') ADVANCE(1382);
      END_STATE();
    case 1073:
      if (lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 1074:
      if (lookahead == 'e') ADVANCE(1010);
      if (lookahead == 'r') ADVANCE(1282);
      END_STATE();
    case 1075:
      if (lookahead == 'e') ADVANCE(1010);
      if (lookahead == 'r') ADVANCE(1315);
      END_STATE();
    case 1076:
      if (lookahead == 'e') ADVANCE(1978);
      END_STATE();
    case 1077:
      if (lookahead == 'e') ADVANCE(1859);
      END_STATE();
    case 1078:
      if (lookahead == 'e') ADVANCE(1936);
      END_STATE();
    case 1079:
      if (lookahead == 'e') ADVANCE(2036);
      END_STATE();
    case 1080:
      if (lookahead == 'e') ADVANCE(1981);
      END_STATE();
    case 1081:
      if (lookahead == 'e') ADVANCE(2037);
      END_STATE();
    case 1082:
      if (lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 1083:
      if (lookahead == 'e') ADVANCE(1992);
      END_STATE();
    case 1084:
      if (lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 1085:
      if (lookahead == 'e') ADVANCE(1955);
      END_STATE();
    case 1086:
      if (lookahead == 'e') ADVANCE(1864);
      END_STATE();
    case 1087:
      if (lookahead == 'e') ADVANCE(1870);
      END_STATE();
    case 1088:
      if (lookahead == 'e') ADVANCE(1999);
      END_STATE();
    case 1089:
      if (lookahead == 'e') ADVANCE(1994);
      END_STATE();
    case 1090:
      if (lookahead == 'e') ADVANCE(2011);
      END_STATE();
    case 1091:
      if (lookahead == 'e') ADVANCE(1853);
      END_STATE();
    case 1092:
      if (lookahead == 'e') ADVANCE(1937);
      END_STATE();
    case 1093:
      if (lookahead == 'e') ADVANCE(1913);
      END_STATE();
    case 1094:
      if (lookahead == 'e') ADVANCE(1841);
      END_STATE();
    case 1095:
      if (lookahead == 'e') ADVANCE(1857);
      END_STATE();
    case 1096:
      if (lookahead == 'e') ADVANCE(1858);
      END_STATE();
    case 1097:
      if (lookahead == 'e') ADVANCE(1852);
      END_STATE();
    case 1098:
      if (lookahead == 'e') ADVANCE(1990);
      END_STATE();
    case 1099:
      if (lookahead == 'e') ADVANCE(1903);
      END_STATE();
    case 1100:
      if (lookahead == 'e') ADVANCE(1855);
      END_STATE();
    case 1101:
      if (lookahead == 'e') ADVANCE(1856);
      END_STATE();
    case 1102:
      if (lookahead == 'e') ADVANCE(2007);
      END_STATE();
    case 1103:
      if (lookahead == 'e') ADVANCE(1956);
      END_STATE();
    case 1104:
      if (lookahead == 'e') ADVANCE(1842);
      END_STATE();
    case 1105:
      if (lookahead == 'e') ADVANCE(1854);
      END_STATE();
    case 1106:
      if (lookahead == 'e') ADVANCE(1850);
      END_STATE();
    case 1107:
      if (lookahead == 'e') ADVANCE(1984);
      END_STATE();
    case 1108:
      if (lookahead == 'e') ADVANCE(1844);
      END_STATE();
    case 1109:
      if (lookahead == 'e') ADVANCE(1927);
      END_STATE();
    case 1110:
      if (lookahead == 'e') ADVANCE(1843);
      END_STATE();
    case 1111:
      if (lookahead == 'e') ADVANCE(1849);
      END_STATE();
    case 1112:
      if (lookahead == 'e') ADVANCE(2000);
      END_STATE();
    case 1113:
      if (lookahead == 'e') ADVANCE(906);
      END_STATE();
    case 1114:
      if (lookahead == 'e') ADVANCE(1902);
      END_STATE();
    case 1115:
      if (lookahead == 'e') ADVANCE(1809);
      END_STATE();
    case 1116:
      if (lookahead == 'e') ADVANCE(1923);
      END_STATE();
    case 1117:
      if (lookahead == 'e') ADVANCE(1931);
      END_STATE();
    case 1118:
      if (lookahead == 'e') ADVANCE(1234);
      END_STATE();
    case 1119:
      if (lookahead == 'e') ADVANCE(1918);
      END_STATE();
    case 1120:
      if (lookahead == 'e') ADVANCE(1919);
      END_STATE();
    case 1121:
      if (lookahead == 'e') ADVANCE(1926);
      END_STATE();
    case 1122:
      if (lookahead == 'e') ADVANCE(1904);
      END_STATE();
    case 1123:
      if (lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 1124:
      if (lookahead == 'e') ADVANCE(1998);
      END_STATE();
    case 1125:
      if (lookahead == 'e') ADVANCE(1416);
      if (lookahead == 'l') ADVANCE(1278);
      if (lookahead == 'o') ADVANCE(1366);
      if (lookahead == 'u') ADVANCE(1339);
      END_STATE();
    case 1126:
      if (lookahead == 'e') ADVANCE(1632);
      END_STATE();
    case 1127:
      if (lookahead == 'e') ADVANCE(1632);
      if (lookahead == 'o') ADVANCE(1750);
      END_STATE();
    case 1128:
      if (lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 1129:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 1130:
      if (lookahead == 'e') ADVANCE(1590);
      END_STATE();
    case 1131:
      if (lookahead == 'e') ADVANCE(1763);
      END_STATE();
    case 1132:
      if (lookahead == 'e') ADVANCE(1757);
      END_STATE();
    case 1133:
      if (lookahead == 'e') ADVANCE(1214);
      END_STATE();
    case 1134:
      if (lookahead == 'e') ADVANCE(1214);
      if (lookahead == 'm') ADVANCE(952);
      END_STATE();
    case 1135:
      if (lookahead == 'e') ADVANCE(1444);
      END_STATE();
    case 1136:
      if (lookahead == 'e') ADVANCE(1565);
      END_STATE();
    case 1137:
      if (lookahead == 'e') ADVANCE(1616);
      END_STATE();
    case 1138:
      if (lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 1139:
      if (lookahead == 'e') ADVANCE(1041);
      END_STATE();
    case 1140:
      if (lookahead == 'e') ADVANCE(916);
      END_STATE();
    case 1141:
      if (lookahead == 'e') ADVANCE(1038);
      END_STATE();
    case 1142:
      if (lookahead == 'e') ADVANCE(1556);
      END_STATE();
    case 1143:
      if (lookahead == 'e') ADVANCE(1057);
      if (lookahead == 'i') ADVANCE(1476);
      END_STATE();
    case 1144:
      if (lookahead == 'e') ADVANCE(1422);
      END_STATE();
    case 1145:
      if (lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 1146:
      if (lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 1147:
      if (lookahead == 'e') ADVANCE(1046);
      END_STATE();
    case 1148:
      if (lookahead == 'e') ADVANCE(912);
      END_STATE();
    case 1149:
      if (lookahead == 'e') ADVANCE(1381);
      END_STATE();
    case 1150:
      if (lookahead == 'e') ADVANCE(1049);
      END_STATE();
    case 1151:
      if (lookahead == 'e') ADVANCE(1640);
      END_STATE();
    case 1152:
      if (lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 1153:
      if (lookahead == 'e') ADVANCE(1557);
      END_STATE();
    case 1154:
      if (lookahead == 'e') ADVANCE(1618);
      END_STATE();
    case 1155:
      if (lookahead == 'e') ADVANCE(1066);
      END_STATE();
    case 1156:
      if (lookahead == 'e') ADVANCE(1689);
      END_STATE();
    case 1157:
      if (lookahead == 'e') ADVANCE(1619);
      END_STATE();
    case 1158:
      if (lookahead == 'e') ADVANCE(1442);
      END_STATE();
    case 1159:
      if (lookahead == 'e') ADVANCE(1621);
      END_STATE();
    case 1160:
      if (lookahead == 'e') ADVANCE(1622);
      END_STATE();
    case 1161:
      if (lookahead == 'e') ADVANCE(1639);
      END_STATE();
    case 1162:
      if (lookahead == 'e') ADVANCE(1669);
      END_STATE();
    case 1163:
      if (lookahead == 'e') ADVANCE(1570);
      END_STATE();
    case 1164:
      if (lookahead == 'e') ADVANCE(1564);
      END_STATE();
    case 1165:
      if (lookahead == 'e') ADVANCE(1626);
      END_STATE();
    case 1166:
      if (lookahead == 'e') ADVANCE(1609);
      END_STATE();
    case 1167:
      if (lookahead == 'e') ADVANCE(1673);
      END_STATE();
    case 1168:
      if (lookahead == 'e') ADVANCE(1561);
      END_STATE();
    case 1169:
      if (lookahead == 'e') ADVANCE(1569);
      END_STATE();
    case 1170:
      if (lookahead == 'e') ADVANCE(1628);
      END_STATE();
    case 1171:
      if (lookahead == 'e') ADVANCE(1571);
      END_STATE();
    case 1172:
      if (lookahead == 'e') ADVANCE(1429);
      END_STATE();
    case 1173:
      if (lookahead == 'e') ADVANCE(1022);
      END_STATE();
    case 1174:
      if (lookahead == 'e') ADVANCE(1634);
      END_STATE();
    case 1175:
      if (lookahead == 'e') ADVANCE(1767);
      END_STATE();
    case 1176:
      if (lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 1177:
      if (lookahead == 'e') ADVANCE(1024);
      END_STATE();
    case 1178:
      if (lookahead == 'e') ADVANCE(1578);
      END_STATE();
    case 1179:
      if (lookahead == 'e') ADVANCE(1018);
      END_STATE();
    case 1180:
      if (lookahead == 'e') ADVANCE(1028);
      END_STATE();
    case 1181:
      if (lookahead == 'e') ADVANCE(1769);
      if (lookahead == 'r') ADVANCE(990);
      if (lookahead == 'y') ADVANCE(1518);
      END_STATE();
    case 1182:
      if (lookahead == 'e') ADVANCE(1430);
      END_STATE();
    case 1183:
      if (lookahead == 'e') ADVANCE(1349);
      END_STATE();
    case 1184:
      if (lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 1185:
      if (lookahead == 'e') ADVANCE(1772);
      if (lookahead == 'r') ADVANCE(990);
      END_STATE();
    case 1186:
      if (lookahead == 'e') ADVANCE(1433);
      END_STATE();
    case 1187:
      if (lookahead == 'e') ADVANCE(1770);
      END_STATE();
    case 1188:
      if (lookahead == 'e') ADVANCE(1434);
      END_STATE();
    case 1189:
      if (lookahead == 'e') ADVANCE(1771);
      END_STATE();
    case 1190:
      if (lookahead == 'e') ADVANCE(1439);
      END_STATE();
    case 1191:
      if (lookahead == 'e') ADVANCE(921);
      END_STATE();
    case 1192:
      if (lookahead == 'e') ADVANCE(1773);
      END_STATE();
    case 1193:
      if (lookahead == 'e') ADVANCE(2001);
      END_STATE();
    case 1194:
      if (lookahead == 'e') ADVANCE(1810);
      END_STATE();
    case 1195:
      if (lookahead == 'e') ADVANCE(1599);
      END_STATE();
    case 1196:
      if (lookahead == 'e') ADVANCE(1009);
      END_STATE();
    case 1197:
      if (lookahead == 'e') ADVANCE(1774);
      if (lookahead == 'i') ADVANCE(1395);
      if (lookahead == 'y') ADVANCE(1538);
      END_STATE();
    case 1198:
      if (lookahead == 'e') ADVANCE(1811);
      END_STATE();
    case 1199:
      if (lookahead == 'e') ADVANCE(1775);
      END_STATE();
    case 1200:
      if (lookahead == 'e') ADVANCE(1812);
      END_STATE();
    case 1201:
      if (lookahead == 'e') ADVANCE(1776);
      END_STATE();
    case 1202:
      if (lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 1203:
      if (lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 1204:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 1205:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 1206:
      if (lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 1207:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 1208:
      if (lookahead == 'e') ADVANCE(1777);
      if (lookahead == 'r') ADVANCE(990);
      END_STATE();
    case 1209:
      if (lookahead == 'e') ADVANCE(1778);
      if (lookahead == 'r') ADVANCE(990);
      END_STATE();
    case 1210:
      if (lookahead == 'e') ADVANCE(1779);
      if (lookahead == 'r') ADVANCE(990);
      END_STATE();
    case 1211:
      if (lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 1212:
      if (lookahead == 'f') ADVANCE(875);
      END_STATE();
    case 1213:
      if (lookahead == 'f') ADVANCE(1216);
      END_STATE();
    case 1214:
      if (lookahead == 'f') ADVANCE(1021);
      END_STATE();
    case 1215:
      if (lookahead == 'f') ADVANCE(1765);
      END_STATE();
    case 1216:
      if (lookahead == 'f') ADVANCE(1173);
      END_STATE();
    case 1217:
      if (lookahead == 'f') ADVANCE(1740);
      END_STATE();
    case 1218:
      if (lookahead == 'f') ADVANCE(1222);
      END_STATE();
    case 1219:
      if (lookahead == 'f') ADVANCE(1217);
      END_STATE();
    case 1220:
      if (lookahead == 'f') ADVANCE(1520);
      END_STATE();
    case 1221:
      if (lookahead == 'f') ADVANCE(976);
      END_STATE();
    case 1222:
      if (lookahead == 'f') ADVANCE(1645);
      END_STATE();
    case 1223:
      if (lookahead == 'f') ADVANCE(1647);
      END_STATE();
    case 1224:
      if (lookahead == 'f') ADVANCE(1500);
      END_STATE();
    case 1225:
      if (lookahead == 'f') ADVANCE(1223);
      END_STATE();
    case 1226:
      if (lookahead == 'f') ADVANCE(1289);
      END_STATE();
    case 1227:
      if (lookahead == 'f') ADVANCE(1501);
      END_STATE();
    case 1228:
      if (lookahead == 'f') ADVANCE(1180);
      END_STATE();
    case 1229:
      if (lookahead == 'f') ADVANCE(1292);
      END_STATE();
    case 1230:
      if (lookahead == 'f') ADVANCE(1502);
      END_STATE();
    case 1231:
      if (lookahead == 'f') ADVANCE(1184);
      END_STATE();
    case 1232:
      if (lookahead == 'f') ADVANCE(1299);
      END_STATE();
    case 1233:
      if (lookahead == 'f') ADVANCE(1303);
      END_STATE();
    case 1234:
      if (lookahead == 'f') ADVANCE(1305);
      if (lookahead == 's') ADVANCE(1037);
      END_STATE();
    case 1235:
      if (lookahead == 'f') ADVANCE(1228);
      END_STATE();
    case 1236:
      if (lookahead == 'f') ADVANCE(1600);
      if (lookahead == 'r') ADVANCE(1463);
      END_STATE();
    case 1237:
      if (lookahead == 'f') ADVANCE(1231);
      END_STATE();
    case 1238:
      if (lookahead == 'g') ADVANCE(1974);
      END_STATE();
    case 1239:
      if (lookahead == 'g') ADVANCE(1922);
      END_STATE();
    case 1240:
      if (lookahead == 'g') ADVANCE(947);
      END_STATE();
    case 1241:
      if (lookahead == 'g') ADVANCE(1617);
      END_STATE();
    case 1242:
      if (lookahead == 'g') ADVANCE(1623);
      END_STATE();
    case 1243:
      if (lookahead == 'g') ADVANCE(1577);
      END_STATE();
    case 1244:
      if (lookahead == 'h') ADVANCE(1863);
      END_STATE();
    case 1245:
      if (lookahead == 'h') ADVANCE(1851);
      END_STATE();
    case 1246:
      if (lookahead == 'h') ADVANCE(2009);
      END_STATE();
    case 1247:
      if (lookahead == 'h') ADVANCE(1874);
      END_STATE();
    case 1248:
      if (lookahead == 'h') ADVANCE(1279);
      END_STATE();
    case 1249:
      if (lookahead == 'h') ADVANCE(962);
      END_STATE();
    case 1250:
      if (lookahead == 'h') ADVANCE(1466);
      END_STATE();
    case 1251:
      if (lookahead == 'h') ADVANCE(1179);
      END_STATE();
    case 1252:
      if (lookahead == 'h') ADVANCE(974);
      END_STATE();
    case 1253:
      if (lookahead == 'h') ADVANCE(1276);
      END_STATE();
    case 1254:
      if (lookahead == 'h') ADVANCE(1643);
      END_STATE();
    case 1255:
      if (lookahead == 'h') ADVANCE(1000);
      END_STATE();
    case 1256:
      if (lookahead == 'i') ADVANCE(1451);
      END_STATE();
    case 1257:
      if (lookahead == 'i') ADVANCE(1806);
      END_STATE();
    case 1258:
      if (lookahead == 'i') ADVANCE(889);
      END_STATE();
    case 1259:
      if (lookahead == 'i') ADVANCE(1341);
      END_STATE();
    case 1260:
      if (lookahead == 'i') ADVANCE(1341);
      if (lookahead == 'o') ADVANCE(1418);
      END_STATE();
    case 1261:
      if (lookahead == 'i') ADVANCE(1341);
      if (lookahead == 'r') ADVANCE(970);
      END_STATE();
    case 1262:
      if (lookahead == 'i') ADVANCE(1383);
      END_STATE();
    case 1263:
      if (lookahead == 'i') ADVANCE(1805);
      END_STATE();
    case 1264:
      if (lookahead == 'i') ADVANCE(1419);
      END_STATE();
    case 1265:
      if (lookahead == 'i') ADVANCE(1073);
      END_STATE();
    case 1266:
      if (lookahead == 'i') ADVANCE(1420);
      END_STATE();
    case 1267:
      if (lookahead == 'i') ADVANCE(1036);
      END_STATE();
    case 1268:
      if (lookahead == 'i') ADVANCE(1706);
      END_STATE();
    case 1269:
      if (lookahead == 'i') ADVANCE(1052);
      END_STATE();
    case 1270:
      if (lookahead == 'i') ADVANCE(1650);
      END_STATE();
    case 1271:
      if (lookahead == 'i') ADVANCE(1172);
      END_STATE();
    case 1272:
      if (lookahead == 'i') ADVANCE(1440);
      END_STATE();
    case 1273:
      if (lookahead == 'i') ADVANCE(1044);
      END_STATE();
    case 1274:
      if (lookahead == 'i') ADVANCE(1421);
      END_STATE();
    case 1275:
      if (lookahead == 'i') ADVANCE(1658);
      END_STATE();
    case 1276:
      if (lookahead == 'i') ADVANCE(1149);
      END_STATE();
    case 1277:
      if (lookahead == 'i') ADVANCE(1160);
      END_STATE();
    case 1278:
      if (lookahead == 'i') ADVANCE(1015);
      END_STATE();
    case 1279:
      if (lookahead == 'i') ADVANCE(1751);
      END_STATE();
    case 1280:
      if (lookahead == 'i') ADVANCE(1807);
      END_STATE();
    case 1281:
      if (lookahead == 'i') ADVANCE(1469);
      END_STATE();
    case 1282:
      if (lookahead == 'i') ADVANCE(1695);
      END_STATE();
    case 1283:
      if (lookahead == 'i') ADVANCE(1644);
      END_STATE();
    case 1284:
      if (lookahead == 'i') ADVANCE(1219);
      END_STATE();
    case 1285:
      if (lookahead == 'i') ADVANCE(1351);
      END_STATE();
    case 1286:
      if (lookahead == 'i') ADVANCE(1475);
      END_STATE();
    case 1287:
      if (lookahead == 'i') ADVANCE(1019);
      END_STATE();
    case 1288:
      if (lookahead == 'i') ADVANCE(1020);
      END_STATE();
    case 1289:
      if (lookahead == 'i') ADVANCE(1353);
      END_STATE();
    case 1290:
      if (lookahead == 'i') ADVANCE(1403);
      END_STATE();
    case 1291:
      if (lookahead == 'i') ADVANCE(1479);
      END_STATE();
    case 1292:
      if (lookahead == 'i') ADVANCE(1354);
      END_STATE();
    case 1293:
      if (lookahead == 'i') ADVANCE(1480);
      END_STATE();
    case 1294:
      if (lookahead == 'i') ADVANCE(1355);
      END_STATE();
    case 1295:
      if (lookahead == 'i') ADVANCE(1482);
      END_STATE();
    case 1296:
      if (lookahead == 'i') ADVANCE(1483);
      END_STATE();
    case 1297:
      if (lookahead == 'i') ADVANCE(1357);
      END_STATE();
    case 1298:
      if (lookahead == 'i') ADVANCE(1485);
      END_STATE();
    case 1299:
      if (lookahead == 'i') ADVANCE(1358);
      END_STATE();
    case 1300:
      if (lookahead == 'i') ADVANCE(1487);
      END_STATE();
    case 1301:
      if (lookahead == 'i') ADVANCE(1359);
      END_STATE();
    case 1302:
      if (lookahead == 'i') ADVANCE(1488);
      END_STATE();
    case 1303:
      if (lookahead == 'i') ADVANCE(1360);
      END_STATE();
    case 1304:
      if (lookahead == 'i') ADVANCE(1489);
      END_STATE();
    case 1305:
      if (lookahead == 'i') ADVANCE(1361);
      END_STATE();
    case 1306:
      if (lookahead == 'i') ADVANCE(1363);
      END_STATE();
    case 1307:
      if (lookahead == 'i') ADVANCE(1364);
      END_STATE();
    case 1308:
      if (lookahead == 'i') ADVANCE(1399);
      END_STATE();
    case 1309:
      if (lookahead == 'i') ADVANCE(1653);
      END_STATE();
    case 1310:
      if (lookahead == 'i') ADVANCE(1726);
      END_STATE();
    case 1311:
      if (lookahead == 'i') ADVANCE(1719);
      if (lookahead == 'o') ADVANCE(1602);
      END_STATE();
    case 1312:
      if (lookahead == 'i') ADVANCE(1719);
      if (lookahead == 'o') ADVANCE(1604);
      END_STATE();
    case 1313:
      if (lookahead == 'i') ADVANCE(1728);
      END_STATE();
    case 1314:
      if (lookahead == 'i') ADVANCE(1729);
      END_STATE();
    case 1315:
      if (lookahead == 'i') ADVANCE(1730);
      END_STATE();
    case 1316:
      if (lookahead == 'i') ADVANCE(1404);
      END_STATE();
    case 1317:
      if (lookahead == 'i') ADVANCE(1405);
      END_STATE();
    case 1318:
      if (lookahead == 'j') ADVANCE(1177);
      END_STATE();
    case 1319:
      if (lookahead == 'k') ADVANCE(877);
      END_STATE();
    case 1320:
      if (lookahead == 'k') ADVANCE(1943);
      END_STATE();
    case 1321:
      if (lookahead == 'k') ADVANCE(1945);
      END_STATE();
    case 1322:
      if (lookahead == 'k') ADVANCE(1993);
      END_STATE();
    case 1323:
      if (lookahead == 'k') ADVANCE(1942);
      END_STATE();
    case 1324:
      if (lookahead == 'k') ADVANCE(1139);
      END_STATE();
    case 1325:
      if (lookahead == 'k') ADVANCE(1651);
      END_STATE();
    case 1326:
      if (lookahead == 'k') ADVANCE(1232);
      END_STATE();
    case 1327:
      if (lookahead == 'k') ADVANCE(1233);
      END_STATE();
    case 1328:
      if (lookahead == 'l') ADVANCE(1333);
      if (lookahead == 'n') ADVANCE(1262);
      if (lookahead == 'r') ADVANCE(1008);
      END_STATE();
    case 1329:
      if (lookahead == 'l') ADVANCE(1333);
      if (lookahead == 'n') ADVANCE(1290);
      END_STATE();
    case 1330:
      if (lookahead == 'l') ADVANCE(1333);
      if (lookahead == 'n') ADVANCE(1290);
      if (lookahead == 'r') ADVANCE(1007);
      END_STATE();
    case 1331:
      if (lookahead == 'l') ADVANCE(1333);
      if (lookahead == 'n') ADVANCE(1316);
      END_STATE();
    case 1332:
      if (lookahead == 'l') ADVANCE(1762);
      END_STATE();
    case 1333:
      if (lookahead == 'l') ADVANCE(1762);
      if (lookahead == 'p') ADVANCE(1252);
      if (lookahead == 'w') ADVANCE(946);
      END_STATE();
    case 1334:
      if (lookahead == 'l') ADVANCE(907);
      END_STATE();
    case 1335:
      if (lookahead == 'l') ADVANCE(2002);
      END_STATE();
    case 1336:
      if (lookahead == 'l') ADVANCE(1977);
      END_STATE();
    case 1337:
      if (lookahead == 'l') ADVANCE(1985);
      END_STATE();
    case 1338:
      if (lookahead == 'l') ADVANCE(1334);
      END_STATE();
    case 1339:
      if (lookahead == 'l') ADVANCE(1334);
      if (lookahead == 'r') ADVANCE(1649);
      END_STATE();
    case 1340:
      if (lookahead == 'l') ADVANCE(1641);
      END_STATE();
    case 1341:
      if (lookahead == 'l') ADVANCE(1076);
      END_STATE();
    case 1342:
      if (lookahead == 'l') ADVANCE(1497);
      END_STATE();
    case 1343:
      if (lookahead == 'l') ADVANCE(950);
      END_STATE();
    case 1344:
      if (lookahead == 'l') ADVANCE(1332);
      if (lookahead == 'n') ADVANCE(1317);
      END_STATE();
    case 1345:
      if (lookahead == 'l') ADVANCE(1481);
      END_STATE();
    case 1346:
      if (lookahead == 'l') ADVANCE(1490);
      END_STATE();
    case 1347:
      if (lookahead == 'l') ADVANCE(948);
      END_STATE();
    case 1348:
      if (lookahead == 'l') ADVANCE(1083);
      END_STATE();
    case 1349:
      if (lookahead == 'l') ADVANCE(949);
      END_STATE();
    case 1350:
      if (lookahead == 'l') ADVANCE(1090);
      END_STATE();
    case 1351:
      if (lookahead == 'l') ADVANCE(1093);
      END_STATE();
    case 1352:
      if (lookahead == 'l') ADVANCE(1097);
      END_STATE();
    case 1353:
      if (lookahead == 'l') ADVANCE(1148);
      END_STATE();
    case 1354:
      if (lookahead == 'l') ADVANCE(1098);
      END_STATE();
    case 1355:
      if (lookahead == 'l') ADVANCE(1099);
      END_STATE();
    case 1356:
      if (lookahead == 'l') ADVANCE(1182);
      END_STATE();
    case 1357:
      if (lookahead == 'l') ADVANCE(1128);
      END_STATE();
    case 1358:
      if (lookahead == 'l') ADVANCE(1102);
      END_STATE();
    case 1359:
      if (lookahead == 'l') ADVANCE(1114);
      END_STATE();
    case 1360:
      if (lookahead == 'l') ADVANCE(1119);
      END_STATE();
    case 1361:
      if (lookahead == 'l') ADVANCE(1120);
      END_STATE();
    case 1362:
      if (lookahead == 'l') ADVANCE(1121);
      END_STATE();
    case 1363:
      if (lookahead == 'l') ADVANCE(1122);
      END_STATE();
    case 1364:
      if (lookahead == 'l') ADVANCE(1123);
      END_STATE();
    case 1365:
      if (lookahead == 'l') ADVANCE(1465);
      END_STATE();
    case 1366:
      if (lookahead == 'l') ADVANCE(1465);
      if (lookahead == 'r') ADVANCE(1446);
      END_STATE();
    case 1367:
      if (lookahead == 'l') ADVANCE(973);
      END_STATE();
    case 1368:
      if (lookahead == 'l') ADVANCE(1275);
      END_STATE();
    case 1369:
      if (lookahead == 'l') ADVANCE(963);
      END_STATE();
    case 1370:
      if (lookahead == 'l') ADVANCE(967);
      END_STATE();
    case 1371:
      if (lookahead == 'l') ADVANCE(1486);
      END_STATE();
    case 1372:
      if (lookahead == 'l') ADVANCE(1496);
      END_STATE();
    case 1373:
      if (lookahead == 'l') ADVANCE(1494);
      END_STATE();
    case 1374:
      if (lookahead == 'l') ADVANCE(1494);
      if (lookahead == 'r') ADVANCE(1446);
      END_STATE();
    case 1375:
      if (lookahead == 'l') ADVANCE(1287);
      END_STATE();
    case 1376:
      if (lookahead == 'l') ADVANCE(1287);
      if (lookahead == 'o') ADVANCE(1587);
      if (lookahead == 'u') ADVANCE(1339);
      END_STATE();
    case 1377:
      if (lookahead == 'l') ADVANCE(1287);
      if (lookahead == 'o') ADVANCE(1365);
      END_STATE();
    case 1378:
      if (lookahead == 'l') ADVANCE(1287);
      if (lookahead == 'o') ADVANCE(1365);
      if (lookahead == 'u') ADVANCE(1338);
      END_STATE();
    case 1379:
      if (lookahead == 'l') ADVANCE(1287);
      if (lookahead == 'u') ADVANCE(1338);
      END_STATE();
    case 1380:
      if (lookahead == 'l') ADVANCE(1288);
      END_STATE();
    case 1381:
      if (lookahead == 'l') ADVANCE(1064);
      END_STATE();
    case 1382:
      if (lookahead == 'm') ADVANCE(1470);
      if (lookahead == 'p') ADVANCE(1343);
      END_STATE();
    case 1383:
      if (lookahead == 'm') ADVANCE(954);
      END_STATE();
    case 1384:
      if (lookahead == 'm') ADVANCE(951);
      END_STATE();
    case 1385:
      if (lookahead == 'm') ADVANCE(952);
      END_STATE();
    case 1386:
      if (lookahead == 'm') ADVANCE(1077);
      END_STATE();
    case 1387:
      if (lookahead == 'm') ADVANCE(969);
      END_STATE();
    case 1388:
      if (lookahead == 'm') ADVANCE(1082);
      END_STATE();
    case 1389:
      if (lookahead == 'm') ADVANCE(1174);
      if (lookahead == 'p') ADVANCE(957);
      END_STATE();
    case 1390:
      if (lookahead == 'm') ADVANCE(1499);
      END_STATE();
    case 1391:
      if (lookahead == 'm') ADVANCE(953);
      END_STATE();
    case 1392:
      if (lookahead == 'm') ADVANCE(959);
      END_STATE();
    case 1393:
      if (lookahead == 'm') ADVANCE(1157);
      END_STATE();
    case 1394:
      if (lookahead == 'm') ADVANCE(1161);
      END_STATE();
    case 1395:
      if (lookahead == 'm') ADVANCE(1116);
      END_STATE();
    case 1396:
      if (lookahead == 'm') ADVANCE(1170);
      END_STATE();
    case 1397:
      if (lookahead == 'm') ADVANCE(1400);
      END_STATE();
    case 1398:
      if (lookahead == 'm') ADVANCE(956);
      END_STATE();
    case 1399:
      if (lookahead == 'm') ADVANCE(977);
      END_STATE();
    case 1400:
      if (lookahead == 'm') ADVANCE(1487);
      END_STATE();
    case 1401:
      if (lookahead == 'm') ADVANCE(988);
      END_STATE();
    case 1402:
      if (lookahead == 'm') ADVANCE(992);
      END_STATE();
    case 1403:
      if (lookahead == 'm') ADVANCE(994);
      END_STATE();
    case 1404:
      if (lookahead == 'm') ADVANCE(995);
      END_STATE();
    case 1405:
      if (lookahead == 'm') ADVANCE(997);
      END_STATE();
    case 1406:
      if (lookahead == 'n') ADVANCE(1048);
      END_STATE();
    case 1407:
      if (lookahead == 'n') ADVANCE(1868);
      END_STATE();
    case 1408:
      if (lookahead == 'n') ADVANCE(1953);
      END_STATE();
    case 1409:
      if (lookahead == 'n') ADVANCE(1917);
      END_STATE();
    case 1410:
      if (lookahead == 'n') ADVANCE(2012);
      END_STATE();
    case 1411:
      if (lookahead == 'n') ADVANCE(1921);
      END_STATE();
    case 1412:
      if (lookahead == 'n') ADVANCE(1872);
      END_STATE();
    case 1413:
      if (lookahead == 'n') ADVANCE(1916);
      END_STATE();
    case 1414:
      if (lookahead == 'n') ADVANCE(1915);
      END_STATE();
    case 1415:
      if (lookahead == 'n') ADVANCE(913);
      END_STATE();
    case 1416:
      if (lookahead == 'n') ADVANCE(1683);
      END_STATE();
    case 1417:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 1418:
      if (lookahead == 'n') ADVANCE(1660);
      if (lookahead == 'r') ADVANCE(1398);
      END_STATE();
    case 1419:
      if (lookahead == 'n') ADVANCE(1065);
      END_STATE();
    case 1420:
      if (lookahead == 'n') ADVANCE(1238);
      END_STATE();
    case 1421:
      if (lookahead == 'n') ADVANCE(1239);
      END_STATE();
    case 1422:
      if (lookahead == 'n') ADVANCE(1035);
      END_STATE();
    case 1423:
      if (lookahead == 'n') ADVANCE(919);
      END_STATE();
    case 1424:
      if (lookahead == 'n') ADVANCE(1636);
      END_STATE();
    case 1425:
      if (lookahead == 'n') ADVANCE(1132);
      END_STATE();
    case 1426:
      if (lookahead == 'n') ADVANCE(1132);
      if (lookahead == 's') ADVANCE(1661);
      END_STATE();
    case 1427:
      if (lookahead == 'n') ADVANCE(1042);
      END_STATE();
    case 1428:
      if (lookahead == 'n') ADVANCE(1043);
      END_STATE();
    case 1429:
      if (lookahead == 'n') ADVANCE(1688);
      END_STATE();
    case 1430:
      if (lookahead == 'n') ADVANCE(1047);
      END_STATE();
    case 1431:
      if (lookahead == 'n') ADVANCE(1667);
      END_STATE();
    case 1432:
      if (lookahead == 'n') ADVANCE(1668);
      END_STATE();
    case 1433:
      if (lookahead == 'n') ADVANCE(1671);
      END_STATE();
    case 1434:
      if (lookahead == 'n') ADVANCE(1672);
      END_STATE();
    case 1435:
      if (lookahead == 'n') ADVANCE(1631);
      END_STATE();
    case 1436:
      if (lookahead == 'n') ADVANCE(1692);
      END_STATE();
    case 1437:
      if (lookahead == 'n') ADVANCE(1676);
      END_STATE();
    case 1438:
      if (lookahead == 'n') ADVANCE(1703);
      END_STATE();
    case 1439:
      if (lookahead == 'n') ADVANCE(1694);
      END_STATE();
    case 1440:
      if (lookahead == 'n') ADVANCE(1242);
      END_STATE();
    case 1441:
      if (lookahead == 'n') ADVANCE(917);
      END_STATE();
    case 1442:
      if (lookahead == 'n') ADVANCE(1031);
      END_STATE();
    case 1443:
      if (lookahead == 'n') ADVANCE(1690);
      END_STATE();
    case 1444:
      if (lookahead == 'n') ADVANCE(1054);
      END_STATE();
    case 1445:
      if (lookahead == 'n') ADVANCE(1032);
      END_STATE();
    case 1446:
      if (lookahead == 'n') ADVANCE(1178);
      END_STATE();
    case 1447:
      if (lookahead == 'n') ADVANCE(1308);
      END_STATE();
    case 1448:
      if (lookahead == 'n') ADVANCE(1654);
      END_STATE();
    case 1449:
      if (lookahead == 'n') ADVANCE(1656);
      END_STATE();
    case 1450:
      if (lookahead == 'n') ADVANCE(1316);
      END_STATE();
    case 1451:
      if (lookahead == 'n') ADVANCE(1211);
      END_STATE();
    case 1452:
      if (lookahead == 'o') ADVANCE(1418);
      END_STATE();
    case 1453:
      if (lookahead == 'o') ADVANCE(1951);
      END_STATE();
    case 1454:
      if (lookahead == 'o') ADVANCE(943);
      END_STATE();
    case 1455:
      if (lookahead == 'o') ADVANCE(1567);
      END_STATE();
    case 1456:
      if (lookahead == 'o') ADVANCE(1760);
      END_STATE();
    case 1457:
      if (lookahead == 'o') ADVANCE(1243);
      END_STATE();
    case 1458:
      if (lookahead == 'o') ADVANCE(1635);
      END_STATE();
    case 1459:
      if (lookahead == 'o') ADVANCE(1734);
      END_STATE();
    case 1460:
      if (lookahead == 'o') ADVANCE(1397);
      END_STATE();
    case 1461:
      if (lookahead == 'o') ADVANCE(1780);
      END_STATE();
    case 1462:
      if (lookahead == 'o') ADVANCE(1739);
      END_STATE();
    case 1463:
      if (lookahead == 'o') ADVANCE(1759);
      END_STATE();
    case 1464:
      if (lookahead == 'o') ADVANCE(1749);
      END_STATE();
    case 1465:
      if (lookahead == 'o') ADVANCE(1555);
      END_STATE();
    case 1466:
      if (lookahead == 'o') ADVANCE(1755);
      END_STATE();
    case 1467:
      if (lookahead == 'o') ADVANCE(1423);
      END_STATE();
    case 1468:
      if (lookahead == 'o') ADVANCE(1756);
      END_STATE();
    case 1469:
      if (lookahead == 'o') ADVANCE(1407);
      END_STATE();
    case 1470:
      if (lookahead == 'o') ADVANCE(1693);
      END_STATE();
    case 1471:
      if (lookahead == 'o') ADVANCE(1371);
      END_STATE();
    case 1472:
      if (lookahead == 'o') ADVANCE(1589);
      END_STATE();
    case 1473:
      if (lookahead == 'o') ADVANCE(1513);
      END_STATE();
    case 1474:
      if (lookahead == 'o') ADVANCE(1441);
      END_STATE();
    case 1475:
      if (lookahead == 'o') ADVANCE(1408);
      END_STATE();
    case 1476:
      if (lookahead == 'o') ADVANCE(1409);
      END_STATE();
    case 1477:
      if (lookahead == 'o') ADVANCE(1027);
      END_STATE();
    case 1478:
      if (lookahead == 'o') ADVANCE(1593);
      END_STATE();
    case 1479:
      if (lookahead == 'o') ADVANCE(1410);
      END_STATE();
    case 1480:
      if (lookahead == 'o') ADVANCE(1411);
      END_STATE();
    case 1481:
      if (lookahead == 'o') ADVANCE(1473);
      END_STATE();
    case 1482:
      if (lookahead == 'o') ADVANCE(1412);
      END_STATE();
    case 1483:
      if (lookahead == 'o') ADVANCE(1413);
      END_STATE();
    case 1484:
      if (lookahead == 'o') ADVANCE(1594);
      END_STATE();
    case 1485:
      if (lookahead == 'o') ADVANCE(1414);
      END_STATE();
    case 1486:
      if (lookahead == 'o') ADVANCE(1559);
      END_STATE();
    case 1487:
      if (lookahead == 'o') ADVANCE(1417);
      END_STATE();
    case 1488:
      if (lookahead == 'o') ADVANCE(1435);
      END_STATE();
    case 1489:
      if (lookahead == 'o') ADVANCE(1415);
      END_STATE();
    case 1490:
      if (lookahead == 'o') ADVANCE(964);
      END_STATE();
    case 1491:
      if (lookahead == 'o') ADVANCE(1504);
      END_STATE();
    case 1492:
      if (lookahead == 'o') ADVANCE(942);
      END_STATE();
    case 1493:
      if (lookahead == 'o') ADVANCE(1566);
      END_STATE();
    case 1494:
      if (lookahead == 'o') ADVANCE(1562);
      END_STATE();
    case 1495:
      if (lookahead == 'o') ADVANCE(1218);
      END_STATE();
    case 1496:
      if (lookahead == 'o') ADVANCE(1576);
      END_STATE();
    case 1497:
      if (lookahead == 'o') ADVANCE(1017);
      END_STATE();
    case 1498:
      if (lookahead == 'o') ADVANCE(1443);
      END_STATE();
    case 1499:
      if (lookahead == 'o') ADVANCE(1055);
      END_STATE();
    case 1500:
      if (lookahead == 'o') ADVANCE(1431);
      END_STATE();
    case 1501:
      if (lookahead == 'o') ADVANCE(1436);
      END_STATE();
    case 1502:
      if (lookahead == 'o') ADVANCE(1437);
      END_STATE();
    case 1503:
      if (lookahead == 'o') ADVANCE(1374);
      if (lookahead == 'u') ADVANCE(1339);
      END_STATE();
    case 1504:
      if (lookahead == 'o') ADVANCE(1543);
      END_STATE();
    case 1505:
      if (lookahead == 'o') ADVANCE(1737);
      END_STATE();
    case 1506:
      if (lookahead == 'o') ADVANCE(1365);
      END_STATE();
    case 1507:
      if (lookahead == 'o') ADVANCE(1365);
      if (lookahead == 'u') ADVANCE(1338);
      END_STATE();
    case 1508:
      if (lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 1509:
      if (lookahead == 'o') ADVANCE(1373);
      if (lookahead == 'u') ADVANCE(1338);
      END_STATE();
    case 1510:
      if (lookahead == 'o') ADVANCE(1602);
      END_STATE();
    case 1511:
      if (lookahead == 'o') ADVANCE(1761);
      END_STATE();
    case 1512:
      if (lookahead == 'o') ADVANCE(1725);
      END_STATE();
    case 1513:
      if (lookahead == 'p') ADVANCE(1976);
      END_STATE();
    case 1514:
      if (lookahead == 'p') ADVANCE(462);
      END_STATE();
    case 1515:
      if (lookahead == 'p') ADVANCE(1541);
      END_STATE();
    case 1516:
      if (lookahead == 'p') ADVANCE(1135);
      END_STATE();
    case 1517:
      if (lookahead == 'p') ADVANCE(1224);
      END_STATE();
    case 1518:
      if (lookahead == 'p') ADVANCE(1080);
      END_STATE();
    case 1519:
      if (lookahead == 'p') ADVANCE(979);
      END_STATE();
    case 1520:
      if (lookahead == 'p') ADVANCE(1625);
      END_STATE();
    case 1521:
      if (lookahead == 'p') ADVANCE(1154);
      END_STATE();
    case 1522:
      if (lookahead == 'p') ADVANCE(1089);
      END_STATE();
    case 1523:
      if (lookahead == 'p') ADVANCE(1091);
      END_STATE();
    case 1524:
      if (lookahead == 'p') ADVANCE(1159);
      END_STATE();
    case 1525:
      if (lookahead == 'p') ADVANCE(1094);
      END_STATE();
    case 1526:
      if (lookahead == 'p') ADVANCE(1095);
      END_STATE();
    case 1527:
      if (lookahead == 'p') ADVANCE(1096);
      END_STATE();
    case 1528:
      if (lookahead == 'p') ADVANCE(1141);
      END_STATE();
    case 1529:
      if (lookahead == 'p') ADVANCE(1100);
      END_STATE();
    case 1530:
      if (lookahead == 'p') ADVANCE(1101);
      END_STATE();
    case 1531:
      if (lookahead == 'p') ADVANCE(1104);
      END_STATE();
    case 1532:
      if (lookahead == 'p') ADVANCE(1105);
      END_STATE();
    case 1533:
      if (lookahead == 'p') ADVANCE(1106);
      END_STATE();
    case 1534:
      if (lookahead == 'p') ADVANCE(1108);
      END_STATE();
    case 1535:
      if (lookahead == 'p') ADVANCE(1110);
      END_STATE();
    case 1536:
      if (lookahead == 'p') ADVANCE(1111);
      END_STATE();
    case 1537:
      if (lookahead == 'p') ADVANCE(1165);
      END_STATE();
    case 1538:
      if (lookahead == 'p') ADVANCE(1117);
      END_STATE();
    case 1539:
      if (lookahead == 'p') ADVANCE(1613);
      END_STATE();
    case 1540:
      if (lookahead == 'p') ADVANCE(1266);
      END_STATE();
    case 1541:
      if (lookahead == 'p') ADVANCE(1478);
      END_STATE();
    case 1542:
      if (lookahead == 'p') ADVANCE(966);
      END_STATE();
    case 1543:
      if (lookahead == 'p') ADVANCE(1274);
      END_STATE();
    case 1544:
      if (lookahead == 'p') ADVANCE(1698);
      END_STATE();
    case 1545:
      if (lookahead == 'p') ADVANCE(1163);
      END_STATE();
    case 1546:
      if (lookahead == 'p') ADVANCE(980);
      END_STATE();
    case 1547:
      if (lookahead == 'p') ADVANCE(1227);
      END_STATE();
    case 1548:
      if (lookahead == 'p') ADVANCE(1196);
      END_STATE();
    case 1549:
      if (lookahead == 'p') ADVANCE(991);
      END_STATE();
    case 1550:
      if (lookahead == 'p') ADVANCE(1230);
      END_STATE();
    case 1551:
      if (lookahead == 'p') ADVANCE(1614);
      END_STATE();
    case 1552:
      if (lookahead == 'p') ADVANCE(1615);
      END_STATE();
    case 1553:
      if (lookahead == 'p') ADVANCE(1591);
      END_STATE();
    case 1554:
      if (lookahead == 'r') ADVANCE(970);
      END_STATE();
    case 1555:
      if (lookahead == 'r') ADVANCE(1950);
      END_STATE();
    case 1556:
      if (lookahead == 'r') ADVANCE(886);
      END_STATE();
    case 1557:
      if (lookahead == 'r') ADVANCE(1988);
      END_STATE();
    case 1558:
      if (lookahead == 'r') ADVANCE(2003);
      END_STATE();
    case 1559:
      if (lookahead == 'r') ADVANCE(1972);
      END_STATE();
    case 1560:
      if (lookahead == 'r') ADVANCE(1986);
      END_STATE();
    case 1561:
      if (lookahead == 'r') ADVANCE(1987);
      END_STATE();
    case 1562:
      if (lookahead == 'r') ADVANCE(1949);
      END_STATE();
    case 1563:
      if (lookahead == 'r') ADVANCE(1457);
      END_STATE();
    case 1564:
      if (lookahead == 'r') ADVANCE(885);
      END_STATE();
    case 1565:
      if (lookahead == 'r') ADVANCE(1367);
      END_STATE();
    case 1566:
      if (lookahead == 'r') ADVANCE(1783);
      END_STATE();
    case 1567:
      if (lookahead == 'r') ADVANCE(1263);
      END_STATE();
    case 1568:
      if (lookahead == 'r') ADVANCE(1459);
      END_STATE();
    case 1569:
      if (lookahead == 'r') ADVANCE(1221);
      END_STATE();
    case 1570:
      if (lookahead == 'r') ADVANCE(915);
      END_STATE();
    case 1571:
      if (lookahead == 'r') ADVANCE(914);
      END_STATE();
    case 1572:
      if (lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 1573:
      if (lookahead == 'r') ADVANCE(1716);
      END_STATE();
    case 1574:
      if (lookahead == 'r') ADVANCE(1468);
      END_STATE();
    case 1575:
      if (lookahead == 'r') ADVANCE(1085);
      END_STATE();
    case 1576:
      if (lookahead == 'r') ADVANCE(1627);
      END_STATE();
    case 1577:
      if (lookahead == 'r') ADVANCE(1151);
      END_STATE();
    case 1578:
      if (lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 1579:
      if (lookahead == 'r') ADVANCE(1087);
      END_STATE();
    case 1580:
      if (lookahead == 'r') ADVANCE(1088);
      END_STATE();
    case 1581:
      if (lookahead == 'r') ADVANCE(1158);
      END_STATE();
    case 1582:
      if (lookahead == 'r') ADVANCE(1112);
      END_STATE();
    case 1583:
      if (lookahead == 'r') ADVANCE(1113);
      END_STATE();
    case 1584:
      if (lookahead == 'r') ADVANCE(1115);
      END_STATE();
    case 1585:
      if (lookahead == 'r') ADVANCE(1118);
      END_STATE();
    case 1586:
      if (lookahead == 'r') ADVANCE(1124);
      END_STATE();
    case 1587:
      if (lookahead == 'r') ADVANCE(1446);
      END_STATE();
    case 1588:
      if (lookahead == 'r') ADVANCE(1056);
      END_STATE();
    case 1589:
      if (lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 1590:
      if (lookahead == 'r') ADVANCE(1637);
      END_STATE();
    case 1591:
      if (lookahead == 'r') ADVANCE(1282);
      END_STATE();
    case 1592:
      if (lookahead == 'r') ADVANCE(1686);
      END_STATE();
    case 1593:
      if (lookahead == 'r') ADVANCE(1696);
      END_STATE();
    case 1594:
      if (lookahead == 'r') ADVANCE(1392);
      END_STATE();
    case 1595:
      if (lookahead == 'r') ADVANCE(983);
      END_STATE();
    case 1596:
      if (lookahead == 'r') ADVANCE(1385);
      END_STATE();
    case 1597:
      if (lookahead == 'r') ADVANCE(972);
      END_STATE();
    case 1598:
      if (lookahead == 'r') ADVANCE(1186);
      END_STATE();
    case 1599:
      if (lookahead == 'r') ADVANCE(1652);
      END_STATE();
    case 1600:
      if (lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 1601:
      if (lookahead == 'r') ADVANCE(1188);
      END_STATE();
    case 1602:
      if (lookahead == 'r') ADVANCE(1059);
      END_STATE();
    case 1603:
      if (lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 1604:
      if (lookahead == 'r') ADVANCE(1062);
      END_STATE();
    case 1605:
      if (lookahead == 'r') ADVANCE(1193);
      END_STATE();
    case 1606:
      if (lookahead == 'r') ADVANCE(1194);
      END_STATE();
    case 1607:
      if (lookahead == 'r') ADVANCE(1198);
      END_STATE();
    case 1608:
      if (lookahead == 'r') ADVANCE(1200);
      END_STATE();
    case 1609:
      if (lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 1610:
      if (lookahead == 'r') ADVANCE(1723);
      END_STATE();
    case 1611:
      if (lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 1612:
      if (lookahead == 'r') ADVANCE(1724);
      END_STATE();
    case 1613:
      if (lookahead == 'r') ADVANCE(1310);
      END_STATE();
    case 1614:
      if (lookahead == 'r') ADVANCE(1313);
      END_STATE();
    case 1615:
      if (lookahead == 'r') ADVANCE(1314);
      END_STATE();
    case 1616:
      if (lookahead == 's') ADVANCE(2038);
      END_STATE();
    case 1617:
      if (lookahead == 's') ADVANCE(1876);
      END_STATE();
    case 1618:
      if (lookahead == 's') ADVANCE(1840);
      END_STATE();
    case 1619:
      if (lookahead == 's') ADVANCE(1910);
      END_STATE();
    case 1620:
      if (lookahead == 's') ADVANCE(1839);
      END_STATE();
    case 1621:
      if (lookahead == 's') ADVANCE(1838);
      END_STATE();
    case 1622:
      if (lookahead == 's') ADVANCE(1899);
      END_STATE();
    case 1623:
      if (lookahead == 's') ADVANCE(1982);
      END_STATE();
    case 1624:
      if (lookahead == 's') ADVANCE(1912);
      END_STATE();
    case 1625:
      if (lookahead == 's') ADVANCE(1973);
      END_STATE();
    case 1626:
      if (lookahead == 's') ADVANCE(1835);
      END_STATE();
    case 1627:
      if (lookahead == 's') ADVANCE(1846);
      END_STATE();
    case 1628:
      if (lookahead == 's') ADVANCE(1935);
      END_STATE();
    case 1629:
      if (lookahead == 's') ADVANCE(1324);
      END_STATE();
    case 1630:
      if (lookahead == 's') ADVANCE(1005);
      END_STATE();
    case 1631:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 1632:
      if (lookahead == 's') ADVANCE(1254);
      END_STATE();
    case 1633:
      if (lookahead == 's') ADVANCE(1326);
      END_STATE();
    case 1634:
      if (lookahead == 's') ADVANCE(1245);
      END_STATE();
    case 1635:
      if (lookahead == 's') ADVANCE(1268);
      END_STATE();
    case 1636:
      if (lookahead == 's') ADVANCE(1519);
      END_STATE();
    case 1637:
      if (lookahead == 's') ADVANCE(1281);
      END_STATE();
    case 1638:
      if (lookahead == 's') ADVANCE(1250);
      END_STATE();
    case 1639:
      if (lookahead == 's') ADVANCE(923);
      END_STATE();
    case 1640:
      if (lookahead == 's') ADVANCE(1630);
      END_STATE();
    case 1641:
      if (lookahead == 's') ADVANCE(1081);
      END_STATE();
    case 1642:
      if (lookahead == 's') ADVANCE(1191);
      END_STATE();
    case 1643:
      if (lookahead == 's') ADVANCE(1156);
      END_STATE();
    case 1644:
      if (lookahead == 's') ADVANCE(1702);
      END_STATE();
    case 1645:
      if (lookahead == 's') ADVANCE(1162);
      END_STATE();
    case 1646:
      if (lookahead == 's') ADVANCE(1107);
      END_STATE();
    case 1647:
      if (lookahead == 's') ADVANCE(1167);
      END_STATE();
    case 1648:
      if (lookahead == 's') ADVANCE(1687);
      END_STATE();
    case 1649:
      if (lookahead == 's') ADVANCE(1472);
      END_STATE();
    case 1650:
      if (lookahead == 's') ADVANCE(1691);
      END_STATE();
    case 1651:
      if (lookahead == 's') ADVANCE(1505);
      END_STATE();
    case 1652:
      if (lookahead == 's') ADVANCE(1295);
      END_STATE();
    case 1653:
      if (lookahead == 's') ADVANCE(1302);
      END_STATE();
    case 1654:
      if (lookahead == 's') ADVANCE(1546);
      END_STATE();
    case 1655:
      if (lookahead == 's') ADVANCE(1653);
      END_STATE();
    case 1656:
      if (lookahead == 's') ADVANCE(1549);
      END_STATE();
    case 1657:
      if (lookahead == 's') ADVANCE(1327);
      END_STATE();
    case 1658:
      if (lookahead == 's') ADVANCE(996);
      END_STATE();
    case 1659:
      if (lookahead == 's') ADVANCE(1731);
      END_STATE();
    case 1660:
      if (lookahead == 't') ADVANCE(1952);
      END_STATE();
    case 1661:
      if (lookahead == 't') ADVANCE(872);
      END_STATE();
    case 1662:
      if (lookahead == 't') ADVANCE(1738);
      END_STATE();
    case 1663:
      if (lookahead == 't') ADVANCE(1947);
      END_STATE();
    case 1664:
      if (lookahead == 't') ADVANCE(1143);
      END_STATE();
    case 1665:
      if (lookahead == 't') ADVANCE(2005);
      END_STATE();
    case 1666:
      if (lookahead == 't') ADVANCE(1954);
      END_STATE();
    case 1667:
      if (lookahead == 't') ADVANCE(1848);
      END_STATE();
    case 1668:
      if (lookahead == 't') ADVANCE(1997);
      END_STATE();
    case 1669:
      if (lookahead == 't') ADVANCE(1901);
      END_STATE();
    case 1670:
      if (lookahead == 't') ADVANCE(1845);
      END_STATE();
    case 1671:
      if (lookahead == 't') ADVANCE(1938);
      END_STATE();
    case 1672:
      if (lookahead == 't') ADVANCE(1939);
      END_STATE();
    case 1673:
      if (lookahead == 't') ADVANCE(1925);
      END_STATE();
    case 1674:
      if (lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 1675:
      if (lookahead == 't') ADVANCE(882);
      END_STATE();
    case 1676:
      if (lookahead == 't') ADVANCE(1847);
      END_STATE();
    case 1677:
      if (lookahead == 't') ADVANCE(1948);
      END_STATE();
    case 1678:
      if (lookahead == 't') ADVANCE(2004);
      END_STATE();
    case 1679:
      if (lookahead == 't') ADVANCE(1946);
      END_STATE();
    case 1680:
      if (lookahead == 't') ADVANCE(876);
      END_STATE();
    case 1681:
      if (lookahead == 't') ADVANCE(1244);
      END_STATE();
    case 1682:
      if (lookahead == 't') ADVANCE(1244);
      if (lookahead == 'u') ADVANCE(1642);
      END_STATE();
    case 1683:
      if (lookahead == 't') ADVANCE(1575);
      END_STATE();
    case 1684:
      if (lookahead == 't') ADVANCE(1246);
      END_STATE();
    case 1685:
      if (lookahead == 't') ADVANCE(1247);
      END_STATE();
    case 1686:
      if (lookahead == 't') ADVANCE(1267);
      END_STATE();
    case 1687:
      if (lookahead == 't') ADVANCE(1572);
      END_STATE();
    case 1688:
      if (lookahead == 't') ADVANCE(989);
      END_STATE();
    case 1689:
      if (lookahead == 't') ADVANCE(1701);
      END_STATE();
    case 1690:
      if (lookahead == 't') ADVANCE(955);
      END_STATE();
    case 1691:
      if (lookahead == 't') ADVANCE(984);
      END_STATE();
    case 1692:
      if (lookahead == 't') ADVANCE(1620);
      END_STATE();
    case 1693:
      if (lookahead == 't') ADVANCE(1138);
      END_STATE();
    case 1694:
      if (lookahead == 't') ADVANCE(1631);
      END_STATE();
    case 1695:
      if (lookahead == 't') ADVANCE(1202);
      END_STATE();
    case 1696:
      if (lookahead == 't') ADVANCE(1150);
      END_STATE();
    case 1697:
      if (lookahead == 't') ADVANCE(1155);
      END_STATE();
    case 1698:
      if (lookahead == 't') ADVANCE(1175);
      END_STATE();
    case 1699:
      if (lookahead == 't') ADVANCE(1384);
      END_STATE();
    case 1700:
      if (lookahead == 't') ADVANCE(1176);
      END_STATE();
    case 1701:
      if (lookahead == 't') ADVANCE(1272);
      END_STATE();
    case 1702:
      if (lookahead == 't') ADVANCE(1493);
      END_STATE();
    case 1703:
      if (lookahead == 't') ADVANCE(1169);
      END_STATE();
    case 1704:
      if (lookahead == 't') ADVANCE(1741);
      END_STATE();
    case 1705:
      if (lookahead == 't') ADVANCE(883);
      END_STATE();
    case 1706:
      if (lookahead == 't') ADVANCE(1286);
      END_STATE();
    case 1707:
      if (lookahead == 't') ADVANCE(1742);
      END_STATE();
    case 1708:
      if (lookahead == 't') ADVANCE(1291);
      END_STATE();
    case 1709:
      if (lookahead == 't') ADVANCE(1743);
      END_STATE();
    case 1710:
      if (lookahead == 't') ADVANCE(1293);
      END_STATE();
    case 1711:
      if (lookahead == 't') ADVANCE(1745);
      END_STATE();
    case 1712:
      if (lookahead == 't') ADVANCE(1296);
      END_STATE();
    case 1713:
      if (lookahead == 't') ADVANCE(1298);
      END_STATE();
    case 1714:
      if (lookahead == 't') ADVANCE(1300);
      END_STATE();
    case 1715:
      if (lookahead == 't') ADVANCE(1304);
      END_STATE();
    case 1716:
      if (lookahead == 't') ADVANCE(1798);
      END_STATE();
    case 1717:
      if (lookahead == 't') ADVANCE(1401);
      END_STATE();
    case 1718:
      if (lookahead == 't') ADVANCE(1746);
      END_STATE();
    case 1719:
      if (lookahead == 't') ADVANCE(1402);
      END_STATE();
    case 1720:
      if (lookahead == 't') ADVANCE(1747);
      END_STATE();
    case 1721:
      if (lookahead == 't') ADVANCE(892);
      END_STATE();
    case 1722:
      if (lookahead == 't') ADVANCE(1748);
      END_STATE();
    case 1723:
      if (lookahead == 't') ADVANCE(897);
      END_STATE();
    case 1724:
      if (lookahead == 't') ADVANCE(898);
      END_STATE();
    case 1725:
      if (lookahead == 't') ADVANCE(993);
      END_STATE();
    case 1726:
      if (lookahead == 't') ADVANCE(1203);
      END_STATE();
    case 1727:
      if (lookahead == 't') ADVANCE(1204);
      END_STATE();
    case 1728:
      if (lookahead == 't') ADVANCE(1205);
      END_STATE();
    case 1729:
      if (lookahead == 't') ADVANCE(1206);
      END_STATE();
    case 1730:
      if (lookahead == 't') ADVANCE(1207);
      END_STATE();
    case 1731:
      if (lookahead == 't') ADVANCE(1611);
      END_STATE();
    case 1732:
      if (lookahead == 'u') ADVANCE(1258);
      END_STATE();
    case 1733:
      if (lookahead == 'u') ADVANCE(1338);
      END_STATE();
    case 1734:
      if (lookahead == 'u') ADVANCE(1427);
      END_STATE();
    case 1735:
      if (lookahead == 'u') ADVANCE(1369);
      END_STATE();
    case 1736:
      if (lookahead == 'u') ADVANCE(1642);
      END_STATE();
    case 1737:
      if (lookahead == 'u') ADVANCE(1428);
      END_STATE();
    case 1738:
      if (lookahead == 'u') ADVANCE(1579);
      END_STATE();
    case 1739:
      if (lookahead == 'u') ADVANCE(1432);
      END_STATE();
    case 1740:
      if (lookahead == 'u') ADVANCE(1646);
      END_STATE();
    case 1741:
      if (lookahead == 'u') ADVANCE(1584);
      END_STATE();
    case 1742:
      if (lookahead == 'u') ADVANCE(1585);
      END_STATE();
    case 1743:
      if (lookahead == 'u') ADVANCE(1586);
      END_STATE();
    case 1744:
      if (lookahead == 'u') ADVANCE(1370);
      END_STATE();
    case 1745:
      if (lookahead == 'u') ADVANCE(1605);
      END_STATE();
    case 1746:
      if (lookahead == 'u') ADVANCE(1606);
      END_STATE();
    case 1747:
      if (lookahead == 'u') ADVANCE(1607);
      END_STATE();
    case 1748:
      if (lookahead == 'u') ADVANCE(1608);
      END_STATE();
    case 1749:
      if (lookahead == 'u') ADVANCE(1727);
      END_STATE();
    case 1750:
      if (lookahead == 'v') ADVANCE(1146);
      END_STATE();
    case 1751:
      if (lookahead == 'v') ADVANCE(1086);
      END_STATE();
    case 1752:
      if (lookahead == 'v') ADVANCE(1136);
      END_STATE();
    case 1753:
      if (lookahead == 'v') ADVANCE(1190);
      END_STATE();
    case 1754:
      if (lookahead == 'v') ADVANCE(1195);
      END_STATE();
    case 1755:
      if (lookahead == 'w') ADVANCE(1975);
      END_STATE();
    case 1756:
      if (lookahead == 'w') ADVANCE(1911);
      END_STATE();
    case 1757:
      if (lookahead == 'w') ADVANCE(1269);
      END_STATE();
    case 1758:
      if (lookahead == 'w') ADVANCE(1453);
      END_STATE();
    case 1759:
      if (lookahead == 'w') ADVANCE(1624);
      END_STATE();
    case 1760:
      if (lookahead == 'w') ADVANCE(891);
      END_STATE();
    case 1761:
      if (lookahead == 'w') ADVANCE(895);
      END_STATE();
    case 1762:
      if (lookahead == 'w') ADVANCE(1001);
      END_STATE();
    case 1763:
      if (lookahead == 'x') ADVANCE(1983);
      END_STATE();
    case 1764:
      if (lookahead == 'x') ADVANCE(1389);
      END_STATE();
    case 1765:
      if (lookahead == 'x') ADVANCE(462);
      END_STATE();
    case 1766:
      if (lookahead == 'x') ADVANCE(1663);
      END_STATE();
    case 1767:
      if (lookahead == 'x') ADVANCE(1670);
      END_STATE();
    case 1768:
      if (lookahead == 'x') ADVANCE(1674);
      END_STATE();
    case 1769:
      if (lookahead == 'x') ADVANCE(1675);
      END_STATE();
    case 1770:
      if (lookahead == 'x') ADVANCE(1677);
      END_STATE();
    case 1771:
      if (lookahead == 'x') ADVANCE(1679);
      END_STATE();
    case 1772:
      if (lookahead == 'x') ADVANCE(1704);
      END_STATE();
    case 1773:
      if (lookahead == 'x') ADVANCE(1705);
      END_STATE();
    case 1774:
      if (lookahead == 'x') ADVANCE(1707);
      END_STATE();
    case 1775:
      if (lookahead == 'x') ADVANCE(1709);
      END_STATE();
    case 1776:
      if (lookahead == 'x') ADVANCE(1711);
      END_STATE();
    case 1777:
      if (lookahead == 'x') ADVANCE(1718);
      END_STATE();
    case 1778:
      if (lookahead == 'x') ADVANCE(1720);
      END_STATE();
    case 1779:
      if (lookahead == 'x') ADVANCE(1722);
      END_STATE();
    case 1780:
      if (lookahead == 'x') ADVANCE(896);
      END_STATE();
    case 1781:
      if (lookahead == 'y') ADVANCE(1924);
      END_STATE();
    case 1782:
      if (lookahead == 'y') ADVANCE(909);
      END_STATE();
    case 1783:
      if (lookahead == 'y') ADVANCE(462);
      END_STATE();
    case 1784:
      if (lookahead == 'y') ADVANCE(920);
      END_STATE();
    case 1785:
      if (lookahead == 'y') ADVANCE(905);
      END_STATE();
    case 1786:
      if (lookahead == 'y') ADVANCE(1648);
      END_STATE();
    case 1787:
      if (lookahead == 'y') ADVANCE(1521);
      END_STATE();
    case 1788:
      if (lookahead == 'y') ADVANCE(1522);
      END_STATE();
    case 1789:
      if (lookahead == 'y') ADVANCE(1523);
      END_STATE();
    case 1790:
      if (lookahead == 'y') ADVANCE(1524);
      END_STATE();
    case 1791:
      if (lookahead == 'y') ADVANCE(1525);
      END_STATE();
    case 1792:
      if (lookahead == 'y') ADVANCE(1526);
      END_STATE();
    case 1793:
      if (lookahead == 'y') ADVANCE(1527);
      END_STATE();
    case 1794:
      if (lookahead == 'y') ADVANCE(1529);
      END_STATE();
    case 1795:
      if (lookahead == 'y') ADVANCE(1530);
      END_STATE();
    case 1796:
      if (lookahead == 'y') ADVANCE(1531);
      END_STATE();
    case 1797:
      if (lookahead == 'y') ADVANCE(1532);
      END_STATE();
    case 1798:
      if (lookahead == 'y') ADVANCE(1533);
      END_STATE();
    case 1799:
      if (lookahead == 'y') ADVANCE(1534);
      END_STATE();
    case 1800:
      if (lookahead == 'y') ADVANCE(1535);
      END_STATE();
    case 1801:
      if (lookahead == 'y') ADVANCE(1536);
      END_STATE();
    case 1802:
      if (lookahead == 'y') ADVANCE(1537);
      END_STATE();
    case 1803:
      if (lookahead == 'y') ADVANCE(922);
      END_STATE();
    case 1804:
      if (lookahead == 'y') ADVANCE(1659);
      END_STATE();
    case 1805:
      if (lookahead == 'z') ADVANCE(1498);
      END_STATE();
    case 1806:
      if (lookahead == 'z') ADVANCE(1078);
      END_STATE();
    case 1807:
      if (lookahead == 'z') ADVANCE(1092);
      END_STATE();
    case 1808:
      if (lookahead == 'z') ADVANCE(1803);
      END_STATE();
    case 1809:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1294);
      END_STATE();
    case 1810:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1301);
      END_STATE();
    case 1811:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1306);
      END_STATE();
    case 1812:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1307);
      END_STATE();
    case 1813:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2018);
      END_STATE();
    case 1814:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2019);
      END_STATE();
    case 1815:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2025);
      END_STATE();
    case 1816:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2026);
      END_STATE();
    case 1817:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2035);
      END_STATE();
    case 1818:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2021);
      END_STATE();
    case 1819:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2022);
      END_STATE();
    case 1820:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 1821:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2034);
      END_STATE();
    case 1822:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2033);
      END_STATE();
    case 1823:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1821);
      END_STATE();
    case 1824:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1822);
      END_STATE();
    case 1825:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1823);
      END_STATE();
    case 1826:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1824);
      END_STATE();
    case 1827:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1825);
      END_STATE();
    case 1828:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(861);
      END_STATE();
    case 1829:
      if (eof) ADVANCE(1834);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 1830:
      if (eof) ADVANCE(1834);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(1829)
      END_STATE();
    case 1831:
      if (eof) ADVANCE(1834);
      if (lookahead == '\n') SKIP(1833)
      END_STATE();
    case 1832:
      if (eof) ADVANCE(1834);
      if (lookahead == '\n') SKIP(1833)
      if (lookahead == '\r') SKIP(1831)
      END_STATE();
    case 1833:
      if (eof) ADVANCE(1834);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '#') ADVANCE(2045);
      if (lookahead == '=') ADVANCE(2013);
      if (lookahead == '\\') SKIP(1832)
      if (lookahead == 'a') ADVANCE(1330);
      if (lookahead == 'b') ADVANCE(925);
      if (lookahead == 'c') ADVANCE(1378);
      if (lookahead == 'd') ADVANCE(1067);
      if (lookahead == 'e') ADVANCE(1213);
      if (lookahead == 'f') ADVANCE(1259);
      if (lookahead == 'g') ADVANCE(1732);
      if (lookahead == 'h') ADVANCE(1455);
      if (lookahead == 'i') ADVANCE(1406);
      if (lookahead == 'l') ADVANCE(1068);
      if (lookahead == 'm') ADVANCE(1127);
      if (lookahead == 'n') ADVANCE(932);
      if (lookahead == 'o') ADVANCE(1002);
      if (lookahead == 'p') ADVANCE(938);
      if (lookahead == 'r') ADVANCE(1072);
      if (lookahead == 's') ADVANCE(1012);
      if (lookahead == 't') ADVANCE(945);
      if (lookahead == 'v') ADVANCE(1130);
      if (lookahead == 'x') ADVANCE(1860);
      if (lookahead == 'y') ADVANCE(1861);
      if (lookahead == '}') ADVANCE(1837);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1833)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2027);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(anon_sym_objectTypes);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(anon_sym_bitmapfonts);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(anon_sym_guiTypes);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(anon_sym_textSpriteType);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(anon_sym_corneredTileSpriteType);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(anon_sym_maskedShieldType);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(anon_sym_animatedmaptext);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(anon_sym_textcolors);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      if (lookahead == 's') ADVANCE(1839);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(anon_sym_frameAnimatedSpriteType);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_progressbartype);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(anon_sym_pdxmesh);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_pdxparticle);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_arrowType);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(anon_sym_tradeRouteType);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_PieChartType);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_LineChartType);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_windowType);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_listBoxType);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(1616);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(aux_sym__statement_gfx_name_token1);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '1') ADVANCE(1906);
      if (lookahead == '2') ADVANCE(1907);
      if (lookahead == '3') ADVANCE(1908);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '2') ADVANCE(1907);
      if (lookahead == '3') ADVANCE(1908);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token2);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile1_token1);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile2_token1);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile3_token1);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1595);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1595);
      if (lookahead == 'b') ADVANCE(1356);
      if (lookahead == 'd') ADVANCE(1183);
      if (lookahead == 'r') ADVANCE(1512);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(1225);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(anon_sym_borderSize);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(anon_sym_alwaystransparent);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(anon_sym_allwaystransparent);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(anon_sym_legacy_lazy_load);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(anon_sym_clicksound);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == 's') ADVANCE(1505);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(anon_sym_speed);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_textblock);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'S') ADVANCE(1539);
      if (lookahead == 'b') ADVANCE(1342);
      if (lookahead == 'u') ADVANCE(1580);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'u') ADVANCE(1607);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == 't') ADVANCE(1758);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_colortwo);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_cull_distance);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'a') ADVANCE(1006);
      if (lookahead == 'i') ADVANCE(1699);
      if (lookahead == 'o') ADVANCE(1588);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(1426);
      if (lookahead == 'o') ADVANCE(943);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'u') ADVANCE(1258);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(anon_sym_border_color);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(anon_sym_animation_rate_fps);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(anon_sym_looping);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(anon_sym_play_on_show);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(anon_sym_pause_on_loop);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym__statement_gfx_file_token1);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(anon_sym_meshsettings);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(anon_sym_texture_diffuse);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(anon_sym_texture_normal);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(anon_sym_texture_specular);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(anon_sym_shader);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(anon_sym_shader);
      if (lookahead == '_') ADVANCE(1229);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym__statement_gfx_meshsettings_shader_token1);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(anon_sym_shader_file);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(aux_sym__statement_gfx_meshsettings_shader_file_token1);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(anon_sym_transparencecheck);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(anon_sym_loadType);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(anon_sym_DQUOTEINGAME_DQUOTE);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(anon_sym_DQUOTEFRONTEND_DQUOTE);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(anon_sym_norefcount);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(anon_sym_texture);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == '_') ADVANCE(1051);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1294);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1294);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1306);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(anon_sym_specular);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(anon_sym_effect);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(anon_sym_effect);
      if (lookahead == 'F') ADVANCE(1285);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effect_token1);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(anon_sym_alphamaskfile);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(aux_sym__statement_gfx_alphamaskfile_token1);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(anon_sym_linewidth);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(anon_sym_backGround);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(anon_sym_moveable);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(anon_sym_orientation);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1814);
      if (lookahead == '5') ADVANCE(2017);
      if (lookahead == 'f') ADVANCE(2015);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2018);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(2018);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1814);
      if (lookahead == 'f') ADVANCE(2015);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2018);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(2018);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1814);
      if (lookahead == 'f') ADVANCE(2015);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2018);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(2015);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2019);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(1819);
      if (lookahead == 'f') ADVANCE(2020);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2021);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(2020);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2022);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      if (lookahead == '.') ADVANCE(1815);
      if (lookahead == 'f') ADVANCE(2023);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2024);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      if (lookahead == 'f') ADVANCE(2023);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2025);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2026);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2027);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead == '5') ADVANCE(2030);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(2031);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(2028);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2028);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2031);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(sym_hexadecimal);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1826);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'O') ADVANCE(1212);
      if (lookahead == 'r') ADVANCE(1134);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(1814);
      if (lookahead == 'f') ADVANCE(2015);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2018);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(1814);
      if (lookahead == 'f') ADVANCE(2015);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2018);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2045);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(aux_sym__orientation_value_token1);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1833},
  [2] = {.lex_state = 1833},
  [3] = {.lex_state = 1833},
  [4] = {.lex_state = 553},
  [5] = {.lex_state = 553},
  [6] = {.lex_state = 553},
  [7] = {.lex_state = 554},
  [8] = {.lex_state = 555},
  [9] = {.lex_state = 554},
  [10] = {.lex_state = 555},
  [11] = {.lex_state = 555},
  [12] = {.lex_state = 554},
  [13] = {.lex_state = 556},
  [14] = {.lex_state = 554},
  [15] = {.lex_state = 554},
  [16] = {.lex_state = 556},
  [17] = {.lex_state = 554},
  [18] = {.lex_state = 1833},
  [19] = {.lex_state = 1833},
  [20] = {.lex_state = 1833},
  [21] = {.lex_state = 554},
  [22] = {.lex_state = 554},
  [23] = {.lex_state = 554},
  [24] = {.lex_state = 554},
  [25] = {.lex_state = 558},
  [26] = {.lex_state = 554},
  [27] = {.lex_state = 554},
  [28] = {.lex_state = 558},
  [29] = {.lex_state = 553},
  [30] = {.lex_state = 553},
  [31] = {.lex_state = 553},
  [32] = {.lex_state = 553},
  [33] = {.lex_state = 553},
  [34] = {.lex_state = 553},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 553},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 553},
  [39] = {.lex_state = 553},
  [40] = {.lex_state = 555},
  [41] = {.lex_state = 555},
  [42] = {.lex_state = 555},
  [43] = {.lex_state = 557},
  [44] = {.lex_state = 557},
  [45] = {.lex_state = 557},
  [46] = {.lex_state = 557},
  [47] = {.lex_state = 557},
  [48] = {.lex_state = 557},
  [49] = {.lex_state = 553},
  [50] = {.lex_state = 553},
  [51] = {.lex_state = 559},
  [52] = {.lex_state = 1833},
  [53] = {.lex_state = 559},
  [54] = {.lex_state = 553},
  [55] = {.lex_state = 554},
  [56] = {.lex_state = 1833},
  [57] = {.lex_state = 553},
  [58] = {.lex_state = 560},
  [59] = {.lex_state = 553},
  [60] = {.lex_state = 553},
  [61] = {.lex_state = 554},
  [62] = {.lex_state = 560},
  [63] = {.lex_state = 553},
  [64] = {.lex_state = 553},
  [65] = {.lex_state = 561},
  [66] = {.lex_state = 562},
  [67] = {.lex_state = 1833},
  [68] = {.lex_state = 553},
  [69] = {.lex_state = 562},
  [70] = {.lex_state = 553},
  [71] = {.lex_state = 562},
  [72] = {.lex_state = 561},
  [73] = {.lex_state = 557},
  [74] = {.lex_state = 561},
  [75] = {.lex_state = 1833},
  [76] = {.lex_state = 561},
  [77] = {.lex_state = 553},
  [78] = {.lex_state = 553},
  [79] = {.lex_state = 553},
  [80] = {.lex_state = 561},
  [81] = {.lex_state = 1833},
  [82] = {.lex_state = 553},
  [83] = {.lex_state = 553},
  [84] = {.lex_state = 555},
  [85] = {.lex_state = 555},
  [86] = {.lex_state = 560},
  [87] = {.lex_state = 555},
  [88] = {.lex_state = 557},
  [89] = {.lex_state = 560},
  [90] = {.lex_state = 555},
  [91] = {.lex_state = 559},
  [92] = {.lex_state = 560},
  [93] = {.lex_state = 559},
  [94] = {.lex_state = 555},
  [95] = {.lex_state = 553},
  [96] = {.lex_state = 561},
  [97] = {.lex_state = 561},
  [98] = {.lex_state = 553},
  [99] = {.lex_state = 560},
  [100] = {.lex_state = 555},
  [101] = {.lex_state = 555},
  [102] = {.lex_state = 555},
  [103] = {.lex_state = 553},
  [104] = {.lex_state = 561},
  [105] = {.lex_state = 555},
  [106] = {.lex_state = 555},
  [107] = {.lex_state = 560},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 559},
  [110] = {.lex_state = 555},
  [111] = {.lex_state = 555},
  [112] = {.lex_state = 555},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 555},
  [115] = {.lex_state = 555},
  [116] = {.lex_state = 555},
  [117] = {.lex_state = 555},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 559},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 555},
  [122] = {.lex_state = 555},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 563},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 553},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 555},
  [131] = {.lex_state = 555},
  [132] = {.lex_state = 555},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 563},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 555},
  [138] = {.lex_state = 555},
  [139] = {.lex_state = 555},
  [140] = {.lex_state = 563},
  [141] = {.lex_state = 553},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 553},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 553},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 553},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 553},
  [151] = {.lex_state = 557},
  [152] = {.lex_state = 557},
  [153] = {.lex_state = 557},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 553},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 553},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 553},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 553},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 553},
  [165] = {.lex_state = 553},
  [166] = {.lex_state = 564},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 561},
  [170] = {.lex_state = 553},
  [171] = {.lex_state = 553},
  [172] = {.lex_state = 553},
  [173] = {.lex_state = 553},
  [174] = {.lex_state = 553},
  [175] = {.lex_state = 557},
  [176] = {.lex_state = 553},
  [177] = {.lex_state = 553},
  [178] = {.lex_state = 553},
  [179] = {.lex_state = 564},
  [180] = {.lex_state = 553},
  [181] = {.lex_state = 557},
  [182] = {.lex_state = 557},
  [183] = {.lex_state = 553},
  [184] = {.lex_state = 553},
  [185] = {.lex_state = 553},
  [186] = {.lex_state = 553},
  [187] = {.lex_state = 553},
  [188] = {.lex_state = 553},
  [189] = {.lex_state = 553},
  [190] = {.lex_state = 553},
  [191] = {.lex_state = 553},
  [192] = {.lex_state = 553},
  [193] = {.lex_state = 553},
  [194] = {.lex_state = 553},
  [195] = {.lex_state = 557},
  [196] = {.lex_state = 553},
  [197] = {.lex_state = 553},
  [198] = {.lex_state = 557},
  [199] = {.lex_state = 553},
  [200] = {.lex_state = 561},
  [201] = {.lex_state = 562},
  [202] = {.lex_state = 1833},
  [203] = {.lex_state = 1833},
  [204] = {.lex_state = 1833},
  [205] = {.lex_state = 562},
  [206] = {.lex_state = 561},
  [207] = {.lex_state = 561},
  [208] = {.lex_state = 561},
  [209] = {.lex_state = 561},
  [210] = {.lex_state = 1833},
  [211] = {.lex_state = 1833},
  [212] = {.lex_state = 561},
  [213] = {.lex_state = 553},
  [214] = {.lex_state = 562},
  [215] = {.lex_state = 562},
  [216] = {.lex_state = 562},
  [217] = {.lex_state = 1833},
  [218] = {.lex_state = 562},
  [219] = {.lex_state = 561},
  [220] = {.lex_state = 561},
  [221] = {.lex_state = 561},
  [222] = {.lex_state = 1833},
  [223] = {.lex_state = 562},
  [224] = {.lex_state = 561},
  [225] = {.lex_state = 562},
  [226] = {.lex_state = 553},
  [227] = {.lex_state = 1833},
  [228] = {.lex_state = 1833},
  [229] = {.lex_state = 562},
  [230] = {.lex_state = 553},
  [231] = {.lex_state = 562},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 1833},
  [234] = {.lex_state = 1833},
  [235] = {.lex_state = 1833},
  [236] = {.lex_state = 553},
  [237] = {.lex_state = 1833},
  [238] = {.lex_state = 1833},
  [239] = {.lex_state = 1833},
  [240] = {.lex_state = 561},
  [241] = {.lex_state = 562},
  [242] = {.lex_state = 1833},
  [243] = {.lex_state = 1833},
  [244] = {.lex_state = 1833},
  [245] = {.lex_state = 1833},
  [246] = {.lex_state = 562},
  [247] = {.lex_state = 1833},
  [248] = {.lex_state = 553},
  [249] = {.lex_state = 1833},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 1833},
  [252] = {.lex_state = 1833},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 561},
  [255] = {.lex_state = 561},
  [256] = {.lex_state = 561},
  [257] = {.lex_state = 1833},
  [258] = {.lex_state = 1833},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 553},
  [262] = {.lex_state = 553},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 553},
  [266] = {.lex_state = 553},
  [267] = {.lex_state = 553},
  [268] = {.lex_state = 561},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 553},
  [271] = {.lex_state = 553},
  [272] = {.lex_state = 563},
  [273] = {.lex_state = 563},
  [274] = {.lex_state = 563},
  [275] = {.lex_state = 563},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 563},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 563},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 563},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 1833},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 1833},
  [300] = {.lex_state = 1833},
  [301] = {.lex_state = 1833},
  [302] = {.lex_state = 1833},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 1833},
  [305] = {.lex_state = 1833},
  [306] = {.lex_state = 1833},
  [307] = {.lex_state = 1833},
  [308] = {.lex_state = 1833},
  [309] = {.lex_state = 1833},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 1833},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 1833},
  [314] = {.lex_state = 1833},
  [315] = {.lex_state = 1833},
  [316] = {.lex_state = 1833},
  [317] = {.lex_state = 1833},
  [318] = {.lex_state = 1833},
  [319] = {.lex_state = 1833},
  [320] = {.lex_state = 1833},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 1833},
  [323] = {.lex_state = 1833},
  [324] = {.lex_state = 1833},
  [325] = {.lex_state = 1833},
  [326] = {.lex_state = 1833},
  [327] = {.lex_state = 1833},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 553},
  [330] = {.lex_state = 1833},
  [331] = {.lex_state = 1833},
  [332] = {.lex_state = 1833},
  [333] = {.lex_state = 1833},
  [334] = {.lex_state = 1833},
  [335] = {.lex_state = 1833},
  [336] = {.lex_state = 1833},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 560},
  [339] = {.lex_state = 1833},
  [340] = {.lex_state = 560},
  [341] = {.lex_state = 1833},
  [342] = {.lex_state = 560},
  [343] = {.lex_state = 553},
  [344] = {.lex_state = 560},
  [345] = {.lex_state = 553},
  [346] = {.lex_state = 553},
  [347] = {.lex_state = 560},
  [348] = {.lex_state = 560},
  [349] = {.lex_state = 560},
  [350] = {.lex_state = 560},
  [351] = {.lex_state = 553},
  [352] = {.lex_state = 560},
  [353] = {.lex_state = 553},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 553},
  [356] = {.lex_state = 1833},
  [357] = {.lex_state = 560},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 553},
  [361] = {.lex_state = 1833},
  [362] = {.lex_state = 1833},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 553},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 1833},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 553},
  [369] = {.lex_state = 1833},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 1833},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 554},
  [375] = {.lex_state = 554},
  [376] = {.lex_state = 554},
  [377] = {.lex_state = 554},
  [378] = {.lex_state = 555},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 554},
  [386] = {.lex_state = 554},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 554},
  [391] = {.lex_state = 554},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 1833},
  [394] = {.lex_state = 1833},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 1833},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 1833},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 553},
  [402] = {.lex_state = 1833},
  [403] = {.lex_state = 1833},
  [404] = {.lex_state = 1833},
  [405] = {.lex_state = 553},
  [406] = {.lex_state = 555},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 554},
  [410] = {.lex_state = 1833},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 1833},
  [413] = {.lex_state = 554},
  [414] = {.lex_state = 554},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 553},
  [417] = {.lex_state = 553},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 554},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 1833},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 1833},
  [426] = {.lex_state = 1833},
  [427] = {.lex_state = 553},
  [428] = {.lex_state = 553},
  [429] = {.lex_state = 554},
  [430] = {.lex_state = 1833},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 1833},
  [436] = {.lex_state = 1833},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 1833},
  [441] = {.lex_state = 554},
  [442] = {.lex_state = 554},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 553},
  [448] = {.lex_state = 553},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 1833},
  [451] = {.lex_state = 1833},
  [452] = {.lex_state = 556},
  [453] = {.lex_state = 553},
  [454] = {.lex_state = 555},
  [455] = {.lex_state = 556},
  [456] = {.lex_state = 1833},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 553},
  [460] = {.lex_state = 553},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 1833},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 556},
  [465] = {.lex_state = 1833},
  [466] = {.lex_state = 556},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 553},
  [471] = {.lex_state = 1833},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 558},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 553},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 553},
  [478] = {.lex_state = 558},
  [479] = {.lex_state = 558},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 553},
  [482] = {.lex_state = 1833},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 555},
  [488] = {.lex_state = 556},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 553},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 557},
  [497] = {.lex_state = 557},
  [498] = {.lex_state = 1833},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 556},
  [503] = {.lex_state = 553},
  [504] = {.lex_state = 1833},
  [505] = {.lex_state = 556},
  [506] = {.lex_state = 556},
  [507] = {.lex_state = 555},
  [508] = {.lex_state = 555},
  [509] = {.lex_state = 553},
  [510] = {.lex_state = 1833},
  [511] = {.lex_state = 1833},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 553},
  [514] = {.lex_state = 1833},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 1833},
  [518] = {.lex_state = 1833},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 556},
  [524] = {.lex_state = 553},
  [525] = {.lex_state = 553},
  [526] = {.lex_state = 1833},
  [527] = {.lex_state = 554},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 1833},
  [534] = {.lex_state = 554},
  [535] = {.lex_state = 0},
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
    [anon_sym_textblock] = ACTIONS(1),
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
    [anon_sym_moveable] = ACTIONS(1),
    [anon_sym_orientation] = ACTIONS(1),
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
    [sym_file] = STATE(521),
    [sym_dot_mod] = STATE(522),
    [sym_dot_gfx] = STATE(522),
    [sym_dot_gui] = STATE(522),
    [sym__gui_types_definition] = STATE(304),
    [sym__spriteTypes] = STATE(227),
    [sym__objectTypes] = STATE(227),
    [sym__bitmapfonts] = STATE(227),
    [sym__guiTypes] = STATE(304),
    [sym__statement_name] = STATE(37),
    [sym__statement_mod_path] = STATE(37),
    [sym__statement_mod_archive] = STATE(37),
    [sym__statement_mod_remote_file_id] = STATE(37),
    [sym__statement_mod_version] = STATE(37),
    [sym__statement_mod_picture] = STATE(37),
    [sym__statement_mod_supported_version] = STATE(37),
    [sym__statement_mod_replace_path] = STATE(37),
    [sym__statement_mod_tags] = STATE(37),
    [sym__statement_mod_dependencies] = STATE(37),
    [aux_sym_dot_mod_repeat1] = STATE(37),
    [aux_sym_dot_gfx_repeat1] = STATE(227),
    [aux_sym_dot_gui_repeat1] = STATE(304),
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
  [101] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(47), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(49), 1,
      anon_sym_noOfFrames,
    ACTIONS(51), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(53), 1,
      anon_sym_overlay_rows,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(57), 1,
      anon_sym_animation,
    ACTIONS(59), 1,
      anon_sym_alwaystransparent,
    ACTIONS(61), 1,
      anon_sym_allwaystransparent,
    ACTIONS(63), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(65), 1,
      anon_sym_clicksound,
    ACTIONS(67), 1,
      anon_sym_transparencecheck,
    ACTIONS(69), 1,
      anon_sym_loadType,
    ACTIONS(71), 1,
      anon_sym_norefcount,
    ACTIONS(73), 1,
      anon_sym_alphamaskfile,
    STATE(78), 1,
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
  [173] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      anon_sym_name,
    ACTIONS(80), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(83), 1,
      anon_sym_noOfFrames,
    ACTIONS(86), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(89), 1,
      anon_sym_overlay_rows,
    ACTIONS(92), 1,
      anon_sym_effectFile,
    ACTIONS(95), 1,
      anon_sym_animation,
    ACTIONS(98), 1,
      anon_sym_alwaystransparent,
    ACTIONS(101), 1,
      anon_sym_allwaystransparent,
    ACTIONS(104), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(107), 1,
      anon_sym_clicksound,
    ACTIONS(110), 1,
      anon_sym_transparencecheck,
    ACTIONS(113), 1,
      anon_sym_loadType,
    ACTIONS(116), 1,
      anon_sym_norefcount,
    ACTIONS(119), 1,
      anon_sym_alphamaskfile,
    STATE(78), 1,
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
  [245] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(47), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(49), 1,
      anon_sym_noOfFrames,
    ACTIONS(51), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(53), 1,
      anon_sym_overlay_rows,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(57), 1,
      anon_sym_animation,
    ACTIONS(59), 1,
      anon_sym_alwaystransparent,
    ACTIONS(61), 1,
      anon_sym_allwaystransparent,
    ACTIONS(63), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(65), 1,
      anon_sym_clicksound,
    ACTIONS(67), 1,
      anon_sym_transparencecheck,
    ACTIONS(69), 1,
      anon_sym_loadType,
    ACTIONS(71), 1,
      anon_sym_norefcount,
    ACTIONS(73), 1,
      anon_sym_alphamaskfile,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
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
  [317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_assign_equal,
    ACTIONS(126), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(124), 25,
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
  [356] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(47), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(49), 1,
      anon_sym_noOfFrames,
    ACTIONS(51), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(53), 1,
      anon_sym_overlay_rows,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(61), 1,
      anon_sym_allwaystransparent,
    ACTIONS(67), 1,
      anon_sym_transparencecheck,
    ACTIONS(69), 1,
      anon_sym_loadType,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(132), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(134), 1,
      anon_sym_looping,
    ACTIONS(136), 1,
      anon_sym_play_on_show,
    ACTIONS(138), 1,
      anon_sym_pause_on_loop,
    STATE(105), 1,
      sym__statement_gfx_name,
    STATE(11), 13,
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
  [420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_assign_equal,
    ACTIONS(142), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(140), 24,
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
  [458] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(47), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(49), 1,
      anon_sym_noOfFrames,
    ACTIONS(51), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(53), 1,
      anon_sym_overlay_rows,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(61), 1,
      anon_sym_allwaystransparent,
    ACTIONS(67), 1,
      anon_sym_transparencecheck,
    ACTIONS(69), 1,
      anon_sym_loadType,
    ACTIONS(132), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(134), 1,
      anon_sym_looping,
    ACTIONS(136), 1,
      anon_sym_play_on_show,
    ACTIONS(138), 1,
      anon_sym_pause_on_loop,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym__statement_gfx_name,
    STATE(8), 13,
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
  [522] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 1,
      anon_sym_name,
    ACTIONS(153), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(156), 1,
      anon_sym_noOfFrames,
    ACTIONS(159), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(162), 1,
      anon_sym_overlay_rows,
    ACTIONS(165), 1,
      anon_sym_effectFile,
    ACTIONS(168), 1,
      anon_sym_allwaystransparent,
    ACTIONS(171), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(174), 1,
      anon_sym_looping,
    ACTIONS(177), 1,
      anon_sym_play_on_show,
    ACTIONS(180), 1,
      anon_sym_pause_on_loop,
    ACTIONS(183), 1,
      anon_sym_transparencecheck,
    ACTIONS(186), 1,
      anon_sym_loadType,
    STATE(105), 1,
      sym__statement_gfx_name,
    STATE(11), 13,
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
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(189), 25,
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
  [622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_assign_equal,
    ACTIONS(195), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_effect,
    ACTIONS(193), 23,
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
  [659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(199), 24,
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
  [694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_assign_equal,
    ACTIONS(205), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(203), 23,
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
  [730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_effect,
    ACTIONS(209), 23,
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
  [764] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(219), 22,
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
  [832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(223), 22,
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
  [867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(227), 22,
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
  [902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_assign_equal,
    ACTIONS(232), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(230), 21,
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
  [936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_assign_equal,
    ACTIONS(238), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(236), 21,
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
  [970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_assign_equal,
    ACTIONS(244), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(242), 21,
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
  [1004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(248), 21,
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
  [1035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_animation,
    ACTIONS(256), 1,
      sym_assign_equal,
    ACTIONS(252), 21,
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
  [1068] = 3,
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
  [1099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(262), 21,
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
  [1130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_animation,
    ACTIONS(266), 21,
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
  [1160] = 14,
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
      anon_sym_clicksound,
    ACTIONS(296), 1,
      anon_sym_transparencecheck,
    ACTIONS(299), 1,
      anon_sym_loadType,
    STATE(157), 1,
      sym__statement_gfx_name,
    STATE(29), 10,
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
  [1212] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      anon_sym_spriteType,
    ACTIONS(306), 1,
      anon_sym_textSpriteType,
    ACTIONS(308), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(310), 1,
      anon_sym_maskedShieldType,
    ACTIONS(312), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(314), 1,
      anon_sym_progressbartype,
    ACTIONS(316), 1,
      anon_sym_PieChartType,
    ACTIONS(318), 1,
      anon_sym_LineChartType,
    ACTIONS(320), 1,
      anon_sym_cursor_offset,
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
  [1260] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(47), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(49), 1,
      anon_sym_noOfFrames,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(61), 1,
      anon_sym_allwaystransparent,
    ACTIONS(63), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(69), 1,
      anon_sym_loadType,
    ACTIONS(71), 1,
      anon_sym_norefcount,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      anon_sym_size,
    ACTIONS(326), 1,
      anon_sym_borderSize,
    STATE(159), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(33), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1312] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(47), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(49), 1,
      anon_sym_noOfFrames,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(61), 1,
      anon_sym_allwaystransparent,
    ACTIONS(63), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(69), 1,
      anon_sym_loadType,
    ACTIONS(71), 1,
      anon_sym_norefcount,
    ACTIONS(324), 1,
      anon_sym_size,
    ACTIONS(326), 1,
      anon_sym_borderSize,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(159), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(31), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1364] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      anon_sym_name,
    ACTIONS(335), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(338), 1,
      anon_sym_noOfFrames,
    ACTIONS(341), 1,
      anon_sym_effectFile,
    ACTIONS(344), 1,
      anon_sym_size,
    ACTIONS(347), 1,
      anon_sym_borderSize,
    ACTIONS(350), 1,
      anon_sym_allwaystransparent,
    ACTIONS(353), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(356), 1,
      anon_sym_loadType,
    ACTIONS(359), 1,
      anon_sym_norefcount,
    STATE(159), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(33), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1416] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(47), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(49), 1,
      anon_sym_noOfFrames,
    ACTIONS(51), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(53), 1,
      anon_sym_overlay_rows,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(61), 1,
      anon_sym_allwaystransparent,
    ACTIONS(65), 1,
      anon_sym_clicksound,
    ACTIONS(67), 1,
      anon_sym_transparencecheck,
    ACTIONS(69), 1,
      anon_sym_loadType,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym__statement_gfx_name,
    STATE(29), 10,
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
  [1468] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      anon_sym_name,
    ACTIONS(369), 1,
      anon_sym_path,
    ACTIONS(372), 1,
      anon_sym_archive,
    ACTIONS(375), 1,
      anon_sym_remote_file_id,
    ACTIONS(378), 1,
      anon_sym_version,
    ACTIONS(381), 1,
      anon_sym_picture,
    ACTIONS(384), 1,
      anon_sym_supported_version,
    ACTIONS(387), 1,
      anon_sym_replace_path,
    ACTIONS(390), 1,
      anon_sym_tags,
    ACTIONS(393), 1,
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
  [1518] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(47), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(49), 1,
      anon_sym_noOfFrames,
    ACTIONS(51), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(53), 1,
      anon_sym_overlay_rows,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(61), 1,
      anon_sym_allwaystransparent,
    ACTIONS(65), 1,
      anon_sym_clicksound,
    ACTIONS(67), 1,
      anon_sym_transparencecheck,
    ACTIONS(69), 1,
      anon_sym_loadType,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym__statement_gfx_name,
    STATE(34), 10,
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
  [1570] = 13,
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
    ACTIONS(398), 1,
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
  [1620] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_spriteType,
    ACTIONS(306), 1,
      anon_sym_textSpriteType,
    ACTIONS(308), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(310), 1,
      anon_sym_maskedShieldType,
    ACTIONS(312), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(314), 1,
      anon_sym_progressbartype,
    ACTIONS(316), 1,
      anon_sym_PieChartType,
    ACTIONS(318), 1,
      anon_sym_LineChartType,
    ACTIONS(320), 1,
      anon_sym_cursor_offset,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(30), 12,
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
  [1668] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(404), 1,
      anon_sym_spriteType,
    ACTIONS(407), 1,
      anon_sym_textSpriteType,
    ACTIONS(410), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(413), 1,
      anon_sym_maskedShieldType,
    ACTIONS(416), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(419), 1,
      anon_sym_progressbartype,
    ACTIONS(422), 1,
      anon_sym_PieChartType,
    ACTIONS(425), 1,
      anon_sym_LineChartType,
    ACTIONS(428), 1,
      anon_sym_cursor_offset,
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
  [1716] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    ACTIONS(435), 1,
      anon_sym_animationrotation,
    ACTIONS(437), 1,
      anon_sym_animationlooping,
    ACTIONS(443), 1,
      anon_sym_animationblendmode,
    ACTIONS(445), 1,
      anon_sym_animationtype,
    ACTIONS(447), 1,
      anon_sym_animationframes,
    ACTIONS(433), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(439), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(441), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(42), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [1761] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_animationrotation,
    ACTIONS(437), 1,
      anon_sym_animationlooping,
    ACTIONS(443), 1,
      anon_sym_animationblendmode,
    ACTIONS(445), 1,
      anon_sym_animationtype,
    ACTIONS(447), 1,
      anon_sym_animationframes,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    ACTIONS(433), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(439), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(441), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(40), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [1806] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    ACTIONS(456), 1,
      anon_sym_animationrotation,
    ACTIONS(459), 1,
      anon_sym_animationlooping,
    ACTIONS(468), 1,
      anon_sym_animationblendmode,
    ACTIONS(471), 1,
      anon_sym_animationtype,
    ACTIONS(474), 1,
      anon_sym_animationframes,
    ACTIONS(453), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(462), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(465), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(42), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [1851] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(69), 1,
      anon_sym_loadType,
    ACTIONS(324), 1,
      anon_sym_size,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(479), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(481), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(483), 1,
      anon_sym_color,
    ACTIONS(485), 1,
      anon_sym_colortwo,
    ACTIONS(487), 1,
      anon_sym_horizontal,
    STATE(195), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(47), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [1899] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    ACTIONS(491), 1,
      anon_sym_name,
    ACTIONS(494), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(497), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(500), 1,
      anon_sym_effectFile,
    ACTIONS(503), 1,
      anon_sym_size,
    ACTIONS(506), 1,
      anon_sym_color,
    ACTIONS(509), 1,
      anon_sym_colortwo,
    ACTIONS(512), 1,
      anon_sym_horizontal,
    ACTIONS(515), 1,
      anon_sym_loadType,
    STATE(195), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(44), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [1947] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    ACTIONS(520), 1,
      anon_sym_name,
    ACTIONS(523), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(526), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(529), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(532), 1,
      anon_sym_noOfFrames,
    ACTIONS(535), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(538), 1,
      anon_sym_overlay_rows,
    ACTIONS(541), 1,
      anon_sym_effectFile,
    ACTIONS(544), 1,
      anon_sym_transparencecheck,
    STATE(182), 1,
      sym__statement_gfx_name,
    STATE(45), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [1995] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(49), 1,
      anon_sym_noOfFrames,
    ACTIONS(51), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(53), 1,
      anon_sym_overlay_rows,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(67), 1,
      anon_sym_transparencecheck,
    ACTIONS(479), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(481), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(549), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    STATE(182), 1,
      sym__statement_gfx_name,
    STATE(45), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [2043] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(69), 1,
      anon_sym_loadType,
    ACTIONS(324), 1,
      anon_sym_size,
    ACTIONS(479), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(481), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(483), 1,
      anon_sym_color,
    ACTIONS(485), 1,
      anon_sym_colortwo,
    ACTIONS(487), 1,
      anon_sym_horizontal,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    STATE(195), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(44), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [2091] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(49), 1,
      anon_sym_noOfFrames,
    ACTIONS(51), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(53), 1,
      anon_sym_overlay_rows,
    ACTIONS(55), 1,
      anon_sym_effectFile,
    ACTIONS(67), 1,
      anon_sym_transparencecheck,
    ACTIONS(479), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(481), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(549), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym__statement_gfx_name,
    STATE(46), 9,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_transparencecheck,
      aux_sym__maskedShieldType_block_repeat1,
  [2139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_assign_equal,
    ACTIONS(555), 18,
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
  [2166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym_assign_equal,
    ACTIONS(559), 18,
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
  [2193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_assign_equal,
    ACTIONS(565), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
      anon_sym_effect,
    ACTIONS(563), 15,
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
  [2222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_assign_equal,
    ACTIONS(569), 18,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
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
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [2249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
      anon_sym_effect,
    ACTIONS(573), 15,
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
  [2275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 18,
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
  [2299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_assign_equal,
    ACTIONS(581), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(579), 15,
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
  [2327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 18,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
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
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [2351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 18,
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
  [2375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_assign_equal,
    ACTIONS(591), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_text,
    ACTIONS(589), 15,
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
  [2403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_assign_equal,
    ACTIONS(595), 16,
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
  [2428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym_assign_equal,
    ACTIONS(599), 16,
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
  [2453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(603), 15,
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
  [2478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_text,
    ACTIONS(607), 15,
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
  [2503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_assign_equal,
    ACTIONS(611), 16,
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
  [2528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym_assign_equal,
    ACTIONS(615), 16,
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
  [2553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_assign_equal,
    ACTIONS(619), 16,
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
  [2578] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(625), 1,
      anon_sym_size,
    ACTIONS(628), 1,
      anon_sym_text,
    ACTIONS(631), 1,
      anon_sym_color,
    ACTIONS(634), 1,
      anon_sym_font,
    ACTIONS(637), 1,
      anon_sym_position,
    ACTIONS(640), 1,
      anon_sym_format,
    ACTIONS(643), 1,
      anon_sym_cull_distance,
    STATE(66), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [2616] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      anon_sym_listBoxType,
    ACTIONS(650), 1,
      anon_sym_size,
    ACTIONS(652), 1,
      anon_sym_position,
    ACTIONS(654), 1,
      anon_sym_backGround,
    ACTIONS(656), 1,
      anon_sym_moveable,
    ACTIONS(658), 1,
      anon_sym_orientation,
    STATE(249), 1,
      sym__statement_name,
    STATE(75), 7,
      sym__listBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [2656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 16,
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
  [2678] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    ACTIONS(664), 1,
      anon_sym_size,
    ACTIONS(666), 1,
      anon_sym_text,
    ACTIONS(668), 1,
      anon_sym_color,
    ACTIONS(670), 1,
      anon_sym_font,
    ACTIONS(672), 1,
      anon_sym_position,
    ACTIONS(674), 1,
      anon_sym_format,
    ACTIONS(676), 1,
      anon_sym_cull_distance,
    STATE(66), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [2716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 16,
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
  [2738] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_size,
    ACTIONS(666), 1,
      anon_sym_text,
    ACTIONS(668), 1,
      anon_sym_color,
    ACTIONS(670), 1,
      anon_sym_font,
    ACTIONS(672), 1,
      anon_sym_position,
    ACTIONS(674), 1,
      anon_sym_format,
    ACTIONS(676), 1,
      anon_sym_cull_distance,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
    STATE(69), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [2776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 16,
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
  [2798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_color,
    ACTIONS(688), 1,
      sym_assign_equal,
    ACTIONS(684), 14,
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
  [2824] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_cursor_offset,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    ACTIONS(692), 1,
      anon_sym_textcolors,
    ACTIONS(694), 1,
      anon_sym_name,
    ACTIONS(696), 1,
      anon_sym_path,
    ACTIONS(698), 1,
      anon_sym_color,
    ACTIONS(700), 1,
      anon_sym_border_color,
    ACTIONS(702), 1,
      anon_sym_effect,
    STATE(240), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(80), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [2864] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(648), 1,
      anon_sym_listBoxType,
    ACTIONS(650), 1,
      anon_sym_size,
    ACTIONS(652), 1,
      anon_sym_position,
    ACTIONS(654), 1,
      anon_sym_backGround,
    ACTIONS(656), 1,
      anon_sym_moveable,
    ACTIONS(658), 1,
      anon_sym_orientation,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      sym__statement_name,
    STATE(81), 7,
      sym__listBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [2904] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_cursor_offset,
    ACTIONS(692), 1,
      anon_sym_textcolors,
    ACTIONS(694), 1,
      anon_sym_name,
    ACTIONS(696), 1,
      anon_sym_path,
    ACTIONS(698), 1,
      anon_sym_color,
    ACTIONS(700), 1,
      anon_sym_border_color,
    ACTIONS(702), 1,
      anon_sym_effect,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    STATE(240), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(74), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [2944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 16,
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
  [2966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 16,
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
  [2988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 16,
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
  [3010] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(716), 1,
      anon_sym_textcolors,
    ACTIONS(719), 1,
      anon_sym_name,
    ACTIONS(722), 1,
      anon_sym_path,
    ACTIONS(725), 1,
      anon_sym_cursor_offset,
    ACTIONS(728), 1,
      anon_sym_color,
    ACTIONS(731), 1,
      anon_sym_border_color,
    ACTIONS(734), 1,
      anon_sym_effect,
    STATE(240), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(80), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [3050] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    ACTIONS(739), 1,
      anon_sym_listBoxType,
    ACTIONS(742), 1,
      anon_sym_name,
    ACTIONS(745), 1,
      anon_sym_size,
    ACTIONS(748), 1,
      anon_sym_position,
    ACTIONS(751), 1,
      anon_sym_backGround,
    ACTIONS(754), 1,
      anon_sym_moveable,
    ACTIONS(757), 1,
      anon_sym_orientation,
    STATE(249), 1,
      sym__statement_name,
    STATE(81), 7,
      sym__listBoxType,
      sym__statement_gui_backGround,
      sym__statement_gui_position,
      sym__statement_gui_size,
      sym__statement_gui_moveable,
      sym__statement_gui_orientation,
      aux_sym__windowType_block_repeat1,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 16,
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
  [3112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 16,
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
  [3134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym_assign_equal,
    ACTIONS(764), 14,
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
  [3157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym_assign_equal,
    ACTIONS(768), 14,
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
  [3180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    STATE(89), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(774), 12,
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
  [3205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_assign_equal,
    ACTIONS(776), 14,
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
  [3228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_color,
    ACTIONS(780), 14,
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
  [3251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(89), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(786), 12,
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
  [3276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_assign_equal,
    ACTIONS(789), 14,
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
  [3299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    ACTIONS(799), 1,
      sym_assign_equal,
    ACTIONS(795), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(793), 11,
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
  [3326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    STATE(86), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(774), 12,
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
  [3351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_SEMI,
    ACTIONS(805), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(803), 11,
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
  [3375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 14,
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
  [3395] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    ACTIONS(813), 1,
      anon_sym_name,
    ACTIONS(816), 1,
      anon_sym_animation,
    ACTIONS(819), 1,
      anon_sym_cull_distance,
    ACTIONS(822), 1,
      anon_sym_file,
    ACTIONS(825), 1,
      anon_sym_meshsettings,
    ACTIONS(828), 1,
      anon_sym_scale,
    STATE(271), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(95), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [3431] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    ACTIONS(833), 1,
      anon_sym_name,
    ACTIONS(836), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(839), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(842), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(845), 1,
      anon_sym_cull_distance,
    ACTIONS(848), 1,
      anon_sym_effect,
    STATE(268), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(96), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [3467] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(481), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(549), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(676), 1,
      anon_sym_cull_distance,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(853), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(855), 1,
      anon_sym_effect,
    STATE(268), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(104), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [3503] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(676), 1,
      anon_sym_cull_distance,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
    ACTIONS(859), 1,
      anon_sym_animation,
    ACTIONS(861), 1,
      anon_sym_file,
    ACTIONS(863), 1,
      anon_sym_meshsettings,
    ACTIONS(865), 1,
      anon_sym_scale,
    STATE(271), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(103), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [3539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_assign_equal,
    ACTIONS(867), 13,
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
  [3561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 14,
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
  [3581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 14,
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
  [3601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 14,
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
  [3621] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(676), 1,
      anon_sym_cull_distance,
    ACTIONS(859), 1,
      anon_sym_animation,
    ACTIONS(861), 1,
      anon_sym_file,
    ACTIONS(863), 1,
      anon_sym_meshsettings,
    ACTIONS(865), 1,
      anon_sym_scale,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
    STATE(271), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(95), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [3657] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(481), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(549), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(676), 1,
      anon_sym_cull_distance,
    ACTIONS(853), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(855), 1,
      anon_sym_effect,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(268), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(96), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [3693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 14,
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
  [3713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_animationrotation,
    ACTIONS(887), 1,
      sym_assign_equal,
    ACTIONS(883), 11,
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
  [3736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 13,
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
  [3755] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    ACTIONS(893), 1,
      anon_sym_animatedmaptext,
    ACTIONS(895), 1,
      anon_sym_pdxmesh,
    ACTIONS(897), 1,
      anon_sym_pdxparticle,
    ACTIONS(899), 1,
      anon_sym_arrowType,
    ACTIONS(901), 1,
      anon_sym_tradeRouteType,
    STATE(118), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [3786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(903), 11,
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
  [3807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_animationrotation,
    ACTIONS(911), 1,
      sym_assign_equal,
    ACTIONS(907), 11,
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
  [3830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_animationrotation,
    ACTIONS(917), 1,
      sym_assign_equal,
    ACTIONS(913), 11,
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
  [3853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_animationrotation,
    ACTIONS(923), 1,
      sym_assign_equal,
    ACTIONS(919), 11,
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
  [3876] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
    ACTIONS(927), 1,
      anon_sym_animatedmaptext,
    ACTIONS(930), 1,
      anon_sym_pdxmesh,
    ACTIONS(933), 1,
      anon_sym_pdxparticle,
    ACTIONS(936), 1,
      anon_sym_arrowType,
    ACTIONS(939), 1,
      anon_sym_tradeRouteType,
    STATE(113), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [3907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_animationrotation,
    ACTIONS(946), 1,
      sym_assign_equal,
    ACTIONS(942), 11,
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
  [3930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_animationrotation,
    ACTIONS(952), 1,
      sym_assign_equal,
    ACTIONS(948), 11,
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
  [3953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_animationrotation,
    ACTIONS(958), 1,
      sym_assign_equal,
    ACTIONS(954), 11,
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
  [3976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_animationrotation,
    ACTIONS(964), 1,
      sym_assign_equal,
    ACTIONS(960), 11,
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
  [3999] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_animatedmaptext,
    ACTIONS(895), 1,
      anon_sym_pdxmesh,
    ACTIONS(897), 1,
      anon_sym_pdxparticle,
    ACTIONS(899), 1,
      anon_sym_arrowType,
    ACTIONS(901), 1,
      anon_sym_tradeRouteType,
    ACTIONS(966), 1,
      anon_sym_RBRACE,
    STATE(113), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [4030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(968), 11,
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
  [4051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      sym_assign_equal,
    ACTIONS(972), 11,
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
  [4071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_animationrotation,
    ACTIONS(976), 11,
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
  [4091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_animationrotation,
    ACTIONS(980), 11,
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
  [4111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      sym_assign_equal,
    ACTIONS(984), 11,
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
  [4131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym_assign_equal,
    ACTIONS(988), 11,
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
  [4151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      sym_assign_equal,
    ACTIONS(992), 11,
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
  [4171] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(855), 1,
      anon_sym_effect,
    ACTIONS(996), 1,
      anon_sym_RBRACE,
    ACTIONS(998), 1,
      anon_sym_texture,
    ACTIONS(1000), 1,
      anon_sym_normal,
    ACTIONS(1002), 1,
      anon_sym_specular,
    STATE(279), 1,
      sym__statement_gfx_name,
    STATE(134), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [4203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      sym_assign_equal,
    ACTIONS(1004), 11,
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
  [4223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      sym_assign_equal,
    ACTIONS(1008), 11,
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
  [4243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym_assign_equal,
    ACTIONS(1012), 11,
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
  [4263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_animationrotation,
    ACTIONS(1016), 11,
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
  [4283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_animationrotation,
    ACTIONS(1020), 11,
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
  [4303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_animationrotation,
    ACTIONS(1024), 11,
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
  [4323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym_assign_equal,
    ACTIONS(1028), 11,
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
  [4343] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_RBRACE,
    ACTIONS(1034), 1,
      anon_sym_name,
    ACTIONS(1037), 1,
      anon_sym_texture,
    ACTIONS(1040), 1,
      anon_sym_normal,
    ACTIONS(1043), 1,
      anon_sym_specular,
    ACTIONS(1046), 1,
      anon_sym_effect,
    STATE(279), 1,
      sym__statement_gfx_name,
    STATE(134), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [4375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym_assign_equal,
    ACTIONS(1049), 11,
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
  [4395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_assign_equal,
    ACTIONS(1053), 11,
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
  [4415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_animationrotation,
    ACTIONS(1057), 11,
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
  [4435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_animationrotation,
    ACTIONS(1061), 11,
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
  [4455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_animationrotation,
    ACTIONS(1065), 11,
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
  [4475] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(855), 1,
      anon_sym_effect,
    ACTIONS(998), 1,
      anon_sym_texture,
    ACTIONS(1000), 1,
      anon_sym_normal,
    ACTIONS(1002), 1,
      anon_sym_specular,
    ACTIONS(1069), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      sym__statement_gfx_name,
    STATE(126), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [4507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym_assign_equal,
    ACTIONS(1071), 10,
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
  [4526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 11,
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
  [4543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 11,
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
  [4560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym_assign_equal,
    ACTIONS(1079), 10,
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
  [4579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 11,
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
  [4596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      sym_assign_equal,
    ACTIONS(1085), 10,
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
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 11,
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
  [4632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym_assign_equal,
    ACTIONS(1091), 10,
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
  [4651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 11,
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
  [4668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      sym_assign_equal,
    ACTIONS(1097), 10,
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
  [4687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_color,
    ACTIONS(1105), 1,
      sym_assign_equal,
    ACTIONS(1101), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [4708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_color,
    ACTIONS(1111), 1,
      sym_assign_equal,
    ACTIONS(1107), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [4729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_color,
    ACTIONS(1117), 1,
      sym_assign_equal,
    ACTIONS(1113), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [4750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 11,
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
  [4767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      sym_assign_equal,
    ACTIONS(1121), 10,
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
  [4786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 11,
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
  [4803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 11,
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
  [4820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 11,
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
  [4837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 11,
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
  [4854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 11,
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
  [4871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 11,
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
  [4888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 11,
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
  [4905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 11,
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
  [4922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      sym_assign_equal,
    ACTIONS(1141), 10,
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
  [4941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      sym_assign_equal,
    ACTIONS(1145), 10,
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
  [4960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      sym_assign_equal,
    ACTIONS(1151), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_texture,
    ACTIONS(1149), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [4981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 11,
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
  [4998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 11,
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
  [5015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_assign_equal,
    ACTIONS(1159), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 10,
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
  [5049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 10,
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
  [5065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 10,
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
  [5081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 10,
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
  [5097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 10,
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
  [5113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_color,
    ACTIONS(1173), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [5131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 10,
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
  [5147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 10,
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
  [5163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 10,
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
  [5179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_texture,
    ACTIONS(1183), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [5197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 10,
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
  [5213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_color,
    ACTIONS(1189), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [5231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 10,
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
  [5247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 10,
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
  [5263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 10,
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
  [5279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 10,
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
  [5295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 10,
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
  [5311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 10,
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
  [5327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 10,
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
  [5343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 10,
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
  [5359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 10,
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
  [5375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 10,
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
  [5391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 10,
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
  [5407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 10,
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
  [5423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 10,
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
  [5439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_color,
    ACTIONS(1219), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [5457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 10,
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
  [5473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 10,
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
  [5489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      anon_sym_color,
    ACTIONS(1227), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [5507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 10,
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
  [5523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      sym_assign_equal,
    ACTIONS(1233), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      sym_assign_equal,
    ACTIONS(1237), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      sym_assign_equal,
    ACTIONS(1241), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [5574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      sym_assign_equal,
    ACTIONS(1245), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [5591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      sym_assign_equal,
    ACTIONS(1249), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [5608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym_assign_equal,
    ACTIONS(1253), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      sym_assign_equal,
    ACTIONS(1257), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      sym_assign_equal,
    ACTIONS(1261), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      sym_assign_equal,
    ACTIONS(1265), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      sym_assign_equal,
    ACTIONS(1271), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [5708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 1,
      sym_assign_equal,
    ACTIONS(1275), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [5725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      sym_assign_equal,
    ACTIONS(1281), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_scale,
  [5757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      sym_assign_equal,
    ACTIONS(1285), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      sym_assign_equal,
    ACTIONS(579), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      sym_assign_equal,
    ACTIONS(1101), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      sym_assign_equal,
    ACTIONS(1293), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [5825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      sym_assign_equal,
    ACTIONS(1297), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
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
  [5859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5888] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(1307), 1,
      anon_sym_RBRACE,
    ACTIONS(1309), 1,
      anon_sym_speed,
    ACTIONS(1311), 1,
      anon_sym_textblock,
    STATE(332), 1,
      sym__statement_gfx_name,
    STATE(258), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [5912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5926] = 2,
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
  [5940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      sym_assign_equal,
    ACTIONS(1317), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [5970] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(7), 1,
      anon_sym_objectTypes,
    ACTIONS(9), 1,
      anon_sym_bitmapfonts,
    ACTIONS(1321), 1,
      ts_builtin_sym_end,
    STATE(228), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [5992] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      ts_builtin_sym_end,
    ACTIONS(1325), 1,
      anon_sym_spriteTypes,
    ACTIONS(1328), 1,
      anon_sym_objectTypes,
    ACTIONS(1331), 1,
      anon_sym_bitmapfonts,
    STATE(228), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [6014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [6028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      sym_assign_equal,
    ACTIONS(1334), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [6044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [6058] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(865), 1,
      anon_sym_scale,
    ACTIONS(1340), 1,
      anon_sym_RBRACE,
    ACTIONS(1342), 1,
      anon_sym_type,
    STATE(337), 1,
      sym__statement_gfx_name,
    STATE(253), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [6082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      sym_assign_equal,
    ACTIONS(1350), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [6140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6168] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(324), 1,
      anon_sym_size,
    ACTIONS(1358), 1,
      anon_sym_RBRACE,
    ACTIONS(1360), 1,
      anon_sym_linewidth,
    STATE(257), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(325), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [6192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [6206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [6220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6234] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(324), 1,
      anon_sym_size,
    ACTIONS(1360), 1,
      anon_sym_linewidth,
    ACTIONS(1368), 1,
      anon_sym_RBRACE,
    STATE(245), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(325), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [6258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6272] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(324), 1,
      anon_sym_size,
    ACTIONS(1360), 1,
      anon_sym_linewidth,
    ACTIONS(1372), 1,
      anon_sym_RBRACE,
    STATE(257), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(325), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [6296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [6310] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(1309), 1,
      anon_sym_speed,
    ACTIONS(1311), 1,
      anon_sym_textblock,
    ACTIONS(1374), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      sym__statement_gfx_name,
    STATE(222), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [6334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_scale,
  [6348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6362] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(865), 1,
      anon_sym_scale,
    ACTIONS(1342), 1,
      anon_sym_type,
    ACTIONS(1380), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      sym__statement_gfx_name,
    STATE(232), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [6386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 8,
      anon_sym_RBRACE,
      anon_sym_listBoxType,
      anon_sym_name,
      anon_sym_size,
      anon_sym_position,
      anon_sym_backGround,
      anon_sym_moveable,
      anon_sym_orientation,
  [6400] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(324), 1,
      anon_sym_size,
    ACTIONS(1360), 1,
      anon_sym_linewidth,
    ACTIONS(1384), 1,
      anon_sym_RBRACE,
    STATE(239), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(325), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [6424] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      anon_sym_RBRACE,
    ACTIONS(1388), 1,
      anon_sym_name,
    ACTIONS(1391), 1,
      anon_sym_type,
    ACTIONS(1394), 1,
      anon_sym_scale,
    STATE(337), 1,
      sym__statement_gfx_name,
    STATE(253), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [6448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [6462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [6476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [6490] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      anon_sym_RBRACE,
    ACTIONS(1405), 1,
      anon_sym_name,
    ACTIONS(1408), 1,
      anon_sym_size,
    ACTIONS(1411), 1,
      anon_sym_linewidth,
    STATE(257), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(325), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [6514] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 1,
      anon_sym_RBRACE,
    ACTIONS(1416), 1,
      anon_sym_name,
    ACTIONS(1419), 1,
      anon_sym_speed,
    ACTIONS(1422), 1,
      anon_sym_textblock,
    STATE(332), 1,
      sym__statement_gfx_name,
    STATE(258), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [6538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      sym_assign_equal,
    ACTIONS(1425), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      sym_assign_equal,
    ACTIONS(1429), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [6581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [6594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      sym_assign_equal,
    ACTIONS(1437), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      sym_assign_equal,
    ACTIONS(1441), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6624] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_textcolors,
    ACTIONS(1445), 1,
      anon_sym_RBRACE,
    ACTIONS(1447), 1,
      anon_sym_bitmapfont,
    STATE(355), 1,
      sym__textcolors,
    STATE(266), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [6645] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_RBRACE,
    ACTIONS(1451), 1,
      anon_sym_textcolors,
    ACTIONS(1454), 1,
      anon_sym_bitmapfont,
    STATE(355), 1,
      sym__textcolors,
    STATE(266), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [6666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [6679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1459), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_effect,
  [6694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      sym_assign_equal,
    ACTIONS(1463), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6709] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_textcolors,
    ACTIONS(1447), 1,
      anon_sym_bitmapfont,
    ACTIONS(1467), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      sym__textcolors,
    STATE(265), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [6730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [6743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      sym_assign_equal,
    ACTIONS(1471), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      sym_assign_equal,
    ACTIONS(1475), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      sym_assign_equal,
    ACTIONS(1479), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6860] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_RBRACE,
    ACTIONS(1497), 1,
      anon_sym_name,
    ACTIONS(1500), 1,
      anon_sym_size,
    STATE(359), 1,
      sym__statement_gfx_name,
    STATE(281), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [6880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [7000] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(1523), 1,
      anon_sym_RBRACE,
    ACTIONS(1525), 1,
      anon_sym_size,
    STATE(359), 1,
      sym__statement_gfx_name,
    STATE(281), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [7020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [7032] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    ACTIONS(1525), 1,
      anon_sym_size,
    ACTIONS(1529), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      sym__statement_gfx_name,
    STATE(292), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [7052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [7064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [7076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 1,
      sym_assign_equal,
    ACTIONS(1535), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 1,
      anon_sym_RBRACE,
    ACTIONS(1541), 1,
      anon_sym_windowType,
    STATE(312), 3,
      sym__guiTypes_type,
      sym__windowType,
      aux_sym__guiTypes_block_repeat1,
  [7104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_x,
    ACTIONS(1545), 1,
      anon_sym_y,
    STATE(410), 1,
      sym__entry_x_integer,
    STATE(411), 1,
      sym__entry_y_integer,
    STATE(528), 1,
      sym__statement_xy_integer,
  [7123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 1,
      sym_assign_equal,
    ACTIONS(1547), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [7136] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_x,
    ACTIONS(1545), 1,
      anon_sym_y,
    STATE(410), 1,
      sym__entry_x_integer,
    STATE(411), 1,
      sym__entry_y_integer,
    STATE(484), 1,
      sym__statement_xy_integer,
  [7155] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_x,
    ACTIONS(1545), 1,
      anon_sym_y,
    STATE(410), 1,
      sym__entry_x_integer,
    STATE(411), 1,
      sym__entry_y_integer,
    STATE(494), 1,
      sym__statement_xy_integer,
  [7174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 1,
      anon_sym_RBRACE,
    ACTIONS(1553), 1,
      anon_sym_windowType,
    STATE(303), 3,
      sym__guiTypes_type,
      sym__windowType,
      aux_sym__guiTypes_block_repeat1,
  [7189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_guiTypes,
    ACTIONS(1556), 1,
      ts_builtin_sym_end,
    STATE(311), 3,
      sym__gui_types_definition,
      sym__guiTypes,
      aux_sym_dot_gui_repeat1,
  [7204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 1,
      sym_assign_equal,
    ACTIONS(1558), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [7217] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_x,
    ACTIONS(1545), 1,
      anon_sym_y,
    STATE(410), 1,
      sym__entry_x_integer,
    STATE(411), 1,
      sym__entry_y_integer,
    STATE(500), 1,
      sym__statement_xy_integer,
  [7236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_x,
    ACTIONS(1545), 1,
      anon_sym_y,
    STATE(410), 1,
      sym__entry_x_integer,
    STATE(411), 1,
      sym__entry_y_integer,
    STATE(501), 1,
      sym__statement_xy_integer,
  [7255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 1,
      sym_assign_equal,
    ACTIONS(1562), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [7268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_x,
    ACTIONS(1545), 1,
      anon_sym_y,
    STATE(410), 1,
      sym__entry_x_integer,
    STATE(411), 1,
      sym__entry_y_integer,
    STATE(489), 1,
      sym__statement_xy_integer,
  [7287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      sym_assign_equal,
    ACTIONS(1566), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [7300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      ts_builtin_sym_end,
    ACTIONS(1572), 1,
      anon_sym_guiTypes,
    STATE(311), 3,
      sym__gui_types_definition,
      sym__guiTypes,
      aux_sym_dot_gui_repeat1,
  [7315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 1,
      anon_sym_windowType,
    ACTIONS(1575), 1,
      anon_sym_RBRACE,
    STATE(303), 3,
      sym__guiTypes_type,
      sym__windowType,
      aux_sym__guiTypes_block_repeat1,
  [7330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1577), 1,
      anon_sym_x,
    ACTIONS(1579), 1,
      anon_sym_y,
    STATE(424), 1,
      sym__entry_y_float,
    STATE(425), 1,
      sym__entry_x_float,
    STATE(483), 1,
      sym__statement_xy_float,
  [7349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 1,
      sym_assign_equal,
    ACTIONS(1581), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1587), 1,
      sym_assign_equal,
    ACTIONS(1585), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1589), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [7385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1593), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [7405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [7415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 1,
      sym_assign_equal,
    ACTIONS(1599), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [7437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1603), 1,
      anon_sym_RBRACE,
    ACTIONS(1605), 1,
      aux_sym__integer_positive_token1,
    STATE(322), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [7451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 1,
      anon_sym_RBRACE,
    ACTIONS(1612), 1,
      aux_sym__integer_positive_token1,
    STATE(322), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [7475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1614), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [7485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [7495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [7515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      sym_assign_equal,
    ACTIONS(1622), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [7527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [7557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [7587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [7597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [7607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(54), 1,
      sym__boolean_yes_no,
    ACTIONS(1642), 2,
      anon_sym_yes,
      anon_sym_no,
  [7618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 1,
      sym_assign_equal,
    ACTIONS(1644), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [7629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym__boolean_yes_no,
    ACTIONS(1648), 2,
      anon_sym_yes,
      anon_sym_no,
  [7640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      aux_sym__integer_positive_token1,
    STATE(324), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [7651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(181), 1,
      sym__boolean_yes_no,
    ACTIONS(1652), 2,
      anon_sym_yes,
      anon_sym_no,
  [7662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1654), 1,
      anon_sym_RBRACE,
    ACTIONS(1656), 1,
      sym_string,
    STATE(360), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [7675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym__boolean_yes_no,
    ACTIONS(1658), 2,
      anon_sym_yes,
      anon_sym_no,
  [7686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      sym_string,
    ACTIONS(1660), 1,
      anon_sym_RBRACE,
    STATE(343), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [7699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [7708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(57), 1,
      sym__boolean_yes_no,
    ACTIONS(1664), 2,
      anon_sym_yes,
      anon_sym_no,
  [7719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym__boolean_yes_no,
    ACTIONS(1666), 2,
      anon_sym_yes,
      anon_sym_no,
  [7730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(83), 1,
      sym__boolean_yes_no,
    ACTIONS(1668), 2,
      anon_sym_yes,
      anon_sym_no,
  [7741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(101), 1,
      sym__boolean_yes_no,
    ACTIONS(1670), 2,
      anon_sym_yes,
      anon_sym_no,
  [7752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [7761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(221), 1,
      sym__boolean_yes_no,
    ACTIONS(1674), 2,
      anon_sym_yes,
      anon_sym_no,
  [7772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(235), 1,
      sym__boolean_0_1,
    ACTIONS(1676), 2,
      anon_sym_0,
      anon_sym_1,
  [7783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 1,
      sym_assign_equal,
    ACTIONS(1678), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [7794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [7803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      sym_assign_equal,
    ACTIONS(1684), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [7814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(131), 1,
      sym__boolean_yes_no,
    ACTIONS(1688), 2,
      anon_sym_yes,
      anon_sym_no,
  [7825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 1,
      sym_assign_equal,
    ACTIONS(1690), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [7836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [7845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_RBRACE,
    ACTIONS(1698), 1,
      sym_string,
    STATE(360), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [7858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1701), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [7867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [7876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1707), 1,
      sym_assign_equal,
    ACTIONS(1705), 2,
      anon_sym_RBRACE,
      anon_sym_windowType,
  [7887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1709), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [7896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1711), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [7905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1715), 1,
      sym_assign_equal,
    ACTIONS(1713), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [7916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      anon_sym_LBRACE,
    STATE(317), 1,
      sym__spriteTypes_block,
  [7926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      anon_sym_texture_diffuse,
    STATE(427), 1,
      sym__statement_gfx_meshsettings_texture_diffuse,
  [7936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1721), 1,
      aux_sym__orientation_value_token1,
    STATE(234), 1,
      sym__orientation_value,
  [7946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 2,
      anon_sym_RBRACE,
      anon_sym_windowType,
  [7954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      aux_sym__integer_positive_token1,
    STATE(318), 1,
      sym__integer_positive,
  [7964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1727), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym__mod_dependencies_block,
  [7974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1729), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym__mod_tags_block,
  [7984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1731), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(149), 1,
      sym__mod_replace_path_folder,
  [7994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1733), 1,
      aux_sym__float_positive_token1,
    STATE(376), 1,
      sym__float_positive,
  [8004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1735), 1,
      aux_sym__float_positive_token1,
    STATE(377), 1,
      sym__float_positive,
  [8014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 1,
      aux_sym__float_positive_token1,
    STATE(529), 1,
      sym__float_positive,
  [8024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1739), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(1741), 1,
      aux_sym__statement_gfx_name_token2,
  [8034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1743), 1,
      anon_sym_LBRACE,
    STATE(278), 1,
      sym__pdxparticle_block,
  [8044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1745), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym__arrowType_block,
  [8054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1747), 1,
      anon_sym_LBRACE,
    STATE(276), 1,
      sym__tradeRouteType_block,
  [8064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 1,
      anon_sym_LBRACE,
    STATE(426), 1,
      sym__guiTypes_block,
  [8074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1751), 1,
      anon_sym_LBRACE,
    STATE(327), 1,
      sym__bitmapfonts_block,
  [8084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1753), 1,
      anon_sym_LBRACE,
    STATE(336), 1,
      sym__objectTypes_block,
  [8094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 1,
      aux_sym__float_positive_token1,
    STATE(316), 1,
      sym__float_positive,
  [8104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 1,
      aux_sym__float_positive_token1,
    STATE(94), 1,
      sym__float_positive,
  [8114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1759), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym__textcolors_block,
  [8124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1761), 1,
      anon_sym_LBRACE,
    STATE(346), 1,
      sym__bitmapfont_block,
  [8134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1763), 1,
      anon_sym_RBRACE,
    ACTIONS(1765), 1,
      sym_assign_equal,
  [8144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1767), 1,
      aux_sym__float_positive_token1,
    STATE(413), 1,
      sym__float_positive,
  [8154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1769), 1,
      aux_sym__float_positive_token1,
    STATE(414), 1,
      sym__float_positive,
  [8164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1771), 2,
      anon_sym_RBRACE,
      anon_sym_windowType,
  [8172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1773), 1,
      anon_sym_shader_file,
    STATE(516), 1,
      sym__statement_gfx_meshsettings_shader_file,
  [8182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1775), 1,
      anon_sym_shader_file,
    ACTIONS(1777), 1,
      sym_assign_equal,
  [8192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1779), 1,
      anon_sym_id,
    STATE(419), 1,
      sym__statement_gfx_animation_id,
  [8202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1781), 2,
      anon_sym_DQUOTEINGAME_DQUOTE,
      anon_sym_DQUOTEFRONTEND_DQUOTE,
  [8210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_name,
    STATE(420), 1,
      sym__statement_gfx_name,
  [8220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1783), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [8228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1785), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [8236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1787), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym__gfx_animation_block,
  [8246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 1,
      anon_sym_shader,
    STATE(393), 1,
      sym__statement_gfx_meshsettings_shader,
  [8256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1791), 1,
      aux_sym__integer_positive_token1,
    STATE(26), 1,
      sym__integer_positive,
  [8266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1793), 1,
      aux_sym__integer_positive_token1,
    STATE(24), 1,
      sym__integer_positive,
  [8276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 1,
      aux_sym__integer_positive_token1,
    STATE(17), 1,
      sym__integer_positive,
  [8286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1797), 1,
      anon_sym_shader,
    ACTIONS(1799), 1,
      sym_assign_equal,
  [8296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1801), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(1803), 1,
      aux_sym__statement_gfx_name_token2,
  [8306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1805), 1,
      anon_sym_LBRACE,
    STATE(280), 1,
      sym__pdxmesh_block,
  [8316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1807), 1,
      anon_sym_LBRACE,
    STATE(437), 1,
      sym__windowType_block,
  [8326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1809), 1,
      aux_sym__float_positive_token1,
    STATE(62), 1,
      sym__float_positive,
  [8336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1545), 1,
      anon_sym_y,
    STATE(461), 1,
      sym__entry_y_integer,
  [8346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_x,
    STATE(461), 1,
      sym__entry_x_integer,
  [8356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1811), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [8364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1813), 1,
      aux_sym__float_positive_token1,
    STATE(441), 1,
      sym__float_positive,
  [8374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1815), 1,
      aux_sym__float_positive_token1,
    STATE(442), 1,
      sym__float_positive,
  [8384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1817), 1,
      anon_sym_LBRACE,
    STATE(335), 1,
      sym__gfx_textblock,
  [8394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_texture_specular,
    STATE(401), 1,
      sym__statement_gfx_meshsettings_texture_specular,
  [8404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1821), 1,
      anon_sym_texture_specular,
    ACTIONS(1823), 1,
      sym_assign_equal,
  [8414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1825), 1,
      anon_sym_type,
    ACTIONS(1827), 1,
      sym_assign_equal,
  [8424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1829), 1,
      anon_sym_type,
    STATE(493), 1,
      sym__statement_gfx_animation_type,
  [8434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1831), 1,
      anon_sym_index,
    STATE(368), 1,
      sym__statement_gfx_meshsettings_index,
  [8444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1833), 1,
      aux_sym__float_positive_token1,
    STATE(248), 1,
      sym__float_positive,
  [8454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1835), 1,
      anon_sym_LBRACE,
    STATE(251), 1,
      sym__listBoxType_block,
  [8464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1837), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [8472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1577), 1,
      anon_sym_x,
    STATE(499), 1,
      sym__entry_x_float,
  [8482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1579), 1,
      anon_sym_y,
    STATE(499), 1,
      sym__entry_y_float,
  [8492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1839), 2,
      ts_builtin_sym_end,
      anon_sym_guiTypes,
  [8500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1841), 1,
      anon_sym_texture_normal,
    STATE(416), 1,
      sym__statement_gfx_meshsettings_texture_normal,
  [8510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1843), 1,
      anon_sym_texture_normal,
    ACTIONS(1845), 1,
      sym_assign_equal,
  [8520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1847), 1,
      aux_sym__float_positive_token1,
    STATE(132), 1,
      sym__float_positive,
  [8530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1849), 1,
      aux_sym__integer_positive_token1,
    STATE(491), 1,
      sym__integer_positive,
  [8540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1851), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym__LineChartType_block,
  [8550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1853), 1,
      anon_sym_LBRACE,
    STATE(194), 1,
      sym__PieChartType_block,
  [8560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1855), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [8568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1857), 1,
      anon_sym_LBRACE,
    STATE(282), 1,
      sym__animatedmaptext_block,
  [8578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1859), 1,
      aux_sym__integer_positive_token1,
    STATE(102), 1,
      sym__integer_positive,
  [8588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1861), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [8596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1863), 2,
      anon_sym_RBRACE,
      anon_sym_windowType,
  [8604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1865), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym__progressbartype_block,
  [8614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1867), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym__frameAnimatedSpriteType_block,
  [8624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1869), 1,
      aux_sym__integer_positive_token1,
    STATE(365), 1,
      sym__integer_positive,
  [8634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1871), 1,
      aux_sym__float_positive_token1,
    STATE(468), 1,
      sym__float_positive,
  [8644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1873), 1,
      aux_sym__float_positive_token1,
    STATE(469), 1,
      sym__float_positive,
  [8654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1875), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym__maskedShieldType_block,
  [8664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym__corneredTileSpriteType_block,
  [8674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1879), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym__textSpriteType_block,
  [8684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1881), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym__spriteType_block,
  [8694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1883), 2,
      anon_sym_RBRACE,
      sym_string,
  [8702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1885), 1,
      anon_sym_texture_diffuse,
    ACTIONS(1887), 1,
      sym_assign_equal,
  [8712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1889), 1,
      anon_sym_RBRACE,
    ACTIONS(1891), 1,
      sym_assign_equal,
  [8722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1893), 1,
      aux_sym__animation_entry_dds_token1,
  [8729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1895), 1,
      aux_sym__statement_mod_version_token1,
  [8736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1897), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [8743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1899), 1,
      sym_string,
  [8750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1901), 1,
      sym_byte,
  [8757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1903), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [8764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1905), 1,
      aux_sym__statement_gfx_effect_token1,
  [8771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1907), 1,
      anon_sym_centre,
  [8778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1909), 1,
      anon_sym_LBRACE,
  [8785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1911), 1,
      sym_string,
  [8792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1913), 1,
      sym_string,
  [8799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1915), 1,
      anon_sym_RBRACE,
  [8806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1917), 1,
      aux_sym__animation_entry_dds_token1,
  [8813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1919), 1,
      anon_sym_LBRACE,
  [8820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1921), 1,
      sym_integer,
  [8827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1923), 1,
      aux_sym__animation_entry_dds_token1,
  [8834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1925), 1,
      sym_integer,
  [8841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1927), 1,
      anon_sym_LBRACE,
  [8848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1929), 1,
      anon_sym_RBRACE,
  [8855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1931), 1,
      anon_sym_RBRACE,
  [8862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1933), 1,
      sym_string,
  [8869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1935), 1,
      aux_sym__animation_entry_dds_token1,
  [8876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1937), 1,
      anon_sym_LBRACE,
  [8883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1939), 1,
      sym_hexadecimal,
  [8890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1941), 1,
      anon_sym_type,
  [8897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1943), 1,
      sym_string,
  [8904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1945), 1,
      anon_sym_LBRACE,
  [8911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1947), 1,
      sym_string,
  [8918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1949), 1,
      sym_hexadecimal,
  [8925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1951), 1,
      sym_angle,
  [8932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1953), 1,
      anon_sym_RBRACE,
  [8939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1955), 1,
      sym_string,
  [8946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1957), 1,
      aux_sym__animation_entry_dds_token1,
  [8953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1959), 1,
      anon_sym_RBRACE,
  [8960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1961), 1,
      anon_sym_RBRACE,
  [8967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1963), 1,
      anon_sym_LBRACE,
  [8974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1965), 1,
      anon_sym_LBRACE,
  [8981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1967), 1,
      sym_byte,
  [8988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1969), 1,
      sym_integer,
  [8995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1971), 1,
      anon_sym_RBRACE,
  [9002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1973), 1,
      anon_sym_RBRACE,
  [9009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1975), 1,
      anon_sym_texture_diffuse,
  [9016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1977), 1,
      anon_sym_LBRACE,
  [9023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1979), 1,
      anon_sym_RBRACE,
  [9030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1981), 1,
      anon_sym_RBRACE,
  [9037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1983), 1,
      anon_sym_LBRACE,
  [9044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1985), 1,
      sym_float,
  [9051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1987), 1,
      sym_float,
  [9058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1989), 1,
      aux_sym__statement_gfx_file_token1,
  [9065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1991), 1,
      anon_sym_RBRACE,
  [9072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1993), 1,
      anon_sym_RBRACE,
  [9079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1995), 1,
      anon_sym_RBRACE,
  [9086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1997), 1,
      sym_integer,
  [9093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1999), 1,
      anon_sym_texture_normal,
  [9100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2001), 1,
      aux_sym__animation_entry_dds_token1,
  [9107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2003), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [9114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2005), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [9121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2007), 1,
      sym_byte,
  [9128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2009), 1,
      anon_sym_click,
  [9135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2011), 1,
      anon_sym_texture_specular,
  [9142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2013), 1,
      aux_sym__animation_entry_dds_token1,
  [9149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2015), 1,
      aux_sym__statement_gfx_alphamaskfile_token1,
  [9156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2017), 1,
      anon_sym_LBRACE,
  [9163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2019), 1,
      anon_sym_shader,
  [9170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2021), 1,
      aux_sym__statement_gfx_meshsettings_shader_token1,
  [9177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2023), 1,
      anon_sym_RBRACE,
  [9184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2025), 1,
      anon_sym_RBRACE,
  [9191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2027), 1,
      anon_sym_shader_file,
  [9198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2029), 1,
      aux_sym__statement_gfx_meshsettings_shader_file_token1,
  [9205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2031), 1,
      anon_sym_LBRACE,
  [9212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2033), 1,
      anon_sym_RBRACE,
  [9219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2035), 1,
      ts_builtin_sym_end,
  [9226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2037), 1,
      ts_builtin_sym_end,
  [9233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2039), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [9240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2041), 1,
      sym_string,
  [9247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2043), 1,
      sym_string,
  [9254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2045), 1,
      aux_sym__statement_mod_archive_token1,
  [9261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2047), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [9268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2049), 1,
      anon_sym_RBRACE,
  [9275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2051), 1,
      anon_sym_RBRACE,
  [9282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2053), 1,
      anon_sym_LBRACE,
  [9289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2055), 1,
      anon_sym_LBRACE,
  [9296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2057), 1,
      anon_sym_LBRACE,
  [9303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2059), 1,
      aux_sym__statement_mod_picture_token1,
  [9310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2061), 1,
      aux_sym__statement_mod_supported_version_token1,
  [9317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2063), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 101,
  [SMALL_STATE(5)] = 173,
  [SMALL_STATE(6)] = 245,
  [SMALL_STATE(7)] = 317,
  [SMALL_STATE(8)] = 356,
  [SMALL_STATE(9)] = 420,
  [SMALL_STATE(10)] = 458,
  [SMALL_STATE(11)] = 522,
  [SMALL_STATE(12)] = 586,
  [SMALL_STATE(13)] = 622,
  [SMALL_STATE(14)] = 659,
  [SMALL_STATE(15)] = 694,
  [SMALL_STATE(16)] = 730,
  [SMALL_STATE(17)] = 764,
  [SMALL_STATE(18)] = 797,
  [SMALL_STATE(19)] = 832,
  [SMALL_STATE(20)] = 867,
  [SMALL_STATE(21)] = 902,
  [SMALL_STATE(22)] = 936,
  [SMALL_STATE(23)] = 970,
  [SMALL_STATE(24)] = 1004,
  [SMALL_STATE(25)] = 1035,
  [SMALL_STATE(26)] = 1068,
  [SMALL_STATE(27)] = 1099,
  [SMALL_STATE(28)] = 1130,
  [SMALL_STATE(29)] = 1160,
  [SMALL_STATE(30)] = 1212,
  [SMALL_STATE(31)] = 1260,
  [SMALL_STATE(32)] = 1312,
  [SMALL_STATE(33)] = 1364,
  [SMALL_STATE(34)] = 1416,
  [SMALL_STATE(35)] = 1468,
  [SMALL_STATE(36)] = 1518,
  [SMALL_STATE(37)] = 1570,
  [SMALL_STATE(38)] = 1620,
  [SMALL_STATE(39)] = 1668,
  [SMALL_STATE(40)] = 1716,
  [SMALL_STATE(41)] = 1761,
  [SMALL_STATE(42)] = 1806,
  [SMALL_STATE(43)] = 1851,
  [SMALL_STATE(44)] = 1899,
  [SMALL_STATE(45)] = 1947,
  [SMALL_STATE(46)] = 1995,
  [SMALL_STATE(47)] = 2043,
  [SMALL_STATE(48)] = 2091,
  [SMALL_STATE(49)] = 2139,
  [SMALL_STATE(50)] = 2166,
  [SMALL_STATE(51)] = 2193,
  [SMALL_STATE(52)] = 2222,
  [SMALL_STATE(53)] = 2249,
  [SMALL_STATE(54)] = 2275,
  [SMALL_STATE(55)] = 2299,
  [SMALL_STATE(56)] = 2327,
  [SMALL_STATE(57)] = 2351,
  [SMALL_STATE(58)] = 2375,
  [SMALL_STATE(59)] = 2403,
  [SMALL_STATE(60)] = 2428,
  [SMALL_STATE(61)] = 2453,
  [SMALL_STATE(62)] = 2478,
  [SMALL_STATE(63)] = 2503,
  [SMALL_STATE(64)] = 2528,
  [SMALL_STATE(65)] = 2553,
  [SMALL_STATE(66)] = 2578,
  [SMALL_STATE(67)] = 2616,
  [SMALL_STATE(68)] = 2656,
  [SMALL_STATE(69)] = 2678,
  [SMALL_STATE(70)] = 2716,
  [SMALL_STATE(71)] = 2738,
  [SMALL_STATE(72)] = 2776,
  [SMALL_STATE(73)] = 2798,
  [SMALL_STATE(74)] = 2824,
  [SMALL_STATE(75)] = 2864,
  [SMALL_STATE(76)] = 2904,
  [SMALL_STATE(77)] = 2944,
  [SMALL_STATE(78)] = 2966,
  [SMALL_STATE(79)] = 2988,
  [SMALL_STATE(80)] = 3010,
  [SMALL_STATE(81)] = 3050,
  [SMALL_STATE(82)] = 3090,
  [SMALL_STATE(83)] = 3112,
  [SMALL_STATE(84)] = 3134,
  [SMALL_STATE(85)] = 3157,
  [SMALL_STATE(86)] = 3180,
  [SMALL_STATE(87)] = 3205,
  [SMALL_STATE(88)] = 3228,
  [SMALL_STATE(89)] = 3251,
  [SMALL_STATE(90)] = 3276,
  [SMALL_STATE(91)] = 3299,
  [SMALL_STATE(92)] = 3326,
  [SMALL_STATE(93)] = 3351,
  [SMALL_STATE(94)] = 3375,
  [SMALL_STATE(95)] = 3395,
  [SMALL_STATE(96)] = 3431,
  [SMALL_STATE(97)] = 3467,
  [SMALL_STATE(98)] = 3503,
  [SMALL_STATE(99)] = 3539,
  [SMALL_STATE(100)] = 3561,
  [SMALL_STATE(101)] = 3581,
  [SMALL_STATE(102)] = 3601,
  [SMALL_STATE(103)] = 3621,
  [SMALL_STATE(104)] = 3657,
  [SMALL_STATE(105)] = 3693,
  [SMALL_STATE(106)] = 3713,
  [SMALL_STATE(107)] = 3736,
  [SMALL_STATE(108)] = 3755,
  [SMALL_STATE(109)] = 3786,
  [SMALL_STATE(110)] = 3807,
  [SMALL_STATE(111)] = 3830,
  [SMALL_STATE(112)] = 3853,
  [SMALL_STATE(113)] = 3876,
  [SMALL_STATE(114)] = 3907,
  [SMALL_STATE(115)] = 3930,
  [SMALL_STATE(116)] = 3953,
  [SMALL_STATE(117)] = 3976,
  [SMALL_STATE(118)] = 3999,
  [SMALL_STATE(119)] = 4030,
  [SMALL_STATE(120)] = 4051,
  [SMALL_STATE(121)] = 4071,
  [SMALL_STATE(122)] = 4091,
  [SMALL_STATE(123)] = 4111,
  [SMALL_STATE(124)] = 4131,
  [SMALL_STATE(125)] = 4151,
  [SMALL_STATE(126)] = 4171,
  [SMALL_STATE(127)] = 4203,
  [SMALL_STATE(128)] = 4223,
  [SMALL_STATE(129)] = 4243,
  [SMALL_STATE(130)] = 4263,
  [SMALL_STATE(131)] = 4283,
  [SMALL_STATE(132)] = 4303,
  [SMALL_STATE(133)] = 4323,
  [SMALL_STATE(134)] = 4343,
  [SMALL_STATE(135)] = 4375,
  [SMALL_STATE(136)] = 4395,
  [SMALL_STATE(137)] = 4415,
  [SMALL_STATE(138)] = 4435,
  [SMALL_STATE(139)] = 4455,
  [SMALL_STATE(140)] = 4475,
  [SMALL_STATE(141)] = 4507,
  [SMALL_STATE(142)] = 4526,
  [SMALL_STATE(143)] = 4543,
  [SMALL_STATE(144)] = 4560,
  [SMALL_STATE(145)] = 4579,
  [SMALL_STATE(146)] = 4596,
  [SMALL_STATE(147)] = 4615,
  [SMALL_STATE(148)] = 4632,
  [SMALL_STATE(149)] = 4651,
  [SMALL_STATE(150)] = 4668,
  [SMALL_STATE(151)] = 4687,
  [SMALL_STATE(152)] = 4708,
  [SMALL_STATE(153)] = 4729,
  [SMALL_STATE(154)] = 4750,
  [SMALL_STATE(155)] = 4767,
  [SMALL_STATE(156)] = 4786,
  [SMALL_STATE(157)] = 4803,
  [SMALL_STATE(158)] = 4820,
  [SMALL_STATE(159)] = 4837,
  [SMALL_STATE(160)] = 4854,
  [SMALL_STATE(161)] = 4871,
  [SMALL_STATE(162)] = 4888,
  [SMALL_STATE(163)] = 4905,
  [SMALL_STATE(164)] = 4922,
  [SMALL_STATE(165)] = 4941,
  [SMALL_STATE(166)] = 4960,
  [SMALL_STATE(167)] = 4981,
  [SMALL_STATE(168)] = 4998,
  [SMALL_STATE(169)] = 5015,
  [SMALL_STATE(170)] = 5033,
  [SMALL_STATE(171)] = 5049,
  [SMALL_STATE(172)] = 5065,
  [SMALL_STATE(173)] = 5081,
  [SMALL_STATE(174)] = 5097,
  [SMALL_STATE(175)] = 5113,
  [SMALL_STATE(176)] = 5131,
  [SMALL_STATE(177)] = 5147,
  [SMALL_STATE(178)] = 5163,
  [SMALL_STATE(179)] = 5179,
  [SMALL_STATE(180)] = 5197,
  [SMALL_STATE(181)] = 5213,
  [SMALL_STATE(182)] = 5231,
  [SMALL_STATE(183)] = 5247,
  [SMALL_STATE(184)] = 5263,
  [SMALL_STATE(185)] = 5279,
  [SMALL_STATE(186)] = 5295,
  [SMALL_STATE(187)] = 5311,
  [SMALL_STATE(188)] = 5327,
  [SMALL_STATE(189)] = 5343,
  [SMALL_STATE(190)] = 5359,
  [SMALL_STATE(191)] = 5375,
  [SMALL_STATE(192)] = 5391,
  [SMALL_STATE(193)] = 5407,
  [SMALL_STATE(194)] = 5423,
  [SMALL_STATE(195)] = 5439,
  [SMALL_STATE(196)] = 5457,
  [SMALL_STATE(197)] = 5473,
  [SMALL_STATE(198)] = 5489,
  [SMALL_STATE(199)] = 5507,
  [SMALL_STATE(200)] = 5523,
  [SMALL_STATE(201)] = 5540,
  [SMALL_STATE(202)] = 5557,
  [SMALL_STATE(203)] = 5574,
  [SMALL_STATE(204)] = 5591,
  [SMALL_STATE(205)] = 5608,
  [SMALL_STATE(206)] = 5625,
  [SMALL_STATE(207)] = 5642,
  [SMALL_STATE(208)] = 5659,
  [SMALL_STATE(209)] = 5676,
  [SMALL_STATE(210)] = 5691,
  [SMALL_STATE(211)] = 5708,
  [SMALL_STATE(212)] = 5725,
  [SMALL_STATE(213)] = 5740,
  [SMALL_STATE(214)] = 5757,
  [SMALL_STATE(215)] = 5774,
  [SMALL_STATE(216)] = 5791,
  [SMALL_STATE(217)] = 5808,
  [SMALL_STATE(218)] = 5825,
  [SMALL_STATE(219)] = 5842,
  [SMALL_STATE(220)] = 5859,
  [SMALL_STATE(221)] = 5874,
  [SMALL_STATE(222)] = 5888,
  [SMALL_STATE(223)] = 5912,
  [SMALL_STATE(224)] = 5926,
  [SMALL_STATE(225)] = 5940,
  [SMALL_STATE(226)] = 5954,
  [SMALL_STATE(227)] = 5970,
  [SMALL_STATE(228)] = 5992,
  [SMALL_STATE(229)] = 6014,
  [SMALL_STATE(230)] = 6028,
  [SMALL_STATE(231)] = 6044,
  [SMALL_STATE(232)] = 6058,
  [SMALL_STATE(233)] = 6082,
  [SMALL_STATE(234)] = 6096,
  [SMALL_STATE(235)] = 6110,
  [SMALL_STATE(236)] = 6124,
  [SMALL_STATE(237)] = 6140,
  [SMALL_STATE(238)] = 6154,
  [SMALL_STATE(239)] = 6168,
  [SMALL_STATE(240)] = 6192,
  [SMALL_STATE(241)] = 6206,
  [SMALL_STATE(242)] = 6220,
  [SMALL_STATE(243)] = 6234,
  [SMALL_STATE(244)] = 6258,
  [SMALL_STATE(245)] = 6272,
  [SMALL_STATE(246)] = 6296,
  [SMALL_STATE(247)] = 6310,
  [SMALL_STATE(248)] = 6334,
  [SMALL_STATE(249)] = 6348,
  [SMALL_STATE(250)] = 6362,
  [SMALL_STATE(251)] = 6386,
  [SMALL_STATE(252)] = 6400,
  [SMALL_STATE(253)] = 6424,
  [SMALL_STATE(254)] = 6448,
  [SMALL_STATE(255)] = 6462,
  [SMALL_STATE(256)] = 6476,
  [SMALL_STATE(257)] = 6490,
  [SMALL_STATE(258)] = 6514,
  [SMALL_STATE(259)] = 6538,
  [SMALL_STATE(260)] = 6553,
  [SMALL_STATE(261)] = 6568,
  [SMALL_STATE(262)] = 6581,
  [SMALL_STATE(263)] = 6594,
  [SMALL_STATE(264)] = 6609,
  [SMALL_STATE(265)] = 6624,
  [SMALL_STATE(266)] = 6645,
  [SMALL_STATE(267)] = 6666,
  [SMALL_STATE(268)] = 6679,
  [SMALL_STATE(269)] = 6694,
  [SMALL_STATE(270)] = 6709,
  [SMALL_STATE(271)] = 6730,
  [SMALL_STATE(272)] = 6743,
  [SMALL_STATE(273)] = 6758,
  [SMALL_STATE(274)] = 6773,
  [SMALL_STATE(275)] = 6788,
  [SMALL_STATE(276)] = 6800,
  [SMALL_STATE(277)] = 6812,
  [SMALL_STATE(278)] = 6824,
  [SMALL_STATE(279)] = 6836,
  [SMALL_STATE(280)] = 6848,
  [SMALL_STATE(281)] = 6860,
  [SMALL_STATE(282)] = 6880,
  [SMALL_STATE(283)] = 6892,
  [SMALL_STATE(284)] = 6904,
  [SMALL_STATE(285)] = 6916,
  [SMALL_STATE(286)] = 6928,
  [SMALL_STATE(287)] = 6940,
  [SMALL_STATE(288)] = 6952,
  [SMALL_STATE(289)] = 6964,
  [SMALL_STATE(290)] = 6976,
  [SMALL_STATE(291)] = 6988,
  [SMALL_STATE(292)] = 7000,
  [SMALL_STATE(293)] = 7020,
  [SMALL_STATE(294)] = 7032,
  [SMALL_STATE(295)] = 7052,
  [SMALL_STATE(296)] = 7064,
  [SMALL_STATE(297)] = 7076,
  [SMALL_STATE(298)] = 7089,
  [SMALL_STATE(299)] = 7104,
  [SMALL_STATE(300)] = 7123,
  [SMALL_STATE(301)] = 7136,
  [SMALL_STATE(302)] = 7155,
  [SMALL_STATE(303)] = 7174,
  [SMALL_STATE(304)] = 7189,
  [SMALL_STATE(305)] = 7204,
  [SMALL_STATE(306)] = 7217,
  [SMALL_STATE(307)] = 7236,
  [SMALL_STATE(308)] = 7255,
  [SMALL_STATE(309)] = 7268,
  [SMALL_STATE(310)] = 7287,
  [SMALL_STATE(311)] = 7300,
  [SMALL_STATE(312)] = 7315,
  [SMALL_STATE(313)] = 7330,
  [SMALL_STATE(314)] = 7349,
  [SMALL_STATE(315)] = 7362,
  [SMALL_STATE(316)] = 7375,
  [SMALL_STATE(317)] = 7385,
  [SMALL_STATE(318)] = 7395,
  [SMALL_STATE(319)] = 7405,
  [SMALL_STATE(320)] = 7415,
  [SMALL_STATE(321)] = 7425,
  [SMALL_STATE(322)] = 7437,
  [SMALL_STATE(323)] = 7451,
  [SMALL_STATE(324)] = 7461,
  [SMALL_STATE(325)] = 7475,
  [SMALL_STATE(326)] = 7485,
  [SMALL_STATE(327)] = 7495,
  [SMALL_STATE(328)] = 7505,
  [SMALL_STATE(329)] = 7515,
  [SMALL_STATE(330)] = 7527,
  [SMALL_STATE(331)] = 7537,
  [SMALL_STATE(332)] = 7547,
  [SMALL_STATE(333)] = 7557,
  [SMALL_STATE(334)] = 7567,
  [SMALL_STATE(335)] = 7577,
  [SMALL_STATE(336)] = 7587,
  [SMALL_STATE(337)] = 7597,
  [SMALL_STATE(338)] = 7607,
  [SMALL_STATE(339)] = 7618,
  [SMALL_STATE(340)] = 7629,
  [SMALL_STATE(341)] = 7640,
  [SMALL_STATE(342)] = 7651,
  [SMALL_STATE(343)] = 7662,
  [SMALL_STATE(344)] = 7675,
  [SMALL_STATE(345)] = 7686,
  [SMALL_STATE(346)] = 7699,
  [SMALL_STATE(347)] = 7708,
  [SMALL_STATE(348)] = 7719,
  [SMALL_STATE(349)] = 7730,
  [SMALL_STATE(350)] = 7741,
  [SMALL_STATE(351)] = 7752,
  [SMALL_STATE(352)] = 7761,
  [SMALL_STATE(353)] = 7772,
  [SMALL_STATE(354)] = 7783,
  [SMALL_STATE(355)] = 7794,
  [SMALL_STATE(356)] = 7803,
  [SMALL_STATE(357)] = 7814,
  [SMALL_STATE(358)] = 7825,
  [SMALL_STATE(359)] = 7836,
  [SMALL_STATE(360)] = 7845,
  [SMALL_STATE(361)] = 7858,
  [SMALL_STATE(362)] = 7867,
  [SMALL_STATE(363)] = 7876,
  [SMALL_STATE(364)] = 7887,
  [SMALL_STATE(365)] = 7896,
  [SMALL_STATE(366)] = 7905,
  [SMALL_STATE(367)] = 7916,
  [SMALL_STATE(368)] = 7926,
  [SMALL_STATE(369)] = 7936,
  [SMALL_STATE(370)] = 7946,
  [SMALL_STATE(371)] = 7954,
  [SMALL_STATE(372)] = 7964,
  [SMALL_STATE(373)] = 7974,
  [SMALL_STATE(374)] = 7984,
  [SMALL_STATE(375)] = 7994,
  [SMALL_STATE(376)] = 8004,
  [SMALL_STATE(377)] = 8014,
  [SMALL_STATE(378)] = 8024,
  [SMALL_STATE(379)] = 8034,
  [SMALL_STATE(380)] = 8044,
  [SMALL_STATE(381)] = 8054,
  [SMALL_STATE(382)] = 8064,
  [SMALL_STATE(383)] = 8074,
  [SMALL_STATE(384)] = 8084,
  [SMALL_STATE(385)] = 8094,
  [SMALL_STATE(386)] = 8104,
  [SMALL_STATE(387)] = 8114,
  [SMALL_STATE(388)] = 8124,
  [SMALL_STATE(389)] = 8134,
  [SMALL_STATE(390)] = 8144,
  [SMALL_STATE(391)] = 8154,
  [SMALL_STATE(392)] = 8164,
  [SMALL_STATE(393)] = 8172,
  [SMALL_STATE(394)] = 8182,
  [SMALL_STATE(395)] = 8192,
  [SMALL_STATE(396)] = 8202,
  [SMALL_STATE(397)] = 8210,
  [SMALL_STATE(398)] = 8220,
  [SMALL_STATE(399)] = 8228,
  [SMALL_STATE(400)] = 8236,
  [SMALL_STATE(401)] = 8246,
  [SMALL_STATE(402)] = 8256,
  [SMALL_STATE(403)] = 8266,
  [SMALL_STATE(404)] = 8276,
  [SMALL_STATE(405)] = 8286,
  [SMALL_STATE(406)] = 8296,
  [SMALL_STATE(407)] = 8306,
  [SMALL_STATE(408)] = 8316,
  [SMALL_STATE(409)] = 8326,
  [SMALL_STATE(410)] = 8336,
  [SMALL_STATE(411)] = 8346,
  [SMALL_STATE(412)] = 8356,
  [SMALL_STATE(413)] = 8364,
  [SMALL_STATE(414)] = 8374,
  [SMALL_STATE(415)] = 8384,
  [SMALL_STATE(416)] = 8394,
  [SMALL_STATE(417)] = 8404,
  [SMALL_STATE(418)] = 8414,
  [SMALL_STATE(419)] = 8424,
  [SMALL_STATE(420)] = 8434,
  [SMALL_STATE(421)] = 8444,
  [SMALL_STATE(422)] = 8454,
  [SMALL_STATE(423)] = 8464,
  [SMALL_STATE(424)] = 8472,
  [SMALL_STATE(425)] = 8482,
  [SMALL_STATE(426)] = 8492,
  [SMALL_STATE(427)] = 8500,
  [SMALL_STATE(428)] = 8510,
  [SMALL_STATE(429)] = 8520,
  [SMALL_STATE(430)] = 8530,
  [SMALL_STATE(431)] = 8540,
  [SMALL_STATE(432)] = 8550,
  [SMALL_STATE(433)] = 8560,
  [SMALL_STATE(434)] = 8568,
  [SMALL_STATE(435)] = 8578,
  [SMALL_STATE(436)] = 8588,
  [SMALL_STATE(437)] = 8596,
  [SMALL_STATE(438)] = 8604,
  [SMALL_STATE(439)] = 8614,
  [SMALL_STATE(440)] = 8624,
  [SMALL_STATE(441)] = 8634,
  [SMALL_STATE(442)] = 8644,
  [SMALL_STATE(443)] = 8654,
  [SMALL_STATE(444)] = 8664,
  [SMALL_STATE(445)] = 8674,
  [SMALL_STATE(446)] = 8684,
  [SMALL_STATE(447)] = 8694,
  [SMALL_STATE(448)] = 8702,
  [SMALL_STATE(449)] = 8712,
  [SMALL_STATE(450)] = 8722,
  [SMALL_STATE(451)] = 8729,
  [SMALL_STATE(452)] = 8736,
  [SMALL_STATE(453)] = 8743,
  [SMALL_STATE(454)] = 8750,
  [SMALL_STATE(455)] = 8757,
  [SMALL_STATE(456)] = 8764,
  [SMALL_STATE(457)] = 8771,
  [SMALL_STATE(458)] = 8778,
  [SMALL_STATE(459)] = 8785,
  [SMALL_STATE(460)] = 8792,
  [SMALL_STATE(461)] = 8799,
  [SMALL_STATE(462)] = 8806,
  [SMALL_STATE(463)] = 8813,
  [SMALL_STATE(464)] = 8820,
  [SMALL_STATE(465)] = 8827,
  [SMALL_STATE(466)] = 8834,
  [SMALL_STATE(467)] = 8841,
  [SMALL_STATE(468)] = 8848,
  [SMALL_STATE(469)] = 8855,
  [SMALL_STATE(470)] = 8862,
  [SMALL_STATE(471)] = 8869,
  [SMALL_STATE(472)] = 8876,
  [SMALL_STATE(473)] = 8883,
  [SMALL_STATE(474)] = 8890,
  [SMALL_STATE(475)] = 8897,
  [SMALL_STATE(476)] = 8904,
  [SMALL_STATE(477)] = 8911,
  [SMALL_STATE(478)] = 8918,
  [SMALL_STATE(479)] = 8925,
  [SMALL_STATE(480)] = 8932,
  [SMALL_STATE(481)] = 8939,
  [SMALL_STATE(482)] = 8946,
  [SMALL_STATE(483)] = 8953,
  [SMALL_STATE(484)] = 8960,
  [SMALL_STATE(485)] = 8967,
  [SMALL_STATE(486)] = 8974,
  [SMALL_STATE(487)] = 8981,
  [SMALL_STATE(488)] = 8988,
  [SMALL_STATE(489)] = 8995,
  [SMALL_STATE(490)] = 9002,
  [SMALL_STATE(491)] = 9009,
  [SMALL_STATE(492)] = 9016,
  [SMALL_STATE(493)] = 9023,
  [SMALL_STATE(494)] = 9030,
  [SMALL_STATE(495)] = 9037,
  [SMALL_STATE(496)] = 9044,
  [SMALL_STATE(497)] = 9051,
  [SMALL_STATE(498)] = 9058,
  [SMALL_STATE(499)] = 9065,
  [SMALL_STATE(500)] = 9072,
  [SMALL_STATE(501)] = 9079,
  [SMALL_STATE(502)] = 9086,
  [SMALL_STATE(503)] = 9093,
  [SMALL_STATE(504)] = 9100,
  [SMALL_STATE(505)] = 9107,
  [SMALL_STATE(506)] = 9114,
  [SMALL_STATE(507)] = 9121,
  [SMALL_STATE(508)] = 9128,
  [SMALL_STATE(509)] = 9135,
  [SMALL_STATE(510)] = 9142,
  [SMALL_STATE(511)] = 9149,
  [SMALL_STATE(512)] = 9156,
  [SMALL_STATE(513)] = 9163,
  [SMALL_STATE(514)] = 9170,
  [SMALL_STATE(515)] = 9177,
  [SMALL_STATE(516)] = 9184,
  [SMALL_STATE(517)] = 9191,
  [SMALL_STATE(518)] = 9198,
  [SMALL_STATE(519)] = 9205,
  [SMALL_STATE(520)] = 9212,
  [SMALL_STATE(521)] = 9219,
  [SMALL_STATE(522)] = 9226,
  [SMALL_STATE(523)] = 9233,
  [SMALL_STATE(524)] = 9240,
  [SMALL_STATE(525)] = 9247,
  [SMALL_STATE(526)] = 9254,
  [SMALL_STATE(527)] = 9261,
  [SMALL_STATE(528)] = 9268,
  [SMALL_STATE(529)] = 9275,
  [SMALL_STATE(530)] = 9282,
  [SMALL_STATE(531)] = 9289,
  [SMALL_STATE(532)] = 9296,
  [SMALL_STATE(533)] = 9303,
  [SMALL_STATE(534)] = 9310,
  [SMALL_STATE(535)] = 9317,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(297),
  [7] = {.count = 1, .reusable = true}, SHIFT(315),
  [9] = {.count = 1, .reusable = true}, SHIFT(314),
  [11] = {.count = 1, .reusable = true}, SHIFT(366),
  [13] = {.count = 1, .reusable = true}, SHIFT(52),
  [15] = {.count = 1, .reusable = true}, SHIFT(129),
  [17] = {.count = 1, .reusable = true}, SHIFT(123),
  [19] = {.count = 1, .reusable = true}, SHIFT(135),
  [21] = {.count = 1, .reusable = true}, SHIFT(120),
  [23] = {.count = 1, .reusable = true}, SHIFT(125),
  [25] = {.count = 1, .reusable = true}, SHIFT(136),
  [27] = {.count = 1, .reusable = true}, SHIFT(124),
  [29] = {.count = 1, .reusable = true}, SHIFT(127),
  [31] = {.count = 1, .reusable = true}, SHIFT(133),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(406),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 3),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 3),
  [43] = {.count = 1, .reusable = true}, SHIFT(180),
  [45] = {.count = 1, .reusable = true}, SHIFT(2),
  [47] = {.count = 1, .reusable = true}, SHIFT(13),
  [49] = {.count = 1, .reusable = true}, SHIFT(15),
  [51] = {.count = 1, .reusable = true}, SHIFT(22),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, SHIFT(7),
  [57] = {.count = 1, .reusable = true}, SHIFT(63),
  [59] = {.count = 1, .reusable = true}, SHIFT(64),
  [61] = {.count = 1, .reusable = true}, SHIFT(25),
  [63] = {.count = 1, .reusable = true}, SHIFT(50),
  [65] = {.count = 1, .reusable = true}, SHIFT(60),
  [67] = {.count = 1, .reusable = true}, SHIFT(21),
  [69] = {.count = 1, .reusable = true}, SHIFT(9),
  [71] = {.count = 1, .reusable = true}, SHIFT(49),
  [73] = {.count = 1, .reusable = true}, SHIFT(59),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(13),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(22),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(63),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(64),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(25),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(50),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(60),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(21),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(49),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(59),
  [122] = {.count = 1, .reusable = true}, SHIFT(176),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 1),
  [128] = {.count = 1, .reusable = true}, SHIFT(506),
  [130] = {.count = 1, .reusable = true}, SHIFT(190),
  [132] = {.count = 1, .reusable = true}, SHIFT(85),
  [134] = {.count = 1, .reusable = true}, SHIFT(84),
  [136] = {.count = 1, .reusable = true}, SHIFT(87),
  [138] = {.count = 1, .reusable = true}, SHIFT(90),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_loadType, 1),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_loadType, 1),
  [144] = {.count = 1, .reusable = true}, SHIFT(396),
  [146] = {.count = 1, .reusable = true}, SHIFT(184),
  [148] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(13),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(22),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(25),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(85),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(84),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(87),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(90),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(21),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 3),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 1),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 1),
  [197] = {.count = 1, .reusable = true}, SHIFT(505),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_loadType, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_loadType, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [207] = {.count = 1, .reusable = true}, SHIFT(404),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [217] = {.count = 1, .reusable = true}, SHIFT(163),
  [219] = {.count = 1, .reusable = true}, SHIFT(19),
  [221] = {.count = 1, .reusable = true}, SHIFT(168),
  [223] = {.count = 1, .reusable = true}, SHIFT(20),
  [225] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(20),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 1),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_transparencecheck, 1),
  [234] = {.count = 1, .reusable = true}, SHIFT(344),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [240] = {.count = 1, .reusable = true}, SHIFT(403),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [246] = {.count = 1, .reusable = true}, SHIFT(402),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [256] = {.count = 1, .reusable = true}, SHIFT(348),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 3),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_transparencecheck, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [270] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(13),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(22),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(25),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(60),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(21),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [302] = {.count = 1, .reusable = true}, SHIFT(323),
  [304] = {.count = 1, .reusable = true}, SHIFT(165),
  [306] = {.count = 1, .reusable = true}, SHIFT(164),
  [308] = {.count = 1, .reusable = true}, SHIFT(150),
  [310] = {.count = 1, .reusable = true}, SHIFT(141),
  [312] = {.count = 1, .reusable = true}, SHIFT(155),
  [314] = {.count = 1, .reusable = true}, SHIFT(144),
  [316] = {.count = 1, .reusable = true}, SHIFT(146),
  [318] = {.count = 1, .reusable = true}, SHIFT(148),
  [320] = {.count = 1, .reusable = true}, SHIFT(65),
  [322] = {.count = 1, .reusable = true}, SHIFT(186),
  [324] = {.count = 1, .reusable = true}, SHIFT(55),
  [326] = {.count = 1, .reusable = true}, SHIFT(128),
  [328] = {.count = 1, .reusable = true}, SHIFT(174),
  [330] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(13),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(55),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(128),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(25),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(50),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(49),
  [362] = {.count = 1, .reusable = true}, SHIFT(177),
  [364] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(52),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(129),
  [372] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(123),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(135),
  [378] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(120),
  [381] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(125),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(136),
  [387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(124),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(127),
  [393] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(133),
  [396] = {.count = 1, .reusable = true}, SHIFT(172),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [400] = {.count = 1, .reusable = true}, SHIFT(334),
  [402] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(165),
  [407] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(164),
  [410] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(150),
  [413] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(141),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(155),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(144),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(146),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(148),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(65),
  [431] = {.count = 1, .reusable = true}, SHIFT(68),
  [433] = {.count = 1, .reusable = true}, SHIFT(110),
  [435] = {.count = 1, .reusable = false}, SHIFT(111),
  [437] = {.count = 1, .reusable = true}, SHIFT(112),
  [439] = {.count = 1, .reusable = true}, SHIFT(114),
  [441] = {.count = 1, .reusable = true}, SHIFT(115),
  [443] = {.count = 1, .reusable = true}, SHIFT(116),
  [445] = {.count = 1, .reusable = true}, SHIFT(117),
  [447] = {.count = 1, .reusable = true}, SHIFT(106),
  [449] = {.count = 1, .reusable = true}, SHIFT(70),
  [451] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [453] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(110),
  [456] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(111),
  [459] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(112),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(114),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(115),
  [468] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(116),
  [471] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(117),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(106),
  [477] = {.count = 1, .reusable = true}, SHIFT(191),
  [479] = {.count = 1, .reusable = true}, SHIFT(73),
  [481] = {.count = 1, .reusable = true}, SHIFT(51),
  [483] = {.count = 1, .reusable = false}, SHIFT(151),
  [485] = {.count = 1, .reusable = true}, SHIFT(152),
  [487] = {.count = 1, .reusable = true}, SHIFT(153),
  [489] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2),
  [491] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(2),
  [494] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(73),
  [497] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(51),
  [500] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(7),
  [503] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(55),
  [506] = {.count = 2, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(151),
  [509] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(152),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(153),
  [515] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(9),
  [518] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2),
  [520] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(2),
  [523] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(73),
  [526] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(51),
  [529] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(91),
  [532] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(15),
  [535] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(22),
  [538] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(23),
  [541] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(7),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(21),
  [547] = {.count = 1, .reusable = true}, SHIFT(188),
  [549] = {.count = 1, .reusable = true}, SHIFT(91),
  [551] = {.count = 1, .reusable = true}, SHIFT(192),
  [553] = {.count = 1, .reusable = true}, SHIFT(178),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_norefcount, 1),
  [557] = {.count = 1, .reusable = true}, SHIFT(338),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 1),
  [561] = {.count = 1, .reusable = true}, SHIFT(347),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [567] = {.count = 1, .reusable = true}, SHIFT(455),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [571] = {.count = 1, .reusable = true}, SHIFT(524),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [575] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_norefcount, 3),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_xy, 1),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size_xy, 1),
  [583] = {.count = 1, .reusable = true}, SHIFT(512),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 3),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [593] = {.count = 1, .reusable = true}, SHIFT(409),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alphamaskfile, 1),
  [597] = {.count = 1, .reusable = true}, SHIFT(511),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 1),
  [601] = {.count = 1, .reusable = true}, SHIFT(508),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_xy, 5),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size_xy, 5),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [609] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [613] = {.count = 1, .reusable = true}, SHIFT(400),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alwaystransparent, 1),
  [617] = {.count = 1, .reusable = true}, SHIFT(349),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 1),
  [621] = {.count = 1, .reusable = true}, SHIFT(476),
  [623] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2),
  [625] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(215),
  [628] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(201),
  [631] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(216),
  [634] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(214),
  [637] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(218),
  [640] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(205),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(58),
  [646] = {.count = 1, .reusable = true}, SHIFT(392),
  [648] = {.count = 1, .reusable = true}, SHIFT(204),
  [650] = {.count = 1, .reusable = true}, SHIFT(203),
  [652] = {.count = 1, .reusable = true}, SHIFT(202),
  [654] = {.count = 1, .reusable = true}, SHIFT(210),
  [656] = {.count = 1, .reusable = true}, SHIFT(211),
  [658] = {.count = 1, .reusable = true}, SHIFT(217),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [662] = {.count = 1, .reusable = true}, SHIFT(319),
  [664] = {.count = 1, .reusable = true}, SHIFT(215),
  [666] = {.count = 1, .reusable = true}, SHIFT(201),
  [668] = {.count = 1, .reusable = true}, SHIFT(216),
  [670] = {.count = 1, .reusable = true}, SHIFT(214),
  [672] = {.count = 1, .reusable = true}, SHIFT(218),
  [674] = {.count = 1, .reusable = true}, SHIFT(205),
  [676] = {.count = 1, .reusable = true}, SHIFT(58),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [680] = {.count = 1, .reusable = true}, SHIFT(326),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [688] = {.count = 1, .reusable = true}, SHIFT(452),
  [690] = {.count = 1, .reusable = true}, SHIFT(351),
  [692] = {.count = 1, .reusable = true}, SHIFT(169),
  [694] = {.count = 1, .reusable = true}, SHIFT(219),
  [696] = {.count = 1, .reusable = true}, SHIFT(200),
  [698] = {.count = 1, .reusable = true}, SHIFT(208),
  [700] = {.count = 1, .reusable = true}, SHIFT(207),
  [702] = {.count = 1, .reusable = true}, SHIFT(206),
  [704] = {.count = 1, .reusable = true}, SHIFT(370),
  [706] = {.count = 1, .reusable = true}, SHIFT(364),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alphamaskfile, 3),
  [710] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 4),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 3),
  [714] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2),
  [716] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(169),
  [719] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(219),
  [722] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(200),
  [725] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(65),
  [728] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(208),
  [731] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(207),
  [734] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(206),
  [737] = {.count = 1, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2),
  [739] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(204),
  [742] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(52),
  [745] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(203),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(202),
  [751] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(210),
  [754] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(211),
  [757] = {.count = 2, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 2), SHIFT_REPEAT(217),
  [760] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alwaystransparent, 3),
  [764] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 1),
  [766] = {.count = 1, .reusable = true}, SHIFT(350),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 1),
  [770] = {.count = 1, .reusable = true}, SHIFT(435),
  [772] = {.count = 1, .reusable = true}, SHIFT(209),
  [774] = {.count = 1, .reusable = true}, SHIFT(99),
  [776] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 1),
  [778] = {.count = 1, .reusable = true}, SHIFT(340),
  [780] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [782] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [784] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2),
  [786] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2), SHIFT_REPEAT(99),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 1),
  [791] = {.count = 1, .reusable = true}, SHIFT(386),
  [793] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [795] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [797] = {.count = 1, .reusable = true}, SHIFT(109),
  [799] = {.count = 1, .reusable = true}, SHIFT(523),
  [801] = {.count = 1, .reusable = true}, SHIFT(220),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [805] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [807] = {.count = 1, .reusable = true}, SHIFT(119),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 3),
  [811] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2),
  [813] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(2),
  [816] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(236),
  [819] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(58),
  [822] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(230),
  [825] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(226),
  [828] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(213),
  [831] = {.count = 1, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2),
  [833] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [836] = {.count = 2, .reusable = false}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(13),
  [839] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(51),
  [842] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(91),
  [845] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(58),
  [848] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(166),
  [851] = {.count = 1, .reusable = true}, SHIFT(295),
  [853] = {.count = 1, .reusable = false}, SHIFT(13),
  [855] = {.count = 1, .reusable = true}, SHIFT(166),
  [857] = {.count = 1, .reusable = true}, SHIFT(290),
  [859] = {.count = 1, .reusable = true}, SHIFT(236),
  [861] = {.count = 1, .reusable = true}, SHIFT(230),
  [863] = {.count = 1, .reusable = true}, SHIFT(226),
  [865] = {.count = 1, .reusable = true}, SHIFT(213),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 1),
  [869] = {.count = 1, .reusable = true}, SHIFT(463),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 3),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 3),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 3),
  [877] = {.count = 1, .reusable = true}, SHIFT(286),
  [879] = {.count = 1, .reusable = true}, SHIFT(291),
  [881] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 1, .production_id = 4),
  [883] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [885] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [887] = {.count = 1, .reusable = true}, SHIFT(467),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 7),
  [891] = {.count = 1, .reusable = true}, SHIFT(331),
  [893] = {.count = 1, .reusable = true}, SHIFT(260),
  [895] = {.count = 1, .reusable = true}, SHIFT(269),
  [897] = {.count = 1, .reusable = true}, SHIFT(259),
  [899] = {.count = 1, .reusable = true}, SHIFT(263),
  [901] = {.count = 1, .reusable = true}, SHIFT(264),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 2),
  [905] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 2),
  [907] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [909] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [911] = {.count = 1, .reusable = true}, SHIFT(482),
  [913] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [915] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [917] = {.count = 1, .reusable = true}, SHIFT(479),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [921] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [923] = {.count = 1, .reusable = true}, SHIFT(357),
  [925] = {.count = 1, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2),
  [927] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(260),
  [930] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(269),
  [933] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(259),
  [936] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(263),
  [939] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(264),
  [942] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [944] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [946] = {.count = 1, .reusable = true}, SHIFT(429),
  [948] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 1),
  [950] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 1),
  [952] = {.count = 1, .reusable = true}, SHIFT(492),
  [954] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [956] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [958] = {.count = 1, .reusable = true}, SHIFT(361),
  [960] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [962] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [964] = {.count = 1, .reusable = true}, SHIFT(362),
  [966] = {.count = 1, .reusable = true}, SHIFT(333),
  [968] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 4),
  [970] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 4),
  [972] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [974] = {.count = 1, .reusable = true}, SHIFT(451),
  [976] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [978] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [980] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 5),
  [982] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 5),
  [984] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [986] = {.count = 1, .reusable = true}, SHIFT(526),
  [988] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [990] = {.count = 1, .reusable = true}, SHIFT(374),
  [992] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [994] = {.count = 1, .reusable = true}, SHIFT(533),
  [996] = {.count = 1, .reusable = true}, SHIFT(289),
  [998] = {.count = 1, .reusable = true}, SHIFT(274),
  [1000] = {.count = 1, .reusable = true}, SHIFT(273),
  [1002] = {.count = 1, .reusable = true}, SHIFT(272),
  [1004] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [1006] = {.count = 1, .reusable = true}, SHIFT(373),
  [1008] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 1),
  [1010] = {.count = 1, .reusable = true}, SHIFT(530),
  [1012] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [1014] = {.count = 1, .reusable = true}, SHIFT(525),
  [1016] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [1018] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [1020] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [1022] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [1024] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [1026] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [1028] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [1030] = {.count = 1, .reusable = true}, SHIFT(372),
  [1032] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2),
  [1034] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1037] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(274),
  [1040] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(273),
  [1043] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(272),
  [1046] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(166),
  [1049] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [1051] = {.count = 1, .reusable = true}, SHIFT(527),
  [1053] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [1055] = {.count = 1, .reusable = true}, SHIFT(534),
  [1057] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [1059] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [1061] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [1063] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [1065] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [1067] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [1069] = {.count = 1, .reusable = true}, SHIFT(288),
  [1071] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 1),
  [1073] = {.count = 1, .reusable = true}, SHIFT(443),
  [1075] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [1077] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [1079] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype, 1),
  [1081] = {.count = 1, .reusable = true}, SHIFT(438),
  [1083] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [1085] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType, 1),
  [1087] = {.count = 1, .reusable = true}, SHIFT(432),
  [1089] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [1091] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType, 1),
  [1093] = {.count = 1, .reusable = true}, SHIFT(431),
  [1095] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [1097] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 1),
  [1099] = {.count = 1, .reusable = true}, SHIFT(444),
  [1101] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 1),
  [1103] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 1),
  [1105] = {.count = 1, .reusable = true}, SHIFT(486),
  [1107] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 1),
  [1109] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 1),
  [1111] = {.count = 1, .reusable = true}, SHIFT(472),
  [1113] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 1),
  [1115] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 1),
  [1117] = {.count = 1, .reusable = true}, SHIFT(342),
  [1119] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [1121] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 1),
  [1123] = {.count = 1, .reusable = true}, SHIFT(439),
  [1125] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [1127] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 1, .production_id = 4),
  [1129] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [1131] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 1, .production_id = 4),
  [1133] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [1135] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 5),
  [1137] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [1139] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [1141] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 1),
  [1143] = {.count = 1, .reusable = true}, SHIFT(445),
  [1145] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 1),
  [1147] = {.count = 1, .reusable = true}, SHIFT(446),
  [1149] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect, 1),
  [1151] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effect, 1),
  [1153] = {.count = 1, .reusable = true}, SHIFT(456),
  [1155] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [1157] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [1159] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 1),
  [1161] = {.count = 1, .reusable = true}, SHIFT(387),
  [1163] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType_block, 3),
  [1165] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [1167] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 2),
  [1169] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 3),
  [1171] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 2),
  [1173] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 7),
  [1175] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 7),
  [1177] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [1179] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 3),
  [1181] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 2),
  [1183] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect, 3),
  [1185] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effect, 3),
  [1187] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [1189] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 3),
  [1191] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 3),
  [1193] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 1, .production_id = 4),
  [1195] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 3),
  [1197] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 2),
  [1199] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 3),
  [1201] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 3),
  [1203] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 3),
  [1205] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 3),
  [1207] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype, 3),
  [1209] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 3),
  [1211] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 2),
  [1213] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 3),
  [1215] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType_block, 3),
  [1217] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType, 3),
  [1219] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [1221] = {.count = 1, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [1223] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType, 3),
  [1225] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType_block, 2),
  [1227] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 7),
  [1229] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 7),
  [1231] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType_block, 2),
  [1233] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 1),
  [1235] = {.count = 1, .reusable = true}, SHIFT(470),
  [1237] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 1),
  [1239] = {.count = 1, .reusable = true}, SHIFT(460),
  [1241] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_position, 1),
  [1243] = {.count = 1, .reusable = true}, SHIFT(485),
  [1245] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_size, 1),
  [1247] = {.count = 1, .reusable = true}, SHIFT(531),
  [1249] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType, 1),
  [1251] = {.count = 1, .reusable = true}, SHIFT(422),
  [1253] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 1),
  [1255] = {.count = 1, .reusable = true}, SHIFT(457),
  [1257] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect_bool, 1),
  [1259] = {.count = 1, .reusable = true}, SHIFT(352),
  [1261] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 1),
  [1263] = {.count = 1, .reusable = true}, SHIFT(478),
  [1265] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 1),
  [1267] = {.count = 1, .reusable = true}, SHIFT(473),
  [1269] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 3),
  [1271] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_backGround, 1),
  [1273] = {.count = 1, .reusable = true}, SHIFT(453),
  [1275] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_moveable, 1),
  [1277] = {.count = 1, .reusable = true}, SHIFT(353),
  [1279] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 3),
  [1281] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 1),
  [1283] = {.count = 1, .reusable = true}, SHIFT(421),
  [1285] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 1),
  [1287] = {.count = 1, .reusable = true}, SHIFT(459),
  [1289] = {.count = 1, .reusable = true}, SHIFT(532),
  [1291] = {.count = 1, .reusable = true}, SHIFT(535),
  [1293] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_orientation, 1),
  [1295] = {.count = 1, .reusable = true}, SHIFT(369),
  [1297] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 1),
  [1299] = {.count = 1, .reusable = true}, SHIFT(458),
  [1301] = {.count = 1, .reusable = true}, SHIFT(378),
  [1303] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 2),
  [1305] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect_bool, 3),
  [1307] = {.count = 1, .reusable = true}, SHIFT(284),
  [1309] = {.count = 1, .reusable = true}, SHIFT(300),
  [1311] = {.count = 1, .reusable = true}, SHIFT(308),
  [1313] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 3),
  [1315] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 3),
  [1317] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_meshsettings, 1),
  [1319] = {.count = 1, .reusable = true}, SHIFT(495),
  [1321] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [1323] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [1325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(297),
  [1328] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(315),
  [1331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(314),
  [1334] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 1),
  [1336] = {.count = 1, .reusable = true}, SHIFT(498),
  [1338] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 3),
  [1340] = {.count = 1, .reusable = true}, SHIFT(287),
  [1342] = {.count = 1, .reusable = true}, SHIFT(310),
  [1344] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_position, 5),
  [1346] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_orientation, 3),
  [1348] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_moveable, 3),
  [1350] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 1),
  [1352] = {.count = 1, .reusable = true}, SHIFT(519),
  [1354] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_size, 5),
  [1356] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType_block, 3),
  [1358] = {.count = 1, .reusable = true}, SHIFT(238),
  [1360] = {.count = 1, .reusable = true}, SHIFT(305),
  [1362] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 1, .production_id = 4),
  [1364] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 5),
  [1366] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gui_backGround, 3),
  [1368] = {.count = 1, .reusable = true}, SHIFT(199),
  [1370] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType_block, 2),
  [1372] = {.count = 1, .reusable = true}, SHIFT(170),
  [1374] = {.count = 1, .reusable = true}, SHIFT(293),
  [1376] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 3),
  [1378] = {.count = 1, .reusable = true}, REDUCE(aux_sym__windowType_block_repeat1, 1, .production_id = 4),
  [1380] = {.count = 1, .reusable = true}, SHIFT(296),
  [1382] = {.count = 1, .reusable = true}, REDUCE(sym__listBoxType, 3),
  [1384] = {.count = 1, .reusable = true}, SHIFT(244),
  [1386] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2),
  [1388] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(2),
  [1391] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(310),
  [1394] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(213),
  [1397] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 3),
  [1399] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 3),
  [1401] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 3),
  [1403] = {.count = 1, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2),
  [1405] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1408] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(55),
  [1411] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(305),
  [1414] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2),
  [1416] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(2),
  [1419] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(300),
  [1422] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(308),
  [1425] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle, 1),
  [1427] = {.count = 1, .reusable = true}, SHIFT(379),
  [1429] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 1),
  [1431] = {.count = 1, .reusable = true}, SHIFT(434),
  [1433] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 6),
  [1435] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 3),
  [1437] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType, 1),
  [1439] = {.count = 1, .reusable = true}, SHIFT(380),
  [1441] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType, 1),
  [1443] = {.count = 1, .reusable = true}, SHIFT(381),
  [1445] = {.count = 1, .reusable = true}, SHIFT(320),
  [1447] = {.count = 1, .reusable = true}, SHIFT(329),
  [1449] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2),
  [1451] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(169),
  [1454] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(329),
  [1457] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_meshsettings, 11),
  [1459] = {.count = 1, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 1, .production_id = 4),
  [1461] = {.count = 1, .reusable = false}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 1, .production_id = 4),
  [1463] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh, 1),
  [1465] = {.count = 1, .reusable = true}, SHIFT(407),
  [1467] = {.count = 1, .reusable = true}, SHIFT(330),
  [1469] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 1, .production_id = 4),
  [1471] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_specular, 1),
  [1473] = {.count = 1, .reusable = true}, SHIFT(462),
  [1475] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_normal, 1),
  [1477] = {.count = 1, .reusable = true}, SHIFT(465),
  [1479] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texture, 1),
  [1481] = {.count = 1, .reusable = true}, SHIFT(471),
  [1483] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_specular, 3),
  [1485] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType, 3),
  [1487] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType, 3),
  [1489] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle, 3),
  [1491] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 1, .production_id = 4),
  [1493] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh, 3),
  [1495] = {.count = 1, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2),
  [1497] = {.count = 2, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1500] = {.count = 2, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2), SHIFT_REPEAT(321),
  [1503] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 3),
  [1505] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texture, 3),
  [1507] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 3),
  [1509] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_normal, 3),
  [1511] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 3),
  [1513] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle_block, 3),
  [1515] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType_block, 2),
  [1517] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType_block, 3),
  [1519] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 2),
  [1521] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType_block, 3),
  [1523] = {.count = 1, .reusable = true}, SHIFT(193),
  [1525] = {.count = 1, .reusable = true}, SHIFT(321),
  [1527] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 2),
  [1529] = {.count = 1, .reusable = true}, SHIFT(197),
  [1531] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType_block, 2),
  [1533] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle_block, 2),
  [1535] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 1),
  [1537] = {.count = 1, .reusable = true}, SHIFT(367),
  [1539] = {.count = 1, .reusable = true}, SHIFT(423),
  [1541] = {.count = 1, .reusable = true}, SHIFT(363),
  [1543] = {.count = 1, .reusable = true}, SHIFT(356),
  [1545] = {.count = 1, .reusable = true}, SHIFT(358),
  [1547] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 1),
  [1549] = {.count = 1, .reusable = true}, SHIFT(385),
  [1551] = {.count = 1, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2),
  [1553] = {.count = 2, .reusable = true}, REDUCE(aux_sym__guiTypes_block_repeat1, 2), SHIFT_REPEAT(363),
  [1556] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gui, 1),
  [1558] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_linewidth, 1),
  [1560] = {.count = 1, .reusable = true}, SHIFT(371),
  [1562] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 1),
  [1564] = {.count = 1, .reusable = true}, SHIFT(415),
  [1566] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_type, 1),
  [1568] = {.count = 1, .reusable = true}, SHIFT(481),
  [1570] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gui_repeat1, 2),
  [1572] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gui_repeat1, 2), SHIFT_REPEAT(366),
  [1575] = {.count = 1, .reusable = true}, SHIFT(412),
  [1577] = {.count = 1, .reusable = true}, SHIFT(339),
  [1579] = {.count = 1, .reusable = true}, SHIFT(354),
  [1581] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 1),
  [1583] = {.count = 1, .reusable = true}, SHIFT(383),
  [1585] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 1),
  [1587] = {.count = 1, .reusable = true}, SHIFT(384),
  [1589] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 3),
  [1591] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [1593] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_linewidth, 3),
  [1595] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 3),
  [1597] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 3),
  [1599] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_integer, 1),
  [1601] = {.count = 1, .reusable = true}, SHIFT(440),
  [1603] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [1605] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(322),
  [1608] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [1610] = {.count = 1, .reusable = true}, SHIFT(139),
  [1612] = {.count = 1, .reusable = true}, SHIFT(322),
  [1614] = {.count = 1, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 1, .production_id = 4),
  [1616] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 2),
  [1618] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 3),
  [1620] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_type, 3),
  [1622] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 1),
  [1624] = {.count = 1, .reusable = true}, SHIFT(388),
  [1626] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 2),
  [1628] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 2),
  [1630] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 1, .production_id = 4),
  [1632] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 3),
  [1634] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [1636] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 3),
  [1638] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 3),
  [1640] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 1, .production_id = 4),
  [1642] = {.count = 1, .reusable = true}, SHIFT(54),
  [1644] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 1),
  [1646] = {.count = 1, .reusable = true}, SHIFT(496),
  [1648] = {.count = 1, .reusable = true}, SHIFT(100),
  [1650] = {.count = 1, .reusable = true}, SHIFT(324),
  [1652] = {.count = 1, .reusable = true}, SHIFT(181),
  [1654] = {.count = 1, .reusable = true}, SHIFT(167),
  [1656] = {.count = 1, .reusable = true}, SHIFT(447),
  [1658] = {.count = 1, .reusable = true}, SHIFT(27),
  [1660] = {.count = 1, .reusable = true}, SHIFT(162),
  [1662] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 3),
  [1664] = {.count = 1, .reusable = true}, SHIFT(57),
  [1666] = {.count = 1, .reusable = true}, SHIFT(28),
  [1668] = {.count = 1, .reusable = true}, SHIFT(83),
  [1670] = {.count = 1, .reusable = true}, SHIFT(101),
  [1672] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 3),
  [1674] = {.count = 1, .reusable = true}, SHIFT(221),
  [1676] = {.count = 1, .reusable = true}, SHIFT(235),
  [1678] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 1),
  [1680] = {.count = 1, .reusable = true}, SHIFT(497),
  [1682] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_type, 1, .production_id = 2),
  [1684] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 1),
  [1686] = {.count = 1, .reusable = true}, SHIFT(466),
  [1688] = {.count = 1, .reusable = true}, SHIFT(131),
  [1690] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 1),
  [1692] = {.count = 1, .reusable = true}, SHIFT(464),
  [1694] = {.count = 1, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 1, .production_id = 4),
  [1696] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [1698] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(447),
  [1701] = {.count = 1, .reusable = true}, SHIFT(137),
  [1703] = {.count = 1, .reusable = true}, SHIFT(138),
  [1705] = {.count = 1, .reusable = true}, REDUCE(sym__windowType, 1),
  [1707] = {.count = 1, .reusable = true}, SHIFT(408),
  [1709] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 2),
  [1711] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_integer, 3),
  [1713] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes, 1),
  [1715] = {.count = 1, .reusable = true}, SHIFT(382),
  [1717] = {.count = 1, .reusable = true}, SHIFT(38),
  [1719] = {.count = 1, .reusable = true}, SHIFT(428),
  [1721] = {.count = 1, .reusable = true}, SHIFT(234),
  [1723] = {.count = 1, .reusable = true}, REDUCE(sym__windowType_block, 3),
  [1725] = {.count = 1, .reusable = true}, SHIFT(318),
  [1727] = {.count = 1, .reusable = true}, SHIFT(345),
  [1729] = {.count = 1, .reusable = true}, SHIFT(18),
  [1731] = {.count = 1, .reusable = true}, SHIFT(149),
  [1733] = {.count = 1, .reusable = true}, SHIFT(376),
  [1735] = {.count = 1, .reusable = true}, SHIFT(377),
  [1737] = {.count = 1, .reusable = true}, SHIFT(529),
  [1739] = {.count = 1, .reusable = true}, SHIFT(224),
  [1741] = {.count = 1, .reusable = false}, SHIFT(224),
  [1743] = {.count = 1, .reusable = true}, SHIFT(250),
  [1745] = {.count = 1, .reusable = true}, SHIFT(140),
  [1747] = {.count = 1, .reusable = true}, SHIFT(97),
  [1749] = {.count = 1, .reusable = true}, SHIFT(298),
  [1751] = {.count = 1, .reusable = true}, SHIFT(270),
  [1753] = {.count = 1, .reusable = true}, SHIFT(108),
  [1755] = {.count = 1, .reusable = true}, SHIFT(316),
  [1757] = {.count = 1, .reusable = true}, SHIFT(94),
  [1759] = {.count = 1, .reusable = true}, SHIFT(92),
  [1761] = {.count = 1, .reusable = true}, SHIFT(76),
  [1763] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader_file, 1),
  [1765] = {.count = 1, .reusable = true}, SHIFT(518),
  [1767] = {.count = 1, .reusable = true}, SHIFT(413),
  [1769] = {.count = 1, .reusable = true}, SHIFT(414),
  [1771] = {.count = 1, .reusable = true}, REDUCE(sym__windowType_block, 2),
  [1773] = {.count = 1, .reusable = true}, SHIFT(389),
  [1775] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader, 1),
  [1777] = {.count = 1, .reusable = true}, SHIFT(514),
  [1779] = {.count = 1, .reusable = true}, SHIFT(418),
  [1781] = {.count = 1, .reusable = true}, SHIFT(14),
  [1783] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 3),
  [1785] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 3),
  [1787] = {.count = 1, .reusable = true}, SHIFT(41),
  [1789] = {.count = 1, .reusable = true}, SHIFT(394),
  [1791] = {.count = 1, .reusable = true}, SHIFT(26),
  [1793] = {.count = 1, .reusable = true}, SHIFT(24),
  [1795] = {.count = 1, .reusable = true}, SHIFT(17),
  [1797] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_specular, 1),
  [1799] = {.count = 1, .reusable = true}, SHIFT(510),
  [1801] = {.count = 1, .reusable = true}, SHIFT(3),
  [1803] = {.count = 1, .reusable = false}, SHIFT(3),
  [1805] = {.count = 1, .reusable = true}, SHIFT(98),
  [1807] = {.count = 1, .reusable = true}, SHIFT(67),
  [1809] = {.count = 1, .reusable = true}, SHIFT(62),
  [1811] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes_block, 3),
  [1813] = {.count = 1, .reusable = true}, SHIFT(441),
  [1815] = {.count = 1, .reusable = true}, SHIFT(442),
  [1817] = {.count = 1, .reusable = true}, SHIFT(71),
  [1819] = {.count = 1, .reusable = true}, SHIFT(405),
  [1821] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_normal, 1),
  [1823] = {.count = 1, .reusable = true}, SHIFT(504),
  [1825] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 1),
  [1827] = {.count = 1, .reusable = true}, SHIFT(477),
  [1829] = {.count = 1, .reusable = true}, SHIFT(449),
  [1831] = {.count = 1, .reusable = true}, SHIFT(448),
  [1833] = {.count = 1, .reusable = true}, SHIFT(248),
  [1835] = {.count = 1, .reusable = true}, SHIFT(252),
  [1837] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes_block, 2),
  [1839] = {.count = 1, .reusable = true}, REDUCE(sym__guiTypes, 3),
  [1841] = {.count = 1, .reusable = true}, SHIFT(417),
  [1843] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_diffuse, 1),
  [1845] = {.count = 1, .reusable = true}, SHIFT(450),
  [1847] = {.count = 1, .reusable = true}, SHIFT(132),
  [1849] = {.count = 1, .reusable = true}, SHIFT(491),
  [1851] = {.count = 1, .reusable = true}, SHIFT(243),
  [1853] = {.count = 1, .reusable = true}, SHIFT(294),
  [1855] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 3),
  [1857] = {.count = 1, .reusable = true}, SHIFT(247),
  [1859] = {.count = 1, .reusable = true}, SHIFT(102),
  [1861] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 3),
  [1863] = {.count = 1, .reusable = true}, REDUCE(sym__windowType, 3),
  [1865] = {.count = 1, .reusable = true}, SHIFT(43),
  [1867] = {.count = 1, .reusable = true}, SHIFT(10),
  [1869] = {.count = 1, .reusable = true}, SHIFT(365),
  [1871] = {.count = 1, .reusable = true}, SHIFT(468),
  [1873] = {.count = 1, .reusable = true}, SHIFT(469),
  [1875] = {.count = 1, .reusable = true}, SHIFT(48),
  [1877] = {.count = 1, .reusable = true}, SHIFT(32),
  [1879] = {.count = 1, .reusable = true}, SHIFT(36),
  [1881] = {.count = 1, .reusable = true}, SHIFT(4),
  [1883] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 3),
  [1885] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_index, 1),
  [1887] = {.count = 1, .reusable = true}, SHIFT(430),
  [1889] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 1),
  [1891] = {.count = 1, .reusable = true}, SHIFT(475),
  [1893] = {.count = 1, .reusable = true}, SHIFT(503),
  [1895] = {.count = 1, .reusable = true}, SHIFT(147),
  [1897] = {.count = 1, .reusable = true}, SHIFT(88),
  [1899] = {.count = 1, .reusable = true}, SHIFT(242),
  [1901] = {.count = 1, .reusable = true}, SHIFT(480),
  [1903] = {.count = 1, .reusable = true}, SHIFT(53),
  [1905] = {.count = 1, .reusable = true}, SHIFT(179),
  [1907] = {.count = 1, .reusable = true}, SHIFT(223),
  [1909] = {.count = 1, .reusable = true}, SHIFT(309),
  [1911] = {.count = 1, .reusable = true}, SHIFT(225),
  [1913] = {.count = 1, .reusable = true}, SHIFT(231),
  [1915] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_integer, 2),
  [1917] = {.count = 1, .reusable = true}, SHIFT(275),
  [1919] = {.count = 1, .reusable = true}, SHIFT(507),
  [1921] = {.count = 1, .reusable = true}, SHIFT(433),
  [1923] = {.count = 1, .reusable = true}, SHIFT(285),
  [1925] = {.count = 1, .reusable = true}, SHIFT(436),
  [1927] = {.count = 1, .reusable = true}, SHIFT(341),
  [1929] = {.count = 1, .reusable = true}, SHIFT(198),
  [1931] = {.count = 1, .reusable = true}, SHIFT(175),
  [1933] = {.count = 1, .reusable = true}, SHIFT(256),
  [1935] = {.count = 1, .reusable = true}, SHIFT(283),
  [1937] = {.count = 1, .reusable = true}, SHIFT(391),
  [1939] = {.count = 1, .reusable = true}, SHIFT(255),
  [1941] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 3),
  [1943] = {.count = 1, .reusable = true}, SHIFT(490),
  [1945] = {.count = 1, .reusable = true}, SHIFT(488),
  [1947] = {.count = 1, .reusable = true}, SHIFT(474),
  [1949] = {.count = 1, .reusable = true}, SHIFT(254),
  [1951] = {.count = 1, .reusable = true}, SHIFT(130),
  [1953] = {.count = 1, .reusable = true}, SHIFT(107),
  [1955] = {.count = 1, .reusable = true}, SHIFT(328),
  [1957] = {.count = 1, .reusable = true}, SHIFT(121),
  [1959] = {.count = 1, .reusable = true}, SHIFT(122),
  [1961] = {.count = 1, .reusable = true}, SHIFT(233),
  [1963] = {.count = 1, .reusable = true}, SHIFT(301),
  [1965] = {.count = 1, .reusable = true}, SHIFT(390),
  [1967] = {.count = 1, .reusable = true}, SHIFT(454),
  [1969] = {.count = 1, .reusable = true}, SHIFT(502),
  [1971] = {.count = 1, .reusable = true}, SHIFT(241),
  [1973] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 3),
  [1975] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_index, 3),
  [1977] = {.count = 1, .reusable = true}, SHIFT(313),
  [1979] = {.count = 1, .reusable = true}, SHIFT(261),
  [1981] = {.count = 1, .reusable = true}, SHIFT(237),
  [1983] = {.count = 1, .reusable = true}, SHIFT(397),
  [1985] = {.count = 1, .reusable = true}, SHIFT(399),
  [1987] = {.count = 1, .reusable = true}, SHIFT(398),
  [1989] = {.count = 1, .reusable = true}, SHIFT(262),
  [1991] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_float, 2),
  [1993] = {.count = 1, .reusable = true}, SHIFT(161),
  [1995] = {.count = 1, .reusable = true}, SHIFT(61),
  [1997] = {.count = 1, .reusable = true}, SHIFT(515),
  [1999] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_diffuse, 3),
  [2001] = {.count = 1, .reusable = true}, SHIFT(509),
  [2003] = {.count = 1, .reusable = true}, SHIFT(16),
  [2005] = {.count = 1, .reusable = true}, SHIFT(12),
  [2007] = {.count = 1, .reusable = true}, SHIFT(487),
  [2009] = {.count = 1, .reusable = true}, SHIFT(79),
  [2011] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_normal, 3),
  [2013] = {.count = 1, .reusable = true}, SHIFT(513),
  [2015] = {.count = 1, .reusable = true}, SHIFT(77),
  [2017] = {.count = 1, .reusable = true}, SHIFT(307),
  [2019] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_specular, 3),
  [2021] = {.count = 1, .reusable = true}, SHIFT(517),
  [2023] = {.count = 1, .reusable = true}, SHIFT(72),
  [2025] = {.count = 1, .reusable = true}, SHIFT(267),
  [2027] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader, 3),
  [2029] = {.count = 1, .reusable = true}, SHIFT(520),
  [2031] = {.count = 1, .reusable = true}, SHIFT(395),
  [2033] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader_file, 3),
  [2035] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [2037] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [2039] = {.count = 1, .reusable = true}, SHIFT(93),
  [2041] = {.count = 1, .reusable = true}, SHIFT(56),
  [2043] = {.count = 1, .reusable = true}, SHIFT(143),
  [2045] = {.count = 1, .reusable = true}, SHIFT(142),
  [2047] = {.count = 1, .reusable = true}, SHIFT(145),
  [2049] = {.count = 1, .reusable = true}, SHIFT(229),
  [2051] = {.count = 1, .reusable = true}, SHIFT(246),
  [2053] = {.count = 1, .reusable = true}, SHIFT(306),
  [2055] = {.count = 1, .reusable = true}, SHIFT(302),
  [2057] = {.count = 1, .reusable = true}, SHIFT(299),
  [2059] = {.count = 1, .reusable = true}, SHIFT(158),
  [2061] = {.count = 1, .reusable = true}, SHIFT(160),
  [2063] = {.count = 1, .reusable = true}, SHIFT(375),
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
