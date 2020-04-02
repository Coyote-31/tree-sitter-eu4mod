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
#define STATE_COUNT 346
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 254
#define ALIAS_COUNT 4
#define TOKEN_COUNT 136
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
  anon_sym_name = 15,
  anon_sym_x = 16,
  anon_sym_y = 17,
  anon_sym_path = 18,
  anon_sym_archive = 19,
  aux_sym__statement_mod_archive_token1 = 20,
  anon_sym_remote_file_id = 21,
  aux_sym__statement_mod_remote_file_id_token1 = 22,
  anon_sym_version = 23,
  aux_sym__statement_mod_version_token1 = 24,
  anon_sym_picture = 25,
  aux_sym__statement_mod_picture_token1 = 26,
  anon_sym_supported_version = 27,
  aux_sym__statement_mod_supported_version_token1 = 28,
  anon_sym_replace_path = 29,
  aux_sym__mod_replace_path_folder_token1 = 30,
  anon_sym_tags = 31,
  aux_sym__mod_tags_keyword_token1 = 32,
  aux_sym__mod_tags_keyword_token2 = 33,
  aux_sym__mod_tags_keyword_token3 = 34,
  aux_sym__mod_tags_keyword_token4 = 35,
  aux_sym__mod_tags_keyword_token5 = 36,
  aux_sym__mod_tags_keyword_token6 = 37,
  aux_sym__mod_tags_keyword_token7 = 38,
  aux_sym__mod_tags_keyword_token8 = 39,
  aux_sym__mod_tags_keyword_token9 = 40,
  aux_sym__mod_tags_keyword_token10 = 41,
  aux_sym__mod_tags_keyword_token11 = 42,
  aux_sym__mod_tags_keyword_token12 = 43,
  aux_sym__mod_tags_keyword_token13 = 44,
  aux_sym__mod_tags_keyword_token14 = 45,
  aux_sym__mod_tags_keyword_token15 = 46,
  aux_sym__mod_tags_keyword_token16 = 47,
  aux_sym__mod_tags_keyword_token17 = 48,
  aux_sym__mod_tags_keyword_token18 = 49,
  aux_sym__mod_tags_keyword_token19 = 50,
  aux_sym__mod_tags_keyword_token20 = 51,
  aux_sym__mod_tags_keyword_token21 = 52,
  aux_sym__mod_tags_keyword_token22 = 53,
  anon_sym_dependencies = 54,
  aux_sym__statement_gfx_name_token1 = 55,
  aux_sym__statement_gfx_name_token2 = 56,
  anon_sym_cursor_offset = 57,
  aux_sym__statement_gfx_textureFile_token1 = 58,
  aux_sym__statement_gfx_textureFile_token2 = 59,
  aux_sym__statement_gfx_textureFile1_token1 = 60,
  aux_sym__statement_gfx_textureFile2_token1 = 61,
  aux_sym__statement_gfx_textureFile3_token1 = 62,
  anon_sym_noOfFrames = 63,
  anon_sym_overlay_frames_per_row = 64,
  anon_sym_overlay_rows = 65,
  anon_sym_effectFile = 66,
  aux_sym__statement_gfx_effectFile_token1 = 67,
  anon_sym_animation = 68,
  anon_sym_animationmaskfile = 69,
  anon_sym_animationtexturefile = 70,
  aux_sym__animation_entry_dds_token1 = 71,
  anon_sym_animationrotation = 72,
  anon_sym_animationlooping = 73,
  anon_sym_animationtime = 74,
  anon_sym_animationdelay = 75,
  anon_sym_animationrotationoffset = 76,
  anon_sym_animationtexturescale = 77,
  anon_sym_animationblendmode = 78,
  anon_sym_DQUOTEadd_DQUOTE = 79,
  anon_sym_DQUOTEmultiply_DQUOTE = 80,
  anon_sym_DQUOTEoverlay_DQUOTE = 81,
  anon_sym_animationtype = 82,
  anon_sym_DQUOTEscrolling_DQUOTE = 83,
  anon_sym_DQUOTErotating_DQUOTE = 84,
  anon_sym_DQUOTEpulsing_DQUOTE = 85,
  anon_sym_animationframes = 86,
  anon_sym_size = 87,
  anon_sym_borderSize = 88,
  anon_sym_allwaystransparent = 89,
  anon_sym_legacy_lazy_load = 90,
  anon_sym_clicksound = 91,
  anon_sym_click = 92,
  anon_sym_speed = 93,
  anon_sym_textblock = 94,
  anon_sym_text = 95,
  anon_sym_color = 96,
  anon_sym_colortwo = 97,
  anon_sym_font = 98,
  anon_sym_position = 99,
  anon_sym_format = 100,
  anon_sym_centre = 101,
  anon_sym_cull_distance = 102,
  aux_sym__statement_gfx_cull_distance_token1 = 103,
  anon_sym_B = 104,
  anon_sym_b = 105,
  anon_sym_G = 106,
  anon_sym_H = 107,
  anon_sym_l = 108,
  anon_sym_M = 109,
  anon_sym_O = 110,
  anon_sym_g = 111,
  anon_sym_R = 112,
  anon_sym_T = 113,
  anon_sym_W = 114,
  anon_sym_Y = 115,
  anon_sym_border_color = 116,
  anon_sym_animation_rate_fps = 117,
  anon_sym_looping = 118,
  anon_sym_play_on_show = 119,
  anon_sym_pause_on_loop = 120,
  anon_sym_horizontal = 121,
  sym_assign_equal = 122,
  sym_string = 123,
  sym_number = 124,
  aux_sym_float_token1 = 125,
  sym_integer = 126,
  aux_sym__integer_positive_token1 = 127,
  sym_byte = 128,
  sym_hexadecimal = 129,
  sym_angle = 130,
  anon_sym_true = 131,
  anon_sym_false = 132,
  anon_sym_yes = 133,
  anon_sym_no = 134,
  sym_comment = 135,
  sym_file = 136,
  sym_dot_mod = 137,
  sym_dot_gfx = 138,
  sym__spriteTypes = 139,
  sym__spriteTypes_block = 140,
  sym__spriteTypes_statement = 141,
  sym__spriteTypes_type = 142,
  sym__objectTypes = 143,
  sym__objectTypes_block = 144,
  sym__objectTypes_type = 145,
  sym__bitmapfonts = 146,
  sym__bitmapfonts_block = 147,
  sym__bitmapfonts_type = 148,
  sym__spriteType = 149,
  sym__spriteType_block = 150,
  sym__textSpriteType = 151,
  sym__textSpriteType_block = 152,
  sym__corneredTileSpriteType = 153,
  sym__corneredTileSpriteType_block = 154,
  sym__maskedShieldType = 155,
  sym__maskedShieldType_block = 156,
  sym__animatedmaptext = 157,
  sym__animatedmaptext_block = 158,
  sym__textcolors = 159,
  sym__textcolors_block = 160,
  sym__bitmapfont = 161,
  sym__bitmapfont_block = 162,
  sym__frameAnimatedSpriteType = 163,
  sym__frameAnimatedSpriteType_block = 164,
  sym__progressbartype = 165,
  sym__progressbartype_block = 166,
  sym__statement_name = 167,
  sym__statement_xy_integer = 168,
  sym__entry_x_integer = 169,
  sym__entry_y_integer = 170,
  sym__statement_xy_float = 171,
  sym__entry_x_float = 172,
  sym__entry_y_float = 173,
  sym__statement_mod_path = 174,
  sym__statement_mod_archive = 175,
  sym__statement_mod_remote_file_id = 176,
  sym__statement_mod_version = 177,
  sym__statement_mod_picture = 178,
  sym__statement_mod_supported_version = 179,
  sym__statement_mod_replace_path = 180,
  sym__mod_replace_path_folder = 181,
  sym__statement_mod_tags = 182,
  sym__mod_tags_block = 183,
  sym__mod_tags_keyword = 184,
  sym__statement_mod_dependencies = 185,
  sym__mod_dependencies_block = 186,
  sym__statement_gfx_name = 187,
  sym__statement_gfx_path = 188,
  sym__statement_gfx_cursor_offset = 189,
  sym__statement_gfx_textureFile = 190,
  sym__statement_gfx_textureFile1 = 191,
  sym__statement_gfx_textureFile2 = 192,
  sym__statement_gfx_textureFile3 = 193,
  sym__statement_gfx_noOfFrames = 194,
  sym__statement_gfx_overlay_frames_per_row = 195,
  sym__statement_gfx_overlay_rows = 196,
  sym__statement_gfx_effectFile = 197,
  sym__statement_gfx_animation = 198,
  sym__gfx_animation_block = 199,
  sym__animation_entry_dds = 200,
  sym__animation_entry_angle = 201,
  sym__animation_entry_bool = 202,
  sym__animation_entry_time = 203,
  sym__animation_entry_xy_float = 204,
  sym__animation_entry_blendmode = 205,
  sym__animation_entry_type = 206,
  sym__animation_entry_frames = 207,
  sym__statement_gfx_size = 208,
  sym__statement_gfx_borderSize = 209,
  sym__statement_gfx_allwaystransparent = 210,
  sym__statement_gfx_legacy_lazy_load = 211,
  sym__statement_gfx_clicksound = 212,
  sym__statement_gfx_speed = 213,
  sym__statement_gfx_textblock = 214,
  sym__gfx_textblock = 215,
  sym__statement_gfx_text = 216,
  sym__statement_gfx_color = 217,
  sym__statement_gfx_colortwo = 218,
  sym__statement_gfx_font = 219,
  sym__statement_gfx_position = 220,
  sym__statement_gfx_format = 221,
  sym__statement_gfx_cull_distance = 222,
  sym__statement_gfx_textcolors = 223,
  sym__statement_gfx_bitmapfont_color = 224,
  sym__statement_gfx_bitmapfont_border_color = 225,
  sym__statement_gfx_animation_rate_fps = 226,
  sym__statement_gfx_looping = 227,
  sym__statement_gfx_play_on_show = 228,
  sym__statement_gfx_pause_on_loop = 229,
  sym__statement_gfx_horizontal = 230,
  sym_float = 231,
  sym__float_positive = 232,
  sym__integer_positive = 233,
  sym__boolean_yes_no = 234,
  aux_sym_dot_mod_repeat1 = 235,
  aux_sym_dot_gfx_repeat1 = 236,
  aux_sym__spriteTypes_block_repeat1 = 237,
  aux_sym__objectTypes_block_repeat1 = 238,
  aux_sym__bitmapfonts_block_repeat1 = 239,
  aux_sym__spriteType_block_repeat1 = 240,
  aux_sym__textSpriteType_block_repeat1 = 241,
  aux_sym__corneredTileSpriteType_block_repeat1 = 242,
  aux_sym__maskedShieldType_block_repeat1 = 243,
  aux_sym__animatedmaptext_block_repeat1 = 244,
  aux_sym__textcolors_block_repeat1 = 245,
  aux_sym__bitmapfont_block_repeat1 = 246,
  aux_sym__frameAnimatedSpriteType_block_repeat1 = 247,
  aux_sym__progressbartype_block_repeat1 = 248,
  aux_sym__mod_tags_block_repeat1 = 249,
  aux_sym__mod_dependencies_block_repeat1 = 250,
  aux_sym__gfx_animation_block_repeat1 = 251,
  aux_sym__animation_entry_frames_repeat1 = 252,
  aux_sym__gfx_textblock_repeat1 = 253,
  alias_sym_dependencies = 254,
  alias_sym_name_value = 255,
  alias_sym_statement = 256,
  alias_sym_type_definition = 257,
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
      if (eof) ADVANCE(1347);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(1504);
      if (lookahead == '-') ADVANCE(1327);
      if (lookahead == '0') ADVANCE(1485);
      if (lookahead == '1') ADVANCE(1485);
      if (lookahead == '2') ADVANCE(1483);
      if (lookahead == '=') ADVANCE(1480);
      if (lookahead == 'B') ADVANCE(1460);
      if (lookahead == 'G') ADVANCE(1463);
      if (lookahead == 'H') ADVANCE(1464);
      if (lookahead == 'M') ADVANCE(1467);
      if (lookahead == 'O') ADVANCE(1468);
      if (lookahead == 'R') ADVANCE(1470);
      if (lookahead == 'T') ADVANCE(1471);
      if (lookahead == 'W') ADVANCE(1472);
      if (lookahead == 'Y') ADVANCE(1473);
      if (lookahead == '\\') SKIP(1343)
      if (lookahead == 'a') ADVANCE(980);
      if (lookahead == 'b') ADVANCE(1462);
      if (lookahead == 'c') ADVANCE(798);
      if (lookahead == 'd') ADVANCE(799);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'f') ADVANCE(722);
      if (lookahead == 'g') ADVANCE(1469);
      if (lookahead == 'h') ADVANCE(1075);
      if (lookahead == 'l') ADVANCE(1466);
      if (lookahead == 'm') ADVANCE(715);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead == 'o') ADVANCE(761);
      if (lookahead == 'p') ADVANCE(719);
      if (lookahead == 'r') ADVANCE(802);
      if (lookahead == 's') ADVANCE(922);
      if (lookahead == 't') ADVANCE(723);
      if (lookahead == 'v') ADVANCE(836);
      if (lookahead == 'x') ADVANCE(1365);
      if (lookahead == 'y') ADVANCE(1367);
      if (lookahead == '{') ADVANCE(1349);
      if (lookahead == '}') ADVANCE(1350);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1485);
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
      if (lookahead == '\n') SKIP(429)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(429)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(430)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(430)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(431)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(431)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(432)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(432)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(433)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(433)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(434)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(434)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(660);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(661);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(655);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(659);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(657);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(658);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(656);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(349);
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1372);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(197);
      if (lookahead == 'C') ADVANCE(241);
      if (lookahead == 'E') ADVANCE(307);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'H') ADVANCE(168);
      if (lookahead == 'L') ADVANCE(243);
      if (lookahead == 'M') ADVANCE(106);
      if (lookahead == 'R') ADVANCE(141);
      if (lookahead == 'S') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(171);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1372);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1372);
      if (lookahead == '.') ADVANCE(537);
      if (lookahead == 'A') ADVANCE(538);
      if (lookahead == 'M') ADVANCE(445);
      if (lookahead == 'R') ADVANCE(483);
      if (lookahead == 'S') ADVANCE(577);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(444);
      if (lookahead == 'o') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(641);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(446);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(578);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(510);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(441);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(511);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(580);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1372);
      if (lookahead == '.') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'z') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'z') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'z') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'K') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'z') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'z') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'j') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'z') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'j') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'z') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(1481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'X') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '_') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'y') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 's') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 's') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 's') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(155);
      if (lookahead == 'x') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(158);
      if (lookahead == 'x') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'y') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 'F') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 'X') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == '_') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == '.') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(1405);
      if (lookahead == 'G') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(1392);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(1392);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(1432);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(1432);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 330:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'j') ADVANCE(344);
      if (lookahead == 'l') ADVANCE(348);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == 'z') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'g') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'g') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'p') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'p') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'u') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(1380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(353);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(1374);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(1374);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(1374);
      if (lookahead == '.') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(1374);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(1376);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(1376);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(1376);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(1370);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(1370);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(1370);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(1410);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(1410);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(1389);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(1389);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(1398);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(1398);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(1386);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(1386);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(1400);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(1400);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(1378);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(1378);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(1378);
      if (lookahead == '.') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(1378);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(1378);
      if (lookahead == '.') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(1378);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(1378);
      if (lookahead == '.') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(1378);
      if (lookahead == '.') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(1384);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(1384);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(1434);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(1434);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(1438);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(1438);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(1383);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(1383);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(1387);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(1387);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(1388);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(1388);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 396:
      if (lookahead == '"') ADVANCE(1393);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 397:
      if (lookahead == '"') ADVANCE(1393);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 398:
      if (lookahead == '"') ADVANCE(1397);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 399:
      if (lookahead == '"') ADVANCE(1397);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 400:
      if (lookahead == '"') ADVANCE(1433);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 401:
      if (lookahead == '"') ADVANCE(1433);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 402:
      if (lookahead == '"') ADVANCE(1437);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 403:
      if (lookahead == '"') ADVANCE(1437);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 404:
      if (lookahead == '"') ADVANCE(1385);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 405:
      if (lookahead == '"') ADVANCE(1385);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 406:
      if (lookahead == '"') ADVANCE(1436);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 407:
      if (lookahead == '"') ADVANCE(1436);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 408:
      if (lookahead == '"') ADVANCE(1402);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 409:
      if (lookahead == '"') ADVANCE(1402);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 410:
      if (lookahead == '"') ADVANCE(1390);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 411:
      if (lookahead == '"') ADVANCE(1390);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 412:
      if (lookahead == '"') ADVANCE(1396);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 413:
      if (lookahead == '"') ADVANCE(1396);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 414:
      if (lookahead == '"') ADVANCE(1401);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 415:
      if (lookahead == '"') ADVANCE(1401);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 416:
      if (lookahead == '"') ADVANCE(1399);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 417:
      if (lookahead == '"') ADVANCE(1399);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 418:
      if (lookahead == '"') ADVANCE(1391);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 419:
      if (lookahead == '"') ADVANCE(1391);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 420:
      if (lookahead == '"') ADVANCE(1395);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 421:
      if (lookahead == '"') ADVANCE(1395);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 422:
      if (lookahead == '"') ADVANCE(1382);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 423:
      if (lookahead == '"') ADVANCE(1382);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 424:
      if (lookahead == '"') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 425:
      if (lookahead == '"') ADVANCE(1403);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 426:
      if (lookahead == '"') ADVANCE(1394);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 427:
      if (lookahead == '"') ADVANCE(1394);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 428:
      if (lookahead == '"') ADVANCE(1424);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(662);
      END_STATE();
    case 429:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '#') ADVANCE(1504);
      if (lookahead == '-') ADVANCE(1329);
      if (lookahead == '=') ADVANCE(1480);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(983);
      if (lookahead == 'b') ADVANCE(965);
      if (lookahead == 'c') ADVANCE(1010);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'f') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(801);
      if (lookahead == 'm') ADVANCE(715);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead == 'p') ADVANCE(720);
      if (lookahead == 's') ADVANCE(924);
      if (lookahead == 't') ADVANCE(875);
      if (lookahead == '}') ADVANCE(1350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(429)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1487);
      END_STATE();
    case 430:
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '#') ADVANCE(1504);
      if (lookahead == '-') ADVANCE(1331);
      if (lookahead == '=') ADVANCE(1480);
      if (lookahead == 'B') ADVANCE(1460);
      if (lookahead == 'G') ADVANCE(1463);
      if (lookahead == 'H') ADVANCE(1464);
      if (lookahead == 'M') ADVANCE(1467);
      if (lookahead == 'O') ADVANCE(1468);
      if (lookahead == 'R') ADVANCE(1470);
      if (lookahead == 'T') ADVANCE(1471);
      if (lookahead == 'W') ADVANCE(1472);
      if (lookahead == 'Y') ADVANCE(1473);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'b') ADVANCE(1461);
      if (lookahead == 'c') ADVANCE(1016);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'g') ADVANCE(1469);
      if (lookahead == 'h') ADVANCE(1075);
      if (lookahead == 'l') ADVANCE(1465);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead == 's') ADVANCE(921);
      if (lookahead == 't') ADVANCE(883);
      if (lookahead == '}') ADVANCE(1350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(430)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1489);
      END_STATE();
    case 431:
      if (lookahead == '"') ADVANCE(774);
      if (lookahead == '#') ADVANCE(1504);
      if (lookahead == '0') ADVANCE(670);
      if (lookahead == '=') ADVANCE(1480);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(984);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead == 'o') ADVANCE(1285);
      if (lookahead == 't') ADVANCE(886);
      if (lookahead == '}') ADVANCE(1350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(431)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(671);
      END_STATE();
    case 432:
      if (lookahead == '#') ADVANCE(1504);
      if (lookahead == '0') ADVANCE(1491);
      if (lookahead == '1') ADVANCE(1495);
      if (lookahead == '2') ADVANCE(1492);
      if (lookahead == '=') ADVANCE(1480);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(981);
      if (lookahead == 'b') ADVANCE(1121);
      if (lookahead == 'c') ADVANCE(1009);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'l') ADVANCE(801);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead == 'o') ADVANCE(1285);
      if (lookahead == 'p') ADVANCE(728);
      if (lookahead == 's') ADVANCE(921);
      if (lookahead == 't') ADVANCE(886);
      if (lookahead == '}') ADVANCE(1350);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1494);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(432)
      END_STATE();
    case 433:
      if (lookahead == '#') ADVANCE(1504);
      if (lookahead == '0') ADVANCE(672);
      if (lookahead == '3') ADVANCE(674);
      if (lookahead == '=') ADVANCE(1480);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'c') ADVANCE(1120);
      if (lookahead == 'f') ADVANCE(1072);
      if (lookahead == 'n') ADVANCE(1074);
      if (lookahead == 'p') ADVANCE(1076);
      if (lookahead == 's') ADVANCE(921);
      if (lookahead == 't') ADVANCE(877);
      if (lookahead == 'y') ADVANCE(838);
      if (lookahead == '}') ADVANCE(1350);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(676);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(433)
      END_STATE();
    case 434:
      if (lookahead == '#') ADVANCE(1504);
      if (lookahead == '=') ADVANCE(1480);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == 'b') ADVANCE(1121);
      if (lookahead == 'c') ADVANCE(1117);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'h') ADVANCE(1075);
      if (lookahead == 'l') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead == 's') ADVANCE(921);
      if (lookahead == 't') ADVANCE(892);
      if (lookahead == '}') ADVANCE(1350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(434)
      END_STATE();
    case 435:
      if (lookahead == '*') ADVANCE(383);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'j') ADVANCE(593);
      if (lookahead == 'l') ADVANCE(643);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 'z') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 436:
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'j') ADVANCE(593);
      if (lookahead == 'l') ADVANCE(643);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 'z') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 437:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 438:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'I') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 439:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'I') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 440:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'K') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 441:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == 'u') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 442:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 443:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 444:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead == 'u') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 445:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 446:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 447:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 448:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 449:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 450:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 451:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 452:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 453:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 454:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 455:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 456:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 457:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 458:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 459:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 460:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 461:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 462:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'c') ADVANCE(600);
      if (lookahead == 'o') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 463:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'c') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 464:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 465:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'c') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 466:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 467:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'c') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 468:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'c') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 469:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'l') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 470:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'j') ADVANCE(593);
      if (lookahead == 'l') ADVANCE(643);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 'z') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 471:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'j') ADVANCE(593);
      if (lookahead == 'l') ADVANCE(643);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 'z') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 472:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 473:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 474:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 475:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 476:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 477:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 478:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 479:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(494);
      if (lookahead == 'n') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 480:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 481:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 482:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'o') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 483:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 484:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 485:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 486:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 487:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 488:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 489:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 490:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 491:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 492:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 493:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 494:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 495:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 496:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 497:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 498:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 499:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 500:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 501:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'g') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 502:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'g') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 503:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'g') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 504:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'g') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 505:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 506:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'g') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 507:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'g') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 508:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 509:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'h') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 510:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 511:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 512:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 513:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 514:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 515:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 516:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 517:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 518:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 519:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 520:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 521:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 522:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 523:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 524:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 525:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 526:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 527:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 528:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 529:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 530:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 531:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 532:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 533:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 534:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 535:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 536:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 537:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'j') ADVANCE(593);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 'z') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 538:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 539:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 540:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 541:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 542:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(522);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 543:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 544:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 545:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 546:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 547:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 548:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 549:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 550:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 551:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 552:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 553:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 554:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'm') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 555:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 556:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 557:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 558:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 559:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 560:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 561:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 562:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 563:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 564:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 565:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 566:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 567:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 568:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 569:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 570:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 571:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 572:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 573:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 574:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 575:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 576:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 577:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 578:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 579:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 580:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 581:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 582:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 583:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 584:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 585:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 586:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 587:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 588:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 589:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 590:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 591:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 592:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 593:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 594:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 595:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 596:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 597:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 598:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 599:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 600:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 601:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 602:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 603:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 604:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 605:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 606:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 607:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 608:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 609:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 610:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 611:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 612:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 613:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 614:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 615:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 616:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 617:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 618:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 619:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 620:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 621:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 622:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 623:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 624:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 625:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 626:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 627:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 628:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 629:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 630:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 631:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 632:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 633:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 634:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 635:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 636:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 637:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 638:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 639:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 640:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 641:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'u') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 642:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'u') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 643:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'u') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 644:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 645:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(486);
      if (lookahead == 'x') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 646:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 647:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 648:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'w') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 649:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'x') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 650:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'y') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 651:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'y') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 652:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'y') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 653:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'y') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 654:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'y') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 655:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 656:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 657:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 658:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 659:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 660:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 661:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 662:
      if (lookahead == '.') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(662);
      END_STATE();
    case 663:
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(668);
      END_STATE();
    case 664:
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 'd') ADVANCE(665);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(668);
      END_STATE();
    case 665:
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 'd') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(668);
      END_STATE();
    case 666:
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 'g') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(668);
      END_STATE();
    case 667:
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == '.') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(668);
      END_STATE();
    case 669:
      if (lookahead == '.') ADVANCE(677);
      END_STATE();
    case 670:
      if (lookahead == '.') ADVANCE(1333);
      if (lookahead == 'f') ADVANCE(1459);
      if (lookahead == 'x') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(671);
      END_STATE();
    case 671:
      if (lookahead == '.') ADVANCE(1333);
      if (lookahead == 'f') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(671);
      END_STATE();
    case 672:
      if (lookahead == '.') ADVANCE(1334);
      END_STATE();
    case 673:
      if (lookahead == '.') ADVANCE(1334);
      if (lookahead == '0') ADVANCE(669);
      END_STATE();
    case 674:
      if (lookahead == '.') ADVANCE(1334);
      if (lookahead == '6') ADVANCE(673);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(675);
      END_STATE();
    case 675:
      if (lookahead == '.') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      END_STATE();
    case 676:
      if (lookahead == '.') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      END_STATE();
    case 677:
      if (lookahead == '0') ADVANCE(1498);
      END_STATE();
    case 678:
      if (lookahead == '1') ADVANCE(1411);
      if (lookahead == '2') ADVANCE(1412);
      if (lookahead == '3') ADVANCE(1413);
      END_STATE();
    case 679:
      if (lookahead == 'A') ADVANCE(1071);
      END_STATE();
    case 680:
      if (lookahead == 'F') ADVANCE(1180);
      END_STATE();
    case 681:
      if (lookahead == 'F') ADVANCE(931);
      END_STATE();
    case 682:
      if (lookahead == 'O') ADVANCE(893);
      END_STATE();
    case 683:
      if (lookahead == 'S') ADVANCE(1141);
      if (lookahead == 'b') ADVANCE(991);
      if (lookahead == 'c') ADVANCE(1119);
      if (lookahead == 'u') ADVANCE(1181);
      END_STATE();
    case 684:
      if (lookahead == 'S') ADVANCE(939);
      END_STATE();
    case 685:
      if (lookahead == 'S') ADVANCE(939);
      if (lookahead == '_') ADVANCE(771);
      END_STATE();
    case 686:
      if (lookahead == 'S') ADVANCE(919);
      END_STATE();
    case 687:
      if (lookahead == 'S') ADVANCE(1149);
      END_STATE();
    case 688:
      if (lookahead == 'S') ADVANCE(1150);
      END_STATE();
    case 689:
      if (lookahead == 'T') ADVANCE(1309);
      END_STATE();
    case 690:
      if (lookahead == 'T') ADVANCE(947);
      END_STATE();
    case 691:
      if (lookahead == 'T') ADVANCE(1310);
      END_STATE();
    case 692:
      if (lookahead == 'T') ADVANCE(1311);
      END_STATE();
    case 693:
      if (lookahead == 'T') ADVANCE(1313);
      END_STATE();
    case 694:
      if (lookahead == 'T') ADVANCE(1314);
      END_STATE();
    case 695:
      if (lookahead == 'T') ADVANCE(1315);
      END_STATE();
    case 696:
      if (lookahead == 'T') ADVANCE(1316);
      END_STATE();
    case 697:
      if (lookahead == 'T') ADVANCE(1317);
      END_STATE();
    case 698:
      if (lookahead == '_') ADVANCE(910);
      END_STATE();
    case 699:
      if (lookahead == '_') ADVANCE(789);
      END_STATE();
    case 700:
      if (lookahead == '_') ADVANCE(900);
      END_STATE();
    case 701:
      if (lookahead == '_') ADVANCE(1085);
      END_STATE();
    case 702:
      if (lookahead == '_') ADVANCE(899);
      END_STATE();
    case 703:
      if (lookahead == '_') ADVANCE(992);
      END_STATE();
    case 704:
      if (lookahead == '_') ADVANCE(1144);
      END_STATE();
    case 705:
      if (lookahead == '_') ADVANCE(1108);
      END_STATE();
    case 706:
      if (lookahead == '_') ADVANCE(1204);
      END_STATE();
    case 707:
      if (lookahead == '_') ADVANCE(935);
      END_STATE();
    case 708:
      if (lookahead == '_') ADVANCE(1178);
      if (lookahead == 'b') ADVANCE(999);
      if (lookahead == 'd') ADVANCE(870);
      if (lookahead == 'f') ADVANCE(1184);
      if (lookahead == 'l') ADVANCE(1122);
      if (lookahead == 'm') ADVANCE(743);
      if (lookahead == 'r') ADVANCE(1098);
      if (lookahead == 't') ADVANCE(876);
      END_STATE();
    case 709:
      if (lookahead == '_') ADVANCE(1167);
      END_STATE();
    case 710:
      if (lookahead == '_') ADVANCE(1287);
      END_STATE();
    case 711:
      if (lookahead == '_') ADVANCE(1015);
      END_STATE();
    case 712:
      if (lookahead == '_') ADVANCE(1091);
      END_STATE();
    case 713:
      if (lookahead == '_') ADVANCE(995);
      END_STATE();
    case 714:
      if (lookahead == '_') ADVANCE(1145);
      END_STATE();
    case 715:
      if (lookahead == 'a') ADVANCE(1190);
      END_STATE();
    case 716:
      if (lookahead == 'a') ADVANCE(1022);
      if (lookahead == 'o') ADVANCE(1503);
      END_STATE();
    case 717:
      if (lookahead == 'a') ADVANCE(1022);
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 718:
      if (lookahead == 'a') ADVANCE(1239);
      if (lookahead == 'i') ADVANCE(767);
      if (lookahead == 'l') ADVANCE(721);
      END_STATE();
    case 719:
      if (lookahead == 'a') ADVANCE(1239);
      if (lookahead == 'i') ADVANCE(767);
      if (lookahead == 'l') ADVANCE(721);
      if (lookahead == 'o') ADVANCE(1205);
      if (lookahead == 'r') ADVANCE(1078);
      END_STATE();
    case 720:
      if (lookahead == 'a') ADVANCE(1239);
      if (lookahead == 'l') ADVANCE(721);
      if (lookahead == 'r') ADVANCE(1078);
      END_STATE();
    case 721:
      if (lookahead == 'a') ADVANCE(1304);
      END_STATE();
    case 722:
      if (lookahead == 'a') ADVANCE(990);
      if (lookahead == 'o') ADVANCE(1051);
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 723:
      if (lookahead == 'a') ADVANCE(914);
      if (lookahead == 'e') ADVANCE(1294);
      if (lookahead == 'r') ADVANCE(1276);
      END_STATE();
    case 724:
      if (lookahead == 'a') ADVANCE(914);
      if (lookahead == 'e') ADVANCE(1296);
      END_STATE();
    case 725:
      if (lookahead == 'a') ADVANCE(1308);
      END_STATE();
    case 726:
      if (lookahead == 'a') ADVANCE(1322);
      END_STATE();
    case 727:
      if (lookahead == 'a') ADVANCE(778);
      END_STATE();
    case 728:
      if (lookahead == 'a') ADVANCE(1278);
      if (lookahead == 'l') ADVANCE(721);
      END_STATE();
    case 729:
      if (lookahead == 'a') ADVANCE(1303);
      END_STATE();
    case 730:
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 731:
      if (lookahead == 'a') ADVANCE(1126);
      END_STATE();
    case 732:
      if (lookahead == 'a') ADVANCE(1226);
      END_STATE();
    case 733:
      if (lookahead == 'a') ADVANCE(1146);
      END_STATE();
    case 734:
      if (lookahead == 'a') ADVANCE(987);
      END_STATE();
    case 735:
      if (lookahead == 'a') ADVANCE(1227);
      END_STATE();
    case 736:
      if (lookahead == 'a') ADVANCE(1014);
      END_STATE();
    case 737:
      if (lookahead == 'a') ADVANCE(1124);
      if (lookahead == 'i') ADVANCE(1222);
      END_STATE();
    case 738:
      if (lookahead == 'a') ADVANCE(1168);
      END_STATE();
    case 739:
      if (lookahead == 'a') ADVANCE(1060);
      END_STATE();
    case 740:
      if (lookahead == 'a') ADVANCE(786);
      END_STATE();
    case 741:
      if (lookahead == 'a') ADVANCE(1069);
      END_STATE();
    case 742:
      if (lookahead == 'a') ADVANCE(1241);
      END_STATE();
    case 743:
      if (lookahead == 'a') ADVANCE(1206);
      END_STATE();
    case 744:
      if (lookahead == 'a') ADVANCE(1025);
      END_STATE();
    case 745:
      if (lookahead == 'a') ADVANCE(1028);
      END_STATE();
    case 746:
      if (lookahead == 'a') ADVANCE(1307);
      END_STATE();
    case 747:
      if (lookahead == 'a') ADVANCE(777);
      END_STATE();
    case 748:
      if (lookahead == 'a') ADVANCE(1029);
      END_STATE();
    case 749:
      if (lookahead == 'a') ADVANCE(1250);
      END_STATE();
    case 750:
      if (lookahead == 'a') ADVANCE(1030);
      END_STATE();
    case 751:
      if (lookahead == 'a') ADVANCE(1173);
      END_STATE();
    case 752:
      if (lookahead == 'a') ADVANCE(1004);
      END_STATE();
    case 753:
      if (lookahead == 'a') ADVANCE(1254);
      END_STATE();
    case 754:
      if (lookahead == 'a') ADVANCE(1147);
      END_STATE();
    case 755:
      if (lookahead == 'a') ADVANCE(1261);
      END_STATE();
    case 756:
      if (lookahead == 'a') ADVANCE(1148);
      END_STATE();
    case 757:
      if (lookahead == 'a') ADVANCE(1263);
      END_STATE();
    case 758:
      if (lookahead == 'a') ADVANCE(1264);
      END_STATE();
    case 759:
      if (lookahead == 'a') ADVANCE(1265);
      END_STATE();
    case 760:
      if (lookahead == 'a') ADVANCE(1266);
      END_STATE();
    case 761:
      if (lookahead == 'b') ADVANCE(972);
      if (lookahead == 'v') ADVANCE(839);
      END_STATE();
    case 762:
      if (lookahead == 'b') ADVANCE(991);
      if (lookahead == 'u') ADVANCE(1171);
      END_STATE();
    case 763:
      if (lookahead == 'b') ADVANCE(738);
      END_STATE();
    case 764:
      if (lookahead == 'c') ADVANCE(918);
      END_STATE();
    case 765:
      if (lookahead == 'c') ADVANCE(973);
      END_STATE();
    case 766:
      if (lookahead == 'c') ADVANCE(974);
      END_STATE();
    case 767:
      if (lookahead == 'c') ADVANCE(1238);
      END_STATE();
    case 768:
      if (lookahead == 'c') ADVANCE(977);
      END_STATE();
    case 769:
      if (lookahead == 'c') ADVANCE(975);
      END_STATE();
    case 770:
      if (lookahead == 'c') ADVANCE(1240);
      END_STATE();
    case 771:
      if (lookahead == 'c') ADVANCE(1090);
      END_STATE();
    case 772:
      if (lookahead == 'c') ADVANCE(1228);
      END_STATE();
    case 773:
      if (lookahead == 'c') ADVANCE(962);
      END_STATE();
    case 774:
      if (lookahead == 'c') ADVANCE(1081);
      if (lookahead == 'd') ADVANCE(871);
      if (lookahead == 'e') ADVANCE(1286);
      if (lookahead == 'g') ADVANCE(896);
      if (lookahead == 'h') ADVANCE(944);
      if (lookahead == 'i') ADVANCE(1065);
      if (lookahead == 'l') ADVANCE(1118);
      if (lookahead == 'm') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 775:
      if (lookahead == 'c') ADVANCE(846);
      END_STATE();
    case 776:
      if (lookahead == 'c') ADVANCE(816);
      END_STATE();
    case 777:
      if (lookahead == 'c') ADVANCE(835);
      END_STATE();
    case 778:
      if (lookahead == 'c') ADVANCE(1306);
      END_STATE();
    case 779:
      if (lookahead == 'c') ADVANCE(752);
      END_STATE();
    case 780:
      if (lookahead == 'c') ADVANCE(938);
      END_STATE();
    case 781:
      if (lookahead == 'c') ADVANCE(736);
      END_STATE();
    case 782:
      if (lookahead == 'd') ADVANCE(1447);
      END_STATE();
    case 783:
      if (lookahead == 'd') ADVANCE(686);
      END_STATE();
    case 784:
      if (lookahead == 'd') ADVANCE(1444);
      END_STATE();
    case 785:
      if (lookahead == 'd') ADVANCE(1371);
      END_STATE();
    case 786:
      if (lookahead == 'd') ADVANCE(1443);
      END_STATE();
    case 787:
      if (lookahead == 'd') ADVANCE(690);
      END_STATE();
    case 788:
      if (lookahead == 'd') ADVANCE(1027);
      END_STATE();
    case 789:
      if (lookahead == 'd') ADVANCE(933);
      END_STATE();
    case 790:
      if (lookahead == 'd') ADVANCE(710);
      END_STATE();
    case 791:
      if (lookahead == 'd') ADVANCE(850);
      END_STATE();
    case 792:
      if (lookahead == 'd') ADVANCE(821);
      END_STATE();
    case 793:
      if (lookahead == 'd') ADVANCE(1026);
      END_STATE();
    case 794:
      if (lookahead == 'd') ADVANCE(844);
      END_STATE();
    case 795:
      if (lookahead == 'd') ADVANCE(860);
      END_STATE();
    case 796:
      if (lookahead == 'd') ADVANCE(693);
      END_STATE();
    case 797:
      if (lookahead == 'd') ADVANCE(688);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(1049);
      if (lookahead == 'l') ADVANCE(928);
      if (lookahead == 'o') ADVANCE(1008);
      if (lookahead == 'u') ADVANCE(989);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 800:
      if (lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(913);
      if (lookahead == 'o') ADVANCE(1077);
      END_STATE();
    case 802:
      if (lookahead == 'e') ADVANCE(1021);
      END_STATE();
    case 803:
      if (lookahead == 'e') ADVANCE(1364);
      END_STATE();
    case 804:
      if (lookahead == 'e') ADVANCE(1440);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(1499);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(1500);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(1457);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(1369);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(1375);
      END_STATE();
    case 811:
      if (lookahead == 'e') ADVANCE(1323);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(1441);
      END_STATE();
    case 813:
      if (lookahead == 'e') ADVANCE(1417);
      END_STATE();
    case 814:
      if (lookahead == 'e') ADVANCE(1354);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(1409);
      END_STATE();
    case 816:
      if (lookahead == 'e') ADVANCE(1458);
      END_STATE();
    case 817:
      if (lookahead == 'e') ADVANCE(1355);
      END_STATE();
    case 818:
      if (lookahead == 'e') ADVANCE(1363);
      END_STATE();
    case 819:
      if (lookahead == 'e') ADVANCE(1357);
      END_STATE();
    case 820:
      if (lookahead == 'e') ADVANCE(1422);
      END_STATE();
    case 821:
      if (lookahead == 'e') ADVANCE(1431);
      END_STATE();
    case 822:
      if (lookahead == 'e') ADVANCE(1356);
      END_STATE();
    case 823:
      if (lookahead == 'e') ADVANCE(1362);
      END_STATE();
    case 824:
      if (lookahead == 'e') ADVANCE(1353);
      END_STATE();
    case 825:
      if (lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 826:
      if (lookahead == 'e') ADVANCE(1427);
      END_STATE();
    case 827:
      if (lookahead == 'e') ADVANCE(1435);
      END_STATE();
    case 828:
      if (lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 829:
      if (lookahead == 'e') ADVANCE(1423);
      END_STATE();
    case 830:
      if (lookahead == 'e') ADVANCE(1430);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 832:
      if (lookahead == 'e') ADVANCE(1408);
      END_STATE();
    case 833:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 834:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 835:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 836:
      if (lookahead == 'e') ADVANCE(1175);
      END_STATE();
    case 837:
      if (lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 838:
      if (lookahead == 'e') ADVANCE(1191);
      END_STATE();
    case 839:
      if (lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 840:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 841:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 842:
      if (lookahead == 'e') ADVANCE(793);
      if (lookahead == 'i') ADVANCE(1095);
      END_STATE();
    case 843:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 844:
      if (lookahead == 'e') ADVANCE(1153);
      END_STATE();
    case 845:
      if (lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 846:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 847:
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead == 'r') ADVANCE(942);
      END_STATE();
    case 848:
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead == 'r') ADVANCE(968);
      END_STATE();
    case 849:
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead == 'r') ADVANCE(969);
      END_STATE();
    case 850:
      if (lookahead == 'e') ADVANCE(1055);
      END_STATE();
    case 851:
      if (lookahead == 'e') ADVANCE(1211);
      END_STATE();
    case 852:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 853:
      if (lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 854:
      if (lookahead == 'e') ADVANCE(993);
      END_STATE();
    case 855:
      if (lookahead == 'e') ADVANCE(1194);
      END_STATE();
    case 856:
      if (lookahead == 'e') ADVANCE(1196);
      END_STATE();
    case 857:
      if (lookahead == 'e') ADVANCE(1164);
      END_STATE();
    case 858:
      if (lookahead == 'e') ADVANCE(1057);
      END_STATE();
    case 859:
      if (lookahead == 'e') ADVANCE(1198);
      END_STATE();
    case 860:
      if (lookahead == 'e') ADVANCE(1158);
      END_STATE();
    case 861:
      if (lookahead == 'e') ADVANCE(1212);
      END_STATE();
    case 862:
      if (lookahead == 'e') ADVANCE(1230);
      END_STATE();
    case 863:
      if (lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 864:
      if (lookahead == 'e') ADVANCE(1233);
      END_STATE();
    case 865:
      if (lookahead == 'e') ADVANCE(1162);
      END_STATE();
    case 866:
      if (lookahead == 'e') ADVANCE(1197);
      END_STATE();
    case 867:
      if (lookahead == 'e') ADVANCE(1295);
      END_STATE();
    case 868:
      if (lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 869:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 870:
      if (lookahead == 'e') ADVANCE(994);
      END_STATE();
    case 871:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 872:
      if (lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 873:
      if (lookahead == 'e') ADVANCE(1169);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 875:
      if (lookahead == 'e') ADVANCE(1297);
      END_STATE();
    case 876:
      if (lookahead == 'e') ADVANCE(1299);
      if (lookahead == 'i') ADVANCE(1031);
      if (lookahead == 'y') ADVANCE(1140);
      END_STATE();
    case 877:
      if (lookahead == 'e') ADVANCE(1298);
      END_STATE();
    case 878:
      if (lookahead == 'e') ADVANCE(1066);
      END_STATE();
    case 879:
      if (lookahead == 'e') ADVANCE(1324);
      END_STATE();
    case 880:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 881:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 882:
      if (lookahead == 'e') ADVANCE(1182);
      END_STATE();
    case 883:
      if (lookahead == 'e') ADVANCE(1300);
      END_STATE();
    case 884:
      if (lookahead == 'e') ADVANCE(1325);
      END_STATE();
    case 885:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 886:
      if (lookahead == 'e') ADVANCE(1301);
      END_STATE();
    case 887:
      if (lookahead == 'e') ADVANCE(1326);
      END_STATE();
    case 888:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 889:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 890:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 891:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 892:
      if (lookahead == 'e') ADVANCE(1302);
      END_STATE();
    case 893:
      if (lookahead == 'f') ADVANCE(680);
      END_STATE();
    case 894:
      if (lookahead == 'f') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      END_STATE();
    case 895:
      if (lookahead == 'f') ADVANCE(897);
      END_STATE();
    case 896:
      if (lookahead == 'f') ADVANCE(1293);
      END_STATE();
    case 897:
      if (lookahead == 'f') ADVANCE(868);
      END_STATE();
    case 898:
      if (lookahead == 'f') ADVANCE(902);
      END_STATE();
    case 899:
      if (lookahead == 'f') ADVANCE(1130);
      END_STATE();
    case 900:
      if (lookahead == 'f') ADVANCE(943);
      END_STATE();
    case 901:
      if (lookahead == 'f') ADVANCE(747);
      END_STATE();
    case 902:
      if (lookahead == 'f') ADVANCE(1216);
      END_STATE();
    case 903:
      if (lookahead == 'f') ADVANCE(1217);
      END_STATE();
    case 904:
      if (lookahead == 'f') ADVANCE(1112);
      END_STATE();
    case 905:
      if (lookahead == 'f') ADVANCE(903);
      END_STATE();
    case 906:
      if (lookahead == 'f') ADVANCE(949);
      END_STATE();
    case 907:
      if (lookahead == 'f') ADVANCE(1114);
      END_STATE();
    case 908:
      if (lookahead == 'f') ADVANCE(1115);
      END_STATE();
    case 909:
      if (lookahead == 'f') ADVANCE(953);
      if (lookahead == 's') ADVANCE(779);
      END_STATE();
    case 910:
      if (lookahead == 'f') ADVANCE(1183);
      if (lookahead == 'r') ADVANCE(1080);
      END_STATE();
    case 911:
      if (lookahead == 'g') ADVANCE(1476);
      END_STATE();
    case 912:
      if (lookahead == 'g') ADVANCE(1426);
      END_STATE();
    case 913:
      if (lookahead == 'g') ADVANCE(727);
      END_STATE();
    case 914:
      if (lookahead == 'g') ADVANCE(1192);
      END_STATE();
    case 915:
      if (lookahead == 'g') ADVANCE(1166);
      END_STATE();
    case 916:
      if (lookahead == 'h') ADVANCE(1368);
      END_STATE();
    case 917:
      if (lookahead == 'h') ADVANCE(1379);
      END_STATE();
    case 918:
      if (lookahead == 'h') ADVANCE(925);
      END_STATE();
    case 919:
      if (lookahead == 'h') ADVANCE(937);
      END_STATE();
    case 920:
      if (lookahead == 'h') ADVANCE(1082);
      END_STATE();
    case 921:
      if (lookahead == 'i') ADVANCE(1320);
      END_STATE();
    case 922:
      if (lookahead == 'i') ADVANCE(1320);
      if (lookahead == 'p') ADVANCE(847);
      if (lookahead == 'u') ADVANCE(1127);
      END_STATE();
    case 923:
      if (lookahead == 'i') ADVANCE(1320);
      if (lookahead == 'p') ADVANCE(848);
      if (lookahead == 'u') ADVANCE(1127);
      END_STATE();
    case 924:
      if (lookahead == 'i') ADVANCE(1320);
      if (lookahead == 'p') ADVANCE(849);
      END_STATE();
    case 925:
      if (lookahead == 'i') ADVANCE(1284);
      END_STATE();
    case 926:
      if (lookahead == 'i') ADVANCE(1023);
      END_STATE();
    case 927:
      if (lookahead == 'i') ADVANCE(1319);
      END_STATE();
    case 928:
      if (lookahead == 'i') ADVANCE(765);
      END_STATE();
    case 929:
      if (lookahead == 'i') ADVANCE(1052);
      END_STATE();
    case 930:
      if (lookahead == 'i') ADVANCE(1259);
      END_STATE();
    case 931:
      if (lookahead == 'i') ADVANCE(996);
      END_STATE();
    case 932:
      if (lookahead == 'i') ADVANCE(768);
      END_STATE();
    case 933:
      if (lookahead == 'i') ADVANCE(1214);
      END_STATE();
    case 934:
      if (lookahead == 'i') ADVANCE(769);
      END_STATE();
    case 935:
      if (lookahead == 'i') ADVANCE(785);
      END_STATE();
    case 936:
      if (lookahead == 'i') ADVANCE(1223);
      END_STATE();
    case 937:
      if (lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 938:
      if (lookahead == 'i') ADVANCE(859);
      END_STATE();
    case 939:
      if (lookahead == 'i') ADVANCE(1321);
      END_STATE();
    case 940:
      if (lookahead == 'i') ADVANCE(1053);
      END_STATE();
    case 941:
      if (lookahead == 'i') ADVANCE(1088);
      END_STATE();
    case 942:
      if (lookahead == 'i') ADVANCE(1246);
      END_STATE();
    case 943:
      if (lookahead == 'i') ADVANCE(997);
      END_STATE();
    case 944:
      if (lookahead == 'i') ADVANCE(1215);
      END_STATE();
    case 945:
      if (lookahead == 'i') ADVANCE(998);
      END_STATE();
    case 946:
      if (lookahead == 'i') ADVANCE(1093);
      END_STATE();
    case 947:
      if (lookahead == 'i') ADVANCE(1000);
      END_STATE();
    case 948:
      if (lookahead == 'i') ADVANCE(1099);
      END_STATE();
    case 949:
      if (lookahead == 'i') ADVANCE(1001);
      END_STATE();
    case 950:
      if (lookahead == 'i') ADVANCE(1100);
      END_STATE();
    case 951:
      if (lookahead == 'i') ADVANCE(1002);
      END_STATE();
    case 952:
      if (lookahead == 'i') ADVANCE(1101);
      END_STATE();
    case 953:
      if (lookahead == 'i') ADVANCE(1003);
      END_STATE();
    case 954:
      if (lookahead == 'i') ADVANCE(1103);
      END_STATE();
    case 955:
      if (lookahead == 'i') ADVANCE(1105);
      END_STATE();
    case 956:
      if (lookahead == 'i') ADVANCE(1005);
      END_STATE();
    case 957:
      if (lookahead == 'i') ADVANCE(1111);
      END_STATE();
    case 958:
      if (lookahead == 'i') ADVANCE(1006);
      END_STATE();
    case 959:
      if (lookahead == 'i') ADVANCE(1106);
      END_STATE();
    case 960:
      if (lookahead == 'i') ADVANCE(1034);
      END_STATE();
    case 961:
      if (lookahead == 'i') ADVANCE(1038);
      END_STATE();
    case 962:
      if (lookahead == 'i') ADVANCE(1221);
      END_STATE();
    case 963:
      if (lookahead == 'i') ADVANCE(1267);
      if (lookahead == 'o') ADVANCE(1179);
      END_STATE();
    case 964:
      if (lookahead == 'i') ADVANCE(1270);
      END_STATE();
    case 965:
      if (lookahead == 'i') ADVANCE(1269);
      if (lookahead == 'o') ADVANCE(1151);
      END_STATE();
    case 966:
      if (lookahead == 'i') ADVANCE(1272);
      END_STATE();
    case 967:
      if (lookahead == 'i') ADVANCE(1273);
      END_STATE();
    case 968:
      if (lookahead == 'i') ADVANCE(1274);
      END_STATE();
    case 969:
      if (lookahead == 'i') ADVANCE(1275);
      END_STATE();
    case 970:
      if (lookahead == 'i') ADVANCE(1039);
      END_STATE();
    case 971:
      if (lookahead == 'i') ADVANCE(1040);
      END_STATE();
    case 972:
      if (lookahead == 'j') ADVANCE(872);
      END_STATE();
    case 973:
      if (lookahead == 'k') ADVANCE(1446);
      END_STATE();
    case 974:
      if (lookahead == 'k') ADVANCE(1448);
      END_STATE();
    case 975:
      if (lookahead == 'k') ADVANCE(1445);
      END_STATE();
    case 976:
      if (lookahead == 'k') ADVANCE(840);
      END_STATE();
    case 977:
      if (lookahead == 'k') ADVANCE(1207);
      END_STATE();
    case 978:
      if (lookahead == 'k') ADVANCE(906);
      END_STATE();
    case 979:
      if (lookahead == 'l') ADVANCE(985);
      END_STATE();
    case 980:
      if (lookahead == 'l') ADVANCE(985);
      if (lookahead == 'n') ADVANCE(926);
      if (lookahead == 'r') ADVANCE(764);
      END_STATE();
    case 981:
      if (lookahead == 'l') ADVANCE(985);
      if (lookahead == 'n') ADVANCE(961);
      END_STATE();
    case 982:
      if (lookahead == 'l') ADVANCE(985);
      if (lookahead == 'n') ADVANCE(961);
      if (lookahead == 'r') ADVANCE(764);
      END_STATE();
    case 983:
      if (lookahead == 'l') ADVANCE(985);
      if (lookahead == 'n') ADVANCE(970);
      END_STATE();
    case 984:
      if (lookahead == 'l') ADVANCE(985);
      if (lookahead == 'n') ADVANCE(971);
      END_STATE();
    case 985:
      if (lookahead == 'l') ADVANCE(1290);
      END_STATE();
    case 986:
      if (lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 987:
      if (lookahead == 'l') ADVANCE(1479);
      END_STATE();
    case 988:
      if (lookahead == 'l') ADVANCE(986);
      END_STATE();
    case 989:
      if (lookahead == 'l') ADVANCE(986);
      if (lookahead == 'r') ADVANCE(1219);
      END_STATE();
    case 990:
      if (lookahead == 'l') ADVANCE(1210);
      END_STATE();
    case 991:
      if (lookahead == 'l') ADVANCE(1086);
      END_STATE();
    case 992:
      if (lookahead == 'l') ADVANCE(726);
      END_STATE();
    case 993:
      if (lookahead == 'l') ADVANCE(796);
      END_STATE();
    case 994:
      if (lookahead == 'l') ADVANCE(729);
      END_STATE();
    case 995:
      if (lookahead == 'l') ADVANCE(1097);
      END_STATE();
    case 996:
      if (lookahead == 'l') ADVANCE(813);
      END_STATE();
    case 997:
      if (lookahead == 'l') ADVANCE(852);
      END_STATE();
    case 998:
      if (lookahead == 'l') ADVANCE(815);
      END_STATE();
    case 999:
      if (lookahead == 'l') ADVANCE(858);
      END_STATE();
    case 1000:
      if (lookahead == 'l') ADVANCE(834);
      END_STATE();
    case 1001:
      if (lookahead == 'l') ADVANCE(820);
      END_STATE();
    case 1002:
      if (lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 1003:
      if (lookahead == 'l') ADVANCE(829);
      END_STATE();
    case 1004:
      if (lookahead == 'l') ADVANCE(830);
      END_STATE();
    case 1005:
      if (lookahead == 'l') ADVANCE(831);
      END_STATE();
    case 1006:
      if (lookahead == 'l') ADVANCE(832);
      END_STATE();
    case 1007:
      if (lookahead == 'l') ADVANCE(1084);
      END_STATE();
    case 1008:
      if (lookahead == 'l') ADVANCE(1084);
      if (lookahead == 'r') ADVANCE(1070);
      END_STATE();
    case 1009:
      if (lookahead == 'l') ADVANCE(932);
      END_STATE();
    case 1010:
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'o') ADVANCE(1019);
      if (lookahead == 'u') ADVANCE(1159);
      END_STATE();
    case 1011:
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'o') ADVANCE(1007);
      END_STATE();
    case 1012:
      if (lookahead == 'l') ADVANCE(746);
      END_STATE();
    case 1013:
      if (lookahead == 'l') ADVANCE(730);
      END_STATE();
    case 1014:
      if (lookahead == 'l') ADVANCE(936);
      END_STATE();
    case 1015:
      if (lookahead == 'l') ADVANCE(1110);
      END_STATE();
    case 1016:
      if (lookahead == 'l') ADVANCE(934);
      if (lookahead == 'o') ADVANCE(1007);
      END_STATE();
    case 1017:
      if (lookahead == 'l') ADVANCE(1096);
      END_STATE();
    case 1018:
      if (lookahead == 'l') ADVANCE(1102);
      END_STATE();
    case 1019:
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'r') ADVANCE(1070);
      END_STATE();
    case 1020:
      if (lookahead == 'l') ADVANCE(1104);
      END_STATE();
    case 1021:
      if (lookahead == 'm') ADVANCE(1087);
      if (lookahead == 'p') ADVANCE(1013);
      END_STATE();
    case 1022:
      if (lookahead == 'm') ADVANCE(803);
      END_STATE();
    case 1023:
      if (lookahead == 'm') ADVANCE(732);
      END_STATE();
    case 1024:
      if (lookahead == 'm') ADVANCE(731);
      END_STATE();
    case 1025:
      if (lookahead == 'm') ADVANCE(807);
      END_STATE();
    case 1026:
      if (lookahead == 'm') ADVANCE(733);
      END_STATE();
    case 1027:
      if (lookahead == 'm') ADVANCE(1113);
      END_STATE();
    case 1028:
      if (lookahead == 'm') ADVANCE(855);
      END_STATE();
    case 1029:
      if (lookahead == 'm') ADVANCE(861);
      END_STATE();
    case 1030:
      if (lookahead == 'm') ADVANCE(863);
      END_STATE();
    case 1031:
      if (lookahead == 'm') ADVANCE(826);
      END_STATE();
    case 1032:
      if (lookahead == 'm') ADVANCE(1035);
      END_STATE();
    case 1033:
      if (lookahead == 'm') ADVANCE(735);
      END_STATE();
    case 1034:
      if (lookahead == 'm') ADVANCE(749);
      END_STATE();
    case 1035:
      if (lookahead == 'm') ADVANCE(1105);
      END_STATE();
    case 1036:
      if (lookahead == 'm') ADVANCE(754);
      END_STATE();
    case 1037:
      if (lookahead == 'm') ADVANCE(756);
      END_STATE();
    case 1038:
      if (lookahead == 'm') ADVANCE(757);
      END_STATE();
    case 1039:
      if (lookahead == 'm') ADVANCE(758);
      END_STATE();
    case 1040:
      if (lookahead == 'm') ADVANCE(759);
      END_STATE();
    case 1041:
      if (lookahead == 'n') ADVANCE(1373);
      END_STATE();
    case 1042:
      if (lookahead == 'n') ADVANCE(1455);
      END_STATE();
    case 1043:
      if (lookahead == 'n') ADVANCE(1421);
      END_STATE();
    case 1044:
      if (lookahead == 'n') ADVANCE(1425);
      END_STATE();
    case 1045:
      if (lookahead == 'n') ADVANCE(1377);
      END_STATE();
    case 1046:
      if (lookahead == 'n') ADVANCE(1420);
      END_STATE();
    case 1047:
      if (lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 1048:
      if (lookahead == 'n') ADVANCE(1419);
      END_STATE();
    case 1049:
      if (lookahead == 'n') ADVANCE(1242);
      END_STATE();
    case 1050:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 1051:
      if (lookahead == 'n') ADVANCE(1224);
      if (lookahead == 'r') ADVANCE(1033);
      END_STATE();
    case 1052:
      if (lookahead == 'n') ADVANCE(911);
      END_STATE();
    case 1053:
      if (lookahead == 'n') ADVANCE(912);
      END_STATE();
    case 1054:
      if (lookahead == 'n') ADVANCE(706);
      END_STATE();
    case 1055:
      if (lookahead == 'n') ADVANCE(780);
      END_STATE();
    case 1056:
      if (lookahead == 'n') ADVANCE(784);
      END_STATE();
    case 1057:
      if (lookahead == 'n') ADVANCE(788);
      END_STATE();
    case 1058:
      if (lookahead == 'n') ADVANCE(1243);
      END_STATE();
    case 1059:
      if (lookahead == 'n') ADVANCE(1229);
      END_STATE();
    case 1060:
      if (lookahead == 'n') ADVANCE(1209);
      END_STATE();
    case 1061:
      if (lookahead == 'n') ADVANCE(1232);
      END_STATE();
    case 1062:
      if (lookahead == 'n') ADVANCE(1247);
      END_STATE();
    case 1063:
      if (lookahead == 'n') ADVANCE(1236);
      END_STATE();
    case 1064:
      if (lookahead == 'n') ADVANCE(1203);
      END_STATE();
    case 1065:
      if (lookahead == 'n') ADVANCE(1256);
      END_STATE();
    case 1066:
      if (lookahead == 'n') ADVANCE(1249);
      END_STATE();
    case 1067:
      if (lookahead == 'n') ADVANCE(791);
      END_STATE();
    case 1068:
      if (lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 1069:
      if (lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 1070:
      if (lookahead == 'n') ADVANCE(873);
      END_STATE();
    case 1071:
      if (lookahead == 'n') ADVANCE(960);
      END_STATE();
    case 1072:
      if (lookahead == 'o') ADVANCE(1051);
      END_STATE();
    case 1073:
      if (lookahead == 'o') ADVANCE(1453);
      END_STATE();
    case 1074:
      if (lookahead == 'o') ADVANCE(1502);
      END_STATE();
    case 1075:
      if (lookahead == 'o') ADVANCE(1157);
      END_STATE();
    case 1076:
      if (lookahead == 'o') ADVANCE(1205);
      END_STATE();
    case 1077:
      if (lookahead == 'o') ADVANCE(1128);
      END_STATE();
    case 1078:
      if (lookahead == 'o') ADVANCE(915);
      END_STATE();
    case 1079:
      if (lookahead == 'o') ADVANCE(1277);
      END_STATE();
    case 1080:
      if (lookahead == 'o') ADVANCE(1292);
      END_STATE();
    case 1081:
      if (lookahead == 'o') ADVANCE(1032);
      END_STATE();
    case 1082:
      if (lookahead == 'o') ADVANCE(1288);
      END_STATE();
    case 1083:
      if (lookahead == 'o') ADVANCE(1289);
      END_STATE();
    case 1084:
      if (lookahead == 'o') ADVANCE(1152);
      END_STATE();
    case 1085:
      if (lookahead == 'o') ADVANCE(1054);
      END_STATE();
    case 1086:
      if (lookahead == 'o') ADVANCE(766);
      END_STATE();
    case 1087:
      if (lookahead == 'o') ADVANCE(1245);
      END_STATE();
    case 1088:
      if (lookahead == 'o') ADVANCE(1041);
      END_STATE();
    case 1089:
      if (lookahead == 'o') ADVANCE(1176);
      END_STATE();
    case 1090:
      if (lookahead == 'o') ADVANCE(1017);
      END_STATE();
    case 1091:
      if (lookahead == 'o') ADVANCE(1068);
      END_STATE();
    case 1092:
      if (lookahead == 'o') ADVANCE(1177);
      END_STATE();
    case 1093:
      if (lookahead == 'o') ADVANCE(1042);
      END_STATE();
    case 1094:
      if (lookahead == 'o') ADVANCE(1123);
      END_STATE();
    case 1095:
      if (lookahead == 'o') ADVANCE(1043);
      END_STATE();
    case 1096:
      if (lookahead == 'o') ADVANCE(1154);
      END_STATE();
    case 1097:
      if (lookahead == 'o') ADVANCE(740);
      END_STATE();
    case 1098:
      if (lookahead == 'o') ADVANCE(1255);
      END_STATE();
    case 1099:
      if (lookahead == 'o') ADVANCE(1044);
      END_STATE();
    case 1100:
      if (lookahead == 'o') ADVANCE(1045);
      END_STATE();
    case 1101:
      if (lookahead == 'o') ADVANCE(1046);
      END_STATE();
    case 1102:
      if (lookahead == 'o') ADVANCE(1155);
      END_STATE();
    case 1103:
      if (lookahead == 'o') ADVANCE(1047);
      END_STATE();
    case 1104:
      if (lookahead == 'o') ADVANCE(1172);
      END_STATE();
    case 1105:
      if (lookahead == 'o') ADVANCE(1050);
      END_STATE();
    case 1106:
      if (lookahead == 'o') ADVANCE(1048);
      END_STATE();
    case 1107:
      if (lookahead == 'o') ADVANCE(1161);
      END_STATE();
    case 1108:
      if (lookahead == 'o') ADVANCE(898);
      END_STATE();
    case 1109:
      if (lookahead == 'o') ADVANCE(1058);
      END_STATE();
    case 1110:
      if (lookahead == 'o') ADVANCE(1094);
      END_STATE();
    case 1111:
      if (lookahead == 'o') ADVANCE(1064);
      END_STATE();
    case 1112:
      if (lookahead == 'o') ADVANCE(1059);
      END_STATE();
    case 1113:
      if (lookahead == 'o') ADVANCE(792);
      END_STATE();
    case 1114:
      if (lookahead == 'o') ADVANCE(1062);
      END_STATE();
    case 1115:
      if (lookahead == 'o') ADVANCE(1063);
      END_STATE();
    case 1116:
      if (lookahead == 'o') ADVANCE(1142);
      END_STATE();
    case 1117:
      if (lookahead == 'o') ADVANCE(1007);
      END_STATE();
    case 1118:
      if (lookahead == 'o') ADVANCE(781);
      END_STATE();
    case 1119:
      if (lookahead == 'o') ADVANCE(1020);
      END_STATE();
    case 1120:
      if (lookahead == 'o') ADVANCE(1018);
      if (lookahead == 'u') ADVANCE(988);
      END_STATE();
    case 1121:
      if (lookahead == 'o') ADVANCE(1179);
      END_STATE();
    case 1122:
      if (lookahead == 'o') ADVANCE(1116);
      END_STATE();
    case 1123:
      if (lookahead == 'p') ADVANCE(1478);
      END_STATE();
    case 1124:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 1125:
      if (lookahead == 'p') ADVANCE(837);
      END_STATE();
    case 1126:
      if (lookahead == 'p') ADVANCE(904);
      END_STATE();
    case 1127:
      if (lookahead == 'p') ADVANCE(1143);
      END_STATE();
    case 1128:
      if (lookahead == 'p') ADVANCE(929);
      END_STATE();
    case 1129:
      if (lookahead == 'p') ADVANCE(751);
      END_STATE();
    case 1130:
      if (lookahead == 'p') ADVANCE(1201);
      END_STATE();
    case 1131:
      if (lookahead == 'p') ADVANCE(856);
      END_STATE();
    case 1132:
      if (lookahead == 'p') ADVANCE(814);
      END_STATE();
    case 1133:
      if (lookahead == 'p') ADVANCE(817);
      END_STATE();
    case 1134:
      if (lookahead == 'p') ADVANCE(818);
      END_STATE();
    case 1135:
      if (lookahead == 'p') ADVANCE(819);
      END_STATE();
    case 1136:
      if (lookahead == 'p') ADVANCE(822);
      END_STATE();
    case 1137:
      if (lookahead == 'p') ADVANCE(823);
      END_STATE();
    case 1138:
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 1139:
      if (lookahead == 'p') ADVANCE(824);
      END_STATE();
    case 1140:
      if (lookahead == 'p') ADVANCE(827);
      END_STATE();
    case 1141:
      if (lookahead == 'p') ADVANCE(1187);
      END_STATE();
    case 1142:
      if (lookahead == 'p') ADVANCE(940);
      END_STATE();
    case 1143:
      if (lookahead == 'p') ADVANCE(1092);
      END_STATE();
    case 1144:
      if (lookahead == 'p') ADVANCE(742);
      END_STATE();
    case 1145:
      if (lookahead == 'p') ADVANCE(857);
      END_STATE();
    case 1146:
      if (lookahead == 'p') ADVANCE(1251);
      END_STATE();
    case 1147:
      if (lookahead == 'p') ADVANCE(907);
      END_STATE();
    case 1148:
      if (lookahead == 'p') ADVANCE(908);
      END_STATE();
    case 1149:
      if (lookahead == 'p') ADVANCE(1188);
      END_STATE();
    case 1150:
      if (lookahead == 'p') ADVANCE(1189);
      END_STATE();
    case 1151:
      if (lookahead == 'r') ADVANCE(794);
      END_STATE();
    case 1152:
      if (lookahead == 'r') ADVANCE(1452);
      END_STATE();
    case 1153:
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 1154:
      if (lookahead == 'r') ADVANCE(1474);
      END_STATE();
    case 1155:
      if (lookahead == 'r') ADVANCE(1451);
      END_STATE();
    case 1156:
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 1157:
      if (lookahead == 'r') ADVANCE(927);
      END_STATE();
    case 1158:
      if (lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 1159:
      if (lookahead == 'r') ADVANCE(1219);
      END_STATE();
    case 1160:
      if (lookahead == 'r') ADVANCE(1012);
      END_STATE();
    case 1161:
      if (lookahead == 'r') ADVANCE(1305);
      END_STATE();
    case 1162:
      if (lookahead == 'r') ADVANCE(901);
      END_STATE();
    case 1163:
      if (lookahead == 'r') ADVANCE(739);
      END_STATE();
    case 1164:
      if (lookahead == 'r') ADVANCE(709);
      END_STATE();
    case 1165:
      if (lookahead == 'r') ADVANCE(808);
      END_STATE();
    case 1166:
      if (lookahead == 'r') ADVANCE(851);
      END_STATE();
    case 1167:
      if (lookahead == 'r') ADVANCE(1083);
      END_STATE();
    case 1168:
      if (lookahead == 'r') ADVANCE(1262);
      END_STATE();
    case 1169:
      if (lookahead == 'r') ADVANCE(843);
      END_STATE();
    case 1170:
      if (lookahead == 'r') ADVANCE(810);
      END_STATE();
    case 1171:
      if (lookahead == 'r') ADVANCE(811);
      END_STATE();
    case 1172:
      if (lookahead == 'r') ADVANCE(1202);
      END_STATE();
    case 1173:
      if (lookahead == 'r') ADVANCE(874);
      END_STATE();
    case 1174:
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 1175:
      if (lookahead == 'r') ADVANCE(1208);
      END_STATE();
    case 1176:
      if (lookahead == 'r') ADVANCE(705);
      END_STATE();
    case 1177:
      if (lookahead == 'r') ADVANCE(1248);
      END_STATE();
    case 1178:
      if (lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 1179:
      if (lookahead == 'r') ADVANCE(795);
      END_STATE();
    case 1180:
      if (lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 1181:
      if (lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 1182:
      if (lookahead == 'r') ADVANCE(1220);
      END_STATE();
    case 1183:
      if (lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 1184:
      if (lookahead == 'r') ADVANCE(750);
      END_STATE();
    case 1185:
      if (lookahead == 'r') ADVANCE(884);
      END_STATE();
    case 1186:
      if (lookahead == 'r') ADVANCE(887);
      END_STATE();
    case 1187:
      if (lookahead == 'r') ADVANCE(964);
      END_STATE();
    case 1188:
      if (lookahead == 'r') ADVANCE(966);
      END_STATE();
    case 1189:
      if (lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 1190:
      if (lookahead == 's') ADVANCE(976);
      END_STATE();
    case 1191:
      if (lookahead == 's') ADVANCE(1501);
      END_STATE();
    case 1192:
      if (lookahead == 's') ADVANCE(1381);
      END_STATE();
    case 1193:
      if (lookahead == 's') ADVANCE(763);
      END_STATE();
    case 1194:
      if (lookahead == 's') ADVANCE(1414);
      END_STATE();
    case 1195:
      if (lookahead == 's') ADVANCE(1352);
      END_STATE();
    case 1196:
      if (lookahead == 's') ADVANCE(1351);
      END_STATE();
    case 1197:
      if (lookahead == 's') ADVANCE(1348);
      END_STATE();
    case 1198:
      if (lookahead == 's') ADVANCE(1404);
      END_STATE();
    case 1199:
      if (lookahead == 's') ADVANCE(1416);
      END_STATE();
    case 1200:
      if (lookahead == 's') ADVANCE(1439);
      END_STATE();
    case 1201:
      if (lookahead == 's') ADVANCE(1475);
      END_STATE();
    case 1202:
      if (lookahead == 's') ADVANCE(1359);
      END_STATE();
    case 1203:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 1204:
      if (lookahead == 's') ADVANCE(920);
      END_STATE();
    case 1205:
      if (lookahead == 's') ADVANCE(930);
      END_STATE();
    case 1206:
      if (lookahead == 's') ADVANCE(978);
      END_STATE();
    case 1207:
      if (lookahead == 's') ADVANCE(1079);
      END_STATE();
    case 1208:
      if (lookahead == 's') ADVANCE(941);
      END_STATE();
    case 1209:
      if (lookahead == 's') ADVANCE(1129);
      END_STATE();
    case 1210:
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 1211:
      if (lookahead == 's') ADVANCE(1193);
      END_STATE();
    case 1212:
      if (lookahead == 's') ADVANCE(714);
      END_STATE();
    case 1213:
      if (lookahead == 's') ADVANCE(880);
      END_STATE();
    case 1214:
      if (lookahead == 's') ADVANCE(1253);
      END_STATE();
    case 1215:
      if (lookahead == 's') ADVANCE(1257);
      END_STATE();
    case 1216:
      if (lookahead == 's') ADVANCE(862);
      END_STATE();
    case 1217:
      if (lookahead == 's') ADVANCE(864);
      END_STATE();
    case 1218:
      if (lookahead == 's') ADVANCE(1244);
      END_STATE();
    case 1219:
      if (lookahead == 's') ADVANCE(1089);
      END_STATE();
    case 1220:
      if (lookahead == 's') ADVANCE(950);
      END_STATE();
    case 1221:
      if (lookahead == 's') ADVANCE(957);
      END_STATE();
    case 1222:
      if (lookahead == 's') ADVANCE(1221);
      END_STATE();
    case 1223:
      if (lookahead == 's') ADVANCE(760);
      END_STATE();
    case 1224:
      if (lookahead == 't') ADVANCE(1454);
      END_STATE();
    case 1225:
      if (lookahead == 't') ADVANCE(1450);
      END_STATE();
    case 1226:
      if (lookahead == 't') ADVANCE(842);
      END_STATE();
    case 1227:
      if (lookahead == 't') ADVANCE(1456);
      END_STATE();
    case 1228:
      if (lookahead == 't') ADVANCE(689);
      END_STATE();
    case 1229:
      if (lookahead == 't') ADVANCE(1361);
      END_STATE();
    case 1230:
      if (lookahead == 't') ADVANCE(1406);
      END_STATE();
    case 1231:
      if (lookahead == 't') ADVANCE(1358);
      END_STATE();
    case 1232:
      if (lookahead == 't') ADVANCE(1442);
      END_STATE();
    case 1233:
      if (lookahead == 't') ADVANCE(1429);
      END_STATE();
    case 1234:
      if (lookahead == 't') ADVANCE(762);
      END_STATE();
    case 1235:
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 1236:
      if (lookahead == 't') ADVANCE(1360);
      END_STATE();
    case 1237:
      if (lookahead == 't') ADVANCE(1449);
      END_STATE();
    case 1238:
      if (lookahead == 't') ADVANCE(1279);
      END_STATE();
    case 1239:
      if (lookahead == 't') ADVANCE(916);
      if (lookahead == 'u') ADVANCE(1213);
      END_STATE();
    case 1240:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 1241:
      if (lookahead == 't') ADVANCE(917);
      END_STATE();
    case 1242:
      if (lookahead == 't') ADVANCE(1165);
      END_STATE();
    case 1243:
      if (lookahead == 't') ADVANCE(734);
      END_STATE();
    case 1244:
      if (lookahead == 't') ADVANCE(1163);
      END_STATE();
    case 1245:
      if (lookahead == 't') ADVANCE(841);
      END_STATE();
    case 1246:
      if (lookahead == 't') ADVANCE(881);
      END_STATE();
    case 1247:
      if (lookahead == 't') ADVANCE(1195);
      END_STATE();
    case 1248:
      if (lookahead == 't') ADVANCE(845);
      END_STATE();
    case 1249:
      if (lookahead == 't') ADVANCE(1203);
      END_STATE();
    case 1250:
      if (lookahead == 't') ADVANCE(853);
      END_STATE();
    case 1251:
      if (lookahead == 't') ADVANCE(867);
      END_STATE();
    case 1252:
      if (lookahead == 't') ADVANCE(1024);
      END_STATE();
    case 1253:
      if (lookahead == 't') ADVANCE(741);
      END_STATE();
    case 1254:
      if (lookahead == 't') ADVANCE(869);
      END_STATE();
    case 1255:
      if (lookahead == 't') ADVANCE(755);
      END_STATE();
    case 1256:
      if (lookahead == 't') ADVANCE(865);
      END_STATE();
    case 1257:
      if (lookahead == 't') ADVANCE(1107);
      END_STATE();
    case 1258:
      if (lookahead == 't') ADVANCE(1280);
      END_STATE();
    case 1259:
      if (lookahead == 't') ADVANCE(946);
      END_STATE();
    case 1260:
      if (lookahead == 't') ADVANCE(1282);
      END_STATE();
    case 1261:
      if (lookahead == 't') ADVANCE(948);
      END_STATE();
    case 1262:
      if (lookahead == 't') ADVANCE(1312);
      END_STATE();
    case 1263:
      if (lookahead == 't') ADVANCE(952);
      END_STATE();
    case 1264:
      if (lookahead == 't') ADVANCE(954);
      END_STATE();
    case 1265:
      if (lookahead == 't') ADVANCE(959);
      END_STATE();
    case 1266:
      if (lookahead == 't') ADVANCE(955);
      END_STATE();
    case 1267:
      if (lookahead == 't') ADVANCE(1036);
      END_STATE();
    case 1268:
      if (lookahead == 't') ADVANCE(1281);
      END_STATE();
    case 1269:
      if (lookahead == 't') ADVANCE(1037);
      END_STATE();
    case 1270:
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 1271:
      if (lookahead == 't') ADVANCE(1283);
      END_STATE();
    case 1272:
      if (lookahead == 't') ADVANCE(888);
      END_STATE();
    case 1273:
      if (lookahead == 't') ADVANCE(889);
      END_STATE();
    case 1274:
      if (lookahead == 't') ADVANCE(890);
      END_STATE();
    case 1275:
      if (lookahead == 't') ADVANCE(891);
      END_STATE();
    case 1276:
      if (lookahead == 'u') ADVANCE(805);
      END_STATE();
    case 1277:
      if (lookahead == 'u') ADVANCE(1056);
      END_STATE();
    case 1278:
      if (lookahead == 'u') ADVANCE(1213);
      END_STATE();
    case 1279:
      if (lookahead == 'u') ADVANCE(1170);
      END_STATE();
    case 1280:
      if (lookahead == 'u') ADVANCE(1174);
      END_STATE();
    case 1281:
      if (lookahead == 'u') ADVANCE(1181);
      END_STATE();
    case 1282:
      if (lookahead == 'u') ADVANCE(1185);
      END_STATE();
    case 1283:
      if (lookahead == 'u') ADVANCE(1186);
      END_STATE();
    case 1284:
      if (lookahead == 'v') ADVANCE(809);
      END_STATE();
    case 1285:
      if (lookahead == 'v') ADVANCE(839);
      END_STATE();
    case 1286:
      if (lookahead == 'v') ADVANCE(878);
      END_STATE();
    case 1287:
      if (lookahead == 'v') ADVANCE(882);
      END_STATE();
    case 1288:
      if (lookahead == 'w') ADVANCE(1477);
      END_STATE();
    case 1289:
      if (lookahead == 'w') ADVANCE(1415);
      END_STATE();
    case 1290:
      if (lookahead == 'w') ADVANCE(725);
      END_STATE();
    case 1291:
      if (lookahead == 'w') ADVANCE(1073);
      END_STATE();
    case 1292:
      if (lookahead == 'w') ADVANCE(1199);
      END_STATE();
    case 1293:
      if (lookahead == 'x') ADVANCE(353);
      END_STATE();
    case 1294:
      if (lookahead == 'x') ADVANCE(1225);
      END_STATE();
    case 1295:
      if (lookahead == 'x') ADVANCE(1231);
      END_STATE();
    case 1296:
      if (lookahead == 'x') ADVANCE(1234);
      END_STATE();
    case 1297:
      if (lookahead == 'x') ADVANCE(1235);
      END_STATE();
    case 1298:
      if (lookahead == 'x') ADVANCE(1237);
      END_STATE();
    case 1299:
      if (lookahead == 'x') ADVANCE(1258);
      END_STATE();
    case 1300:
      if (lookahead == 'x') ADVANCE(1260);
      END_STATE();
    case 1301:
      if (lookahead == 'x') ADVANCE(1268);
      END_STATE();
    case 1302:
      if (lookahead == 'x') ADVANCE(1271);
      END_STATE();
    case 1303:
      if (lookahead == 'y') ADVANCE(1428);
      END_STATE();
    case 1304:
      if (lookahead == 'y') ADVANCE(701);
      END_STATE();
    case 1305:
      if (lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 1306:
      if (lookahead == 'y') ADVANCE(703);
      END_STATE();
    case 1307:
      if (lookahead == 'y') ADVANCE(698);
      END_STATE();
    case 1308:
      if (lookahead == 'y') ADVANCE(1218);
      END_STATE();
    case 1309:
      if (lookahead == 'y') ADVANCE(1131);
      END_STATE();
    case 1310:
      if (lookahead == 'y') ADVANCE(1132);
      END_STATE();
    case 1311:
      if (lookahead == 'y') ADVANCE(1133);
      END_STATE();
    case 1312:
      if (lookahead == 'y') ADVANCE(1134);
      END_STATE();
    case 1313:
      if (lookahead == 'y') ADVANCE(1135);
      END_STATE();
    case 1314:
      if (lookahead == 'y') ADVANCE(1136);
      END_STATE();
    case 1315:
      if (lookahead == 'y') ADVANCE(1137);
      END_STATE();
    case 1316:
      if (lookahead == 'y') ADVANCE(1138);
      END_STATE();
    case 1317:
      if (lookahead == 'y') ADVANCE(1139);
      END_STATE();
    case 1318:
      if (lookahead == 'y') ADVANCE(713);
      END_STATE();
    case 1319:
      if (lookahead == 'z') ADVANCE(1109);
      END_STATE();
    case 1320:
      if (lookahead == 'z') ADVANCE(804);
      END_STATE();
    case 1321:
      if (lookahead == 'z') ADVANCE(812);
      END_STATE();
    case 1322:
      if (lookahead == 'z') ADVANCE(1318);
      END_STATE();
    case 1323:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(945);
      END_STATE();
    case 1324:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(951);
      END_STATE();
    case 1325:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(956);
      END_STATE();
    case 1326:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(958);
      END_STATE();
    case 1327:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1485);
      END_STATE();
    case 1328:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1486);
      END_STATE();
    case 1329:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1487);
      END_STATE();
    case 1330:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1488);
      END_STATE();
    case 1331:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1489);
      END_STATE();
    case 1332:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 1333:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      END_STATE();
    case 1334:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1498);
      END_STATE();
    case 1335:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1497);
      END_STATE();
    case 1336:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 1337:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1335);
      END_STATE();
    case 1338:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1336);
      END_STATE();
    case 1339:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1337);
      END_STATE();
    case 1340:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1338);
      END_STATE();
    case 1341:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1339);
      END_STATE();
    case 1342:
      if (eof) ADVANCE(1347);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 1343:
      if (eof) ADVANCE(1347);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(1342)
      END_STATE();
    case 1344:
      if (eof) ADVANCE(1347);
      if (lookahead == '\n') SKIP(1346)
      END_STATE();
    case 1345:
      if (eof) ADVANCE(1347);
      if (lookahead == '\n') SKIP(1346)
      if (lookahead == '\r') SKIP(1344)
      END_STATE();
    case 1346:
      if (eof) ADVANCE(1347);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(1504);
      if (lookahead == '=') ADVANCE(1480);
      if (lookahead == '\\') SKIP(1345)
      if (lookahead == 'a') ADVANCE(982);
      if (lookahead == 'b') ADVANCE(963);
      if (lookahead == 'c') ADVANCE(1011);
      if (lookahead == 'd') ADVANCE(799);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'h') ADVANCE(1075);
      if (lookahead == 'l') ADVANCE(801);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead == 'o') ADVANCE(761);
      if (lookahead == 'p') ADVANCE(718);
      if (lookahead == 'r') ADVANCE(802);
      if (lookahead == 's') ADVANCE(923);
      if (lookahead == 't') ADVANCE(724);
      if (lookahead == 'v') ADVANCE(836);
      if (lookahead == 'x') ADVANCE(1365);
      if (lookahead == 'y') ADVANCE(1366);
      if (lookahead == '}') ADVANCE(1350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1346)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1490);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_objectTypes);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_bitmapfonts);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(1348);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_textSpriteType);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_corneredTileSpriteType);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_maskedShieldType);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_animatedmaptext);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_textcolors);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      if (lookahead == 's') ADVANCE(1352);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_frameAnimatedSpriteType);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_progressbartype);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(1191);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym__statement_gfx_name_token1);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '1') ADVANCE(1411);
      if (lookahead == '2') ADVANCE(1412);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (lookahead == '1') ADVANCE(1411);
      if (lookahead == '2') ADVANCE(1412);
      if (lookahead == '3') ADVANCE(1413);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token2);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile1_token1);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile2_token1);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile3_token1);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1178);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1178);
      if (lookahead == 'b') ADVANCE(999);
      if (lookahead == 'd') ADVANCE(870);
      if (lookahead == 'f') ADVANCE(1184);
      if (lookahead == 'l') ADVANCE(1122);
      if (lookahead == 'm') ADVANCE(743);
      if (lookahead == 'r') ADVANCE(1098);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(905);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_borderSize);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_allwaystransparent);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_legacy_lazy_load);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_clicksound);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == 's') ADVANCE(1079);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_speed);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_textblock);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'S') ADVANCE(1141);
      if (lookahead == 'b') ADVANCE(991);
      if (lookahead == 'u') ADVANCE(1171);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == 't') ADVANCE(1291);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_colortwo);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_cull_distance);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym__statement_gfx_cull_distance_token1);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'i') ADVANCE(1252);
      if (lookahead == 'o') ADVANCE(1151);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(913);
      if (lookahead == 'o') ADVANCE(1077);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_border_color);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_animation_rate_fps);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_looping);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_play_on_show);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_pause_on_loop);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1328);
      if (lookahead == '5') ADVANCE(1484);
      if (lookahead == 'f') ADVANCE(1482);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1485);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1328);
      if (lookahead == 'f') ADVANCE(1482);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1485);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1328);
      if (lookahead == 'f') ADVANCE(1482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1485);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(1482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1486);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1487);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1488);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1489);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1490);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead == '5') ADVANCE(1493);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1494);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1491);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1491);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1494);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_hexadecimal);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1340);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'O') ADVANCE(893);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1504);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1346},
  [2] = {.lex_state = 1346},
  [3] = {.lex_state = 1346},
  [4] = {.lex_state = 1346},
  [5] = {.lex_state = 1346},
  [6] = {.lex_state = 1346},
  [7] = {.lex_state = 429},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1346},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 429},
  [12] = {.lex_state = 429},
  [13] = {.lex_state = 429},
  [14] = {.lex_state = 1346},
  [15] = {.lex_state = 1346},
  [16] = {.lex_state = 1346},
  [17] = {.lex_state = 429},
  [18] = {.lex_state = 429},
  [19] = {.lex_state = 429},
  [20] = {.lex_state = 430},
  [21] = {.lex_state = 431},
  [22] = {.lex_state = 431},
  [23] = {.lex_state = 430},
  [24] = {.lex_state = 431},
  [25] = {.lex_state = 429},
  [26] = {.lex_state = 432},
  [27] = {.lex_state = 430},
  [28] = {.lex_state = 429},
  [29] = {.lex_state = 429},
  [30] = {.lex_state = 432},
  [31] = {.lex_state = 432},
  [32] = {.lex_state = 432},
  [33] = {.lex_state = 433},
  [34] = {.lex_state = 433},
  [35] = {.lex_state = 429},
  [36] = {.lex_state = 429},
  [37] = {.lex_state = 429},
  [38] = {.lex_state = 433},
  [39] = {.lex_state = 430},
  [40] = {.lex_state = 434},
  [41] = {.lex_state = 430},
  [42] = {.lex_state = 430},
  [43] = {.lex_state = 430},
  [44] = {.lex_state = 430},
  [45] = {.lex_state = 429},
  [46] = {.lex_state = 434},
  [47] = {.lex_state = 429},
  [48] = {.lex_state = 430},
  [49] = {.lex_state = 429},
  [50] = {.lex_state = 430},
  [51] = {.lex_state = 429},
  [52] = {.lex_state = 429},
  [53] = {.lex_state = 429},
  [54] = {.lex_state = 429},
  [55] = {.lex_state = 430},
  [56] = {.lex_state = 429},
  [57] = {.lex_state = 429},
  [58] = {.lex_state = 429},
  [59] = {.lex_state = 429},
  [60] = {.lex_state = 429},
  [61] = {.lex_state = 429},
  [62] = {.lex_state = 429},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 430},
  [67] = {.lex_state = 429},
  [68] = {.lex_state = 429},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 430},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 429},
  [74] = {.lex_state = 429},
  [75] = {.lex_state = 429},
  [76] = {.lex_state = 429},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 429},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 429},
  [82] = {.lex_state = 429},
  [83] = {.lex_state = 429},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 429},
  [86] = {.lex_state = 430},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 430},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 429},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 429},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 429},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 430},
  [106] = {.lex_state = 429},
  [107] = {.lex_state = 430},
  [108] = {.lex_state = 429},
  [109] = {.lex_state = 429},
  [110] = {.lex_state = 430},
  [111] = {.lex_state = 431},
  [112] = {.lex_state = 429},
  [113] = {.lex_state = 431},
  [114] = {.lex_state = 431},
  [115] = {.lex_state = 433},
  [116] = {.lex_state = 430},
  [117] = {.lex_state = 433},
  [118] = {.lex_state = 433},
  [119] = {.lex_state = 433},
  [120] = {.lex_state = 430},
  [121] = {.lex_state = 433},
  [122] = {.lex_state = 431},
  [123] = {.lex_state = 433},
  [124] = {.lex_state = 431},
  [125] = {.lex_state = 429},
  [126] = {.lex_state = 429},
  [127] = {.lex_state = 433},
  [128] = {.lex_state = 430},
  [129] = {.lex_state = 431},
  [130] = {.lex_state = 430},
  [131] = {.lex_state = 431},
  [132] = {.lex_state = 431},
  [133] = {.lex_state = 433},
  [134] = {.lex_state = 429},
  [135] = {.lex_state = 430},
  [136] = {.lex_state = 429},
  [137] = {.lex_state = 429},
  [138] = {.lex_state = 433},
  [139] = {.lex_state = 429},
  [140] = {.lex_state = 429},
  [141] = {.lex_state = 429},
  [142] = {.lex_state = 429},
  [143] = {.lex_state = 429},
  [144] = {.lex_state = 433},
  [145] = {.lex_state = 429},
  [146] = {.lex_state = 433},
  [147] = {.lex_state = 1346},
  [148] = {.lex_state = 433},
  [149] = {.lex_state = 1346},
  [150] = {.lex_state = 429},
  [151] = {.lex_state = 429},
  [152] = {.lex_state = 1346},
  [153] = {.lex_state = 1346},
  [154] = {.lex_state = 429},
  [155] = {.lex_state = 429},
  [156] = {.lex_state = 429},
  [157] = {.lex_state = 429},
  [158] = {.lex_state = 429},
  [159] = {.lex_state = 429},
  [160] = {.lex_state = 429},
  [161] = {.lex_state = 429},
  [162] = {.lex_state = 429},
  [163] = {.lex_state = 429},
  [164] = {.lex_state = 429},
  [165] = {.lex_state = 433},
  [166] = {.lex_state = 429},
  [167] = {.lex_state = 433},
  [168] = {.lex_state = 429},
  [169] = {.lex_state = 429},
  [170] = {.lex_state = 429},
  [171] = {.lex_state = 429},
  [172] = {.lex_state = 1346},
  [173] = {.lex_state = 429},
  [174] = {.lex_state = 429},
  [175] = {.lex_state = 429},
  [176] = {.lex_state = 429},
  [177] = {.lex_state = 430},
  [178] = {.lex_state = 429},
  [179] = {.lex_state = 429},
  [180] = {.lex_state = 429},
  [181] = {.lex_state = 429},
  [182] = {.lex_state = 429},
  [183] = {.lex_state = 429},
  [184] = {.lex_state = 429},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1346},
  [188] = {.lex_state = 1346},
  [189] = {.lex_state = 1346},
  [190] = {.lex_state = 1346},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1346},
  [193] = {.lex_state = 1346},
  [194] = {.lex_state = 1346},
  [195] = {.lex_state = 1346},
  [196] = {.lex_state = 1346},
  [197] = {.lex_state = 1346},
  [198] = {.lex_state = 1346},
  [199] = {.lex_state = 1346},
  [200] = {.lex_state = 1346},
  [201] = {.lex_state = 1346},
  [202] = {.lex_state = 1346},
  [203] = {.lex_state = 1346},
  [204] = {.lex_state = 1346},
  [205] = {.lex_state = 1346},
  [206] = {.lex_state = 1346},
  [207] = {.lex_state = 1346},
  [208] = {.lex_state = 1346},
  [209] = {.lex_state = 1346},
  [210] = {.lex_state = 433},
  [211] = {.lex_state = 1346},
  [212] = {.lex_state = 429},
  [213] = {.lex_state = 429},
  [214] = {.lex_state = 429},
  [215] = {.lex_state = 1346},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 429},
  [218] = {.lex_state = 429},
  [219] = {.lex_state = 433},
  [220] = {.lex_state = 1346},
  [221] = {.lex_state = 433},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 433},
  [224] = {.lex_state = 1346},
  [225] = {.lex_state = 433},
  [226] = {.lex_state = 429},
  [227] = {.lex_state = 429},
  [228] = {.lex_state = 433},
  [229] = {.lex_state = 1346},
  [230] = {.lex_state = 1346},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 429},
  [234] = {.lex_state = 429},
  [235] = {.lex_state = 429},
  [236] = {.lex_state = 429},
  [237] = {.lex_state = 430},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 429},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 1346},
  [246] = {.lex_state = 429},
  [247] = {.lex_state = 1346},
  [248] = {.lex_state = 429},
  [249] = {.lex_state = 429},
  [250] = {.lex_state = 431},
  [251] = {.lex_state = 429},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 1346},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 1346},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 429},
  [259] = {.lex_state = 429},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 1346},
  [262] = {.lex_state = 1346},
  [263] = {.lex_state = 1346},
  [264] = {.lex_state = 1346},
  [265] = {.lex_state = 429},
  [266] = {.lex_state = 430},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 429},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 429},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 429},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 430},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 430},
  [284] = {.lex_state = 430},
  [285] = {.lex_state = 429},
  [286] = {.lex_state = 429},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 431},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 432},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 433},
  [295] = {.lex_state = 1346},
  [296] = {.lex_state = 432},
  [297] = {.lex_state = 430},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 1346},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 430},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 430},
  [318] = {.lex_state = 1346},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 1346},
  [321] = {.lex_state = 430},
  [322] = {.lex_state = 430},
  [323] = {.lex_state = 431},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 1346},
  [326] = {.lex_state = 1346},
  [327] = {.lex_state = 429},
  [328] = {.lex_state = 429},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 432},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 429},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 431},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 431},
  [344] = {.lex_state = 430},
  [345] = {.lex_state = 0},
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
    [anon_sym_animationframes] = ACTIONS(1),
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
    [sym_file] = STATE(335),
    [sym_dot_mod] = STATE(334),
    [sym_dot_gfx] = STATE(334),
    [sym__spriteTypes] = STATE(149),
    [sym__objectTypes] = STATE(149),
    [sym__bitmapfonts] = STATE(149),
    [sym__statement_name] = STATE(10),
    [sym__statement_mod_path] = STATE(10),
    [sym__statement_mod_archive] = STATE(10),
    [sym__statement_mod_remote_file_id] = STATE(10),
    [sym__statement_mod_version] = STATE(10),
    [sym__statement_mod_picture] = STATE(10),
    [sym__statement_mod_supported_version] = STATE(10),
    [sym__statement_mod_replace_path] = STATE(10),
    [sym__statement_mod_tags] = STATE(10),
    [sym__statement_mod_dependencies] = STATE(10),
    [aux_sym_dot_mod_repeat1] = STATE(10),
    [aux_sym_dot_gfx_repeat1] = STATE(149),
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
    ACTIONS(31), 22,
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
  [36] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(3), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(39), 22,
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
  [71] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(42), 22,
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
  [104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(48), 22,
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
  [139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(3), 2,
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
  [174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_animationrotation,
    ACTIONS(54), 23,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
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
      anon_sym_allwaystransparent,
      anon_sym_speed,
      anon_sym_textblock,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
      aux_sym_float_token1,
  [206] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_name,
    ACTIONS(63), 1,
      anon_sym_path,
    ACTIONS(66), 1,
      anon_sym_archive,
    ACTIONS(69), 1,
      anon_sym_remote_file_id,
    ACTIONS(72), 1,
      anon_sym_version,
    ACTIONS(75), 1,
      anon_sym_picture,
    ACTIONS(78), 1,
      anon_sym_supported_version,
    ACTIONS(81), 1,
      anon_sym_replace_path,
    ACTIONS(84), 1,
      anon_sym_tags,
    ACTIONS(87), 1,
      anon_sym_dependencies,
    STATE(8), 11,
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
  [256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_assign_equal,
    ACTIONS(92), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(90), 18,
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
  [288] = 13,
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
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(8), 11,
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
  [338] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      anon_sym_animationrotation,
    ACTIONS(106), 1,
      anon_sym_animationlooping,
    ACTIONS(115), 1,
      anon_sym_animationblendmode,
    ACTIONS(118), 1,
      anon_sym_animationtype,
    ACTIONS(121), 1,
      anon_sym_animationframes,
    ACTIONS(100), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(109), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(112), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(11), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [383] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_animationrotation,
    ACTIONS(130), 1,
      anon_sym_animationlooping,
    ACTIONS(136), 1,
      anon_sym_animationblendmode,
    ACTIONS(138), 1,
      anon_sym_animationtype,
    ACTIONS(140), 1,
      anon_sym_animationframes,
    ACTIONS(126), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(132), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(134), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(11), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [428] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_animationrotation,
    ACTIONS(130), 1,
      anon_sym_animationlooping,
    ACTIONS(136), 1,
      anon_sym_animationblendmode,
    ACTIONS(138), 1,
      anon_sym_animationtype,
    ACTIONS(140), 1,
      anon_sym_animationframes,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(132), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(134), 2,
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
  [473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
      anon_sym_color,
    ACTIONS(144), 18,
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
  [502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_assign_equal,
    ACTIONS(150), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(148), 18,
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
  [533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_animation,
    ACTIONS(154), 18,
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
  [561] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(162), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(164), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(168), 1,
      anon_sym_allwaystransparent,
    ACTIONS(170), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(172), 1,
      anon_sym_looping,
    ACTIONS(174), 1,
      anon_sym_play_on_show,
    ACTIONS(176), 1,
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
  [607] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      anon_sym_name,
    ACTIONS(183), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(186), 1,
      anon_sym_noOfFrames,
    ACTIONS(189), 1,
      anon_sym_effectFile,
    ACTIONS(192), 1,
      anon_sym_allwaystransparent,
    ACTIONS(195), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(198), 1,
      anon_sym_looping,
    ACTIONS(201), 1,
      anon_sym_play_on_show,
    ACTIONS(204), 1,
      anon_sym_pause_on_loop,
    STATE(18), 10,
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
  [653] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(162), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(164), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(168), 1,
      anon_sym_allwaystransparent,
    ACTIONS(170), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(172), 1,
      anon_sym_looping,
    ACTIONS(174), 1,
      anon_sym_play_on_show,
    ACTIONS(176), 1,
      anon_sym_pause_on_loop,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(18), 10,
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
  [699] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(213), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(215), 1,
      anon_sym_size,
    ACTIONS(217), 1,
      anon_sym_color,
    ACTIONS(219), 1,
      anon_sym_colortwo,
    ACTIONS(221), 1,
      anon_sym_horizontal,
    STATE(116), 2,
      sym__statement_gfx_size,
      sym__statement_gfx_color,
    STATE(23), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      aux_sym__progressbartype_block_repeat1,
  [743] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(162), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(164), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(168), 1,
      anon_sym_allwaystransparent,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(227), 1,
      anon_sym_overlay_rows,
    ACTIONS(229), 1,
      anon_sym_animation,
    STATE(22), 9,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_allwaystransparent,
      aux_sym__spriteType_block_repeat1,
  [785] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(162), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(164), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(168), 1,
      anon_sym_allwaystransparent,
    ACTIONS(225), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(227), 1,
      anon_sym_overlay_rows,
    ACTIONS(229), 1,
      anon_sym_animation,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(24), 9,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_allwaystransparent,
      aux_sym__spriteType_block_repeat1,
  [827] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(211), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(213), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(215), 1,
      anon_sym_size,
    ACTIONS(217), 1,
      anon_sym_color,
    ACTIONS(219), 1,
      anon_sym_colortwo,
    ACTIONS(221), 1,
      anon_sym_horizontal,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(116), 2,
      sym__statement_gfx_size,
      sym__statement_gfx_color,
    STATE(27), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      aux_sym__progressbartype_block_repeat1,
  [871] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      anon_sym_name,
    ACTIONS(240), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(243), 1,
      anon_sym_noOfFrames,
    ACTIONS(246), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(249), 1,
      anon_sym_overlay_rows,
    ACTIONS(252), 1,
      anon_sym_effectFile,
    ACTIONS(255), 1,
      anon_sym_animation,
    ACTIONS(258), 1,
      anon_sym_allwaystransparent,
    STATE(24), 9,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_allwaystransparent,
      aux_sym__spriteType_block_repeat1,
  [913] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 1,
      anon_sym_spriteType,
    ACTIONS(266), 1,
      anon_sym_textSpriteType,
    ACTIONS(269), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(272), 1,
      anon_sym_maskedShieldType,
    ACTIONS(275), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(278), 1,
      anon_sym_progressbartype,
    ACTIONS(281), 1,
      anon_sym_cursor_offset,
    STATE(25), 10,
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
  [953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_animation,
    ACTIONS(288), 1,
      sym_assign_equal,
    ACTIONS(284), 16,
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
  [981] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      anon_sym_name,
    ACTIONS(295), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(298), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(301), 1,
      anon_sym_effectFile,
    ACTIONS(304), 1,
      anon_sym_size,
    ACTIONS(307), 1,
      anon_sym_color,
    ACTIONS(310), 1,
      anon_sym_colortwo,
    ACTIONS(313), 1,
      anon_sym_horizontal,
    STATE(116), 2,
      sym__statement_gfx_size,
      sym__statement_gfx_color,
    STATE(27), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_colortwo,
      sym__statement_gfx_horizontal,
      aux_sym__progressbartype_block_repeat1,
  [1025] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 1,
      anon_sym_spriteType,
    ACTIONS(320), 1,
      anon_sym_textSpriteType,
    ACTIONS(322), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(324), 1,
      anon_sym_maskedShieldType,
    ACTIONS(326), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(328), 1,
      anon_sym_progressbartype,
    ACTIONS(330), 1,
      anon_sym_cursor_offset,
    STATE(25), 10,
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
  [1065] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_spriteType,
    ACTIONS(320), 1,
      anon_sym_textSpriteType,
    ACTIONS(322), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(324), 1,
      anon_sym_maskedShieldType,
    ACTIONS(326), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(328), 1,
      anon_sym_progressbartype,
    ACTIONS(330), 1,
      anon_sym_cursor_offset,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(28), 10,
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
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_animation,
    ACTIONS(334), 16,
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
  [1130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_animation,
    ACTIONS(342), 1,
      sym_assign_equal,
    ACTIONS(338), 15,
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
  [1157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_animation,
    ACTIONS(344), 15,
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
  [1181] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 1,
      anon_sym_size,
    ACTIONS(353), 1,
      anon_sym_text,
    ACTIONS(356), 1,
      anon_sym_color,
    ACTIONS(359), 1,
      anon_sym_font,
    ACTIONS(362), 1,
      anon_sym_position,
    ACTIONS(365), 1,
      anon_sym_format,
    ACTIONS(368), 1,
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
  [1219] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      anon_sym_size,
    ACTIONS(375), 1,
      anon_sym_text,
    ACTIONS(377), 1,
      anon_sym_color,
    ACTIONS(379), 1,
      anon_sym_font,
    ACTIONS(381), 1,
      anon_sym_position,
    ACTIONS(383), 1,
      anon_sym_format,
    ACTIONS(385), 1,
      anon_sym_cull_distance,
    STATE(38), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [1257] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    ACTIONS(389), 1,
      anon_sym_name,
    ACTIONS(392), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(395), 1,
      anon_sym_noOfFrames,
    ACTIONS(398), 1,
      anon_sym_size,
    ACTIONS(401), 1,
      anon_sym_borderSize,
    ACTIONS(404), 1,
      anon_sym_allwaystransparent,
    ACTIONS(407), 1,
      anon_sym_legacy_lazy_load,
    STATE(136), 1,
      sym__statement_gfx_size,
    STATE(35), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1297] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(162), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(164), 1,
      anon_sym_noOfFrames,
    ACTIONS(168), 1,
      anon_sym_allwaystransparent,
    ACTIONS(215), 1,
      anon_sym_size,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      anon_sym_borderSize,
    ACTIONS(414), 1,
      anon_sym_legacy_lazy_load,
    STATE(136), 1,
      sym__statement_gfx_size,
    STATE(35), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1337] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(162), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(164), 1,
      anon_sym_noOfFrames,
    ACTIONS(168), 1,
      anon_sym_allwaystransparent,
    ACTIONS(215), 1,
      anon_sym_size,
    ACTIONS(412), 1,
      anon_sym_borderSize,
    ACTIONS(414), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      sym__statement_gfx_size,
    STATE(36), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1377] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_size,
    ACTIONS(375), 1,
      anon_sym_text,
    ACTIONS(377), 1,
      anon_sym_color,
    ACTIONS(379), 1,
      anon_sym_font,
    ACTIONS(381), 1,
      anon_sym_position,
    ACTIONS(383), 1,
      anon_sym_format,
    ACTIONS(385), 1,
      anon_sym_cull_distance,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(33), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [1415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(422), 12,
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
  [1440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_assign_equal,
    ACTIONS(426), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(424), 12,
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
  [1465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(432), 12,
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
  [1490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(422), 12,
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
  [1515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_assign_equal,
    ACTIONS(437), 13,
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
  [1537] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(164), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(211), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(213), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    STATE(50), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1571] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_cursor_offset,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(447), 1,
      anon_sym_textcolors,
    ACTIONS(449), 1,
      anon_sym_name,
    ACTIONS(451), 1,
      anon_sym_path,
    ACTIONS(453), 1,
      anon_sym_color,
    ACTIONS(455), 1,
      anon_sym_border_color,
    STATE(180), 1,
      sym__textcolors,
    STATE(49), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [1607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_color,
    ACTIONS(457), 12,
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
  [1629] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_cursor_offset,
    ACTIONS(447), 1,
      anon_sym_textcolors,
    ACTIONS(449), 1,
      anon_sym_name,
    ACTIONS(451), 1,
      anon_sym_path,
    ACTIONS(453), 1,
      anon_sym_color,
    ACTIONS(455), 1,
      anon_sym_border_color,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      sym__textcolors,
    STATE(45), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [1665] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      anon_sym_name,
    ACTIONS(468), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(471), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(474), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(477), 1,
      anon_sym_noOfFrames,
    ACTIONS(480), 1,
      anon_sym_effectFile,
    STATE(48), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1699] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(485), 1,
      anon_sym_textcolors,
    ACTIONS(488), 1,
      anon_sym_name,
    ACTIONS(491), 1,
      anon_sym_path,
    ACTIONS(494), 1,
      anon_sym_cursor_offset,
    ACTIONS(497), 1,
      anon_sym_color,
    ACTIONS(500), 1,
      anon_sym_border_color,
    STATE(180), 1,
      sym__textcolors,
    STATE(49), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [1735] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(164), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(211), 1,
      aux_sym__statement_gfx_textureFile1_token1,
    ACTIONS(213), 1,
      aux_sym__statement_gfx_textureFile2_token1,
    ACTIONS(443), 1,
      aux_sym__statement_gfx_textureFile3_token1,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(48), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile1,
      sym__statement_gfx_textureFile2,
      sym__statement_gfx_textureFile3,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_assign_equal,
    ACTIONS(505), 13,
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
  [1791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 13,
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
  [1810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_animationrotation,
    ACTIONS(515), 1,
      sym_assign_equal,
    ACTIONS(511), 11,
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
  [1833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_animationrotation,
    ACTIONS(521), 1,
      sym_assign_equal,
    ACTIONS(517), 11,
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
  [1856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 13,
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
  [1875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_animationrotation,
    ACTIONS(529), 1,
      sym_assign_equal,
    ACTIONS(525), 11,
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
  [1898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_animationrotation,
    ACTIONS(535), 1,
      sym_assign_equal,
    ACTIONS(531), 11,
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
  [1921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_animationrotation,
    ACTIONS(541), 1,
      sym_assign_equal,
    ACTIONS(537), 11,
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
  [1944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_animationrotation,
    ACTIONS(547), 1,
      sym_assign_equal,
    ACTIONS(543), 11,
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
  [1967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_animationrotation,
    ACTIONS(553), 1,
      sym_assign_equal,
    ACTIONS(549), 11,
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
  [1990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_animationrotation,
    ACTIONS(559), 1,
      sym_assign_equal,
    ACTIONS(555), 11,
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
  [2013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_animationrotation,
    ACTIONS(561), 11,
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
  [2033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_assign_equal,
    ACTIONS(565), 11,
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
  [2053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_assign_equal,
    ACTIONS(569), 11,
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
  [2073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym_assign_equal,
    ACTIONS(573), 11,
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
  [2093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_color,
    ACTIONS(581), 1,
      sym_assign_equal,
    ACTIONS(577), 10,
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
  [2115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_animationrotation,
    ACTIONS(583), 11,
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
  [2135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_animationrotation,
    ACTIONS(587), 11,
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
  [2155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_assign_equal,
    ACTIONS(591), 11,
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
  [2175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_color,
    ACTIONS(599), 1,
      sym_assign_equal,
    ACTIONS(595), 10,
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
  [2197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_assign_equal,
    ACTIONS(601), 11,
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
  [2217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_assign_equal,
    ACTIONS(605), 11,
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
  [2237] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(162), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(164), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    ACTIONS(611), 1,
      anon_sym_clicksound,
    STATE(83), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [2267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_animationrotation,
    ACTIONS(613), 11,
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
  [2287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_animationrotation,
    ACTIONS(617), 11,
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
  [2307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_animationrotation,
    ACTIONS(621), 11,
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
  [2327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_assign_equal,
    ACTIONS(625), 11,
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
  [2347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_assign_equal,
    ACTIONS(629), 11,
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
  [2367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_animationrotation,
    ACTIONS(633), 11,
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
  [2387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_assign_equal,
    ACTIONS(637), 11,
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
  [2407] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    ACTIONS(643), 1,
      anon_sym_name,
    ACTIONS(646), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(649), 1,
      anon_sym_noOfFrames,
    ACTIONS(652), 1,
      anon_sym_effectFile,
    ACTIONS(655), 1,
      anon_sym_clicksound,
    STATE(81), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [2437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_animationrotation,
    ACTIONS(658), 11,
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
  [2457] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(162), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(164), 1,
      anon_sym_noOfFrames,
    ACTIONS(166), 1,
      anon_sym_effectFile,
    ACTIONS(611), 1,
      anon_sym_clicksound,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(81), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [2487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_assign_equal,
    ACTIONS(664), 11,
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
  [2507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_assign_equal,
    ACTIONS(668), 10,
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
  [2526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_color,
    ACTIONS(672), 10,
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
  [2545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 11,
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
  [2562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 11,
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
  [2579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_color,
    ACTIONS(680), 10,
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
  [2598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 11,
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
  [2615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_assign_equal,
    ACTIONS(686), 10,
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
  [2634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 11,
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
    ACTIONS(692), 11,
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
    ACTIONS(694), 11,
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
    ACTIONS(696), 11,
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
  [2702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 11,
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
  [2719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 11,
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
  [2736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_assign_equal,
    ACTIONS(702), 10,
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
  [2755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 11,
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
  [2772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym_assign_equal,
    ACTIONS(708), 10,
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
  [2791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 11,
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
  [2808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 11,
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
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 11,
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
  [2842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 11,
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
  [2859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_color,
    ACTIONS(724), 1,
      sym_assign_equal,
    ACTIONS(720), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [2879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 10,
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
  [2895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_color,
    ACTIONS(732), 1,
      sym_assign_equal,
    ACTIONS(728), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [2915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 10,
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
  [2931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 10,
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
  [2947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_color,
    ACTIONS(742), 1,
      sym_assign_equal,
    ACTIONS(738), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [2967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_assign_equal,
    ACTIONS(744), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [2985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 10,
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
  [3001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym_assign_equal,
    ACTIONS(750), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [3019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym_assign_equal,
    ACTIONS(754), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_assign_equal,
    ACTIONS(424), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_color,
    ACTIONS(760), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [3071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym_assign_equal,
    ACTIONS(764), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym_assign_equal,
    ACTIONS(768), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym_assign_equal,
    ACTIONS(772), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_color,
    ACTIONS(776), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [3139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_assign_equal,
    ACTIONS(780), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [3171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_assign_equal,
    ACTIONS(786), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [3203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_assign_equal,
    ACTIONS(792), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_assign_equal,
    ACTIONS(796), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_assign_equal,
    ACTIONS(738), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_color,
    ACTIONS(802), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [3271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [3286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_color,
    ACTIONS(808), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      anon_sym_effectFile,
      anon_sym_size,
      anon_sym_colortwo,
      anon_sym_horizontal,
  [3303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [3318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [3333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym_assign_equal,
    ACTIONS(820), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
  [3377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3531] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
    ACTIONS(844), 1,
      anon_sym_speed,
    ACTIONS(846), 1,
      anon_sym_textblock,
    STATE(153), 4,
      sym__statement_gfx_name,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [3553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3567] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(7), 1,
      anon_sym_objectTypes,
    ACTIONS(9), 1,
      anon_sym_bitmapfonts,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
    STATE(172), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [3589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3617] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
    ACTIONS(858), 1,
      anon_sym_name,
    ACTIONS(861), 1,
      anon_sym_speed,
    ACTIONS(864), 1,
      anon_sym_textblock,
    STATE(152), 4,
      sym__statement_gfx_name,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [3639] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(844), 1,
      anon_sym_speed,
    ACTIONS(846), 1,
      anon_sym_textblock,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
    STATE(152), 4,
      sym__statement_gfx_name,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [3661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3675] = 2,
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
  [3689] = 2,
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
  [3703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym_assign_equal,
    ACTIONS(31), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym_assign_equal,
    ACTIONS(877), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_assign_equal,
    ACTIONS(881), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym_assign_equal,
    ACTIONS(885), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3781] = 2,
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
  [3795] = 2,
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
  [3809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3921] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      ts_builtin_sym_end,
    ACTIONS(913), 1,
      anon_sym_spriteTypes,
    ACTIONS(916), 1,
      anon_sym_objectTypes,
    ACTIONS(919), 1,
      anon_sym_bitmapfonts,
    STATE(172), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [3943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 8,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_progressbartype,
      anon_sym_cursor_offset,
  [3957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3970] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_textcolors,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
    ACTIONS(926), 1,
      anon_sym_bitmapfont,
    STATE(217), 1,
      sym__textcolors,
    STATE(178), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [3991] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
    ACTIONS(930), 1,
      anon_sym_textcolors,
    ACTIONS(933), 1,
      anon_sym_bitmapfont,
    STATE(217), 1,
      sym__textcolors,
    STATE(176), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [4012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile1_token1,
      aux_sym__statement_gfx_textureFile2_token1,
      aux_sym__statement_gfx_textureFile3_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
  [4025] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_textcolors,
    ACTIONS(926), 1,
      anon_sym_bitmapfont,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym__textcolors,
    STATE(176), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [4046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [4059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [4072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_assign_equal,
    ACTIONS(944), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [4087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [4100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [4113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [4125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
    ACTIONS(956), 1,
      anon_sym_animatedmaptext,
    STATE(185), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [4140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
    ACTIONS(961), 1,
      anon_sym_animatedmaptext,
    STATE(191), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [4155] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_x,
    ACTIONS(965), 1,
      anon_sym_y,
    STATE(255), 1,
      sym__entry_x_integer,
    STATE(256), 1,
      sym__entry_y_integer,
    STATE(312), 1,
      sym__statement_xy_integer,
  [4174] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_x,
    ACTIONS(965), 1,
      anon_sym_y,
    STATE(255), 1,
      sym__entry_x_integer,
    STATE(256), 1,
      sym__entry_y_integer,
    STATE(302), 1,
      sym__statement_xy_integer,
  [4193] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_x,
    ACTIONS(969), 1,
      anon_sym_y,
    STATE(252), 1,
      sym__entry_y_float,
    STATE(253), 1,
      sym__entry_x_float,
    STATE(313), 1,
      sym__statement_xy_float,
  [4212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym_assign_equal,
    ACTIONS(971), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_animatedmaptext,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
    STATE(185), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [4240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym_assign_equal,
    ACTIONS(977), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_x,
    ACTIONS(965), 1,
      anon_sym_y,
    STATE(255), 1,
      sym__entry_x_integer,
    STATE(256), 1,
      sym__entry_y_integer,
    STATE(338), 1,
      sym__statement_xy_integer,
  [4272] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_x,
    ACTIONS(965), 1,
      anon_sym_y,
    STATE(255), 1,
      sym__entry_x_integer,
    STATE(256), 1,
      sym__entry_y_integer,
    STATE(319), 1,
      sym__statement_xy_integer,
  [4291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
    ACTIONS(993), 1,
      aux_sym__integer_positive_token1,
    STATE(200), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [4355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_RBRACE,
    ACTIONS(998), 1,
      aux_sym__integer_positive_token1,
    STATE(200), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [4369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [4379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [4449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(168), 1,
      sym__boolean_yes_no,
    ACTIONS(1016), 2,
      anon_sym_yes,
      anon_sym_no,
  [4460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym__integer_positive_token1,
    STATE(201), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [4471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [4480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
    ACTIONS(1024), 1,
      sym_string,
    STATE(214), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [4493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym_string,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [4506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym_assign_equal,
    ACTIONS(1028), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [4517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym_assign_equal,
    ACTIONS(1032), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [4528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [4537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [4546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(109), 1,
      sym__boolean_yes_no,
    ACTIONS(1040), 2,
      anon_sym_yes,
      anon_sym_no,
  [4557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_assign_equal,
    ACTIONS(1042), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [4568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym__boolean_yes_no,
    ACTIONS(1046), 2,
      anon_sym_yes,
      anon_sym_no,
  [4579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym_assign_equal,
    ACTIONS(1048), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [4590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(130), 1,
      sym__boolean_yes_no,
    ACTIONS(1052), 2,
      anon_sym_yes,
      anon_sym_no,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 3,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym_y,
  [4610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(106), 1,
      sym__boolean_yes_no,
    ACTIONS(1056), 2,
      anon_sym_yes,
      anon_sym_no,
  [4621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_RBRACE,
    ACTIONS(1060), 1,
      sym_string,
    STATE(226), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [4634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [4643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 1,
      sym__boolean_yes_no,
    ACTIONS(1065), 2,
      anon_sym_yes,
      anon_sym_no,
  [4654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [4663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [4672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym__textcolors_block,
  [4682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym__mod_tags_block,
  [4692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(258), 1,
      sym__float_positive,
  [4702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(235), 1,
      sym__float_positive,
  [4712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(236), 1,
      sym__float_positive,
  [4722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(339), 1,
      sym__float_positive,
  [4732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(1079), 1,
      aux_sym__statement_gfx_name_token2,
  [4742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym__spriteTypes_block,
  [4752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym__objectTypes_block,
  [4762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [4770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym__gfx_textblock,
  [4780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(195), 1,
      sym__float_positive,
  [4790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym__bitmapfonts_block,
  [4800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [4816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(108), 1,
      sym__float_positive,
  [4826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      aux_sym__integer_positive_token1,
    STATE(112), 1,
      sym__integer_positive,
  [4836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_float_token1,
    STATE(244), 1,
      sym_float,
  [4846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_float_token1,
    STATE(245), 1,
      sym_float,
  [4856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(101), 1,
      sym__mod_replace_path_folder,
  [4866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(259), 1,
      sym__float_positive,
  [4876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_x,
    STATE(324), 1,
      sym__entry_x_float,
  [4886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_y,
    STATE(324), 1,
      sym__entry_y_float,
  [4896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym__mod_dependencies_block,
  [4906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_y,
    STATE(281), 1,
      sym__entry_y_integer,
  [4916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_x,
    STATE(281), 1,
      sym__entry_x_integer,
  [4926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [4934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(278), 1,
      sym__float_positive,
  [4944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(276), 1,
      sym__float_positive,
  [4954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym__gfx_animation_block,
  [4964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [4972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      aux_sym__integer_positive_token1,
    STATE(122), 1,
      sym__integer_positive,
  [4982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      aux_sym__integer_positive_token1,
    STATE(132), 1,
      sym__integer_positive,
  [4992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      aux_sym__integer_positive_token1,
    STATE(16), 1,
      sym__integer_positive,
  [5002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 2,
      anon_sym_RBRACE,
      sym_string,
  [5010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(1119), 1,
      aux_sym__statement_gfx_name_token2,
  [5020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym__spriteType_block,
  [5030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym__textSpriteType_block,
  [5040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym__corneredTileSpriteType_block,
  [5050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [5058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(62), 1,
      sym__float_positive,
  [5068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym__maskedShieldType_block,
  [5078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym__frameAnimatedSpriteType_block,
  [5088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [5096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym__progressbartype_block,
  [5106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(304), 1,
      sym__float_positive,
  [5116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_LBRACE,
    STATE(218), 1,
      sym__bitmapfont_block,
  [5126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym_float_token1,
    STATE(303), 1,
      sym__float_positive,
  [5136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_LBRACE,
    STATE(274), 1,
      sym__animatedmaptext_block,
  [5146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      sym_integer,
  [5153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_RBRACE,
  [5160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_LBRACE,
  [5167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      sym_integer,
  [5174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      sym_integer,
  [5181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_string,
  [5188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      sym_string,
  [5195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_LBRACE,
  [5202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_centre,
  [5209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      aux_sym__statement_gfx_cull_distance_token1,
  [5216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_LBRACE,
  [5223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      sym_assign_equal,
  [5230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      sym_byte,
  [5237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_LBRACE,
  [5244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      sym_angle,
  [5251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      aux_sym__animation_entry_dds_token1,
  [5258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      sym_byte,
  [5265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [5272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      sym_assign_equal,
  [5279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      sym_assign_equal,
  [5286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_assign_equal,
  [5293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [5300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_RBRACE,
  [5307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_RBRACE,
  [5314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_RBRACE,
  [5321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      sym_assign_equal,
  [5328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      sym_assign_equal,
  [5335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      sym_assign_equal,
  [5342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      sym_assign_equal,
  [5349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      sym_assign_equal,
  [5356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_RBRACE,
  [5363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      sym_assign_equal,
  [5370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_RBRACE,
  [5377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_RBRACE,
  [5384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_click,
  [5391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_LBRACE,
  [5398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_LBRACE,
  [5405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [5412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      aux_sym__statement_mod_supported_version_token1,
  [5419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_RBRACE,
  [5426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      aux_sym__statement_mod_picture_token1,
  [5433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [5440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [5447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      aux_sym__statement_mod_version_token1,
  [5454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      anon_sym_RBRACE,
  [5461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [5468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      aux_sym__statement_mod_archive_token1,
  [5475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      sym_string,
  [5482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      sym_string,
  [5489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_LBRACE,
  [5496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_LBRACE,
  [5503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_RBRACE,
  [5510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
  [5517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      sym_byte,
  [5524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      ts_builtin_sym_end,
  [5531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      ts_builtin_sym_end,
  [5538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      sym_assign_equal,
  [5545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym_string,
  [5552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
  [5559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_RBRACE,
  [5566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      sym_assign_equal,
  [5573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      sym_hexadecimal,
  [5580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_LBRACE,
  [5587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      sym_hexadecimal,
  [5594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      sym_integer,
  [5601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 338,
  [SMALL_STATE(12)] = 383,
  [SMALL_STATE(13)] = 428,
  [SMALL_STATE(14)] = 473,
  [SMALL_STATE(15)] = 502,
  [SMALL_STATE(16)] = 533,
  [SMALL_STATE(17)] = 561,
  [SMALL_STATE(18)] = 607,
  [SMALL_STATE(19)] = 653,
  [SMALL_STATE(20)] = 699,
  [SMALL_STATE(21)] = 743,
  [SMALL_STATE(22)] = 785,
  [SMALL_STATE(23)] = 827,
  [SMALL_STATE(24)] = 871,
  [SMALL_STATE(25)] = 913,
  [SMALL_STATE(26)] = 953,
  [SMALL_STATE(27)] = 981,
  [SMALL_STATE(28)] = 1025,
  [SMALL_STATE(29)] = 1065,
  [SMALL_STATE(30)] = 1105,
  [SMALL_STATE(31)] = 1130,
  [SMALL_STATE(32)] = 1157,
  [SMALL_STATE(33)] = 1181,
  [SMALL_STATE(34)] = 1219,
  [SMALL_STATE(35)] = 1257,
  [SMALL_STATE(36)] = 1297,
  [SMALL_STATE(37)] = 1337,
  [SMALL_STATE(38)] = 1377,
  [SMALL_STATE(39)] = 1415,
  [SMALL_STATE(40)] = 1440,
  [SMALL_STATE(41)] = 1465,
  [SMALL_STATE(42)] = 1490,
  [SMALL_STATE(43)] = 1515,
  [SMALL_STATE(44)] = 1537,
  [SMALL_STATE(45)] = 1571,
  [SMALL_STATE(46)] = 1607,
  [SMALL_STATE(47)] = 1629,
  [SMALL_STATE(48)] = 1665,
  [SMALL_STATE(49)] = 1699,
  [SMALL_STATE(50)] = 1735,
  [SMALL_STATE(51)] = 1769,
  [SMALL_STATE(52)] = 1791,
  [SMALL_STATE(53)] = 1810,
  [SMALL_STATE(54)] = 1833,
  [SMALL_STATE(55)] = 1856,
  [SMALL_STATE(56)] = 1875,
  [SMALL_STATE(57)] = 1898,
  [SMALL_STATE(58)] = 1921,
  [SMALL_STATE(59)] = 1944,
  [SMALL_STATE(60)] = 1967,
  [SMALL_STATE(61)] = 1990,
  [SMALL_STATE(62)] = 2013,
  [SMALL_STATE(63)] = 2033,
  [SMALL_STATE(64)] = 2053,
  [SMALL_STATE(65)] = 2073,
  [SMALL_STATE(66)] = 2093,
  [SMALL_STATE(67)] = 2115,
  [SMALL_STATE(68)] = 2135,
  [SMALL_STATE(69)] = 2155,
  [SMALL_STATE(70)] = 2175,
  [SMALL_STATE(71)] = 2197,
  [SMALL_STATE(72)] = 2217,
  [SMALL_STATE(73)] = 2237,
  [SMALL_STATE(74)] = 2267,
  [SMALL_STATE(75)] = 2287,
  [SMALL_STATE(76)] = 2307,
  [SMALL_STATE(77)] = 2327,
  [SMALL_STATE(78)] = 2347,
  [SMALL_STATE(79)] = 2367,
  [SMALL_STATE(80)] = 2387,
  [SMALL_STATE(81)] = 2407,
  [SMALL_STATE(82)] = 2437,
  [SMALL_STATE(83)] = 2457,
  [SMALL_STATE(84)] = 2487,
  [SMALL_STATE(85)] = 2507,
  [SMALL_STATE(86)] = 2526,
  [SMALL_STATE(87)] = 2545,
  [SMALL_STATE(88)] = 2562,
  [SMALL_STATE(89)] = 2579,
  [SMALL_STATE(90)] = 2598,
  [SMALL_STATE(91)] = 2615,
  [SMALL_STATE(92)] = 2634,
  [SMALL_STATE(93)] = 2651,
  [SMALL_STATE(94)] = 2668,
  [SMALL_STATE(95)] = 2685,
  [SMALL_STATE(96)] = 2702,
  [SMALL_STATE(97)] = 2719,
  [SMALL_STATE(98)] = 2736,
  [SMALL_STATE(99)] = 2755,
  [SMALL_STATE(100)] = 2772,
  [SMALL_STATE(101)] = 2791,
  [SMALL_STATE(102)] = 2808,
  [SMALL_STATE(103)] = 2825,
  [SMALL_STATE(104)] = 2842,
  [SMALL_STATE(105)] = 2859,
  [SMALL_STATE(106)] = 2879,
  [SMALL_STATE(107)] = 2895,
  [SMALL_STATE(108)] = 2915,
  [SMALL_STATE(109)] = 2931,
  [SMALL_STATE(110)] = 2947,
  [SMALL_STATE(111)] = 2967,
  [SMALL_STATE(112)] = 2985,
  [SMALL_STATE(113)] = 3001,
  [SMALL_STATE(114)] = 3019,
  [SMALL_STATE(115)] = 3037,
  [SMALL_STATE(116)] = 3054,
  [SMALL_STATE(117)] = 3071,
  [SMALL_STATE(118)] = 3088,
  [SMALL_STATE(119)] = 3105,
  [SMALL_STATE(120)] = 3122,
  [SMALL_STATE(121)] = 3139,
  [SMALL_STATE(122)] = 3156,
  [SMALL_STATE(123)] = 3171,
  [SMALL_STATE(124)] = 3188,
  [SMALL_STATE(125)] = 3203,
  [SMALL_STATE(126)] = 3220,
  [SMALL_STATE(127)] = 3237,
  [SMALL_STATE(128)] = 3254,
  [SMALL_STATE(129)] = 3271,
  [SMALL_STATE(130)] = 3286,
  [SMALL_STATE(131)] = 3303,
  [SMALL_STATE(132)] = 3318,
  [SMALL_STATE(133)] = 3333,
  [SMALL_STATE(134)] = 3347,
  [SMALL_STATE(135)] = 3361,
  [SMALL_STATE(136)] = 3377,
  [SMALL_STATE(137)] = 3391,
  [SMALL_STATE(138)] = 3405,
  [SMALL_STATE(139)] = 3419,
  [SMALL_STATE(140)] = 3433,
  [SMALL_STATE(141)] = 3447,
  [SMALL_STATE(142)] = 3461,
  [SMALL_STATE(143)] = 3475,
  [SMALL_STATE(144)] = 3489,
  [SMALL_STATE(145)] = 3503,
  [SMALL_STATE(146)] = 3517,
  [SMALL_STATE(147)] = 3531,
  [SMALL_STATE(148)] = 3553,
  [SMALL_STATE(149)] = 3567,
  [SMALL_STATE(150)] = 3589,
  [SMALL_STATE(151)] = 3603,
  [SMALL_STATE(152)] = 3617,
  [SMALL_STATE(153)] = 3639,
  [SMALL_STATE(154)] = 3661,
  [SMALL_STATE(155)] = 3675,
  [SMALL_STATE(156)] = 3689,
  [SMALL_STATE(157)] = 3703,
  [SMALL_STATE(158)] = 3719,
  [SMALL_STATE(159)] = 3735,
  [SMALL_STATE(160)] = 3751,
  [SMALL_STATE(161)] = 3767,
  [SMALL_STATE(162)] = 3781,
  [SMALL_STATE(163)] = 3795,
  [SMALL_STATE(164)] = 3809,
  [SMALL_STATE(165)] = 3823,
  [SMALL_STATE(166)] = 3837,
  [SMALL_STATE(167)] = 3851,
  [SMALL_STATE(168)] = 3865,
  [SMALL_STATE(169)] = 3879,
  [SMALL_STATE(170)] = 3893,
  [SMALL_STATE(171)] = 3907,
  [SMALL_STATE(172)] = 3921,
  [SMALL_STATE(173)] = 3943,
  [SMALL_STATE(174)] = 3957,
  [SMALL_STATE(175)] = 3970,
  [SMALL_STATE(176)] = 3991,
  [SMALL_STATE(177)] = 4012,
  [SMALL_STATE(178)] = 4025,
  [SMALL_STATE(179)] = 4046,
  [SMALL_STATE(180)] = 4059,
  [SMALL_STATE(181)] = 4072,
  [SMALL_STATE(182)] = 4087,
  [SMALL_STATE(183)] = 4100,
  [SMALL_STATE(184)] = 4113,
  [SMALL_STATE(185)] = 4125,
  [SMALL_STATE(186)] = 4140,
  [SMALL_STATE(187)] = 4155,
  [SMALL_STATE(188)] = 4174,
  [SMALL_STATE(189)] = 4193,
  [SMALL_STATE(190)] = 4212,
  [SMALL_STATE(191)] = 4225,
  [SMALL_STATE(192)] = 4240,
  [SMALL_STATE(193)] = 4253,
  [SMALL_STATE(194)] = 4272,
  [SMALL_STATE(195)] = 4291,
  [SMALL_STATE(196)] = 4301,
  [SMALL_STATE(197)] = 4311,
  [SMALL_STATE(198)] = 4321,
  [SMALL_STATE(199)] = 4331,
  [SMALL_STATE(200)] = 4341,
  [SMALL_STATE(201)] = 4355,
  [SMALL_STATE(202)] = 4369,
  [SMALL_STATE(203)] = 4379,
  [SMALL_STATE(204)] = 4389,
  [SMALL_STATE(205)] = 4399,
  [SMALL_STATE(206)] = 4409,
  [SMALL_STATE(207)] = 4419,
  [SMALL_STATE(208)] = 4429,
  [SMALL_STATE(209)] = 4439,
  [SMALL_STATE(210)] = 4449,
  [SMALL_STATE(211)] = 4460,
  [SMALL_STATE(212)] = 4471,
  [SMALL_STATE(213)] = 4480,
  [SMALL_STATE(214)] = 4493,
  [SMALL_STATE(215)] = 4506,
  [SMALL_STATE(216)] = 4517,
  [SMALL_STATE(217)] = 4528,
  [SMALL_STATE(218)] = 4537,
  [SMALL_STATE(219)] = 4546,
  [SMALL_STATE(220)] = 4557,
  [SMALL_STATE(221)] = 4568,
  [SMALL_STATE(222)] = 4579,
  [SMALL_STATE(223)] = 4590,
  [SMALL_STATE(224)] = 4601,
  [SMALL_STATE(225)] = 4610,
  [SMALL_STATE(226)] = 4621,
  [SMALL_STATE(227)] = 4634,
  [SMALL_STATE(228)] = 4643,
  [SMALL_STATE(229)] = 4654,
  [SMALL_STATE(230)] = 4663,
  [SMALL_STATE(231)] = 4672,
  [SMALL_STATE(232)] = 4682,
  [SMALL_STATE(233)] = 4692,
  [SMALL_STATE(234)] = 4702,
  [SMALL_STATE(235)] = 4712,
  [SMALL_STATE(236)] = 4722,
  [SMALL_STATE(237)] = 4732,
  [SMALL_STATE(238)] = 4742,
  [SMALL_STATE(239)] = 4752,
  [SMALL_STATE(240)] = 4762,
  [SMALL_STATE(241)] = 4770,
  [SMALL_STATE(242)] = 4780,
  [SMALL_STATE(243)] = 4790,
  [SMALL_STATE(244)] = 4800,
  [SMALL_STATE(245)] = 4808,
  [SMALL_STATE(246)] = 4816,
  [SMALL_STATE(247)] = 4826,
  [SMALL_STATE(248)] = 4836,
  [SMALL_STATE(249)] = 4846,
  [SMALL_STATE(250)] = 4856,
  [SMALL_STATE(251)] = 4866,
  [SMALL_STATE(252)] = 4876,
  [SMALL_STATE(253)] = 4886,
  [SMALL_STATE(254)] = 4896,
  [SMALL_STATE(255)] = 4906,
  [SMALL_STATE(256)] = 4916,
  [SMALL_STATE(257)] = 4926,
  [SMALL_STATE(258)] = 4934,
  [SMALL_STATE(259)] = 4944,
  [SMALL_STATE(260)] = 4954,
  [SMALL_STATE(261)] = 4964,
  [SMALL_STATE(262)] = 4972,
  [SMALL_STATE(263)] = 4982,
  [SMALL_STATE(264)] = 4992,
  [SMALL_STATE(265)] = 5002,
  [SMALL_STATE(266)] = 5010,
  [SMALL_STATE(267)] = 5020,
  [SMALL_STATE(268)] = 5030,
  [SMALL_STATE(269)] = 5040,
  [SMALL_STATE(270)] = 5050,
  [SMALL_STATE(271)] = 5058,
  [SMALL_STATE(272)] = 5068,
  [SMALL_STATE(273)] = 5078,
  [SMALL_STATE(274)] = 5088,
  [SMALL_STATE(275)] = 5096,
  [SMALL_STATE(276)] = 5106,
  [SMALL_STATE(277)] = 5116,
  [SMALL_STATE(278)] = 5126,
  [SMALL_STATE(279)] = 5136,
  [SMALL_STATE(280)] = 5146,
  [SMALL_STATE(281)] = 5153,
  [SMALL_STATE(282)] = 5160,
  [SMALL_STATE(283)] = 5167,
  [SMALL_STATE(284)] = 5174,
  [SMALL_STATE(285)] = 5181,
  [SMALL_STATE(286)] = 5188,
  [SMALL_STATE(287)] = 5195,
  [SMALL_STATE(288)] = 5202,
  [SMALL_STATE(289)] = 5209,
  [SMALL_STATE(290)] = 5216,
  [SMALL_STATE(291)] = 5223,
  [SMALL_STATE(292)] = 5230,
  [SMALL_STATE(293)] = 5237,
  [SMALL_STATE(294)] = 5244,
  [SMALL_STATE(295)] = 5251,
  [SMALL_STATE(296)] = 5258,
  [SMALL_STATE(297)] = 5265,
  [SMALL_STATE(298)] = 5272,
  [SMALL_STATE(299)] = 5279,
  [SMALL_STATE(300)] = 5286,
  [SMALL_STATE(301)] = 5293,
  [SMALL_STATE(302)] = 5300,
  [SMALL_STATE(303)] = 5307,
  [SMALL_STATE(304)] = 5314,
  [SMALL_STATE(305)] = 5321,
  [SMALL_STATE(306)] = 5328,
  [SMALL_STATE(307)] = 5335,
  [SMALL_STATE(308)] = 5342,
  [SMALL_STATE(309)] = 5349,
  [SMALL_STATE(310)] = 5356,
  [SMALL_STATE(311)] = 5363,
  [SMALL_STATE(312)] = 5370,
  [SMALL_STATE(313)] = 5377,
  [SMALL_STATE(314)] = 5384,
  [SMALL_STATE(315)] = 5391,
  [SMALL_STATE(316)] = 5398,
  [SMALL_STATE(317)] = 5405,
  [SMALL_STATE(318)] = 5412,
  [SMALL_STATE(319)] = 5419,
  [SMALL_STATE(320)] = 5426,
  [SMALL_STATE(321)] = 5433,
  [SMALL_STATE(322)] = 5440,
  [SMALL_STATE(323)] = 5447,
  [SMALL_STATE(324)] = 5454,
  [SMALL_STATE(325)] = 5461,
  [SMALL_STATE(326)] = 5468,
  [SMALL_STATE(327)] = 5475,
  [SMALL_STATE(328)] = 5482,
  [SMALL_STATE(329)] = 5489,
  [SMALL_STATE(330)] = 5496,
  [SMALL_STATE(331)] = 5503,
  [SMALL_STATE(332)] = 5510,
  [SMALL_STATE(333)] = 5517,
  [SMALL_STATE(334)] = 5524,
  [SMALL_STATE(335)] = 5531,
  [SMALL_STATE(336)] = 5538,
  [SMALL_STATE(337)] = 5545,
  [SMALL_STATE(338)] = 5552,
  [SMALL_STATE(339)] = 5559,
  [SMALL_STATE(340)] = 5566,
  [SMALL_STATE(341)] = 5573,
  [SMALL_STATE(342)] = 5580,
  [SMALL_STATE(343)] = 5587,
  [SMALL_STATE(344)] = 5594,
  [SMALL_STATE(345)] = 5601,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(291),
  [7] = {.count = 1, .reusable = true}, SHIFT(340),
  [9] = {.count = 1, .reusable = true}, SHIFT(336),
  [11] = {.count = 1, .reusable = true}, SHIFT(84),
  [13] = {.count = 1, .reusable = true}, SHIFT(72),
  [15] = {.count = 1, .reusable = true}, SHIFT(64),
  [17] = {.count = 1, .reusable = true}, SHIFT(65),
  [19] = {.count = 1, .reusable = true}, SHIFT(69),
  [21] = {.count = 1, .reusable = true}, SHIFT(71),
  [23] = {.count = 1, .reusable = true}, SHIFT(63),
  [25] = {.count = 1, .reusable = true}, SHIFT(77),
  [27] = {.count = 1, .reusable = true}, SHIFT(78),
  [29] = {.count = 1, .reusable = true}, SHIFT(80),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(266),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 3),
  [44] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 3),
  [46] = {.count = 1, .reusable = true}, SHIFT(103),
  [48] = {.count = 1, .reusable = true}, SHIFT(6),
  [50] = {.count = 1, .reusable = true}, SHIFT(87),
  [52] = {.count = 1, .reusable = true}, SHIFT(3),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym__float_positive, 1, .production_id = 5),
  [56] = {.count = 1, .reusable = false}, REDUCE(sym__float_positive, 1, .production_id = 5),
  [58] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(84),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(72),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(64),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(65),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(69),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(71),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(63),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(77),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(78),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(80),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 1),
  [94] = {.count = 1, .reusable = true}, SHIFT(301),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [98] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(58),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(59),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(61),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(56),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(60),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(53),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(57),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(54),
  [124] = {.count = 1, .reusable = true}, SHIFT(129),
  [126] = {.count = 1, .reusable = true}, SHIFT(58),
  [128] = {.count = 1, .reusable = false}, SHIFT(59),
  [130] = {.count = 1, .reusable = true}, SHIFT(61),
  [132] = {.count = 1, .reusable = true}, SHIFT(56),
  [134] = {.count = 1, .reusable = true}, SHIFT(60),
  [136] = {.count = 1, .reusable = true}, SHIFT(53),
  [138] = {.count = 1, .reusable = true}, SHIFT(57),
  [140] = {.count = 1, .reusable = true}, SHIFT(54),
  [142] = {.count = 1, .reusable = true}, SHIFT(131),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 3),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [152] = {.count = 1, .reusable = true}, SHIFT(264),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [158] = {.count = 1, .reusable = true}, SHIFT(137),
  [160] = {.count = 1, .reusable = true}, SHIFT(2),
  [162] = {.count = 1, .reusable = true}, SHIFT(26),
  [164] = {.count = 1, .reusable = true}, SHIFT(15),
  [166] = {.count = 1, .reusable = true}, SHIFT(9),
  [168] = {.count = 1, .reusable = true}, SHIFT(31),
  [170] = {.count = 1, .reusable = true}, SHIFT(98),
  [172] = {.count = 1, .reusable = true}, SHIFT(85),
  [174] = {.count = 1, .reusable = true}, SHIFT(91),
  [176] = {.count = 1, .reusable = true}, SHIFT(100),
  [178] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(26),
  [186] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(31),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(98),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(85),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(91),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(100),
  [207] = {.count = 1, .reusable = true}, SHIFT(151),
  [209] = {.count = 1, .reusable = true}, SHIFT(143),
  [211] = {.count = 1, .reusable = true}, SHIFT(70),
  [213] = {.count = 1, .reusable = true}, SHIFT(66),
  [215] = {.count = 1, .reusable = true}, SHIFT(40),
  [217] = {.count = 1, .reusable = false}, SHIFT(110),
  [219] = {.count = 1, .reusable = true}, SHIFT(105),
  [221] = {.count = 1, .reusable = true}, SHIFT(107),
  [223] = {.count = 1, .reusable = true}, SHIFT(142),
  [225] = {.count = 1, .reusable = true}, SHIFT(113),
  [227] = {.count = 1, .reusable = true}, SHIFT(114),
  [229] = {.count = 1, .reusable = true}, SHIFT(111),
  [231] = {.count = 1, .reusable = true}, SHIFT(171),
  [233] = {.count = 1, .reusable = true}, SHIFT(141),
  [235] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(26),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(113),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(114),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(111),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(31),
  [261] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(311),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(309),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(308),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(307),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(306),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(305),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(51),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 1),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 1),
  [288] = {.count = 1, .reusable = true}, SHIFT(297),
  [290] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2),
  [292] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(2),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(70),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(66),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(9),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(40),
  [307] = {.count = 2, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(110),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(105),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 2), SHIFT_REPEAT(107),
  [316] = {.count = 1, .reusable = true}, SHIFT(204),
  [318] = {.count = 1, .reusable = true}, SHIFT(311),
  [320] = {.count = 1, .reusable = true}, SHIFT(309),
  [322] = {.count = 1, .reusable = true}, SHIFT(308),
  [324] = {.count = 1, .reusable = true}, SHIFT(307),
  [326] = {.count = 1, .reusable = true}, SHIFT(306),
  [328] = {.count = 1, .reusable = true}, SHIFT(305),
  [330] = {.count = 1, .reusable = true}, SHIFT(51),
  [332] = {.count = 1, .reusable = true}, SHIFT(205),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 3),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 3),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [342] = {.count = 1, .reusable = true}, SHIFT(221),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [348] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(115),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(123),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(127),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(117),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(121),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(118),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(119),
  [371] = {.count = 1, .reusable = true}, SHIFT(198),
  [373] = {.count = 1, .reusable = true}, SHIFT(115),
  [375] = {.count = 1, .reusable = true}, SHIFT(123),
  [377] = {.count = 1, .reusable = true}, SHIFT(127),
  [379] = {.count = 1, .reusable = true}, SHIFT(117),
  [381] = {.count = 1, .reusable = true}, SHIFT(121),
  [383] = {.count = 1, .reusable = true}, SHIFT(118),
  [385] = {.count = 1, .reusable = true}, SHIFT(119),
  [387] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2),
  [389] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(26),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(40),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(125),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(31),
  [407] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(126),
  [410] = {.count = 1, .reusable = true}, SHIFT(169),
  [412] = {.count = 1, .reusable = true}, SHIFT(125),
  [414] = {.count = 1, .reusable = true}, SHIFT(126),
  [416] = {.count = 1, .reusable = true}, SHIFT(166),
  [418] = {.count = 1, .reusable = true}, SHIFT(196),
  [420] = {.count = 1, .reusable = true}, SHIFT(164),
  [422] = {.count = 1, .reusable = true}, SHIFT(43),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 1),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size, 1),
  [428] = {.count = 1, .reusable = true}, SHIFT(315),
  [430] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2), SHIFT_REPEAT(43),
  [435] = {.count = 1, .reusable = true}, SHIFT(154),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 1),
  [439] = {.count = 1, .reusable = true}, SHIFT(332),
  [441] = {.count = 1, .reusable = true}, SHIFT(139),
  [443] = {.count = 1, .reusable = true}, SHIFT(135),
  [445] = {.count = 1, .reusable = true}, SHIFT(212),
  [447] = {.count = 1, .reusable = true}, SHIFT(299),
  [449] = {.count = 1, .reusable = true}, SHIFT(157),
  [451] = {.count = 1, .reusable = true}, SHIFT(158),
  [453] = {.count = 1, .reusable = true}, SHIFT(159),
  [455] = {.count = 1, .reusable = true}, SHIFT(160),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 5),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size, 5),
  [461] = {.count = 1, .reusable = true}, SHIFT(227),
  [463] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(2),
  [468] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(70),
  [471] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(66),
  [474] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(135),
  [477] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(15),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(9),
  [483] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2),
  [485] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(299),
  [488] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(157),
  [491] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(158),
  [494] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(51),
  [497] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(159),
  [500] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(160),
  [503] = {.count = 1, .reusable = true}, SHIFT(161),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 1),
  [507] = {.count = 1, .reusable = true}, SHIFT(282),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [515] = {.count = 1, .reusable = true}, SHIFT(230),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [519] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [521] = {.count = 1, .reusable = true}, SHIFT(290),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 7),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [527] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [529] = {.count = 1, .reusable = true}, SHIFT(271),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [535] = {.count = 1, .reusable = true}, SHIFT(229),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [541] = {.count = 1, .reusable = true}, SHIFT(295),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [547] = {.count = 1, .reusable = true}, SHIFT(294),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 1),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 1),
  [553] = {.count = 1, .reusable = true}, SHIFT(293),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [559] = {.count = 1, .reusable = true}, SHIFT(228),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [563] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [567] = {.count = 1, .reusable = true}, SHIFT(318),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [571] = {.count = 1, .reusable = true}, SHIFT(326),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [575] = {.count = 1, .reusable = true}, SHIFT(325),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 1),
  [581] = {.count = 1, .reusable = true}, SHIFT(321),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [589] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [593] = {.count = 1, .reusable = true}, SHIFT(323),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [597] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 1),
  [599] = {.count = 1, .reusable = true}, SHIFT(317),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [603] = {.count = 1, .reusable = true}, SHIFT(320),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [607] = {.count = 1, .reusable = true}, SHIFT(327),
  [609] = {.count = 1, .reusable = true}, SHIFT(140),
  [611] = {.count = 1, .reusable = true}, SHIFT(181),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [615] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [619] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [623] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [627] = {.count = 1, .reusable = true}, SHIFT(250),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [631] = {.count = 1, .reusable = true}, SHIFT(232),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 5),
  [635] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 5),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [639] = {.count = 1, .reusable = true}, SHIFT(254),
  [641] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [646] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(26),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(15),
  [652] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(9),
  [655] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(181),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [660] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [662] = {.count = 1, .reusable = true}, SHIFT(173),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [666] = {.count = 1, .reusable = true}, SHIFT(328),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 1),
  [670] = {.count = 1, .reusable = true}, SHIFT(225),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [674] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile2, 3),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [682] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile1, 3),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [686] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 1),
  [688] = {.count = 1, .reusable = true}, SHIFT(219),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [694] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [698] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 1),
  [704] = {.count = 1, .reusable = true}, SHIFT(247),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 1),
  [710] = {.count = 1, .reusable = true}, SHIFT(246),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [714] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 1),
  [722] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 1),
  [724] = {.count = 1, .reusable = true}, SHIFT(330),
  [726] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 3),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 1),
  [730] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 1),
  [732] = {.count = 1, .reusable = true}, SHIFT(223),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 3),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 3),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 1),
  [740] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 1),
  [742] = {.count = 1, .reusable = true}, SHIFT(329),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [746] = {.count = 1, .reusable = true}, SHIFT(260),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 3),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [752] = {.count = 1, .reusable = true}, SHIFT(263),
  [754] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [756] = {.count = 1, .reusable = true}, SHIFT(262),
  [758] = {.count = 1, .reusable = true}, SHIFT(342),
  [760] = {.count = 1, .reusable = true}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [762] = {.count = 1, .reusable = false}, REDUCE(aux_sym__progressbartype_block_repeat1, 1, .production_id = 4),
  [764] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 1),
  [766] = {.count = 1, .reusable = true}, SHIFT(286),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 1),
  [770] = {.count = 1, .reusable = true}, SHIFT(288),
  [772] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [774] = {.count = 1, .reusable = true}, SHIFT(289),
  [776] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 7),
  [778] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_color, 7),
  [780] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 1),
  [782] = {.count = 1, .reusable = true}, SHIFT(287),
  [784] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 1),
  [788] = {.count = 1, .reusable = true}, SHIFT(285),
  [790] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 1),
  [794] = {.count = 1, .reusable = true}, SHIFT(316),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 1),
  [798] = {.count = 1, .reusable = true}, SHIFT(210),
  [800] = {.count = 1, .reusable = true}, SHIFT(345),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_colortwo, 7),
  [804] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_colortwo, 7),
  [806] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_horizontal, 3),
  [810] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_horizontal, 3),
  [812] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [816] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 3),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 1),
  [822] = {.count = 1, .reusable = true}, SHIFT(322),
  [824] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 1, .production_id = 4),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 2),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 3),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 2),
  [832] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 2),
  [834] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 3),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [838] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype_block, 2),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 3),
  [842] = {.count = 1, .reusable = true}, SHIFT(270),
  [844] = {.count = 1, .reusable = true}, SHIFT(192),
  [846] = {.count = 1, .reusable = true}, SHIFT(190),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 3),
  [850] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym__progressbartype, 3),
  [854] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 3),
  [856] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2),
  [858] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(2),
  [861] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(192),
  [864] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(190),
  [867] = {.count = 1, .reusable = true}, SHIFT(240),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 2),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 3),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 3),
  [875] = {.count = 1, .reusable = true}, SHIFT(237),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 1),
  [879] = {.count = 1, .reusable = true}, SHIFT(337),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 1),
  [883] = {.count = 1, .reusable = true}, SHIFT(341),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 1),
  [887] = {.count = 1, .reusable = true}, SHIFT(343),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 3),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 3),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 3),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 3),
  [897] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 2),
  [901] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 5),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 3),
  [905] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 3),
  [907] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 5),
  [909] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [911] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [913] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(291),
  [916] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(340),
  [919] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(336),
  [922] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 3),
  [924] = {.count = 1, .reusable = true}, SHIFT(203),
  [926] = {.count = 1, .reusable = true}, SHIFT(298),
  [928] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2),
  [930] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(299),
  [933] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(298),
  [936] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile3, 3),
  [938] = {.count = 1, .reusable = true}, SHIFT(197),
  [940] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 3),
  [942] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 1, .production_id = 4),
  [944] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 1),
  [946] = {.count = 1, .reusable = true}, SHIFT(314),
  [948] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 3),
  [950] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 3),
  [952] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 3),
  [954] = {.count = 1, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2),
  [956] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(300),
  [959] = {.count = 1, .reusable = true}, SHIFT(207),
  [961] = {.count = 1, .reusable = true}, SHIFT(300),
  [963] = {.count = 1, .reusable = true}, SHIFT(220),
  [965] = {.count = 1, .reusable = true}, SHIFT(222),
  [967] = {.count = 1, .reusable = true}, SHIFT(215),
  [969] = {.count = 1, .reusable = true}, SHIFT(216),
  [971] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 1),
  [973] = {.count = 1, .reusable = true}, SHIFT(241),
  [975] = {.count = 1, .reusable = true}, SHIFT(199),
  [977] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 1),
  [979] = {.count = 1, .reusable = true}, SHIFT(242),
  [981] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 3),
  [983] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 3),
  [985] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 3),
  [987] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 2),
  [989] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 3),
  [991] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [993] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(200),
  [996] = {.count = 1, .reusable = true}, SHIFT(82),
  [998] = {.count = 1, .reusable = true}, SHIFT(200),
  [1000] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 3),
  [1002] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 2),
  [1004] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [1006] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [1008] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [1010] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 2),
  [1012] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 3),
  [1014] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 3),
  [1016] = {.count = 1, .reusable = true}, SHIFT(168),
  [1018] = {.count = 1, .reusable = true}, SHIFT(201),
  [1020] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 3),
  [1022] = {.count = 1, .reusable = true}, SHIFT(102),
  [1024] = {.count = 1, .reusable = true}, SHIFT(265),
  [1026] = {.count = 1, .reusable = true}, SHIFT(88),
  [1028] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 1),
  [1030] = {.count = 1, .reusable = true}, SHIFT(249),
  [1032] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 1),
  [1034] = {.count = 1, .reusable = true}, SHIFT(248),
  [1036] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_type, 1, .production_id = 2),
  [1038] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 3),
  [1040] = {.count = 1, .reusable = true}, SHIFT(109),
  [1042] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 1),
  [1044] = {.count = 1, .reusable = true}, SHIFT(283),
  [1046] = {.count = 1, .reusable = true}, SHIFT(32),
  [1048] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 1),
  [1050] = {.count = 1, .reusable = true}, SHIFT(280),
  [1052] = {.count = 1, .reusable = true}, SHIFT(130),
  [1054] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [1056] = {.count = 1, .reusable = true}, SHIFT(106),
  [1058] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [1060] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(265),
  [1063] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 2),
  [1065] = {.count = 1, .reusable = true}, SHIFT(74),
  [1067] = {.count = 1, .reusable = true}, SHIFT(67),
  [1069] = {.count = 1, .reusable = true}, SHIFT(68),
  [1071] = {.count = 1, .reusable = true}, SHIFT(42),
  [1073] = {.count = 1, .reusable = true}, SHIFT(5),
  [1075] = {.count = 1, .reusable = true}, SHIFT(7),
  [1077] = {.count = 1, .reusable = true}, SHIFT(174),
  [1079] = {.count = 1, .reusable = false}, SHIFT(174),
  [1081] = {.count = 1, .reusable = true}, SHIFT(29),
  [1083] = {.count = 1, .reusable = true}, SHIFT(186),
  [1085] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 3),
  [1087] = {.count = 1, .reusable = true}, SHIFT(34),
  [1089] = {.count = 1, .reusable = true}, SHIFT(175),
  [1091] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 3),
  [1093] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 3),
  [1095] = {.count = 1, .reusable = true}, SHIFT(112),
  [1097] = {.count = 1, .reusable = true}, SHIFT(224),
  [1099] = {.count = 1, .reusable = true}, SHIFT(101),
  [1101] = {.count = 1, .reusable = true}, SHIFT(213),
  [1103] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 3),
  [1105] = {.count = 1, .reusable = true}, SHIFT(13),
  [1107] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 3),
  [1109] = {.count = 1, .reusable = true}, SHIFT(122),
  [1111] = {.count = 1, .reusable = true}, SHIFT(132),
  [1113] = {.count = 1, .reusable = true}, SHIFT(16),
  [1115] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 3),
  [1117] = {.count = 1, .reusable = true}, SHIFT(4),
  [1119] = {.count = 1, .reusable = false}, SHIFT(4),
  [1121] = {.count = 1, .reusable = true}, SHIFT(21),
  [1123] = {.count = 1, .reusable = true}, SHIFT(73),
  [1125] = {.count = 1, .reusable = true}, SHIFT(37),
  [1127] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 2),
  [1129] = {.count = 1, .reusable = true}, SHIFT(44),
  [1131] = {.count = 1, .reusable = true}, SHIFT(17),
  [1133] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 3),
  [1135] = {.count = 1, .reusable = true}, SHIFT(20),
  [1137] = {.count = 1, .reusable = true}, SHIFT(47),
  [1139] = {.count = 1, .reusable = true}, SHIFT(147),
  [1141] = {.count = 1, .reusable = true}, SHIFT(257),
  [1143] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_integer, 2),
  [1145] = {.count = 1, .reusable = true}, SHIFT(284),
  [1147] = {.count = 1, .reusable = true}, SHIFT(261),
  [1149] = {.count = 1, .reusable = true}, SHIFT(344),
  [1151] = {.count = 1, .reusable = true}, SHIFT(133),
  [1153] = {.count = 1, .reusable = true}, SHIFT(148),
  [1155] = {.count = 1, .reusable = true}, SHIFT(194),
  [1157] = {.count = 1, .reusable = true}, SHIFT(138),
  [1159] = {.count = 1, .reusable = true}, SHIFT(165),
  [1161] = {.count = 1, .reusable = true}, SHIFT(211),
  [1163] = {.count = 1, .reusable = true}, SHIFT(238),
  [1165] = {.count = 1, .reusable = true}, SHIFT(310),
  [1167] = {.count = 1, .reusable = true}, SHIFT(189),
  [1169] = {.count = 1, .reusable = true}, SHIFT(75),
  [1171] = {.count = 1, .reusable = true}, SHIFT(76),
  [1173] = {.count = 1, .reusable = true}, SHIFT(292),
  [1175] = {.count = 1, .reusable = true}, SHIFT(30),
  [1177] = {.count = 1, .reusable = true}, SHIFT(277),
  [1179] = {.count = 1, .reusable = true}, SHIFT(231),
  [1181] = {.count = 1, .reusable = true}, SHIFT(279),
  [1183] = {.count = 1, .reusable = true}, SHIFT(14),
  [1185] = {.count = 1, .reusable = true}, SHIFT(170),
  [1187] = {.count = 1, .reusable = true}, SHIFT(120),
  [1189] = {.count = 1, .reusable = true}, SHIFT(128),
  [1191] = {.count = 1, .reusable = true}, SHIFT(275),
  [1193] = {.count = 1, .reusable = true}, SHIFT(273),
  [1195] = {.count = 1, .reusable = true}, SHIFT(272),
  [1197] = {.count = 1, .reusable = true}, SHIFT(269),
  [1199] = {.count = 1, .reusable = true}, SHIFT(268),
  [1201] = {.count = 1, .reusable = true}, SHIFT(55),
  [1203] = {.count = 1, .reusable = true}, SHIFT(267),
  [1205] = {.count = 1, .reusable = true}, SHIFT(46),
  [1207] = {.count = 1, .reusable = true}, SHIFT(79),
  [1209] = {.count = 1, .reusable = true}, SHIFT(184),
  [1211] = {.count = 1, .reusable = true}, SHIFT(187),
  [1213] = {.count = 1, .reusable = true}, SHIFT(188),
  [1215] = {.count = 1, .reusable = true}, SHIFT(89),
  [1217] = {.count = 1, .reusable = true}, SHIFT(99),
  [1219] = {.count = 1, .reusable = true}, SHIFT(167),
  [1221] = {.count = 1, .reusable = true}, SHIFT(96),
  [1223] = {.count = 1, .reusable = true}, SHIFT(86),
  [1225] = {.count = 1, .reusable = true}, SHIFT(177),
  [1227] = {.count = 1, .reusable = true}, SHIFT(95),
  [1229] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_float, 2),
  [1231] = {.count = 1, .reusable = true}, SHIFT(90),
  [1233] = {.count = 1, .reusable = true}, SHIFT(92),
  [1235] = {.count = 1, .reusable = true}, SHIFT(93),
  [1237] = {.count = 1, .reusable = true}, SHIFT(97),
  [1239] = {.count = 1, .reusable = true}, SHIFT(233),
  [1241] = {.count = 1, .reusable = true}, SHIFT(251),
  [1243] = {.count = 1, .reusable = true}, SHIFT(52),
  [1245] = {.count = 1, .reusable = true}, SHIFT(333),
  [1247] = {.count = 1, .reusable = true}, SHIFT(296),
  [1249] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [1251] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1253] = {.count = 1, .reusable = true}, SHIFT(243),
  [1255] = {.count = 1, .reusable = true}, SHIFT(179),
  [1257] = {.count = 1, .reusable = true}, SHIFT(146),
  [1259] = {.count = 1, .reusable = true}, SHIFT(144),
  [1261] = {.count = 1, .reusable = true}, SHIFT(239),
  [1263] = {.count = 1, .reusable = true}, SHIFT(183),
  [1265] = {.count = 1, .reusable = true}, SHIFT(193),
  [1267] = {.count = 1, .reusable = true}, SHIFT(182),
  [1269] = {.count = 1, .reusable = true}, SHIFT(331),
  [1271] = {.count = 1, .reusable = true}, SHIFT(234),
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
