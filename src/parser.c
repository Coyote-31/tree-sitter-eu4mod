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
#define STATE_COUNT 491
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 331
#define ALIAS_COUNT 4
#define TOKEN_COUNT 171
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11

enum {
  anon_sym_spriteTypes = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_objectTypes = 4,
  anon_sym_bitmapfonts = 5,
  anon_sym_spriteType = 6,
  anon_sym_textSpriteType = 7,
  anon_sym_corneredTileSpriteType = 8,
  anon_sym_maskedShieldType = 9,
  anon_sym_animatedmaptext = 10,
  anon_sym_textcolors = 11,
  anon_sym_bitmapfont = 12,
  anon_sym_frameAnimatedSpriteType = 13,
  anon_sym_progressbartype = 14,
  anon_sym_pdxmesh = 15,
  anon_sym_pdxparticle = 16,
  anon_sym_arrowType = 17,
  anon_sym_tradeRouteType = 18,
  anon_sym_PieChartType = 19,
  anon_sym_LineChartType = 20,
  anon_sym_name = 21,
  anon_sym_x = 22,
  anon_sym_y = 23,
  anon_sym_path = 24,
  anon_sym_archive = 25,
  aux_sym__statement_mod_archive_token1 = 26,
  anon_sym_remote_file_id = 27,
  aux_sym__statement_mod_remote_file_id_token1 = 28,
  anon_sym_version = 29,
  aux_sym__statement_mod_version_token1 = 30,
  anon_sym_picture = 31,
  aux_sym__statement_mod_picture_token1 = 32,
  anon_sym_supported_version = 33,
  aux_sym__statement_mod_supported_version_token1 = 34,
  anon_sym_replace_path = 35,
  aux_sym__mod_replace_path_folder_token1 = 36,
  anon_sym_tags = 37,
  aux_sym__mod_tags_keyword_token1 = 38,
  aux_sym__mod_tags_keyword_token2 = 39,
  aux_sym__mod_tags_keyword_token3 = 40,
  aux_sym__mod_tags_keyword_token4 = 41,
  aux_sym__mod_tags_keyword_token5 = 42,
  aux_sym__mod_tags_keyword_token6 = 43,
  aux_sym__mod_tags_keyword_token7 = 44,
  aux_sym__mod_tags_keyword_token8 = 45,
  aux_sym__mod_tags_keyword_token9 = 46,
  aux_sym__mod_tags_keyword_token10 = 47,
  aux_sym__mod_tags_keyword_token11 = 48,
  aux_sym__mod_tags_keyword_token12 = 49,
  aux_sym__mod_tags_keyword_token13 = 50,
  aux_sym__mod_tags_keyword_token14 = 51,
  aux_sym__mod_tags_keyword_token15 = 52,
  aux_sym__mod_tags_keyword_token16 = 53,
  aux_sym__mod_tags_keyword_token17 = 54,
  aux_sym__mod_tags_keyword_token18 = 55,
  aux_sym__mod_tags_keyword_token19 = 56,
  aux_sym__mod_tags_keyword_token20 = 57,
  aux_sym__mod_tags_keyword_token21 = 58,
  aux_sym__mod_tags_keyword_token22 = 59,
  anon_sym_dependencies = 60,
  aux_sym__statement_gfx_name_token1 = 61,
  aux_sym__statement_gfx_name_token2 = 62,
  anon_sym_cursor_offset = 63,
  aux_sym__statement_gfx_textureFile_token1 = 64,
  aux_sym__statement_gfx_textureFile_token2 = 65,
  aux_sym__statement_gfx_textureFile1_token1 = 66,
  aux_sym__statement_gfx_textureFile2_token1 = 67,
  aux_sym__statement_gfx_textureFile3_token1 = 68,
  anon_sym_SEMI = 69,
  anon_sym_noOfFrames = 70,
  anon_sym_overlay_frames_per_row = 71,
  anon_sym_overlay_rows = 72,
  anon_sym_effectFile = 73,
  aux_sym__statement_gfx_effectFile_token1 = 74,
  anon_sym_animation = 75,
  anon_sym_animationmaskfile = 76,
  anon_sym_animationtexturefile = 77,
  aux_sym__animation_entry_dds_token1 = 78,
  anon_sym_animationrotation = 79,
  anon_sym_animationlooping = 80,
  anon_sym_animationtime = 81,
  anon_sym_animationdelay = 82,
  anon_sym_animationrotationoffset = 83,
  anon_sym_animationtexturescale = 84,
  anon_sym_animationblendmode = 85,
  anon_sym_DQUOTEadd_DQUOTE = 86,
  anon_sym_DQUOTEmultiply_DQUOTE = 87,
  anon_sym_DQUOTEoverlay_DQUOTE = 88,
  anon_sym_animationtype = 89,
  anon_sym_DQUOTEscrolling_DQUOTE = 90,
  anon_sym_DQUOTErotating_DQUOTE = 91,
  anon_sym_DQUOTEpulsing_DQUOTE = 92,
  anon_sym_animationframes = 93,
  anon_sym_size = 94,
  anon_sym_borderSize = 95,
  anon_sym_alwaystransparent = 96,
  anon_sym_allwaystransparent = 97,
  anon_sym_legacy_lazy_load = 98,
  anon_sym_clicksound = 99,
  anon_sym_click = 100,
  anon_sym_speed = 101,
  anon_sym_textblock = 102,
  anon_sym_text = 103,
  anon_sym_color = 104,
  anon_sym_colortwo = 105,
  anon_sym_font = 106,
  anon_sym_position = 107,
  anon_sym_format = 108,
  anon_sym_centre = 109,
  anon_sym_cull_distance = 110,
  anon_sym_B = 111,
  anon_sym_b = 112,
  anon_sym_G = 113,
  anon_sym_H = 114,
  anon_sym_l = 115,
  anon_sym_M = 116,
  anon_sym_O = 117,
  anon_sym_g = 118,
  anon_sym_R = 119,
  anon_sym_T = 120,
  anon_sym_W = 121,
  anon_sym_Y = 122,
  anon_sym_border_color = 123,
  anon_sym_animation_rate_fps = 124,
  anon_sym_looping = 125,
  anon_sym_play_on_show = 126,
  anon_sym_pause_on_loop = 127,
  anon_sym_horizontal = 128,
  anon_sym_file = 129,
  aux_sym__statement_gfx_file_token1 = 130,
  anon_sym_id = 131,
  anon_sym_type = 132,
  anon_sym_meshsettings = 133,
  anon_sym_index = 134,
  anon_sym_texture_diffuse = 135,
  anon_sym_texture_normal = 136,
  anon_sym_texture_specular = 137,
  anon_sym_shader = 138,
  aux_sym__statement_gfx_meshsettings_shader_token1 = 139,
  anon_sym_shader_file = 140,
  aux_sym__statement_gfx_meshsettings_shader_file_token1 = 141,
  anon_sym_scale = 142,
  anon_sym_transparencecheck = 143,
  anon_sym_loadType = 144,
  anon_sym_DQUOTEINGAME_DQUOTE = 145,
  anon_sym_DQUOTEFRONTEND_DQUOTE = 146,
  anon_sym_norefcount = 147,
  anon_sym_texture = 148,
  anon_sym_normal = 149,
  anon_sym_specular = 150,
  anon_sym_effect = 151,
  aux_sym__statement_gfx_effect_token1 = 152,
  anon_sym_alphamaskfile = 153,
  aux_sym__statement_gfx_alphamaskfile_token1 = 154,
  anon_sym_linewidth = 155,
  sym_assign_equal = 156,
  sym_string = 157,
  sym_number = 158,
  sym_float = 159,
  aux_sym__float_positive_token1 = 160,
  sym_integer = 161,
  aux_sym__integer_positive_token1 = 162,
  sym_byte = 163,
  sym_hexadecimal = 164,
  sym_angle = 165,
  anon_sym_true = 166,
  anon_sym_false = 167,
  anon_sym_yes = 168,
  anon_sym_no = 169,
  sym_comment = 170,
  sym_file = 171,
  sym_dot_mod = 172,
  sym_dot_gfx = 173,
  sym__spriteTypes = 174,
  sym__spriteTypes_block = 175,
  sym__spriteTypes_statement = 176,
  sym__spriteTypes_type = 177,
  sym__objectTypes = 178,
  sym__objectTypes_block = 179,
  sym__objectTypes_type = 180,
  sym__bitmapfonts = 181,
  sym__bitmapfonts_block = 182,
  sym__bitmapfonts_type = 183,
  sym__spriteType = 184,
  sym__spriteType_block = 185,
  sym__textSpriteType = 186,
  sym__textSpriteType_block = 187,
  sym__corneredTileSpriteType = 188,
  sym__corneredTileSpriteType_block = 189,
  sym__maskedShieldType = 190,
  sym__maskedShieldType_block = 191,
  sym__animatedmaptext = 192,
  sym__animatedmaptext_block = 193,
  sym__textcolors = 194,
  sym__textcolors_block = 195,
  sym__bitmapfont = 196,
  sym__bitmapfont_block = 197,
  sym__frameAnimatedSpriteType = 198,
  sym__frameAnimatedSpriteType_block = 199,
  sym__progressbartype = 200,
  sym__progressbartype_block = 201,
  sym__pdxmesh = 202,
  sym__pdxmesh_block = 203,
  sym__pdxparticle = 204,
  sym__pdxparticle_block = 205,
  sym__arrowType = 206,
  sym__arrowType_block = 207,
  sym__tradeRouteType = 208,
  sym__tradeRouteType_block = 209,
  sym__PieChartType = 210,
  sym__PieChartType_block = 211,
  sym__LineChartType = 212,
  sym__LineChartType_block = 213,
  sym__statement_name = 214,
  sym__statement_xy_integer = 215,
  sym__entry_x_integer = 216,
  sym__entry_y_integer = 217,
  sym__statement_xy_float = 218,
  sym__entry_x_float = 219,
  sym__entry_y_float = 220,
  sym__statement_mod_path = 221,
  sym__statement_mod_archive = 222,
  sym__statement_mod_remote_file_id = 223,
  sym__statement_mod_version = 224,
  sym__statement_mod_picture = 225,
  sym__statement_mod_supported_version = 226,
  sym__statement_mod_replace_path = 227,
  sym__mod_replace_path_folder = 228,
  sym__statement_mod_tags = 229,
  sym__mod_tags_block = 230,
  sym__mod_tags_keyword = 231,
  sym__statement_mod_dependencies = 232,
  sym__mod_dependencies_block = 233,
  sym__statement_gfx_name = 234,
  sym__statement_gfx_path = 235,
  sym__statement_gfx_cursor_offset = 236,
  sym__statement_gfx_textureFile = 237,
  sym__statement_gfx_textureFile1 = 238,
  sym__statement_gfx_textureFile2 = 239,
  sym__statement_gfx_textureFile3 = 240,
  sym__statement_gfx_noOfFrames = 241,
  sym__statement_gfx_overlay_frames_per_row = 242,
  sym__statement_gfx_overlay_rows = 243,
  sym__statement_gfx_effectFile = 244,
  sym__statement_gfx_animation = 245,
  sym__gfx_animation_block = 246,
  sym__animation_entry_dds = 247,
  sym__animation_entry_angle = 248,
  sym__animation_entry_bool = 249,
  sym__animation_entry_time = 250,
  sym__animation_entry_xy_float = 251,
  sym__animation_entry_blendmode = 252,
  sym__animation_entry_type = 253,
  sym__animation_entry_frames = 254,
  sym__statement_gfx_size_xy = 255,
  sym__statement_gfx_size_integer = 256,
  sym__statement_gfx_borderSize = 257,
  sym__statement_gfx_alwaystransparent = 258,
  sym__statement_gfx_allwaystransparent = 259,
  sym__statement_gfx_legacy_lazy_load = 260,
  sym__statement_gfx_clicksound = 261,
  sym__statement_gfx_speed = 262,
  sym__statement_gfx_textblock = 263,
  sym__gfx_textblock = 264,
  sym__statement_gfx_text = 265,
  sym__statement_gfx_color = 266,
  sym__statement_gfx_colortwo = 267,
  sym__statement_gfx_font = 268,
  sym__statement_gfx_position = 269,
  sym__statement_gfx_format = 270,
  sym__statement_gfx_cull_distance = 271,
  sym__statement_gfx_textcolors = 272,
  sym__statement_gfx_bitmapfont_color = 273,
  sym__statement_gfx_bitmapfont_border_color = 274,
  sym__statement_gfx_animation_rate_fps = 275,
  sym__statement_gfx_looping = 276,
  sym__statement_gfx_play_on_show = 277,
  sym__statement_gfx_pause_on_loop = 278,
  sym__statement_gfx_horizontal = 279,
  sym__statement_gfx_file = 280,
  sym__statement_gfx_pdxmesh_animation = 281,
  sym__statement_gfx_animation_id = 282,
  sym__statement_gfx_animation_type = 283,
  sym__statement_gfx_pdxmesh_meshsettings = 284,
  sym__statement_gfx_meshsettings_index = 285,
  sym__statement_gfx_meshsettings_texture_diffuse = 286,
  sym__statement_gfx_meshsettings_texture_normal = 287,
  sym__statement_gfx_meshsettings_texture_specular = 288,
  sym__statement_gfx_meshsettings_shader = 289,
  sym__statement_gfx_meshsettings_shader_file = 290,
  sym__statement_gfx_scale = 291,
  sym__statement_gfx_transparencecheck = 292,
  sym__statement_gfx_loadType = 293,
  sym__statement_gfx_norefcount = 294,
  sym__statement_gfx_texture = 295,
  sym__statement_gfx_normal = 296,
  sym__statement_gfx_specular = 297,
  sym__statement_gfx_effect = 298,
  sym__statement_gfx_effect_bool = 299,
  sym__statement_gfx_alphamaskfile = 300,
  sym__statement_gfx_linewidth = 301,
  sym__statement_gfx_type = 302,
  sym__float_positive = 303,
  sym__integer_positive = 304,
  sym__boolean_yes_no = 305,
  aux_sym_dot_mod_repeat1 = 306,
  aux_sym_dot_gfx_repeat1 = 307,
  aux_sym__spriteTypes_block_repeat1 = 308,
  aux_sym__objectTypes_block_repeat1 = 309,
  aux_sym__bitmapfonts_block_repeat1 = 310,
  aux_sym__spriteType_block_repeat1 = 311,
  aux_sym__textSpriteType_block_repeat1 = 312,
  aux_sym__corneredTileSpriteType_block_repeat1 = 313,
  aux_sym__maskedShieldType_block_repeat1 = 314,
  aux_sym__animatedmaptext_block_repeat1 = 315,
  aux_sym__textcolors_block_repeat1 = 316,
  aux_sym__bitmapfont_block_repeat1 = 317,
  aux_sym__frameAnimatedSpriteType_block_repeat1 = 318,
  aux_sym__progressbartype_block_repeat1 = 319,
  aux_sym__pdxmesh_block_repeat1 = 320,
  aux_sym__pdxparticle_block_repeat1 = 321,
  aux_sym__arrowType_block_repeat1 = 322,
  aux_sym__tradeRouteType_block_repeat1 = 323,
  aux_sym__PieChartType_block_repeat1 = 324,
  aux_sym__LineChartType_block_repeat1 = 325,
  aux_sym__mod_tags_block_repeat1 = 326,
  aux_sym__mod_dependencies_block_repeat1 = 327,
  aux_sym__gfx_animation_block_repeat1 = 328,
  aux_sym__animation_entry_frames_repeat1 = 329,
  aux_sym__gfx_textblock_repeat1 = 330,
  alias_sym_dependencies = 331,
  alias_sym_name_value = 332,
  alias_sym_statement = 333,
  alias_sym_type_definition = 334,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_spriteTypes] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_objectTypes] = "identifier",
  [anon_sym_bitmapfonts] = "identifier",
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
  [sym_comment] = "comment",
  [sym_file] = "file",
  [sym_dot_mod] = "dot_mod",
  [sym_dot_gfx] = "dot_gfx",
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
  [sym__float_positive] = "_float_positive",
  [sym__integer_positive] = "_integer_positive",
  [sym__boolean_yes_no] = "_boolean_yes_no",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_dot_gfx_repeat1] = "dot_gfx_repeat1",
  [aux_sym__spriteTypes_block_repeat1] = "_spriteTypes_block_repeat1",
  [aux_sym__objectTypes_block_repeat1] = "_objectTypes_block_repeat1",
  [aux_sym__bitmapfonts_block_repeat1] = "_bitmapfonts_block_repeat1",
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
  [sym_comment] = sym_comment,
  [sym_file] = sym_file,
  [sym_dot_mod] = sym_dot_mod,
  [sym_dot_gfx] = sym_dot_gfx,
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
  [sym__statement_gfx_path] = sym__statement_gfx_path,
  [sym__statement_gfx_cursor_offset] = sym__statement_gfx_path,
  [sym__statement_gfx_textureFile] = sym__statement_gfx_path,
  [sym__statement_gfx_textureFile1] = sym__statement_gfx_path,
  [sym__statement_gfx_textureFile2] = sym__statement_gfx_path,
  [sym__statement_gfx_textureFile3] = sym__statement_gfx_path,
  [sym__statement_gfx_noOfFrames] = sym__statement_gfx_path,
  [sym__statement_gfx_overlay_frames_per_row] = sym__statement_gfx_path,
  [sym__statement_gfx_overlay_rows] = sym__statement_gfx_path,
  [sym__statement_gfx_effectFile] = sym__statement_gfx_path,
  [sym__statement_gfx_animation] = sym__statement_gfx_path,
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
  [sym__statement_gfx_size_integer] = sym__statement_gfx_path,
  [sym__statement_gfx_borderSize] = sym__statement_gfx_path,
  [sym__statement_gfx_alwaystransparent] = sym__statement_gfx_path,
  [sym__statement_gfx_allwaystransparent] = sym__statement_gfx_path,
  [sym__statement_gfx_legacy_lazy_load] = sym__statement_gfx_path,
  [sym__statement_gfx_clicksound] = sym__statement_gfx_path,
  [sym__statement_gfx_speed] = sym__statement_gfx_path,
  [sym__statement_gfx_textblock] = sym__statement_gfx_path,
  [sym__gfx_textblock] = sym__gfx_textblock,
  [sym__statement_gfx_text] = sym__statement_gfx_text,
  [sym__statement_gfx_color] = sym__statement_gfx_color,
  [sym__statement_gfx_colortwo] = sym__statement_gfx_path,
  [sym__statement_gfx_font] = sym__statement_gfx_font,
  [sym__statement_gfx_position] = sym__statement_gfx_position,
  [sym__statement_gfx_format] = sym__statement_gfx_format,
  [sym__statement_gfx_cull_distance] = sym__statement_gfx_cull_distance,
  [sym__statement_gfx_textcolors] = sym__statement_gfx_path,
  [sym__statement_gfx_bitmapfont_color] = sym__statement_gfx_path,
  [sym__statement_gfx_bitmapfont_border_color] = sym__statement_gfx_path,
  [sym__statement_gfx_animation_rate_fps] = sym__statement_gfx_path,
  [sym__statement_gfx_looping] = sym__statement_gfx_path,
  [sym__statement_gfx_play_on_show] = sym__statement_gfx_path,
  [sym__statement_gfx_pause_on_loop] = sym__statement_gfx_path,
  [sym__statement_gfx_horizontal] = sym__statement_gfx_path,
  [sym__statement_gfx_file] = sym__statement_gfx_path,
  [sym__statement_gfx_pdxmesh_animation] = sym__statement_gfx_path,
  [sym__statement_gfx_animation_id] = sym__statement_gfx_animation_id,
  [sym__statement_gfx_animation_type] = sym__statement_gfx_animation_type,
  [sym__statement_gfx_pdxmesh_meshsettings] = sym__statement_gfx_path,
  [sym__statement_gfx_meshsettings_index] = sym__statement_gfx_meshsettings_index,
  [sym__statement_gfx_meshsettings_texture_diffuse] = sym__statement_gfx_meshsettings_texture_diffuse,
  [sym__statement_gfx_meshsettings_texture_normal] = sym__statement_gfx_meshsettings_texture_normal,
  [sym__statement_gfx_meshsettings_texture_specular] = sym__statement_gfx_meshsettings_texture_specular,
  [sym__statement_gfx_meshsettings_shader] = sym__statement_gfx_meshsettings_shader,
  [sym__statement_gfx_meshsettings_shader_file] = sym__statement_gfx_meshsettings_shader_file,
  [sym__statement_gfx_scale] = sym__statement_gfx_path,
  [sym__statement_gfx_transparencecheck] = sym__statement_gfx_path,
  [sym__statement_gfx_loadType] = sym__statement_gfx_path,
  [sym__statement_gfx_norefcount] = sym__statement_gfx_path,
  [sym__statement_gfx_texture] = sym__statement_gfx_path,
  [sym__statement_gfx_normal] = sym__statement_gfx_path,
  [sym__statement_gfx_specular] = sym__statement_gfx_path,
  [sym__statement_gfx_effect] = sym__statement_gfx_path,
  [sym__statement_gfx_effect_bool] = sym__statement_gfx_path,
  [sym__statement_gfx_alphamaskfile] = sym__statement_gfx_path,
  [sym__statement_gfx_linewidth] = sym__statement_gfx_path,
  [sym__statement_gfx_type] = sym__statement_gfx_path,
  [sym__float_positive] = sym__float_positive,
  [sym__integer_positive] = sym__integer_positive,
  [sym__boolean_yes_no] = sym__boolean_yes_no,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_dot_gfx_repeat1] = aux_sym_dot_gfx_repeat1,
  [aux_sym__spriteTypes_block_repeat1] = aux_sym__spriteTypes_block_repeat1,
  [aux_sym__objectTypes_block_repeat1] = aux_sym__objectTypes_block_repeat1,
  [aux_sym__bitmapfonts_block_repeat1] = aux_sym__bitmapfonts_block_repeat1,
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
  [sym_comment] = {
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
  [aux_sym_dot_mod_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dot_gfx_repeat1] = {
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
      if (eof) ADVANCE(1753);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '-') ADVANCE(1732);
      if (lookahead == '0') ADVANCE(1931);
      if (lookahead == '1') ADVANCE(1931);
      if (lookahead == '2') ADVANCE(1929);
      if (lookahead == ';') ADVANCE(1826);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == 'B') ADVANCE(1874);
      if (lookahead == 'G') ADVANCE(1877);
      if (lookahead == 'H') ADVANCE(1878);
      if (lookahead == 'L') ADVANCE(1201);
      if (lookahead == 'M') ADVANCE(1881);
      if (lookahead == 'O') ADVANCE(1882);
      if (lookahead == 'P') ADVANCE(1210);
      if (lookahead == 'R') ADVANCE(1884);
      if (lookahead == 'T') ADVANCE(1885);
      if (lookahead == 'W') ADVANCE(1886);
      if (lookahead == 'Y') ADVANCE(1887);
      if (lookahead == '\\') SKIP(1749)
      if (lookahead == 'a') ADVANCE(1270);
      if (lookahead == 'b') ADVANCE(1876);
      if (lookahead == 'c') ADVANCE(1073);
      if (lookahead == 'd') ADVANCE(1018);
      if (lookahead == 'e') ADVANCE(1158);
      if (lookahead == 'f') ADVANCE(883);
      if (lookahead == 'g') ADVANCE(1883);
      if (lookahead == 'h') ADVANCE(1391);
      if (lookahead == 'i') ADVANCE(992);
      if (lookahead == 'l') ADVANCE(1880);
      if (lookahead == 'm') ADVANCE(885);
      if (lookahead == 'n') ADVANCE(887);
      if (lookahead == 'o') ADVANCE(956);
      if (lookahead == 'p') ADVANCE(893);
      if (lookahead == 'r') ADVANCE(1022);
      if (lookahead == 's') ADVANCE(964);
      if (lookahead == 't') ADVANCE(899);
      if (lookahead == 'v') ADVANCE(1078);
      if (lookahead == 'x') ADVANCE(1777);
      if (lookahead == 'y') ADVANCE(1779);
      if (lookahead == '{') ADVANCE(1755);
      if (lookahead == '}') ADVANCE(1756);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1931);
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
      if (lookahead == '\n') SKIP(535)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(535)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(536)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(536)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(537)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(537)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(538)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(538)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(539)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(539)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(543)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(543)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(540)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(540)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(541)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(541)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(542)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(542)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(544)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(544)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(545)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(545)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(546)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(546)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(385);
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(323);
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(808);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(809);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(803);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(807);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(805);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(806);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(804);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(550);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(442);
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(443);
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1784);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == 'A') ADVANCE(182);
      if (lookahead == 'C') ADVANCE(229);
      if (lookahead == 'E') ADVANCE(303);
      if (lookahead == 'F') ADVANCE(61);
      if (lookahead == 'G') ADVANCE(53);
      if (lookahead == 'H') ADVANCE(152);
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(70);
      if (lookahead == 'P') ADVANCE(101);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'g') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(71);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1784);
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1784);
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 'A') ADVANCE(679);
      if (lookahead == 'F') ADVANCE(564);
      if (lookahead == 'I') ADVANCE(560);
      if (lookahead == 'M') ADVANCE(571);
      if (lookahead == 'P') ADVANCE(600);
      if (lookahead == 'R') ADVANCE(617);
      if (lookahead == 'S') ADVANCE(719);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 'f') ADVANCE(651);
      if (lookahead == 'm') ADVANCE(570);
      if (lookahead == 'o') ADVANCE(791);
      if (lookahead == 'p') ADVANCE(788);
      if (lookahead == 'r') ADVANCE(616);
      if (lookahead == 's') ADVANCE(592);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(572);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(720);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(792);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(567);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(652);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(722);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1784);
      if (lookahead == '.') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '*') ADVANCE(470);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'j') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(203);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'z') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '*') ADVANCE(469);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'j') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(203);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'z') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'D') ADVANCE(492);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(482);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'F') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'G') ADVANCE(49);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(52);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(133);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(292);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'X') ADVANCE(65);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '_') ADVANCE(316);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'j') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(203);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'z') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'j') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(203);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'z') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'j') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(203);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'z') ADVANCE(156);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(392);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(464);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(26);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(450);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(66);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(488);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(504);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(508);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(171);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'h') ADVANCE(316);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'h') ADVANCE(209);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'h') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'y') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'j') ADVANCE(245);
      if (lookahead == 'p') ADVANCE(203);
      if (lookahead == 'z') ADVANCE(156);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(506);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(390);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(455);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(460);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(510);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'v') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(248);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'v') ADVANCE(118);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'v') ADVANCE(124);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'v') ADVANCE(126);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'v') ADVANCE(134);
      if (lookahead == 'x') ADVANCE(248);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(123);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'y') ADVANCE(486);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'y') ADVANCE(494);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'y') ADVANCE(498);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'y') ADVANCE(502);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == 'F') ADVANCE(319);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == 'G') ADVANCE(317);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == 'X') ADVANCE(320);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(1817);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '*') ADVANCE(469);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead == 'j') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == 'z') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'C') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'I') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'I') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'K') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 330:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead == 'j') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == 'z') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'g') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'g') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'h') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'h') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 's') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 's') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'y') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(1927);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(389);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(1804);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(1804);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(1845);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(1845);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 396:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'd') ADVANCE(397);
      if (lookahead == 'j') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == 'z') ADVANCE(405);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 397:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 398:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'd') ADVANCE(400);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 399:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 400:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 401:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(394);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 402:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(453);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 403:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 404:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'h') ADVANCE(395);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 405:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 406:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 407:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(402);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 408:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(458);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 409:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 410:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 411:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 412:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(394);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 413:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 414:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 415:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 416:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'c') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 417:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 418:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(419);
      if (lookahead == 'j') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead == 'm') ADVANCE(423);
      if (lookahead == 'p') ADVANCE(432);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == 'z') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 419:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 420:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 421:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 422:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 423:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 424:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'g') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 425:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'g') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 426:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'h') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 427:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'h') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 428:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 429:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 430:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 431:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 432:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'n') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 433:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 434:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 435:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'p') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 436:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'p') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 437:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 438:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 439:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 440:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 441:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'u') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 442:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 443:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 445:
      if (lookahead == '"') ADVANCE(1792);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(445);
      END_STATE();
    case 446:
      if (lookahead == '"') ADVANCE(1786);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 447:
      if (lookahead == '"') ADVANCE(1786);
      if (lookahead == '.') ADVANCE(1736);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 448:
      if (lookahead == '"') ADVANCE(1786);
      if (lookahead == '.') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 449:
      if (lookahead == '"') ADVANCE(1786);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 450:
      if (lookahead == '"') ADVANCE(1788);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 451:
      if (lookahead == '"') ADVANCE(1788);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 452:
      if (lookahead == '"') ADVANCE(1788);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 453:
      if (lookahead == '"') ADVANCE(1788);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 454:
      if (lookahead == '"') ADVANCE(1788);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 455:
      if (lookahead == '"') ADVANCE(1782);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 456:
      if (lookahead == '"') ADVANCE(1782);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 457:
      if (lookahead == '"') ADVANCE(1782);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 458:
      if (lookahead == '"') ADVANCE(1782);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 459:
      if (lookahead == '"') ADVANCE(1782);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(444);
      END_STATE();
    case 460:
      if (lookahead == '"') ADVANCE(1798);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 461:
      if (lookahead == '"') ADVANCE(1798);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 462:
      if (lookahead == '"') ADVANCE(1801);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 463:
      if (lookahead == '"') ADVANCE(1801);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 464:
      if (lookahead == '"') ADVANCE(1810);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 465:
      if (lookahead == '"') ADVANCE(1810);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 466:
      if (lookahead == '"') ADVANCE(1812);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 467:
      if (lookahead == '"') ADVANCE(1812);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 468:
      if (lookahead == '"') ADVANCE(1790);
      if (lookahead == '.') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 469:
      if (lookahead == '"') ADVANCE(1790);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 470:
      if (lookahead == '"') ADVANCE(1790);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 471:
      if (lookahead == '"') ADVANCE(1790);
      if (lookahead == '.') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 472:
      if (lookahead == '"') ADVANCE(1790);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 473:
      if (lookahead == '"') ADVANCE(1790);
      if (lookahead == '.') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 474:
      if (lookahead == '"') ADVANCE(1790);
      if (lookahead == '.') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 475:
      if (lookahead == '"') ADVANCE(1790);
      if (lookahead == '.') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 476:
      if (lookahead == '"') ADVANCE(1822);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 477:
      if (lookahead == '"') ADVANCE(1822);
      if (lookahead == '.') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(823);
      END_STATE();
    case 478:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 479:
      if (lookahead == '"') ADVANCE(1831);
      if (lookahead == '.') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(823);
      END_STATE();
    case 480:
      if (lookahead == '"') ADVANCE(1796);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 481:
      if (lookahead == '"') ADVANCE(1796);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 482:
      if (lookahead == '"') ADVANCE(1911);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 483:
      if (lookahead == '"') ADVANCE(1911);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 484:
      if (lookahead == '"') ADVANCE(1895);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 485:
      if (lookahead == '"') ADVANCE(1895);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 486:
      if (lookahead == '"') ADVANCE(1847);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 487:
      if (lookahead == '"') ADVANCE(1847);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 488:
      if (lookahead == '"') ADVANCE(1851);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 489:
      if (lookahead == '"') ADVANCE(1851);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 490:
      if (lookahead == '"') ADVANCE(1795);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 491:
      if (lookahead == '"') ADVANCE(1795);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 492:
      if (lookahead == '"') ADVANCE(1912);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 493:
      if (lookahead == '"') ADVANCE(1912);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 494:
      if (lookahead == '"') ADVANCE(1799);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 495:
      if (lookahead == '"') ADVANCE(1799);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 496:
      if (lookahead == '"') ADVANCE(1800);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 497:
      if (lookahead == '"') ADVANCE(1800);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 498:
      if (lookahead == '"') ADVANCE(1805);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 499:
      if (lookahead == '"') ADVANCE(1805);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 500:
      if (lookahead == '"') ADVANCE(1809);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 501:
      if (lookahead == '"') ADVANCE(1809);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 502:
      if (lookahead == '"') ADVANCE(1846);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 503:
      if (lookahead == '"') ADVANCE(1846);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 504:
      if (lookahead == '"') ADVANCE(1850);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 505:
      if (lookahead == '"') ADVANCE(1850);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 506:
      if (lookahead == '"') ADVANCE(1797);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 507:
      if (lookahead == '"') ADVANCE(1797);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 508:
      if (lookahead == '"') ADVANCE(1849);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 509:
      if (lookahead == '"') ADVANCE(1849);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 510:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 511:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 512:
      if (lookahead == '"') ADVANCE(1802);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 513:
      if (lookahead == '"') ADVANCE(1802);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 514:
      if (lookahead == '"') ADVANCE(1808);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 515:
      if (lookahead == '"') ADVANCE(1808);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 516:
      if (lookahead == '"') ADVANCE(1813);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 517:
      if (lookahead == '"') ADVANCE(1813);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 518:
      if (lookahead == '"') ADVANCE(1811);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 519:
      if (lookahead == '"') ADVANCE(1811);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 520:
      if (lookahead == '"') ADVANCE(1803);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 521:
      if (lookahead == '"') ADVANCE(1803);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 522:
      if (lookahead == '"') ADVANCE(1807);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 523:
      if (lookahead == '"') ADVANCE(1807);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 524:
      if (lookahead == '"') ADVANCE(1794);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 525:
      if (lookahead == '"') ADVANCE(1794);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 526:
      if (lookahead == '"') ADVANCE(1815);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 527:
      if (lookahead == '"') ADVANCE(1815);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 528:
      if (lookahead == '"') ADVANCE(1806);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 529:
      if (lookahead == '"') ADVANCE(1806);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 530:
      if (lookahead == '"') ADVANCE(1837);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 531:
      if (lookahead == '"') ADVANCE(1922);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 532:
      if (lookahead == '"') ADVANCE(1924);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 533:
      if (lookahead == '"') ADVANCE(1907);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 534:
      if (lookahead == '"') ADVANCE(1905);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 535:
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == 'L') ADVANCE(1201);
      if (lookahead == 'P') ADVANCE(1210);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(1273);
      if (lookahead == 'b') ADVANCE(1253);
      if (lookahead == 'c') ADVANCE(1310);
      if (lookahead == 'e') ADVANCE(1180);
      if (lookahead == 'f') ADVANCE(1206);
      if (lookahead == 'l') ADVANCE(1021);
      if (lookahead == 'm') ADVANCE(885);
      if (lookahead == 'n') ADVANCE(891);
      if (lookahead == 'o') ADVANCE(1675);
      if (lookahead == 'p') ADVANCE(1493);
      if (lookahead == 's') ADVANCE(966);
      if (lookahead == 't') ADVANCE(1126);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(535)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1937);
      END_STATE();
    case 536:
      if (lookahead == '"') ADVANCE(318);
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '-') ADVANCE(1735);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(1271);
      if (lookahead == 'b') ADVANCE(1444);
      if (lookahead == 'c') ADVANCE(1311);
      if (lookahead == 'e') ADVANCE(1180);
      if (lookahead == 'h') ADVANCE(1391);
      if (lookahead == 'l') ADVANCE(1019);
      if (lookahead == 'n') ADVANCE(891);
      if (lookahead == 'o') ADVANCE(1675);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 's') ADVANCE(1202);
      if (lookahead == 't') ADVANCE(1130);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(536)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1939);
      END_STATE();
    case 537:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '0') ADVANCE(1941);
      if (lookahead == '1') ADVANCE(1945);
      if (lookahead == '2') ADVANCE(1942);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'c') ADVANCE(1321);
      if (lookahead == 'e') ADVANCE(1180);
      if (lookahead == 'l') ADVANCE(1390);
      if (lookahead == 'n') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(1675);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 't') ADVANCE(1153);
      if (lookahead == '}') ADVANCE(1756);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1944);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(537)
      END_STATE();
    case 538:
      if (lookahead == '"') ADVANCE(1747);
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '0') ADVANCE(828);
      if (lookahead == '3') ADVANCE(827);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(1271);
      if (lookahead == 'b') ADVANCE(1444);
      if (lookahead == 'c') ADVANCE(1313);
      if (lookahead == 'e') ADVANCE(1158);
      if (lookahead == 'l') ADVANCE(1020);
      if (lookahead == 'n') ADVANCE(891);
      if (lookahead == 'o') ADVANCE(1675);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 's') ADVANCE(1202);
      if (lookahead == 't') ADVANCE(1154);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(830);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(538)
      END_STATE();
    case 539:
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '-') ADVANCE(1738);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(1271);
      if (lookahead == 'b') ADVANCE(1444);
      if (lookahead == 'c') ADVANCE(1309);
      if (lookahead == 'e') ADVANCE(1180);
      if (lookahead == 'l') ADVANCE(1020);
      if (lookahead == 'n') ADVANCE(891);
      if (lookahead == 'o') ADVANCE(1675);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == 's') ADVANCE(1202);
      if (lookahead == 't') ADVANCE(1153);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(539)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1934);
      END_STATE();
    case 540:
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == ';') ADVANCE(1826);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'c') ADVANCE(1441);
      if (lookahead == 'e') ADVANCE(1158);
      if (lookahead == 'h') ADVANCE(1391);
      if (lookahead == 'l') ADVANCE(1426);
      if (lookahead == 'n') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(1675);
      if (lookahead == 's') ADVANCE(1202);
      if (lookahead == 't') ADVANCE(1130);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(540)
      END_STATE();
    case 541:
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == 'B') ADVANCE(1874);
      if (lookahead == 'G') ADVANCE(1877);
      if (lookahead == 'H') ADVANCE(1878);
      if (lookahead == 'M') ADVANCE(1881);
      if (lookahead == 'O') ADVANCE(1882);
      if (lookahead == 'R') ADVANCE(1884);
      if (lookahead == 'T') ADVANCE(1885);
      if (lookahead == 'W') ADVANCE(1886);
      if (lookahead == 'Y') ADVANCE(1887);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'b') ADVANCE(1875);
      if (lookahead == 'c') ADVANCE(1443);
      if (lookahead == 'e') ADVANCE(1182);
      if (lookahead == 'f') ADVANCE(1205);
      if (lookahead == 'g') ADVANCE(1883);
      if (lookahead == 'l') ADVANCE(1879);
      if (lookahead == 'm') ADVANCE(1074);
      if (lookahead == 'n') ADVANCE(890);
      if (lookahead == 'p') ADVANCE(1394);
      if (lookahead == 's') ADVANCE(967);
      if (lookahead == 't') ADVANCE(1132);
      if (lookahead == 'y') ADVANCE(1084);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(541)
      END_STATE();
    case 542:
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == 'L') ADVANCE(1201);
      if (lookahead == 'P') ADVANCE(1210);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'b') ADVANCE(1254);
      if (lookahead == 'c') ADVANCE(1438);
      if (lookahead == 'e') ADVANCE(1182);
      if (lookahead == 'f') ADVANCE(1484);
      if (lookahead == 'm') ADVANCE(884);
      if (lookahead == 'n') ADVANCE(886);
      if (lookahead == 'p') ADVANCE(923);
      if (lookahead == 's') ADVANCE(1483);
      if (lookahead == 't') ADVANCE(1136);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(542)
      END_STATE();
    case 543:
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'c') ADVANCE(1440);
      if (lookahead == 'e') ADVANCE(1180);
      if (lookahead == 'h') ADVANCE(1391);
      if (lookahead == 'l') ADVANCE(1426);
      if (lookahead == 'n') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(1675);
      if (lookahead == 's') ADVANCE(1202);
      if (lookahead == 't') ADVANCE(1155);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(543)
      END_STATE();
    case 544:
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'c') ADVANCE(1443);
      if (lookahead == 'f') ADVANCE(1388);
      if (lookahead == 'p') ADVANCE(1394);
      if (lookahead == 's') ADVANCE(1202);
      if (lookahead == 't') ADVANCE(1133);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(544)
      END_STATE();
    case 545:
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'e') ADVANCE(1182);
      if (lookahead == 'n') ADVANCE(892);
      if (lookahead == 's') ADVANCE(1479);
      if (lookahead == 't') ADVANCE(1143);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(545)
      END_STATE();
    case 546:
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'c') ADVANCE(1659);
      if (lookahead == 'e') ADVANCE(1182);
      if (lookahead == 'n') ADVANCE(892);
      if (lookahead == 's') ADVANCE(1479);
      if (lookahead == 't') ADVANCE(1146);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(546)
      END_STATE();
    case 547:
      if (lookahead == '*') ADVANCE(475);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(603);
      if (lookahead == 'j') ADVANCE(735);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead == 'm') ADVANCE(622);
      if (lookahead == 'p') ADVANCE(698);
      if (lookahead == 's') ADVANCE(650);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == 'z') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 548:
      if (lookahead == '*') ADVANCE(472);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(603);
      if (lookahead == 'j') ADVANCE(735);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead == 'm') ADVANCE(622);
      if (lookahead == 'p') ADVANCE(698);
      if (lookahead == 's') ADVANCE(650);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == 'z') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 549:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'A') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 550:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'C') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 551:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'D') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 552:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'E') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 553:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'E') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 554:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'G') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 555:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 556:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'I') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 557:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'K') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 558:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'M') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 559:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'M') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 560:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'N') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 561:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'N') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 562:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'N') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 563:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'O') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 564:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'R') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 565:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 566:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'T') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 567:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(695);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead == 'u') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 568:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 569:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 570:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 571:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(739);
      if (lookahead == 'i') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 572:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 573:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 574:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 575:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 576:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 577:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 578:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 579:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 580:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 581:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 582:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 583:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 584:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 585:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(776);
      if (lookahead == 'e') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 586:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 587:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 588:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 589:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 590:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 591:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'a') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 592:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'c') ADVANCE(742);
      if (lookahead == 'o') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 593:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 594:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'c') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 595:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'c') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 596:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'c') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 597:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'c') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 598:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 599:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(609);
      if (lookahead == 'l') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 600:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 601:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(603);
      if (lookahead == 'j') ADVANCE(735);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead == 'm') ADVANCE(622);
      if (lookahead == 'p') ADVANCE(698);
      if (lookahead == 's') ADVANCE(650);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == 'z') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 602:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(603);
      if (lookahead == 'j') ADVANCE(735);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead == 'm') ADVANCE(622);
      if (lookahead == 'p') ADVANCE(698);
      if (lookahead == 's') ADVANCE(650);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == 'z') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 603:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 604:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 605:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 606:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 607:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 608:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 609:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 610:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 611:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 612:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(630);
      if (lookahead == 'n') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 613:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 614:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'd') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 615:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead == 'r') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 616:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == 'o') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 617:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 618:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 619:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 620:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 621:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 622:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 623:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 624:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 625:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 626:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 627:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 628:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 629:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 630:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 631:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 632:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 633:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 634:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 635:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 636:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 637:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 638:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 639:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'g') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 640:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'g') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 641:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'g') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 642:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'g') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 643:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'g') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 644:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 645:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'g') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 646:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 647:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'h') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 648:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'h') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 649:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'h') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 650:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'h') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 651:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 652:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 653:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 654:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 655:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 656:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 657:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 658:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 659:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 660:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 661:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 662:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 663:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 664:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 665:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 666:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 667:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 668:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 669:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 670:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 671:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 672:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 673:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 674:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 675:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 676:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 677:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 678:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'j') ADVANCE(735);
      if (lookahead == 'p') ADVANCE(698);
      if (lookahead == 'z') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 679:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 680:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 681:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 682:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(663);
      if (lookahead == 's') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 683:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 684:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 685:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 686:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 687:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 688:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 689:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 690:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 691:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 692:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 693:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 694:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'l') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 695:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 696:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 697:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 698:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 699:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 700:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 701:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 702:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 703:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 704:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 705:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 706:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 707:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 708:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 709:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 710:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 711:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 712:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 713:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 714:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 715:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 716:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 717:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 718:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'n') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 719:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 720:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 721:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 722:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 723:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 724:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 725:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 726:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 727:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 728:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 729:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 730:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 731:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 732:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 733:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 734:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 735:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'p') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 736:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'p') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 737:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'p') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 738:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'p') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 739:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'p') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 740:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'p') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 741:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'p') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 742:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 743:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 744:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 745:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 746:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 747:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 748:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 749:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 750:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 751:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 752:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 753:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 754:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 755:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 756:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 757:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 758:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 759:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 760:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 761:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 762:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 763:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 764:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 765:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 766:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 767:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 768:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 769:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 770:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 771:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 's') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 772:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 773:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 774:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 775:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 776:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 777:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 778:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 779:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 780:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 781:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 782:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 783:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 784:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 785:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 786:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 787:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 788:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'u') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 789:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'u') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 790:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'u') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 791:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'v') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 792:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'v') ADVANCE(620);
      if (lookahead == 'x') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 793:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'v') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 794:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'v') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 795:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 796:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'x') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 797:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'x') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 798:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'y') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 799:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'y') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 800:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'y') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 801:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'y') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 802:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'y') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 803:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 804:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 805:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 806:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 807:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 808:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 809:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 810:
      if (lookahead == '.') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(810);
      END_STATE();
    case 811:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 812:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 813:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 814:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 'd') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 815:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 'd') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(822);
      if (lookahead == 's') ADVANCE(819);
      if (lookahead == 't') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 816:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 'd') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 817:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 818:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 'g') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 819:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 'h') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 820:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 821:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 822:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == 'u') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 823:
      if (lookahead == '.') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 824:
      if (lookahead == '.') ADVANCE(831);
      END_STATE();
    case 825:
      if (lookahead == '.') ADVANCE(1737);
      END_STATE();
    case 826:
      if (lookahead == '.') ADVANCE(1737);
      if (lookahead == '0') ADVANCE(824);
      END_STATE();
    case 827:
      if (lookahead == '.') ADVANCE(1737);
      if (lookahead == '6') ADVANCE(826);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(829);
      END_STATE();
    case 828:
      if (lookahead == '.') ADVANCE(1737);
      if (lookahead == 'x') ADVANCE(1746);
      END_STATE();
    case 829:
      if (lookahead == '.') ADVANCE(1737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(825);
      END_STATE();
    case 830:
      if (lookahead == '.') ADVANCE(1737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 831:
      if (lookahead == '0') ADVANCE(1948);
      END_STATE();
    case 832:
      if (lookahead == '1') ADVANCE(1823);
      if (lookahead == '2') ADVANCE(1824);
      if (lookahead == '3') ADVANCE(1825);
      END_STATE();
    case 833:
      if (lookahead == 'A') ADVANCE(1378);
      END_STATE();
    case 834:
      if (lookahead == 'C') ADVANCE(1194);
      END_STATE();
    case 835:
      if (lookahead == 'C') ADVANCE(1200);
      END_STATE();
    case 836:
      if (lookahead == 'F') ADVANCE(1526);
      END_STATE();
    case 837:
      if (lookahead == 'F') ADVANCE(1227);
      END_STATE();
    case 838:
      if (lookahead == 'O') ADVANCE(1157);
      END_STATE();
    case 839:
      if (lookahead == 'O') ADVANCE(1157);
      if (lookahead == 'r') ADVANCE(1082);
      END_STATE();
    case 840:
      if (lookahead == 'O') ADVANCE(1157);
      if (lookahead == 'r') ADVANCE(1081);
      END_STATE();
    case 841:
      if (lookahead == 'R') ADVANCE(1399);
      END_STATE();
    case 842:
      if (lookahead == 'S') ADVANCE(1470);
      if (lookahead == 'c') ADVANCE(1442);
      if (lookahead == 'u') ADVANCE(1513);
      END_STATE();
    case 843:
      if (lookahead == 'S') ADVANCE(1470);
      if (lookahead == 'c') ADVANCE(1442);
      if (lookahead == 'u') ADVANCE(1535);
      END_STATE();
    case 844:
      if (lookahead == 'S') ADVANCE(1198);
      END_STATE();
    case 845:
      if (lookahead == 'S') ADVANCE(1221);
      END_STATE();
    case 846:
      if (lookahead == 'S') ADVANCE(1221);
      if (lookahead == '_') ADVANCE(977);
      END_STATE();
    case 847:
      if (lookahead == 'S') ADVANCE(1481);
      END_STATE();
    case 848:
      if (lookahead == 'S') ADVANCE(1482);
      END_STATE();
    case 849:
      if (lookahead == 'T') ADVANCE(1708);
      END_STATE();
    case 850:
      if (lookahead == 'T') ADVANCE(1709);
      END_STATE();
    case 851:
      if (lookahead == 'T') ADVANCE(1710);
      END_STATE();
    case 852:
      if (lookahead == 'T') ADVANCE(1711);
      END_STATE();
    case 853:
      if (lookahead == 'T') ADVANCE(1712);
      END_STATE();
    case 854:
      if (lookahead == 'T') ADVANCE(1239);
      END_STATE();
    case 855:
      if (lookahead == 'T') ADVANCE(1713);
      END_STATE();
    case 856:
      if (lookahead == 'T') ADVANCE(1714);
      END_STATE();
    case 857:
      if (lookahead == 'T') ADVANCE(1715);
      END_STATE();
    case 858:
      if (lookahead == 'T') ADVANCE(1717);
      END_STATE();
    case 859:
      if (lookahead == 'T') ADVANCE(1718);
      END_STATE();
    case 860:
      if (lookahead == 'T') ADVANCE(1719);
      END_STATE();
    case 861:
      if (lookahead == 'T') ADVANCE(1720);
      END_STATE();
    case 862:
      if (lookahead == 'T') ADVANCE(1721);
      END_STATE();
    case 863:
      if (lookahead == '_') ADVANCE(1181);
      END_STATE();
    case 864:
      if (lookahead == '_') ADVANCE(1004);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1243);
      END_STATE();
    case 865:
      if (lookahead == '_') ADVANCE(1003);
      END_STATE();
    case 866:
      if (lookahead == '_') ADVANCE(1171);
      END_STATE();
    case 867:
      if (lookahead == '_') ADVANCE(1400);
      END_STATE();
    case 868:
      if (lookahead == '_') ADVANCE(1165);
      END_STATE();
    case 869:
      if (lookahead == '_') ADVANCE(1429);
      END_STATE();
    case 870:
      if (lookahead == '_') ADVANCE(1216);
      END_STATE();
    case 871:
      if (lookahead == '_') ADVANCE(1503);
      END_STATE();
    case 872:
      if (lookahead == '_') ADVANCE(1677);
      END_STATE();
    case 873:
      if (lookahead == '_') ADVANCE(977);
      END_STATE();
    case 874:
      if (lookahead == '_') ADVANCE(1471);
      END_STATE();
    case 875:
      if (lookahead == '_') ADVANCE(1287);
      END_STATE();
    case 876:
      if (lookahead == '_') ADVANCE(1521);
      if (lookahead == 'b') ADVANCE(1297);
      if (lookahead == 'd') ADVANCE(1127);
      if (lookahead == 'f') ADVANCE(1531);
      if (lookahead == 'l') ADVANCE(1424);
      if (lookahead == 'm') ADVANCE(953);
      if (lookahead == 'r') ADVANCE(1434);
      if (lookahead == 't') ADVANCE(1141);
      END_STATE();
    case 877:
      if (lookahead == '_') ADVANCE(1567);
      END_STATE();
    case 878:
      if (lookahead == '_') ADVANCE(1288);
      END_STATE();
    case 879:
      if (lookahead == '_') ADVANCE(1408);
      END_STATE();
    case 880:
      if (lookahead == '_') ADVANCE(1289);
      END_STATE();
    case 881:
      if (lookahead == '_') ADVANCE(1475);
      END_STATE();
    case 882:
      if (lookahead == '_') ADVANCE(1174);
      END_STATE();
    case 883:
      if (lookahead == 'a') ADVANCE(1282);
      if (lookahead == 'i') ADVANCE(1283);
      if (lookahead == 'o') ADVANCE(1358);
      if (lookahead == 'r') ADVANCE(925);
      END_STATE();
    case 884:
      if (lookahead == 'a') ADVANCE(1545);
      END_STATE();
    case 885:
      if (lookahead == 'a') ADVANCE(1545);
      if (lookahead == 'e') ADVANCE(1560);
      END_STATE();
    case 886:
      if (lookahead == 'a') ADVANCE(1327);
      END_STATE();
    case 887:
      if (lookahead == 'a') ADVANCE(1327);
      if (lookahead == 'o') ADVANCE(1953);
      END_STATE();
    case 888:
      if (lookahead == 'a') ADVANCE(1327);
      if (lookahead == 'o') ADVANCE(839);
      END_STATE();
    case 889:
      if (lookahead == 'a') ADVANCE(1327);
      if (lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 890:
      if (lookahead == 'a') ADVANCE(1327);
      if (lookahead == 'o') ADVANCE(1952);
      END_STATE();
    case 891:
      if (lookahead == 'a') ADVANCE(1327);
      if (lookahead == 'o') ADVANCE(840);
      END_STATE();
    case 892:
      if (lookahead == 'a') ADVANCE(1327);
      if (lookahead == 'o') ADVANCE(1525);
      END_STATE();
    case 893:
      if (lookahead == 'a') ADVANCE(1609);
      if (lookahead == 'd') ADVANCE(1686);
      if (lookahead == 'i') ADVANCE(968);
      if (lookahead == 'l') ADVANCE(895);
      if (lookahead == 'o') ADVANCE(1562);
      if (lookahead == 'r') ADVANCE(1393);
      END_STATE();
    case 894:
      if (lookahead == 'a') ADVANCE(1609);
      if (lookahead == 'i') ADVANCE(968);
      if (lookahead == 'l') ADVANCE(895);
      END_STATE();
    case 895:
      if (lookahead == 'a') ADVANCE(1703);
      END_STATE();
    case 896:
      if (lookahead == 'a') ADVANCE(1006);
      if (lookahead == 'u') ADVANCE(1029);
      END_STATE();
    case 897:
      if (lookahead == 'a') ADVANCE(993);
      END_STATE();
    case 898:
      if (lookahead == 'a') ADVANCE(993);
      if (lookahead == 'o') ADVANCE(1469);
      END_STATE();
    case 899:
      if (lookahead == 'a') ADVANCE(1186);
      if (lookahead == 'e') ADVANCE(1688);
      if (lookahead == 'r') ADVANCE(896);
      if (lookahead == 'y') ADVANCE(1450);
      END_STATE();
    case 900:
      if (lookahead == 'a') ADVANCE(1186);
      if (lookahead == 'e') ADVANCE(1690);
      if (lookahead == 'r') ADVANCE(946);
      if (lookahead == 'y') ADVANCE(1450);
      END_STATE();
    case 901:
      if (lookahead == 'a') ADVANCE(1707);
      END_STATE();
    case 902:
      if (lookahead == 'a') ADVANCE(987);
      END_STATE();
    case 903:
      if (lookahead == 'a') ADVANCE(1727);
      END_STATE();
    case 904:
      if (lookahead == 'a') ADVANCE(1702);
      END_STATE();
    case 905:
      if (lookahead == 'a') ADVANCE(1449);
      END_STATE();
    case 906:
      if (lookahead == 'a') ADVANCE(982);
      END_STATE();
    case 907:
      if (lookahead == 'a') ADVANCE(1277);
      END_STATE();
    case 908:
      if (lookahead == 'a') ADVANCE(1591);
      END_STATE();
    case 909:
      if (lookahead == 'a') ADVANCE(1474);
      END_STATE();
    case 910:
      if (lookahead == 'a') ADVANCE(1278);
      END_STATE();
    case 911:
      if (lookahead == 'a') ADVANCE(1593);
      END_STATE();
    case 912:
      if (lookahead == 'a') ADVANCE(1520);
      END_STATE();
    case 913:
      if (lookahead == 'a') ADVANCE(1446);
      if (lookahead == 'i') ADVANCE(1583);
      END_STATE();
    case 914:
      if (lookahead == 'a') ADVANCE(1279);
      END_STATE();
    case 915:
      if (lookahead == 'a') ADVANCE(1384);
      END_STATE();
    case 916:
      if (lookahead == 'a') ADVANCE(1538);
      END_STATE();
    case 917:
      if (lookahead == 'a') ADVANCE(998);
      END_STATE();
    case 918:
      if (lookahead == 'a') ADVANCE(1488);
      END_STATE();
    case 919:
      if (lookahead == 'a') ADVANCE(1314);
      END_STATE();
    case 920:
      if (lookahead == 'a') ADVANCE(1502);
      END_STATE();
    case 921:
      if (lookahead == 'a') ADVANCE(1612);
      END_STATE();
    case 922:
      if (lookahead == 'a') ADVANCE(1490);
      END_STATE();
    case 923:
      if (lookahead == 'a') ADVANCE(1608);
      if (lookahead == 'r') ADVANCE(1393);
      END_STATE();
    case 924:
      if (lookahead == 'a') ADVANCE(1561);
      END_STATE();
    case 925:
      if (lookahead == 'a') ADVANCE(1329);
      END_STATE();
    case 926:
      if (lookahead == 'a') ADVANCE(1290);
      END_STATE();
    case 927:
      if (lookahead == 'a') ADVANCE(1335);
      END_STATE();
    case 928:
      if (lookahead == 'a') ADVANCE(1706);
      END_STATE();
    case 929:
      if (lookahead == 'a') ADVANCE(1328);
      END_STATE();
    case 930:
      if (lookahead == 'a') ADVANCE(1336);
      END_STATE();
    case 931:
      if (lookahead == 'a') ADVANCE(986);
      END_STATE();
    case 932:
      if (lookahead == 'a') ADVANCE(1624);
      END_STATE();
    case 933:
      if (lookahead == 'a') ADVANCE(1338);
      END_STATE();
    case 934:
      if (lookahead == 'a') ADVANCE(1510);
      END_STATE();
    case 935:
      if (lookahead == 'a') ADVANCE(1511);
      END_STATE();
    case 936:
      if (lookahead == 'a') ADVANCE(1303);
      END_STATE();
    case 937:
      if (lookahead == 'a') ADVANCE(1661);
      if (lookahead == 'l') ADVANCE(895);
      END_STATE();
    case 938:
      if (lookahead == 'a') ADVANCE(1627);
      END_STATE();
    case 939:
      if (lookahead == 'a') ADVANCE(1382);
      END_STATE();
    case 940:
      if (lookahead == 'a') ADVANCE(1011);
      END_STATE();
    case 941:
      if (lookahead == 'a') ADVANCE(1527);
      END_STATE();
    case 942:
      if (lookahead == 'a') ADVANCE(1013);
      END_STATE();
    case 943:
      if (lookahead == 'a') ADVANCE(1014);
      END_STATE();
    case 944:
      if (lookahead == 'a') ADVANCE(1478);
      END_STATE();
    case 945:
      if (lookahead == 'a') ADVANCE(1635);
      END_STATE();
    case 946:
      if (lookahead == 'a') ADVANCE(1363);
      END_STATE();
    case 947:
      if (lookahead == 'a') ADVANCE(1480);
      END_STATE();
    case 948:
      if (lookahead == 'a') ADVANCE(1638);
      END_STATE();
    case 949:
      if (lookahead == 'a') ADVANCE(1639);
      END_STATE();
    case 950:
      if (lookahead == 'a') ADVANCE(1640);
      END_STATE();
    case 951:
      if (lookahead == 'a') ADVANCE(1642);
      END_STATE();
    case 952:
      if (lookahead == 'a') ADVANCE(1385);
      END_STATE();
    case 953:
      if (lookahead == 'a') ADVANCE(1585);
      END_STATE();
    case 954:
      if (lookahead == 'a') ADVANCE(1540);
      END_STATE();
    case 955:
      if (lookahead == 'a') ADVANCE(1723);
      END_STATE();
    case 956:
      if (lookahead == 'b') ADVANCE(1261);
      if (lookahead == 'v') ADVANCE(1083);
      END_STATE();
    case 957:
      if (lookahead == 'b') ADVANCE(1284);
      if (lookahead == 'u') ADVANCE(1512);
      END_STATE();
    case 958:
      if (lookahead == 'b') ADVANCE(920);
      END_STATE();
    case 959:
      if (lookahead == 'c') ADVANCE(1193);
      END_STATE();
    case 960:
      if (lookahead == 'c') ADVANCE(1193);
      if (lookahead == 'r') ADVANCE(1392);
      END_STATE();
    case 961:
      if (lookahead == 'c') ADVANCE(1262);
      END_STATE();
    case 962:
      if (lookahead == 'c') ADVANCE(1660);
      END_STATE();
    case 963:
      if (lookahead == 'c') ADVANCE(1660);
      if (lookahead == 'e') ADVANCE(994);
      END_STATE();
    case 964:
      if (lookahead == 'c') ADVANCE(926);
      if (lookahead == 'h') ADVANCE(940);
      if (lookahead == 'i') ADVANCE(1725);
      if (lookahead == 'p') ADVANCE(1024);
      if (lookahead == 'u') ADVANCE(1447);
      END_STATE();
    case 965:
      if (lookahead == 'c') ADVANCE(926);
      if (lookahead == 'h') ADVANCE(942);
      if (lookahead == 'i') ADVANCE(1725);
      if (lookahead == 'p') ADVANCE(1025);
      if (lookahead == 'u') ADVANCE(1447);
      END_STATE();
    case 966:
      if (lookahead == 'c') ADVANCE(926);
      if (lookahead == 'h') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1725);
      if (lookahead == 'p') ADVANCE(1544);
      END_STATE();
    case 967:
      if (lookahead == 'c') ADVANCE(926);
      if (lookahead == 'i') ADVANCE(1725);
      END_STATE();
    case 968:
      if (lookahead == 'c') ADVANCE(1589);
      END_STATE();
    case 969:
      if (lookahead == 'c') ADVANCE(1263);
      END_STATE();
    case 970:
      if (lookahead == 'c') ADVANCE(1264);
      END_STATE();
    case 971:
      if (lookahead == 'c') ADVANCE(1267);
      END_STATE();
    case 972:
      if (lookahead == 'c') ADVANCE(1265);
      END_STATE();
    case 973:
      if (lookahead == 'c') ADVANCE(1397);
      END_STATE();
    case 974:
      if (lookahead == 'c') ADVANCE(1592);
      END_STATE();
    case 975:
      if (lookahead == 'c') ADVANCE(1645);
      END_STATE();
    case 976:
      if (lookahead == 'c') ADVANCE(1196);
      END_STATE();
    case 977:
      if (lookahead == 'c') ADVANCE(1407);
      END_STATE();
    case 978:
      if (lookahead == 'c') ADVANCE(1250);
      END_STATE();
    case 979:
      if (lookahead == 'c') ADVANCE(1396);
      if (lookahead == 'd') ADVANCE(1100);
      if (lookahead == 'e') ADVANCE(1676);
      if (lookahead == 'g') ADVANCE(1159);
      if (lookahead == 'h') ADVANCE(1225);
      if (lookahead == 'i') ADVANCE(1375);
      if (lookahead == 'l') ADVANCE(1413);
      if (lookahead == 'm') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 980:
      if (lookahead == 'c') ADVANCE(919);
      END_STATE();
    case 981:
      if (lookahead == 'c') ADVANCE(1607);
      END_STATE();
    case 982:
      if (lookahead == 'c') ADVANCE(1089);
      END_STATE();
    case 983:
      if (lookahead == 'c') ADVANCE(1605);
      END_STATE();
    case 984:
      if (lookahead == 'c') ADVANCE(1094);
      END_STATE();
    case 985:
      if (lookahead == 'c') ADVANCE(1050);
      END_STATE();
    case 986:
      if (lookahead == 'c') ADVANCE(1076);
      END_STATE();
    case 987:
      if (lookahead == 'c') ADVANCE(1705);
      END_STATE();
    case 988:
      if (lookahead == 'c') ADVANCE(1220);
      END_STATE();
    case 989:
      if (lookahead == 'c') ADVANCE(1293);
      END_STATE();
    case 990:
      if (lookahead == 'c') ADVANCE(936);
      END_STATE();
    case 991:
      if (lookahead == 'c') ADVANCE(1668);
      END_STATE();
    case 992:
      if (lookahead == 'd') ADVANCE(1896);
      if (lookahead == 'n') ADVANCE(1001);
      END_STATE();
    case 993:
      if (lookahead == 'd') ADVANCE(849);
      END_STATE();
    case 994:
      if (lookahead == 'd') ADVANCE(1861);
      END_STATE();
    case 995:
      if (lookahead == 'd') ADVANCE(844);
      END_STATE();
    case 996:
      if (lookahead == 'd') ADVANCE(1858);
      END_STATE();
    case 997:
      if (lookahead == 'd') ADVANCE(1783);
      END_STATE();
    case 998:
      if (lookahead == 'd') ADVANCE(1857);
      END_STATE();
    case 999:
      if (lookahead == 'd') ADVANCE(854);
      END_STATE();
    case 1000:
      if (lookahead == 'd') ADVANCE(1332);
      END_STATE();
    case 1001:
      if (lookahead == 'd') ADVANCE(1079);
      END_STATE();
    case 1002:
      if (lookahead == 'd') ADVANCE(872);
      END_STATE();
    case 1003:
      if (lookahead == 'd') ADVANCE(1215);
      END_STATE();
    case 1004:
      if (lookahead == 'd') ADVANCE(1226);
      if (lookahead == 'n') ADVANCE(1416);
      if (lookahead == 's') ADVANCE(1457);
      END_STATE();
    case 1005:
      if (lookahead == 'd') ADVANCE(1611);
      END_STATE();
    case 1006:
      if (lookahead == 'd') ADVANCE(1034);
      if (lookahead == 'n') ADVANCE(1565);
      END_STATE();
    case 1007:
      if (lookahead == 'd') ADVANCE(1090);
      END_STATE();
    case 1008:
      if (lookahead == 'd') ADVANCE(1056);
      END_STATE();
    case 1009:
      if (lookahead == 'd') ADVANCE(1087);
      END_STATE();
    case 1010:
      if (lookahead == 'd') ADVANCE(1331);
      END_STATE();
    case 1011:
      if (lookahead == 'd') ADVANCE(1098);
      END_STATE();
    case 1012:
      if (lookahead == 'd') ADVANCE(1110);
      END_STATE();
    case 1013:
      if (lookahead == 'd') ADVANCE(1112);
      END_STATE();
    case 1014:
      if (lookahead == 'd') ADVANCE(1114);
      END_STATE();
    case 1015:
      if (lookahead == 'd') ADVANCE(1117);
      END_STATE();
    case 1016:
      if (lookahead == 'd') ADVANCE(858);
      END_STATE();
    case 1017:
      if (lookahead == 'd') ADVANCE(848);
      END_STATE();
    case 1018:
      if (lookahead == 'e') ADVANCE(1448);
      END_STATE();
    case 1019:
      if (lookahead == 'e') ADVANCE(1185);
      if (lookahead == 'i') ADVANCE(1364);
      if (lookahead == 'o') ADVANCE(898);
      END_STATE();
    case 1020:
      if (lookahead == 'e') ADVANCE(1185);
      if (lookahead == 'o') ADVANCE(898);
      END_STATE();
    case 1021:
      if (lookahead == 'e') ADVANCE(1185);
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 1022:
      if (lookahead == 'e') ADVANCE(1323);
      END_STATE();
    case 1023:
      if (lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 1024:
      if (lookahead == 'e') ADVANCE(963);
      if (lookahead == 'r') ADVANCE(1224);
      END_STATE();
    case 1025:
      if (lookahead == 'e') ADVANCE(963);
      if (lookahead == 'r') ADVANCE(1257);
      END_STATE();
    case 1026:
      if (lookahead == 'e') ADVANCE(1894);
      END_STATE();
    case 1027:
      if (lookahead == 'e') ADVANCE(1776);
      END_STATE();
    case 1028:
      if (lookahead == 'e') ADVANCE(1853);
      END_STATE();
    case 1029:
      if (lookahead == 'e') ADVANCE(1949);
      END_STATE();
    case 1030:
      if (lookahead == 'e') ADVANCE(1897);
      END_STATE();
    case 1031:
      if (lookahead == 'e') ADVANCE(1950);
      END_STATE();
    case 1032:
      if (lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 1033:
      if (lookahead == 'e') ADVANCE(1908);
      END_STATE();
    case 1034:
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 1035:
      if (lookahead == 'e') ADVANCE(1872);
      END_STATE();
    case 1036:
      if (lookahead == 'e') ADVANCE(1781);
      END_STATE();
    case 1037:
      if (lookahead == 'e') ADVANCE(1787);
      END_STATE();
    case 1038:
      if (lookahead == 'e') ADVANCE(1915);
      END_STATE();
    case 1039:
      if (lookahead == 'e') ADVANCE(1910);
      END_STATE();
    case 1040:
      if (lookahead == 'e') ADVANCE(1772);
      END_STATE();
    case 1041:
      if (lookahead == 'e') ADVANCE(1854);
      END_STATE();
    case 1042:
      if (lookahead == 'e') ADVANCE(1830);
      END_STATE();
    case 1043:
      if (lookahead == 'e') ADVANCE(1760);
      END_STATE();
    case 1044:
      if (lookahead == 'e') ADVANCE(1771);
      END_STATE();
    case 1045:
      if (lookahead == 'e') ADVANCE(1906);
      END_STATE();
    case 1046:
      if (lookahead == 'e') ADVANCE(1820);
      END_STATE();
    case 1047:
      if (lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 1048:
      if (lookahead == 'e') ADVANCE(1775);
      END_STATE();
    case 1049:
      if (lookahead == 'e') ADVANCE(1923);
      END_STATE();
    case 1050:
      if (lookahead == 'e') ADVANCE(1873);
      END_STATE();
    case 1051:
      if (lookahead == 'e') ADVANCE(1761);
      END_STATE();
    case 1052:
      if (lookahead == 'e') ADVANCE(1773);
      END_STATE();
    case 1053:
      if (lookahead == 'e') ADVANCE(1769);
      END_STATE();
    case 1054:
      if (lookahead == 'e') ADVANCE(1900);
      END_STATE();
    case 1055:
      if (lookahead == 'e') ADVANCE(1763);
      END_STATE();
    case 1056:
      if (lookahead == 'e') ADVANCE(1844);
      END_STATE();
    case 1057:
      if (lookahead == 'e') ADVANCE(1762);
      END_STATE();
    case 1058:
      if (lookahead == 'e') ADVANCE(1768);
      END_STATE();
    case 1059:
      if (lookahead == 'e') ADVANCE(1916);
      END_STATE();
    case 1060:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 1061:
      if (lookahead == 'e') ADVANCE(1759);
      END_STATE();
    case 1062:
      if (lookahead == 'e') ADVANCE(1819);
      END_STATE();
    case 1063:
      if (lookahead == 'e') ADVANCE(1728);
      END_STATE();
    case 1064:
      if (lookahead == 'e') ADVANCE(1840);
      END_STATE();
    case 1065:
      if (lookahead == 'e') ADVANCE(1848);
      END_STATE();
    case 1066:
      if (lookahead == 'e') ADVANCE(1179);
      END_STATE();
    case 1067:
      if (lookahead == 'e') ADVANCE(1835);
      END_STATE();
    case 1068:
      if (lookahead == 'e') ADVANCE(1836);
      END_STATE();
    case 1069:
      if (lookahead == 'e') ADVANCE(1843);
      END_STATE();
    case 1070:
      if (lookahead == 'e') ADVANCE(1821);
      END_STATE();
    case 1071:
      if (lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 1072:
      if (lookahead == 'e') ADVANCE(1914);
      END_STATE();
    case 1073:
      if (lookahead == 'e') ADVANCE(1356);
      if (lookahead == 'l') ADVANCE(1208);
      if (lookahead == 'o') ADVANCE(1307);
      if (lookahead == 'u') ADVANCE(1281);
      END_STATE();
    case 1074:
      if (lookahead == 'e') ADVANCE(1560);
      END_STATE();
    case 1075:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 1076:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 1077:
      if (lookahead == 'e') ADVANCE(1381);
      END_STATE();
    case 1078:
      if (lookahead == 'e') ADVANCE(1519);
      END_STATE();
    case 1079:
      if (lookahead == 'e') ADVANCE(1685);
      END_STATE();
    case 1080:
      if (lookahead == 'e') ADVANCE(1680);
      END_STATE();
    case 1081:
      if (lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 1082:
      if (lookahead == 'e') ADVANCE(1160);
      if (lookahead == 'm') ADVANCE(907);
      END_STATE();
    case 1083:
      if (lookahead == 'e') ADVANCE(1496);
      END_STATE();
    case 1084:
      if (lookahead == 'e') ADVANCE(1546);
      END_STATE();
    case 1085:
      if (lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 1086:
      if (lookahead == 'e') ADVANCE(995);
      END_STATE();
    case 1087:
      if (lookahead == 'e') ADVANCE(1486);
      END_STATE();
    case 1088:
      if (lookahead == 'e') ADVANCE(1010);
      if (lookahead == 'i') ADVANCE(1411);
      END_STATE();
    case 1089:
      if (lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 1090:
      if (lookahead == 'e') ADVANCE(1361);
      END_STATE();
    case 1091:
      if (lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 1092:
      if (lookahead == 'e') ADVANCE(991);
      END_STATE();
    case 1093:
      if (lookahead == 'e') ADVANCE(1002);
      END_STATE();
    case 1094:
      if (lookahead == 'e') ADVANCE(976);
      END_STATE();
    case 1095:
      if (lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 1096:
      if (lookahead == 'e') ADVANCE(1322);
      END_STATE();
    case 1097:
      if (lookahead == 'e') ADVANCE(1569);
      END_STATE();
    case 1098:
      if (lookahead == 'e') ADVANCE(1487);
      END_STATE();
    case 1099:
      if (lookahead == 'e') ADVANCE(1017);
      END_STATE();
    case 1100:
      if (lookahead == 'e') ADVANCE(978);
      END_STATE();
    case 1101:
      if (lookahead == 'e') ADVANCE(1615);
      END_STATE();
    case 1102:
      if (lookahead == 'e') ADVANCE(1549);
      END_STATE();
    case 1103:
      if (lookahead == 'e') ADVANCE(1551);
      END_STATE();
    case 1104:
      if (lookahead == 'e') ADVANCE(1380);
      END_STATE();
    case 1105:
      if (lookahead == 'e') ADVANCE(1553);
      END_STATE();
    case 1106:
      if (lookahead == 'e') ADVANCE(1366);
      END_STATE();
    case 1107:
      if (lookahead == 'e') ADVANCE(1568);
      END_STATE();
    case 1108:
      if (lookahead == 'e') ADVANCE(1596);
      END_STATE();
    case 1109:
      if (lookahead == 'e') ADVANCE(1499);
      END_STATE();
    case 1110:
      if (lookahead == 'e') ADVANCE(1494);
      END_STATE();
    case 1111:
      if (lookahead == 'e') ADVANCE(1552);
      END_STATE();
    case 1112:
      if (lookahead == 'e') ADVANCE(1537);
      END_STATE();
    case 1113:
      if (lookahead == 'e') ADVANCE(1600);
      END_STATE();
    case 1114:
      if (lookahead == 'e') ADVANCE(1491);
      END_STATE();
    case 1115:
      if (lookahead == 'e') ADVANCE(1498);
      END_STATE();
    case 1116:
      if (lookahead == 'e') ADVANCE(1558);
      END_STATE();
    case 1117:
      if (lookahead == 'e') ADVANCE(1500);
      END_STATE();
    case 1118:
      if (lookahead == 'e') ADVANCE(974);
      END_STATE();
    case 1119:
      if (lookahead == 'e') ADVANCE(1563);
      END_STATE();
    case 1120:
      if (lookahead == 'e') ADVANCE(1689);
      END_STATE();
    case 1121:
      if (lookahead == 'e') ADVANCE(868);
      END_STATE();
    case 1122:
      if (lookahead == 'e') ADVANCE(975);
      END_STATE();
    case 1123:
      if (lookahead == 'e') ADVANCE(970);
      END_STATE();
    case 1124:
      if (lookahead == 'e') ADVANCE(1507);
      END_STATE();
    case 1125:
      if (lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 1126:
      if (lookahead == 'e') ADVANCE(1691);
      if (lookahead == 'r') ADVANCE(946);
      if (lookahead == 'y') ADVANCE(1450);
      END_STATE();
    case 1127:
      if (lookahead == 'e') ADVANCE(1291);
      END_STATE();
    case 1128:
      if (lookahead == 'e') ADVANCE(983);
      END_STATE();
    case 1129:
      if (lookahead == 'e') ADVANCE(1370);
      END_STATE();
    case 1130:
      if (lookahead == 'e') ADVANCE(1694);
      if (lookahead == 'r') ADVANCE(946);
      END_STATE();
    case 1131:
      if (lookahead == 'e') ADVANCE(1371);
      END_STATE();
    case 1132:
      if (lookahead == 'e') ADVANCE(1692);
      END_STATE();
    case 1133:
      if (lookahead == 'e') ADVANCE(1693);
      END_STATE();
    case 1134:
      if (lookahead == 'e') ADVANCE(1376);
      END_STATE();
    case 1135:
      if (lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 1136:
      if (lookahead == 'e') ADVANCE(1695);
      END_STATE();
    case 1137:
      if (lookahead == 'e') ADVANCE(1917);
      END_STATE();
    case 1138:
      if (lookahead == 'e') ADVANCE(1729);
      END_STATE();
    case 1139:
      if (lookahead == 'e') ADVANCE(1528);
      END_STATE();
    case 1140:
      if (lookahead == 'e') ADVANCE(962);
      END_STATE();
    case 1141:
      if (lookahead == 'e') ADVANCE(1696);
      if (lookahead == 'i') ADVANCE(1337);
      if (lookahead == 'y') ADVANCE(1468);
      END_STATE();
    case 1142:
      if (lookahead == 'e') ADVANCE(1730);
      END_STATE();
    case 1143:
      if (lookahead == 'e') ADVANCE(1697);
      END_STATE();
    case 1144:
      if (lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 1145:
      if (lookahead == 'e') ADVANCE(1731);
      END_STATE();
    case 1146:
      if (lookahead == 'e') ADVANCE(1698);
      END_STATE();
    case 1147:
      if (lookahead == 'e') ADVANCE(856);
      END_STATE();
    case 1148:
      if (lookahead == 'e') ADVANCE(857);
      END_STATE();
    case 1149:
      if (lookahead == 'e') ADVANCE(859);
      END_STATE();
    case 1150:
      if (lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 1151:
      if (lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 1152:
      if (lookahead == 'e') ADVANCE(862);
      END_STATE();
    case 1153:
      if (lookahead == 'e') ADVANCE(1699);
      if (lookahead == 'r') ADVANCE(946);
      END_STATE();
    case 1154:
      if (lookahead == 'e') ADVANCE(1700);
      if (lookahead == 'r') ADVANCE(946);
      END_STATE();
    case 1155:
      if (lookahead == 'e') ADVANCE(1701);
      if (lookahead == 'r') ADVANCE(946);
      END_STATE();
    case 1156:
      if (lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 1157:
      if (lookahead == 'f') ADVANCE(836);
      END_STATE();
    case 1158:
      if (lookahead == 'f') ADVANCE(1161);
      END_STATE();
    case 1159:
      if (lookahead == 'f') ADVANCE(1687);
      END_STATE();
    case 1160:
      if (lookahead == 'f') ADVANCE(973);
      END_STATE();
    case 1161:
      if (lookahead == 'f') ADVANCE(1118);
      END_STATE();
    case 1162:
      if (lookahead == 'f') ADVANCE(1664);
      END_STATE();
    case 1163:
      if (lookahead == 'f') ADVANCE(1167);
      END_STATE();
    case 1164:
      if (lookahead == 'f') ADVANCE(1162);
      END_STATE();
    case 1165:
      if (lookahead == 'f') ADVANCE(1452);
      END_STATE();
    case 1166:
      if (lookahead == 'f') ADVANCE(931);
      END_STATE();
    case 1167:
      if (lookahead == 'f') ADVANCE(1574);
      END_STATE();
    case 1168:
      if (lookahead == 'f') ADVANCE(1576);
      END_STATE();
    case 1169:
      if (lookahead == 'f') ADVANCE(1433);
      END_STATE();
    case 1170:
      if (lookahead == 'f') ADVANCE(1168);
      END_STATE();
    case 1171:
      if (lookahead == 'f') ADVANCE(1230);
      END_STATE();
    case 1172:
      if (lookahead == 'f') ADVANCE(1436);
      END_STATE();
    case 1173:
      if (lookahead == 'f') ADVANCE(1125);
      END_STATE();
    case 1174:
      if (lookahead == 'f') ADVANCE(1233);
      END_STATE();
    case 1175:
      if (lookahead == 'f') ADVANCE(1437);
      END_STATE();
    case 1176:
      if (lookahead == 'f') ADVANCE(1128);
      END_STATE();
    case 1177:
      if (lookahead == 'f') ADVANCE(1241);
      END_STATE();
    case 1178:
      if (lookahead == 'f') ADVANCE(1245);
      END_STATE();
    case 1179:
      if (lookahead == 'f') ADVANCE(1247);
      if (lookahead == 's') ADVANCE(990);
      END_STATE();
    case 1180:
      if (lookahead == 'f') ADVANCE(1173);
      END_STATE();
    case 1181:
      if (lookahead == 'f') ADVANCE(1529);
      if (lookahead == 'r') ADVANCE(1398);
      END_STATE();
    case 1182:
      if (lookahead == 'f') ADVANCE(1176);
      END_STATE();
    case 1183:
      if (lookahead == 'g') ADVANCE(1890);
      END_STATE();
    case 1184:
      if (lookahead == 'g') ADVANCE(1839);
      END_STATE();
    case 1185:
      if (lookahead == 'g') ADVANCE(902);
      END_STATE();
    case 1186:
      if (lookahead == 'g') ADVANCE(1547);
      END_STATE();
    case 1187:
      if (lookahead == 'g') ADVANCE(1554);
      END_STATE();
    case 1188:
      if (lookahead == 'g') ADVANCE(1505);
      END_STATE();
    case 1189:
      if (lookahead == 'h') ADVANCE(1780);
      END_STATE();
    case 1190:
      if (lookahead == 'h') ADVANCE(1770);
      END_STATE();
    case 1191:
      if (lookahead == 'h') ADVANCE(1925);
      END_STATE();
    case 1192:
      if (lookahead == 'h') ADVANCE(1791);
      END_STATE();
    case 1193:
      if (lookahead == 'h') ADVANCE(1203);
      END_STATE();
    case 1194:
      if (lookahead == 'h') ADVANCE(916);
      END_STATE();
    case 1195:
      if (lookahead == 'h') ADVANCE(1402);
      END_STATE();
    case 1196:
      if (lookahead == 'h') ADVANCE(1123);
      END_STATE();
    case 1197:
      if (lookahead == 'h') ADVANCE(929);
      END_STATE();
    case 1198:
      if (lookahead == 'h') ADVANCE(1219);
      END_STATE();
    case 1199:
      if (lookahead == 'h') ADVANCE(1572);
      END_STATE();
    case 1200:
      if (lookahead == 'h') ADVANCE(954);
      END_STATE();
    case 1201:
      if (lookahead == 'i') ADVANCE(1387);
      END_STATE();
    case 1202:
      if (lookahead == 'i') ADVANCE(1725);
      END_STATE();
    case 1203:
      if (lookahead == 'i') ADVANCE(1674);
      END_STATE();
    case 1204:
      if (lookahead == 'i') ADVANCE(1283);
      END_STATE();
    case 1205:
      if (lookahead == 'i') ADVANCE(1283);
      if (lookahead == 'o') ADVANCE(1358);
      END_STATE();
    case 1206:
      if (lookahead == 'i') ADVANCE(1283);
      if (lookahead == 'r') ADVANCE(925);
      END_STATE();
    case 1207:
      if (lookahead == 'i') ADVANCE(1324);
      END_STATE();
    case 1208:
      if (lookahead == 'i') ADVANCE(961);
      END_STATE();
    case 1209:
      if (lookahead == 'i') ADVANCE(1724);
      END_STATE();
    case 1210:
      if (lookahead == 'i') ADVANCE(1023);
      END_STATE();
    case 1211:
      if (lookahead == 'i') ADVANCE(1359);
      END_STATE();
    case 1212:
      if (lookahead == 'i') ADVANCE(1633);
      END_STATE();
    case 1213:
      if (lookahead == 'i') ADVANCE(1005);
      END_STATE();
    case 1214:
      if (lookahead == 'i') ADVANCE(989);
      END_STATE();
    case 1215:
      if (lookahead == 'i') ADVANCE(1578);
      END_STATE();
    case 1216:
      if (lookahead == 'i') ADVANCE(997);
      END_STATE();
    case 1217:
      if (lookahead == 'i') ADVANCE(1377);
      END_STATE();
    case 1218:
      if (lookahead == 'i') ADVANCE(1586);
      END_STATE();
    case 1219:
      if (lookahead == 'i') ADVANCE(1096);
      END_STATE();
    case 1220:
      if (lookahead == 'i') ADVANCE(1105);
      END_STATE();
    case 1221:
      if (lookahead == 'i') ADVANCE(1726);
      END_STATE();
    case 1222:
      if (lookahead == 'i') ADVANCE(1360);
      END_STATE();
    case 1223:
      if (lookahead == 'i') ADVANCE(1403);
      END_STATE();
    case 1224:
      if (lookahead == 'i') ADVANCE(1621);
      END_STATE();
    case 1225:
      if (lookahead == 'i') ADVANCE(1573);
      END_STATE();
    case 1226:
      if (lookahead == 'i') ADVANCE(1164);
      END_STATE();
    case 1227:
      if (lookahead == 'i') ADVANCE(1292);
      END_STATE();
    case 1228:
      if (lookahead == 'i') ADVANCE(971);
      END_STATE();
    case 1229:
      if (lookahead == 'i') ADVANCE(1410);
      END_STATE();
    case 1230:
      if (lookahead == 'i') ADVANCE(1294);
      END_STATE();
    case 1231:
      if (lookahead == 'i') ADVANCE(1333);
      END_STATE();
    case 1232:
      if (lookahead == 'i') ADVANCE(972);
      END_STATE();
    case 1233:
      if (lookahead == 'i') ADVANCE(1295);
      END_STATE();
    case 1234:
      if (lookahead == 'i') ADVANCE(1415);
      END_STATE();
    case 1235:
      if (lookahead == 'i') ADVANCE(1296);
      END_STATE();
    case 1236:
      if (lookahead == 'i') ADVANCE(1344);
      END_STATE();
    case 1237:
      if (lookahead == 'i') ADVANCE(1417);
      END_STATE();
    case 1238:
      if (lookahead == 'i') ADVANCE(1419);
      END_STATE();
    case 1239:
      if (lookahead == 'i') ADVANCE(1298);
      END_STATE();
    case 1240:
      if (lookahead == 'i') ADVANCE(1420);
      END_STATE();
    case 1241:
      if (lookahead == 'i') ADVANCE(1299);
      END_STATE();
    case 1242:
      if (lookahead == 'i') ADVANCE(1421);
      END_STATE();
    case 1243:
      if (lookahead == 'i') ADVANCE(1300);
      END_STATE();
    case 1244:
      if (lookahead == 'i') ADVANCE(1422);
      END_STATE();
    case 1245:
      if (lookahead == 'i') ADVANCE(1301);
      END_STATE();
    case 1246:
      if (lookahead == 'i') ADVANCE(1423);
      END_STATE();
    case 1247:
      if (lookahead == 'i') ADVANCE(1302);
      END_STATE();
    case 1248:
      if (lookahead == 'i') ADVANCE(1304);
      END_STATE();
    case 1249:
      if (lookahead == 'i') ADVANCE(1305);
      END_STATE();
    case 1250:
      if (lookahead == 'i') ADVANCE(1581);
      END_STATE();
    case 1251:
      if (lookahead == 'i') ADVANCE(1643);
      if (lookahead == 'o') ADVANCE(1530);
      END_STATE();
    case 1252:
      if (lookahead == 'i') ADVANCE(1651);
      END_STATE();
    case 1253:
      if (lookahead == 'i') ADVANCE(1646);
      if (lookahead == 'o') ADVANCE(1530);
      END_STATE();
    case 1254:
      if (lookahead == 'i') ADVANCE(1646);
      if (lookahead == 'o') ADVANCE(1532);
      END_STATE();
    case 1255:
      if (lookahead == 'i') ADVANCE(1653);
      END_STATE();
    case 1256:
      if (lookahead == 'i') ADVANCE(1654);
      END_STATE();
    case 1257:
      if (lookahead == 'i') ADVANCE(1655);
      END_STATE();
    case 1258:
      if (lookahead == 'i') ADVANCE(1656);
      END_STATE();
    case 1259:
      if (lookahead == 'i') ADVANCE(1345);
      END_STATE();
    case 1260:
      if (lookahead == 'i') ADVANCE(1346);
      END_STATE();
    case 1261:
      if (lookahead == 'j') ADVANCE(1122);
      END_STATE();
    case 1262:
      if (lookahead == 'k') ADVANCE(1860);
      END_STATE();
    case 1263:
      if (lookahead == 'k') ADVANCE(1862);
      END_STATE();
    case 1264:
      if (lookahead == 'k') ADVANCE(1909);
      END_STATE();
    case 1265:
      if (lookahead == 'k') ADVANCE(1859);
      END_STATE();
    case 1266:
      if (lookahead == 'k') ADVANCE(1086);
      END_STATE();
    case 1267:
      if (lookahead == 'k') ADVANCE(1564);
      END_STATE();
    case 1268:
      if (lookahead == 'k') ADVANCE(1177);
      END_STATE();
    case 1269:
      if (lookahead == 'k') ADVANCE(1178);
      END_STATE();
    case 1270:
      if (lookahead == 'l') ADVANCE(1275);
      if (lookahead == 'n') ADVANCE(1207);
      if (lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 1271:
      if (lookahead == 'l') ADVANCE(1275);
      if (lookahead == 'n') ADVANCE(1236);
      END_STATE();
    case 1272:
      if (lookahead == 'l') ADVANCE(1275);
      if (lookahead == 'n') ADVANCE(1236);
      if (lookahead == 'r') ADVANCE(959);
      END_STATE();
    case 1273:
      if (lookahead == 'l') ADVANCE(1275);
      if (lookahead == 'n') ADVANCE(1259);
      END_STATE();
    case 1274:
      if (lookahead == 'l') ADVANCE(1684);
      END_STATE();
    case 1275:
      if (lookahead == 'l') ADVANCE(1684);
      if (lookahead == 'p') ADVANCE(1197);
      if (lookahead == 'w') ADVANCE(901);
      END_STATE();
    case 1276:
      if (lookahead == 'l') ADVANCE(865);
      END_STATE();
    case 1277:
      if (lookahead == 'l') ADVANCE(1918);
      END_STATE();
    case 1278:
      if (lookahead == 'l') ADVANCE(1893);
      END_STATE();
    case 1279:
      if (lookahead == 'l') ADVANCE(1901);
      END_STATE();
    case 1280:
      if (lookahead == 'l') ADVANCE(1276);
      END_STATE();
    case 1281:
      if (lookahead == 'l') ADVANCE(1276);
      if (lookahead == 'r') ADVANCE(1579);
      END_STATE();
    case 1282:
      if (lookahead == 'l') ADVANCE(1570);
      END_STATE();
    case 1283:
      if (lookahead == 'l') ADVANCE(1026);
      END_STATE();
    case 1284:
      if (lookahead == 'l') ADVANCE(1431);
      END_STATE();
    case 1285:
      if (lookahead == 'l') ADVANCE(906);
      END_STATE();
    case 1286:
      if (lookahead == 'l') ADVANCE(1274);
      if (lookahead == 'n') ADVANCE(1260);
      END_STATE();
    case 1287:
      if (lookahead == 'l') ADVANCE(1414);
      END_STATE();
    case 1288:
      if (lookahead == 'l') ADVANCE(903);
      END_STATE();
    case 1289:
      if (lookahead == 'l') ADVANCE(1425);
      END_STATE();
    case 1290:
      if (lookahead == 'l') ADVANCE(1033);
      END_STATE();
    case 1291:
      if (lookahead == 'l') ADVANCE(904);
      END_STATE();
    case 1292:
      if (lookahead == 'l') ADVANCE(1042);
      END_STATE();
    case 1293:
      if (lookahead == 'l') ADVANCE(1044);
      END_STATE();
    case 1294:
      if (lookahead == 'l') ADVANCE(1095);
      END_STATE();
    case 1295:
      if (lookahead == 'l') ADVANCE(1045);
      END_STATE();
    case 1296:
      if (lookahead == 'l') ADVANCE(1046);
      END_STATE();
    case 1297:
      if (lookahead == 'l') ADVANCE(1106);
      END_STATE();
    case 1298:
      if (lookahead == 'l') ADVANCE(1075);
      END_STATE();
    case 1299:
      if (lookahead == 'l') ADVANCE(1049);
      END_STATE();
    case 1300:
      if (lookahead == 'l') ADVANCE(1062);
      END_STATE();
    case 1301:
      if (lookahead == 'l') ADVANCE(1067);
      END_STATE();
    case 1302:
      if (lookahead == 'l') ADVANCE(1068);
      END_STATE();
    case 1303:
      if (lookahead == 'l') ADVANCE(1069);
      END_STATE();
    case 1304:
      if (lookahead == 'l') ADVANCE(1070);
      END_STATE();
    case 1305:
      if (lookahead == 'l') ADVANCE(1071);
      END_STATE();
    case 1306:
      if (lookahead == 'l') ADVANCE(1401);
      END_STATE();
    case 1307:
      if (lookahead == 'l') ADVANCE(1401);
      if (lookahead == 'r') ADVANCE(1383);
      END_STATE();
    case 1308:
      if (lookahead == 'l') ADVANCE(928);
      END_STATE();
    case 1309:
      if (lookahead == 'l') ADVANCE(1228);
      END_STATE();
    case 1310:
      if (lookahead == 'l') ADVANCE(1228);
      if (lookahead == 'o') ADVANCE(1522);
      if (lookahead == 'u') ADVANCE(1281);
      END_STATE();
    case 1311:
      if (lookahead == 'l') ADVANCE(1228);
      if (lookahead == 'o') ADVANCE(1306);
      END_STATE();
    case 1312:
      if (lookahead == 'l') ADVANCE(1228);
      if (lookahead == 'o') ADVANCE(1306);
      if (lookahead == 'u') ADVANCE(1280);
      END_STATE();
    case 1313:
      if (lookahead == 'l') ADVANCE(1228);
      if (lookahead == 'u') ADVANCE(1280);
      END_STATE();
    case 1314:
      if (lookahead == 'l') ADVANCE(1218);
      END_STATE();
    case 1315:
      if (lookahead == 'l') ADVANCE(918);
      END_STATE();
    case 1316:
      if (lookahead == 'l') ADVANCE(922);
      END_STATE();
    case 1317:
      if (lookahead == 'l') ADVANCE(1418);
      END_STATE();
    case 1318:
      if (lookahead == 'l') ADVANCE(1432);
      END_STATE();
    case 1319:
      if (lookahead == 'l') ADVANCE(1428);
      END_STATE();
    case 1320:
      if (lookahead == 'l') ADVANCE(1428);
      if (lookahead == 'r') ADVANCE(1383);
      END_STATE();
    case 1321:
      if (lookahead == 'l') ADVANCE(1232);
      END_STATE();
    case 1322:
      if (lookahead == 'l') ADVANCE(1016);
      END_STATE();
    case 1323:
      if (lookahead == 'm') ADVANCE(1404);
      if (lookahead == 'p') ADVANCE(1285);
      END_STATE();
    case 1324:
      if (lookahead == 'm') ADVANCE(908);
      END_STATE();
    case 1325:
      if (lookahead == 'm') ADVANCE(905);
      END_STATE();
    case 1326:
      if (lookahead == 'm') ADVANCE(907);
      END_STATE();
    case 1327:
      if (lookahead == 'm') ADVANCE(1027);
      END_STATE();
    case 1328:
      if (lookahead == 'm') ADVANCE(924);
      END_STATE();
    case 1329:
      if (lookahead == 'm') ADVANCE(1032);
      END_STATE();
    case 1330:
      if (lookahead == 'm') ADVANCE(1119);
      if (lookahead == 'p') ADVANCE(912);
      END_STATE();
    case 1331:
      if (lookahead == 'm') ADVANCE(909);
      END_STATE();
    case 1332:
      if (lookahead == 'm') ADVANCE(1435);
      END_STATE();
    case 1333:
      if (lookahead == 'm') ADVANCE(932);
      END_STATE();
    case 1334:
      if (lookahead == 'm') ADVANCE(914);
      END_STATE();
    case 1335:
      if (lookahead == 'm') ADVANCE(1102);
      END_STATE();
    case 1336:
      if (lookahead == 'm') ADVANCE(1107);
      END_STATE();
    case 1337:
      if (lookahead == 'm') ADVANCE(1064);
      END_STATE();
    case 1338:
      if (lookahead == 'm') ADVANCE(1116);
      END_STATE();
    case 1339:
      if (lookahead == 'm') ADVANCE(1341);
      END_STATE();
    case 1340:
      if (lookahead == 'm') ADVANCE(911);
      END_STATE();
    case 1341:
      if (lookahead == 'm') ADVANCE(1421);
      END_STATE();
    case 1342:
      if (lookahead == 'm') ADVANCE(944);
      END_STATE();
    case 1343:
      if (lookahead == 'm') ADVANCE(947);
      END_STATE();
    case 1344:
      if (lookahead == 'm') ADVANCE(948);
      END_STATE();
    case 1345:
      if (lookahead == 'm') ADVANCE(949);
      END_STATE();
    case 1346:
      if (lookahead == 'm') ADVANCE(950);
      END_STATE();
    case 1347:
      if (lookahead == 'n') ADVANCE(1001);
      END_STATE();
    case 1348:
      if (lookahead == 'n') ADVANCE(1785);
      END_STATE();
    case 1349:
      if (lookahead == 'n') ADVANCE(1870);
      END_STATE();
    case 1350:
      if (lookahead == 'n') ADVANCE(1834);
      END_STATE();
    case 1351:
      if (lookahead == 'n') ADVANCE(1838);
      END_STATE();
    case 1352:
      if (lookahead == 'n') ADVANCE(1789);
      END_STATE();
    case 1353:
      if (lookahead == 'n') ADVANCE(1833);
      END_STATE();
    case 1354:
      if (lookahead == 'n') ADVANCE(1832);
      END_STATE();
    case 1355:
      if (lookahead == 'n') ADVANCE(876);
      END_STATE();
    case 1356:
      if (lookahead == 'n') ADVANCE(1610);
      END_STATE();
    case 1357:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 1358:
      if (lookahead == 'n') ADVANCE(1588);
      if (lookahead == 'r') ADVANCE(1340);
      END_STATE();
    case 1359:
      if (lookahead == 'n') ADVANCE(1183);
      END_STATE();
    case 1360:
      if (lookahead == 'n') ADVANCE(1184);
      END_STATE();
    case 1361:
      if (lookahead == 'n') ADVANCE(988);
      END_STATE();
    case 1362:
      if (lookahead == 'n') ADVANCE(877);
      END_STATE();
    case 1363:
      if (lookahead == 'n') ADVANCE(1565);
      END_STATE();
    case 1364:
      if (lookahead == 'n') ADVANCE(1080);
      END_STATE();
    case 1365:
      if (lookahead == 'n') ADVANCE(996);
      END_STATE();
    case 1366:
      if (lookahead == 'n') ADVANCE(1000);
      END_STATE();
    case 1367:
      if (lookahead == 'n') ADVANCE(1616);
      END_STATE();
    case 1368:
      if (lookahead == 'n') ADVANCE(1594);
      END_STATE();
    case 1369:
      if (lookahead == 'n') ADVANCE(1595);
      END_STATE();
    case 1370:
      if (lookahead == 'n') ADVANCE(1598);
      END_STATE();
    case 1371:
      if (lookahead == 'n') ADVANCE(1599);
      END_STATE();
    case 1372:
      if (lookahead == 'n') ADVANCE(1559);
      END_STATE();
    case 1373:
      if (lookahead == 'n') ADVANCE(1618);
      END_STATE();
    case 1374:
      if (lookahead == 'n') ADVANCE(1603);
      END_STATE();
    case 1375:
      if (lookahead == 'n') ADVANCE(1630);
      END_STATE();
    case 1376:
      if (lookahead == 'n') ADVANCE(1622);
      END_STATE();
    case 1377:
      if (lookahead == 'n') ADVANCE(1187);
      END_STATE();
    case 1378:
      if (lookahead == 'n') ADVANCE(1231);
      END_STATE();
    case 1379:
      if (lookahead == 'n') ADVANCE(875);
      END_STATE();
    case 1380:
      if (lookahead == 'n') ADVANCE(984);
      END_STATE();
    case 1381:
      if (lookahead == 'n') ADVANCE(1007);
      END_STATE();
    case 1382:
      if (lookahead == 'n') ADVANCE(985);
      END_STATE();
    case 1383:
      if (lookahead == 'n') ADVANCE(1124);
      END_STATE();
    case 1384:
      if (lookahead == 'n') ADVANCE(1582);
      END_STATE();
    case 1385:
      if (lookahead == 'n') ADVANCE(1584);
      END_STATE();
    case 1386:
      if (lookahead == 'n') ADVANCE(1259);
      END_STATE();
    case 1387:
      if (lookahead == 'n') ADVANCE(1156);
      END_STATE();
    case 1388:
      if (lookahead == 'o') ADVANCE(1358);
      END_STATE();
    case 1389:
      if (lookahead == 'o') ADVANCE(1868);
      END_STATE();
    case 1390:
      if (lookahead == 'o') ADVANCE(898);
      END_STATE();
    case 1391:
      if (lookahead == 'o') ADVANCE(1495);
      END_STATE();
    case 1392:
      if (lookahead == 'o') ADVANCE(1683);
      END_STATE();
    case 1393:
      if (lookahead == 'o') ADVANCE(1188);
      END_STATE();
    case 1394:
      if (lookahead == 'o') ADVANCE(1562);
      END_STATE();
    case 1395:
      if (lookahead == 'o') ADVANCE(1658);
      END_STATE();
    case 1396:
      if (lookahead == 'o') ADVANCE(1339);
      END_STATE();
    case 1397:
      if (lookahead == 'o') ADVANCE(1662);
      END_STATE();
    case 1398:
      if (lookahead == 'o') ADVANCE(1682);
      END_STATE();
    case 1399:
      if (lookahead == 'o') ADVANCE(1673);
      END_STATE();
    case 1400:
      if (lookahead == 'o') ADVANCE(1362);
      END_STATE();
    case 1401:
      if (lookahead == 'o') ADVANCE(1485);
      END_STATE();
    case 1402:
      if (lookahead == 'o') ADVANCE(1678);
      END_STATE();
    case 1403:
      if (lookahead == 'o') ADVANCE(1348);
      END_STATE();
    case 1404:
      if (lookahead == 'o') ADVANCE(1620);
      END_STATE();
    case 1405:
      if (lookahead == 'o') ADVANCE(1679);
      END_STATE();
    case 1406:
      if (lookahead == 'o') ADVANCE(1518);
      END_STATE();
    case 1407:
      if (lookahead == 'o') ADVANCE(1317);
      END_STATE();
    case 1408:
      if (lookahead == 'o') ADVANCE(1379);
      END_STATE();
    case 1409:
      if (lookahead == 'o') ADVANCE(1445);
      END_STATE();
    case 1410:
      if (lookahead == 'o') ADVANCE(1349);
      END_STATE();
    case 1411:
      if (lookahead == 'o') ADVANCE(1350);
      END_STATE();
    case 1412:
      if (lookahead == 'o') ADVANCE(1523);
      END_STATE();
    case 1413:
      if (lookahead == 'o') ADVANCE(980);
      END_STATE();
    case 1414:
      if (lookahead == 'o') ADVANCE(1409);
      END_STATE();
    case 1415:
      if (lookahead == 'o') ADVANCE(1351);
      END_STATE();
    case 1416:
      if (lookahead == 'o') ADVANCE(1524);
      END_STATE();
    case 1417:
      if (lookahead == 'o') ADVANCE(1352);
      END_STATE();
    case 1418:
      if (lookahead == 'o') ADVANCE(1489);
      END_STATE();
    case 1419:
      if (lookahead == 'o') ADVANCE(1353);
      END_STATE();
    case 1420:
      if (lookahead == 'o') ADVANCE(1354);
      END_STATE();
    case 1421:
      if (lookahead == 'o') ADVANCE(1357);
      END_STATE();
    case 1422:
      if (lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 1423:
      if (lookahead == 'o') ADVANCE(1355);
      END_STATE();
    case 1424:
      if (lookahead == 'o') ADVANCE(1439);
      END_STATE();
    case 1425:
      if (lookahead == 'o') ADVANCE(917);
      END_STATE();
    case 1426:
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 1427:
      if (lookahead == 'o') ADVANCE(1497);
      END_STATE();
    case 1428:
      if (lookahead == 'o') ADVANCE(1492);
      END_STATE();
    case 1429:
      if (lookahead == 'o') ADVANCE(1163);
      END_STATE();
    case 1430:
      if (lookahead == 'o') ADVANCE(1367);
      END_STATE();
    case 1431:
      if (lookahead == 'o') ADVANCE(969);
      END_STATE();
    case 1432:
      if (lookahead == 'o') ADVANCE(1506);
      END_STATE();
    case 1433:
      if (lookahead == 'o') ADVANCE(1368);
      END_STATE();
    case 1434:
      if (lookahead == 'o') ADVANCE(1619);
      END_STATE();
    case 1435:
      if (lookahead == 'o') ADVANCE(1008);
      END_STATE();
    case 1436:
      if (lookahead == 'o') ADVANCE(1373);
      END_STATE();
    case 1437:
      if (lookahead == 'o') ADVANCE(1374);
      END_STATE();
    case 1438:
      if (lookahead == 'o') ADVANCE(1320);
      if (lookahead == 'u') ADVANCE(1281);
      END_STATE();
    case 1439:
      if (lookahead == 'o') ADVANCE(1472);
      END_STATE();
    case 1440:
      if (lookahead == 'o') ADVANCE(1306);
      END_STATE();
    case 1441:
      if (lookahead == 'o') ADVANCE(1306);
      if (lookahead == 'u') ADVANCE(1280);
      END_STATE();
    case 1442:
      if (lookahead == 'o') ADVANCE(1318);
      END_STATE();
    case 1443:
      if (lookahead == 'o') ADVANCE(1319);
      if (lookahead == 'u') ADVANCE(1280);
      END_STATE();
    case 1444:
      if (lookahead == 'o') ADVANCE(1530);
      END_STATE();
    case 1445:
      if (lookahead == 'p') ADVANCE(1892);
      END_STATE();
    case 1446:
      if (lookahead == 'p') ADVANCE(445);
      END_STATE();
    case 1447:
      if (lookahead == 'p') ADVANCE(1473);
      END_STATE();
    case 1448:
      if (lookahead == 'p') ADVANCE(1077);
      END_STATE();
    case 1449:
      if (lookahead == 'p') ADVANCE(1169);
      END_STATE();
    case 1450:
      if (lookahead == 'p') ADVANCE(1030);
      END_STATE();
    case 1451:
      if (lookahead == 'p') ADVANCE(934);
      END_STATE();
    case 1452:
      if (lookahead == 'p') ADVANCE(1556);
      END_STATE();
    case 1453:
      if (lookahead == 'p') ADVANCE(1039);
      END_STATE();
    case 1454:
      if (lookahead == 'p') ADVANCE(1040);
      END_STATE();
    case 1455:
      if (lookahead == 'p') ADVANCE(1103);
      END_STATE();
    case 1456:
      if (lookahead == 'p') ADVANCE(1043);
      END_STATE();
    case 1457:
      if (lookahead == 'p') ADVANCE(1092);
      END_STATE();
    case 1458:
      if (lookahead == 'p') ADVANCE(1047);
      END_STATE();
    case 1459:
      if (lookahead == 'p') ADVANCE(1048);
      END_STATE();
    case 1460:
      if (lookahead == 'p') ADVANCE(1051);
      END_STATE();
    case 1461:
      if (lookahead == 'p') ADVANCE(1052);
      END_STATE();
    case 1462:
      if (lookahead == 'p') ADVANCE(1053);
      END_STATE();
    case 1463:
      if (lookahead == 'p') ADVANCE(1055);
      END_STATE();
    case 1464:
      if (lookahead == 'p') ADVANCE(1057);
      END_STATE();
    case 1465:
      if (lookahead == 'p') ADVANCE(1058);
      END_STATE();
    case 1466:
      if (lookahead == 'p') ADVANCE(1111);
      END_STATE();
    case 1467:
      if (lookahead == 'p') ADVANCE(1061);
      END_STATE();
    case 1468:
      if (lookahead == 'p') ADVANCE(1065);
      END_STATE();
    case 1469:
      if (lookahead == 'p') ADVANCE(1211);
      END_STATE();
    case 1470:
      if (lookahead == 'p') ADVANCE(1541);
      END_STATE();
    case 1471:
      if (lookahead == 'p') ADVANCE(921);
      END_STATE();
    case 1472:
      if (lookahead == 'p') ADVANCE(1222);
      END_STATE();
    case 1473:
      if (lookahead == 'p') ADVANCE(1412);
      END_STATE();
    case 1474:
      if (lookahead == 'p') ADVANCE(1625);
      END_STATE();
    case 1475:
      if (lookahead == 'p') ADVANCE(1109);
      END_STATE();
    case 1476:
      if (lookahead == 'p') ADVANCE(935);
      END_STATE();
    case 1477:
      if (lookahead == 'p') ADVANCE(941);
      END_STATE();
    case 1478:
      if (lookahead == 'p') ADVANCE(1172);
      END_STATE();
    case 1479:
      if (lookahead == 'p') ADVANCE(1140);
      END_STATE();
    case 1480:
      if (lookahead == 'p') ADVANCE(1175);
      END_STATE();
    case 1481:
      if (lookahead == 'p') ADVANCE(1542);
      END_STATE();
    case 1482:
      if (lookahead == 'p') ADVANCE(1543);
      END_STATE();
    case 1483:
      if (lookahead == 'p') ADVANCE(1544);
      END_STATE();
    case 1484:
      if (lookahead == 'r') ADVANCE(925);
      END_STATE();
    case 1485:
      if (lookahead == 'r') ADVANCE(1867);
      END_STATE();
    case 1486:
      if (lookahead == 'r') ADVANCE(846);
      END_STATE();
    case 1487:
      if (lookahead == 'r') ADVANCE(1904);
      END_STATE();
    case 1488:
      if (lookahead == 'r') ADVANCE(1919);
      END_STATE();
    case 1489:
      if (lookahead == 'r') ADVANCE(1888);
      END_STATE();
    case 1490:
      if (lookahead == 'r') ADVANCE(1902);
      END_STATE();
    case 1491:
      if (lookahead == 'r') ADVANCE(1903);
      END_STATE();
    case 1492:
      if (lookahead == 'r') ADVANCE(1866);
      END_STATE();
    case 1493:
      if (lookahead == 'r') ADVANCE(1393);
      END_STATE();
    case 1494:
      if (lookahead == 'r') ADVANCE(845);
      END_STATE();
    case 1495:
      if (lookahead == 'r') ADVANCE(1209);
      END_STATE();
    case 1496:
      if (lookahead == 'r') ADVANCE(1308);
      END_STATE();
    case 1497:
      if (lookahead == 'r') ADVANCE(1704);
      END_STATE();
    case 1498:
      if (lookahead == 'r') ADVANCE(1166);
      END_STATE();
    case 1499:
      if (lookahead == 'r') ADVANCE(871);
      END_STATE();
    case 1500:
      if (lookahead == 'r') ADVANCE(873);
      END_STATE();
    case 1501:
      if (lookahead == 'r') ADVANCE(915);
      END_STATE();
    case 1502:
      if (lookahead == 'r') ADVANCE(1641);
      END_STATE();
    case 1503:
      if (lookahead == 'r') ADVANCE(1405);
      END_STATE();
    case 1504:
      if (lookahead == 'r') ADVANCE(1035);
      END_STATE();
    case 1505:
      if (lookahead == 'r') ADVANCE(1097);
      END_STATE();
    case 1506:
      if (lookahead == 'r') ADVANCE(1557);
      END_STATE();
    case 1507:
      if (lookahead == 'r') ADVANCE(1091);
      END_STATE();
    case 1508:
      if (lookahead == 'r') ADVANCE(1037);
      END_STATE();
    case 1509:
      if (lookahead == 'r') ADVANCE(1038);
      END_STATE();
    case 1510:
      if (lookahead == 'r') ADVANCE(1104);
      END_STATE();
    case 1511:
      if (lookahead == 'r') ADVANCE(1129);
      END_STATE();
    case 1512:
      if (lookahead == 'r') ADVANCE(1059);
      END_STATE();
    case 1513:
      if (lookahead == 'r') ADVANCE(1060);
      END_STATE();
    case 1514:
      if (lookahead == 'r') ADVANCE(1063);
      END_STATE();
    case 1515:
      if (lookahead == 'r') ADVANCE(1066);
      END_STATE();
    case 1516:
      if (lookahead == 'r') ADVANCE(1072);
      END_STATE();
    case 1517:
      if (lookahead == 'r') ADVANCE(1009);
      END_STATE();
    case 1518:
      if (lookahead == 'r') ADVANCE(869);
      END_STATE();
    case 1519:
      if (lookahead == 'r') ADVANCE(1566);
      END_STATE();
    case 1520:
      if (lookahead == 'r') ADVANCE(1613);
      END_STATE();
    case 1521:
      if (lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 1522:
      if (lookahead == 'r') ADVANCE(1383);
      END_STATE();
    case 1523:
      if (lookahead == 'r') ADVANCE(1623);
      END_STATE();
    case 1524:
      if (lookahead == 'r') ADVANCE(1334);
      END_STATE();
    case 1525:
      if (lookahead == 'r') ADVANCE(1326);
      END_STATE();
    case 1526:
      if (lookahead == 'r') ADVANCE(927);
      END_STATE();
    case 1527:
      if (lookahead == 'r') ADVANCE(1131);
      END_STATE();
    case 1528:
      if (lookahead == 'r') ADVANCE(1580);
      END_STATE();
    case 1529:
      if (lookahead == 'r') ADVANCE(930);
      END_STATE();
    case 1530:
      if (lookahead == 'r') ADVANCE(1012);
      END_STATE();
    case 1531:
      if (lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 1532:
      if (lookahead == 'r') ADVANCE(1015);
      END_STATE();
    case 1533:
      if (lookahead == 'r') ADVANCE(1137);
      END_STATE();
    case 1534:
      if (lookahead == 'r') ADVANCE(1138);
      END_STATE();
    case 1535:
      if (lookahead == 'r') ADVANCE(1142);
      END_STATE();
    case 1536:
      if (lookahead == 'r') ADVANCE(1145);
      END_STATE();
    case 1537:
      if (lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 1538:
      if (lookahead == 'r') ADVANCE(1649);
      END_STATE();
    case 1539:
      if (lookahead == 'r') ADVANCE(952);
      END_STATE();
    case 1540:
      if (lookahead == 'r') ADVANCE(1650);
      END_STATE();
    case 1541:
      if (lookahead == 'r') ADVANCE(1252);
      END_STATE();
    case 1542:
      if (lookahead == 'r') ADVANCE(1255);
      END_STATE();
    case 1543:
      if (lookahead == 'r') ADVANCE(1256);
      END_STATE();
    case 1544:
      if (lookahead == 'r') ADVANCE(1258);
      END_STATE();
    case 1545:
      if (lookahead == 's') ADVANCE(1266);
      END_STATE();
    case 1546:
      if (lookahead == 's') ADVANCE(1951);
      END_STATE();
    case 1547:
      if (lookahead == 's') ADVANCE(1793);
      END_STATE();
    case 1548:
      if (lookahead == 's') ADVANCE(958);
      END_STATE();
    case 1549:
      if (lookahead == 's') ADVANCE(1827);
      END_STATE();
    case 1550:
      if (lookahead == 's') ADVANCE(1758);
      END_STATE();
    case 1551:
      if (lookahead == 's') ADVANCE(1757);
      END_STATE();
    case 1552:
      if (lookahead == 's') ADVANCE(1754);
      END_STATE();
    case 1553:
      if (lookahead == 's') ADVANCE(1816);
      END_STATE();
    case 1554:
      if (lookahead == 's') ADVANCE(1898);
      END_STATE();
    case 1555:
      if (lookahead == 's') ADVANCE(1829);
      END_STATE();
    case 1556:
      if (lookahead == 's') ADVANCE(1889);
      END_STATE();
    case 1557:
      if (lookahead == 's') ADVANCE(1765);
      END_STATE();
    case 1558:
      if (lookahead == 's') ADVANCE(1852);
      END_STATE();
    case 1559:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 1560:
      if (lookahead == 's') ADVANCE(1199);
      END_STATE();
    case 1561:
      if (lookahead == 's') ADVANCE(1268);
      END_STATE();
    case 1562:
      if (lookahead == 's') ADVANCE(1212);
      END_STATE();
    case 1563:
      if (lookahead == 's') ADVANCE(1190);
      END_STATE();
    case 1564:
      if (lookahead == 's') ADVANCE(1395);
      END_STATE();
    case 1565:
      if (lookahead == 's') ADVANCE(1451);
      END_STATE();
    case 1566:
      if (lookahead == 's') ADVANCE(1223);
      END_STATE();
    case 1567:
      if (lookahead == 's') ADVANCE(1195);
      END_STATE();
    case 1568:
      if (lookahead == 's') ADVANCE(881);
      END_STATE();
    case 1569:
      if (lookahead == 's') ADVANCE(1548);
      END_STATE();
    case 1570:
      if (lookahead == 's') ADVANCE(1031);
      END_STATE();
    case 1571:
      if (lookahead == 's') ADVANCE(1135);
      END_STATE();
    case 1572:
      if (lookahead == 's') ADVANCE(1101);
      END_STATE();
    case 1573:
      if (lookahead == 's') ADVANCE(1629);
      END_STATE();
    case 1574:
      if (lookahead == 's') ADVANCE(1108);
      END_STATE();
    case 1575:
      if (lookahead == 's') ADVANCE(1054);
      END_STATE();
    case 1576:
      if (lookahead == 's') ADVANCE(1113);
      END_STATE();
    case 1577:
      if (lookahead == 's') ADVANCE(1614);
      END_STATE();
    case 1578:
      if (lookahead == 's') ADVANCE(1617);
      END_STATE();
    case 1579:
      if (lookahead == 's') ADVANCE(1406);
      END_STATE();
    case 1580:
      if (lookahead == 's') ADVANCE(1237);
      END_STATE();
    case 1581:
      if (lookahead == 's') ADVANCE(1244);
      END_STATE();
    case 1582:
      if (lookahead == 's') ADVANCE(1476);
      END_STATE();
    case 1583:
      if (lookahead == 's') ADVANCE(1581);
      END_STATE();
    case 1584:
      if (lookahead == 's') ADVANCE(1477);
      END_STATE();
    case 1585:
      if (lookahead == 's') ADVANCE(1269);
      END_STATE();
    case 1586:
      if (lookahead == 's') ADVANCE(951);
      END_STATE();
    case 1587:
      if (lookahead == 's') ADVANCE(1657);
      END_STATE();
    case 1588:
      if (lookahead == 't') ADVANCE(1869);
      END_STATE();
    case 1589:
      if (lookahead == 't') ADVANCE(1663);
      END_STATE();
    case 1590:
      if (lookahead == 't') ADVANCE(1864);
      END_STATE();
    case 1591:
      if (lookahead == 't') ADVANCE(1088);
      END_STATE();
    case 1592:
      if (lookahead == 't') ADVANCE(1921);
      END_STATE();
    case 1593:
      if (lookahead == 't') ADVANCE(1871);
      END_STATE();
    case 1594:
      if (lookahead == 't') ADVANCE(1767);
      END_STATE();
    case 1595:
      if (lookahead == 't') ADVANCE(1913);
      END_STATE();
    case 1596:
      if (lookahead == 't') ADVANCE(1818);
      END_STATE();
    case 1597:
      if (lookahead == 't') ADVANCE(1764);
      END_STATE();
    case 1598:
      if (lookahead == 't') ADVANCE(1855);
      END_STATE();
    case 1599:
      if (lookahead == 't') ADVANCE(1856);
      END_STATE();
    case 1600:
      if (lookahead == 't') ADVANCE(1842);
      END_STATE();
    case 1601:
      if (lookahead == 't') ADVANCE(957);
      END_STATE();
    case 1602:
      if (lookahead == 't') ADVANCE(842);
      END_STATE();
    case 1603:
      if (lookahead == 't') ADVANCE(1766);
      END_STATE();
    case 1604:
      if (lookahead == 't') ADVANCE(1865);
      END_STATE();
    case 1605:
      if (lookahead == 't') ADVANCE(1920);
      END_STATE();
    case 1606:
      if (lookahead == 't') ADVANCE(1863);
      END_STATE();
    case 1607:
      if (lookahead == 't') ADVANCE(837);
      END_STATE();
    case 1608:
      if (lookahead == 't') ADVANCE(1189);
      END_STATE();
    case 1609:
      if (lookahead == 't') ADVANCE(1189);
      if (lookahead == 'u') ADVANCE(1571);
      END_STATE();
    case 1610:
      if (lookahead == 't') ADVANCE(1504);
      END_STATE();
    case 1611:
      if (lookahead == 't') ADVANCE(1191);
      END_STATE();
    case 1612:
      if (lookahead == 't') ADVANCE(1192);
      END_STATE();
    case 1613:
      if (lookahead == 't') ADVANCE(1214);
      END_STATE();
    case 1614:
      if (lookahead == 't') ADVANCE(1501);
      END_STATE();
    case 1615:
      if (lookahead == 't') ADVANCE(1628);
      END_STATE();
    case 1616:
      if (lookahead == 't') ADVANCE(910);
      END_STATE();
    case 1617:
      if (lookahead == 't') ADVANCE(939);
      END_STATE();
    case 1618:
      if (lookahead == 't') ADVANCE(1550);
      END_STATE();
    case 1619:
      if (lookahead == 't') ADVANCE(945);
      END_STATE();
    case 1620:
      if (lookahead == 't') ADVANCE(1085);
      END_STATE();
    case 1621:
      if (lookahead == 't') ADVANCE(1144);
      END_STATE();
    case 1622:
      if (lookahead == 't') ADVANCE(1559);
      END_STATE();
    case 1623:
      if (lookahead == 't') ADVANCE(1093);
      END_STATE();
    case 1624:
      if (lookahead == 't') ADVANCE(1099);
      END_STATE();
    case 1625:
      if (lookahead == 't') ADVANCE(1120);
      END_STATE();
    case 1626:
      if (lookahead == 't') ADVANCE(1325);
      END_STATE();
    case 1627:
      if (lookahead == 't') ADVANCE(1121);
      END_STATE();
    case 1628:
      if (lookahead == 't') ADVANCE(1217);
      END_STATE();
    case 1629:
      if (lookahead == 't') ADVANCE(1427);
      END_STATE();
    case 1630:
      if (lookahead == 't') ADVANCE(1115);
      END_STATE();
    case 1631:
      if (lookahead == 't') ADVANCE(1665);
      END_STATE();
    case 1632:
      if (lookahead == 't') ADVANCE(843);
      END_STATE();
    case 1633:
      if (lookahead == 't') ADVANCE(1229);
      END_STATE();
    case 1634:
      if (lookahead == 't') ADVANCE(1666);
      END_STATE();
    case 1635:
      if (lookahead == 't') ADVANCE(1234);
      END_STATE();
    case 1636:
      if (lookahead == 't') ADVANCE(1667);
      END_STATE();
    case 1637:
      if (lookahead == 't') ADVANCE(1669);
      END_STATE();
    case 1638:
      if (lookahead == 't') ADVANCE(1238);
      END_STATE();
    case 1639:
      if (lookahead == 't') ADVANCE(1240);
      END_STATE();
    case 1640:
      if (lookahead == 't') ADVANCE(1246);
      END_STATE();
    case 1641:
      if (lookahead == 't') ADVANCE(1716);
      END_STATE();
    case 1642:
      if (lookahead == 't') ADVANCE(1242);
      END_STATE();
    case 1643:
      if (lookahead == 't') ADVANCE(1342);
      END_STATE();
    case 1644:
      if (lookahead == 't') ADVANCE(1670);
      END_STATE();
    case 1645:
      if (lookahead == 't') ADVANCE(851);
      END_STATE();
    case 1646:
      if (lookahead == 't') ADVANCE(1343);
      END_STATE();
    case 1647:
      if (lookahead == 't') ADVANCE(1671);
      END_STATE();
    case 1648:
      if (lookahead == 't') ADVANCE(1672);
      END_STATE();
    case 1649:
      if (lookahead == 't') ADVANCE(853);
      END_STATE();
    case 1650:
      if (lookahead == 't') ADVANCE(855);
      END_STATE();
    case 1651:
      if (lookahead == 't') ADVANCE(1147);
      END_STATE();
    case 1652:
      if (lookahead == 't') ADVANCE(1148);
      END_STATE();
    case 1653:
      if (lookahead == 't') ADVANCE(1149);
      END_STATE();
    case 1654:
      if (lookahead == 't') ADVANCE(1150);
      END_STATE();
    case 1655:
      if (lookahead == 't') ADVANCE(1151);
      END_STATE();
    case 1656:
      if (lookahead == 't') ADVANCE(1152);
      END_STATE();
    case 1657:
      if (lookahead == 't') ADVANCE(1539);
      END_STATE();
    case 1658:
      if (lookahead == 'u') ADVANCE(1365);
      END_STATE();
    case 1659:
      if (lookahead == 'u') ADVANCE(1280);
      END_STATE();
    case 1660:
      if (lookahead == 'u') ADVANCE(1315);
      END_STATE();
    case 1661:
      if (lookahead == 'u') ADVANCE(1571);
      END_STATE();
    case 1662:
      if (lookahead == 'u') ADVANCE(1369);
      END_STATE();
    case 1663:
      if (lookahead == 'u') ADVANCE(1508);
      END_STATE();
    case 1664:
      if (lookahead == 'u') ADVANCE(1575);
      END_STATE();
    case 1665:
      if (lookahead == 'u') ADVANCE(1514);
      END_STATE();
    case 1666:
      if (lookahead == 'u') ADVANCE(1515);
      END_STATE();
    case 1667:
      if (lookahead == 'u') ADVANCE(1516);
      END_STATE();
    case 1668:
      if (lookahead == 'u') ADVANCE(1316);
      END_STATE();
    case 1669:
      if (lookahead == 'u') ADVANCE(1533);
      END_STATE();
    case 1670:
      if (lookahead == 'u') ADVANCE(1534);
      END_STATE();
    case 1671:
      if (lookahead == 'u') ADVANCE(1535);
      END_STATE();
    case 1672:
      if (lookahead == 'u') ADVANCE(1536);
      END_STATE();
    case 1673:
      if (lookahead == 'u') ADVANCE(1652);
      END_STATE();
    case 1674:
      if (lookahead == 'v') ADVANCE(1036);
      END_STATE();
    case 1675:
      if (lookahead == 'v') ADVANCE(1083);
      END_STATE();
    case 1676:
      if (lookahead == 'v') ADVANCE(1134);
      END_STATE();
    case 1677:
      if (lookahead == 'v') ADVANCE(1139);
      END_STATE();
    case 1678:
      if (lookahead == 'w') ADVANCE(1891);
      END_STATE();
    case 1679:
      if (lookahead == 'w') ADVANCE(1828);
      END_STATE();
    case 1680:
      if (lookahead == 'w') ADVANCE(1213);
      END_STATE();
    case 1681:
      if (lookahead == 'w') ADVANCE(1389);
      END_STATE();
    case 1682:
      if (lookahead == 'w') ADVANCE(1555);
      END_STATE();
    case 1683:
      if (lookahead == 'w') ADVANCE(850);
      END_STATE();
    case 1684:
      if (lookahead == 'w') ADVANCE(955);
      END_STATE();
    case 1685:
      if (lookahead == 'x') ADVANCE(1899);
      END_STATE();
    case 1686:
      if (lookahead == 'x') ADVANCE(1330);
      END_STATE();
    case 1687:
      if (lookahead == 'x') ADVANCE(445);
      END_STATE();
    case 1688:
      if (lookahead == 'x') ADVANCE(1590);
      END_STATE();
    case 1689:
      if (lookahead == 'x') ADVANCE(1597);
      END_STATE();
    case 1690:
      if (lookahead == 'x') ADVANCE(1601);
      END_STATE();
    case 1691:
      if (lookahead == 'x') ADVANCE(1602);
      END_STATE();
    case 1692:
      if (lookahead == 'x') ADVANCE(1604);
      END_STATE();
    case 1693:
      if (lookahead == 'x') ADVANCE(1606);
      END_STATE();
    case 1694:
      if (lookahead == 'x') ADVANCE(1631);
      END_STATE();
    case 1695:
      if (lookahead == 'x') ADVANCE(1632);
      END_STATE();
    case 1696:
      if (lookahead == 'x') ADVANCE(1634);
      END_STATE();
    case 1697:
      if (lookahead == 'x') ADVANCE(1636);
      END_STATE();
    case 1698:
      if (lookahead == 'x') ADVANCE(1637);
      END_STATE();
    case 1699:
      if (lookahead == 'x') ADVANCE(1644);
      END_STATE();
    case 1700:
      if (lookahead == 'x') ADVANCE(1647);
      END_STATE();
    case 1701:
      if (lookahead == 'x') ADVANCE(1648);
      END_STATE();
    case 1702:
      if (lookahead == 'y') ADVANCE(1841);
      END_STATE();
    case 1703:
      if (lookahead == 'y') ADVANCE(867);
      END_STATE();
    case 1704:
      if (lookahead == 'y') ADVANCE(445);
      END_STATE();
    case 1705:
      if (lookahead == 'y') ADVANCE(878);
      END_STATE();
    case 1706:
      if (lookahead == 'y') ADVANCE(863);
      END_STATE();
    case 1707:
      if (lookahead == 'y') ADVANCE(1577);
      END_STATE();
    case 1708:
      if (lookahead == 'y') ADVANCE(1453);
      END_STATE();
    case 1709:
      if (lookahead == 'y') ADVANCE(1454);
      END_STATE();
    case 1710:
      if (lookahead == 'y') ADVANCE(1455);
      END_STATE();
    case 1711:
      if (lookahead == 'y') ADVANCE(1456);
      END_STATE();
    case 1712:
      if (lookahead == 'y') ADVANCE(1458);
      END_STATE();
    case 1713:
      if (lookahead == 'y') ADVANCE(1459);
      END_STATE();
    case 1714:
      if (lookahead == 'y') ADVANCE(1460);
      END_STATE();
    case 1715:
      if (lookahead == 'y') ADVANCE(1461);
      END_STATE();
    case 1716:
      if (lookahead == 'y') ADVANCE(1462);
      END_STATE();
    case 1717:
      if (lookahead == 'y') ADVANCE(1463);
      END_STATE();
    case 1718:
      if (lookahead == 'y') ADVANCE(1464);
      END_STATE();
    case 1719:
      if (lookahead == 'y') ADVANCE(1465);
      END_STATE();
    case 1720:
      if (lookahead == 'y') ADVANCE(1466);
      END_STATE();
    case 1721:
      if (lookahead == 'y') ADVANCE(1467);
      END_STATE();
    case 1722:
      if (lookahead == 'y') ADVANCE(880);
      END_STATE();
    case 1723:
      if (lookahead == 'y') ADVANCE(1587);
      END_STATE();
    case 1724:
      if (lookahead == 'z') ADVANCE(1430);
      END_STATE();
    case 1725:
      if (lookahead == 'z') ADVANCE(1028);
      END_STATE();
    case 1726:
      if (lookahead == 'z') ADVANCE(1041);
      END_STATE();
    case 1727:
      if (lookahead == 'z') ADVANCE(1722);
      END_STATE();
    case 1728:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1235);
      END_STATE();
    case 1729:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1243);
      END_STATE();
    case 1730:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1248);
      END_STATE();
    case 1731:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1249);
      END_STATE();
    case 1732:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1931);
      END_STATE();
    case 1733:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1932);
      END_STATE();
    case 1734:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1938);
      END_STATE();
    case 1735:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1939);
      END_STATE();
    case 1736:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 1737:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1948);
      END_STATE();
    case 1738:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1934);
      END_STATE();
    case 1739:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1935);
      END_STATE();
    case 1740:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1947);
      END_STATE();
    case 1741:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1946);
      END_STATE();
    case 1742:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1740);
      END_STATE();
    case 1743:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1741);
      END_STATE();
    case 1744:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1742);
      END_STATE();
    case 1745:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1743);
      END_STATE();
    case 1746:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1744);
      END_STATE();
    case 1747:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(823);
      END_STATE();
    case 1748:
      if (eof) ADVANCE(1753);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 1749:
      if (eof) ADVANCE(1753);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(1748)
      END_STATE();
    case 1750:
      if (eof) ADVANCE(1753);
      if (lookahead == '\n') SKIP(1752)
      END_STATE();
    case 1751:
      if (eof) ADVANCE(1753);
      if (lookahead == '\n') SKIP(1752)
      if (lookahead == '\r') SKIP(1750)
      END_STATE();
    case 1752:
      if (eof) ADVANCE(1753);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(1954);
      if (lookahead == '=') ADVANCE(1926);
      if (lookahead == '\\') SKIP(1751)
      if (lookahead == 'a') ADVANCE(1272);
      if (lookahead == 'b') ADVANCE(1251);
      if (lookahead == 'c') ADVANCE(1312);
      if (lookahead == 'd') ADVANCE(1018);
      if (lookahead == 'e') ADVANCE(1158);
      if (lookahead == 'f') ADVANCE(1204);
      if (lookahead == 'h') ADVANCE(1391);
      if (lookahead == 'i') ADVANCE(1347);
      if (lookahead == 'l') ADVANCE(1019);
      if (lookahead == 'm') ADVANCE(1074);
      if (lookahead == 'n') ADVANCE(888);
      if (lookahead == 'o') ADVANCE(956);
      if (lookahead == 'p') ADVANCE(894);
      if (lookahead == 'r') ADVANCE(1022);
      if (lookahead == 's') ADVANCE(965);
      if (lookahead == 't') ADVANCE(900);
      if (lookahead == 'v') ADVANCE(1078);
      if (lookahead == 'x') ADVANCE(1777);
      if (lookahead == 'y') ADVANCE(1778);
      if (lookahead == '}') ADVANCE(1756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1752)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1940);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(anon_sym_objectTypes);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(anon_sym_bitmapfonts);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(1754);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(anon_sym_textSpriteType);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(anon_sym_corneredTileSpriteType);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(anon_sym_maskedShieldType);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(anon_sym_animatedmaptext);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(anon_sym_textcolors);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      if (lookahead == 's') ADVANCE(1758);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(anon_sym_frameAnimatedSpriteType);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(anon_sym_progressbartype);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(anon_sym_pdxmesh);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(anon_sym_pdxparticle);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(anon_sym_arrowType);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(anon_sym_tradeRouteType);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(anon_sym_PieChartType);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(anon_sym_LineChartType);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(1546);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym__statement_gfx_name_token1);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '1') ADVANCE(1823);
      if (lookahead == '2') ADVANCE(1824);
      if (lookahead == '3') ADVANCE(1825);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '2') ADVANCE(1824);
      if (lookahead == '3') ADVANCE(1825);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token2);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile1_token1);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile2_token1);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile3_token1);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1521);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1521);
      if (lookahead == 'b') ADVANCE(1297);
      if (lookahead == 'd') ADVANCE(1127);
      if (lookahead == 'r') ADVANCE(1434);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(1170);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(anon_sym_borderSize);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_alwaystransparent);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_allwaystransparent);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_legacy_lazy_load);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_clicksound);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == 's') ADVANCE(1395);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(anon_sym_speed);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_textblock);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'S') ADVANCE(1470);
      if (lookahead == 'b') ADVANCE(1284);
      if (lookahead == 'u') ADVANCE(1509);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'u') ADVANCE(1535);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == 't') ADVANCE(1681);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_colortwo);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(anon_sym_cull_distance);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'i') ADVANCE(1626);
      if (lookahead == 'o') ADVANCE(1517);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(1185);
      if (lookahead == 'i') ADVANCE(1364);
      if (lookahead == 'o') ADVANCE(898);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(anon_sym_border_color);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(anon_sym_animation_rate_fps);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(anon_sym_looping);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_play_on_show);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(anon_sym_pause_on_loop);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(aux_sym__statement_gfx_file_token1);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(anon_sym_meshsettings);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_texture_diffuse);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_texture_normal);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_texture_specular);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_shader);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_shader);
      if (lookahead == '_') ADVANCE(1174);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym__statement_gfx_meshsettings_shader_token1);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_shader_file);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(aux_sym__statement_gfx_meshsettings_shader_file_token1);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_transparencecheck);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(anon_sym_loadType);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_DQUOTEINGAME_DQUOTE);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_DQUOTEFRONTEND_DQUOTE);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_norefcount);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(anon_sym_texture);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == '_') ADVANCE(1004);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1235);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1235);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_texture);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1248);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(anon_sym_specular);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(anon_sym_effect);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_effect);
      if (lookahead == 'F') ADVANCE(1227);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effect_token1);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_alphamaskfile);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym__statement_gfx_alphamaskfile_token1);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(anon_sym_linewidth);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1733);
      if (lookahead == '5') ADVANCE(1930);
      if (lookahead == 'f') ADVANCE(1928);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1931);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1931);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1733);
      if (lookahead == 'f') ADVANCE(1928);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1931);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1931);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1733);
      if (lookahead == 'f') ADVANCE(1928);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1931);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(1928);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1932);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(1739);
      if (lookahead == 'f') ADVANCE(1933);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1934);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(1933);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1935);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      if (lookahead == '.') ADVANCE(1734);
      if (lookahead == 'f') ADVANCE(1936);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1937);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym__float_positive_token1);
      if (lookahead == 'f') ADVANCE(1936);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1938);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1939);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1940);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead == '5') ADVANCE(1943);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1941);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1944);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1941);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1941);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1944);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(sym_hexadecimal);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1745);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'O') ADVANCE(1157);
      if (lookahead == 'r') ADVANCE(1082);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1954);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1752},
  [2] = {.lex_state = 1752},
  [3] = {.lex_state = 1752},
  [4] = {.lex_state = 535},
  [5] = {.lex_state = 535},
  [6] = {.lex_state = 535},
  [7] = {.lex_state = 536},
  [8] = {.lex_state = 537},
  [9] = {.lex_state = 536},
  [10] = {.lex_state = 537},
  [11] = {.lex_state = 537},
  [12] = {.lex_state = 536},
  [13] = {.lex_state = 536},
  [14] = {.lex_state = 538},
  [15] = {.lex_state = 538},
  [16] = {.lex_state = 536},
  [17] = {.lex_state = 1752},
  [18] = {.lex_state = 1752},
  [19] = {.lex_state = 536},
  [20] = {.lex_state = 1752},
  [21] = {.lex_state = 536},
  [22] = {.lex_state = 536},
  [23] = {.lex_state = 536},
  [24] = {.lex_state = 536},
  [25] = {.lex_state = 536},
  [26] = {.lex_state = 536},
  [27] = {.lex_state = 539},
  [28] = {.lex_state = 535},
  [29] = {.lex_state = 535},
  [30] = {.lex_state = 535},
  [31] = {.lex_state = 535},
  [32] = {.lex_state = 539},
  [33] = {.lex_state = 535},
  [34] = {.lex_state = 535},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 535},
  [38] = {.lex_state = 535},
  [39] = {.lex_state = 535},
  [40] = {.lex_state = 537},
  [41] = {.lex_state = 537},
  [42] = {.lex_state = 537},
  [43] = {.lex_state = 543},
  [44] = {.lex_state = 543},
  [45] = {.lex_state = 543},
  [46] = {.lex_state = 543},
  [47] = {.lex_state = 543},
  [48] = {.lex_state = 543},
  [49] = {.lex_state = 535},
  [50] = {.lex_state = 540},
  [51] = {.lex_state = 535},
  [52] = {.lex_state = 541},
  [53] = {.lex_state = 536},
  [54] = {.lex_state = 540},
  [55] = {.lex_state = 535},
  [56] = {.lex_state = 535},
  [57] = {.lex_state = 535},
  [58] = {.lex_state = 535},
  [59] = {.lex_state = 535},
  [60] = {.lex_state = 535},
  [61] = {.lex_state = 542},
  [62] = {.lex_state = 536},
  [63] = {.lex_state = 541},
  [64] = {.lex_state = 535},
  [65] = {.lex_state = 535},
  [66] = {.lex_state = 544},
  [67] = {.lex_state = 542},
  [68] = {.lex_state = 535},
  [69] = {.lex_state = 535},
  [70] = {.lex_state = 535},
  [71] = {.lex_state = 544},
  [72] = {.lex_state = 535},
  [73] = {.lex_state = 544},
  [74] = {.lex_state = 543},
  [75] = {.lex_state = 542},
  [76] = {.lex_state = 535},
  [77] = {.lex_state = 542},
  [78] = {.lex_state = 542},
  [79] = {.lex_state = 537},
  [80] = {.lex_state = 543},
  [81] = {.lex_state = 540},
  [82] = {.lex_state = 541},
  [83] = {.lex_state = 541},
  [84] = {.lex_state = 541},
  [85] = {.lex_state = 537},
  [86] = {.lex_state = 537},
  [87] = {.lex_state = 537},
  [88] = {.lex_state = 542},
  [89] = {.lex_state = 535},
  [90] = {.lex_state = 542},
  [91] = {.lex_state = 542},
  [92] = {.lex_state = 537},
  [93] = {.lex_state = 537},
  [94] = {.lex_state = 537},
  [95] = {.lex_state = 537},
  [96] = {.lex_state = 540},
  [97] = {.lex_state = 541},
  [98] = {.lex_state = 537},
  [99] = {.lex_state = 535},
  [100] = {.lex_state = 535},
  [101] = {.lex_state = 537},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 537},
  [104] = {.lex_state = 537},
  [105] = {.lex_state = 541},
  [106] = {.lex_state = 537},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 537},
  [109] = {.lex_state = 540},
  [110] = {.lex_state = 537},
  [111] = {.lex_state = 540},
  [112] = {.lex_state = 537},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 537},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 537},
  [117] = {.lex_state = 545},
  [118] = {.lex_state = 545},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 537},
  [129] = {.lex_state = 537},
  [130] = {.lex_state = 535},
  [131] = {.lex_state = 537},
  [132] = {.lex_state = 545},
  [133] = {.lex_state = 537},
  [134] = {.lex_state = 537},
  [135] = {.lex_state = 537},
  [136] = {.lex_state = 537},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 546},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 543},
  [150] = {.lex_state = 543},
  [151] = {.lex_state = 543},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 535},
  [155] = {.lex_state = 535},
  [156] = {.lex_state = 535},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 535},
  [159] = {.lex_state = 535},
  [160] = {.lex_state = 535},
  [161] = {.lex_state = 535},
  [162] = {.lex_state = 535},
  [163] = {.lex_state = 535},
  [164] = {.lex_state = 535},
  [165] = {.lex_state = 543},
  [166] = {.lex_state = 535},
  [167] = {.lex_state = 543},
  [168] = {.lex_state = 543},
  [169] = {.lex_state = 535},
  [170] = {.lex_state = 535},
  [171] = {.lex_state = 535},
  [172] = {.lex_state = 546},
  [173] = {.lex_state = 535},
  [174] = {.lex_state = 535},
  [175] = {.lex_state = 535},
  [176] = {.lex_state = 535},
  [177] = {.lex_state = 535},
  [178] = {.lex_state = 535},
  [179] = {.lex_state = 535},
  [180] = {.lex_state = 543},
  [181] = {.lex_state = 543},
  [182] = {.lex_state = 535},
  [183] = {.lex_state = 535},
  [184] = {.lex_state = 535},
  [185] = {.lex_state = 535},
  [186] = {.lex_state = 535},
  [187] = {.lex_state = 535},
  [188] = {.lex_state = 544},
  [189] = {.lex_state = 544},
  [190] = {.lex_state = 542},
  [191] = {.lex_state = 542},
  [192] = {.lex_state = 542},
  [193] = {.lex_state = 542},
  [194] = {.lex_state = 542},
  [195] = {.lex_state = 544},
  [196] = {.lex_state = 544},
  [197] = {.lex_state = 542},
  [198] = {.lex_state = 542},
  [199] = {.lex_state = 544},
  [200] = {.lex_state = 542},
  [201] = {.lex_state = 535},
  [202] = {.lex_state = 544},
  [203] = {.lex_state = 1752},
  [204] = {.lex_state = 542},
  [205] = {.lex_state = 1752},
  [206] = {.lex_state = 542},
  [207] = {.lex_state = 535},
  [208] = {.lex_state = 535},
  [209] = {.lex_state = 535},
  [210] = {.lex_state = 544},
  [211] = {.lex_state = 535},
  [212] = {.lex_state = 1752},
  [213] = {.lex_state = 542},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1752},
  [216] = {.lex_state = 544},
  [217] = {.lex_state = 1752},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 544},
  [220] = {.lex_state = 542},
  [221] = {.lex_state = 542},
  [222] = {.lex_state = 544},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 1752},
  [225] = {.lex_state = 1752},
  [226] = {.lex_state = 542},
  [227] = {.lex_state = 544},
  [228] = {.lex_state = 1752},
  [229] = {.lex_state = 544},
  [230] = {.lex_state = 535},
  [231] = {.lex_state = 542},
  [232] = {.lex_state = 535},
  [233] = {.lex_state = 535},
  [234] = {.lex_state = 545},
  [235] = {.lex_state = 545},
  [236] = {.lex_state = 535},
  [237] = {.lex_state = 545},
  [238] = {.lex_state = 535},
  [239] = {.lex_state = 535},
  [240] = {.lex_state = 535},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 545},
  [245] = {.lex_state = 545},
  [246] = {.lex_state = 545},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 545},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 1752},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 1752},
  [266] = {.lex_state = 1752},
  [267] = {.lex_state = 1752},
  [268] = {.lex_state = 1752},
  [269] = {.lex_state = 1752},
  [270] = {.lex_state = 1752},
  [271] = {.lex_state = 1752},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 1752},
  [274] = {.lex_state = 1752},
  [275] = {.lex_state = 1752},
  [276] = {.lex_state = 1752},
  [277] = {.lex_state = 1752},
  [278] = {.lex_state = 1752},
  [279] = {.lex_state = 1752},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 1752},
  [282] = {.lex_state = 1752},
  [283] = {.lex_state = 1752},
  [284] = {.lex_state = 1752},
  [285] = {.lex_state = 1752},
  [286] = {.lex_state = 1752},
  [287] = {.lex_state = 1752},
  [288] = {.lex_state = 1752},
  [289] = {.lex_state = 1752},
  [290] = {.lex_state = 1752},
  [291] = {.lex_state = 1752},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 535},
  [294] = {.lex_state = 535},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 535},
  [297] = {.lex_state = 541},
  [298] = {.lex_state = 1752},
  [299] = {.lex_state = 1752},
  [300] = {.lex_state = 541},
  [301] = {.lex_state = 535},
  [302] = {.lex_state = 1752},
  [303] = {.lex_state = 541},
  [304] = {.lex_state = 535},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 535},
  [307] = {.lex_state = 535},
  [308] = {.lex_state = 541},
  [309] = {.lex_state = 1752},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 541},
  [312] = {.lex_state = 541},
  [313] = {.lex_state = 541},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 1752},
  [316] = {.lex_state = 541},
  [317] = {.lex_state = 541},
  [318] = {.lex_state = 541},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 535},
  [321] = {.lex_state = 535},
  [322] = {.lex_state = 535},
  [323] = {.lex_state = 535},
  [324] = {.lex_state = 536},
  [325] = {.lex_state = 1752},
  [326] = {.lex_state = 1752},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 1752},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 535},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 1752},
  [346] = {.lex_state = 535},
  [347] = {.lex_state = 535},
  [348] = {.lex_state = 1752},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 1752},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 535},
  [354] = {.lex_state = 535},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 1752},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 535},
  [359] = {.lex_state = 535},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 1752},
  [364] = {.lex_state = 535},
  [365] = {.lex_state = 536},
  [366] = {.lex_state = 535},
  [367] = {.lex_state = 1752},
  [368] = {.lex_state = 1752},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 1752},
  [371] = {.lex_state = 535},
  [372] = {.lex_state = 535},
  [373] = {.lex_state = 535},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 1752},
  [376] = {.lex_state = 535},
  [377] = {.lex_state = 535},
  [378] = {.lex_state = 535},
  [379] = {.lex_state = 535},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 535},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 537},
  [387] = {.lex_state = 535},
  [388] = {.lex_state = 535},
  [389] = {.lex_state = 1752},
  [390] = {.lex_state = 1752},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 1752},
  [394] = {.lex_state = 536},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 536},
  [399] = {.lex_state = 536},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 535},
  [402] = {.lex_state = 535},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 1752},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 1752},
  [407] = {.lex_state = 535},
  [408] = {.lex_state = 1752},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 1752},
  [411] = {.lex_state = 537},
  [412] = {.lex_state = 537},
  [413] = {.lex_state = 1752},
  [414] = {.lex_state = 537},
  [415] = {.lex_state = 1752},
  [416] = {.lex_state = 1752},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 535},
  [419] = {.lex_state = 535},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 1752},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 538},
  [427] = {.lex_state = 538},
  [428] = {.lex_state = 538},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 535},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 535},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 536},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 538},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 535},
  [447] = {.lex_state = 1752},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 539},
  [452] = {.lex_state = 539},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 537},
  [457] = {.lex_state = 1752},
  [458] = {.lex_state = 535},
  [459] = {.lex_state = 1752},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 537},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 535},
  [465] = {.lex_state = 1752},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 535},
  [469] = {.lex_state = 1752},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 1752},
  [473] = {.lex_state = 1752},
  [474] = {.lex_state = 538},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 538},
  [482] = {.lex_state = 538},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 538},
  [486] = {.lex_state = 535},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 1752},
  [490] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_spriteTypes] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_objectTypes] = ACTIONS(1),
    [anon_sym_bitmapfonts] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(476),
    [sym_dot_mod] = STATE(455),
    [sym_dot_gfx] = STATE(455),
    [sym__spriteTypes] = STATE(215),
    [sym__objectTypes] = STATE(215),
    [sym__bitmapfonts] = STATE(215),
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
    [aux_sym_dot_gfx_repeat1] = STATE(215),
    [anon_sym_spriteTypes] = ACTIONS(5),
    [anon_sym_objectTypes] = ACTIONS(7),
    [anon_sym_bitmapfonts] = ACTIONS(9),
    [anon_sym_name] = ACTIONS(11),
    [anon_sym_path] = ACTIONS(13),
    [anon_sym_archive] = ACTIONS(15),
    [anon_sym_remote_file_id] = ACTIONS(17),
    [anon_sym_version] = ACTIONS(19),
    [anon_sym_picture] = ACTIONS(21),
    [anon_sym_supported_version] = ACTIONS(23),
    [anon_sym_replace_path] = ACTIONS(25),
    [anon_sym_tags] = ACTIONS(27),
    [anon_sym_dependencies] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_assign_equal,
    ACTIONS(33), 5,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
      anon_sym_texture,
      anon_sym_effect,
    ACTIONS(31), 36,
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
    ACTIONS(39), 5,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
      anon_sym_texture,
      anon_sym_effect,
    ACTIONS(37), 36,
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
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_name,
    ACTIONS(46), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(49), 1,
      anon_sym_noOfFrames,
    ACTIONS(52), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(55), 1,
      anon_sym_overlay_rows,
    ACTIONS(58), 1,
      anon_sym_effectFile,
    ACTIONS(61), 1,
      anon_sym_animation,
    ACTIONS(64), 1,
      anon_sym_alwaystransparent,
    ACTIONS(67), 1,
      anon_sym_allwaystransparent,
    ACTIONS(70), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(73), 1,
      anon_sym_clicksound,
    ACTIONS(76), 1,
      anon_sym_transparencecheck,
    ACTIONS(79), 1,
      anon_sym_loadType,
    ACTIONS(82), 1,
      anon_sym_norefcount,
    ACTIONS(85), 1,
      anon_sym_alphamaskfile,
    STATE(76), 1,
      sym__statement_gfx_name,
    STATE(4), 15,
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
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(92), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(94), 1,
      anon_sym_noOfFrames,
    ACTIONS(96), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(98), 1,
      anon_sym_overlay_rows,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(102), 1,
      anon_sym_animation,
    ACTIONS(104), 1,
      anon_sym_alwaystransparent,
    ACTIONS(106), 1,
      anon_sym_allwaystransparent,
    ACTIONS(108), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(110), 1,
      anon_sym_clicksound,
    ACTIONS(112), 1,
      anon_sym_transparencecheck,
    ACTIONS(114), 1,
      anon_sym_loadType,
    ACTIONS(116), 1,
      anon_sym_norefcount,
    ACTIONS(118), 1,
      anon_sym_alphamaskfile,
    STATE(76), 1,
      sym__statement_gfx_name,
    STATE(4), 15,
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
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(92), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(94), 1,
      anon_sym_noOfFrames,
    ACTIONS(96), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(98), 1,
      anon_sym_overlay_rows,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(102), 1,
      anon_sym_animation,
    ACTIONS(104), 1,
      anon_sym_alwaystransparent,
    ACTIONS(106), 1,
      anon_sym_allwaystransparent,
    ACTIONS(108), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(110), 1,
      anon_sym_clicksound,
    ACTIONS(112), 1,
      anon_sym_transparencecheck,
    ACTIONS(114), 1,
      anon_sym_loadType,
    ACTIONS(116), 1,
      anon_sym_norefcount,
    ACTIONS(118), 1,
      anon_sym_alphamaskfile,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
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
    ACTIONS(126), 1,
      sym_assign_equal,
    ACTIONS(124), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(122), 25,
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
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(92), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(94), 1,
      anon_sym_noOfFrames,
    ACTIONS(96), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(98), 1,
      anon_sym_overlay_rows,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(106), 1,
      anon_sym_allwaystransparent,
    ACTIONS(112), 1,
      anon_sym_transparencecheck,
    ACTIONS(114), 1,
      anon_sym_loadType,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(132), 1,
      anon_sym_looping,
    ACTIONS(134), 1,
      anon_sym_play_on_show,
    ACTIONS(136), 1,
      anon_sym_pause_on_loop,
    STATE(98), 1,
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
  [420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_assign_equal,
    ACTIONS(140), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(138), 24,
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
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(92), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(94), 1,
      anon_sym_noOfFrames,
    ACTIONS(96), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(98), 1,
      anon_sym_overlay_rows,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(106), 1,
      anon_sym_allwaystransparent,
    ACTIONS(112), 1,
      anon_sym_transparencecheck,
    ACTIONS(114), 1,
      anon_sym_loadType,
    ACTIONS(130), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(132), 1,
      anon_sym_looping,
    ACTIONS(134), 1,
      anon_sym_play_on_show,
    ACTIONS(136), 1,
      anon_sym_pause_on_loop,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
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
  [522] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      anon_sym_name,
    ACTIONS(151), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(154), 1,
      anon_sym_noOfFrames,
    ACTIONS(157), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(160), 1,
      anon_sym_overlay_rows,
    ACTIONS(163), 1,
      anon_sym_effectFile,
    ACTIONS(166), 1,
      anon_sym_allwaystransparent,
    ACTIONS(169), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(172), 1,
      anon_sym_looping,
    ACTIONS(175), 1,
      anon_sym_play_on_show,
    ACTIONS(178), 1,
      anon_sym_pause_on_loop,
    ACTIONS(181), 1,
      anon_sym_transparencecheck,
    ACTIONS(184), 1,
      anon_sym_loadType,
    STATE(98), 1,
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
    ACTIONS(189), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(187), 25,
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
  [622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(191), 24,
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
  [657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_assign_equal,
    ACTIONS(197), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_effect,
    ACTIONS(195), 23,
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
  [694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_effect,
    ACTIONS(201), 23,
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
  [728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_assign_equal,
    ACTIONS(207), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(205), 23,
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
  [764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(213), 22,
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
  [799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(218), 22,
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
  [834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(220), 23,
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
  [867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(226), 22,
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
    ACTIONS(232), 1,
      sym_assign_equal,
    ACTIONS(230), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(228), 21,
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
    ACTIONS(238), 1,
      sym_assign_equal,
    ACTIONS(236), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(234), 21,
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
  [1004] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [1035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(250), 21,
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
  [1066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(254), 21,
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
  [1097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_animation,
    ACTIONS(262), 1,
      sym_assign_equal,
    ACTIONS(258), 21,
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
  [1130] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(92), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(94), 1,
      anon_sym_noOfFrames,
    ACTIONS(96), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(98), 1,
      anon_sym_overlay_rows,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(106), 1,
      anon_sym_allwaystransparent,
    ACTIONS(110), 1,
      anon_sym_clicksound,
    ACTIONS(112), 1,
      anon_sym_transparencecheck,
    ACTIONS(114), 1,
      anon_sym_loadType,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
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
  [1182] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(92), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(94), 1,
      anon_sym_noOfFrames,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(106), 1,
      anon_sym_allwaystransparent,
    ACTIONS(108), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(114), 1,
      anon_sym_loadType,
    ACTIONS(116), 1,
      anon_sym_norefcount,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 1,
      anon_sym_size,
    ACTIONS(270), 1,
      anon_sym_borderSize,
    STATE(155), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
    STATE(30), 9,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      sym__statement_gfx_loadType,
      sym__statement_gfx_norefcount,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1234] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(92), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(94), 1,
      anon_sym_noOfFrames,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(106), 1,
      anon_sym_allwaystransparent,
    ACTIONS(108), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(114), 1,
      anon_sym_loadType,
    ACTIONS(116), 1,
      anon_sym_norefcount,
    ACTIONS(268), 1,
      anon_sym_size,
    ACTIONS(270), 1,
      anon_sym_borderSize,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(155), 2,
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
  [1286] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      anon_sym_name,
    ACTIONS(279), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(282), 1,
      anon_sym_noOfFrames,
    ACTIONS(285), 1,
      anon_sym_effectFile,
    ACTIONS(288), 1,
      anon_sym_size,
    ACTIONS(291), 1,
      anon_sym_borderSize,
    ACTIONS(294), 1,
      anon_sym_allwaystransparent,
    ACTIONS(297), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(300), 1,
      anon_sym_loadType,
    ACTIONS(303), 1,
      anon_sym_norefcount,
    STATE(155), 2,
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
  [1338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_animation,
    ACTIONS(306), 21,
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
  [1368] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 1,
      anon_sym_spriteType,
    ACTIONS(314), 1,
      anon_sym_textSpriteType,
    ACTIONS(316), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(318), 1,
      anon_sym_maskedShieldType,
    ACTIONS(320), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(322), 1,
      anon_sym_progressbartype,
    ACTIONS(324), 1,
      anon_sym_PieChartType,
    ACTIONS(326), 1,
      anon_sym_LineChartType,
    ACTIONS(328), 1,
      anon_sym_cursor_offset,
    STATE(37), 12,
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
  [1416] = 14,
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
      anon_sym_overlay_frames_per_row,
    ACTIONS(344), 1,
      anon_sym_overlay_rows,
    ACTIONS(347), 1,
      anon_sym_effectFile,
    ACTIONS(350), 1,
      anon_sym_allwaystransparent,
    ACTIONS(353), 1,
      anon_sym_clicksound,
    ACTIONS(356), 1,
      anon_sym_transparencecheck,
    ACTIONS(359), 1,
      anon_sym_loadType,
    STATE(156), 1,
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
  [1468] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_name,
    ACTIONS(13), 1,
      anon_sym_path,
    ACTIONS(15), 1,
      anon_sym_archive,
    ACTIONS(17), 1,
      anon_sym_remote_file_id,
    ACTIONS(19), 1,
      anon_sym_version,
    ACTIONS(21), 1,
      anon_sym_picture,
    ACTIONS(23), 1,
      anon_sym_supported_version,
    ACTIONS(25), 1,
      anon_sym_replace_path,
    ACTIONS(27), 1,
      anon_sym_tags,
    ACTIONS(29), 1,
      anon_sym_dependencies,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    STATE(36), 11,
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
  [1518] = 13,
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
    STATE(36), 11,
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
  [1568] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(398), 1,
      anon_sym_spriteType,
    ACTIONS(401), 1,
      anon_sym_textSpriteType,
    ACTIONS(404), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(407), 1,
      anon_sym_maskedShieldType,
    ACTIONS(410), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(413), 1,
      anon_sym_progressbartype,
    ACTIONS(416), 1,
      anon_sym_PieChartType,
    ACTIONS(419), 1,
      anon_sym_LineChartType,
    ACTIONS(422), 1,
      anon_sym_cursor_offset,
    STATE(37), 12,
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
  [1616] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_spriteType,
    ACTIONS(314), 1,
      anon_sym_textSpriteType,
    ACTIONS(316), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(318), 1,
      anon_sym_maskedShieldType,
    ACTIONS(320), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(322), 1,
      anon_sym_progressbartype,
    ACTIONS(324), 1,
      anon_sym_PieChartType,
    ACTIONS(326), 1,
      anon_sym_LineChartType,
    ACTIONS(328), 1,
      anon_sym_cursor_offset,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(33), 12,
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
  [1664] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(92), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(94), 1,
      anon_sym_noOfFrames,
    ACTIONS(96), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(98), 1,
      anon_sym_overlay_rows,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(106), 1,
      anon_sym_allwaystransparent,
    ACTIONS(110), 1,
      anon_sym_clicksound,
    ACTIONS(112), 1,
      anon_sym_transparencecheck,
    ACTIONS(114), 1,
      anon_sym_loadType,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym__statement_gfx_name,
    STATE(28), 10,
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
  [1716] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    ACTIONS(434), 1,
      anon_sym_animationrotation,
    ACTIONS(437), 1,
      anon_sym_animationlooping,
    ACTIONS(446), 1,
      anon_sym_animationblendmode,
    ACTIONS(449), 1,
      anon_sym_animationtype,
    ACTIONS(452), 1,
      anon_sym_animationframes,
    ACTIONS(431), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(440), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(443), 2,
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
  [1761] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(459), 1,
      anon_sym_animationrotation,
    ACTIONS(461), 1,
      anon_sym_animationlooping,
    ACTIONS(467), 1,
      anon_sym_animationblendmode,
    ACTIONS(469), 1,
      anon_sym_animationtype,
    ACTIONS(471), 1,
      anon_sym_animationframes,
    ACTIONS(457), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(463), 2,
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
  [1806] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_animationrotation,
    ACTIONS(461), 1,
      anon_sym_animationlooping,
    ACTIONS(467), 1,
      anon_sym_animationblendmode,
    ACTIONS(469), 1,
      anon_sym_animationtype,
    ACTIONS(471), 1,
      anon_sym_animationframes,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    ACTIONS(457), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(463), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(465), 2,
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
  [1851] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(94), 1,
      anon_sym_noOfFrames,
    ACTIONS(96), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(98), 1,
      anon_sym_overlay_rows,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(112), 1,
      anon_sym_transparencecheck,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(479), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(481), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    STATE(168), 1,
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
  [1899] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(114), 1,
      anon_sym_loadType,
    ACTIONS(268), 1,
      anon_sym_size,
    ACTIONS(477), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(479), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(485), 1,
      anon_sym_color,
    ACTIONS(487), 1,
      anon_sym_colortwo,
    ACTIONS(489), 1,
      anon_sym_horizontal,
    STATE(180), 3,
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
  [1947] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(94), 1,
      anon_sym_noOfFrames,
    ACTIONS(96), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(98), 1,
      anon_sym_overlay_rows,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(112), 1,
      anon_sym_transparencecheck,
    ACTIONS(477), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(479), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(481), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
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
  [1995] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      anon_sym_name,
    ACTIONS(498), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(501), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(504), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(507), 1,
      anon_sym_noOfFrames,
    ACTIONS(510), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(513), 1,
      anon_sym_overlay_rows,
    ACTIONS(516), 1,
      anon_sym_effectFile,
    ACTIONS(519), 1,
      anon_sym_transparencecheck,
    STATE(168), 1,
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
  [2043] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(100), 1,
      anon_sym_effectFile,
    ACTIONS(114), 1,
      anon_sym_loadType,
    ACTIONS(268), 1,
      anon_sym_size,
    ACTIONS(477), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(479), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(485), 1,
      anon_sym_color,
    ACTIONS(487), 1,
      anon_sym_colortwo,
    ACTIONS(489), 1,
      anon_sym_horizontal,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    STATE(180), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(48), 7,
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
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    ACTIONS(526), 1,
      anon_sym_name,
    ACTIONS(529), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(532), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(535), 1,
      anon_sym_effectFile,
    ACTIONS(538), 1,
      anon_sym_size,
    ACTIONS(541), 1,
      anon_sym_color,
    ACTIONS(544), 1,
      anon_sym_colortwo,
    ACTIONS(547), 1,
      anon_sym_horizontal,
    ACTIONS(550), 1,
      anon_sym_loadType,
    STATE(180), 3,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_color,
    STATE(48), 7,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      sym__statement_gfx_loadType,
      aux_sym__progressbartype_block_repeat1,
  [2139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_assign_equal,
    ACTIONS(553), 18,
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
  [2166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym_assign_equal,
    ACTIONS(559), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
      anon_sym_effect,
    ACTIONS(557), 15,
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
  [2195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_assign_equal,
    ACTIONS(563), 18,
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
  [2222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_assign_equal,
    ACTIONS(569), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_text,
    ACTIONS(567), 15,
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
  [2250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_assign_equal,
    ACTIONS(575), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(573), 15,
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
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
      anon_sym_effect,
    ACTIONS(579), 15,
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
  [2304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 18,
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
  [2328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 18,
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
  [2352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym_assign_equal,
    ACTIONS(587), 16,
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
  [2377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_assign_equal,
    ACTIONS(591), 16,
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
  [2402] = 3,
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
  [2427] = 3,
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
  [2452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_assign_equal,
    ACTIONS(603), 16,
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
  [2477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(607), 15,
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
  [2502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_text,
    ACTIONS(611), 15,
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
  [2527] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [2549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 16,
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
  [2571] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    ACTIONS(621), 1,
      anon_sym_size,
    ACTIONS(623), 1,
      anon_sym_text,
    ACTIONS(625), 1,
      anon_sym_color,
    ACTIONS(627), 1,
      anon_sym_font,
    ACTIONS(629), 1,
      anon_sym_position,
    ACTIONS(631), 1,
      anon_sym_format,
    ACTIONS(633), 1,
      anon_sym_cull_distance,
    STATE(71), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [2609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 16,
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
  [2631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 16,
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
  [2653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 16,
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
  [2675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 16,
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
  [2697] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_size,
    ACTIONS(623), 1,
      anon_sym_text,
    ACTIONS(625), 1,
      anon_sym_color,
    ACTIONS(627), 1,
      anon_sym_font,
    ACTIONS(629), 1,
      anon_sym_position,
    ACTIONS(631), 1,
      anon_sym_format,
    ACTIONS(633), 1,
      anon_sym_cull_distance,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    STATE(73), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [2735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 16,
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
  [2757] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_size,
    ACTIONS(652), 1,
      anon_sym_text,
    ACTIONS(655), 1,
      anon_sym_color,
    ACTIONS(658), 1,
      anon_sym_font,
    ACTIONS(661), 1,
      anon_sym_position,
    ACTIONS(664), 1,
      anon_sym_format,
    ACTIONS(667), 1,
      anon_sym_cull_distance,
    STATE(73), 8,
      sym__statement_gfx_size_xy,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [2795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_color,
    ACTIONS(674), 1,
      sym_assign_equal,
    ACTIONS(670), 14,
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
  [2821] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_cursor_offset,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
    ACTIONS(678), 1,
      anon_sym_textcolors,
    ACTIONS(680), 1,
      anon_sym_name,
    ACTIONS(682), 1,
      anon_sym_path,
    ACTIONS(684), 1,
      anon_sym_color,
    ACTIONS(686), 1,
      anon_sym_border_color,
    ACTIONS(688), 1,
      anon_sym_effect,
    STATE(226), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(77), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [2861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 16,
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
  [2883] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 1,
      anon_sym_textcolors,
    ACTIONS(697), 1,
      anon_sym_name,
    ACTIONS(700), 1,
      anon_sym_path,
    ACTIONS(703), 1,
      anon_sym_cursor_offset,
    ACTIONS(706), 1,
      anon_sym_color,
    ACTIONS(709), 1,
      anon_sym_border_color,
    ACTIONS(712), 1,
      anon_sym_effect,
    STATE(226), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(77), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [2923] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_cursor_offset,
    ACTIONS(678), 1,
      anon_sym_textcolors,
    ACTIONS(680), 1,
      anon_sym_name,
    ACTIONS(682), 1,
      anon_sym_path,
    ACTIONS(684), 1,
      anon_sym_color,
    ACTIONS(686), 1,
      anon_sym_border_color,
    ACTIONS(688), 1,
      anon_sym_effect,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    STATE(226), 2,
      sym__textcolors,
      sym__statement_gfx_name,
    STATE(75), 6,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      sym__statement_gfx_effect_bool,
      aux_sym__bitmapfont_block_repeat1,
  [2963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_assign_equal,
    ACTIONS(717), 14,
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
  [2986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_color,
    ACTIONS(721), 14,
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
  [3009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    ACTIONS(731), 1,
      sym_assign_equal,
    ACTIONS(727), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(725), 11,
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
  [3036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    STATE(83), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(735), 12,
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
  [3061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    STATE(84), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(735), 12,
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
  [3086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(84), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(741), 12,
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
  [3111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_assign_equal,
    ACTIONS(744), 14,
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
  [3134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_assign_equal,
    ACTIONS(748), 14,
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
    ACTIONS(754), 1,
      sym_assign_equal,
    ACTIONS(752), 14,
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
  [3180] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    ACTIONS(758), 1,
      anon_sym_name,
    ACTIONS(761), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(764), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(767), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(770), 1,
      anon_sym_cull_distance,
    ACTIONS(773), 1,
      anon_sym_effect,
    STATE(231), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(88), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [3216] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(633), 1,
      anon_sym_cull_distance,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    ACTIONS(778), 1,
      anon_sym_animation,
    ACTIONS(780), 1,
      anon_sym_file,
    ACTIONS(782), 1,
      anon_sym_meshsettings,
    ACTIONS(784), 1,
      anon_sym_scale,
    STATE(240), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(100), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [3252] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(479), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(481), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(633), 1,
      anon_sym_cull_distance,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    ACTIONS(788), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(790), 1,
      anon_sym_effect,
    STATE(231), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(88), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [3288] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(479), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(481), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(633), 1,
      anon_sym_cull_distance,
    ACTIONS(788), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(790), 1,
      anon_sym_effect,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
    STATE(231), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(90), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_effect,
      aux_sym__tradeRouteType_block_repeat1,
  [3324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 14,
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
  [3344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 14,
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
  [3364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 14,
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
  [3384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 14,
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
  [3404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_SEMI,
    ACTIONS(804), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(802), 11,
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
  [3428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_assign_equal,
    ACTIONS(808), 13,
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
  [3450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 14,
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
  [3470] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(633), 1,
      anon_sym_cull_distance,
    ACTIONS(778), 1,
      anon_sym_animation,
    ACTIONS(780), 1,
      anon_sym_file,
    ACTIONS(782), 1,
      anon_sym_meshsettings,
    ACTIONS(784), 1,
      anon_sym_scale,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    STATE(240), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(89), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [3506] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    ACTIONS(818), 1,
      anon_sym_name,
    ACTIONS(821), 1,
      anon_sym_animation,
    ACTIONS(824), 1,
      anon_sym_cull_distance,
    ACTIONS(827), 1,
      anon_sym_file,
    ACTIONS(830), 1,
      anon_sym_meshsettings,
    ACTIONS(833), 1,
      anon_sym_scale,
    STATE(240), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_cull_distance,
    STATE(100), 5,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_pdxmesh_meshsettings,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [3542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_animationrotation,
    ACTIONS(840), 1,
      sym_assign_equal,
    ACTIONS(836), 11,
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
  [3565] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
    ACTIONS(844), 1,
      anon_sym_animatedmaptext,
    ACTIONS(846), 1,
      anon_sym_pdxmesh,
    ACTIONS(848), 1,
      anon_sym_pdxparticle,
    ACTIONS(850), 1,
      anon_sym_arrowType,
    ACTIONS(852), 1,
      anon_sym_tradeRouteType,
    STATE(113), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [3596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_animationrotation,
    ACTIONS(858), 1,
      sym_assign_equal,
    ACTIONS(854), 11,
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
  [3619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_animationrotation,
    ACTIONS(864), 1,
      sym_assign_equal,
    ACTIONS(860), 11,
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
  [3642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 13,
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
  [3661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_animationrotation,
    ACTIONS(872), 1,
      sym_assign_equal,
    ACTIONS(868), 11,
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
  [3684] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
    ACTIONS(876), 1,
      anon_sym_animatedmaptext,
    ACTIONS(879), 1,
      anon_sym_pdxmesh,
    ACTIONS(882), 1,
      anon_sym_pdxparticle,
    ACTIONS(885), 1,
      anon_sym_arrowType,
    ACTIONS(888), 1,
      anon_sym_tradeRouteType,
    STATE(107), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [3715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_animationrotation,
    ACTIONS(895), 1,
      sym_assign_equal,
    ACTIONS(891), 11,
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
  [3738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(897), 11,
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
  [3759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_animationrotation,
    ACTIONS(905), 1,
      sym_assign_equal,
    ACTIONS(901), 11,
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
  [3782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_effect,
    ACTIONS(907), 11,
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
  [3803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_animationrotation,
    ACTIONS(915), 1,
      sym_assign_equal,
    ACTIONS(911), 11,
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
  [3826] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_animatedmaptext,
    ACTIONS(846), 1,
      anon_sym_pdxmesh,
    ACTIONS(848), 1,
      anon_sym_pdxparticle,
    ACTIONS(850), 1,
      anon_sym_arrowType,
    ACTIONS(852), 1,
      anon_sym_tradeRouteType,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    STATE(107), 7,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      sym__pdxparticle,
      sym__arrowType,
      sym__tradeRouteType,
      aux_sym__objectTypes_block_repeat1,
  [3857] = 4,
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
  [3880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_assign_equal,
    ACTIONS(925), 11,
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
  [3900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_animationrotation,
    ACTIONS(929), 11,
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
  [3920] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(790), 1,
      anon_sym_effect,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
    ACTIONS(935), 1,
      anon_sym_texture,
    ACTIONS(937), 1,
      anon_sym_normal,
    ACTIONS(939), 1,
      anon_sym_specular,
    STATE(248), 1,
      sym__statement_gfx_name,
    STATE(118), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [3952] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
    ACTIONS(943), 1,
      anon_sym_name,
    ACTIONS(946), 1,
      anon_sym_texture,
    ACTIONS(949), 1,
      anon_sym_normal,
    ACTIONS(952), 1,
      anon_sym_specular,
    ACTIONS(955), 1,
      anon_sym_effect,
    STATE(248), 1,
      sym__statement_gfx_name,
    STATE(118), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [3984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym_assign_equal,
    ACTIONS(958), 11,
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
  [4004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_assign_equal,
    ACTIONS(962), 11,
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
  [4024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      sym_assign_equal,
    ACTIONS(966), 11,
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
  [4044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      sym_assign_equal,
    ACTIONS(970), 11,
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
  [4064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym_assign_equal,
    ACTIONS(974), 11,
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
  [4084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      sym_assign_equal,
    ACTIONS(978), 11,
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
  [4104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      sym_assign_equal,
    ACTIONS(982), 11,
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
  [4124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_assign_equal,
    ACTIONS(986), 11,
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
  [4144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      sym_assign_equal,
    ACTIONS(990), 11,
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
  [4164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_animationrotation,
    ACTIONS(994), 11,
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
  [4184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_animationrotation,
    ACTIONS(998), 11,
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
  [4204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      sym_assign_equal,
    ACTIONS(1002), 11,
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
  [4224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_animationrotation,
    ACTIONS(1006), 11,
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
  [4244] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(790), 1,
      anon_sym_effect,
    ACTIONS(935), 1,
      anon_sym_texture,
    ACTIONS(937), 1,
      anon_sym_normal,
    ACTIONS(939), 1,
      anon_sym_specular,
    ACTIONS(1010), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      sym__statement_gfx_name,
    STATE(117), 5,
      sym__statement_gfx_texture,
      sym__statement_gfx_normal,
      sym__statement_gfx_specular,
      sym__statement_gfx_effect,
      aux_sym__arrowType_block_repeat1,
  [4276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_animationrotation,
    ACTIONS(1012), 11,
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
  [4296] = 3,
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
  [4316] = 3,
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
  [4336] = 3,
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
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [4373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 11,
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
  [4390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 11,
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
  [4407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 11,
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
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 11,
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
  [4441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_assign_equal,
    ACTIONS(1040), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_texture,
    ACTIONS(1038), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [4462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 11,
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
  [4479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 11,
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
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 11,
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
  [4513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 11,
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
  [4530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 11,
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
  [4547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 11,
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
  [4564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_color,
    ACTIONS(1060), 1,
      sym_assign_equal,
    ACTIONS(1056), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [4585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_color,
    ACTIONS(1066), 1,
      sym_assign_equal,
    ACTIONS(1062), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [4606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_color,
    ACTIONS(1072), 1,
      sym_assign_equal,
    ACTIONS(1068), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [4627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 11,
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
  [4644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 11,
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
  [4661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 11,
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
  [4678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 11,
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
  [4695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 11,
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
  [4712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 11,
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
  [4729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 10,
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
  [4745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 10,
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
  [4761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 10,
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
  [4777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 10,
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
  [4793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 10,
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
  [4809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 10,
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
  [4825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 10,
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
  [4841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_color,
    ACTIONS(1100), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [4859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 10,
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
  [4875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_color,
    ACTIONS(1106), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [4893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 10,
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
  [4909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 10,
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
  [4925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 10,
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
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 10,
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
  [4957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_texture,
    ACTIONS(1118), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [4975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 10,
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
  [4991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 10,
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
  [5007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 10,
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
  [5023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 10,
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
  [5039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 10,
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
  [5055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 10,
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
  [5071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 10,
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
  [5087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_color,
    ACTIONS(1136), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [5105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_color,
    ACTIONS(1140), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
      anon_sym_loadType,
  [5123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 10,
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
  [5139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 10,
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
  [5155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 10,
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
  [5171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 10,
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
  [5187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 10,
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
  [5203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 10,
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
  [5219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym_assign_equal,
    ACTIONS(1156), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_assign_equal,
    ACTIONS(1160), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_assign_equal,
    ACTIONS(1166), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym_assign_equal,
    ACTIONS(1170), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      sym_assign_equal,
    ACTIONS(1174), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      sym_assign_equal,
    ACTIONS(1180), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_assign_equal,
    ACTIONS(1068), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 9,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      sym_assign_equal,
    ACTIONS(31), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym_assign_equal,
    ACTIONS(573), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      sym_assign_equal,
    ACTIONS(1192), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      sym_assign_equal,
    ACTIONS(1196), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_scale,
  [5451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      sym_assign_equal,
    ACTIONS(1200), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5468] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(1204), 1,
      anon_sym_RBRACE,
    ACTIONS(1206), 1,
      anon_sym_speed,
    ACTIONS(1208), 1,
      anon_sym_textblock,
    STATE(278), 1,
      sym__statement_gfx_name,
    STATE(205), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [5492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5506] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(1206), 1,
      anon_sym_speed,
    ACTIONS(1208), 1,
      anon_sym_textblock,
    ACTIONS(1212), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      sym__statement_gfx_name,
    STATE(225), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [5530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_assign_equal,
    ACTIONS(1216), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [5560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      sym_assign_equal,
    ACTIONS(1220), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [5576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      sym_assign_equal,
    ACTIONS(1224), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [5592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_type,
      anon_sym_meshsettings,
      anon_sym_scale,
  [5620] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(268), 1,
      anon_sym_size,
    ACTIONS(1232), 1,
      anon_sym_RBRACE,
    ACTIONS(1234), 1,
      anon_sym_linewidth,
    STATE(228), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(283), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [5644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5658] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(784), 1,
      anon_sym_scale,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
    ACTIONS(1240), 1,
      anon_sym_type,
    STATE(280), 1,
      sym__statement_gfx_name,
    STATE(223), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [5682] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(7), 1,
      anon_sym_objectTypes,
    ACTIONS(9), 1,
      anon_sym_bitmapfonts,
    ACTIONS(1242), 1,
      ts_builtin_sym_end,
    STATE(217), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [5704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5718] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      ts_builtin_sym_end,
    ACTIONS(1248), 1,
      anon_sym_spriteTypes,
    ACTIONS(1251), 1,
      anon_sym_objectTypes,
    ACTIONS(1254), 1,
      anon_sym_bitmapfonts,
    STATE(217), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [5740] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(784), 1,
      anon_sym_scale,
    ACTIONS(1240), 1,
      anon_sym_type,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym__statement_gfx_name,
    STATE(214), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [5764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5820] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_RBRACE,
    ACTIONS(1267), 1,
      anon_sym_name,
    ACTIONS(1270), 1,
      anon_sym_type,
    ACTIONS(1273), 1,
      anon_sym_scale,
    STATE(280), 1,
      sym__statement_gfx_name,
    STATE(223), 3,
      sym__statement_gfx_scale,
      sym__statement_gfx_type,
      aux_sym__pdxparticle_block_repeat1,
  [5844] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(268), 1,
      anon_sym_size,
    ACTIONS(1234), 1,
      anon_sym_linewidth,
    ACTIONS(1276), 1,
      anon_sym_RBRACE,
    STATE(212), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(283), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [5868] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_RBRACE,
    ACTIONS(1280), 1,
      anon_sym_name,
    ACTIONS(1283), 1,
      anon_sym_speed,
    ACTIONS(1286), 1,
      anon_sym_textblock,
    STATE(278), 1,
      sym__statement_gfx_name,
    STATE(225), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [5892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_effect,
  [5906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5920] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_RBRACE,
    ACTIONS(1293), 1,
      anon_sym_name,
    ACTIONS(1296), 1,
      anon_sym_size,
    ACTIONS(1299), 1,
      anon_sym_linewidth,
    STATE(228), 2,
      sym__statement_gfx_linewidth,
      aux_sym__LineChartType_block_repeat1,
    STATE(283), 2,
      sym__statement_gfx_name,
      sym__statement_gfx_size_xy,
  [5944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [5958] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_textcolors,
    ACTIONS(1302), 1,
      anon_sym_RBRACE,
    ACTIONS(1304), 1,
      anon_sym_bitmapfont,
    STATE(306), 1,
      sym__textcolors,
    STATE(239), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [5979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(1306), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_cull_distance,
      anon_sym_effect,
  [5994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [6007] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_RBRACE,
    ACTIONS(1314), 1,
      anon_sym_textcolors,
    ACTIONS(1317), 1,
      anon_sym_bitmapfont,
    STATE(306), 1,
      sym__textcolors,
    STATE(233), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [6028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      sym_assign_equal,
    ACTIONS(1320), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      sym_assign_equal,
    ACTIONS(1324), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [6071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      sym_assign_equal,
    ACTIONS(1330), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [6099] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_textcolors,
    ACTIONS(1304), 1,
      anon_sym_bitmapfont,
    ACTIONS(1336), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym__textcolors,
    STATE(233), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [6120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_cull_distance,
      anon_sym_file,
      anon_sym_meshsettings,
      anon_sym_scale,
  [6133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texture,
      anon_sym_normal,
      anon_sym_specular,
      anon_sym_effect,
  [6229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(1360), 1,
      anon_sym_RBRACE,
    ACTIONS(1362), 1,
      anon_sym_size,
    STATE(295), 1,
      sym__statement_gfx_name,
    STATE(258), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [6273] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    ACTIONS(1362), 1,
      anon_sym_size,
    ACTIONS(1364), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym__statement_gfx_name,
    STATE(251), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [6293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6353] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_RBRACE,
    ACTIONS(1378), 1,
      anon_sym_name,
    ACTIONS(1381), 1,
      anon_sym_size,
    STATE(295), 1,
      sym__statement_gfx_name,
    STATE(258), 2,
      sym__statement_gfx_size_integer,
      aux_sym__PieChartType_block_repeat1,
  [6373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1384), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 6,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
      anon_sym_pdxparticle,
      anon_sym_arrowType,
      anon_sym_tradeRouteType,
  [6421] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_x,
    ACTIONS(1394), 1,
      anon_sym_y,
    STATE(362), 1,
      sym__entry_y_float,
    STATE(363), 1,
      sym__entry_x_float,
    STATE(438), 1,
      sym__statement_xy_float,
  [6440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 1,
      sym_assign_equal,
    ACTIONS(1396), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [6453] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_x,
    ACTIONS(1402), 1,
      anon_sym_y,
    STATE(368), 1,
      sym__entry_x_integer,
    STATE(369), 1,
      sym__entry_y_integer,
    STATE(433), 1,
      sym__statement_xy_integer,
  [6472] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_x,
    ACTIONS(1402), 1,
      anon_sym_y,
    STATE(368), 1,
      sym__entry_x_integer,
    STATE(369), 1,
      sym__entry_y_integer,
    STATE(432), 1,
      sym__statement_xy_integer,
  [6491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      sym_assign_equal,
    ACTIONS(1404), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [6504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      sym_assign_equal,
    ACTIONS(1408), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [6517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 1,
      sym_assign_equal,
    ACTIONS(1412), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [6530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_x,
    ACTIONS(1402), 1,
      anon_sym_y,
    STATE(368), 1,
      sym__entry_x_integer,
    STATE(369), 1,
      sym__entry_y_integer,
    STATE(483), 1,
      sym__statement_xy_integer,
  [6549] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_x,
    ACTIONS(1402), 1,
      anon_sym_y,
    STATE(368), 1,
      sym__entry_x_integer,
    STATE(369), 1,
      sym__entry_y_integer,
    STATE(444), 1,
      sym__statement_xy_integer,
  [6568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [6578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1418), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [6588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [6598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1422), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [6608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1424), 1,
      anon_sym_RBRACE,
    ACTIONS(1426), 1,
      aux_sym__integer_positive_token1,
    STATE(276), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [6622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [6632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [6642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [6652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_type,
      anon_sym_scale,
  [6662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [6672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [6682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [6692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [6702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [6712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [6722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [6732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [6742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [6752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
      anon_sym_linewidth,
  [6762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      anon_sym_RBRACE,
    ACTIONS(1459), 1,
      aux_sym__integer_positive_token1,
    STATE(276), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [6776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      sym_assign_equal,
    ACTIONS(1461), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [6788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [6797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [6806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [6815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_RBRACE,
    ACTIONS(1473), 1,
      sym_string,
    STATE(296), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [6828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(94), 1,
      sym__boolean_yes_no,
    ACTIONS(1476), 2,
      anon_sym_yes,
      anon_sym_no,
  [6839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      aux_sym__integer_positive_token1,
    STATE(291), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [6850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      sym_assign_equal,
    ACTIONS(1480), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [6861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(56), 1,
      sym__boolean_yes_no,
    ACTIONS(1484), 2,
      anon_sym_yes,
      anon_sym_no,
  [6872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      anon_sym_RBRACE,
    ACTIONS(1488), 1,
      sym_string,
    STATE(296), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [6885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 1,
      sym_assign_equal,
    ACTIONS(1490), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [6896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(204), 1,
      sym__boolean_yes_no,
    ACTIONS(1494), 2,
      anon_sym_yes,
      anon_sym_no,
  [6907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [6916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1500), 1,
      sym_assign_equal,
    ACTIONS(1498), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [6927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [6936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 1,
      sym_string,
    ACTIONS(1504), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [6949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(116), 1,
      sym__boolean_yes_no,
    ACTIONS(1506), 2,
      anon_sym_yes,
      anon_sym_no,
  [6960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1508), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [6969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      sym_assign_equal,
    ACTIONS(1510), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [6980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym__boolean_yes_no,
    ACTIONS(1514), 2,
      anon_sym_yes,
      anon_sym_no,
  [6991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym__boolean_yes_no,
    ACTIONS(1516), 2,
      anon_sym_yes,
      anon_sym_no,
  [7002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(181), 1,
      sym__boolean_yes_no,
    ACTIONS(1518), 2,
      anon_sym_yes,
      anon_sym_no,
  [7013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_size,
  [7022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [7031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym__boolean_yes_no,
    ACTIONS(1524), 2,
      anon_sym_yes,
      anon_sym_no,
  [7042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(93), 1,
      sym__boolean_yes_no,
    ACTIONS(1526), 2,
      anon_sym_yes,
      anon_sym_no,
  [7053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(24), 1,
      sym__boolean_yes_no,
    ACTIONS(1528), 2,
      anon_sym_yes,
      anon_sym_no,
  [7064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      sym__gfx_textblock,
  [7074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1532), 1,
      aux_sym__float_positive_token1,
    STATE(424), 1,
      sym__float_positive,
  [7084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 1,
      aux_sym__float_positive_token1,
    STATE(322), 1,
      sym__float_positive,
  [7094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      aux_sym__float_positive_token1,
    STATE(323), 1,
      sym__float_positive,
  [7104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 1,
      aux_sym__float_positive_token1,
    STATE(484), 1,
      sym__float_positive,
  [7114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(1542), 1,
      aux_sym__statement_gfx_name_token2,
  [7124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1544), 1,
      aux_sym__integer_positive_token1,
    STATE(19), 1,
      sym__integer_positive,
  [7134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      aux_sym__integer_positive_token1,
    STATE(26), 1,
      sym__integer_positive,
  [7144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_LBRACE,
    STATE(293), 1,
      sym__bitmapfont_block,
  [7154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      anon_sym_LBRACE,
    STATE(190), 1,
      sym__textcolors_block,
  [7164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1552), 1,
      anon_sym_LBRACE,
    STATE(256), 1,
      sym__tradeRouteType_block,
  [7174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_LBRACE,
    STATE(254), 1,
      sym__arrowType_block,
  [7184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym__pdxparticle_block,
  [7194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      sym__pdxmesh_block,
  [7204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_LBRACE,
    STATE(257), 1,
      sym__animatedmaptext_block,
  [7214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      aux_sym__integer_positive_token1,
    STATE(25), 1,
      sym__integer_positive,
  [7224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym__LineChartType_block,
  [7234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      sym__PieChartType_block,
  [7244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym__progressbartype_block,
  [7254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym__frameAnimatedSpriteType_block,
  [7264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym__maskedShieldType_block,
  [7274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym__corneredTileSpriteType_block,
  [7284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym__textSpriteType_block,
  [7294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym__spriteType_block,
  [7304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 2,
      anon_sym_RBRACE,
      sym_string,
  [7312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_RBRACE,
    ACTIONS(1584), 1,
      sym_assign_equal,
  [7322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_shader_file,
    STATE(471), 1,
      sym__statement_gfx_meshsettings_shader_file,
  [7332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      aux_sym__float_positive_token1,
    STATE(372), 1,
      sym__float_positive,
  [7342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 1,
      aux_sym__float_positive_token1,
    STATE(373), 1,
      sym__float_positive,
  [7352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1592), 1,
      anon_sym_shader_file,
    ACTIONS(1594), 1,
      sym_assign_equal,
  [7362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [7370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1598), 1,
      anon_sym_id,
    STATE(381), 1,
      sym__statement_gfx_animation_id,
  [7380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1600), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [7388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_name,
    STATE(382), 1,
      sym__statement_gfx_name,
  [7398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_shader,
    STATE(345), 1,
      sym__statement_gfx_meshsettings_shader,
  [7408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 1,
      anon_sym_shader,
    ACTIONS(1606), 1,
      sym_assign_equal,
  [7418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym__gfx_animation_block,
  [7428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 2,
      anon_sym_DQUOTEINGAME_DQUOTE,
      anon_sym_DQUOTEFRONTEND_DQUOTE,
  [7436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_LBRACE,
    STATE(275), 1,
      sym__spriteTypes_block,
  [7446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_texture_specular,
    STATE(353), 1,
      sym__statement_gfx_meshsettings_texture_specular,
  [7456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_texture_specular,
    ACTIONS(1618), 1,
      sym_assign_equal,
  [7466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym__objectTypes_block,
  [7476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_LBRACE,
    STATE(279), 1,
      sym__bitmapfonts_block,
  [7486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_x,
    STATE(454), 1,
      sym__entry_x_float,
  [7496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      anon_sym_y,
    STATE(454), 1,
      sym__entry_y_float,
  [7506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_texture_normal,
    STATE(358), 1,
      sym__statement_gfx_meshsettings_texture_normal,
  [7516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(1628), 1,
      aux_sym__statement_gfx_name_token2,
  [7526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_texture_normal,
    ACTIONS(1632), 1,
      sym_assign_equal,
  [7536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 1,
      aux_sym__integer_positive_token1,
    STATE(446), 1,
      sym__integer_positive,
  [7546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 1,
      anon_sym_y,
    STATE(400), 1,
      sym__entry_y_integer,
  [7556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_x,
    STATE(400), 1,
      sym__entry_x_integer,
  [7566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym__integer_positive_token1,
    STATE(95), 1,
      sym__integer_positive,
  [7576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 1,
      aux_sym__float_positive_token1,
    STATE(211), 1,
      sym__float_positive,
  [7586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym__float_positive_token1,
    STATE(388), 1,
      sym__float_positive,
  [7596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      aux_sym__float_positive_token1,
    STATE(320), 1,
      sym__float_positive,
  [7606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [7614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [7622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      aux_sym__float_positive_token1,
    STATE(63), 1,
      sym__float_positive,
  [7632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      aux_sym__float_positive_token1,
    STATE(92), 1,
      sym__float_positive,
  [7642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1652), 1,
      aux_sym__float_positive_token1,
    STATE(285), 1,
      sym__float_positive,
  [7652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1654), 1,
      anon_sym_texture_diffuse,
    STATE(364), 1,
      sym__statement_gfx_meshsettings_texture_diffuse,
  [7662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_type,
    ACTIONS(1658), 1,
      sym_assign_equal,
  [7672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1660), 1,
      anon_sym_type,
    STATE(409), 1,
      sym__statement_gfx_animation_type,
  [7682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      anon_sym_index,
    STATE(379), 1,
      sym__statement_gfx_meshsettings_index,
  [7692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_texture_diffuse,
    ACTIONS(1666), 1,
      sym_assign_equal,
  [7702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      anon_sym_RBRACE,
    ACTIONS(1670), 1,
      sym_assign_equal,
  [7712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym__mod_dependencies_block,
  [7722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1674), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(140), 1,
      sym__mod_replace_path_folder,
  [7732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      aux_sym__float_positive_token1,
    STATE(134), 1,
      sym__float_positive,
  [7742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      aux_sym__float_positive_token1,
    STATE(423), 1,
      sym__float_positive,
  [7752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 1,
      aux_sym__integer_positive_token1,
    STATE(290), 1,
      sym__integer_positive,
  [7762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 1,
      aux_sym__integer_positive_token1,
    STATE(314), 1,
      sym__integer_positive,
  [7772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym__mod_tags_block,
  [7782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      anon_sym_centre,
  [7789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      aux_sym__statement_gfx_alphamaskfile_token1,
  [7796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 1,
      sym_integer,
  [7803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 1,
      anon_sym_LBRACE,
  [7810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_LBRACE,
  [7817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_LBRACE,
  [7824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1698), 1,
      sym_integer,
  [7831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1700), 1,
      sym_integer,
  [7838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1702), 1,
      anon_sym_RBRACE,
  [7845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1704), 1,
      sym_string,
  [7852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1706), 1,
      sym_string,
  [7859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1708), 1,
      anon_sym_LBRACE,
  [7866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1710), 1,
      aux_sym__animation_entry_dds_token1,
  [7873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1712), 1,
      anon_sym_LBRACE,
  [7880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      aux_sym__statement_mod_supported_version_token1,
  [7887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1716), 1,
      sym_string,
  [7894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      aux_sym__animation_entry_dds_token1,
  [7901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1720), 1,
      anon_sym_RBRACE,
  [7908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1722), 1,
      aux_sym__animation_entry_dds_token1,
  [7915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1724), 1,
      sym_byte,
  [7922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1726), 1,
      sym_byte,
  [7929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1728), 1,
      aux_sym__statement_mod_picture_token1,
  [7936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1730), 1,
      aux_sym__statement_mod_version_token1,
  [7943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1732), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [7950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1734), 1,
      aux_sym__statement_mod_archive_token1,
  [7957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1736), 1,
      sym_assign_equal,
  [7964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1738), 1,
      sym_string,
  [7971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1740), 1,
      sym_string,
  [7978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1742), 1,
      anon_sym_RBRACE,
  [7985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1744), 1,
      anon_sym_LBRACE,
  [7992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1746), 1,
      aux_sym__statement_gfx_file_token1,
  [7999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1748), 1,
      anon_sym_RBRACE,
  [8006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1750), 1,
      anon_sym_RBRACE,
  [8013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1752), 1,
      anon_sym_LBRACE,
  [8020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1754), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [8027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1756), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [8034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1758), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [8041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1760), 1,
      anon_sym_type,
  [8048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1762), 1,
      sym_string,
  [8055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1764), 1,
      anon_sym_LBRACE,
  [8062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1766), 1,
      anon_sym_RBRACE,
  [8069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1768), 1,
      anon_sym_RBRACE,
  [8076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1770), 1,
      sym_string,
  [8083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1772), 1,
      anon_sym_RBRACE,
  [8090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1774), 1,
      anon_sym_LBRACE,
  [8097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1776), 1,
      sym_integer,
  [8104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1778), 1,
      anon_sym_RBRACE,
  [8111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1780), 1,
      sym_assign_equal,
  [8118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1782), 1,
      sym_assign_equal,
  [8125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1784), 1,
      sym_angle,
  [8132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1786), 1,
      sym_assign_equal,
  [8139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1788), 1,
      sym_assign_equal,
  [8146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1790), 1,
      anon_sym_RBRACE,
  [8153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1792), 1,
      anon_sym_RBRACE,
  [8160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1794), 1,
      anon_sym_texture_diffuse,
  [8167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1796), 1,
      aux_sym__animation_entry_dds_token1,
  [8174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1798), 1,
      sym_assign_equal,
  [8181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1800), 1,
      sym_assign_equal,
  [8188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1802), 1,
      sym_assign_equal,
  [8195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1804), 1,
      sym_float,
  [8202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1806), 1,
      sym_float,
  [8209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1808), 1,
      sym_assign_equal,
  [8216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_RBRACE,
  [8223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1812), 1,
      ts_builtin_sym_end,
  [8230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1814), 1,
      anon_sym_click,
  [8237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1816), 1,
      aux_sym__animation_entry_dds_token1,
  [8244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_texture_normal,
  [8251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1820), 1,
      aux_sym__animation_entry_dds_token1,
  [8258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1822), 1,
      sym_assign_equal,
  [8265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1824), 1,
      sym_byte,
  [8272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1826), 1,
      sym_assign_equal,
  [8279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1828), 1,
      sym_assign_equal,
  [8286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1830), 1,
      anon_sym_texture_specular,
  [8293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1832), 1,
      aux_sym__animation_entry_dds_token1,
  [8300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1834), 1,
      sym_assign_equal,
  [8307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1836), 1,
      sym_assign_equal,
  [8314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1838), 1,
      anon_sym_shader,
  [8321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1840), 1,
      aux_sym__statement_gfx_meshsettings_shader_token1,
  [8328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1842), 1,
      sym_assign_equal,
  [8335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1844), 1,
      anon_sym_RBRACE,
  [8342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1846), 1,
      anon_sym_shader_file,
  [8349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1848), 1,
      aux_sym__statement_gfx_meshsettings_shader_file_token1,
  [8356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1850), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [8363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1852), 1,
      anon_sym_RBRACE,
  [8370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1854), 1,
      ts_builtin_sym_end,
  [8377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1856), 1,
      sym_assign_equal,
  [8384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1858), 1,
      sym_assign_equal,
  [8391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1860), 1,
      sym_assign_equal,
  [8398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1862), 1,
      anon_sym_LBRACE,
  [8405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1864), 1,
      sym_hexadecimal,
  [8412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1866), 1,
      sym_hexadecimal,
  [8419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1868), 1,
      anon_sym_RBRACE,
  [8426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1870), 1,
      anon_sym_RBRACE,
  [8433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1872), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [8440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1874), 1,
      sym_string,
  [8447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1876), 1,
      anon_sym_LBRACE,
  [8454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1878), 1,
      anon_sym_LBRACE,
  [8461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1880), 1,
      aux_sym__statement_gfx_effect_token1,
  [8468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1882), 1,
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
  [SMALL_STATE(14)] = 657,
  [SMALL_STATE(15)] = 694,
  [SMALL_STATE(16)] = 728,
  [SMALL_STATE(17)] = 764,
  [SMALL_STATE(18)] = 799,
  [SMALL_STATE(19)] = 834,
  [SMALL_STATE(20)] = 867,
  [SMALL_STATE(21)] = 902,
  [SMALL_STATE(22)] = 936,
  [SMALL_STATE(23)] = 970,
  [SMALL_STATE(24)] = 1004,
  [SMALL_STATE(25)] = 1035,
  [SMALL_STATE(26)] = 1066,
  [SMALL_STATE(27)] = 1097,
  [SMALL_STATE(28)] = 1130,
  [SMALL_STATE(29)] = 1182,
  [SMALL_STATE(30)] = 1234,
  [SMALL_STATE(31)] = 1286,
  [SMALL_STATE(32)] = 1338,
  [SMALL_STATE(33)] = 1368,
  [SMALL_STATE(34)] = 1416,
  [SMALL_STATE(35)] = 1468,
  [SMALL_STATE(36)] = 1518,
  [SMALL_STATE(37)] = 1568,
  [SMALL_STATE(38)] = 1616,
  [SMALL_STATE(39)] = 1664,
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
  [SMALL_STATE(51)] = 2195,
  [SMALL_STATE(52)] = 2222,
  [SMALL_STATE(53)] = 2250,
  [SMALL_STATE(54)] = 2278,
  [SMALL_STATE(55)] = 2304,
  [SMALL_STATE(56)] = 2328,
  [SMALL_STATE(57)] = 2352,
  [SMALL_STATE(58)] = 2377,
  [SMALL_STATE(59)] = 2402,
  [SMALL_STATE(60)] = 2427,
  [SMALL_STATE(61)] = 2452,
  [SMALL_STATE(62)] = 2477,
  [SMALL_STATE(63)] = 2502,
  [SMALL_STATE(64)] = 2527,
  [SMALL_STATE(65)] = 2549,
  [SMALL_STATE(66)] = 2571,
  [SMALL_STATE(67)] = 2609,
  [SMALL_STATE(68)] = 2631,
  [SMALL_STATE(69)] = 2653,
  [SMALL_STATE(70)] = 2675,
  [SMALL_STATE(71)] = 2697,
  [SMALL_STATE(72)] = 2735,
  [SMALL_STATE(73)] = 2757,
  [SMALL_STATE(74)] = 2795,
  [SMALL_STATE(75)] = 2821,
  [SMALL_STATE(76)] = 2861,
  [SMALL_STATE(77)] = 2883,
  [SMALL_STATE(78)] = 2923,
  [SMALL_STATE(79)] = 2963,
  [SMALL_STATE(80)] = 2986,
  [SMALL_STATE(81)] = 3009,
  [SMALL_STATE(82)] = 3036,
  [SMALL_STATE(83)] = 3061,
  [SMALL_STATE(84)] = 3086,
  [SMALL_STATE(85)] = 3111,
  [SMALL_STATE(86)] = 3134,
  [SMALL_STATE(87)] = 3157,
  [SMALL_STATE(88)] = 3180,
  [SMALL_STATE(89)] = 3216,
  [SMALL_STATE(90)] = 3252,
  [SMALL_STATE(91)] = 3288,
  [SMALL_STATE(92)] = 3324,
  [SMALL_STATE(93)] = 3344,
  [SMALL_STATE(94)] = 3364,
  [SMALL_STATE(95)] = 3384,
  [SMALL_STATE(96)] = 3404,
  [SMALL_STATE(97)] = 3428,
  [SMALL_STATE(98)] = 3450,
  [SMALL_STATE(99)] = 3470,
  [SMALL_STATE(100)] = 3506,
  [SMALL_STATE(101)] = 3542,
  [SMALL_STATE(102)] = 3565,
  [SMALL_STATE(103)] = 3596,
  [SMALL_STATE(104)] = 3619,
  [SMALL_STATE(105)] = 3642,
  [SMALL_STATE(106)] = 3661,
  [SMALL_STATE(107)] = 3684,
  [SMALL_STATE(108)] = 3715,
  [SMALL_STATE(109)] = 3738,
  [SMALL_STATE(110)] = 3759,
  [SMALL_STATE(111)] = 3782,
  [SMALL_STATE(112)] = 3803,
  [SMALL_STATE(113)] = 3826,
  [SMALL_STATE(114)] = 3857,
  [SMALL_STATE(115)] = 3880,
  [SMALL_STATE(116)] = 3900,
  [SMALL_STATE(117)] = 3920,
  [SMALL_STATE(118)] = 3952,
  [SMALL_STATE(119)] = 3984,
  [SMALL_STATE(120)] = 4004,
  [SMALL_STATE(121)] = 4024,
  [SMALL_STATE(122)] = 4044,
  [SMALL_STATE(123)] = 4064,
  [SMALL_STATE(124)] = 4084,
  [SMALL_STATE(125)] = 4104,
  [SMALL_STATE(126)] = 4124,
  [SMALL_STATE(127)] = 4144,
  [SMALL_STATE(128)] = 4164,
  [SMALL_STATE(129)] = 4184,
  [SMALL_STATE(130)] = 4204,
  [SMALL_STATE(131)] = 4224,
  [SMALL_STATE(132)] = 4244,
  [SMALL_STATE(133)] = 4276,
  [SMALL_STATE(134)] = 4296,
  [SMALL_STATE(135)] = 4316,
  [SMALL_STATE(136)] = 4336,
  [SMALL_STATE(137)] = 4356,
  [SMALL_STATE(138)] = 4373,
  [SMALL_STATE(139)] = 4390,
  [SMALL_STATE(140)] = 4407,
  [SMALL_STATE(141)] = 4424,
  [SMALL_STATE(142)] = 4441,
  [SMALL_STATE(143)] = 4462,
  [SMALL_STATE(144)] = 4479,
  [SMALL_STATE(145)] = 4496,
  [SMALL_STATE(146)] = 4513,
  [SMALL_STATE(147)] = 4530,
  [SMALL_STATE(148)] = 4547,
  [SMALL_STATE(149)] = 4564,
  [SMALL_STATE(150)] = 4585,
  [SMALL_STATE(151)] = 4606,
  [SMALL_STATE(152)] = 4627,
  [SMALL_STATE(153)] = 4644,
  [SMALL_STATE(154)] = 4661,
  [SMALL_STATE(155)] = 4678,
  [SMALL_STATE(156)] = 4695,
  [SMALL_STATE(157)] = 4712,
  [SMALL_STATE(158)] = 4729,
  [SMALL_STATE(159)] = 4745,
  [SMALL_STATE(160)] = 4761,
  [SMALL_STATE(161)] = 4777,
  [SMALL_STATE(162)] = 4793,
  [SMALL_STATE(163)] = 4809,
  [SMALL_STATE(164)] = 4825,
  [SMALL_STATE(165)] = 4841,
  [SMALL_STATE(166)] = 4859,
  [SMALL_STATE(167)] = 4875,
  [SMALL_STATE(168)] = 4893,
  [SMALL_STATE(169)] = 4909,
  [SMALL_STATE(170)] = 4925,
  [SMALL_STATE(171)] = 4941,
  [SMALL_STATE(172)] = 4957,
  [SMALL_STATE(173)] = 4975,
  [SMALL_STATE(174)] = 4991,
  [SMALL_STATE(175)] = 5007,
  [SMALL_STATE(176)] = 5023,
  [SMALL_STATE(177)] = 5039,
  [SMALL_STATE(178)] = 5055,
  [SMALL_STATE(179)] = 5071,
  [SMALL_STATE(180)] = 5087,
  [SMALL_STATE(181)] = 5105,
  [SMALL_STATE(182)] = 5123,
  [SMALL_STATE(183)] = 5139,
  [SMALL_STATE(184)] = 5155,
  [SMALL_STATE(185)] = 5171,
  [SMALL_STATE(186)] = 5187,
  [SMALL_STATE(187)] = 5203,
  [SMALL_STATE(188)] = 5219,
  [SMALL_STATE(189)] = 5236,
  [SMALL_STATE(190)] = 5253,
  [SMALL_STATE(191)] = 5268,
  [SMALL_STATE(192)] = 5285,
  [SMALL_STATE(193)] = 5302,
  [SMALL_STATE(194)] = 5319,
  [SMALL_STATE(195)] = 5334,
  [SMALL_STATE(196)] = 5351,
  [SMALL_STATE(197)] = 5368,
  [SMALL_STATE(198)] = 5383,
  [SMALL_STATE(199)] = 5400,
  [SMALL_STATE(200)] = 5417,
  [SMALL_STATE(201)] = 5434,
  [SMALL_STATE(202)] = 5451,
  [SMALL_STATE(203)] = 5468,
  [SMALL_STATE(204)] = 5492,
  [SMALL_STATE(205)] = 5506,
  [SMALL_STATE(206)] = 5530,
  [SMALL_STATE(207)] = 5544,
  [SMALL_STATE(208)] = 5560,
  [SMALL_STATE(209)] = 5576,
  [SMALL_STATE(210)] = 5592,
  [SMALL_STATE(211)] = 5606,
  [SMALL_STATE(212)] = 5620,
  [SMALL_STATE(213)] = 5644,
  [SMALL_STATE(214)] = 5658,
  [SMALL_STATE(215)] = 5682,
  [SMALL_STATE(216)] = 5704,
  [SMALL_STATE(217)] = 5718,
  [SMALL_STATE(218)] = 5740,
  [SMALL_STATE(219)] = 5764,
  [SMALL_STATE(220)] = 5778,
  [SMALL_STATE(221)] = 5792,
  [SMALL_STATE(222)] = 5806,
  [SMALL_STATE(223)] = 5820,
  [SMALL_STATE(224)] = 5844,
  [SMALL_STATE(225)] = 5868,
  [SMALL_STATE(226)] = 5892,
  [SMALL_STATE(227)] = 5906,
  [SMALL_STATE(228)] = 5920,
  [SMALL_STATE(229)] = 5944,
  [SMALL_STATE(230)] = 5958,
  [SMALL_STATE(231)] = 5979,
  [SMALL_STATE(232)] = 5994,
  [SMALL_STATE(233)] = 6007,
  [SMALL_STATE(234)] = 6028,
  [SMALL_STATE(235)] = 6043,
  [SMALL_STATE(236)] = 6058,
  [SMALL_STATE(237)] = 6071,
  [SMALL_STATE(238)] = 6086,
  [SMALL_STATE(239)] = 6099,
  [SMALL_STATE(240)] = 6120,
  [SMALL_STATE(241)] = 6133,
  [SMALL_STATE(242)] = 6145,
  [SMALL_STATE(243)] = 6157,
  [SMALL_STATE(244)] = 6169,
  [SMALL_STATE(245)] = 6181,
  [SMALL_STATE(246)] = 6193,
  [SMALL_STATE(247)] = 6205,
  [SMALL_STATE(248)] = 6217,
  [SMALL_STATE(249)] = 6229,
  [SMALL_STATE(250)] = 6241,
  [SMALL_STATE(251)] = 6253,
  [SMALL_STATE(252)] = 6273,
  [SMALL_STATE(253)] = 6293,
  [SMALL_STATE(254)] = 6305,
  [SMALL_STATE(255)] = 6317,
  [SMALL_STATE(256)] = 6329,
  [SMALL_STATE(257)] = 6341,
  [SMALL_STATE(258)] = 6353,
  [SMALL_STATE(259)] = 6373,
  [SMALL_STATE(260)] = 6385,
  [SMALL_STATE(261)] = 6397,
  [SMALL_STATE(262)] = 6409,
  [SMALL_STATE(263)] = 6421,
  [SMALL_STATE(264)] = 6440,
  [SMALL_STATE(265)] = 6453,
  [SMALL_STATE(266)] = 6472,
  [SMALL_STATE(267)] = 6491,
  [SMALL_STATE(268)] = 6504,
  [SMALL_STATE(269)] = 6517,
  [SMALL_STATE(270)] = 6530,
  [SMALL_STATE(271)] = 6549,
  [SMALL_STATE(272)] = 6568,
  [SMALL_STATE(273)] = 6578,
  [SMALL_STATE(274)] = 6588,
  [SMALL_STATE(275)] = 6598,
  [SMALL_STATE(276)] = 6608,
  [SMALL_STATE(277)] = 6622,
  [SMALL_STATE(278)] = 6632,
  [SMALL_STATE(279)] = 6642,
  [SMALL_STATE(280)] = 6652,
  [SMALL_STATE(281)] = 6662,
  [SMALL_STATE(282)] = 6672,
  [SMALL_STATE(283)] = 6682,
  [SMALL_STATE(284)] = 6692,
  [SMALL_STATE(285)] = 6702,
  [SMALL_STATE(286)] = 6712,
  [SMALL_STATE(287)] = 6722,
  [SMALL_STATE(288)] = 6732,
  [SMALL_STATE(289)] = 6742,
  [SMALL_STATE(290)] = 6752,
  [SMALL_STATE(291)] = 6762,
  [SMALL_STATE(292)] = 6776,
  [SMALL_STATE(293)] = 6788,
  [SMALL_STATE(294)] = 6797,
  [SMALL_STATE(295)] = 6806,
  [SMALL_STATE(296)] = 6815,
  [SMALL_STATE(297)] = 6828,
  [SMALL_STATE(298)] = 6839,
  [SMALL_STATE(299)] = 6850,
  [SMALL_STATE(300)] = 6861,
  [SMALL_STATE(301)] = 6872,
  [SMALL_STATE(302)] = 6885,
  [SMALL_STATE(303)] = 6896,
  [SMALL_STATE(304)] = 6907,
  [SMALL_STATE(305)] = 6916,
  [SMALL_STATE(306)] = 6927,
  [SMALL_STATE(307)] = 6936,
  [SMALL_STATE(308)] = 6949,
  [SMALL_STATE(309)] = 6960,
  [SMALL_STATE(310)] = 6969,
  [SMALL_STATE(311)] = 6980,
  [SMALL_STATE(312)] = 6991,
  [SMALL_STATE(313)] = 7002,
  [SMALL_STATE(314)] = 7013,
  [SMALL_STATE(315)] = 7022,
  [SMALL_STATE(316)] = 7031,
  [SMALL_STATE(317)] = 7042,
  [SMALL_STATE(318)] = 7053,
  [SMALL_STATE(319)] = 7064,
  [SMALL_STATE(320)] = 7074,
  [SMALL_STATE(321)] = 7084,
  [SMALL_STATE(322)] = 7094,
  [SMALL_STATE(323)] = 7104,
  [SMALL_STATE(324)] = 7114,
  [SMALL_STATE(325)] = 7124,
  [SMALL_STATE(326)] = 7134,
  [SMALL_STATE(327)] = 7144,
  [SMALL_STATE(328)] = 7154,
  [SMALL_STATE(329)] = 7164,
  [SMALL_STATE(330)] = 7174,
  [SMALL_STATE(331)] = 7184,
  [SMALL_STATE(332)] = 7194,
  [SMALL_STATE(333)] = 7204,
  [SMALL_STATE(334)] = 7214,
  [SMALL_STATE(335)] = 7224,
  [SMALL_STATE(336)] = 7234,
  [SMALL_STATE(337)] = 7244,
  [SMALL_STATE(338)] = 7254,
  [SMALL_STATE(339)] = 7264,
  [SMALL_STATE(340)] = 7274,
  [SMALL_STATE(341)] = 7284,
  [SMALL_STATE(342)] = 7294,
  [SMALL_STATE(343)] = 7304,
  [SMALL_STATE(344)] = 7312,
  [SMALL_STATE(345)] = 7322,
  [SMALL_STATE(346)] = 7332,
  [SMALL_STATE(347)] = 7342,
  [SMALL_STATE(348)] = 7352,
  [SMALL_STATE(349)] = 7362,
  [SMALL_STATE(350)] = 7370,
  [SMALL_STATE(351)] = 7380,
  [SMALL_STATE(352)] = 7388,
  [SMALL_STATE(353)] = 7398,
  [SMALL_STATE(354)] = 7408,
  [SMALL_STATE(355)] = 7418,
  [SMALL_STATE(356)] = 7428,
  [SMALL_STATE(357)] = 7436,
  [SMALL_STATE(358)] = 7446,
  [SMALL_STATE(359)] = 7456,
  [SMALL_STATE(360)] = 7466,
  [SMALL_STATE(361)] = 7476,
  [SMALL_STATE(362)] = 7486,
  [SMALL_STATE(363)] = 7496,
  [SMALL_STATE(364)] = 7506,
  [SMALL_STATE(365)] = 7516,
  [SMALL_STATE(366)] = 7526,
  [SMALL_STATE(367)] = 7536,
  [SMALL_STATE(368)] = 7546,
  [SMALL_STATE(369)] = 7556,
  [SMALL_STATE(370)] = 7566,
  [SMALL_STATE(371)] = 7576,
  [SMALL_STATE(372)] = 7586,
  [SMALL_STATE(373)] = 7596,
  [SMALL_STATE(374)] = 7606,
  [SMALL_STATE(375)] = 7614,
  [SMALL_STATE(376)] = 7622,
  [SMALL_STATE(377)] = 7632,
  [SMALL_STATE(378)] = 7642,
  [SMALL_STATE(379)] = 7652,
  [SMALL_STATE(380)] = 7662,
  [SMALL_STATE(381)] = 7672,
  [SMALL_STATE(382)] = 7682,
  [SMALL_STATE(383)] = 7692,
  [SMALL_STATE(384)] = 7702,
  [SMALL_STATE(385)] = 7712,
  [SMALL_STATE(386)] = 7722,
  [SMALL_STATE(387)] = 7732,
  [SMALL_STATE(388)] = 7742,
  [SMALL_STATE(389)] = 7752,
  [SMALL_STATE(390)] = 7762,
  [SMALL_STATE(391)] = 7772,
  [SMALL_STATE(392)] = 7782,
  [SMALL_STATE(393)] = 7789,
  [SMALL_STATE(394)] = 7796,
  [SMALL_STATE(395)] = 7803,
  [SMALL_STATE(396)] = 7810,
  [SMALL_STATE(397)] = 7817,
  [SMALL_STATE(398)] = 7824,
  [SMALL_STATE(399)] = 7831,
  [SMALL_STATE(400)] = 7838,
  [SMALL_STATE(401)] = 7845,
  [SMALL_STATE(402)] = 7852,
  [SMALL_STATE(403)] = 7859,
  [SMALL_STATE(404)] = 7866,
  [SMALL_STATE(405)] = 7873,
  [SMALL_STATE(406)] = 7880,
  [SMALL_STATE(407)] = 7887,
  [SMALL_STATE(408)] = 7894,
  [SMALL_STATE(409)] = 7901,
  [SMALL_STATE(410)] = 7908,
  [SMALL_STATE(411)] = 7915,
  [SMALL_STATE(412)] = 7922,
  [SMALL_STATE(413)] = 7929,
  [SMALL_STATE(414)] = 7936,
  [SMALL_STATE(415)] = 7943,
  [SMALL_STATE(416)] = 7950,
  [SMALL_STATE(417)] = 7957,
  [SMALL_STATE(418)] = 7964,
  [SMALL_STATE(419)] = 7971,
  [SMALL_STATE(420)] = 7978,
  [SMALL_STATE(421)] = 7985,
  [SMALL_STATE(422)] = 7992,
  [SMALL_STATE(423)] = 7999,
  [SMALL_STATE(424)] = 8006,
  [SMALL_STATE(425)] = 8013,
  [SMALL_STATE(426)] = 8020,
  [SMALL_STATE(427)] = 8027,
  [SMALL_STATE(428)] = 8034,
  [SMALL_STATE(429)] = 8041,
  [SMALL_STATE(430)] = 8048,
  [SMALL_STATE(431)] = 8055,
  [SMALL_STATE(432)] = 8062,
  [SMALL_STATE(433)] = 8069,
  [SMALL_STATE(434)] = 8076,
  [SMALL_STATE(435)] = 8083,
  [SMALL_STATE(436)] = 8090,
  [SMALL_STATE(437)] = 8097,
  [SMALL_STATE(438)] = 8104,
  [SMALL_STATE(439)] = 8111,
  [SMALL_STATE(440)] = 8118,
  [SMALL_STATE(441)] = 8125,
  [SMALL_STATE(442)] = 8132,
  [SMALL_STATE(443)] = 8139,
  [SMALL_STATE(444)] = 8146,
  [SMALL_STATE(445)] = 8153,
  [SMALL_STATE(446)] = 8160,
  [SMALL_STATE(447)] = 8167,
  [SMALL_STATE(448)] = 8174,
  [SMALL_STATE(449)] = 8181,
  [SMALL_STATE(450)] = 8188,
  [SMALL_STATE(451)] = 8195,
  [SMALL_STATE(452)] = 8202,
  [SMALL_STATE(453)] = 8209,
  [SMALL_STATE(454)] = 8216,
  [SMALL_STATE(455)] = 8223,
  [SMALL_STATE(456)] = 8230,
  [SMALL_STATE(457)] = 8237,
  [SMALL_STATE(458)] = 8244,
  [SMALL_STATE(459)] = 8251,
  [SMALL_STATE(460)] = 8258,
  [SMALL_STATE(461)] = 8265,
  [SMALL_STATE(462)] = 8272,
  [SMALL_STATE(463)] = 8279,
  [SMALL_STATE(464)] = 8286,
  [SMALL_STATE(465)] = 8293,
  [SMALL_STATE(466)] = 8300,
  [SMALL_STATE(467)] = 8307,
  [SMALL_STATE(468)] = 8314,
  [SMALL_STATE(469)] = 8321,
  [SMALL_STATE(470)] = 8328,
  [SMALL_STATE(471)] = 8335,
  [SMALL_STATE(472)] = 8342,
  [SMALL_STATE(473)] = 8349,
  [SMALL_STATE(474)] = 8356,
  [SMALL_STATE(475)] = 8363,
  [SMALL_STATE(476)] = 8370,
  [SMALL_STATE(477)] = 8377,
  [SMALL_STATE(478)] = 8384,
  [SMALL_STATE(479)] = 8391,
  [SMALL_STATE(480)] = 8398,
  [SMALL_STATE(481)] = 8405,
  [SMALL_STATE(482)] = 8412,
  [SMALL_STATE(483)] = 8419,
  [SMALL_STATE(484)] = 8426,
  [SMALL_STATE(485)] = 8433,
  [SMALL_STATE(486)] = 8440,
  [SMALL_STATE(487)] = 8447,
  [SMALL_STATE(488)] = 8454,
  [SMALL_STATE(489)] = 8461,
  [SMALL_STATE(490)] = 8468,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(460),
  [7] = {.count = 1, .reusable = true}, SHIFT(478),
  [9] = {.count = 1, .reusable = true}, SHIFT(477),
  [11] = {.count = 1, .reusable = true}, SHIFT(119),
  [13] = {.count = 1, .reusable = true}, SHIFT(120),
  [15] = {.count = 1, .reusable = true}, SHIFT(121),
  [17] = {.count = 1, .reusable = true}, SHIFT(122),
  [19] = {.count = 1, .reusable = true}, SHIFT(123),
  [21] = {.count = 1, .reusable = true}, SHIFT(124),
  [23] = {.count = 1, .reusable = true}, SHIFT(125),
  [25] = {.count = 1, .reusable = true}, SHIFT(115),
  [27] = {.count = 1, .reusable = true}, SHIFT(126),
  [29] = {.count = 1, .reusable = true}, SHIFT(127),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(365),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 3),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 3),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(22),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(21),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(58),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(59),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(27),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(49),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(60),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(51),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(57),
  [88] = {.count = 1, .reusable = true}, SHIFT(178),
  [90] = {.count = 1, .reusable = true}, SHIFT(2),
  [92] = {.count = 1, .reusable = true}, SHIFT(14),
  [94] = {.count = 1, .reusable = true}, SHIFT(16),
  [96] = {.count = 1, .reusable = true}, SHIFT(22),
  [98] = {.count = 1, .reusable = true}, SHIFT(21),
  [100] = {.count = 1, .reusable = true}, SHIFT(7),
  [102] = {.count = 1, .reusable = true}, SHIFT(58),
  [104] = {.count = 1, .reusable = true}, SHIFT(59),
  [106] = {.count = 1, .reusable = true}, SHIFT(27),
  [108] = {.count = 1, .reusable = true}, SHIFT(49),
  [110] = {.count = 1, .reusable = true}, SHIFT(60),
  [112] = {.count = 1, .reusable = true}, SHIFT(23),
  [114] = {.count = 1, .reusable = true}, SHIFT(9),
  [116] = {.count = 1, .reusable = true}, SHIFT(51),
  [118] = {.count = 1, .reusable = true}, SHIFT(57),
  [120] = {.count = 1, .reusable = true}, SHIFT(160),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 1),
  [126] = {.count = 1, .reusable = true}, SHIFT(474),
  [128] = {.count = 1, .reusable = true}, SHIFT(170),
  [130] = {.count = 1, .reusable = true}, SHIFT(87),
  [132] = {.count = 1, .reusable = true}, SHIFT(79),
  [134] = {.count = 1, .reusable = true}, SHIFT(86),
  [136] = {.count = 1, .reusable = true}, SHIFT(85),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_loadType, 1),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_loadType, 1),
  [142] = {.count = 1, .reusable = true}, SHIFT(356),
  [144] = {.count = 1, .reusable = true}, SHIFT(164),
  [146] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(22),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(21),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(27),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(87),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(79),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(86),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(85),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_loadType, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_loadType, 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 1),
  [199] = {.count = 1, .reusable = true}, SHIFT(485),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 3),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 3),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [209] = {.count = 1, .reusable = true}, SHIFT(325),
  [211] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(17),
  [216] = {.count = 1, .reusable = true}, SHIFT(139),
  [218] = {.count = 1, .reusable = true}, SHIFT(20),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [224] = {.count = 1, .reusable = true}, SHIFT(138),
  [226] = {.count = 1, .reusable = true}, SHIFT(17),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [232] = {.count = 1, .reusable = true}, SHIFT(334),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [238] = {.count = 1, .reusable = true}, SHIFT(326),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 1),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_transparencecheck, 1),
  [244] = {.count = 1, .reusable = true}, SHIFT(318),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 3),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_transparencecheck, 3),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [262] = {.count = 1, .reusable = true}, SHIFT(316),
  [264] = {.count = 1, .reusable = true}, SHIFT(187),
  [266] = {.count = 1, .reusable = true}, SHIFT(162),
  [268] = {.count = 1, .reusable = true}, SHIFT(53),
  [270] = {.count = 1, .reusable = true}, SHIFT(130),
  [272] = {.count = 1, .reusable = true}, SHIFT(184),
  [274] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(53),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(130),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(27),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(49),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(51),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [310] = {.count = 1, .reusable = true}, SHIFT(286),
  [312] = {.count = 1, .reusable = true}, SHIFT(439),
  [314] = {.count = 1, .reusable = true}, SHIFT(440),
  [316] = {.count = 1, .reusable = true}, SHIFT(442),
  [318] = {.count = 1, .reusable = true}, SHIFT(443),
  [320] = {.count = 1, .reusable = true}, SHIFT(448),
  [322] = {.count = 1, .reusable = true}, SHIFT(449),
  [324] = {.count = 1, .reusable = true}, SHIFT(450),
  [326] = {.count = 1, .reusable = true}, SHIFT(453),
  [328] = {.count = 1, .reusable = true}, SHIFT(61),
  [330] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(22),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(21),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(27),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(60),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [364] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(119),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(120),
  [372] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(121),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(122),
  [378] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(123),
  [381] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(124),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(125),
  [387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(115),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(126),
  [393] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(127),
  [396] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(439),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(440),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(442),
  [407] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(443),
  [410] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(448),
  [413] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(449),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(450),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(453),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(61),
  [425] = {.count = 1, .reusable = true}, SHIFT(282),
  [427] = {.count = 1, .reusable = true}, SHIFT(161),
  [429] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [431] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(106),
  [434] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(108),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(110),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(112),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(114),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(103),
  [449] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(101),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(104),
  [455] = {.count = 1, .reusable = true}, SHIFT(70),
  [457] = {.count = 1, .reusable = true}, SHIFT(106),
  [459] = {.count = 1, .reusable = false}, SHIFT(108),
  [461] = {.count = 1, .reusable = true}, SHIFT(110),
  [463] = {.count = 1, .reusable = true}, SHIFT(112),
  [465] = {.count = 1, .reusable = true}, SHIFT(114),
  [467] = {.count = 1, .reusable = true}, SHIFT(103),
  [469] = {.count = 1, .reusable = true}, SHIFT(101),
  [471] = {.count = 1, .reusable = true}, SHIFT(104),
  [473] = {.count = 1, .reusable = true}, SHIFT(69),
  [475] = {.count = 1, .reusable = true}, SHIFT(166),
  [477] = {.count = 1, .reusable = true}, SHIFT(74),
  [479] = {.count = 1, .reusable = true}, SHIFT(50),
  [481] = {.count = 1, .reusable = true}, SHIFT(81),
  [483] = {.count = 1, .reusable = true}, SHIFT(176),
  [485] = {.count = 1, .reusable = false}, SHIFT(151),
  [487] = {.count = 1, .reusable = true}, SHIFT(150),
  [489] = {.count = 1, .reusable = true}, SHIFT(149),
  [491] = {.count = 1, .reusable = true}, SHIFT(163),
  [493] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(2),
  [498] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(74),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(50),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(81),
  [507] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(16),
  [510] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(22),
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(21),
  [516] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(7),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(23),
  [522] = {.count = 1, .reusable = true}, SHIFT(169),
  [524] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2),
  [526] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(2),
  [529] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(74),
  [532] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(50),
  [535] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(7),
  [538] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(53),
  [541] = {.count = 2, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(151),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(150),
  [547] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(149),
  [550] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(9),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 1),
  [555] = {.count = 1, .reusable = true}, SHIFT(300),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [561] = {.count = 1, .reusable = true}, SHIFT(427),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_norefcount, 1),
  [565] = {.count = 1, .reusable = true}, SHIFT(311),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [571] = {.count = 1, .reusable = true}, SHIFT(376),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_xy, 1),
  [575] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size_xy, 1),
  [577] = {.count = 1, .reusable = true}, SHIFT(436),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_norefcount, 3),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 3),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alphamaskfile, 1),
  [589] = {.count = 1, .reusable = true}, SHIFT(393),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [593] = {.count = 1, .reusable = true}, SHIFT(355),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alwaystransparent, 1),
  [597] = {.count = 1, .reusable = true}, SHIFT(312),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 1),
  [601] = {.count = 1, .reusable = true}, SHIFT(456),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 1),
  [605] = {.count = 1, .reusable = true}, SHIFT(480),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_xy, 5),
  [609] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size_xy, 5),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alphamaskfile, 3),
  [619] = {.count = 1, .reusable = true}, SHIFT(281),
  [621] = {.count = 1, .reusable = true}, SHIFT(199),
  [623] = {.count = 1, .reusable = true}, SHIFT(195),
  [625] = {.count = 1, .reusable = true}, SHIFT(196),
  [627] = {.count = 1, .reusable = true}, SHIFT(188),
  [629] = {.count = 1, .reusable = true}, SHIFT(189),
  [631] = {.count = 1, .reusable = true}, SHIFT(202),
  [633] = {.count = 1, .reusable = true}, SHIFT(52),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_alwaystransparent, 3),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [643] = {.count = 1, .reusable = true}, SHIFT(288),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 3),
  [647] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(199),
  [652] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(195),
  [655] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(196),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(188),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(189),
  [664] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(202),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(52),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [672] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [674] = {.count = 1, .reusable = true}, SHIFT(428),
  [676] = {.count = 1, .reusable = true}, SHIFT(304),
  [678] = {.count = 1, .reusable = true}, SHIFT(470),
  [680] = {.count = 1, .reusable = true}, SHIFT(198),
  [682] = {.count = 1, .reusable = true}, SHIFT(200),
  [684] = {.count = 1, .reusable = true}, SHIFT(193),
  [686] = {.count = 1, .reusable = true}, SHIFT(192),
  [688] = {.count = 1, .reusable = true}, SHIFT(191),
  [690] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 4),
  [692] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(470),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(198),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(200),
  [703] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(61),
  [706] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(193),
  [709] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(192),
  [712] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(191),
  [715] = {.count = 1, .reusable = true}, SHIFT(294),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 1),
  [719] = {.count = 1, .reusable = true}, SHIFT(297),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [723] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [727] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [729] = {.count = 1, .reusable = true}, SHIFT(109),
  [731] = {.count = 1, .reusable = true}, SHIFT(426),
  [733] = {.count = 1, .reusable = true}, SHIFT(194),
  [735] = {.count = 1, .reusable = true}, SHIFT(97),
  [737] = {.count = 1, .reusable = true}, SHIFT(197),
  [739] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2), SHIFT_REPEAT(97),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 1),
  [746] = {.count = 1, .reusable = true}, SHIFT(377),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 1),
  [750] = {.count = 1, .reusable = true}, SHIFT(317),
  [752] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 1),
  [754] = {.count = 1, .reusable = true}, SHIFT(370),
  [756] = {.count = 1, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2),
  [758] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [761] = {.count = 2, .reusable = false}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(14),
  [764] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(50),
  [767] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(81),
  [770] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(52),
  [773] = {.count = 2, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 2), SHIFT_REPEAT(142),
  [776] = {.count = 1, .reusable = true}, SHIFT(255),
  [778] = {.count = 1, .reusable = true}, SHIFT(207),
  [780] = {.count = 1, .reusable = true}, SHIFT(208),
  [782] = {.count = 1, .reusable = true}, SHIFT(209),
  [784] = {.count = 1, .reusable = true}, SHIFT(201),
  [786] = {.count = 1, .reusable = true}, SHIFT(250),
  [788] = {.count = 1, .reusable = false}, SHIFT(14),
  [790] = {.count = 1, .reusable = true}, SHIFT(142),
  [792] = {.count = 1, .reusable = true}, SHIFT(249),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 3),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 3),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 3),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 3),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [804] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [806] = {.count = 1, .reusable = true}, SHIFT(111),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 1),
  [810] = {.count = 1, .reusable = true}, SHIFT(488),
  [812] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 1, .production_id = 4),
  [814] = {.count = 1, .reusable = true}, SHIFT(242),
  [816] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2),
  [818] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(2),
  [821] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(207),
  [824] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(52),
  [827] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(208),
  [830] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(209),
  [833] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(201),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [838] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [840] = {.count = 1, .reusable = true}, SHIFT(315),
  [842] = {.count = 1, .reusable = true}, SHIFT(289),
  [844] = {.count = 1, .reusable = true}, SHIFT(417),
  [846] = {.count = 1, .reusable = true}, SHIFT(462),
  [848] = {.count = 1, .reusable = true}, SHIFT(463),
  [850] = {.count = 1, .reusable = true}, SHIFT(466),
  [852] = {.count = 1, .reusable = true}, SHIFT(467),
  [854] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [856] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [858] = {.count = 1, .reusable = true}, SHIFT(309),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [862] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [864] = {.count = 1, .reusable = true}, SHIFT(396),
  [866] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 7),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [870] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [872] = {.count = 1, .reusable = true}, SHIFT(410),
  [874] = {.count = 1, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2),
  [876] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(417),
  [879] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(462),
  [882] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(463),
  [885] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(466),
  [888] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(467),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [893] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [895] = {.count = 1, .reusable = true}, SHIFT(441),
  [897] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 2),
  [899] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 2),
  [901] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [903] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [905] = {.count = 1, .reusable = true}, SHIFT(308),
  [907] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 4),
  [909] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile3, 4),
  [911] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [913] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [915] = {.count = 1, .reusable = true}, SHIFT(387),
  [917] = {.count = 1, .reusable = true}, SHIFT(274),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 1),
  [921] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 1),
  [923] = {.count = 1, .reusable = true}, SHIFT(395),
  [925] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [927] = {.count = 1, .reusable = true}, SHIFT(386),
  [929] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [931] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [933] = {.count = 1, .reusable = true}, SHIFT(253),
  [935] = {.count = 1, .reusable = true}, SHIFT(237),
  [937] = {.count = 1, .reusable = true}, SHIFT(235),
  [939] = {.count = 1, .reusable = true}, SHIFT(234),
  [941] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2),
  [943] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(2),
  [946] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(237),
  [949] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(235),
  [952] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(234),
  [955] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 2), SHIFT_REPEAT(142),
  [958] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [960] = {.count = 1, .reusable = true}, SHIFT(419),
  [962] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [964] = {.count = 1, .reusable = true}, SHIFT(418),
  [966] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [968] = {.count = 1, .reusable = true}, SHIFT(416),
  [970] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [972] = {.count = 1, .reusable = true}, SHIFT(415),
  [974] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [976] = {.count = 1, .reusable = true}, SHIFT(414),
  [978] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [980] = {.count = 1, .reusable = true}, SHIFT(413),
  [982] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [984] = {.count = 1, .reusable = true}, SHIFT(406),
  [986] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [988] = {.count = 1, .reusable = true}, SHIFT(391),
  [990] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [992] = {.count = 1, .reusable = true}, SHIFT(385),
  [994] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [996] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [998] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 5),
  [1000] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 5),
  [1002] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 1),
  [1004] = {.count = 1, .reusable = true}, SHIFT(431),
  [1006] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [1008] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [1010] = {.count = 1, .reusable = true}, SHIFT(247),
  [1012] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [1014] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [1016] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [1018] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [1020] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [1022] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [1024] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [1026] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [1028] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [1030] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [1032] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [1034] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [1036] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [1038] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect, 1),
  [1040] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effect, 1),
  [1042] = {.count = 1, .reusable = true}, SHIFT(489),
  [1044] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [1046] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [1048] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [1050] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [1052] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [1054] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [1056] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 1),
  [1058] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 1),
  [1060] = {.count = 1, .reusable = true}, SHIFT(313),
  [1062] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 1),
  [1064] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 1),
  [1066] = {.count = 1, .reusable = true}, SHIFT(397),
  [1068] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 1),
  [1070] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 1),
  [1072] = {.count = 1, .reusable = true}, SHIFT(405),
  [1074] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [1076] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [1078] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 5),
  [1080] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 1, .production_id = 4),
  [1082] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 1, .production_id = 4),
  [1084] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [1086] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType_block, 3),
  [1088] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype, 3),
  [1090] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [1092] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 2),
  [1094] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 2),
  [1096] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 3),
  [1098] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 3),
  [1100] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 7),
  [1102] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 7),
  [1104] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 2),
  [1106] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 7),
  [1108] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 7),
  [1110] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 1, .production_id = 4),
  [1112] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 3),
  [1114] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 2),
  [1116] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType, 3),
  [1118] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect, 3),
  [1120] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effect, 3),
  [1122] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType_block, 3),
  [1124] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [1126] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType, 3),
  [1128] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 2),
  [1130] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 3),
  [1132] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [1134] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 3),
  [1136] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [1138] = {.count = 1, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [1140] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 3),
  [1142] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 3),
  [1144] = {.count = 1, .reusable = true}, REDUCE(sym__PieChartType_block, 2),
  [1146] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 3),
  [1148] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 3),
  [1150] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 3),
  [1152] = {.count = 1, .reusable = true}, REDUCE(sym__LineChartType_block, 2),
  [1154] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 3),
  [1156] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 1),
  [1158] = {.count = 1, .reusable = true}, SHIFT(402),
  [1160] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 1),
  [1162] = {.count = 1, .reusable = true}, SHIFT(403),
  [1164] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 3),
  [1166] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect_bool, 1),
  [1168] = {.count = 1, .reusable = true}, SHIFT(303),
  [1170] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 1),
  [1172] = {.count = 1, .reusable = true}, SHIFT(481),
  [1174] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 1),
  [1176] = {.count = 1, .reusable = true}, SHIFT(482),
  [1178] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 2),
  [1180] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 1),
  [1182] = {.count = 1, .reusable = true}, SHIFT(401),
  [1184] = {.count = 1, .reusable = true}, SHIFT(490),
  [1186] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 3),
  [1188] = {.count = 1, .reusable = true}, SHIFT(324),
  [1190] = {.count = 1, .reusable = true}, SHIFT(487),
  [1192] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 1),
  [1194] = {.count = 1, .reusable = true}, SHIFT(486),
  [1196] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 1),
  [1198] = {.count = 1, .reusable = true}, SHIFT(371),
  [1200] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 1),
  [1202] = {.count = 1, .reusable = true}, SHIFT(392),
  [1204] = {.count = 1, .reusable = true}, SHIFT(261),
  [1206] = {.count = 1, .reusable = true}, SHIFT(269),
  [1208] = {.count = 1, .reusable = true}, SHIFT(267),
  [1210] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effect_bool, 3),
  [1212] = {.count = 1, .reusable = true}, SHIFT(259),
  [1214] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 3),
  [1216] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 1),
  [1218] = {.count = 1, .reusable = true}, SHIFT(421),
  [1220] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 1),
  [1222] = {.count = 1, .reusable = true}, SHIFT(422),
  [1224] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_meshsettings, 1),
  [1226] = {.count = 1, .reusable = true}, SHIFT(425),
  [1228] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 3),
  [1230] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 3),
  [1232] = {.count = 1, .reusable = true}, SHIFT(173),
  [1234] = {.count = 1, .reusable = true}, SHIFT(268),
  [1236] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 3),
  [1238] = {.count = 1, .reusable = true}, SHIFT(241),
  [1240] = {.count = 1, .reusable = true}, SHIFT(264),
  [1242] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [1244] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 3),
  [1246] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [1248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(460),
  [1251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(478),
  [1254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(477),
  [1257] = {.count = 1, .reusable = true}, SHIFT(243),
  [1259] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 5),
  [1261] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 3),
  [1263] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 3),
  [1265] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2),
  [1267] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(2),
  [1270] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(264),
  [1273] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 2), SHIFT_REPEAT(201),
  [1276] = {.count = 1, .reusable = true}, SHIFT(186),
  [1278] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2),
  [1280] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(2),
  [1283] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(269),
  [1286] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(267),
  [1289] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 1, .production_id = 4),
  [1291] = {.count = 1, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2),
  [1293] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1296] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(53),
  [1299] = {.count = 2, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 2), SHIFT_REPEAT(268),
  [1302] = {.count = 1, .reusable = true}, SHIFT(273),
  [1304] = {.count = 1, .reusable = true}, SHIFT(479),
  [1306] = {.count = 1, .reusable = true}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 1, .production_id = 4),
  [1308] = {.count = 1, .reusable = false}, REDUCE(aux_sym__tradeRouteType_block_repeat1, 1, .production_id = 4),
  [1310] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_meshsettings, 11),
  [1312] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2),
  [1314] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(470),
  [1317] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(479),
  [1320] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_specular, 1),
  [1322] = {.count = 1, .reusable = true}, SHIFT(408),
  [1324] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_normal, 1),
  [1326] = {.count = 1, .reusable = true}, SHIFT(404),
  [1328] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 6),
  [1330] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texture, 1),
  [1332] = {.count = 1, .reusable = true}, SHIFT(457),
  [1334] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 3),
  [1336] = {.count = 1, .reusable = true}, SHIFT(284),
  [1338] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 1, .production_id = 4),
  [1340] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle_block, 3),
  [1342] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 2),
  [1344] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle_block, 2),
  [1346] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_specular, 3),
  [1348] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_normal, 3),
  [1350] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texture, 3),
  [1352] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType_block, 2),
  [1354] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arrowType_block_repeat1, 1, .production_id = 4),
  [1356] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType_block, 2),
  [1358] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType_block, 3),
  [1360] = {.count = 1, .reusable = true}, SHIFT(158),
  [1362] = {.count = 1, .reusable = true}, SHIFT(292),
  [1364] = {.count = 1, .reusable = true}, SHIFT(182),
  [1366] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType_block, 3),
  [1368] = {.count = 1, .reusable = true}, REDUCE(sym__arrowType, 3),
  [1370] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 3),
  [1372] = {.count = 1, .reusable = true}, REDUCE(sym__tradeRouteType, 3),
  [1374] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 3),
  [1376] = {.count = 1, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2),
  [1378] = {.count = 2, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2), SHIFT_REPEAT(2),
  [1381] = {.count = 2, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 2), SHIFT_REPEAT(292),
  [1384] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 3),
  [1386] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh, 3),
  [1388] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 2),
  [1390] = {.count = 1, .reusable = true}, REDUCE(sym__pdxparticle, 3),
  [1392] = {.count = 1, .reusable = true}, SHIFT(302),
  [1394] = {.count = 1, .reusable = true}, SHIFT(310),
  [1396] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_type, 1),
  [1398] = {.count = 1, .reusable = true}, SHIFT(434),
  [1400] = {.count = 1, .reusable = true}, SHIFT(299),
  [1402] = {.count = 1, .reusable = true}, SHIFT(305),
  [1404] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 1),
  [1406] = {.count = 1, .reusable = true}, SHIFT(319),
  [1408] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_linewidth, 1),
  [1410] = {.count = 1, .reusable = true}, SHIFT(389),
  [1412] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 1),
  [1414] = {.count = 1, .reusable = true}, SHIFT(378),
  [1416] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_type, 3),
  [1418] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 2),
  [1420] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 3),
  [1422] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [1424] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [1426] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(276),
  [1429] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 3),
  [1431] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 1, .production_id = 4),
  [1433] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 3),
  [1435] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxparticle_block_repeat1, 1, .production_id = 4),
  [1437] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 2),
  [1439] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [1441] = {.count = 1, .reusable = true}, REDUCE(aux_sym__LineChartType_block_repeat1, 1, .production_id = 4),
  [1443] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 3),
  [1445] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 3),
  [1447] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [1449] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 3),
  [1451] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 3),
  [1453] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 2),
  [1455] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_linewidth, 3),
  [1457] = {.count = 1, .reusable = true}, SHIFT(128),
  [1459] = {.count = 1, .reusable = true}, SHIFT(276),
  [1461] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_integer, 1),
  [1463] = {.count = 1, .reusable = true}, SHIFT(390),
  [1465] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 3),
  [1467] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 2),
  [1469] = {.count = 1, .reusable = true}, REDUCE(aux_sym__PieChartType_block_repeat1, 1, .production_id = 4),
  [1471] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [1473] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(343),
  [1476] = {.count = 1, .reusable = true}, SHIFT(94),
  [1478] = {.count = 1, .reusable = true}, SHIFT(291),
  [1480] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 1),
  [1482] = {.count = 1, .reusable = true}, SHIFT(398),
  [1484] = {.count = 1, .reusable = true}, SHIFT(56),
  [1486] = {.count = 1, .reusable = true}, SHIFT(157),
  [1488] = {.count = 1, .reusable = true}, SHIFT(343),
  [1490] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 1),
  [1492] = {.count = 1, .reusable = true}, SHIFT(451),
  [1494] = {.count = 1, .reusable = true}, SHIFT(204),
  [1496] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 3),
  [1498] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 1),
  [1500] = {.count = 1, .reusable = true}, SHIFT(399),
  [1502] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_type, 1, .production_id = 2),
  [1504] = {.count = 1, .reusable = true}, SHIFT(141),
  [1506] = {.count = 1, .reusable = true}, SHIFT(116),
  [1508] = {.count = 1, .reusable = true}, SHIFT(133),
  [1510] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 1),
  [1512] = {.count = 1, .reusable = true}, SHIFT(452),
  [1514] = {.count = 1, .reusable = true}, SHIFT(55),
  [1516] = {.count = 1, .reusable = true}, SHIFT(68),
  [1518] = {.count = 1, .reusable = true}, SHIFT(181),
  [1520] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size_integer, 3),
  [1522] = {.count = 1, .reusable = true}, SHIFT(131),
  [1524] = {.count = 1, .reusable = true}, SHIFT(32),
  [1526] = {.count = 1, .reusable = true}, SHIFT(93),
  [1528] = {.count = 1, .reusable = true}, SHIFT(24),
  [1530] = {.count = 1, .reusable = true}, SHIFT(66),
  [1532] = {.count = 1, .reusable = true}, SHIFT(424),
  [1534] = {.count = 1, .reusable = true}, SHIFT(322),
  [1536] = {.count = 1, .reusable = true}, SHIFT(323),
  [1538] = {.count = 1, .reusable = true}, SHIFT(484),
  [1540] = {.count = 1, .reusable = true}, SHIFT(221),
  [1542] = {.count = 1, .reusable = false}, SHIFT(221),
  [1544] = {.count = 1, .reusable = true}, SHIFT(19),
  [1546] = {.count = 1, .reusable = true}, SHIFT(26),
  [1548] = {.count = 1, .reusable = true}, SHIFT(78),
  [1550] = {.count = 1, .reusable = true}, SHIFT(82),
  [1552] = {.count = 1, .reusable = true}, SHIFT(91),
  [1554] = {.count = 1, .reusable = true}, SHIFT(132),
  [1556] = {.count = 1, .reusable = true}, SHIFT(218),
  [1558] = {.count = 1, .reusable = true}, SHIFT(99),
  [1560] = {.count = 1, .reusable = true}, SHIFT(203),
  [1562] = {.count = 1, .reusable = true}, SHIFT(25),
  [1564] = {.count = 1, .reusable = true}, SHIFT(224),
  [1566] = {.count = 1, .reusable = true}, SHIFT(252),
  [1568] = {.count = 1, .reusable = true}, SHIFT(44),
  [1570] = {.count = 1, .reusable = true}, SHIFT(8),
  [1572] = {.count = 1, .reusable = true}, SHIFT(43),
  [1574] = {.count = 1, .reusable = true}, SHIFT(29),
  [1576] = {.count = 1, .reusable = true}, SHIFT(39),
  [1578] = {.count = 1, .reusable = true}, SHIFT(6),
  [1580] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 3),
  [1582] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader_file, 1),
  [1584] = {.count = 1, .reusable = true}, SHIFT(473),
  [1586] = {.count = 1, .reusable = true}, SHIFT(344),
  [1588] = {.count = 1, .reusable = true}, SHIFT(372),
  [1590] = {.count = 1, .reusable = true}, SHIFT(373),
  [1592] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader, 1),
  [1594] = {.count = 1, .reusable = true}, SHIFT(469),
  [1596] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 3),
  [1598] = {.count = 1, .reusable = true}, SHIFT(380),
  [1600] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 3),
  [1602] = {.count = 1, .reusable = true}, SHIFT(348),
  [1604] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_specular, 1),
  [1606] = {.count = 1, .reusable = true}, SHIFT(465),
  [1608] = {.count = 1, .reusable = true}, SHIFT(41),
  [1610] = {.count = 1, .reusable = true}, SHIFT(13),
  [1612] = {.count = 1, .reusable = true}, SHIFT(38),
  [1614] = {.count = 1, .reusable = true}, SHIFT(354),
  [1616] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_normal, 1),
  [1618] = {.count = 1, .reusable = true}, SHIFT(459),
  [1620] = {.count = 1, .reusable = true}, SHIFT(102),
  [1622] = {.count = 1, .reusable = true}, SHIFT(230),
  [1624] = {.count = 1, .reusable = true}, SHIFT(359),
  [1626] = {.count = 1, .reusable = true}, SHIFT(3),
  [1628] = {.count = 1, .reusable = false}, SHIFT(3),
  [1630] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_diffuse, 1),
  [1632] = {.count = 1, .reusable = true}, SHIFT(447),
  [1634] = {.count = 1, .reusable = true}, SHIFT(446),
  [1636] = {.count = 1, .reusable = true}, SHIFT(95),
  [1638] = {.count = 1, .reusable = true}, SHIFT(211),
  [1640] = {.count = 1, .reusable = true}, SHIFT(388),
  [1642] = {.count = 1, .reusable = true}, SHIFT(320),
  [1644] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 3),
  [1646] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 3),
  [1648] = {.count = 1, .reusable = true}, SHIFT(63),
  [1650] = {.count = 1, .reusable = true}, SHIFT(92),
  [1652] = {.count = 1, .reusable = true}, SHIFT(285),
  [1654] = {.count = 1, .reusable = true}, SHIFT(366),
  [1656] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 1),
  [1658] = {.count = 1, .reusable = true}, SHIFT(407),
  [1660] = {.count = 1, .reusable = true}, SHIFT(384),
  [1662] = {.count = 1, .reusable = true}, SHIFT(383),
  [1664] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_index, 1),
  [1666] = {.count = 1, .reusable = true}, SHIFT(367),
  [1668] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 1),
  [1670] = {.count = 1, .reusable = true}, SHIFT(430),
  [1672] = {.count = 1, .reusable = true}, SHIFT(307),
  [1674] = {.count = 1, .reusable = true}, SHIFT(140),
  [1676] = {.count = 1, .reusable = true}, SHIFT(134),
  [1678] = {.count = 1, .reusable = true}, SHIFT(423),
  [1680] = {.count = 1, .reusable = true}, SHIFT(290),
  [1682] = {.count = 1, .reusable = true}, SHIFT(314),
  [1684] = {.count = 1, .reusable = true}, SHIFT(18),
  [1686] = {.count = 1, .reusable = true}, SHIFT(216),
  [1688] = {.count = 1, .reusable = true}, SHIFT(65),
  [1690] = {.count = 1, .reusable = true}, SHIFT(437),
  [1692] = {.count = 1, .reusable = true}, SHIFT(263),
  [1694] = {.count = 1, .reusable = true}, SHIFT(298),
  [1696] = {.count = 1, .reusable = true}, SHIFT(347),
  [1698] = {.count = 1, .reusable = true}, SHIFT(375),
  [1700] = {.count = 1, .reusable = true}, SHIFT(374),
  [1702] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_integer, 2),
  [1704] = {.count = 1, .reusable = true}, SHIFT(210),
  [1706] = {.count = 1, .reusable = true}, SHIFT(222),
  [1708] = {.count = 1, .reusable = true}, SHIFT(271),
  [1710] = {.count = 1, .reusable = true}, SHIFT(245),
  [1712] = {.count = 1, .reusable = true}, SHIFT(346),
  [1714] = {.count = 1, .reusable = true}, SHIFT(137),
  [1716] = {.count = 1, .reusable = true}, SHIFT(429),
  [1718] = {.count = 1, .reusable = true}, SHIFT(244),
  [1720] = {.count = 1, .reusable = true}, SHIFT(236),
  [1722] = {.count = 1, .reusable = true}, SHIFT(135),
  [1724] = {.count = 1, .reusable = true}, SHIFT(412),
  [1726] = {.count = 1, .reusable = true}, SHIFT(435),
  [1728] = {.count = 1, .reusable = true}, SHIFT(143),
  [1730] = {.count = 1, .reusable = true}, SHIFT(144),
  [1732] = {.count = 1, .reusable = true}, SHIFT(145),
  [1734] = {.count = 1, .reusable = true}, SHIFT(146),
  [1736] = {.count = 1, .reusable = true}, SHIFT(333),
  [1738] = {.count = 1, .reusable = true}, SHIFT(147),
  [1740] = {.count = 1, .reusable = true}, SHIFT(148),
  [1742] = {.count = 1, .reusable = true}, SHIFT(67),
  [1744] = {.count = 1, .reusable = true}, SHIFT(350),
  [1746] = {.count = 1, .reusable = true}, SHIFT(238),
  [1748] = {.count = 1, .reusable = true}, SHIFT(165),
  [1750] = {.count = 1, .reusable = true}, SHIFT(167),
  [1752] = {.count = 1, .reusable = true}, SHIFT(352),
  [1754] = {.count = 1, .reusable = true}, SHIFT(96),
  [1756] = {.count = 1, .reusable = true}, SHIFT(54),
  [1758] = {.count = 1, .reusable = true}, SHIFT(80),
  [1760] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 3),
  [1762] = {.count = 1, .reusable = true}, SHIFT(445),
  [1764] = {.count = 1, .reusable = true}, SHIFT(266),
  [1766] = {.count = 1, .reusable = true}, SHIFT(154),
  [1768] = {.count = 1, .reusable = true}, SHIFT(62),
  [1770] = {.count = 1, .reusable = true}, SHIFT(272),
  [1772] = {.count = 1, .reusable = true}, SHIFT(105),
  [1774] = {.count = 1, .reusable = true}, SHIFT(265),
  [1776] = {.count = 1, .reusable = true}, SHIFT(420),
  [1778] = {.count = 1, .reusable = true}, SHIFT(129),
  [1780] = {.count = 1, .reusable = true}, SHIFT(342),
  [1782] = {.count = 1, .reusable = true}, SHIFT(341),
  [1784] = {.count = 1, .reusable = true}, SHIFT(136),
  [1786] = {.count = 1, .reusable = true}, SHIFT(340),
  [1788] = {.count = 1, .reusable = true}, SHIFT(339),
  [1790] = {.count = 1, .reusable = true}, SHIFT(219),
  [1792] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 3),
  [1794] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_index, 3),
  [1796] = {.count = 1, .reusable = true}, SHIFT(458),
  [1798] = {.count = 1, .reusable = true}, SHIFT(338),
  [1800] = {.count = 1, .reusable = true}, SHIFT(337),
  [1802] = {.count = 1, .reusable = true}, SHIFT(336),
  [1804] = {.count = 1, .reusable = true}, SHIFT(351),
  [1806] = {.count = 1, .reusable = true}, SHIFT(349),
  [1808] = {.count = 1, .reusable = true}, SHIFT(335),
  [1810] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_float, 2),
  [1812] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [1814] = {.count = 1, .reusable = true}, SHIFT(72),
  [1816] = {.count = 1, .reusable = true}, SHIFT(246),
  [1818] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_diffuse, 3),
  [1820] = {.count = 1, .reusable = true}, SHIFT(464),
  [1822] = {.count = 1, .reusable = true}, SHIFT(357),
  [1824] = {.count = 1, .reusable = true}, SHIFT(411),
  [1826] = {.count = 1, .reusable = true}, SHIFT(332),
  [1828] = {.count = 1, .reusable = true}, SHIFT(331),
  [1830] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_normal, 3),
  [1832] = {.count = 1, .reusable = true}, SHIFT(468),
  [1834] = {.count = 1, .reusable = true}, SHIFT(330),
  [1836] = {.count = 1, .reusable = true}, SHIFT(329),
  [1838] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_texture_specular, 3),
  [1840] = {.count = 1, .reusable = true}, SHIFT(472),
  [1842] = {.count = 1, .reusable = true}, SHIFT(328),
  [1844] = {.count = 1, .reusable = true}, SHIFT(232),
  [1846] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader, 3),
  [1848] = {.count = 1, .reusable = true}, SHIFT(475),
  [1850] = {.count = 1, .reusable = true}, SHIFT(12),
  [1852] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_meshsettings_shader_file, 3),
  [1854] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1856] = {.count = 1, .reusable = true}, SHIFT(361),
  [1858] = {.count = 1, .reusable = true}, SHIFT(360),
  [1860] = {.count = 1, .reusable = true}, SHIFT(327),
  [1862] = {.count = 1, .reusable = true}, SHIFT(394),
  [1864] = {.count = 1, .reusable = true}, SHIFT(206),
  [1866] = {.count = 1, .reusable = true}, SHIFT(213),
  [1868] = {.count = 1, .reusable = true}, SHIFT(227),
  [1870] = {.count = 1, .reusable = true}, SHIFT(229),
  [1872] = {.count = 1, .reusable = true}, SHIFT(15),
  [1874] = {.count = 1, .reusable = true}, SHIFT(220),
  [1876] = {.count = 1, .reusable = true}, SHIFT(270),
  [1878] = {.count = 1, .reusable = true}, SHIFT(461),
  [1880] = {.count = 1, .reusable = true}, SHIFT(172),
  [1882] = {.count = 1, .reusable = true}, SHIFT(321),
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
