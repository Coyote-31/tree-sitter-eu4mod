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
#define STATE_COUNT 376
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 270
#define ALIAS_COUNT 4
#define TOKEN_COUNT 143
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

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
  anon_sym_name = 16,
  anon_sym_x = 17,
  anon_sym_y = 18,
  anon_sym_path = 19,
  anon_sym_archive = 20,
  aux_sym__statement_mod_archive_token1 = 21,
  anon_sym_remote_file_id = 22,
  aux_sym__statement_mod_remote_file_id_token1 = 23,
  anon_sym_version = 24,
  aux_sym__statement_mod_version_token1 = 25,
  anon_sym_picture = 26,
  aux_sym__statement_mod_picture_token1 = 27,
  anon_sym_supported_version = 28,
  aux_sym__statement_mod_supported_version_token1 = 29,
  anon_sym_replace_path = 30,
  aux_sym__mod_replace_path_folder_token1 = 31,
  anon_sym_tags = 32,
  aux_sym__mod_tags_keyword_token1 = 33,
  aux_sym__mod_tags_keyword_token2 = 34,
  aux_sym__mod_tags_keyword_token3 = 35,
  aux_sym__mod_tags_keyword_token4 = 36,
  aux_sym__mod_tags_keyword_token5 = 37,
  aux_sym__mod_tags_keyword_token6 = 38,
  aux_sym__mod_tags_keyword_token7 = 39,
  aux_sym__mod_tags_keyword_token8 = 40,
  aux_sym__mod_tags_keyword_token9 = 41,
  aux_sym__mod_tags_keyword_token10 = 42,
  aux_sym__mod_tags_keyword_token11 = 43,
  aux_sym__mod_tags_keyword_token12 = 44,
  aux_sym__mod_tags_keyword_token13 = 45,
  aux_sym__mod_tags_keyword_token14 = 46,
  aux_sym__mod_tags_keyword_token15 = 47,
  aux_sym__mod_tags_keyword_token16 = 48,
  aux_sym__mod_tags_keyword_token17 = 49,
  aux_sym__mod_tags_keyword_token18 = 50,
  aux_sym__mod_tags_keyword_token19 = 51,
  aux_sym__mod_tags_keyword_token20 = 52,
  aux_sym__mod_tags_keyword_token21 = 53,
  aux_sym__mod_tags_keyword_token22 = 54,
  anon_sym_dependencies = 55,
  aux_sym__statement_gfx_name_token1 = 56,
  aux_sym__statement_gfx_name_token2 = 57,
  anon_sym_cursor_offset = 58,
  aux_sym__statement_gfx_textureFile_token1 = 59,
  aux_sym__statement_gfx_textureFile_token2 = 60,
  aux_sym__statement_gfx_textureFile1_token1 = 61,
  aux_sym__statement_gfx_textureFile2_token1 = 62,
  aux_sym__statement_gfx_textureFile3_token1 = 63,
  anon_sym_noOfFrames = 64,
  anon_sym_overlay_frames_per_row = 65,
  anon_sym_overlay_rows = 66,
  anon_sym_effectFile = 67,
  aux_sym__statement_gfx_effectFile_token1 = 68,
  anon_sym_animation = 69,
  anon_sym_animationmaskfile = 70,
  anon_sym_animationtexturefile = 71,
  aux_sym__animation_entry_dds_token1 = 72,
  anon_sym_animationrotation = 73,
  anon_sym_animationlooping = 74,
  anon_sym_animationtime = 75,
  anon_sym_animationdelay = 76,
  anon_sym_animationrotationoffset = 77,
  anon_sym_animationtexturescale = 78,
  anon_sym_animationblendmode = 79,
  anon_sym_DQUOTEadd_DQUOTE = 80,
  anon_sym_DQUOTEmultiply_DQUOTE = 81,
  anon_sym_DQUOTEoverlay_DQUOTE = 82,
  anon_sym_animationtype = 83,
  anon_sym_DQUOTEscrolling_DQUOTE = 84,
  anon_sym_DQUOTErotating_DQUOTE = 85,
  anon_sym_DQUOTEpulsing_DQUOTE = 86,
  anon_sym_animationframes = 87,
  anon_sym_size = 88,
  anon_sym_borderSize = 89,
  anon_sym_allwaystransparent = 90,
  anon_sym_legacy_lazy_load = 91,
  anon_sym_clicksound = 92,
  anon_sym_click = 93,
  anon_sym_speed = 94,
  anon_sym_textblock = 95,
  anon_sym_text = 96,
  anon_sym_color = 97,
  anon_sym_colortwo = 98,
  anon_sym_font = 99,
  anon_sym_position = 100,
  anon_sym_format = 101,
  anon_sym_centre = 102,
  anon_sym_cull_distance = 103,
  aux_sym__statement_gfx_cull_distance_token1 = 104,
  anon_sym_B = 105,
  anon_sym_b = 106,
  anon_sym_G = 107,
  anon_sym_H = 108,
  anon_sym_l = 109,
  anon_sym_M = 110,
  anon_sym_O = 111,
  anon_sym_g = 112,
  anon_sym_R = 113,
  anon_sym_T = 114,
  anon_sym_W = 115,
  anon_sym_Y = 116,
  anon_sym_border_color = 117,
  anon_sym_animation_rate_fps = 118,
  anon_sym_looping = 119,
  anon_sym_play_on_show = 120,
  anon_sym_pause_on_loop = 121,
  anon_sym_horizontal = 122,
  anon_sym_file = 123,
  aux_sym__statement_gfx_file_token1 = 124,
  anon_sym_id = 125,
  anon_sym_type = 126,
  anon_sym_scale = 127,
  anon_sym_transparencecheck = 128,
  sym_assign_equal = 129,
  sym_string = 130,
  sym_number = 131,
  aux_sym_float_token1 = 132,
  sym_integer = 133,
  aux_sym__integer_positive_token1 = 134,
  sym_byte = 135,
  sym_hexadecimal = 136,
  sym_angle = 137,
  anon_sym_true = 138,
  anon_sym_false = 139,
  anon_sym_yes = 140,
  anon_sym_no = 141,
  sym_comment = 142,
  sym_file = 143,
  sym_dot_mod = 144,
  sym_dot_gfx = 145,
  sym__spriteTypes = 146,
  sym__spriteTypes_block = 147,
  sym__spriteTypes_statement = 148,
  sym__spriteTypes_type = 149,
  sym__objectTypes = 150,
  sym__objectTypes_block = 151,
  sym__objectTypes_type = 152,
  sym__bitmapfonts = 153,
  sym__bitmapfonts_block = 154,
  sym__bitmapfonts_type = 155,
  sym__spriteType = 156,
  sym__spriteType_block = 157,
  sym__textSpriteType = 158,
  sym__textSpriteType_block = 159,
  sym__corneredTileSpriteType = 160,
  sym__corneredTileSpriteType_block = 161,
  sym__maskedShieldType = 162,
  sym__maskedShieldType_block = 163,
  sym__animatedmaptext = 164,
  sym__animatedmaptext_block = 165,
  sym__textcolors = 166,
  sym__textcolors_block = 167,
  sym__bitmapfont = 168,
  sym__bitmapfont_block = 169,
  sym__frameAnimatedSpriteType = 170,
  sym__frameAnimatedSpriteType_block = 171,
  sym__progressbartype = 172,
  sym__progressbartype_block = 173,
  sym__pdxmesh = 174,
  sym__pdxmesh_block = 175,
  sym__statement_name = 176,
  sym__statement_xy_integer = 177,
  sym__entry_x_integer = 178,
  sym__entry_y_integer = 179,
  sym__statement_xy_float = 180,
  sym__entry_x_float = 181,
  sym__entry_y_float = 182,
  sym__statement_mod_path = 183,
  sym__statement_mod_archive = 184,
  sym__statement_mod_remote_file_id = 185,
  sym__statement_mod_version = 186,
  sym__statement_mod_picture = 187,
  sym__statement_mod_supported_version = 188,
  sym__statement_mod_replace_path = 189,
  sym__mod_replace_path_folder = 190,
  sym__statement_mod_tags = 191,
  sym__mod_tags_block = 192,
  sym__mod_tags_keyword = 193,
  sym__statement_mod_dependencies = 194,
  sym__mod_dependencies_block = 195,
  sym__statement_gfx_name = 196,
  sym__statement_gfx_path = 197,
  sym__statement_gfx_cursor_offset = 198,
  sym__statement_gfx_textureFile = 199,
  sym__statement_gfx_textureFile1 = 200,
  sym__statement_gfx_textureFile2 = 201,
  sym__statement_gfx_textureFile3 = 202,
  sym__statement_gfx_noOfFrames = 203,
  sym__statement_gfx_overlay_frames_per_row = 204,
  sym__statement_gfx_overlay_rows = 205,
  sym__statement_gfx_effectFile = 206,
  sym__statement_gfx_animation = 207,
  sym__gfx_animation_block = 208,
  sym__animation_entry_dds = 209,
  sym__animation_entry_angle = 210,
  sym__animation_entry_bool = 211,
  sym__animation_entry_time = 212,
  sym__animation_entry_xy_float = 213,
  sym__animation_entry_blendmode = 214,
  sym__animation_entry_type = 215,
  sym__animation_entry_frames = 216,
  sym__statement_gfx_size = 217,
  sym__statement_gfx_borderSize = 218,
  sym__statement_gfx_allwaystransparent = 219,
  sym__statement_gfx_legacy_lazy_load = 220,
  sym__statement_gfx_clicksound = 221,
  sym__statement_gfx_speed = 222,
  sym__statement_gfx_textblock = 223,
  sym__gfx_textblock = 224,
  sym__statement_gfx_text = 225,
  sym__statement_gfx_color = 226,
  sym__statement_gfx_colortwo = 227,
  sym__statement_gfx_font = 228,
  sym__statement_gfx_position = 229,
  sym__statement_gfx_format = 230,
  sym__statement_gfx_cull_distance = 231,
  sym__statement_gfx_textcolors = 232,
  sym__statement_gfx_bitmapfont_color = 233,
  sym__statement_gfx_bitmapfont_border_color = 234,
  sym__statement_gfx_animation_rate_fps = 235,
  sym__statement_gfx_looping = 236,
  sym__statement_gfx_play_on_show = 237,
  sym__statement_gfx_pause_on_loop = 238,
  sym__statement_gfx_horizontal = 239,
  sym__statement_gfx_file = 240,
  sym__statement_gfx_pdxmesh_animation = 241,
  sym__statement_gfx_animation_id = 242,
  sym__statement_gfx_animation_type = 243,
  sym__statement_gfx_scale = 244,
  sym__statement_gfx_transparencecheck = 245,
  sym_float = 246,
  sym__float_positive = 247,
  sym__integer_positive = 248,
  sym__boolean_yes_no = 249,
  aux_sym_dot_mod_repeat1 = 250,
  aux_sym_dot_gfx_repeat1 = 251,
  aux_sym__spriteTypes_block_repeat1 = 252,
  aux_sym__objectTypes_block_repeat1 = 253,
  aux_sym__bitmapfonts_block_repeat1 = 254,
  aux_sym__spriteType_block_repeat1 = 255,
  aux_sym__textSpriteType_block_repeat1 = 256,
  aux_sym__corneredTileSpriteType_block_repeat1 = 257,
  aux_sym__maskedShieldType_block_repeat1 = 258,
  aux_sym__animatedmaptext_block_repeat1 = 259,
  aux_sym__textcolors_block_repeat1 = 260,
  aux_sym__bitmapfont_block_repeat1 = 261,
  aux_sym__frameAnimatedSpriteType_block_repeat1 = 262,
  aux_sym__progressbartype_block_repeat1 = 263,
  aux_sym__pdxmesh_block_repeat1 = 264,
  aux_sym__mod_tags_block_repeat1 = 265,
  aux_sym__mod_dependencies_block_repeat1 = 266,
  aux_sym__gfx_animation_block_repeat1 = 267,
  aux_sym__animation_entry_frames_repeat1 = 268,
  aux_sym__gfx_textblock_repeat1 = 269,
  alias_sym_dependencies = 270,
  alias_sym_name_value = 271,
  alias_sym_statement = 272,
  alias_sym_type_definition = 273,
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
  [aux_sym__statement_gfx_cull_distance_token1] = "float",
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
  [anon_sym_scale] = "identifier",
  [anon_sym_transparencecheck] = "identifier",
  [sym_assign_equal] = "assign_equal",
  [sym_string] = "string",
  [sym_number] = "number",
  [aux_sym_float_token1] = "float_token1",
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
  [sym__statement_gfx_name] = "statement",
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
  [sym__statement_gfx_size] = "_statement_gfx_size",
  [sym__statement_gfx_borderSize] = "statement",
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
  [sym__statement_gfx_scale] = "statement",
  [sym__statement_gfx_transparencecheck] = "statement",
  [sym_float] = "float",
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
  [aux_sym__statement_gfx_cull_distance_token1] = sym_float,
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
  [anon_sym_scale] = anon_sym_spriteTypes,
  [anon_sym_transparencecheck] = anon_sym_spriteTypes,
  [sym_assign_equal] = sym_assign_equal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [aux_sym_float_token1] = aux_sym_float_token1,
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
  [sym__statement_gfx_path] = sym__statement_gfx_name,
  [sym__statement_gfx_cursor_offset] = sym__statement_gfx_name,
  [sym__statement_gfx_textureFile] = sym__statement_gfx_name,
  [sym__statement_gfx_textureFile1] = sym__statement_gfx_name,
  [sym__statement_gfx_textureFile2] = sym__statement_gfx_name,
  [sym__statement_gfx_textureFile3] = sym__statement_gfx_name,
  [sym__statement_gfx_noOfFrames] = sym__statement_gfx_name,
  [sym__statement_gfx_overlay_frames_per_row] = sym__statement_gfx_name,
  [sym__statement_gfx_overlay_rows] = sym__statement_gfx_name,
  [sym__statement_gfx_effectFile] = sym__statement_gfx_name,
  [sym__statement_gfx_animation] = sym__statement_gfx_name,
  [sym__gfx_animation_block] = sym__gfx_animation_block,
  [sym__animation_entry_dds] = sym__animation_entry_dds,
  [sym__animation_entry_angle] = sym__animation_entry_angle,
  [sym__animation_entry_bool] = sym__animation_entry_bool,
  [sym__animation_entry_time] = sym__animation_entry_time,
  [sym__animation_entry_xy_float] = sym__animation_entry_xy_float,
  [sym__animation_entry_blendmode] = sym__animation_entry_blendmode,
  [sym__animation_entry_type] = sym__animation_entry_type,
  [sym__animation_entry_frames] = sym__animation_entry_frames,
  [sym__statement_gfx_size] = sym__statement_gfx_size,
  [sym__statement_gfx_borderSize] = sym__statement_gfx_name,
  [sym__statement_gfx_allwaystransparent] = sym__statement_gfx_name,
  [sym__statement_gfx_legacy_lazy_load] = sym__statement_gfx_name,
  [sym__statement_gfx_clicksound] = sym__statement_gfx_name,
  [sym__statement_gfx_speed] = sym__statement_gfx_name,
  [sym__statement_gfx_textblock] = sym__statement_gfx_name,
  [sym__gfx_textblock] = sym__gfx_textblock,
  [sym__statement_gfx_text] = sym__statement_gfx_text,
  [sym__statement_gfx_color] = sym__statement_gfx_color,
  [sym__statement_gfx_colortwo] = sym__statement_gfx_name,
  [sym__statement_gfx_font] = sym__statement_gfx_font,
  [sym__statement_gfx_position] = sym__statement_gfx_position,
  [sym__statement_gfx_format] = sym__statement_gfx_format,
  [sym__statement_gfx_cull_distance] = sym__statement_gfx_cull_distance,
  [sym__statement_gfx_textcolors] = sym__statement_gfx_name,
  [sym__statement_gfx_bitmapfont_color] = sym__statement_gfx_name,
  [sym__statement_gfx_bitmapfont_border_color] = sym__statement_gfx_name,
  [sym__statement_gfx_animation_rate_fps] = sym__statement_gfx_name,
  [sym__statement_gfx_looping] = sym__statement_gfx_name,
  [sym__statement_gfx_play_on_show] = sym__statement_gfx_name,
  [sym__statement_gfx_pause_on_loop] = sym__statement_gfx_name,
  [sym__statement_gfx_horizontal] = sym__statement_gfx_name,
  [sym__statement_gfx_file] = sym__statement_gfx_name,
  [sym__statement_gfx_pdxmesh_animation] = sym__statement_gfx_name,
  [sym__statement_gfx_animation_id] = sym__statement_gfx_animation_id,
  [sym__statement_gfx_animation_type] = sym__statement_gfx_animation_type,
  [sym__statement_gfx_scale] = sym__statement_gfx_name,
  [sym__statement_gfx_transparencecheck] = sym__statement_gfx_name,
  [sym_float] = sym_float,
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
  [aux_sym__statement_gfx_cull_distance_token1] = {
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
  [anon_sym_scale] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_transparencecheck] = {
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
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
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
    .visible = true,
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
  [sym__statement_gfx_size] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_gfx_borderSize] = {
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
  [sym__statement_gfx_scale] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_transparencecheck] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
    [0] = sym_float,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1395);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(1559);
      if (lookahead == '-') ADVANCE(1376);
      if (lookahead == '0') ADVANCE(1540);
      if (lookahead == '1') ADVANCE(1540);
      if (lookahead == '2') ADVANCE(1538);
      if (lookahead == '=') ADVANCE(1535);
      if (lookahead == 'B') ADVANCE(1509);
      if (lookahead == 'G') ADVANCE(1512);
      if (lookahead == 'H') ADVANCE(1513);
      if (lookahead == 'M') ADVANCE(1516);
      if (lookahead == 'O') ADVANCE(1517);
      if (lookahead == 'R') ADVANCE(1519);
      if (lookahead == 'T') ADVANCE(1520);
      if (lookahead == 'W') ADVANCE(1521);
      if (lookahead == 'Y') ADVANCE(1522);
      if (lookahead == '\\') SKIP(1391)
      if (lookahead == 'a') ADVANCE(1016);
      if (lookahead == 'b') ADVANCE(1511);
      if (lookahead == 'c') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(825);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == 'f') ADVANCE(736);
      if (lookahead == 'g') ADVANCE(1518);
      if (lookahead == 'h') ADVANCE(1116);
      if (lookahead == 'i') ADVANCE(807);
      if (lookahead == 'l') ADVANCE(1515);
      if (lookahead == 'm') ADVANCE(729);
      if (lookahead == 'n') ADVANCE(730);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead == 'p') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(828);
      if (lookahead == 's') ADVANCE(787);
      if (lookahead == 't') ADVANCE(737);
      if (lookahead == 'v') ADVANCE(865);
      if (lookahead == 'x') ADVANCE(1414);
      if (lookahead == 'y') ADVANCE(1416);
      if (lookahead == '{') ADVANCE(1397);
      if (lookahead == '}') ADVANCE(1398);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1540);
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
      if (lookahead == '\n') SKIP(438)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(438)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(439)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(439)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(440)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(440)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(441)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(441)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(442)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(442)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(443)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(443)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(673);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(674);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(668);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(672);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(670);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(671);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(669);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(447);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(356);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(357);
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1421);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'A') ADVANCE(200);
      if (lookahead == 'C') ADVANCE(244);
      if (lookahead == 'E') ADVANCE(310);
      if (lookahead == 'G') ADVANCE(103);
      if (lookahead == 'H') ADVANCE(171);
      if (lookahead == 'L') ADVANCE(246);
      if (lookahead == 'M') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(144);
      if (lookahead == 'S') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead == 'h') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(174);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1421);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1421);
      if (lookahead == 'c') ADVANCE(1122);
      if (lookahead == 'd') ADVANCE(903);
      if (lookahead == 'e') ADVANCE(1333);
      if (lookahead == 'g') ADVANCE(930);
      if (lookahead == 'h') ADVANCE(978);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1137);
      if (lookahead == 'm') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '*') ADVANCE(388);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'z') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'z') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'z') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'K') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'z') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'z') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'z') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'j') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 'z') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(1536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'X') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '_') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'y') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 's') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 's') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(158);
      if (lookahead == 'x') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 'F') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 'X') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == '_') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == '.') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(1454);
      if (lookahead == 'G') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(1441);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 330:
      if (lookahead == '"') ADVANCE(1441);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead == 'j') ADVANCE(350);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(339);
      if (lookahead == 'p') ADVANCE(347);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead == 'z') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'g') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'g') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'h') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(1429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(360);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(1423);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(1423);
      if (lookahead == '.') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(1423);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(1423);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(1425);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(1425);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(1425);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(1419);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(1419);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(1419);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(1459);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(1459);
      if (lookahead == '.') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(1467);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(1467);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(1438);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(1438);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(1447);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(1447);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(1435);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(1435);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(1449);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(1449);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(1427);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(1427);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(1427);
      if (lookahead == '.') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(1427);
      if (lookahead == '.') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(1427);
      if (lookahead == '.') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(1427);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(1427);
      if (lookahead == '.') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(1427);
      if (lookahead == '.') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(682);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(1530);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(1530);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(1433);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(1433);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(1483);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 396:
      if (lookahead == '"') ADVANCE(1483);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 397:
      if (lookahead == '"') ADVANCE(1487);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 398:
      if (lookahead == '"') ADVANCE(1487);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 399:
      if (lookahead == '"') ADVANCE(1432);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 400:
      if (lookahead == '"') ADVANCE(1432);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 401:
      if (lookahead == '"') ADVANCE(1436);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 402:
      if (lookahead == '"') ADVANCE(1436);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 403:
      if (lookahead == '"') ADVANCE(1437);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 404:
      if (lookahead == '"') ADVANCE(1437);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 405:
      if (lookahead == '"') ADVANCE(1442);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 406:
      if (lookahead == '"') ADVANCE(1442);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 407:
      if (lookahead == '"') ADVANCE(1446);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 408:
      if (lookahead == '"') ADVANCE(1446);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 409:
      if (lookahead == '"') ADVANCE(1482);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 410:
      if (lookahead == '"') ADVANCE(1482);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 411:
      if (lookahead == '"') ADVANCE(1486);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 412:
      if (lookahead == '"') ADVANCE(1486);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 413:
      if (lookahead == '"') ADVANCE(1434);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 414:
      if (lookahead == '"') ADVANCE(1434);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 415:
      if (lookahead == '"') ADVANCE(1485);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 416:
      if (lookahead == '"') ADVANCE(1485);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 417:
      if (lookahead == '"') ADVANCE(1451);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 418:
      if (lookahead == '"') ADVANCE(1451);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 419:
      if (lookahead == '"') ADVANCE(1439);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 420:
      if (lookahead == '"') ADVANCE(1439);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 421:
      if (lookahead == '"') ADVANCE(1445);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 422:
      if (lookahead == '"') ADVANCE(1445);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 423:
      if (lookahead == '"') ADVANCE(1450);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 424:
      if (lookahead == '"') ADVANCE(1450);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 425:
      if (lookahead == '"') ADVANCE(1448);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 426:
      if (lookahead == '"') ADVANCE(1448);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 427:
      if (lookahead == '"') ADVANCE(1440);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 428:
      if (lookahead == '"') ADVANCE(1440);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 429:
      if (lookahead == '"') ADVANCE(1444);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 430:
      if (lookahead == '"') ADVANCE(1444);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 431:
      if (lookahead == '"') ADVANCE(1431);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 432:
      if (lookahead == '"') ADVANCE(1431);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 433:
      if (lookahead == '"') ADVANCE(1452);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 434:
      if (lookahead == '"') ADVANCE(1452);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 435:
      if (lookahead == '"') ADVANCE(1443);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 436:
      if (lookahead == '"') ADVANCE(1443);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 437:
      if (lookahead == '"') ADVANCE(1473);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 438:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(1559);
      if (lookahead == '-') ADVANCE(1378);
      if (lookahead == '=') ADVANCE(1535);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(1019);
      if (lookahead == 'b') ADVANCE(1000);
      if (lookahead == 'c') ADVANCE(1048);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == 'f') ADVANCE(1199);
      if (lookahead == 'l') ADVANCE(827);
      if (lookahead == 'm') ADVANCE(729);
      if (lookahead == 'n') ADVANCE(731);
      if (lookahead == 'p') ADVANCE(734);
      if (lookahead == 's') ADVANCE(958);
      if (lookahead == 't') ADVANCE(908);
      if (lookahead == '}') ADVANCE(1398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(438)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1542);
      END_STATE();
    case 439:
      if (lookahead == '"') ADVANCE(328);
      if (lookahead == '#') ADVANCE(1559);
      if (lookahead == '-') ADVANCE(1380);
      if (lookahead == '=') ADVANCE(1535);
      if (lookahead == 'B') ADVANCE(1509);
      if (lookahead == 'G') ADVANCE(1512);
      if (lookahead == 'H') ADVANCE(1513);
      if (lookahead == 'M') ADVANCE(1516);
      if (lookahead == 'O') ADVANCE(1517);
      if (lookahead == 'R') ADVANCE(1519);
      if (lookahead == 'T') ADVANCE(1520);
      if (lookahead == 'W') ADVANCE(1521);
      if (lookahead == 'Y') ADVANCE(1522);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead == 'b') ADVANCE(1510);
      if (lookahead == 'c') ADVANCE(1053);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == 'f') ADVANCE(962);
      if (lookahead == 'g') ADVANCE(1518);
      if (lookahead == 'l') ADVANCE(1514);
      if (lookahead == 'n') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(1332);
      if (lookahead == 's') ADVANCE(786);
      if (lookahead == 't') ADVANCE(916);
      if (lookahead == '}') ADVANCE(1398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(439)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1544);
      END_STATE();
    case 440:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(1559);
      if (lookahead == '-') ADVANCE(1378);
      if (lookahead == '=') ADVANCE(1535);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(1017);
      if (lookahead == 'b') ADVANCE(1163);
      if (lookahead == 'c') ADVANCE(1047);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == 'f') ADVANCE(962);
      if (lookahead == 'l') ADVANCE(827);
      if (lookahead == 'n') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(1332);
      if (lookahead == 'p') ADVANCE(743);
      if (lookahead == 's') ADVANCE(788);
      if (lookahead == 't') ADVANCE(924);
      if (lookahead == '}') ADVANCE(1398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(440)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1542);
      END_STATE();
    case 441:
      if (lookahead == '#') ADVANCE(1559);
      if (lookahead == '0') ADVANCE(684);
      if (lookahead == '=') ADVANCE(1535);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'c') ADVANCE(1160);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == 'h') ADVANCE(1116);
      if (lookahead == 'n') ADVANCE(731);
      if (lookahead == 's') ADVANCE(957);
      if (lookahead == 't') ADVANCE(925);
      if (lookahead == '}') ADVANCE(1398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(441)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 442:
      if (lookahead == '#') ADVANCE(1559);
      if (lookahead == '0') ADVANCE(1546);
      if (lookahead == '1') ADVANCE(1550);
      if (lookahead == '2') ADVANCE(1547);
      if (lookahead == '=') ADVANCE(1535);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'c') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1113);
      if (lookahead == 'n') ADVANCE(1115);
      if (lookahead == 'p') ADVANCE(1117);
      if (lookahead == 's') ADVANCE(957);
      if (lookahead == 't') ADVANCE(910);
      if (lookahead == 'y') ADVANCE(866);
      if (lookahead == '}') ADVANCE(1398);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1549);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(442)
      END_STATE();
    case 443:
      if (lookahead == '#') ADVANCE(1559);
      if (lookahead == '0') ADVANCE(686);
      if (lookahead == '3') ADVANCE(688);
      if (lookahead == '=') ADVANCE(1535);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(1015);
      if (lookahead == 'b') ADVANCE(1163);
      if (lookahead == 'c') ADVANCE(1160);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == 'h') ADVANCE(1116);
      if (lookahead == 'l') ADVANCE(826);
      if (lookahead == 'n') ADVANCE(731);
      if (lookahead == 's') ADVANCE(957);
      if (lookahead == 't') ADVANCE(926);
      if (lookahead == '}') ADVANCE(1398);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(690);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(443)
      END_STATE();
    case 444:
      if (lookahead == '*') ADVANCE(390);
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(679);
      if (lookahead == 't') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(682);
      END_STATE();
    case 445:
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(679);
      if (lookahead == 't') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(682);
      END_STATE();
    case 446:
      if (lookahead == '.') ADVANCE(549);
      if (lookahead == 'A') ADVANCE(550);
      if (lookahead == 'M') ADVANCE(455);
      if (lookahead == 'R') ADVANCE(493);
      if (lookahead == 'S') ADVANCE(589);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == 'm') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(657);
      if (lookahead == 'p') ADVANCE(654);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead == 's') ADVANCE(472);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(456);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(590);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(522);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(451);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(523);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(592);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(491);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 447:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'C') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 448:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'I') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 449:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'I') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 450:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'K') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 451:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead == 'u') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 452:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 453:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 454:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 'u') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 455:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 456:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 457:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 458:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 459:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 460:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 461:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 462:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 463:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 464:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 465:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(643);
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 466:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 467:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 468:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 469:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 470:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 471:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 472:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(612);
      if (lookahead == 'o') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 473:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 474:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 475:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 476:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 477:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 478:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 479:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(487);
      if (lookahead == 'l') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 480:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'j') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(656);
      if (lookahead == 'm') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(568);
      if (lookahead == 'z') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 481:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'j') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(656);
      if (lookahead == 'm') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(568);
      if (lookahead == 'z') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 482:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 483:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 484:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 485:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 486:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 487:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 488:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 489:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'n') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 490:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 491:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 492:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 493:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 494:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 495:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 496:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 497:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 498:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 499:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 500:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 501:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 502:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 503:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 504:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 505:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 506:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 507:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 508:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 509:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 510:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 511:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 512:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'g') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 513:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'g') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 514:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 515:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'g') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 516:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 517:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'g') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 518:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'g') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 519:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'h') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 520:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'h') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 521:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'h') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 522:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 523:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 524:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 525:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 526:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 527:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 528:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 529:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 530:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 531:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 532:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 533:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 534:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 535:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 536:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 537:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 538:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 539:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 540:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 541:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 542:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 543:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 544:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 545:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 546:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 547:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 548:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 549:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'j') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(568);
      if (lookahead == 'z') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 550:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 551:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 552:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 553:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 554:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 's') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 555:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 556:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 557:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 558:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 559:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 560:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 561:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 562:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 563:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 564:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 565:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 566:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'm') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 567:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 568:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 569:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 570:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 571:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 572:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 573:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 574:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 575:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 576:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 577:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 578:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 579:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 580:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 581:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 582:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 583:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 584:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 585:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 586:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 587:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 588:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 589:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 590:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 591:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 592:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 593:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 594:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 595:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 596:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 597:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 598:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 599:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 600:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 601:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 602:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 603:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 604:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 605:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 606:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 607:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 608:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 609:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 610:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 611:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 612:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 613:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 614:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 615:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 616:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 617:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 618:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 619:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 620:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 621:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 622:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 623:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 624:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 625:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 626:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 627:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 628:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 629:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 630:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 631:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 632:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 633:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 634:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 635:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 636:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 637:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 638:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 639:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 640:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 641:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 642:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 643:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 644:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 645:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 646:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 647:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 648:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 649:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 650:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 651:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 652:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 653:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 't') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 654:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 655:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 656:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 657:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'v') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 658:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'v') ADVANCE(496);
      if (lookahead == 'x') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 659:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'v') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 660:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'v') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 661:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'w') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 662:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'x') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 663:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'y') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 664:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'y') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 665:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'y') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 666:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'y') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 667:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'y') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 668:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 669:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 670:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 671:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 672:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 673:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 674:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 675:
      if (lookahead == '.') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(675);
      END_STATE();
    case 676:
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(682);
      END_STATE();
    case 677:
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(679);
      if (lookahead == 't') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(682);
      END_STATE();
    case 678:
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(679);
      if (lookahead == 't') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(682);
      END_STATE();
    case 679:
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(682);
      END_STATE();
    case 680:
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 'g') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(682);
      END_STATE();
    case 681:
      if (lookahead == '.') ADVANCE(678);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(682);
      END_STATE();
    case 682:
      if (lookahead == '.') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(682);
      END_STATE();
    case 683:
      if (lookahead == '.') ADVANCE(691);
      END_STATE();
    case 684:
      if (lookahead == '.') ADVANCE(1381);
      if (lookahead == 'f') ADVANCE(1508);
      if (lookahead == 'x') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 685:
      if (lookahead == '.') ADVANCE(1381);
      if (lookahead == 'f') ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 686:
      if (lookahead == '.') ADVANCE(1382);
      END_STATE();
    case 687:
      if (lookahead == '.') ADVANCE(1382);
      if (lookahead == '0') ADVANCE(683);
      END_STATE();
    case 688:
      if (lookahead == '.') ADVANCE(1382);
      if (lookahead == '6') ADVANCE(687);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(689);
      END_STATE();
    case 689:
      if (lookahead == '.') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      END_STATE();
    case 690:
      if (lookahead == '.') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      END_STATE();
    case 691:
      if (lookahead == '0') ADVANCE(1553);
      END_STATE();
    case 692:
      if (lookahead == '1') ADVANCE(1460);
      if (lookahead == '2') ADVANCE(1461);
      if (lookahead == '3') ADVANCE(1462);
      END_STATE();
    case 693:
      if (lookahead == 'A') ADVANCE(1112);
      END_STATE();
    case 694:
      if (lookahead == 'F') ADVANCE(1224);
      END_STATE();
    case 695:
      if (lookahead == 'F') ADVANCE(980);
      END_STATE();
    case 696:
      if (lookahead == 'O') ADVANCE(927);
      END_STATE();
    case 697:
      if (lookahead == 'S') ADVANCE(1185);
      if (lookahead == 'c') ADVANCE(1161);
      if (lookahead == 'u') ADVANCE(1228);
      END_STATE();
    case 698:
      if (lookahead == 'S') ADVANCE(975);
      END_STATE();
    case 699:
      if (lookahead == 'S') ADVANCE(975);
      if (lookahead == '_') ADVANCE(796);
      END_STATE();
    case 700:
      if (lookahead == 'S') ADVANCE(954);
      END_STATE();
    case 701:
      if (lookahead == 'S') ADVANCE(1192);
      END_STATE();
    case 702:
      if (lookahead == 'S') ADVANCE(1193);
      END_STATE();
    case 703:
      if (lookahead == 'T') ADVANCE(1358);
      END_STATE();
    case 704:
      if (lookahead == 'T') ADVANCE(1359);
      END_STATE();
    case 705:
      if (lookahead == 'T') ADVANCE(1360);
      END_STATE();
    case 706:
      if (lookahead == 'T') ADVANCE(986);
      END_STATE();
    case 707:
      if (lookahead == 'T') ADVANCE(1362);
      END_STATE();
    case 708:
      if (lookahead == 'T') ADVANCE(1363);
      END_STATE();
    case 709:
      if (lookahead == 'T') ADVANCE(1364);
      END_STATE();
    case 710:
      if (lookahead == 'T') ADVANCE(1365);
      END_STATE();
    case 711:
      if (lookahead == 'T') ADVANCE(1366);
      END_STATE();
    case 712:
      if (lookahead == '_') ADVANCE(944);
      END_STATE();
    case 713:
      if (lookahead == '_') ADVANCE(815);
      END_STATE();
    case 714:
      if (lookahead == '_') ADVANCE(939);
      END_STATE();
    case 715:
      if (lookahead == '_') ADVANCE(1128);
      END_STATE();
    case 716:
      if (lookahead == '_') ADVANCE(933);
      END_STATE();
    case 717:
      if (lookahead == '_') ADVANCE(1187);
      END_STATE();
    case 718:
      if (lookahead == '_') ADVANCE(1149);
      END_STATE();
    case 719:
      if (lookahead == '_') ADVANCE(969);
      END_STATE();
    case 720:
      if (lookahead == '_') ADVANCE(1222);
      if (lookahead == 'b') ADVANCE(1054);
      if (lookahead == 'd') ADVANCE(905);
      if (lookahead == 'f') ADVANCE(1227);
      if (lookahead == 'l') ADVANCE(1159);
      if (lookahead == 'm') ADVANCE(758);
      if (lookahead == 'r') ADVANCE(1154);
      if (lookahead == 't') ADVANCE(909);
      END_STATE();
    case 721:
      if (lookahead == '_') ADVANCE(1251);
      END_STATE();
    case 722:
      if (lookahead == '_') ADVANCE(1209);
      END_STATE();
    case 723:
      if (lookahead == '_') ADVANCE(1334);
      END_STATE();
    case 724:
      if (lookahead == '_') ADVANCE(1031);
      END_STATE();
    case 725:
      if (lookahead == '_') ADVANCE(1052);
      END_STATE();
    case 726:
      if (lookahead == '_') ADVANCE(1133);
      END_STATE();
    case 727:
      if (lookahead == '_') ADVANCE(1032);
      END_STATE();
    case 728:
      if (lookahead == '_') ADVANCE(1188);
      END_STATE();
    case 729:
      if (lookahead == 'a') ADVANCE(1235);
      END_STATE();
    case 730:
      if (lookahead == 'a') ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(1558);
      END_STATE();
    case 731:
      if (lookahead == 'a') ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 732:
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'd') ADVANCE(1346);
      if (lookahead == 'i') ADVANCE(790);
      if (lookahead == 'l') ADVANCE(735);
      if (lookahead == 'o') ADVANCE(1250);
      if (lookahead == 'r') ADVANCE(1120);
      END_STATE();
    case 733:
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'i') ADVANCE(790);
      if (lookahead == 'l') ADVANCE(735);
      END_STATE();
    case 734:
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'l') ADVANCE(735);
      if (lookahead == 'r') ADVANCE(1120);
      END_STATE();
    case 735:
      if (lookahead == 'a') ADVANCE(1353);
      END_STATE();
    case 736:
      if (lookahead == 'a') ADVANCE(1026);
      if (lookahead == 'i') ADVANCE(1027);
      if (lookahead == 'o') ADVANCE(1090);
      if (lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 737:
      if (lookahead == 'a') ADVANCE(948);
      if (lookahead == 'e') ADVANCE(1341);
      if (lookahead == 'r') ADVANCE(741);
      if (lookahead == 'y') ADVANCE(1171);
      END_STATE();
    case 738:
      if (lookahead == 'a') ADVANCE(948);
      if (lookahead == 'e') ADVANCE(1343);
      if (lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 739:
      if (lookahead == 'a') ADVANCE(1357);
      END_STATE();
    case 740:
      if (lookahead == 'a') ADVANCE(1094);
      END_STATE();
    case 741:
      if (lookahead == 'a') ADVANCE(1094);
      if (lookahead == 'u') ADVANCE(832);
      END_STATE();
    case 742:
      if (lookahead == 'a') ADVANCE(1371);
      END_STATE();
    case 743:
      if (lookahead == 'a') ADVANCE(1325);
      if (lookahead == 'l') ADVANCE(735);
      END_STATE();
    case 744:
      if (lookahead == 'a') ADVANCE(804);
      END_STATE();
    case 745:
      if (lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 746:
      if (lookahead == 'a') ADVANCE(800);
      END_STATE();
    case 747:
      if (lookahead == 'a') ADVANCE(1167);
      END_STATE();
    case 748:
      if (lookahead == 'a') ADVANCE(1274);
      END_STATE();
    case 749:
      if (lookahead == 'a') ADVANCE(1023);
      END_STATE();
    case 750:
      if (lookahead == 'a') ADVANCE(1189);
      END_STATE();
    case 751:
      if (lookahead == 'a') ADVANCE(1275);
      END_STATE();
    case 752:
      if (lookahead == 'a') ADVANCE(1220);
      END_STATE();
    case 753:
      if (lookahead == 'a') ADVANCE(1051);
      END_STATE();
    case 754:
      if (lookahead == 'a') ADVANCE(1165);
      if (lookahead == 'i') ADVANCE(1268);
      END_STATE();
    case 755:
      if (lookahead == 'a') ADVANCE(812);
      END_STATE();
    case 756:
      if (lookahead == 'a') ADVANCE(1208);
      END_STATE();
    case 757:
      if (lookahead == 'a') ADVANCE(1289);
      END_STATE();
    case 758:
      if (lookahead == 'a') ADVANCE(1252);
      END_STATE();
    case 759:
      if (lookahead == 'a') ADVANCE(1063);
      END_STATE();
    case 760:
      if (lookahead == 'a') ADVANCE(1034);
      END_STATE();
    case 761:
      if (lookahead == 'a') ADVANCE(1356);
      END_STATE();
    case 762:
      if (lookahead == 'a') ADVANCE(1067);
      END_STATE();
    case 763:
      if (lookahead == 'a') ADVANCE(803);
      END_STATE();
    case 764:
      if (lookahead == 'a') ADVANCE(1299);
      END_STATE();
    case 765:
      if (lookahead == 'a') ADVANCE(1068);
      END_STATE();
    case 766:
      if (lookahead == 'a') ADVANCE(1216);
      END_STATE();
    case 767:
      if (lookahead == 'a') ADVANCE(1070);
      END_STATE();
    case 768:
      if (lookahead == 'a') ADVANCE(1042);
      END_STATE();
    case 769:
      if (lookahead == 'a') ADVANCE(1109);
      END_STATE();
    case 770:
      if (lookahead == 'a') ADVANCE(1302);
      END_STATE();
    case 771:
      if (lookahead == 'a') ADVANCE(1110);
      END_STATE();
    case 772:
      if (lookahead == 'a') ADVANCE(1190);
      END_STATE();
    case 773:
      if (lookahead == 'a') ADVANCE(1308);
      END_STATE();
    case 774:
      if (lookahead == 'a') ADVANCE(1191);
      END_STATE();
    case 775:
      if (lookahead == 'a') ADVANCE(1310);
      END_STATE();
    case 776:
      if (lookahead == 'a') ADVANCE(1311);
      END_STATE();
    case 777:
      if (lookahead == 'a') ADVANCE(1312);
      END_STATE();
    case 778:
      if (lookahead == 'a') ADVANCE(1313);
      END_STATE();
    case 779:
      if (lookahead == 'b') ADVANCE(1007);
      if (lookahead == 'v') ADVANCE(867);
      END_STATE();
    case 780:
      if (lookahead == 'b') ADVANCE(1028);
      if (lookahead == 'u') ADVANCE(1215);
      END_STATE();
    case 781:
      if (lookahead == 'b') ADVANCE(1028);
      if (lookahead == 'u') ADVANCE(1228);
      END_STATE();
    case 782:
      if (lookahead == 'b') ADVANCE(756);
      END_STATE();
    case 783:
      if (lookahead == 'c') ADVANCE(953);
      END_STATE();
    case 784:
      if (lookahead == 'c') ADVANCE(1008);
      END_STATE();
    case 785:
      if (lookahead == 'c') ADVANCE(1009);
      END_STATE();
    case 786:
      if (lookahead == 'c') ADVANCE(760);
      END_STATE();
    case 787:
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(1369);
      if (lookahead == 'p') ADVANCE(878);
      if (lookahead == 'u') ADVANCE(1168);
      END_STATE();
    case 788:
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(1369);
      if (lookahead == 'p') ADVANCE(877);
      END_STATE();
    case 789:
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(1369);
      if (lookahead == 'p') ADVANCE(879);
      if (lookahead == 'u') ADVANCE(1168);
      END_STATE();
    case 790:
      if (lookahead == 'c') ADVANCE(1272);
      END_STATE();
    case 791:
      if (lookahead == 'c') ADVANCE(1010);
      END_STATE();
    case 792:
      if (lookahead == 'c') ADVANCE(956);
      END_STATE();
    case 793:
      if (lookahead == 'c') ADVANCE(1013);
      END_STATE();
    case 794:
      if (lookahead == 'c') ADVANCE(1011);
      END_STATE();
    case 795:
      if (lookahead == 'c') ADVANCE(1287);
      END_STATE();
    case 796:
      if (lookahead == 'c') ADVANCE(1129);
      END_STATE();
    case 797:
      if (lookahead == 'c') ADVANCE(1276);
      END_STATE();
    case 798:
      if (lookahead == 'c') ADVANCE(979);
      END_STATE();
    case 799:
      if (lookahead == 'c') ADVANCE(753);
      END_STATE();
    case 800:
      if (lookahead == 'c') ADVANCE(874);
      END_STATE();
    case 801:
      if (lookahead == 'c') ADVANCE(899);
      END_STATE();
    case 802:
      if (lookahead == 'c') ADVANCE(845);
      END_STATE();
    case 803:
      if (lookahead == 'c') ADVANCE(863);
      END_STATE();
    case 804:
      if (lookahead == 'c') ADVANCE(1355);
      END_STATE();
    case 805:
      if (lookahead == 'c') ADVANCE(974);
      END_STATE();
    case 806:
      if (lookahead == 'c') ADVANCE(768);
      END_STATE();
    case 807:
      if (lookahead == 'd') ADVANCE(1531);
      END_STATE();
    case 808:
      if (lookahead == 'd') ADVANCE(1496);
      END_STATE();
    case 809:
      if (lookahead == 'd') ADVANCE(700);
      END_STATE();
    case 810:
      if (lookahead == 'd') ADVANCE(1493);
      END_STATE();
    case 811:
      if (lookahead == 'd') ADVANCE(1420);
      END_STATE();
    case 812:
      if (lookahead == 'd') ADVANCE(1492);
      END_STATE();
    case 813:
      if (lookahead == 'd') ADVANCE(706);
      END_STATE();
    case 814:
      if (lookahead == 'd') ADVANCE(1066);
      END_STATE();
    case 815:
      if (lookahead == 'd') ADVANCE(967);
      END_STATE();
    case 816:
      if (lookahead == 'd') ADVANCE(723);
      END_STATE();
    case 817:
      if (lookahead == 'd') ADVANCE(850);
      END_STATE();
    case 818:
      if (lookahead == 'd') ADVANCE(881);
      END_STATE();
    case 819:
      if (lookahead == 'd') ADVANCE(1064);
      END_STATE();
    case 820:
      if (lookahead == 'd') ADVANCE(873);
      END_STATE();
    case 821:
      if (lookahead == 'd') ADVANCE(893);
      END_STATE();
    case 822:
      if (lookahead == 'd') ADVANCE(707);
      END_STATE();
    case 823:
      if (lookahead == 'd') ADVANCE(702);
      END_STATE();
    case 824:
      if (lookahead == 'e') ADVANCE(1088);
      if (lookahead == 'l') ADVANCE(963);
      if (lookahead == 'o') ADVANCE(1046);
      if (lookahead == 'u') ADVANCE(1025);
      END_STATE();
    case 825:
      if (lookahead == 'e') ADVANCE(1166);
      END_STATE();
    case 826:
      if (lookahead == 'e') ADVANCE(947);
      END_STATE();
    case 827:
      if (lookahead == 'e') ADVANCE(947);
      if (lookahead == 'o') ADVANCE(1119);
      END_STATE();
    case 828:
      if (lookahead == 'e') ADVANCE(1059);
      END_STATE();
    case 829:
      if (lookahead == 'e') ADVANCE(1529);
      END_STATE();
    case 830:
      if (lookahead == 'e') ADVANCE(1413);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(1489);
      END_STATE();
    case 832:
      if (lookahead == 'e') ADVANCE(1554);
      END_STATE();
    case 833:
      if (lookahead == 'e') ADVANCE(1532);
      END_STATE();
    case 834:
      if (lookahead == 'e') ADVANCE(1555);
      END_STATE();
    case 835:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 836:
      if (lookahead == 'e') ADVANCE(1533);
      END_STATE();
    case 837:
      if (lookahead == 'e') ADVANCE(1506);
      END_STATE();
    case 838:
      if (lookahead == 'e') ADVANCE(1418);
      END_STATE();
    case 839:
      if (lookahead == 'e') ADVANCE(1424);
      END_STATE();
    case 840:
      if (lookahead == 'e') ADVANCE(1372);
      END_STATE();
    case 841:
      if (lookahead == 'e') ADVANCE(1490);
      END_STATE();
    case 842:
      if (lookahead == 'e') ADVANCE(1466);
      END_STATE();
    case 843:
      if (lookahead == 'e') ADVANCE(1402);
      END_STATE();
    case 844:
      if (lookahead == 'e') ADVANCE(1458);
      END_STATE();
    case 845:
      if (lookahead == 'e') ADVANCE(1507);
      END_STATE();
    case 846:
      if (lookahead == 'e') ADVANCE(1403);
      END_STATE();
    case 847:
      if (lookahead == 'e') ADVANCE(1411);
      END_STATE();
    case 848:
      if (lookahead == 'e') ADVANCE(1405);
      END_STATE();
    case 849:
      if (lookahead == 'e') ADVANCE(1471);
      END_STATE();
    case 850:
      if (lookahead == 'e') ADVANCE(1480);
      END_STATE();
    case 851:
      if (lookahead == 'e') ADVANCE(1404);
      END_STATE();
    case 852:
      if (lookahead == 'e') ADVANCE(1410);
      END_STATE();
    case 853:
      if (lookahead == 'e') ADVANCE(1401);
      END_STATE();
    case 854:
      if (lookahead == 'e') ADVANCE(1456);
      END_STATE();
    case 855:
      if (lookahead == 'e') ADVANCE(1476);
      END_STATE();
    case 856:
      if (lookahead == 'e') ADVANCE(1484);
      END_STATE();
    case 857:
      if (lookahead == 'e') ADVANCE(943);
      END_STATE();
    case 858:
      if (lookahead == 'e') ADVANCE(1472);
      END_STATE();
    case 859:
      if (lookahead == 'e') ADVANCE(1479);
      END_STATE();
    case 860:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 861:
      if (lookahead == 'e') ADVANCE(1457);
      END_STATE();
    case 862:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 863:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 864:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 865:
      if (lookahead == 'e') ADVANCE(1218);
      END_STATE();
    case 866:
      if (lookahead == 'e') ADVANCE(1236);
      END_STATE();
    case 867:
      if (lookahead == 'e') ADVANCE(1204);
      END_STATE();
    case 868:
      if (lookahead == 'e') ADVANCE(1106);
      END_STATE();
    case 869:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 870:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 871:
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == 'i') ADVANCE(1136);
      END_STATE();
    case 872:
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 873:
      if (lookahead == 'e') ADVANCE(1195);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 875:
      if (lookahead == 'e') ADVANCE(816);
      END_STATE();
    case 876:
      if (lookahead == 'e') ADVANCE(1249);
      END_STATE();
    case 877:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 878:
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == 'r') ADVANCE(977);
      END_STATE();
    case 879:
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == 'r') ADVANCE(1003);
      END_STATE();
    case 880:
      if (lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 881:
      if (lookahead == 'e') ADVANCE(1095);
      END_STATE();
    case 882:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 883:
      if (lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 884:
      if (lookahead == 'e') ADVANCE(1258);
      END_STATE();
    case 885:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 886:
      if (lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 887:
      if (lookahead == 'e') ADVANCE(1239);
      END_STATE();
    case 888:
      if (lookahead == 'e') ADVANCE(1097);
      END_STATE();
    case 889:
      if (lookahead == 'e') ADVANCE(1241);
      END_STATE();
    case 890:
      if (lookahead == 'e') ADVANCE(1206);
      END_STATE();
    case 891:
      if (lookahead == 'e') ADVANCE(1243);
      END_STATE();
    case 892:
      if (lookahead == 'e') ADVANCE(1278);
      END_STATE();
    case 893:
      if (lookahead == 'e') ADVANCE(1201);
      END_STATE();
    case 894:
      if (lookahead == 'e') ADVANCE(1256);
      END_STATE();
    case 895:
      if (lookahead == 'e') ADVANCE(1281);
      END_STATE();
    case 896:
      if (lookahead == 'e') ADVANCE(1205);
      END_STATE();
    case 897:
      if (lookahead == 'e') ADVANCE(1242);
      END_STATE();
    case 898:
      if (lookahead == 'e') ADVANCE(1247);
      END_STATE();
    case 899:
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 900:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 901:
      if (lookahead == 'e') ADVANCE(1342);
      END_STATE();
    case 902:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 903:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 904:
      if (lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 905:
      if (lookahead == 'e') ADVANCE(1033);
      END_STATE();
    case 906:
      if (lookahead == 'e') ADVANCE(1212);
      END_STATE();
    case 907:
      if (lookahead == 'e') ADVANCE(1100);
      END_STATE();
    case 908:
      if (lookahead == 'e') ADVANCE(1344);
      END_STATE();
    case 909:
      if (lookahead == 'e') ADVANCE(1347);
      if (lookahead == 'i') ADVANCE(1069);
      if (lookahead == 'y') ADVANCE(1184);
      END_STATE();
    case 910:
      if (lookahead == 'e') ADVANCE(1345);
      END_STATE();
    case 911:
      if (lookahead == 'e') ADVANCE(1105);
      END_STATE();
    case 912:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 913:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 914:
      if (lookahead == 'e') ADVANCE(1373);
      END_STATE();
    case 915:
      if (lookahead == 'e') ADVANCE(1225);
      END_STATE();
    case 916:
      if (lookahead == 'e') ADVANCE(1348);
      if (lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 917:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 918:
      if (lookahead == 'e') ADVANCE(1374);
      END_STATE();
    case 919:
      if (lookahead == 'e') ADVANCE(1375);
      END_STATE();
    case 920:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 921:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 922:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 923:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 924:
      if (lookahead == 'e') ADVANCE(1349);
      if (lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 925:
      if (lookahead == 'e') ADVANCE(1350);
      END_STATE();
    case 926:
      if (lookahead == 'e') ADVANCE(1351);
      END_STATE();
    case 927:
      if (lookahead == 'f') ADVANCE(694);
      END_STATE();
    case 928:
      if (lookahead == 'f') ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      END_STATE();
    case 929:
      if (lookahead == 'f') ADVANCE(931);
      END_STATE();
    case 930:
      if (lookahead == 'f') ADVANCE(1340);
      END_STATE();
    case 931:
      if (lookahead == 'f') ADVANCE(900);
      END_STATE();
    case 932:
      if (lookahead == 'f') ADVANCE(935);
      END_STATE();
    case 933:
      if (lookahead == 'f') ADVANCE(1174);
      END_STATE();
    case 934:
      if (lookahead == 'f') ADVANCE(763);
      END_STATE();
    case 935:
      if (lookahead == 'f') ADVANCE(1263);
      END_STATE();
    case 936:
      if (lookahead == 'f') ADVANCE(1264);
      END_STATE();
    case 937:
      if (lookahead == 'f') ADVANCE(1155);
      END_STATE();
    case 938:
      if (lookahead == 'f') ADVANCE(936);
      END_STATE();
    case 939:
      if (lookahead == 'f') ADVANCE(982);
      END_STATE();
    case 940:
      if (lookahead == 'f') ADVANCE(1157);
      END_STATE();
    case 941:
      if (lookahead == 'f') ADVANCE(1158);
      END_STATE();
    case 942:
      if (lookahead == 'f') ADVANCE(988);
      END_STATE();
    case 943:
      if (lookahead == 'f') ADVANCE(992);
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 944:
      if (lookahead == 'f') ADVANCE(1226);
      if (lookahead == 'r') ADVANCE(1121);
      END_STATE();
    case 945:
      if (lookahead == 'g') ADVANCE(1525);
      END_STATE();
    case 946:
      if (lookahead == 'g') ADVANCE(1475);
      END_STATE();
    case 947:
      if (lookahead == 'g') ADVANCE(744);
      END_STATE();
    case 948:
      if (lookahead == 'g') ADVANCE(1237);
      END_STATE();
    case 949:
      if (lookahead == 'g') ADVANCE(1211);
      END_STATE();
    case 950:
      if (lookahead == 'h') ADVANCE(1417);
      END_STATE();
    case 951:
      if (lookahead == 'h') ADVANCE(1412);
      END_STATE();
    case 952:
      if (lookahead == 'h') ADVANCE(1428);
      END_STATE();
    case 953:
      if (lookahead == 'h') ADVANCE(959);
      END_STATE();
    case 954:
      if (lookahead == 'h') ADVANCE(973);
      END_STATE();
    case 955:
      if (lookahead == 'h') ADVANCE(1123);
      END_STATE();
    case 956:
      if (lookahead == 'h') ADVANCE(880);
      END_STATE();
    case 957:
      if (lookahead == 'i') ADVANCE(1369);
      END_STATE();
    case 958:
      if (lookahead == 'i') ADVANCE(1369);
      if (lookahead == 'p') ADVANCE(1234);
      END_STATE();
    case 959:
      if (lookahead == 'i') ADVANCE(1331);
      END_STATE();
    case 960:
      if (lookahead == 'i') ADVANCE(1061);
      END_STATE();
    case 961:
      if (lookahead == 'i') ADVANCE(1368);
      END_STATE();
    case 962:
      if (lookahead == 'i') ADVANCE(1027);
      END_STATE();
    case 963:
      if (lookahead == 'i') ADVANCE(784);
      END_STATE();
    case 964:
      if (lookahead == 'i') ADVANCE(1091);
      END_STATE();
    case 965:
      if (lookahead == 'i') ADVANCE(1306);
      END_STATE();
    case 966:
      if (lookahead == 'i') ADVANCE(793);
      END_STATE();
    case 967:
      if (lookahead == 'i') ADVANCE(1259);
      END_STATE();
    case 968:
      if (lookahead == 'i') ADVANCE(794);
      END_STATE();
    case 969:
      if (lookahead == 'i') ADVANCE(811);
      END_STATE();
    case 970:
      if (lookahead == 'i') ADVANCE(1092);
      END_STATE();
    case 971:
      if (lookahead == 'i') ADVANCE(1152);
      END_STATE();
    case 972:
      if (lookahead == 'i') ADVANCE(1270);
      END_STATE();
    case 973:
      if (lookahead == 'i') ADVANCE(883);
      END_STATE();
    case 974:
      if (lookahead == 'i') ADVANCE(891);
      END_STATE();
    case 975:
      if (lookahead == 'i') ADVANCE(1370);
      END_STATE();
    case 976:
      if (lookahead == 'i') ADVANCE(1131);
      END_STATE();
    case 977:
      if (lookahead == 'i') ADVANCE(1295);
      END_STATE();
    case 978:
      if (lookahead == 'i') ADVANCE(1262);
      END_STATE();
    case 979:
      if (lookahead == 'i') ADVANCE(1261);
      END_STATE();
    case 980:
      if (lookahead == 'i') ADVANCE(1035);
      END_STATE();
    case 981:
      if (lookahead == 'i') ADVANCE(1077);
      END_STATE();
    case 982:
      if (lookahead == 'i') ADVANCE(1036);
      END_STATE();
    case 983:
      if (lookahead == 'i') ADVANCE(1135);
      END_STATE();
    case 984:
      if (lookahead == 'i') ADVANCE(1037);
      END_STATE();
    case 985:
      if (lookahead == 'i') ADVANCE(1139);
      END_STATE();
    case 986:
      if (lookahead == 'i') ADVANCE(1038);
      END_STATE();
    case 987:
      if (lookahead == 'i') ADVANCE(1140);
      END_STATE();
    case 988:
      if (lookahead == 'i') ADVANCE(1039);
      END_STATE();
    case 989:
      if (lookahead == 'i') ADVANCE(1142);
      END_STATE();
    case 990:
      if (lookahead == 'i') ADVANCE(1040);
      END_STATE();
    case 991:
      if (lookahead == 'i') ADVANCE(1144);
      END_STATE();
    case 992:
      if (lookahead == 'i') ADVANCE(1041);
      END_STATE();
    case 993:
      if (lookahead == 'i') ADVANCE(1146);
      END_STATE();
    case 994:
      if (lookahead == 'i') ADVANCE(1147);
      END_STATE();
    case 995:
      if (lookahead == 'i') ADVANCE(1043);
      END_STATE();
    case 996:
      if (lookahead == 'i') ADVANCE(1044);
      END_STATE();
    case 997:
      if (lookahead == 'i') ADVANCE(1073);
      END_STATE();
    case 998:
      if (lookahead == 'i') ADVANCE(1314);
      if (lookahead == 'o') ADVANCE(1223);
      END_STATE();
    case 999:
      if (lookahead == 'i') ADVANCE(1317);
      END_STATE();
    case 1000:
      if (lookahead == 'i') ADVANCE(1315);
      if (lookahead == 'o') ADVANCE(1198);
      END_STATE();
    case 1001:
      if (lookahead == 'i') ADVANCE(1319);
      END_STATE();
    case 1002:
      if (lookahead == 'i') ADVANCE(1321);
      END_STATE();
    case 1003:
      if (lookahead == 'i') ADVANCE(1322);
      END_STATE();
    case 1004:
      if (lookahead == 'i') ADVANCE(1323);
      END_STATE();
    case 1005:
      if (lookahead == 'i') ADVANCE(1078);
      END_STATE();
    case 1006:
      if (lookahead == 'i') ADVANCE(1079);
      END_STATE();
    case 1007:
      if (lookahead == 'j') ADVANCE(904);
      END_STATE();
    case 1008:
      if (lookahead == 'k') ADVANCE(1495);
      END_STATE();
    case 1009:
      if (lookahead == 'k') ADVANCE(1497);
      END_STATE();
    case 1010:
      if (lookahead == 'k') ADVANCE(1534);
      END_STATE();
    case 1011:
      if (lookahead == 'k') ADVANCE(1494);
      END_STATE();
    case 1012:
      if (lookahead == 'k') ADVANCE(870);
      END_STATE();
    case 1013:
      if (lookahead == 'k') ADVANCE(1253);
      END_STATE();
    case 1014:
      if (lookahead == 'k') ADVANCE(942);
      END_STATE();
    case 1015:
      if (lookahead == 'l') ADVANCE(1021);
      END_STATE();
    case 1016:
      if (lookahead == 'l') ADVANCE(1021);
      if (lookahead == 'n') ADVANCE(960);
      if (lookahead == 'r') ADVANCE(783);
      END_STATE();
    case 1017:
      if (lookahead == 'l') ADVANCE(1021);
      if (lookahead == 'n') ADVANCE(981);
      END_STATE();
    case 1018:
      if (lookahead == 'l') ADVANCE(1021);
      if (lookahead == 'n') ADVANCE(981);
      if (lookahead == 'r') ADVANCE(783);
      END_STATE();
    case 1019:
      if (lookahead == 'l') ADVANCE(1021);
      if (lookahead == 'n') ADVANCE(1005);
      END_STATE();
    case 1020:
      if (lookahead == 'l') ADVANCE(1021);
      if (lookahead == 'n') ADVANCE(1006);
      END_STATE();
    case 1021:
      if (lookahead == 'l') ADVANCE(1337);
      END_STATE();
    case 1022:
      if (lookahead == 'l') ADVANCE(713);
      END_STATE();
    case 1023:
      if (lookahead == 'l') ADVANCE(1528);
      END_STATE();
    case 1024:
      if (lookahead == 'l') ADVANCE(1022);
      END_STATE();
    case 1025:
      if (lookahead == 'l') ADVANCE(1022);
      if (lookahead == 'r') ADVANCE(1267);
      END_STATE();
    case 1026:
      if (lookahead == 'l') ADVANCE(1257);
      END_STATE();
    case 1027:
      if (lookahead == 'l') ADVANCE(829);
      END_STATE();
    case 1028:
      if (lookahead == 'l') ADVANCE(1126);
      END_STATE();
    case 1029:
      if (lookahead == 'l') ADVANCE(746);
      END_STATE();
    case 1030:
      if (lookahead == 'l') ADVANCE(822);
      END_STATE();
    case 1031:
      if (lookahead == 'l') ADVANCE(742);
      END_STATE();
    case 1032:
      if (lookahead == 'l') ADVANCE(1141);
      END_STATE();
    case 1033:
      if (lookahead == 'l') ADVANCE(745);
      END_STATE();
    case 1034:
      if (lookahead == 'l') ADVANCE(836);
      END_STATE();
    case 1035:
      if (lookahead == 'l') ADVANCE(842);
      END_STATE();
    case 1036:
      if (lookahead == 'l') ADVANCE(882);
      END_STATE();
    case 1037:
      if (lookahead == 'l') ADVANCE(844);
      END_STATE();
    case 1038:
      if (lookahead == 'l') ADVANCE(862);
      END_STATE();
    case 1039:
      if (lookahead == 'l') ADVANCE(849);
      END_STATE();
    case 1040:
      if (lookahead == 'l') ADVANCE(854);
      END_STATE();
    case 1041:
      if (lookahead == 'l') ADVANCE(858);
      END_STATE();
    case 1042:
      if (lookahead == 'l') ADVANCE(859);
      END_STATE();
    case 1043:
      if (lookahead == 'l') ADVANCE(860);
      END_STATE();
    case 1044:
      if (lookahead == 'l') ADVANCE(861);
      END_STATE();
    case 1045:
      if (lookahead == 'l') ADVANCE(1125);
      END_STATE();
    case 1046:
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 1047:
      if (lookahead == 'l') ADVANCE(966);
      END_STATE();
    case 1048:
      if (lookahead == 'l') ADVANCE(966);
      if (lookahead == 'o') ADVANCE(1057);
      if (lookahead == 'u') ADVANCE(1202);
      END_STATE();
    case 1049:
      if (lookahead == 'l') ADVANCE(966);
      if (lookahead == 'o') ADVANCE(1045);
      END_STATE();
    case 1050:
      if (lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 1051:
      if (lookahead == 'l') ADVANCE(972);
      END_STATE();
    case 1052:
      if (lookahead == 'l') ADVANCE(1151);
      END_STATE();
    case 1053:
      if (lookahead == 'l') ADVANCE(968);
      END_STATE();
    case 1054:
      if (lookahead == 'l') ADVANCE(888);
      END_STATE();
    case 1055:
      if (lookahead == 'l') ADVANCE(1138);
      END_STATE();
    case 1056:
      if (lookahead == 'l') ADVANCE(1143);
      END_STATE();
    case 1057:
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 1058:
      if (lookahead == 'l') ADVANCE(1145);
      END_STATE();
    case 1059:
      if (lookahead == 'm') ADVANCE(1127);
      if (lookahead == 'p') ADVANCE(1029);
      END_STATE();
    case 1060:
      if (lookahead == 'm') ADVANCE(830);
      END_STATE();
    case 1061:
      if (lookahead == 'm') ADVANCE(748);
      END_STATE();
    case 1062:
      if (lookahead == 'm') ADVANCE(747);
      END_STATE();
    case 1063:
      if (lookahead == 'm') ADVANCE(835);
      END_STATE();
    case 1064:
      if (lookahead == 'm') ADVANCE(750);
      END_STATE();
    case 1065:
      if (lookahead == 'm') ADVANCE(876);
      END_STATE();
    case 1066:
      if (lookahead == 'm') ADVANCE(1156);
      END_STATE();
    case 1067:
      if (lookahead == 'm') ADVANCE(887);
      END_STATE();
    case 1068:
      if (lookahead == 'm') ADVANCE(894);
      END_STATE();
    case 1069:
      if (lookahead == 'm') ADVANCE(855);
      END_STATE();
    case 1070:
      if (lookahead == 'm') ADVANCE(898);
      END_STATE();
    case 1071:
      if (lookahead == 'm') ADVANCE(1074);
      END_STATE();
    case 1072:
      if (lookahead == 'm') ADVANCE(751);
      END_STATE();
    case 1073:
      if (lookahead == 'm') ADVANCE(764);
      END_STATE();
    case 1074:
      if (lookahead == 'm') ADVANCE(1147);
      END_STATE();
    case 1075:
      if (lookahead == 'm') ADVANCE(772);
      END_STATE();
    case 1076:
      if (lookahead == 'm') ADVANCE(774);
      END_STATE();
    case 1077:
      if (lookahead == 'm') ADVANCE(775);
      END_STATE();
    case 1078:
      if (lookahead == 'm') ADVANCE(776);
      END_STATE();
    case 1079:
      if (lookahead == 'm') ADVANCE(777);
      END_STATE();
    case 1080:
      if (lookahead == 'n') ADVANCE(1422);
      END_STATE();
    case 1081:
      if (lookahead == 'n') ADVANCE(1504);
      END_STATE();
    case 1082:
      if (lookahead == 'n') ADVANCE(1470);
      END_STATE();
    case 1083:
      if (lookahead == 'n') ADVANCE(1474);
      END_STATE();
    case 1084:
      if (lookahead == 'n') ADVANCE(1426);
      END_STATE();
    case 1085:
      if (lookahead == 'n') ADVANCE(1469);
      END_STATE();
    case 1086:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 1087:
      if (lookahead == 'n') ADVANCE(1468);
      END_STATE();
    case 1088:
      if (lookahead == 'n') ADVANCE(1288);
      END_STATE();
    case 1089:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 1090:
      if (lookahead == 'n') ADVANCE(1271);
      if (lookahead == 'r') ADVANCE(1072);
      END_STATE();
    case 1091:
      if (lookahead == 'n') ADVANCE(945);
      END_STATE();
    case 1092:
      if (lookahead == 'n') ADVANCE(946);
      END_STATE();
    case 1093:
      if (lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 1094:
      if (lookahead == 'n') ADVANCE(1255);
      END_STATE();
    case 1095:
      if (lookahead == 'n') ADVANCE(805);
      END_STATE();
    case 1096:
      if (lookahead == 'n') ADVANCE(810);
      END_STATE();
    case 1097:
      if (lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 1098:
      if (lookahead == 'n') ADVANCE(1290);
      END_STATE();
    case 1099:
      if (lookahead == 'n') ADVANCE(1277);
      END_STATE();
    case 1100:
      if (lookahead == 'n') ADVANCE(1280);
      END_STATE();
    case 1101:
      if (lookahead == 'n') ADVANCE(1296);
      END_STATE();
    case 1102:
      if (lookahead == 'n') ADVANCE(1284);
      END_STATE();
    case 1103:
      if (lookahead == 'n') ADVANCE(1303);
      END_STATE();
    case 1104:
      if (lookahead == 'n') ADVANCE(1248);
      END_STATE();
    case 1105:
      if (lookahead == 'n') ADVANCE(1297);
      END_STATE();
    case 1106:
      if (lookahead == 'n') ADVANCE(818);
      END_STATE();
    case 1107:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 1108:
      if (lookahead == 'n') ADVANCE(801);
      END_STATE();
    case 1109:
      if (lookahead == 'n') ADVANCE(1266);
      END_STATE();
    case 1110:
      if (lookahead == 'n') ADVANCE(802);
      END_STATE();
    case 1111:
      if (lookahead == 'n') ADVANCE(906);
      END_STATE();
    case 1112:
      if (lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 1113:
      if (lookahead == 'o') ADVANCE(1090);
      END_STATE();
    case 1114:
      if (lookahead == 'o') ADVANCE(1502);
      END_STATE();
    case 1115:
      if (lookahead == 'o') ADVANCE(1557);
      END_STATE();
    case 1116:
      if (lookahead == 'o') ADVANCE(1200);
      END_STATE();
    case 1117:
      if (lookahead == 'o') ADVANCE(1250);
      END_STATE();
    case 1118:
      if (lookahead == 'o') ADVANCE(1324);
      END_STATE();
    case 1119:
      if (lookahead == 'o') ADVANCE(1169);
      END_STATE();
    case 1120:
      if (lookahead == 'o') ADVANCE(949);
      END_STATE();
    case 1121:
      if (lookahead == 'o') ADVANCE(1339);
      END_STATE();
    case 1122:
      if (lookahead == 'o') ADVANCE(1071);
      END_STATE();
    case 1123:
      if (lookahead == 'o') ADVANCE(1335);
      END_STATE();
    case 1124:
      if (lookahead == 'o') ADVANCE(1336);
      END_STATE();
    case 1125:
      if (lookahead == 'o') ADVANCE(1194);
      END_STATE();
    case 1126:
      if (lookahead == 'o') ADVANCE(785);
      END_STATE();
    case 1127:
      if (lookahead == 'o') ADVANCE(1294);
      END_STATE();
    case 1128:
      if (lookahead == 'o') ADVANCE(1093);
      END_STATE();
    case 1129:
      if (lookahead == 'o') ADVANCE(1055);
      END_STATE();
    case 1130:
      if (lookahead == 'o') ADVANCE(1219);
      END_STATE();
    case 1131:
      if (lookahead == 'o') ADVANCE(1080);
      END_STATE();
    case 1132:
      if (lookahead == 'o') ADVANCE(1221);
      END_STATE();
    case 1133:
      if (lookahead == 'o') ADVANCE(1107);
      END_STATE();
    case 1134:
      if (lookahead == 'o') ADVANCE(1164);
      END_STATE();
    case 1135:
      if (lookahead == 'o') ADVANCE(1081);
      END_STATE();
    case 1136:
      if (lookahead == 'o') ADVANCE(1082);
      END_STATE();
    case 1137:
      if (lookahead == 'o') ADVANCE(799);
      END_STATE();
    case 1138:
      if (lookahead == 'o') ADVANCE(1196);
      END_STATE();
    case 1139:
      if (lookahead == 'o') ADVANCE(1083);
      END_STATE();
    case 1140:
      if (lookahead == 'o') ADVANCE(1084);
      END_STATE();
    case 1141:
      if (lookahead == 'o') ADVANCE(755);
      END_STATE();
    case 1142:
      if (lookahead == 'o') ADVANCE(1085);
      END_STATE();
    case 1143:
      if (lookahead == 'o') ADVANCE(1197);
      END_STATE();
    case 1144:
      if (lookahead == 'o') ADVANCE(1086);
      END_STATE();
    case 1145:
      if (lookahead == 'o') ADVANCE(1213);
      END_STATE();
    case 1146:
      if (lookahead == 'o') ADVANCE(1087);
      END_STATE();
    case 1147:
      if (lookahead == 'o') ADVANCE(1089);
      END_STATE();
    case 1148:
      if (lookahead == 'o') ADVANCE(1203);
      END_STATE();
    case 1149:
      if (lookahead == 'o') ADVANCE(932);
      END_STATE();
    case 1150:
      if (lookahead == 'o') ADVANCE(1098);
      END_STATE();
    case 1151:
      if (lookahead == 'o') ADVANCE(1134);
      END_STATE();
    case 1152:
      if (lookahead == 'o') ADVANCE(1104);
      END_STATE();
    case 1153:
      if (lookahead == 'o') ADVANCE(1172);
      END_STATE();
    case 1154:
      if (lookahead == 'o') ADVANCE(1293);
      END_STATE();
    case 1155:
      if (lookahead == 'o') ADVANCE(1099);
      END_STATE();
    case 1156:
      if (lookahead == 'o') ADVANCE(817);
      END_STATE();
    case 1157:
      if (lookahead == 'o') ADVANCE(1101);
      END_STATE();
    case 1158:
      if (lookahead == 'o') ADVANCE(1102);
      END_STATE();
    case 1159:
      if (lookahead == 'o') ADVANCE(1153);
      END_STATE();
    case 1160:
      if (lookahead == 'o') ADVANCE(1045);
      END_STATE();
    case 1161:
      if (lookahead == 'o') ADVANCE(1058);
      END_STATE();
    case 1162:
      if (lookahead == 'o') ADVANCE(1056);
      if (lookahead == 'u') ADVANCE(1024);
      END_STATE();
    case 1163:
      if (lookahead == 'o') ADVANCE(1223);
      END_STATE();
    case 1164:
      if (lookahead == 'p') ADVANCE(1527);
      END_STATE();
    case 1165:
      if (lookahead == 'p') ADVANCE(360);
      END_STATE();
    case 1166:
      if (lookahead == 'p') ADVANCE(868);
      END_STATE();
    case 1167:
      if (lookahead == 'p') ADVANCE(937);
      END_STATE();
    case 1168:
      if (lookahead == 'p') ADVANCE(1186);
      END_STATE();
    case 1169:
      if (lookahead == 'p') ADVANCE(964);
      END_STATE();
    case 1170:
      if (lookahead == 'p') ADVANCE(752);
      END_STATE();
    case 1171:
      if (lookahead == 'p') ADVANCE(833);
      END_STATE();
    case 1172:
      if (lookahead == 'p') ADVANCE(970);
      END_STATE();
    case 1173:
      if (lookahead == 'p') ADVANCE(766);
      END_STATE();
    case 1174:
      if (lookahead == 'p') ADVANCE(1245);
      END_STATE();
    case 1175:
      if (lookahead == 'p') ADVANCE(889);
      END_STATE();
    case 1176:
      if (lookahead == 'p') ADVANCE(843);
      END_STATE();
    case 1177:
      if (lookahead == 'p') ADVANCE(846);
      END_STATE();
    case 1178:
      if (lookahead == 'p') ADVANCE(847);
      END_STATE();
    case 1179:
      if (lookahead == 'p') ADVANCE(848);
      END_STATE();
    case 1180:
      if (lookahead == 'p') ADVANCE(851);
      END_STATE();
    case 1181:
      if (lookahead == 'p') ADVANCE(852);
      END_STATE();
    case 1182:
      if (lookahead == 'p') ADVANCE(897);
      END_STATE();
    case 1183:
      if (lookahead == 'p') ADVANCE(853);
      END_STATE();
    case 1184:
      if (lookahead == 'p') ADVANCE(856);
      END_STATE();
    case 1185:
      if (lookahead == 'p') ADVANCE(1231);
      END_STATE();
    case 1186:
      if (lookahead == 'p') ADVANCE(1132);
      END_STATE();
    case 1187:
      if (lookahead == 'p') ADVANCE(757);
      END_STATE();
    case 1188:
      if (lookahead == 'p') ADVANCE(890);
      END_STATE();
    case 1189:
      if (lookahead == 'p') ADVANCE(1300);
      END_STATE();
    case 1190:
      if (lookahead == 'p') ADVANCE(940);
      END_STATE();
    case 1191:
      if (lookahead == 'p') ADVANCE(941);
      END_STATE();
    case 1192:
      if (lookahead == 'p') ADVANCE(1232);
      END_STATE();
    case 1193:
      if (lookahead == 'p') ADVANCE(1233);
      END_STATE();
    case 1194:
      if (lookahead == 'r') ADVANCE(1501);
      END_STATE();
    case 1195:
      if (lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 1196:
      if (lookahead == 'r') ADVANCE(1523);
      END_STATE();
    case 1197:
      if (lookahead == 'r') ADVANCE(1500);
      END_STATE();
    case 1198:
      if (lookahead == 'r') ADVANCE(820);
      END_STATE();
    case 1199:
      if (lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 1200:
      if (lookahead == 'r') ADVANCE(961);
      END_STATE();
    case 1201:
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 1202:
      if (lookahead == 'r') ADVANCE(1267);
      END_STATE();
    case 1203:
      if (lookahead == 'r') ADVANCE(1354);
      END_STATE();
    case 1204:
      if (lookahead == 'r') ADVANCE(1050);
      END_STATE();
    case 1205:
      if (lookahead == 'r') ADVANCE(934);
      END_STATE();
    case 1206:
      if (lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 1207:
      if (lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 1208:
      if (lookahead == 'r') ADVANCE(1309);
      END_STATE();
    case 1209:
      if (lookahead == 'r') ADVANCE(1124);
      END_STATE();
    case 1210:
      if (lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 1211:
      if (lookahead == 'r') ADVANCE(884);
      END_STATE();
    case 1212:
      if (lookahead == 'r') ADVANCE(872);
      END_STATE();
    case 1213:
      if (lookahead == 'r') ADVANCE(1246);
      END_STATE();
    case 1214:
      if (lookahead == 'r') ADVANCE(839);
      END_STATE();
    case 1215:
      if (lookahead == 'r') ADVANCE(840);
      END_STATE();
    case 1216:
      if (lookahead == 'r') ADVANCE(907);
      END_STATE();
    case 1217:
      if (lookahead == 'r') ADVANCE(857);
      END_STATE();
    case 1218:
      if (lookahead == 'r') ADVANCE(1254);
      END_STATE();
    case 1219:
      if (lookahead == 'r') ADVANCE(718);
      END_STATE();
    case 1220:
      if (lookahead == 'r') ADVANCE(886);
      END_STATE();
    case 1221:
      if (lookahead == 'r') ADVANCE(1298);
      END_STATE();
    case 1222:
      if (lookahead == 'r') ADVANCE(770);
      END_STATE();
    case 1223:
      if (lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 1224:
      if (lookahead == 'r') ADVANCE(762);
      END_STATE();
    case 1225:
      if (lookahead == 'r') ADVANCE(1269);
      END_STATE();
    case 1226:
      if (lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 1227:
      if (lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 1228:
      if (lookahead == 'r') ADVANCE(914);
      END_STATE();
    case 1229:
      if (lookahead == 'r') ADVANCE(918);
      END_STATE();
    case 1230:
      if (lookahead == 'r') ADVANCE(919);
      END_STATE();
    case 1231:
      if (lookahead == 'r') ADVANCE(999);
      END_STATE();
    case 1232:
      if (lookahead == 'r') ADVANCE(1001);
      END_STATE();
    case 1233:
      if (lookahead == 'r') ADVANCE(1002);
      END_STATE();
    case 1234:
      if (lookahead == 'r') ADVANCE(1004);
      END_STATE();
    case 1235:
      if (lookahead == 's') ADVANCE(1012);
      END_STATE();
    case 1236:
      if (lookahead == 's') ADVANCE(1556);
      END_STATE();
    case 1237:
      if (lookahead == 's') ADVANCE(1430);
      END_STATE();
    case 1238:
      if (lookahead == 's') ADVANCE(782);
      END_STATE();
    case 1239:
      if (lookahead == 's') ADVANCE(1463);
      END_STATE();
    case 1240:
      if (lookahead == 's') ADVANCE(1400);
      END_STATE();
    case 1241:
      if (lookahead == 's') ADVANCE(1399);
      END_STATE();
    case 1242:
      if (lookahead == 's') ADVANCE(1396);
      END_STATE();
    case 1243:
      if (lookahead == 's') ADVANCE(1453);
      END_STATE();
    case 1244:
      if (lookahead == 's') ADVANCE(1465);
      END_STATE();
    case 1245:
      if (lookahead == 's') ADVANCE(1524);
      END_STATE();
    case 1246:
      if (lookahead == 's') ADVANCE(1407);
      END_STATE();
    case 1247:
      if (lookahead == 's') ADVANCE(1488);
      END_STATE();
    case 1248:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 1249:
      if (lookahead == 's') ADVANCE(951);
      END_STATE();
    case 1250:
      if (lookahead == 's') ADVANCE(965);
      END_STATE();
    case 1251:
      if (lookahead == 's') ADVANCE(955);
      END_STATE();
    case 1252:
      if (lookahead == 's') ADVANCE(1014);
      END_STATE();
    case 1253:
      if (lookahead == 's') ADVANCE(1118);
      END_STATE();
    case 1254:
      if (lookahead == 's') ADVANCE(976);
      END_STATE();
    case 1255:
      if (lookahead == 's') ADVANCE(1170);
      END_STATE();
    case 1256:
      if (lookahead == 's') ADVANCE(728);
      END_STATE();
    case 1257:
      if (lookahead == 's') ADVANCE(834);
      END_STATE();
    case 1258:
      if (lookahead == 's') ADVANCE(1238);
      END_STATE();
    case 1259:
      if (lookahead == 's') ADVANCE(1292);
      END_STATE();
    case 1260:
      if (lookahead == 's') ADVANCE(912);
      END_STATE();
    case 1261:
      if (lookahead == 's') ADVANCE(971);
      END_STATE();
    case 1262:
      if (lookahead == 's') ADVANCE(1304);
      END_STATE();
    case 1263:
      if (lookahead == 's') ADVANCE(892);
      END_STATE();
    case 1264:
      if (lookahead == 's') ADVANCE(895);
      END_STATE();
    case 1265:
      if (lookahead == 's') ADVANCE(1291);
      END_STATE();
    case 1266:
      if (lookahead == 's') ADVANCE(1173);
      END_STATE();
    case 1267:
      if (lookahead == 's') ADVANCE(1130);
      END_STATE();
    case 1268:
      if (lookahead == 's') ADVANCE(1261);
      END_STATE();
    case 1269:
      if (lookahead == 's') ADVANCE(987);
      END_STATE();
    case 1270:
      if (lookahead == 's') ADVANCE(778);
      END_STATE();
    case 1271:
      if (lookahead == 't') ADVANCE(1503);
      END_STATE();
    case 1272:
      if (lookahead == 't') ADVANCE(1326);
      END_STATE();
    case 1273:
      if (lookahead == 't') ADVANCE(1499);
      END_STATE();
    case 1274:
      if (lookahead == 't') ADVANCE(871);
      END_STATE();
    case 1275:
      if (lookahead == 't') ADVANCE(1505);
      END_STATE();
    case 1276:
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 1277:
      if (lookahead == 't') ADVANCE(1409);
      END_STATE();
    case 1278:
      if (lookahead == 't') ADVANCE(1455);
      END_STATE();
    case 1279:
      if (lookahead == 't') ADVANCE(1406);
      END_STATE();
    case 1280:
      if (lookahead == 't') ADVANCE(1491);
      END_STATE();
    case 1281:
      if (lookahead == 't') ADVANCE(1478);
      END_STATE();
    case 1282:
      if (lookahead == 't') ADVANCE(780);
      END_STATE();
    case 1283:
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 1284:
      if (lookahead == 't') ADVANCE(1408);
      END_STATE();
    case 1285:
      if (lookahead == 't') ADVANCE(1498);
      END_STATE();
    case 1286:
      if (lookahead == 't') ADVANCE(950);
      if (lookahead == 'u') ADVANCE(1260);
      END_STATE();
    case 1287:
      if (lookahead == 't') ADVANCE(695);
      END_STATE();
    case 1288:
      if (lookahead == 't') ADVANCE(1210);
      END_STATE();
    case 1289:
      if (lookahead == 't') ADVANCE(952);
      END_STATE();
    case 1290:
      if (lookahead == 't') ADVANCE(749);
      END_STATE();
    case 1291:
      if (lookahead == 't') ADVANCE(1207);
      END_STATE();
    case 1292:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 1293:
      if (lookahead == 't') ADVANCE(773);
      END_STATE();
    case 1294:
      if (lookahead == 't') ADVANCE(869);
      END_STATE();
    case 1295:
      if (lookahead == 't') ADVANCE(913);
      END_STATE();
    case 1296:
      if (lookahead == 't') ADVANCE(1240);
      END_STATE();
    case 1297:
      if (lookahead == 't') ADVANCE(1248);
      END_STATE();
    case 1298:
      if (lookahead == 't') ADVANCE(875);
      END_STATE();
    case 1299:
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 1300:
      if (lookahead == 't') ADVANCE(901);
      END_STATE();
    case 1301:
      if (lookahead == 't') ADVANCE(1062);
      END_STATE();
    case 1302:
      if (lookahead == 't') ADVANCE(902);
      END_STATE();
    case 1303:
      if (lookahead == 't') ADVANCE(896);
      END_STATE();
    case 1304:
      if (lookahead == 't') ADVANCE(1148);
      END_STATE();
    case 1305:
      if (lookahead == 't') ADVANCE(1327);
      END_STATE();
    case 1306:
      if (lookahead == 't') ADVANCE(983);
      END_STATE();
    case 1307:
      if (lookahead == 't') ADVANCE(1328);
      END_STATE();
    case 1308:
      if (lookahead == 't') ADVANCE(985);
      END_STATE();
    case 1309:
      if (lookahead == 't') ADVANCE(1361);
      END_STATE();
    case 1310:
      if (lookahead == 't') ADVANCE(989);
      END_STATE();
    case 1311:
      if (lookahead == 't') ADVANCE(991);
      END_STATE();
    case 1312:
      if (lookahead == 't') ADVANCE(993);
      END_STATE();
    case 1313:
      if (lookahead == 't') ADVANCE(994);
      END_STATE();
    case 1314:
      if (lookahead == 't') ADVANCE(1075);
      END_STATE();
    case 1315:
      if (lookahead == 't') ADVANCE(1076);
      END_STATE();
    case 1316:
      if (lookahead == 't') ADVANCE(781);
      END_STATE();
    case 1317:
      if (lookahead == 't') ADVANCE(917);
      END_STATE();
    case 1318:
      if (lookahead == 't') ADVANCE(1329);
      END_STATE();
    case 1319:
      if (lookahead == 't') ADVANCE(920);
      END_STATE();
    case 1320:
      if (lookahead == 't') ADVANCE(1330);
      END_STATE();
    case 1321:
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 1322:
      if (lookahead == 't') ADVANCE(922);
      END_STATE();
    case 1323:
      if (lookahead == 't') ADVANCE(923);
      END_STATE();
    case 1324:
      if (lookahead == 'u') ADVANCE(1096);
      END_STATE();
    case 1325:
      if (lookahead == 'u') ADVANCE(1260);
      END_STATE();
    case 1326:
      if (lookahead == 'u') ADVANCE(1214);
      END_STATE();
    case 1327:
      if (lookahead == 'u') ADVANCE(1217);
      END_STATE();
    case 1328:
      if (lookahead == 'u') ADVANCE(1228);
      END_STATE();
    case 1329:
      if (lookahead == 'u') ADVANCE(1229);
      END_STATE();
    case 1330:
      if (lookahead == 'u') ADVANCE(1230);
      END_STATE();
    case 1331:
      if (lookahead == 'v') ADVANCE(838);
      END_STATE();
    case 1332:
      if (lookahead == 'v') ADVANCE(867);
      END_STATE();
    case 1333:
      if (lookahead == 'v') ADVANCE(911);
      END_STATE();
    case 1334:
      if (lookahead == 'v') ADVANCE(915);
      END_STATE();
    case 1335:
      if (lookahead == 'w') ADVANCE(1526);
      END_STATE();
    case 1336:
      if (lookahead == 'w') ADVANCE(1464);
      END_STATE();
    case 1337:
      if (lookahead == 'w') ADVANCE(739);
      END_STATE();
    case 1338:
      if (lookahead == 'w') ADVANCE(1114);
      END_STATE();
    case 1339:
      if (lookahead == 'w') ADVANCE(1244);
      END_STATE();
    case 1340:
      if (lookahead == 'x') ADVANCE(360);
      END_STATE();
    case 1341:
      if (lookahead == 'x') ADVANCE(1273);
      END_STATE();
    case 1342:
      if (lookahead == 'x') ADVANCE(1279);
      END_STATE();
    case 1343:
      if (lookahead == 'x') ADVANCE(1282);
      END_STATE();
    case 1344:
      if (lookahead == 'x') ADVANCE(1283);
      END_STATE();
    case 1345:
      if (lookahead == 'x') ADVANCE(1285);
      END_STATE();
    case 1346:
      if (lookahead == 'x') ADVANCE(1065);
      END_STATE();
    case 1347:
      if (lookahead == 'x') ADVANCE(1305);
      END_STATE();
    case 1348:
      if (lookahead == 'x') ADVANCE(1307);
      END_STATE();
    case 1349:
      if (lookahead == 'x') ADVANCE(1316);
      END_STATE();
    case 1350:
      if (lookahead == 'x') ADVANCE(1318);
      END_STATE();
    case 1351:
      if (lookahead == 'x') ADVANCE(1320);
      END_STATE();
    case 1352:
      if (lookahead == 'y') ADVANCE(1477);
      END_STATE();
    case 1353:
      if (lookahead == 'y') ADVANCE(715);
      END_STATE();
    case 1354:
      if (lookahead == 'y') ADVANCE(360);
      END_STATE();
    case 1355:
      if (lookahead == 'y') ADVANCE(724);
      END_STATE();
    case 1356:
      if (lookahead == 'y') ADVANCE(712);
      END_STATE();
    case 1357:
      if (lookahead == 'y') ADVANCE(1265);
      END_STATE();
    case 1358:
      if (lookahead == 'y') ADVANCE(1175);
      END_STATE();
    case 1359:
      if (lookahead == 'y') ADVANCE(1176);
      END_STATE();
    case 1360:
      if (lookahead == 'y') ADVANCE(1177);
      END_STATE();
    case 1361:
      if (lookahead == 'y') ADVANCE(1178);
      END_STATE();
    case 1362:
      if (lookahead == 'y') ADVANCE(1179);
      END_STATE();
    case 1363:
      if (lookahead == 'y') ADVANCE(1180);
      END_STATE();
    case 1364:
      if (lookahead == 'y') ADVANCE(1181);
      END_STATE();
    case 1365:
      if (lookahead == 'y') ADVANCE(1182);
      END_STATE();
    case 1366:
      if (lookahead == 'y') ADVANCE(1183);
      END_STATE();
    case 1367:
      if (lookahead == 'y') ADVANCE(727);
      END_STATE();
    case 1368:
      if (lookahead == 'z') ADVANCE(1150);
      END_STATE();
    case 1369:
      if (lookahead == 'z') ADVANCE(831);
      END_STATE();
    case 1370:
      if (lookahead == 'z') ADVANCE(841);
      END_STATE();
    case 1371:
      if (lookahead == 'z') ADVANCE(1367);
      END_STATE();
    case 1372:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(984);
      END_STATE();
    case 1373:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(990);
      END_STATE();
    case 1374:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(995);
      END_STATE();
    case 1375:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(996);
      END_STATE();
    case 1376:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1540);
      END_STATE();
    case 1377:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1541);
      END_STATE();
    case 1378:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1542);
      END_STATE();
    case 1379:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1543);
      END_STATE();
    case 1380:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1544);
      END_STATE();
    case 1381:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      END_STATE();
    case 1382:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      END_STATE();
    case 1383:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1552);
      END_STATE();
    case 1384:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1551);
      END_STATE();
    case 1385:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1383);
      END_STATE();
    case 1386:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1384);
      END_STATE();
    case 1387:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1385);
      END_STATE();
    case 1388:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1386);
      END_STATE();
    case 1389:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1387);
      END_STATE();
    case 1390:
      if (eof) ADVANCE(1395);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 1391:
      if (eof) ADVANCE(1395);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(1390)
      END_STATE();
    case 1392:
      if (eof) ADVANCE(1395);
      if (lookahead == '\n') SKIP(1394)
      END_STATE();
    case 1393:
      if (eof) ADVANCE(1395);
      if (lookahead == '\n') SKIP(1394)
      if (lookahead == '\r') SKIP(1392)
      END_STATE();
    case 1394:
      if (eof) ADVANCE(1395);
      if (lookahead == '"') ADVANCE(446);
      if (lookahead == '#') ADVANCE(1559);
      if (lookahead == '=') ADVANCE(1535);
      if (lookahead == '\\') SKIP(1393)
      if (lookahead == 'a') ADVANCE(1018);
      if (lookahead == 'b') ADVANCE(998);
      if (lookahead == 'c') ADVANCE(1049);
      if (lookahead == 'd') ADVANCE(825);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == 'f') ADVANCE(962);
      if (lookahead == 'h') ADVANCE(1116);
      if (lookahead == 'l') ADVANCE(827);
      if (lookahead == 'n') ADVANCE(731);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead == 'p') ADVANCE(733);
      if (lookahead == 'r') ADVANCE(828);
      if (lookahead == 's') ADVANCE(789);
      if (lookahead == 't') ADVANCE(738);
      if (lookahead == 'v') ADVANCE(865);
      if (lookahead == 'x') ADVANCE(1414);
      if (lookahead == 'y') ADVANCE(1415);
      if (lookahead == '}') ADVANCE(1398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1394)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1545);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_objectTypes);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_bitmapfonts);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(1396);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_textSpriteType);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_corneredTileSpriteType);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_maskedShieldType);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_animatedmaptext);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_textcolors);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      if (lookahead == 's') ADVANCE(1400);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_frameAnimatedSpriteType);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_progressbartype);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_pdxmesh);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(1236);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym__statement_gfx_name_token1);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '1') ADVANCE(1460);
      if (lookahead == '2') ADVANCE(1461);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '1') ADVANCE(1460);
      if (lookahead == '2') ADVANCE(1461);
      if (lookahead == '3') ADVANCE(1462);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token2);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile1_token1);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile2_token1);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile3_token1);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1222);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1222);
      if (lookahead == 'b') ADVANCE(1054);
      if (lookahead == 'd') ADVANCE(905);
      if (lookahead == 'l') ADVANCE(1159);
      if (lookahead == 'm') ADVANCE(758);
      if (lookahead == 'r') ADVANCE(1154);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(938);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_borderSize);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_allwaystransparent);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_legacy_lazy_load);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_clicksound);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == 's') ADVANCE(1118);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_speed);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_textblock);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'S') ADVANCE(1185);
      if (lookahead == 'b') ADVANCE(1028);
      if (lookahead == 'u') ADVANCE(1215);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == 't') ADVANCE(1338);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_colortwo);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_cull_distance);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym__statement_gfx_cull_distance_token1);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'i') ADVANCE(1301);
      if (lookahead == 'o') ADVANCE(1198);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(947);
      if (lookahead == 'o') ADVANCE(1119);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_border_color);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_animation_rate_fps);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_looping);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_play_on_show);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_pause_on_loop);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym__statement_gfx_file_token1);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_transparencecheck);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1377);
      if (lookahead == '5') ADVANCE(1539);
      if (lookahead == 'f') ADVANCE(1537);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1540);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1540);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1377);
      if (lookahead == 'f') ADVANCE(1537);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1540);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1540);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1377);
      if (lookahead == 'f') ADVANCE(1537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1540);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(1537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1541);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1542);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1543);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1544);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1545);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead == '5') ADVANCE(1548);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1546);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1549);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1546);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1546);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1549);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_hexadecimal);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1388);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'O') ADVANCE(927);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1559);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1394},
  [2] = {.lex_state = 1394},
  [3] = {.lex_state = 1394},
  [4] = {.lex_state = 1394},
  [5] = {.lex_state = 1394},
  [6] = {.lex_state = 1394},
  [7] = {.lex_state = 1394},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1394},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1394},
  [12] = {.lex_state = 438},
  [13] = {.lex_state = 438},
  [14] = {.lex_state = 1394},
  [15] = {.lex_state = 438},
  [16] = {.lex_state = 439},
  [17] = {.lex_state = 438},
  [18] = {.lex_state = 439},
  [19] = {.lex_state = 438},
  [20] = {.lex_state = 439},
  [21] = {.lex_state = 438},
  [22] = {.lex_state = 440},
  [23] = {.lex_state = 438},
  [24] = {.lex_state = 441},
  [25] = {.lex_state = 441},
  [26] = {.lex_state = 440},
  [27] = {.lex_state = 440},
  [28] = {.lex_state = 438},
  [29] = {.lex_state = 441},
  [30] = {.lex_state = 438},
  [31] = {.lex_state = 440},
  [32] = {.lex_state = 442},
  [33] = {.lex_state = 442},
  [34] = {.lex_state = 442},
  [35] = {.lex_state = 438},
  [36] = {.lex_state = 440},
  [37] = {.lex_state = 438},
  [38] = {.lex_state = 438},
  [39] = {.lex_state = 439},
  [40] = {.lex_state = 443},
  [41] = {.lex_state = 439},
  [42] = {.lex_state = 439},
  [43] = {.lex_state = 443},
  [44] = {.lex_state = 441},
  [45] = {.lex_state = 438},
  [46] = {.lex_state = 441},
  [47] = {.lex_state = 439},
  [48] = {.lex_state = 438},
  [49] = {.lex_state = 441},
  [50] = {.lex_state = 438},
  [51] = {.lex_state = 438},
  [52] = {.lex_state = 438},
  [53] = {.lex_state = 438},
  [54] = {.lex_state = 438},
  [55] = {.lex_state = 438},
  [56] = {.lex_state = 438},
  [57] = {.lex_state = 438},
  [58] = {.lex_state = 439},
  [59] = {.lex_state = 438},
  [60] = {.lex_state = 438},
  [61] = {.lex_state = 438},
  [62] = {.lex_state = 438},
  [63] = {.lex_state = 438},
  [64] = {.lex_state = 438},
  [65] = {.lex_state = 438},
  [66] = {.lex_state = 438},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 438},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 441},
  [77] = {.lex_state = 441},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 438},
  [81] = {.lex_state = 438},
  [82] = {.lex_state = 438},
  [83] = {.lex_state = 438},
  [84] = {.lex_state = 438},
  [85] = {.lex_state = 438},
  [86] = {.lex_state = 441},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 439},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 439},
  [96] = {.lex_state = 439},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 438},
  [102] = {.lex_state = 439},
  [103] = {.lex_state = 438},
  [104] = {.lex_state = 441},
  [105] = {.lex_state = 438},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 438},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 438},
  [111] = {.lex_state = 439},
  [112] = {.lex_state = 438},
  [113] = {.lex_state = 439},
  [114] = {.lex_state = 439},
  [115] = {.lex_state = 438},
  [116] = {.lex_state = 438},
  [117] = {.lex_state = 439},
  [118] = {.lex_state = 439},
  [119] = {.lex_state = 439},
  [120] = {.lex_state = 441},
  [121] = {.lex_state = 439},
  [122] = {.lex_state = 441},
  [123] = {.lex_state = 441},
  [124] = {.lex_state = 439},
  [125] = {.lex_state = 439},
  [126] = {.lex_state = 442},
  [127] = {.lex_state = 441},
  [128] = {.lex_state = 442},
  [129] = {.lex_state = 442},
  [130] = {.lex_state = 441},
  [131] = {.lex_state = 441},
  [132] = {.lex_state = 442},
  [133] = {.lex_state = 438},
  [134] = {.lex_state = 438},
  [135] = {.lex_state = 442},
  [136] = {.lex_state = 441},
  [137] = {.lex_state = 442},
  [138] = {.lex_state = 442},
  [139] = {.lex_state = 441},
  [140] = {.lex_state = 438},
  [141] = {.lex_state = 438},
  [142] = {.lex_state = 1394},
  [143] = {.lex_state = 438},
  [144] = {.lex_state = 438},
  [145] = {.lex_state = 438},
  [146] = {.lex_state = 438},
  [147] = {.lex_state = 438},
  [148] = {.lex_state = 438},
  [149] = {.lex_state = 438},
  [150] = {.lex_state = 438},
  [151] = {.lex_state = 438},
  [152] = {.lex_state = 438},
  [153] = {.lex_state = 438},
  [154] = {.lex_state = 438},
  [155] = {.lex_state = 442},
  [156] = {.lex_state = 438},
  [157] = {.lex_state = 438},
  [158] = {.lex_state = 1394},
  [159] = {.lex_state = 1394},
  [160] = {.lex_state = 442},
  [161] = {.lex_state = 438},
  [162] = {.lex_state = 438},
  [163] = {.lex_state = 438},
  [164] = {.lex_state = 438},
  [165] = {.lex_state = 442},
  [166] = {.lex_state = 438},
  [167] = {.lex_state = 1394},
  [168] = {.lex_state = 438},
  [169] = {.lex_state = 438},
  [170] = {.lex_state = 438},
  [171] = {.lex_state = 438},
  [172] = {.lex_state = 438},
  [173] = {.lex_state = 438},
  [174] = {.lex_state = 442},
  [175] = {.lex_state = 442},
  [176] = {.lex_state = 442},
  [177] = {.lex_state = 442},
  [178] = {.lex_state = 1394},
  [179] = {.lex_state = 438},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 438},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 441},
  [185] = {.lex_state = 438},
  [186] = {.lex_state = 438},
  [187] = {.lex_state = 438},
  [188] = {.lex_state = 438},
  [189] = {.lex_state = 438},
  [190] = {.lex_state = 438},
  [191] = {.lex_state = 438},
  [192] = {.lex_state = 438},
  [193] = {.lex_state = 439},
  [194] = {.lex_state = 439},
  [195] = {.lex_state = 439},
  [196] = {.lex_state = 438},
  [197] = {.lex_state = 439},
  [198] = {.lex_state = 1394},
  [199] = {.lex_state = 1394},
  [200] = {.lex_state = 1394},
  [201] = {.lex_state = 1394},
  [202] = {.lex_state = 1394},
  [203] = {.lex_state = 439},
  [204] = {.lex_state = 1394},
  [205] = {.lex_state = 439},
  [206] = {.lex_state = 1394},
  [207] = {.lex_state = 1394},
  [208] = {.lex_state = 1394},
  [209] = {.lex_state = 1394},
  [210] = {.lex_state = 1394},
  [211] = {.lex_state = 1394},
  [212] = {.lex_state = 1394},
  [213] = {.lex_state = 1394},
  [214] = {.lex_state = 1394},
  [215] = {.lex_state = 1394},
  [216] = {.lex_state = 1394},
  [217] = {.lex_state = 1394},
  [218] = {.lex_state = 1394},
  [219] = {.lex_state = 1394},
  [220] = {.lex_state = 1394},
  [221] = {.lex_state = 1394},
  [222] = {.lex_state = 442},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 1394},
  [225] = {.lex_state = 1394},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 442},
  [228] = {.lex_state = 442},
  [229] = {.lex_state = 442},
  [230] = {.lex_state = 1394},
  [231] = {.lex_state = 438},
  [232] = {.lex_state = 1394},
  [233] = {.lex_state = 438},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 1394},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 438},
  [238] = {.lex_state = 442},
  [239] = {.lex_state = 438},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 438},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 442},
  [245] = {.lex_state = 438},
  [246] = {.lex_state = 1394},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 442},
  [249] = {.lex_state = 438},
  [250] = {.lex_state = 439},
  [251] = {.lex_state = 1394},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 438},
  [254] = {.lex_state = 438},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 438},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 438},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 438},
  [264] = {.lex_state = 1394},
  [265] = {.lex_state = 438},
  [266] = {.lex_state = 1394},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 1394},
  [269] = {.lex_state = 438},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 438},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 1394},
  [278] = {.lex_state = 438},
  [279] = {.lex_state = 438},
  [280] = {.lex_state = 1394},
  [281] = {.lex_state = 1394},
  [282] = {.lex_state = 440},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 1394},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 439},
  [290] = {.lex_state = 438},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 438},
  [294] = {.lex_state = 438},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 438},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 438},
  [301] = {.lex_state = 438},
  [302] = {.lex_state = 1394},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 439},
  [306] = {.lex_state = 439},
  [307] = {.lex_state = 438},
  [308] = {.lex_state = 438},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 441},
  [312] = {.lex_state = 439},
  [313] = {.lex_state = 1394},
  [314] = {.lex_state = 438},
  [315] = {.lex_state = 440},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 442},
  [318] = {.lex_state = 438},
  [319] = {.lex_state = 438},
  [320] = {.lex_state = 1394},
  [321] = {.lex_state = 1394},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 443},
  [325] = {.lex_state = 1394},
  [326] = {.lex_state = 442},
  [327] = {.lex_state = 439},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 1394},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 439},
  [334] = {.lex_state = 439},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 438},
  [337] = {.lex_state = 439},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 439},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 442},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 439},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 439},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 441},
  [371] = {.lex_state = 441},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 438},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
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
    [anon_sym_noOfFrames] = ACTIONS(1),
    [anon_sym_overlay_frames_per_row] = ACTIONS(1),
    [anon_sym_overlay_rows] = ACTIONS(1),
    [anon_sym_effectFile] = ACTIONS(1),
    [aux_sym__statement_gfx_effectFile_token1] = ACTIONS(1),
    [anon_sym_animation] = ACTIONS(1),
    [anon_sym_animationmaskfile] = ACTIONS(1),
    [aux_sym__animation_entry_dds_token1] = ACTIONS(1),
    [anon_sym_animationrotation] = ACTIONS(1),
    [anon_sym_animationlooping] = ACTIONS(1),
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
    [anon_sym_scale] = ACTIONS(1),
    [anon_sym_transparencecheck] = ACTIONS(1),
    [sym_assign_equal] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
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
    [sym_file] = STATE(352),
    [sym_dot_mod] = STATE(349),
    [sym_dot_gfx] = STATE(349),
    [sym__spriteTypes] = STATE(178),
    [sym__objectTypes] = STATE(178),
    [sym__bitmapfonts] = STATE(178),
    [sym__statement_name] = STATE(8),
    [sym__statement_mod_path] = STATE(8),
    [sym__statement_mod_archive] = STATE(8),
    [sym__statement_mod_remote_file_id] = STATE(8),
    [sym__statement_mod_version] = STATE(8),
    [sym__statement_mod_picture] = STATE(8),
    [sym__statement_mod_supported_version] = STATE(8),
    [sym__statement_mod_replace_path] = STATE(8),
    [sym__statement_mod_tags] = STATE(8),
    [sym__statement_mod_dependencies] = STATE(8),
    [aux_sym_dot_mod_repeat1] = STATE(8),
    [aux_sym_dot_gfx_repeat1] = STATE(178),
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
    ACTIONS(33), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(31), 25,
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
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_speed,
      anon_sym_textblock,
      anon_sym_colortwo,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_horizontal,
      anon_sym_file,
      anon_sym_scale,
      anon_sym_transparencecheck,
  [39] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(37), 25,
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
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_speed,
      anon_sym_textblock,
      anon_sym_colortwo,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_horizontal,
      anon_sym_file,
      anon_sym_scale,
      anon_sym_transparencecheck,
  [75] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(5), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(43), 22,
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
  [110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(5), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(47), 22,
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
  [145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(52), 22,
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
  [180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_assign_equal,
    ACTIONS(56), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(54), 19,
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
      anon_sym_allwaystransparent,
      anon_sym_clicksound,
      anon_sym_colortwo,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_horizontal,
      anon_sym_transparencecheck,
  [213] = 13,
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
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(10), 11,
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
  [263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_assign_equal,
    ACTIONS(64), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(62), 19,
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
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
  [295] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_name,
    ACTIONS(73), 1,
      anon_sym_path,
    ACTIONS(76), 1,
      anon_sym_archive,
    ACTIONS(79), 1,
      anon_sym_remote_file_id,
    ACTIONS(82), 1,
      anon_sym_version,
    ACTIONS(85), 1,
      anon_sym_picture,
    ACTIONS(88), 1,
      anon_sym_supported_version,
    ACTIONS(91), 1,
      anon_sym_replace_path,
    ACTIONS(94), 1,
      anon_sym_tags,
    ACTIONS(97), 1,
      anon_sym_dependencies,
    STATE(10), 11,
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
  [345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(100), 19,
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
      anon_sym_allwaystransparent,
      anon_sym_clicksound,
      anon_sym_colortwo,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_horizontal,
      anon_sym_transparencecheck,
  [375] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      anon_sym_animationrotation,
    ACTIONS(110), 1,
      anon_sym_animationlooping,
    ACTIONS(116), 1,
      anon_sym_animationblendmode,
    ACTIONS(118), 1,
      anon_sym_animationtype,
    ACTIONS(120), 1,
      anon_sym_animationframes,
    ACTIONS(106), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(112), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(114), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(13), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [420] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      anon_sym_animationrotation,
    ACTIONS(130), 1,
      anon_sym_animationlooping,
    ACTIONS(139), 1,
      anon_sym_animationblendmode,
    ACTIONS(142), 1,
      anon_sym_animationtype,
    ACTIONS(145), 1,
      anon_sym_animationframes,
    ACTIONS(124), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(133), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(136), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(13), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(148), 19,
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
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
  [494] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_animationrotation,
    ACTIONS(110), 1,
      anon_sym_animationlooping,
    ACTIONS(116), 1,
      anon_sym_animationblendmode,
    ACTIONS(118), 1,
      anon_sym_animationtype,
    ACTIONS(120), 1,
      anon_sym_animationframes,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(112), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(114), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(12), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [539] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(158), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(160), 1,
      anon_sym_noOfFrames,
    ACTIONS(162), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(164), 1,
      anon_sym_overlay_rows,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(168), 1,
      anon_sym_animation,
    ACTIONS(170), 1,
      anon_sym_allwaystransparent,
    ACTIONS(172), 1,
      anon_sym_transparencecheck,
    STATE(18), 10,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_transparencecheck,
      aux_sym__spriteType_block_repeat1,
  [585] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(158), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(160), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(170), 1,
      anon_sym_allwaystransparent,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(178), 1,
      anon_sym_looping,
    ACTIONS(180), 1,
      anon_sym_play_on_show,
    ACTIONS(182), 1,
      anon_sym_pause_on_loop,
    STATE(19), 10,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_animation_rate_fps,
      sym__statement_gfx_looping,
      sym__statement_gfx_play_on_show,
      sym__statement_gfx_pause_on_loop,
      aux_sym__frameAnimatedSpriteType_block_repeat1,
  [631] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    ACTIONS(186), 1,
      anon_sym_name,
    ACTIONS(189), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(192), 1,
      anon_sym_noOfFrames,
    ACTIONS(195), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(198), 1,
      anon_sym_overlay_rows,
    ACTIONS(201), 1,
      anon_sym_effectFile,
    ACTIONS(204), 1,
      anon_sym_animation,
    ACTIONS(207), 1,
      anon_sym_allwaystransparent,
    ACTIONS(210), 1,
      anon_sym_transparencecheck,
    STATE(18), 10,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_transparencecheck,
      aux_sym__spriteType_block_repeat1,
  [677] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(158), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(160), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(170), 1,
      anon_sym_allwaystransparent,
    ACTIONS(176), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(178), 1,
      anon_sym_looping,
    ACTIONS(180), 1,
      anon_sym_play_on_show,
    ACTIONS(182), 1,
      anon_sym_pause_on_loop,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(21), 10,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_animation_rate_fps,
      sym__statement_gfx_looping,
      sym__statement_gfx_play_on_show,
      sym__statement_gfx_pause_on_loop,
      aux_sym__frameAnimatedSpriteType_block_repeat1,
  [723] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(158), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(160), 1,
      anon_sym_noOfFrames,
    ACTIONS(162), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(164), 1,
      anon_sym_overlay_rows,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(168), 1,
      anon_sym_animation,
    ACTIONS(170), 1,
      anon_sym_allwaystransparent,
    ACTIONS(172), 1,
      anon_sym_transparencecheck,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(16), 10,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_transparencecheck,
      aux_sym__spriteType_block_repeat1,
  [769] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      anon_sym_name,
    ACTIONS(222), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(225), 1,
      anon_sym_noOfFrames,
    ACTIONS(228), 1,
      anon_sym_effectFile,
    ACTIONS(231), 1,
      anon_sym_allwaystransparent,
    ACTIONS(234), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(237), 1,
      anon_sym_looping,
    ACTIONS(240), 1,
      anon_sym_play_on_show,
    ACTIONS(243), 1,
      anon_sym_pause_on_loop,
    STATE(21), 10,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_animation_rate_fps,
      sym__statement_gfx_looping,
      sym__statement_gfx_play_on_show,
      sym__statement_gfx_pause_on_loop,
      aux_sym__frameAnimatedSpriteType_block_repeat1,
  [815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_animation,
    ACTIONS(250), 1,
      sym_assign_equal,
    ACTIONS(246), 17,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
  [844] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 1,
      anon_sym_spriteType,
    ACTIONS(256), 1,
      anon_sym_textSpriteType,
    ACTIONS(258), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(260), 1,
      anon_sym_maskedShieldType,
    ACTIONS(262), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(264), 1,
      anon_sym_progressbartype,
    ACTIONS(266), 1,
      anon_sym_cursor_offset,
    STATE(30), 10,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__frameAnimatedSpriteType,
      sym__progressbartype,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [884] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(272), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(274), 1,
      anon_sym_size,
    ACTIONS(276), 1,
      anon_sym_color,
    ACTIONS(278), 1,
      anon_sym_colortwo,
    ACTIONS(280), 1,
      anon_sym_horizontal,
    STATE(136), 2,
      sym__statement_gfx_size,
      sym__statement_gfx_color,
    STATE(25), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      aux_sym__progressbartype_block_repeat1,
  [928] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(270), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(272), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(274), 1,
      anon_sym_size,
    ACTIONS(276), 1,
      anon_sym_color,
    ACTIONS(278), 1,
      anon_sym_colortwo,
    ACTIONS(280), 1,
      anon_sym_horizontal,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(136), 2,
      sym__statement_gfx_size,
      sym__statement_gfx_color,
    STATE(29), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      aux_sym__progressbartype_block_repeat1,
  [972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_animation,
    ACTIONS(284), 17,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
  [998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_animation,
    ACTIONS(292), 1,
      sym_assign_equal,
    ACTIONS(288), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
  [1026] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_spriteType,
    ACTIONS(256), 1,
      anon_sym_textSpriteType,
    ACTIONS(258), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(260), 1,
      anon_sym_maskedShieldType,
    ACTIONS(262), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(264), 1,
      anon_sym_progressbartype,
    ACTIONS(266), 1,
      anon_sym_cursor_offset,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(23), 10,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__frameAnimatedSpriteType,
      sym__progressbartype,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [1066] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    ACTIONS(298), 1,
      anon_sym_name,
    ACTIONS(301), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(304), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(307), 1,
      anon_sym_effectFile,
    ACTIONS(310), 1,
      anon_sym_size,
    ACTIONS(313), 1,
      anon_sym_color,
    ACTIONS(316), 1,
      anon_sym_colortwo,
    ACTIONS(319), 1,
      anon_sym_horizontal,
    STATE(136), 2,
      sym__statement_gfx_size,
      sym__statement_gfx_color,
    STATE(29), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      aux_sym__progressbartype_block_repeat1,
  [1110] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      anon_sym_spriteType,
    ACTIONS(327), 1,
      anon_sym_textSpriteType,
    ACTIONS(330), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(333), 1,
      anon_sym_maskedShieldType,
    ACTIONS(336), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(339), 1,
      anon_sym_progressbartype,
    ACTIONS(342), 1,
      anon_sym_cursor_offset,
    STATE(30), 10,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__frameAnimatedSpriteType,
      sym__progressbartype,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [1150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_animation,
    ACTIONS(345), 16,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_transparencecheck,
  [1175] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 1,
      anon_sym_size,
    ACTIONS(353), 1,
      anon_sym_text,
    ACTIONS(355), 1,
      anon_sym_color,
    ACTIONS(357), 1,
      anon_sym_font,
    ACTIONS(359), 1,
      anon_sym_position,
    ACTIONS(361), 1,
      anon_sym_format,
    ACTIONS(363), 1,
      anon_sym_cull_distance,
    STATE(33), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [1213] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_size,
    ACTIONS(353), 1,
      anon_sym_text,
    ACTIONS(355), 1,
      anon_sym_color,
    ACTIONS(357), 1,
      anon_sym_font,
    ACTIONS(359), 1,
      anon_sym_position,
    ACTIONS(361), 1,
      anon_sym_format,
    ACTIONS(363), 1,
      anon_sym_cull_distance,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(34), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [1251] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      anon_sym_size,
    ACTIONS(372), 1,
      anon_sym_text,
    ACTIONS(375), 1,
      anon_sym_color,
    ACTIONS(378), 1,
      anon_sym_font,
    ACTIONS(381), 1,
      anon_sym_position,
    ACTIONS(384), 1,
      anon_sym_format,
    ACTIONS(387), 1,
      anon_sym_cull_distance,
    STATE(34), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [1289] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(158), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(160), 1,
      anon_sym_noOfFrames,
    ACTIONS(170), 1,
      anon_sym_allwaystransparent,
    ACTIONS(274), 1,
      anon_sym_size,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(392), 1,
      anon_sym_borderSize,
    ACTIONS(394), 1,
      anon_sym_legacy_lazy_load,
    STATE(163), 1,
      sym__statement_gfx_size,
    STATE(38), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_animation,
    ACTIONS(396), 15,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_speed,
      anon_sym_textblock,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      anon_sym_file,
      anon_sym_scale,
      aux_sym_float_token1,
  [1353] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    ACTIONS(402), 1,
      anon_sym_name,
    ACTIONS(405), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(408), 1,
      anon_sym_noOfFrames,
    ACTIONS(411), 1,
      anon_sym_size,
    ACTIONS(414), 1,
      anon_sym_borderSize,
    ACTIONS(417), 1,
      anon_sym_allwaystransparent,
    ACTIONS(420), 1,
      anon_sym_legacy_lazy_load,
    STATE(163), 1,
      sym__statement_gfx_size,
    STATE(37), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1393] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(158), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(160), 1,
      anon_sym_noOfFrames,
    ACTIONS(170), 1,
      anon_sym_allwaystransparent,
    ACTIONS(274), 1,
      anon_sym_size,
    ACTIONS(392), 1,
      anon_sym_borderSize,
    ACTIONS(394), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      sym__statement_gfx_size,
    STATE(37), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(427), 12,
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
  [1458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_assign_equal,
    ACTIONS(431), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(429), 12,
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
  [1483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(437), 12,
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
  [1508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(427), 12,
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
  [1533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(442), 12,
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
  [1555] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(160), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(270), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(272), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    ACTIONS(448), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    STATE(46), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_assign_equal,
    ACTIONS(450), 13,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_textcolors,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [1611] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(160), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(270), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(272), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(448), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(49), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_assign_equal,
    ACTIONS(456), 13,
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
  [1667] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_cursor_offset,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(462), 1,
      anon_sym_textcolors,
    ACTIONS(464), 1,
      anon_sym_name,
    ACTIONS(466), 1,
      anon_sym_path,
    ACTIONS(468), 1,
      anon_sym_color,
    ACTIONS(470), 1,
      anon_sym_border_color,
    STATE(187), 1,
      sym__textcolors,
    STATE(51), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [1703] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    ACTIONS(474), 1,
      anon_sym_name,
    ACTIONS(477), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(480), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(483), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(486), 1,
      anon_sym_noOfFrames,
    ACTIONS(489), 1,
      anon_sym_effectFile,
    STATE(49), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1737] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_cursor_offset,
    ACTIONS(462), 1,
      anon_sym_textcolors,
    ACTIONS(464), 1,
      anon_sym_name,
    ACTIONS(466), 1,
      anon_sym_path,
    ACTIONS(468), 1,
      anon_sym_color,
    ACTIONS(470), 1,
      anon_sym_border_color,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym__textcolors,
    STATE(48), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [1773] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    ACTIONS(496), 1,
      anon_sym_textcolors,
    ACTIONS(499), 1,
      anon_sym_name,
    ACTIONS(502), 1,
      anon_sym_path,
    ACTIONS(505), 1,
      anon_sym_cursor_offset,
    ACTIONS(508), 1,
      anon_sym_color,
    ACTIONS(511), 1,
      anon_sym_border_color,
    STATE(187), 1,
      sym__textcolors,
    STATE(51), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [1809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_animationrotation,
    ACTIONS(518), 1,
      sym_assign_equal,
    ACTIONS(514), 11,
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
  [1832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 13,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_textcolors,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [1851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_animationrotation,
    ACTIONS(526), 1,
      sym_assign_equal,
    ACTIONS(522), 11,
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
  [1874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_animationrotation,
    ACTIONS(532), 1,
      sym_assign_equal,
    ACTIONS(528), 11,
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
  [1897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_animationrotation,
    ACTIONS(538), 1,
      sym_assign_equal,
    ACTIONS(534), 11,
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
  [1920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_animationrotation,
    ACTIONS(544), 1,
      sym_assign_equal,
    ACTIONS(540), 11,
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
  [1943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 13,
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
  [1962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_animationrotation,
    ACTIONS(552), 1,
      sym_assign_equal,
    ACTIONS(548), 11,
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
  [1985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_animationrotation,
    ACTIONS(558), 1,
      sym_assign_equal,
    ACTIONS(554), 11,
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
  [2008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_animationrotation,
    ACTIONS(564), 1,
      sym_assign_equal,
    ACTIONS(560), 11,
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
  [2031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_animationrotation,
    ACTIONS(566), 11,
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
  [2051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_animationrotation,
    ACTIONS(570), 11,
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
  [2071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_animationrotation,
    ACTIONS(396), 11,
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
  [2091] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(158), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(160), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    ACTIONS(576), 1,
      anon_sym_clicksound,
    STATE(81), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [2121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_animationrotation,
    ACTIONS(578), 11,
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
  [2141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym_assign_equal,
    ACTIONS(582), 11,
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
  [2161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym_assign_equal,
    ACTIONS(586), 11,
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
  [2181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_assign_equal,
    ACTIONS(590), 11,
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
  [2201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym_assign_equal,
    ACTIONS(594), 11,
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
  [2221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_assign_equal,
    ACTIONS(598), 11,
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
  [2241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_animationrotation,
    ACTIONS(602), 11,
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
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_assign_equal,
    ACTIONS(606), 11,
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
  [2281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym_assign_equal,
    ACTIONS(610), 11,
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
  [2301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_assign_equal,
    ACTIONS(614), 11,
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
  [2321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_color,
    ACTIONS(622), 1,
      sym_assign_equal,
    ACTIONS(618), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [2343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_color,
    ACTIONS(628), 1,
      sym_assign_equal,
    ACTIONS(624), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [2365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym_assign_equal,
    ACTIONS(630), 11,
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
  [2385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_assign_equal,
    ACTIONS(634), 11,
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
  [2405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_animationrotation,
    ACTIONS(638), 11,
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
  [2425] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(158), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(160), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(576), 1,
      anon_sym_clicksound,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    STATE(83), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [2455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_animationrotation,
    ACTIONS(644), 11,
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
  [2475] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    ACTIONS(650), 1,
      anon_sym_name,
    ACTIONS(653), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(656), 1,
      anon_sym_noOfFrames,
    ACTIONS(659), 1,
      anon_sym_effectFile,
    ACTIONS(662), 1,
      anon_sym_clicksound,
    STATE(83), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [2505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_animationrotation,
    ACTIONS(665), 11,
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
  [2525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_animationrotation,
    ACTIONS(669), 11,
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
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_color,
    ACTIONS(673), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [2564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 11,
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
  [2581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 11,
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
  [2598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_assign_equal,
    ACTIONS(681), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
      anon_sym_transparencecheck,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 11,
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
  [2634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 11,
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
  [2651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 11,
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
  [2668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 11,
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
  [2685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 11,
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
  [2702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_assign_equal,
    ACTIONS(695), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
      anon_sym_transparencecheck,
  [2721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym_assign_equal,
    ACTIONS(699), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
      anon_sym_transparencecheck,
  [2740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 11,
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
  [2757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 11,
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
  [2774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 11,
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
  [2791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 11,
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
  [2808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym_assign_equal,
    ACTIONS(711), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [2827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_assign_equal,
    ACTIONS(715), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
      anon_sym_transparencecheck,
  [2846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_assign_equal,
    ACTIONS(719), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [2865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_color,
    ACTIONS(723), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [2884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_assign_equal,
    ACTIONS(727), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [2903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 11,
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
  [2920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_assign_equal,
    ACTIONS(733), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [2939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 11,
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
  [2956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 11,
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
  [2973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [2989] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    ACTIONS(745), 1,
      anon_sym_animation,
    ACTIONS(747), 1,
      anon_sym_file,
    ACTIONS(749), 1,
      anon_sym_scale,
    STATE(124), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [3015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [3031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
      anon_sym_transparencecheck,
  [3047] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    ACTIONS(757), 1,
      anon_sym_name,
    ACTIONS(760), 1,
      anon_sym_animation,
    ACTIONS(763), 1,
      anon_sym_file,
    ACTIONS(766), 1,
      anon_sym_scale,
    STATE(114), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [3073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [3089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [3105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
      anon_sym_transparencecheck,
  [3121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
      anon_sym_transparencecheck,
  [3137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
      anon_sym_transparencecheck,
  [3153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_color,
    ACTIONS(783), 1,
      sym_assign_equal,
    ACTIONS(779), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [3173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
      anon_sym_transparencecheck,
  [3189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_color,
    ACTIONS(791), 1,
      sym_assign_equal,
    ACTIONS(787), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [3209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_color,
    ACTIONS(797), 1,
      sym_assign_equal,
    ACTIONS(793), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [3229] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(745), 1,
      anon_sym_animation,
    ACTIONS(747), 1,
      anon_sym_file,
    ACTIONS(749), 1,
      anon_sym_scale,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    STATE(114), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_file,
      sym__statement_gfx_pdxmesh_animation,
      sym__statement_gfx_scale,
      aux_sym__pdxmesh_block_repeat1,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
      anon_sym_transparencecheck,
  [3271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_assign_equal,
    ACTIONS(803), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_color,
    ACTIONS(807), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [3305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym_assign_equal,
    ACTIONS(811), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_assign_equal,
    ACTIONS(815), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_color,
    ACTIONS(819), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [3356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_color,
    ACTIONS(823), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [3373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      sym_assign_equal,
    ACTIONS(827), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      sym_assign_equal,
    ACTIONS(831), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_assign_equal,
    ACTIONS(835), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym_assign_equal,
    ACTIONS(839), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_color,
    ACTIONS(843), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [3458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym_assign_equal,
    ACTIONS(429), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_assign_equal,
    ACTIONS(779), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym_assign_equal,
    ACTIONS(851), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
  [3508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
    ACTIONS(861), 1,
      anon_sym_speed,
    ACTIONS(863), 1,
      anon_sym_textblock,
    STATE(158), 4,
      sym__statement_gfx_name,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym_assign_equal,
    ACTIONS(31), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3770] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_name,
    ACTIONS(861), 1,
      anon_sym_speed,
    ACTIONS(863), 1,
      anon_sym_textblock,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
    STATE(167), 4,
      sym__statement_gfx_name,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [3792] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      ts_builtin_sym_end,
    ACTIONS(899), 1,
      anon_sym_spriteTypes,
    ACTIONS(902), 1,
      anon_sym_objectTypes,
    ACTIONS(905), 1,
      anon_sym_bitmapfonts,
    STATE(159), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [3814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3912] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
    ACTIONS(920), 1,
      anon_sym_name,
    ACTIONS(923), 1,
      anon_sym_speed,
    ACTIONS(926), 1,
      anon_sym_textblock,
    STATE(167), 4,
      sym__statement_gfx_name,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [3934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_assign_equal,
    ACTIONS(929), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym_assign_equal,
    ACTIONS(933), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym_assign_equal,
    ACTIONS(937), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [4010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [4024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [4038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [4052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [4066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [4080] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(7), 1,
      anon_sym_objectTypes,
    ACTIONS(9), 1,
      anon_sym_bitmapfonts,
    ACTIONS(955), 1,
      ts_builtin_sym_end,
    STATE(159), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [4102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [4116] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
    ACTIONS(961), 1,
      anon_sym_animatedmaptext,
    ACTIONS(964), 1,
      anon_sym_pdxmesh,
    STATE(180), 4,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      aux_sym__objectTypes_block_repeat1,
  [4135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_RBRACE,
    ACTIONS(969), 1,
      anon_sym_animatedmaptext,
    ACTIONS(971), 1,
      anon_sym_pdxmesh,
    STATE(183), 4,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      aux_sym__objectTypes_block_repeat1,
  [4154] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_textcolors,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
    ACTIONS(975), 1,
      anon_sym_bitmapfont,
    STATE(239), 1,
      sym__textcolors,
    STATE(188), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [4175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_animatedmaptext,
    ACTIONS(971), 1,
      anon_sym_pdxmesh,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
    STATE(180), 4,
      sym__objectTypes_type,
      sym__animatedmaptext,
      sym__pdxmesh,
      aux_sym__objectTypes_block_repeat1,
  [4194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
  [4207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym_assign_equal,
    ACTIONS(981), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [4222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [4248] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
    ACTIONS(989), 1,
      anon_sym_textcolors,
    ACTIONS(992), 1,
      anon_sym_bitmapfont,
    STATE(239), 1,
      sym__textcolors,
    STATE(188), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [4269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [4282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [4295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [4308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_textcolors,
    ACTIONS(975), 1,
      anon_sym_bitmapfont,
    ACTIONS(1001), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym__textcolors,
    STATE(182), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [4329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym_assign_equal,
    ACTIONS(1003), 5,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_file,
      anon_sym_scale,
  [4343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_assign_equal,
    ACTIONS(1007), 5,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_file,
      anon_sym_scale,
  [4357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym_assign_equal,
    ACTIONS(1011), 5,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_file,
      anon_sym_scale,
  [4371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [4383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 5,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_file,
      anon_sym_scale,
  [4394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_x,
    ACTIONS(1021), 1,
      anon_sym_y,
    STATE(262), 1,
      sym__entry_y_float,
    STATE(264), 1,
      sym__entry_x_float,
    STATE(341), 1,
      sym__statement_xy_float,
  [4413] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_x,
    ACTIONS(1025), 1,
      anon_sym_y,
    STATE(251), 1,
      sym__entry_x_integer,
    STATE(276), 1,
      sym__entry_y_integer,
    STATE(339), 1,
      sym__statement_xy_integer,
  [4432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_x,
    ACTIONS(1025), 1,
      anon_sym_y,
    STATE(251), 1,
      sym__entry_x_integer,
    STATE(276), 1,
      sym__entry_y_integer,
    STATE(368), 1,
      sym__statement_xy_integer,
  [4451] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_x,
    ACTIONS(1025), 1,
      anon_sym_y,
    STATE(251), 1,
      sym__entry_x_integer,
    STATE(276), 1,
      sym__entry_y_integer,
    STATE(340), 1,
      sym__statement_xy_integer,
  [4470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym_assign_equal,
    ACTIONS(1027), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 5,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_file,
      anon_sym_scale,
  [4494] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_x,
    ACTIONS(1025), 1,
      anon_sym_y,
    STATE(251), 1,
      sym__entry_x_integer,
    STATE(276), 1,
      sym__entry_y_integer,
    STATE(347), 1,
      sym__statement_xy_integer,
  [4513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 5,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_animation,
      anon_sym_file,
      anon_sym_scale,
  [4524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym_assign_equal,
    ACTIONS(1035), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
    ACTIONS(1051), 1,
      aux_sym__integer_positive_token1,
    STATE(216), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_RBRACE,
    ACTIONS(1061), 1,
      aux_sym__integer_positive_token1,
    STATE(216), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [4645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(172), 1,
      sym__boolean_yes_no,
    ACTIONS(1074), 2,
      anon_sym_yes,
      anon_sym_no,
  [4706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 3,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
  [4715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [4724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [4733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 3,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
  [4742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(117), 1,
      sym__boolean_yes_no,
    ACTIONS(1084), 2,
      anon_sym_yes,
      anon_sym_no,
  [4753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(62), 1,
      sym__boolean_yes_no,
    ACTIONS(1086), 2,
      anon_sym_yes,
      anon_sym_no,
  [4764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(31), 1,
      sym__boolean_yes_no,
    ACTIONS(1088), 2,
      anon_sym_yes,
      anon_sym_no,
  [4775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      aux_sym__integer_positive_token1,
    STATE(212), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [4786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [4795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym_assign_equal,
    ACTIONS(1094), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [4806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [4815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym_assign_equal,
    ACTIONS(1100), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [4826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      sym_assign_equal,
    ACTIONS(1104), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [4837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym_assign_equal,
    ACTIONS(1108), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [4848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_RBRACE,
    ACTIONS(1114), 1,
      sym_string,
    STATE(242), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [4861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(115), 1,
      sym__boolean_yes_no,
    ACTIONS(1116), 2,
      anon_sym_yes,
      anon_sym_no,
  [4872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [4881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 3,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
  [4890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 3,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
  [4899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_RBRACE,
    ACTIONS(1126), 1,
      sym_string,
    STATE(242), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [4912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 3,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(112), 1,
      sym__boolean_yes_no,
    ACTIONS(1131), 2,
      anon_sym_yes,
      anon_sym_no,
  [4932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym_string,
    ACTIONS(1133), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [4945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 3,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym_y,
  [4954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 3,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
      anon_sym_pdxmesh,
  [4963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(127), 1,
      sym__boolean_yes_no,
    ACTIONS(1139), 2,
      anon_sym_yes,
      anon_sym_no,
  [4974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [4983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(1145), 1,
      aux_sym__statement_gfx_name_token2,
  [4993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_y,
    STATE(303), 1,
      sym__entry_y_integer,
  [5003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym__bitmapfont_block,
  [5013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      aux_sym_float_token1,
    STATE(267), 1,
      sym_float,
  [5023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      aux_sym_float_token1,
    STATE(266), 1,
      sym_float,
  [5033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym__gfx_textblock,
  [5043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_id,
    STATE(288), 1,
      sym__statement_gfx_animation_id,
  [5053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(210), 1,
      sym__float_positive,
  [5063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym__textcolors_block,
  [5073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym__progressbartype_block,
  [5083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(294), 1,
      sym__float_positive,
  [5093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_RBRACE,
    ACTIONS(1163), 1,
      sym_assign_equal,
  [5103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_x,
    STATE(353), 1,
      sym__entry_x_float,
  [5113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(278), 1,
      sym__float_positive,
  [5123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_y,
    STATE(353), 1,
      sym__entry_y_float,
  [5133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(110), 1,
      sym__float_positive,
  [5143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [5151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [5159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      aux_sym__integer_positive_token1,
    STATE(116), 1,
      sym__integer_positive,
  [5169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 2,
      anon_sym_RBRACE,
      sym_string,
  [5177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym__mod_dependencies_block,
  [5187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym__mod_tags_block,
  [5197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym__spriteType_block,
  [5207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym__textSpriteType_block,
  [5217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym__corneredTileSpriteType_block,
  [5227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(279), 1,
      sym__float_positive,
  [5237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_x,
    STATE(303), 1,
      sym__entry_x_integer,
  [5247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      aux_sym__integer_positive_token1,
    STATE(14), 1,
      sym__integer_positive,
  [5257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(300), 1,
      sym__float_positive,
  [5267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(301), 1,
      sym__float_positive,
  [5277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      aux_sym__integer_positive_token1,
    STATE(121), 1,
      sym__integer_positive,
  [5287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      aux_sym__integer_positive_token1,
    STATE(119), 1,
      sym__integer_positive,
  [5297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(108), 1,
      sym__mod_replace_path_folder,
  [5307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym__animatedmaptext_block,
  [5317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym__gfx_animation_block,
  [5327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [5335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [5343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_type,
    ACTIONS(1201), 1,
      sym_assign_equal,
  [5353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_type,
    STATE(316), 1,
      sym__statement_gfx_animation_type,
  [5363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(1207), 1,
      aux_sym__statement_gfx_name_token2,
  [5373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(369), 1,
      sym__float_positive,
  [5383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_LBRACE,
    STATE(217), 1,
      sym__spriteTypes_block,
  [5393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym__maskedShieldType_block,
  [5403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      aux_sym_float_token1,
    STATE(72), 1,
      sym__float_positive,
  [5413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(290), 1,
      sym__float_positive,
  [5423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym__frameAnimatedSpriteType_block,
  [5433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(205), 1,
      sym__float_positive,
  [5443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_LBRACE,
    STATE(219), 1,
      sym__objectTypes_block,
  [5453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_LBRACE,
    STATE(218), 1,
      sym__bitmapfonts_block,
  [5463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_LBRACE,
    STATE(240), 1,
      sym__pdxmesh_block,
  [5473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(328), 1,
      sym__float_positive,
  [5483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_float_token1,
    STATE(329), 1,
      sym__float_positive,
  [5493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      aux_sym__statement_mod_version_token1,
  [5500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_RBRACE,
  [5507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_LBRACE,
  [5514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      sym_integer,
  [5521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      sym_integer,
  [5528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      sym_string,
  [5535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      sym_string,
  [5542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
  [5549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_centre,
  [5556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      aux_sym__statement_gfx_cull_distance_token1,
  [5563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_click,
  [5570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      aux_sym__statement_mod_archive_token1,
  [5577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      sym_string,
  [5584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [5591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_RBRACE,
  [5598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      sym_byte,
  [5605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym_string,
  [5612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      sym_string,
  [5619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      aux_sym__statement_gfx_file_token1,
  [5626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      aux_sym__statement_mod_picture_token1,
  [5633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_LBRACE,
  [5640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_LBRACE,
  [5647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      sym_angle,
  [5654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym__animation_entry_dds_token1,
  [5661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      sym_byte,
  [5668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      aux_sym__statement_mod_supported_version_token1,
  [5675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_RBRACE,
  [5682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 1,
      anon_sym_RBRACE,
  [5689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_LBRACE,
  [5696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [5703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      anon_sym_LBRACE,
  [5710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [5717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [5724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_type,
  [5731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      sym_string,
  [5738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [5745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      anon_sym_RBRACE,
  [5752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_RBRACE,
  [5759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      anon_sym_RBRACE,
  [5766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      anon_sym_RBRACE,
  [5773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [5780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_LBRACE,
  [5787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_LBRACE,
  [5794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_LBRACE,
  [5801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      sym_byte,
  [5808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 1,
      anon_sym_RBRACE,
  [5815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_RBRACE,
  [5822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      ts_builtin_sym_end,
  [5829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_RBRACE,
  [5836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      sym_assign_equal,
  [5843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      ts_builtin_sym_end,
  [5850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_RBRACE,
  [5857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      sym_assign_equal,
  [5864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      sym_assign_equal,
  [5871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      sym_assign_equal,
  [5878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      sym_assign_equal,
  [5885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 1,
      sym_assign_equal,
  [5892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      sym_assign_equal,
  [5899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      sym_assign_equal,
  [5906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      sym_integer,
  [5913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 1,
      sym_assign_equal,
  [5920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 1,
      sym_integer,
  [5927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      sym_assign_equal,
  [5934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      sym_assign_equal,
  [5941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      sym_assign_equal,
  [5948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym_assign_equal,
  [5955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_RBRACE,
  [5962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      anon_sym_RBRACE,
  [5969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 1,
      sym_hexadecimal,
  [5976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      sym_hexadecimal,
  [5983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LBRACE,
  [5990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 1,
      sym_string,
  [5997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_LBRACE,
  [6004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 263,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 345,
  [SMALL_STATE(12)] = 375,
  [SMALL_STATE(13)] = 420,
  [SMALL_STATE(14)] = 465,
  [SMALL_STATE(15)] = 494,
  [SMALL_STATE(16)] = 539,
  [SMALL_STATE(17)] = 585,
  [SMALL_STATE(18)] = 631,
  [SMALL_STATE(19)] = 677,
  [SMALL_STATE(20)] = 723,
  [SMALL_STATE(21)] = 769,
  [SMALL_STATE(22)] = 815,
  [SMALL_STATE(23)] = 844,
  [SMALL_STATE(24)] = 884,
  [SMALL_STATE(25)] = 928,
  [SMALL_STATE(26)] = 972,
  [SMALL_STATE(27)] = 998,
  [SMALL_STATE(28)] = 1026,
  [SMALL_STATE(29)] = 1066,
  [SMALL_STATE(30)] = 1110,
  [SMALL_STATE(31)] = 1150,
  [SMALL_STATE(32)] = 1175,
  [SMALL_STATE(33)] = 1213,
  [SMALL_STATE(34)] = 1251,
  [SMALL_STATE(35)] = 1289,
  [SMALL_STATE(36)] = 1329,
  [SMALL_STATE(37)] = 1353,
  [SMALL_STATE(38)] = 1393,
  [SMALL_STATE(39)] = 1433,
  [SMALL_STATE(40)] = 1458,
  [SMALL_STATE(41)] = 1483,
  [SMALL_STATE(42)] = 1508,
  [SMALL_STATE(43)] = 1533,
  [SMALL_STATE(44)] = 1555,
  [SMALL_STATE(45)] = 1589,
  [SMALL_STATE(46)] = 1611,
  [SMALL_STATE(47)] = 1645,
  [SMALL_STATE(48)] = 1667,
  [SMALL_STATE(49)] = 1703,
  [SMALL_STATE(50)] = 1737,
  [SMALL_STATE(51)] = 1773,
  [SMALL_STATE(52)] = 1809,
  [SMALL_STATE(53)] = 1832,
  [SMALL_STATE(54)] = 1851,
  [SMALL_STATE(55)] = 1874,
  [SMALL_STATE(56)] = 1897,
  [SMALL_STATE(57)] = 1920,
  [SMALL_STATE(58)] = 1943,
  [SMALL_STATE(59)] = 1962,
  [SMALL_STATE(60)] = 1985,
  [SMALL_STATE(61)] = 2008,
  [SMALL_STATE(62)] = 2031,
  [SMALL_STATE(63)] = 2051,
  [SMALL_STATE(64)] = 2071,
  [SMALL_STATE(65)] = 2091,
  [SMALL_STATE(66)] = 2121,
  [SMALL_STATE(67)] = 2141,
  [SMALL_STATE(68)] = 2161,
  [SMALL_STATE(69)] = 2181,
  [SMALL_STATE(70)] = 2201,
  [SMALL_STATE(71)] = 2221,
  [SMALL_STATE(72)] = 2241,
  [SMALL_STATE(73)] = 2261,
  [SMALL_STATE(74)] = 2281,
  [SMALL_STATE(75)] = 2301,
  [SMALL_STATE(76)] = 2321,
  [SMALL_STATE(77)] = 2343,
  [SMALL_STATE(78)] = 2365,
  [SMALL_STATE(79)] = 2385,
  [SMALL_STATE(80)] = 2405,
  [SMALL_STATE(81)] = 2425,
  [SMALL_STATE(82)] = 2455,
  [SMALL_STATE(83)] = 2475,
  [SMALL_STATE(84)] = 2505,
  [SMALL_STATE(85)] = 2525,
  [SMALL_STATE(86)] = 2545,
  [SMALL_STATE(87)] = 2564,
  [SMALL_STATE(88)] = 2581,
  [SMALL_STATE(89)] = 2598,
  [SMALL_STATE(90)] = 2617,
  [SMALL_STATE(91)] = 2634,
  [SMALL_STATE(92)] = 2651,
  [SMALL_STATE(93)] = 2668,
  [SMALL_STATE(94)] = 2685,
  [SMALL_STATE(95)] = 2702,
  [SMALL_STATE(96)] = 2721,
  [SMALL_STATE(97)] = 2740,
  [SMALL_STATE(98)] = 2757,
  [SMALL_STATE(99)] = 2774,
  [SMALL_STATE(100)] = 2791,
  [SMALL_STATE(101)] = 2808,
  [SMALL_STATE(102)] = 2827,
  [SMALL_STATE(103)] = 2846,
  [SMALL_STATE(104)] = 2865,
  [SMALL_STATE(105)] = 2884,
  [SMALL_STATE(106)] = 2903,
  [SMALL_STATE(107)] = 2920,
  [SMALL_STATE(108)] = 2939,
  [SMALL_STATE(109)] = 2956,
  [SMALL_STATE(110)] = 2973,
  [SMALL_STATE(111)] = 2989,
  [SMALL_STATE(112)] = 3015,
  [SMALL_STATE(113)] = 3031,
  [SMALL_STATE(114)] = 3047,
  [SMALL_STATE(115)] = 3073,
  [SMALL_STATE(116)] = 3089,
  [SMALL_STATE(117)] = 3105,
  [SMALL_STATE(118)] = 3121,
  [SMALL_STATE(119)] = 3137,
  [SMALL_STATE(120)] = 3153,
  [SMALL_STATE(121)] = 3173,
  [SMALL_STATE(122)] = 3189,
  [SMALL_STATE(123)] = 3209,
  [SMALL_STATE(124)] = 3229,
  [SMALL_STATE(125)] = 3255,
  [SMALL_STATE(126)] = 3271,
  [SMALL_STATE(127)] = 3288,
  [SMALL_STATE(128)] = 3305,
  [SMALL_STATE(129)] = 3322,
  [SMALL_STATE(130)] = 3339,
  [SMALL_STATE(131)] = 3356,
  [SMALL_STATE(132)] = 3373,
  [SMALL_STATE(133)] = 3390,
  [SMALL_STATE(134)] = 3407,
  [SMALL_STATE(135)] = 3424,
  [SMALL_STATE(136)] = 3441,
  [SMALL_STATE(137)] = 3458,
  [SMALL_STATE(138)] = 3475,
  [SMALL_STATE(139)] = 3492,
  [SMALL_STATE(140)] = 3508,
  [SMALL_STATE(141)] = 3522,
  [SMALL_STATE(142)] = 3536,
  [SMALL_STATE(143)] = 3558,
  [SMALL_STATE(144)] = 3572,
  [SMALL_STATE(145)] = 3586,
  [SMALL_STATE(146)] = 3600,
  [SMALL_STATE(147)] = 3614,
  [SMALL_STATE(148)] = 3628,
  [SMALL_STATE(149)] = 3642,
  [SMALL_STATE(150)] = 3656,
  [SMALL_STATE(151)] = 3670,
  [SMALL_STATE(152)] = 3684,
  [SMALL_STATE(153)] = 3698,
  [SMALL_STATE(154)] = 3712,
  [SMALL_STATE(155)] = 3728,
  [SMALL_STATE(156)] = 3742,
  [SMALL_STATE(157)] = 3756,
  [SMALL_STATE(158)] = 3770,
  [SMALL_STATE(159)] = 3792,
  [SMALL_STATE(160)] = 3814,
  [SMALL_STATE(161)] = 3828,
  [SMALL_STATE(162)] = 3842,
  [SMALL_STATE(163)] = 3856,
  [SMALL_STATE(164)] = 3870,
  [SMALL_STATE(165)] = 3884,
  [SMALL_STATE(166)] = 3898,
  [SMALL_STATE(167)] = 3912,
  [SMALL_STATE(168)] = 3934,
  [SMALL_STATE(169)] = 3950,
  [SMALL_STATE(170)] = 3966,
  [SMALL_STATE(171)] = 3982,
  [SMALL_STATE(172)] = 3996,
  [SMALL_STATE(173)] = 4010,
  [SMALL_STATE(174)] = 4024,
  [SMALL_STATE(175)] = 4038,
  [SMALL_STATE(176)] = 4052,
  [SMALL_STATE(177)] = 4066,
  [SMALL_STATE(178)] = 4080,
  [SMALL_STATE(179)] = 4102,
  [SMALL_STATE(180)] = 4116,
  [SMALL_STATE(181)] = 4135,
  [SMALL_STATE(182)] = 4154,
  [SMALL_STATE(183)] = 4175,
  [SMALL_STATE(184)] = 4194,
  [SMALL_STATE(185)] = 4207,
  [SMALL_STATE(186)] = 4222,
  [SMALL_STATE(187)] = 4235,
  [SMALL_STATE(188)] = 4248,
  [SMALL_STATE(189)] = 4269,
  [SMALL_STATE(190)] = 4282,
  [SMALL_STATE(191)] = 4295,
  [SMALL_STATE(192)] = 4308,
  [SMALL_STATE(193)] = 4329,
  [SMALL_STATE(194)] = 4343,
  [SMALL_STATE(195)] = 4357,
  [SMALL_STATE(196)] = 4371,
  [SMALL_STATE(197)] = 4383,
  [SMALL_STATE(198)] = 4394,
  [SMALL_STATE(199)] = 4413,
  [SMALL_STATE(200)] = 4432,
  [SMALL_STATE(201)] = 4451,
  [SMALL_STATE(202)] = 4470,
  [SMALL_STATE(203)] = 4483,
  [SMALL_STATE(204)] = 4494,
  [SMALL_STATE(205)] = 4513,
  [SMALL_STATE(206)] = 4524,
  [SMALL_STATE(207)] = 4537,
  [SMALL_STATE(208)] = 4547,
  [SMALL_STATE(209)] = 4557,
  [SMALL_STATE(210)] = 4567,
  [SMALL_STATE(211)] = 4577,
  [SMALL_STATE(212)] = 4587,
  [SMALL_STATE(213)] = 4601,
  [SMALL_STATE(214)] = 4611,
  [SMALL_STATE(215)] = 4621,
  [SMALL_STATE(216)] = 4631,
  [SMALL_STATE(217)] = 4645,
  [SMALL_STATE(218)] = 4655,
  [SMALL_STATE(219)] = 4665,
  [SMALL_STATE(220)] = 4675,
  [SMALL_STATE(221)] = 4685,
  [SMALL_STATE(222)] = 4695,
  [SMALL_STATE(223)] = 4706,
  [SMALL_STATE(224)] = 4715,
  [SMALL_STATE(225)] = 4724,
  [SMALL_STATE(226)] = 4733,
  [SMALL_STATE(227)] = 4742,
  [SMALL_STATE(228)] = 4753,
  [SMALL_STATE(229)] = 4764,
  [SMALL_STATE(230)] = 4775,
  [SMALL_STATE(231)] = 4786,
  [SMALL_STATE(232)] = 4795,
  [SMALL_STATE(233)] = 4806,
  [SMALL_STATE(234)] = 4815,
  [SMALL_STATE(235)] = 4826,
  [SMALL_STATE(236)] = 4837,
  [SMALL_STATE(237)] = 4848,
  [SMALL_STATE(238)] = 4861,
  [SMALL_STATE(239)] = 4872,
  [SMALL_STATE(240)] = 4881,
  [SMALL_STATE(241)] = 4890,
  [SMALL_STATE(242)] = 4899,
  [SMALL_STATE(243)] = 4912,
  [SMALL_STATE(244)] = 4921,
  [SMALL_STATE(245)] = 4932,
  [SMALL_STATE(246)] = 4945,
  [SMALL_STATE(247)] = 4954,
  [SMALL_STATE(248)] = 4963,
  [SMALL_STATE(249)] = 4974,
  [SMALL_STATE(250)] = 4983,
  [SMALL_STATE(251)] = 4993,
  [SMALL_STATE(252)] = 5003,
  [SMALL_STATE(253)] = 5013,
  [SMALL_STATE(254)] = 5023,
  [SMALL_STATE(255)] = 5033,
  [SMALL_STATE(256)] = 5043,
  [SMALL_STATE(257)] = 5053,
  [SMALL_STATE(258)] = 5063,
  [SMALL_STATE(259)] = 5073,
  [SMALL_STATE(260)] = 5083,
  [SMALL_STATE(261)] = 5093,
  [SMALL_STATE(262)] = 5103,
  [SMALL_STATE(263)] = 5113,
  [SMALL_STATE(264)] = 5123,
  [SMALL_STATE(265)] = 5133,
  [SMALL_STATE(266)] = 5143,
  [SMALL_STATE(267)] = 5151,
  [SMALL_STATE(268)] = 5159,
  [SMALL_STATE(269)] = 5169,
  [SMALL_STATE(270)] = 5177,
  [SMALL_STATE(271)] = 5187,
  [SMALL_STATE(272)] = 5197,
  [SMALL_STATE(273)] = 5207,
  [SMALL_STATE(274)] = 5217,
  [SMALL_STATE(275)] = 5227,
  [SMALL_STATE(276)] = 5237,
  [SMALL_STATE(277)] = 5247,
  [SMALL_STATE(278)] = 5257,
  [SMALL_STATE(279)] = 5267,
  [SMALL_STATE(280)] = 5277,
  [SMALL_STATE(281)] = 5287,
  [SMALL_STATE(282)] = 5297,
  [SMALL_STATE(283)] = 5307,
  [SMALL_STATE(284)] = 5317,
  [SMALL_STATE(285)] = 5327,
  [SMALL_STATE(286)] = 5335,
  [SMALL_STATE(287)] = 5343,
  [SMALL_STATE(288)] = 5353,
  [SMALL_STATE(289)] = 5363,
  [SMALL_STATE(290)] = 5373,
  [SMALL_STATE(291)] = 5383,
  [SMALL_STATE(292)] = 5393,
  [SMALL_STATE(293)] = 5403,
  [SMALL_STATE(294)] = 5413,
  [SMALL_STATE(295)] = 5423,
  [SMALL_STATE(296)] = 5433,
  [SMALL_STATE(297)] = 5443,
  [SMALL_STATE(298)] = 5453,
  [SMALL_STATE(299)] = 5463,
  [SMALL_STATE(300)] = 5473,
  [SMALL_STATE(301)] = 5483,
  [SMALL_STATE(302)] = 5493,
  [SMALL_STATE(303)] = 5500,
  [SMALL_STATE(304)] = 5507,
  [SMALL_STATE(305)] = 5514,
  [SMALL_STATE(306)] = 5521,
  [SMALL_STATE(307)] = 5528,
  [SMALL_STATE(308)] = 5535,
  [SMALL_STATE(309)] = 5542,
  [SMALL_STATE(310)] = 5549,
  [SMALL_STATE(311)] = 5556,
  [SMALL_STATE(312)] = 5563,
  [SMALL_STATE(313)] = 5570,
  [SMALL_STATE(314)] = 5577,
  [SMALL_STATE(315)] = 5584,
  [SMALL_STATE(316)] = 5591,
  [SMALL_STATE(317)] = 5598,
  [SMALL_STATE(318)] = 5605,
  [SMALL_STATE(319)] = 5612,
  [SMALL_STATE(320)] = 5619,
  [SMALL_STATE(321)] = 5626,
  [SMALL_STATE(322)] = 5633,
  [SMALL_STATE(323)] = 5640,
  [SMALL_STATE(324)] = 5647,
  [SMALL_STATE(325)] = 5654,
  [SMALL_STATE(326)] = 5661,
  [SMALL_STATE(327)] = 5668,
  [SMALL_STATE(328)] = 5675,
  [SMALL_STATE(329)] = 5682,
  [SMALL_STATE(330)] = 5689,
  [SMALL_STATE(331)] = 5696,
  [SMALL_STATE(332)] = 5703,
  [SMALL_STATE(333)] = 5710,
  [SMALL_STATE(334)] = 5717,
  [SMALL_STATE(335)] = 5724,
  [SMALL_STATE(336)] = 5731,
  [SMALL_STATE(337)] = 5738,
  [SMALL_STATE(338)] = 5745,
  [SMALL_STATE(339)] = 5752,
  [SMALL_STATE(340)] = 5759,
  [SMALL_STATE(341)] = 5766,
  [SMALL_STATE(342)] = 5773,
  [SMALL_STATE(343)] = 5780,
  [SMALL_STATE(344)] = 5787,
  [SMALL_STATE(345)] = 5794,
  [SMALL_STATE(346)] = 5801,
  [SMALL_STATE(347)] = 5808,
  [SMALL_STATE(348)] = 5815,
  [SMALL_STATE(349)] = 5822,
  [SMALL_STATE(350)] = 5829,
  [SMALL_STATE(351)] = 5836,
  [SMALL_STATE(352)] = 5843,
  [SMALL_STATE(353)] = 5850,
  [SMALL_STATE(354)] = 5857,
  [SMALL_STATE(355)] = 5864,
  [SMALL_STATE(356)] = 5871,
  [SMALL_STATE(357)] = 5878,
  [SMALL_STATE(358)] = 5885,
  [SMALL_STATE(359)] = 5892,
  [SMALL_STATE(360)] = 5899,
  [SMALL_STATE(361)] = 5906,
  [SMALL_STATE(362)] = 5913,
  [SMALL_STATE(363)] = 5920,
  [SMALL_STATE(364)] = 5927,
  [SMALL_STATE(365)] = 5934,
  [SMALL_STATE(366)] = 5941,
  [SMALL_STATE(367)] = 5948,
  [SMALL_STATE(368)] = 5955,
  [SMALL_STATE(369)] = 5962,
  [SMALL_STATE(370)] = 5969,
  [SMALL_STATE(371)] = 5976,
  [SMALL_STATE(372)] = 5983,
  [SMALL_STATE(373)] = 5990,
  [SMALL_STATE(374)] = 5997,
  [SMALL_STATE(375)] = 6004,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(365),
  [7] = {.count = 1, .reusable = true}, SHIFT(364),
  [9] = {.count = 1, .reusable = true}, SHIFT(354),
  [11] = {.count = 1, .reusable = true}, SHIFT(79),
  [13] = {.count = 1, .reusable = true}, SHIFT(78),
  [15] = {.count = 1, .reusable = true}, SHIFT(75),
  [17] = {.count = 1, .reusable = true}, SHIFT(74),
  [19] = {.count = 1, .reusable = true}, SHIFT(73),
  [21] = {.count = 1, .reusable = true}, SHIFT(71),
  [23] = {.count = 1, .reusable = true}, SHIFT(70),
  [25] = {.count = 1, .reusable = true}, SHIFT(69),
  [27] = {.count = 1, .reusable = true}, SHIFT(68),
  [29] = {.count = 1, .reusable = true}, SHIFT(67),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(250),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 3),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 3),
  [41] = {.count = 1, .reusable = true}, SHIFT(92),
  [43] = {.count = 1, .reusable = true}, SHIFT(5),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(5),
  [50] = {.count = 1, .reusable = true}, SHIFT(93),
  [52] = {.count = 1, .reusable = true}, SHIFT(4),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [56] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 1),
  [58] = {.count = 1, .reusable = true}, SHIFT(331),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [66] = {.count = 1, .reusable = true}, SHIFT(277),
  [68] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(79),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(78),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(75),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(74),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(73),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(71),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(70),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(69),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(68),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(67),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 3),
  [104] = {.count = 1, .reusable = true}, SHIFT(125),
  [106] = {.count = 1, .reusable = true}, SHIFT(55),
  [108] = {.count = 1, .reusable = false}, SHIFT(56),
  [110] = {.count = 1, .reusable = true}, SHIFT(57),
  [112] = {.count = 1, .reusable = true}, SHIFT(52),
  [114] = {.count = 1, .reusable = true}, SHIFT(59),
  [116] = {.count = 1, .reusable = true}, SHIFT(60),
  [118] = {.count = 1, .reusable = true}, SHIFT(61),
  [120] = {.count = 1, .reusable = true}, SHIFT(54),
  [122] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(55),
  [127] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(56),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(57),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(52),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(59),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(60),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(61),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(54),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [152] = {.count = 1, .reusable = true}, SHIFT(113),
  [154] = {.count = 1, .reusable = true}, SHIFT(179),
  [156] = {.count = 1, .reusable = true}, SHIFT(2),
  [158] = {.count = 1, .reusable = true}, SHIFT(22),
  [160] = {.count = 1, .reusable = true}, SHIFT(9),
  [162] = {.count = 1, .reusable = true}, SHIFT(96),
  [164] = {.count = 1, .reusable = true}, SHIFT(95),
  [166] = {.count = 1, .reusable = true}, SHIFT(7),
  [168] = {.count = 1, .reusable = true}, SHIFT(89),
  [170] = {.count = 1, .reusable = true}, SHIFT(27),
  [172] = {.count = 1, .reusable = true}, SHIFT(102),
  [174] = {.count = 1, .reusable = true}, SHIFT(143),
  [176] = {.count = 1, .reusable = true}, SHIFT(107),
  [178] = {.count = 1, .reusable = true}, SHIFT(105),
  [180] = {.count = 1, .reusable = true}, SHIFT(103),
  [182] = {.count = 1, .reusable = true}, SHIFT(101),
  [184] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(22),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(96),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(95),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(89),
  [207] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(27),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(102),
  [213] = {.count = 1, .reusable = true}, SHIFT(156),
  [215] = {.count = 1, .reusable = true}, SHIFT(162),
  [217] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(22),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(27),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(107),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(105),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(103),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(101),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 1),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 1),
  [250] = {.count = 1, .reusable = true}, SHIFT(337),
  [252] = {.count = 1, .reusable = true}, SHIFT(220),
  [254] = {.count = 1, .reusable = true}, SHIFT(351),
  [256] = {.count = 1, .reusable = true}, SHIFT(355),
  [258] = {.count = 1, .reusable = true}, SHIFT(357),
  [260] = {.count = 1, .reusable = true}, SHIFT(358),
  [262] = {.count = 1, .reusable = true}, SHIFT(359),
  [264] = {.count = 1, .reusable = true}, SHIFT(360),
  [266] = {.count = 1, .reusable = true}, SHIFT(45),
  [268] = {.count = 1, .reusable = true}, SHIFT(148),
  [270] = {.count = 1, .reusable = true}, SHIFT(77),
  [272] = {.count = 1, .reusable = true}, SHIFT(76),
  [274] = {.count = 1, .reusable = true}, SHIFT(40),
  [276] = {.count = 1, .reusable = false}, SHIFT(120),
  [278] = {.count = 1, .reusable = true}, SHIFT(122),
  [280] = {.count = 1, .reusable = true}, SHIFT(123),
  [282] = {.count = 1, .reusable = true}, SHIFT(153),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 3),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 3),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [292] = {.count = 1, .reusable = true}, SHIFT(229),
  [294] = {.count = 1, .reusable = true}, SHIFT(213),
  [296] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(2),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(77),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(76),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(7),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(40),
  [313] = {.count = 2, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(120),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(122),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(123),
  [322] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [324] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(351),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(355),
  [330] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(357),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(358),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(359),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(360),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(45),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [349] = {.count = 1, .reusable = true}, SHIFT(208),
  [351] = {.count = 1, .reusable = true}, SHIFT(137),
  [353] = {.count = 1, .reusable = true}, SHIFT(135),
  [355] = {.count = 1, .reusable = true}, SHIFT(138),
  [357] = {.count = 1, .reusable = true}, SHIFT(126),
  [359] = {.count = 1, .reusable = true}, SHIFT(132),
  [361] = {.count = 1, .reusable = true}, SHIFT(129),
  [363] = {.count = 1, .reusable = true}, SHIFT(128),
  [365] = {.count = 1, .reusable = true}, SHIFT(207),
  [367] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(137),
  [372] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(135),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(138),
  [378] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(126),
  [381] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(132),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(129),
  [387] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(128),
  [390] = {.count = 1, .reusable = true}, SHIFT(166),
  [392] = {.count = 1, .reusable = true}, SHIFT(133),
  [394] = {.count = 1, .reusable = true}, SHIFT(134),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym__float_positive, 1, .production_id = 5),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym__float_positive, 1, .production_id = 5),
  [400] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2),
  [402] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [405] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(22),
  [408] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [411] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(40),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(133),
  [417] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(27),
  [420] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(134),
  [423] = {.count = 1, .reusable = true}, SHIFT(161),
  [425] = {.count = 1, .reusable = true}, SHIFT(171),
  [427] = {.count = 1, .reusable = true}, SHIFT(47),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 1),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size, 1),
  [433] = {.count = 1, .reusable = true}, SHIFT(330),
  [435] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2), SHIFT_REPEAT(47),
  [440] = {.count = 1, .reusable = true}, SHIFT(164),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 5),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size, 5),
  [446] = {.count = 1, .reusable = true}, SHIFT(152),
  [448] = {.count = 1, .reusable = true}, SHIFT(139),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 1),
  [452] = {.count = 1, .reusable = true}, SHIFT(343),
  [454] = {.count = 1, .reusable = true}, SHIFT(157),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 1),
  [458] = {.count = 1, .reusable = true}, SHIFT(374),
  [460] = {.count = 1, .reusable = true}, SHIFT(233),
  [462] = {.count = 1, .reusable = true}, SHIFT(366),
  [464] = {.count = 1, .reusable = true}, SHIFT(154),
  [466] = {.count = 1, .reusable = true}, SHIFT(168),
  [468] = {.count = 1, .reusable = true}, SHIFT(169),
  [470] = {.count = 1, .reusable = true}, SHIFT(170),
  [472] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(2),
  [477] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(77),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(76),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(139),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(9),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(7),
  [492] = {.count = 1, .reusable = true}, SHIFT(249),
  [494] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(366),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(154),
  [502] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(168),
  [505] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(45),
  [508] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(169),
  [511] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(170),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [516] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [518] = {.count = 1, .reusable = true}, SHIFT(293),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [526] = {.count = 1, .reusable = true}, SHIFT(322),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [530] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [532] = {.count = 1, .reusable = true}, SHIFT(325),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [538] = {.count = 1, .reusable = true}, SHIFT(324),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [544] = {.count = 1, .reusable = true}, SHIFT(228),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 7),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 1),
  [550] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 1),
  [552] = {.count = 1, .reusable = true}, SHIFT(323),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [556] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [558] = {.count = 1, .reusable = true}, SHIFT(225),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [564] = {.count = 1, .reusable = true}, SHIFT(224),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [568] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [572] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [574] = {.count = 1, .reusable = true}, SHIFT(151),
  [576] = {.count = 1, .reusable = true}, SHIFT(185),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [580] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [584] = {.count = 1, .reusable = true}, SHIFT(270),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [588] = {.count = 1, .reusable = true}, SHIFT(271),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [592] = {.count = 1, .reusable = true}, SHIFT(282),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [596] = {.count = 1, .reusable = true}, SHIFT(327),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [600] = {.count = 1, .reusable = true}, SHIFT(321),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [604] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [608] = {.count = 1, .reusable = true}, SHIFT(302),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [612] = {.count = 1, .reusable = true}, SHIFT(315),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [616] = {.count = 1, .reusable = true}, SHIFT(313),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [622] = {.count = 1, .reusable = true}, SHIFT(334),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [628] = {.count = 1, .reusable = true}, SHIFT(333),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [632] = {.count = 1, .reusable = true}, SHIFT(318),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [636] = {.count = 1, .reusable = true}, SHIFT(319),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [640] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [642] = {.count = 1, .reusable = true}, SHIFT(173),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 5),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 5),
  [648] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(22),
  [656] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [659] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(185),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [667] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [671] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [683] = {.count = 1, .reusable = true}, SHIFT(284),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [697] = {.count = 1, .reusable = true}, SHIFT(281),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [701] = {.count = 1, .reusable = true}, SHIFT(280),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [707] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [709] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 1),
  [713] = {.count = 1, .reusable = true}, SHIFT(265),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 1),
  [717] = {.count = 1, .reusable = true}, SHIFT(227),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 1),
  [721] = {.count = 1, .reusable = true}, SHIFT(244),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [725] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [727] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 1),
  [729] = {.count = 1, .reusable = true}, SHIFT(238),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [733] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 1),
  [735] = {.count = 1, .reusable = true}, SHIFT(268),
  [737] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [741] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 3),
  [743] = {.count = 1, .reusable = true}, SHIFT(247),
  [745] = {.count = 1, .reusable = true}, SHIFT(195),
  [747] = {.count = 1, .reusable = true}, SHIFT(193),
  [749] = {.count = 1, .reusable = true}, SHIFT(194),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 3),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [755] = {.count = 1, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2),
  [757] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(2),
  [760] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(195),
  [763] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(193),
  [766] = {.count = 2, .reusable = true}, REDUCE(aux_sym__pdxmesh_block_repeat1, 2), SHIFT_REPEAT(194),
  [769] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 3),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 3),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_transparencecheck, 3),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 1),
  [781] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 1),
  [783] = {.count = 1, .reusable = true}, SHIFT(344),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 1),
  [789] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 1),
  [791] = {.count = 1, .reusable = true}, SHIFT(345),
  [793] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 1),
  [795] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 1),
  [797] = {.count = 1, .reusable = true}, SHIFT(248),
  [799] = {.count = 1, .reusable = true}, SHIFT(226),
  [801] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 1),
  [805] = {.count = 1, .reusable = true}, SHIFT(308),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 3),
  [809] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 3),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [813] = {.count = 1, .reusable = true}, SHIFT(311),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 1),
  [817] = {.count = 1, .reusable = true}, SHIFT(310),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 7),
  [821] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 7),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 7),
  [825] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 7),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 1),
  [829] = {.count = 1, .reusable = true}, SHIFT(309),
  [831] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 1),
  [833] = {.count = 1, .reusable = true}, SHIFT(332),
  [835] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 1),
  [837] = {.count = 1, .reusable = true}, SHIFT(222),
  [839] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 1),
  [841] = {.count = 1, .reusable = true}, SHIFT(307),
  [843] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [845] = {.count = 1, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [847] = {.count = 1, .reusable = true}, SHIFT(372),
  [849] = {.count = 1, .reusable = true}, SHIFT(375),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [853] = {.count = 1, .reusable = true}, SHIFT(342),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 3),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 5),
  [859] = {.count = 1, .reusable = true}, SHIFT(243),
  [861] = {.count = 1, .reusable = true}, SHIFT(206),
  [863] = {.count = 1, .reusable = true}, SHIFT(202),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 2),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype, 3),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 3),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 3),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 3),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 2),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 3),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 2),
  [883] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 2),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 3),
  [887] = {.count = 1, .reusable = true}, SHIFT(289),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 5),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 3),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 3),
  [895] = {.count = 1, .reusable = true}, SHIFT(223),
  [897] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [899] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(365),
  [902] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(364),
  [905] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(354),
  [908] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 3),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [912] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 1, .production_id = 4),
  [914] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 2),
  [916] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 2),
  [918] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2),
  [920] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(2),
  [923] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(206),
  [926] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(202),
  [929] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 1),
  [931] = {.count = 1, .reusable = true}, SHIFT(373),
  [933] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 1),
  [935] = {.count = 1, .reusable = true}, SHIFT(371),
  [937] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 1),
  [939] = {.count = 1, .reusable = true}, SHIFT(370),
  [941] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 3),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 3),
  [945] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 3),
  [947] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [949] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 3),
  [951] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 3),
  [953] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 3),
  [955] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [957] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [959] = {.count = 1, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2),
  [961] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(362),
  [964] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(356),
  [967] = {.count = 1, .reusable = true}, SHIFT(214),
  [969] = {.count = 1, .reusable = true}, SHIFT(362),
  [971] = {.count = 1, .reusable = true}, SHIFT(356),
  [973] = {.count = 1, .reusable = true}, SHIFT(211),
  [975] = {.count = 1, .reusable = true}, SHIFT(367),
  [977] = {.count = 1, .reusable = true}, SHIFT(221),
  [979] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [981] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 1),
  [983] = {.count = 1, .reusable = true}, SHIFT(312),
  [985] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 1, .production_id = 4),
  [987] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2),
  [989] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(366),
  [992] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(367),
  [995] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 3),
  [997] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 3),
  [999] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 3),
  [1001] = {.count = 1, .reusable = true}, SHIFT(215),
  [1003] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 1),
  [1005] = {.count = 1, .reusable = true}, SHIFT(320),
  [1007] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 1),
  [1009] = {.count = 1, .reusable = true}, SHIFT(296),
  [1011] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 1),
  [1013] = {.count = 1, .reusable = true}, SHIFT(304),
  [1015] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 3),
  [1017] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_file, 3),
  [1019] = {.count = 1, .reusable = true}, SHIFT(232),
  [1021] = {.count = 1, .reusable = true}, SHIFT(236),
  [1023] = {.count = 1, .reusable = true}, SHIFT(235),
  [1025] = {.count = 1, .reusable = true}, SHIFT(234),
  [1027] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 1),
  [1029] = {.count = 1, .reusable = true}, SHIFT(255),
  [1031] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pdxmesh_animation, 6),
  [1033] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_scale, 3),
  [1035] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 1),
  [1037] = {.count = 1, .reusable = true}, SHIFT(257),
  [1039] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 3),
  [1041] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 2),
  [1043] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 3),
  [1045] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 3),
  [1047] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 3),
  [1049] = {.count = 1, .reusable = true}, SHIFT(84),
  [1051] = {.count = 1, .reusable = true}, SHIFT(216),
  [1053] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [1055] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 2),
  [1057] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 2),
  [1059] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [1061] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(216),
  [1064] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [1066] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 3),
  [1068] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 3),
  [1070] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [1072] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 3),
  [1074] = {.count = 1, .reusable = true}, SHIFT(172),
  [1076] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 3),
  [1078] = {.count = 1, .reusable = true}, SHIFT(63),
  [1080] = {.count = 1, .reusable = true}, SHIFT(66),
  [1082] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 3),
  [1084] = {.count = 1, .reusable = true}, SHIFT(117),
  [1086] = {.count = 1, .reusable = true}, SHIFT(62),
  [1088] = {.count = 1, .reusable = true}, SHIFT(31),
  [1090] = {.count = 1, .reusable = true}, SHIFT(212),
  [1092] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 3),
  [1094] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 1),
  [1096] = {.count = 1, .reusable = true}, SHIFT(254),
  [1098] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 3),
  [1100] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 1),
  [1102] = {.count = 1, .reusable = true}, SHIFT(306),
  [1104] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 1),
  [1106] = {.count = 1, .reusable = true}, SHIFT(305),
  [1108] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 1),
  [1110] = {.count = 1, .reusable = true}, SHIFT(253),
  [1112] = {.count = 1, .reusable = true}, SHIFT(94),
  [1114] = {.count = 1, .reusable = true}, SHIFT(269),
  [1116] = {.count = 1, .reusable = true}, SHIFT(115),
  [1118] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_type, 1, .production_id = 2),
  [1120] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh, 3),
  [1122] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 3),
  [1124] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [1126] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(269),
  [1129] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 2),
  [1131] = {.count = 1, .reusable = true}, SHIFT(112),
  [1133] = {.count = 1, .reusable = true}, SHIFT(90),
  [1135] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [1137] = {.count = 1, .reusable = true}, REDUCE(sym__pdxmesh_block, 2),
  [1139] = {.count = 1, .reusable = true}, SHIFT(127),
  [1141] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 2),
  [1143] = {.count = 1, .reusable = true}, SHIFT(3),
  [1145] = {.count = 1, .reusable = false}, SHIFT(3),
  [1147] = {.count = 1, .reusable = true}, SHIFT(50),
  [1149] = {.count = 1, .reusable = true}, SHIFT(246),
  [1151] = {.count = 1, .reusable = true}, SHIFT(32),
  [1153] = {.count = 1, .reusable = true}, SHIFT(287),
  [1155] = {.count = 1, .reusable = true}, SHIFT(36),
  [1157] = {.count = 1, .reusable = true}, SHIFT(42),
  [1159] = {.count = 1, .reusable = true}, SHIFT(24),
  [1161] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 1),
  [1163] = {.count = 1, .reusable = true}, SHIFT(336),
  [1165] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 3),
  [1167] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 3),
  [1169] = {.count = 1, .reusable = true}, SHIFT(116),
  [1171] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 3),
  [1173] = {.count = 1, .reusable = true}, SHIFT(245),
  [1175] = {.count = 1, .reusable = true}, SHIFT(6),
  [1177] = {.count = 1, .reusable = true}, SHIFT(20),
  [1179] = {.count = 1, .reusable = true}, SHIFT(65),
  [1181] = {.count = 1, .reusable = true}, SHIFT(35),
  [1183] = {.count = 1, .reusable = true}, SHIFT(14),
  [1185] = {.count = 1, .reusable = true}, SHIFT(121),
  [1187] = {.count = 1, .reusable = true}, SHIFT(119),
  [1189] = {.count = 1, .reusable = true}, SHIFT(108),
  [1191] = {.count = 1, .reusable = true}, SHIFT(142),
  [1193] = {.count = 1, .reusable = true}, SHIFT(15),
  [1195] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 3),
  [1197] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 3),
  [1199] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 1),
  [1201] = {.count = 1, .reusable = true}, SHIFT(314),
  [1203] = {.count = 1, .reusable = true}, SHIFT(261),
  [1205] = {.count = 1, .reusable = true}, SHIFT(186),
  [1207] = {.count = 1, .reusable = false}, SHIFT(186),
  [1209] = {.count = 1, .reusable = true}, SHIFT(28),
  [1211] = {.count = 1, .reusable = true}, SHIFT(44),
  [1213] = {.count = 1, .reusable = true}, SHIFT(64),
  [1215] = {.count = 1, .reusable = true}, SHIFT(17),
  [1217] = {.count = 1, .reusable = true}, SHIFT(181),
  [1219] = {.count = 1, .reusable = true}, SHIFT(192),
  [1221] = {.count = 1, .reusable = true}, SHIFT(111),
  [1223] = {.count = 1, .reusable = true}, SHIFT(99),
  [1225] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_integer, 2),
  [1227] = {.count = 1, .reusable = true}, SHIFT(256),
  [1229] = {.count = 1, .reusable = true}, SHIFT(286),
  [1231] = {.count = 1, .reusable = true}, SHIFT(285),
  [1233] = {.count = 1, .reusable = true}, SHIFT(177),
  [1235] = {.count = 1, .reusable = true}, SHIFT(176),
  [1237] = {.count = 1, .reusable = true}, SHIFT(204),
  [1239] = {.count = 1, .reusable = true}, SHIFT(175),
  [1241] = {.count = 1, .reusable = true}, SHIFT(174),
  [1243] = {.count = 1, .reusable = true}, SHIFT(196),
  [1245] = {.count = 1, .reusable = true}, SHIFT(97),
  [1247] = {.count = 1, .reusable = true}, SHIFT(335),
  [1249] = {.count = 1, .reusable = true}, SHIFT(98),
  [1251] = {.count = 1, .reusable = true}, SHIFT(203),
  [1253] = {.count = 1, .reusable = true}, SHIFT(338),
  [1255] = {.count = 1, .reusable = true}, SHIFT(91),
  [1257] = {.count = 1, .reusable = true}, SHIFT(88),
  [1259] = {.count = 1, .reusable = true}, SHIFT(197),
  [1261] = {.count = 1, .reusable = true}, SHIFT(100),
  [1263] = {.count = 1, .reusable = true}, SHIFT(230),
  [1265] = {.count = 1, .reusable = true}, SHIFT(198),
  [1267] = {.count = 1, .reusable = true}, SHIFT(80),
  [1269] = {.count = 1, .reusable = true}, SHIFT(85),
  [1271] = {.count = 1, .reusable = true}, SHIFT(317),
  [1273] = {.count = 1, .reusable = true}, SHIFT(106),
  [1275] = {.count = 1, .reusable = true}, SHIFT(130),
  [1277] = {.count = 1, .reusable = true}, SHIFT(131),
  [1279] = {.count = 1, .reusable = true}, SHIFT(201),
  [1281] = {.count = 1, .reusable = true}, SHIFT(11),
  [1283] = {.count = 1, .reusable = true}, SHIFT(199),
  [1285] = {.count = 1, .reusable = true}, SHIFT(86),
  [1287] = {.count = 1, .reusable = true}, SHIFT(104),
  [1289] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_id, 3),
  [1291] = {.count = 1, .reusable = true}, SHIFT(348),
  [1293] = {.count = 1, .reusable = true}, SHIFT(26),
  [1295] = {.count = 1, .reusable = true}, SHIFT(58),
  [1297] = {.count = 1, .reusable = true}, SHIFT(141),
  [1299] = {.count = 1, .reusable = true}, SHIFT(43),
  [1301] = {.count = 1, .reusable = true}, SHIFT(82),
  [1303] = {.count = 1, .reusable = true}, SHIFT(184),
  [1305] = {.count = 1, .reusable = true}, SHIFT(363),
  [1307] = {.count = 1, .reusable = true}, SHIFT(263),
  [1309] = {.count = 1, .reusable = true}, SHIFT(275),
  [1311] = {.count = 1, .reusable = true}, SHIFT(326),
  [1313] = {.count = 1, .reusable = true}, SHIFT(155),
  [1315] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_type, 3),
  [1317] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [1319] = {.count = 1, .reusable = true}, SHIFT(53),
  [1321] = {.count = 1, .reusable = true}, SHIFT(272),
  [1323] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1325] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_float, 2),
  [1327] = {.count = 1, .reusable = true}, SHIFT(298),
  [1329] = {.count = 1, .reusable = true}, SHIFT(273),
  [1331] = {.count = 1, .reusable = true}, SHIFT(299),
  [1333] = {.count = 1, .reusable = true}, SHIFT(274),
  [1335] = {.count = 1, .reusable = true}, SHIFT(292),
  [1337] = {.count = 1, .reusable = true}, SHIFT(295),
  [1339] = {.count = 1, .reusable = true}, SHIFT(259),
  [1341] = {.count = 1, .reusable = true}, SHIFT(350),
  [1343] = {.count = 1, .reusable = true}, SHIFT(283),
  [1345] = {.count = 1, .reusable = true}, SHIFT(361),
  [1347] = {.count = 1, .reusable = true}, SHIFT(297),
  [1349] = {.count = 1, .reusable = true}, SHIFT(291),
  [1351] = {.count = 1, .reusable = true}, SHIFT(258),
  [1353] = {.count = 1, .reusable = true}, SHIFT(252),
  [1355] = {.count = 1, .reusable = true}, SHIFT(160),
  [1357] = {.count = 1, .reusable = true}, SHIFT(165),
  [1359] = {.count = 1, .reusable = true}, SHIFT(191),
  [1361] = {.count = 1, .reusable = true}, SHIFT(190),
  [1363] = {.count = 1, .reusable = true}, SHIFT(200),
  [1365] = {.count = 1, .reusable = true}, SHIFT(189),
  [1367] = {.count = 1, .reusable = true}, SHIFT(346),
  [1369] = {.count = 1, .reusable = true}, SHIFT(260),
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
