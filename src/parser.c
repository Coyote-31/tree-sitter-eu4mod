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
#define STATE_COUNT 303
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 240
#define ALIAS_COUNT 4
#define TOKEN_COUNT 130
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
  anon_sym_name = 14,
  anon_sym_x = 15,
  anon_sym_y = 16,
  anon_sym_path = 17,
  anon_sym_archive = 18,
  aux_sym__statement_mod_archive_token1 = 19,
  anon_sym_remote_file_id = 20,
  aux_sym__statement_mod_remote_file_id_token1 = 21,
  anon_sym_version = 22,
  aux_sym__statement_mod_version_token1 = 23,
  anon_sym_picture = 24,
  aux_sym__statement_mod_picture_token1 = 25,
  anon_sym_supported_version = 26,
  aux_sym__statement_mod_supported_version_token1 = 27,
  anon_sym_replace_path = 28,
  aux_sym__mod_replace_path_folder_token1 = 29,
  anon_sym_tags = 30,
  aux_sym__mod_tags_keyword_token1 = 31,
  aux_sym__mod_tags_keyword_token2 = 32,
  aux_sym__mod_tags_keyword_token3 = 33,
  aux_sym__mod_tags_keyword_token4 = 34,
  aux_sym__mod_tags_keyword_token5 = 35,
  aux_sym__mod_tags_keyword_token6 = 36,
  aux_sym__mod_tags_keyword_token7 = 37,
  aux_sym__mod_tags_keyword_token8 = 38,
  aux_sym__mod_tags_keyword_token9 = 39,
  aux_sym__mod_tags_keyword_token10 = 40,
  aux_sym__mod_tags_keyword_token11 = 41,
  aux_sym__mod_tags_keyword_token12 = 42,
  aux_sym__mod_tags_keyword_token13 = 43,
  aux_sym__mod_tags_keyword_token14 = 44,
  aux_sym__mod_tags_keyword_token15 = 45,
  aux_sym__mod_tags_keyword_token16 = 46,
  aux_sym__mod_tags_keyword_token17 = 47,
  aux_sym__mod_tags_keyword_token18 = 48,
  aux_sym__mod_tags_keyword_token19 = 49,
  aux_sym__mod_tags_keyword_token20 = 50,
  aux_sym__mod_tags_keyword_token21 = 51,
  aux_sym__mod_tags_keyword_token22 = 52,
  anon_sym_dependencies = 53,
  aux_sym__statement_gfx_name_token1 = 54,
  aux_sym__statement_gfx_name_token2 = 55,
  anon_sym_cursor_offset = 56,
  aux_sym__statement_gfx_textureFile_token1 = 57,
  aux_sym__statement_gfx_textureFile_token2 = 58,
  anon_sym_noOfFrames = 59,
  anon_sym_overlay_frames_per_row = 60,
  anon_sym_overlay_rows = 61,
  anon_sym_effectFile = 62,
  aux_sym__statement_gfx_effectFile_token1 = 63,
  anon_sym_animation = 64,
  anon_sym_animationmaskfile = 65,
  anon_sym_animationtexturefile = 66,
  aux_sym__animation_entry_dds_token1 = 67,
  anon_sym_animationrotation = 68,
  anon_sym_animationlooping = 69,
  anon_sym_animationtime = 70,
  anon_sym_animationdelay = 71,
  anon_sym_animationrotationoffset = 72,
  anon_sym_animationtexturescale = 73,
  anon_sym_animationblendmode = 74,
  anon_sym_DQUOTEadd_DQUOTE = 75,
  anon_sym_DQUOTEmultiply_DQUOTE = 76,
  anon_sym_DQUOTEoverlay_DQUOTE = 77,
  anon_sym_animationtype = 78,
  anon_sym_DQUOTEscrolling_DQUOTE = 79,
  anon_sym_DQUOTErotating_DQUOTE = 80,
  anon_sym_DQUOTEpulsing_DQUOTE = 81,
  anon_sym_animationframes = 82,
  anon_sym_size = 83,
  anon_sym_borderSize = 84,
  anon_sym_allwaystransparent = 85,
  anon_sym_legacy_lazy_load = 86,
  anon_sym_clicksound = 87,
  anon_sym_click = 88,
  anon_sym_speed = 89,
  anon_sym_textblock = 90,
  anon_sym_text = 91,
  anon_sym_color = 92,
  anon_sym_font = 93,
  anon_sym_position = 94,
  anon_sym_format = 95,
  anon_sym_centre = 96,
  anon_sym_cull_distance = 97,
  aux_sym__statement_gfx_cull_distance_token1 = 98,
  anon_sym_B = 99,
  anon_sym_b = 100,
  anon_sym_G = 101,
  anon_sym_H = 102,
  anon_sym_l = 103,
  anon_sym_M = 104,
  anon_sym_O = 105,
  anon_sym_g = 106,
  anon_sym_R = 107,
  anon_sym_T = 108,
  anon_sym_W = 109,
  anon_sym_Y = 110,
  anon_sym_border_color = 111,
  anon_sym_animation_rate_fps = 112,
  anon_sym_looping = 113,
  anon_sym_play_on_show = 114,
  anon_sym_pause_on_loop = 115,
  sym_assign_equal = 116,
  sym_string = 117,
  sym_number = 118,
  aux_sym_float_token1 = 119,
  sym_integer = 120,
  aux_sym__integer_positive_token1 = 121,
  sym_byte = 122,
  sym_hexadecimal = 123,
  sym_angle = 124,
  anon_sym_true = 125,
  anon_sym_false = 126,
  anon_sym_yes = 127,
  anon_sym_no = 128,
  sym_comment = 129,
  sym_file = 130,
  sym_dot_mod = 131,
  sym_dot_gfx = 132,
  sym__spriteTypes = 133,
  sym__spriteTypes_block = 134,
  sym__spriteTypes_statement = 135,
  sym__spriteTypes_type = 136,
  sym__objectTypes = 137,
  sym__objectTypes_block = 138,
  sym__objectTypes_type = 139,
  sym__bitmapfonts = 140,
  sym__bitmapfonts_block = 141,
  sym__bitmapfonts_type = 142,
  sym__spriteType = 143,
  sym__spriteType_block = 144,
  sym__textSpriteType = 145,
  sym__textSpriteType_block = 146,
  sym__corneredTileSpriteType = 147,
  sym__corneredTileSpriteType_block = 148,
  sym__maskedShieldType = 149,
  sym__maskedShieldType_block = 150,
  sym__animatedmaptext = 151,
  sym__animatedmaptext_block = 152,
  sym__textcolors = 153,
  sym__textcolors_block = 154,
  sym__bitmapfont = 155,
  sym__bitmapfont_block = 156,
  sym__frameAnimatedSpriteType = 157,
  sym__frameAnimatedSpriteType_block = 158,
  sym__statement_name = 159,
  sym__statement_xy_integer = 160,
  sym__entry_x_integer = 161,
  sym__entry_y_integer = 162,
  sym__statement_xy_float = 163,
  sym__entry_x_float = 164,
  sym__entry_y_float = 165,
  sym__statement_mod_path = 166,
  sym__statement_mod_archive = 167,
  sym__statement_mod_remote_file_id = 168,
  sym__statement_mod_version = 169,
  sym__statement_mod_picture = 170,
  sym__statement_mod_supported_version = 171,
  sym__statement_mod_replace_path = 172,
  sym__mod_replace_path_folder = 173,
  sym__statement_mod_tags = 174,
  sym__mod_tags_block = 175,
  sym__mod_tags_keyword = 176,
  sym__statement_mod_dependencies = 177,
  sym__mod_dependencies_block = 178,
  sym__statement_gfx_name = 179,
  sym__statement_gfx_path = 180,
  sym__statement_gfx_cursor_offset = 181,
  sym__statement_gfx_textureFile = 182,
  sym__statement_gfx_noOfFrames = 183,
  sym__statement_gfx_overlay_frames_per_row = 184,
  sym__statement_gfx_overlay_rows = 185,
  sym__statement_gfx_effectFile = 186,
  sym__statement_gfx_animation = 187,
  sym__gfx_animation_block = 188,
  sym__animation_entry_dds = 189,
  sym__animation_entry_angle = 190,
  sym__animation_entry_bool = 191,
  sym__animation_entry_time = 192,
  sym__animation_entry_xy_float = 193,
  sym__animation_entry_blendmode = 194,
  sym__animation_entry_type = 195,
  sym__animation_entry_frames = 196,
  sym__statement_gfx_size = 197,
  sym__statement_gfx_borderSize = 198,
  sym__statement_gfx_allwaystransparent = 199,
  sym__statement_gfx_legacy_lazy_load = 200,
  sym__statement_gfx_clicksound = 201,
  sym__statement_gfx_speed = 202,
  sym__statement_gfx_textblock = 203,
  sym__gfx_textblock = 204,
  sym__statement_gfx_text = 205,
  sym__statement_gfx_color = 206,
  sym__statement_gfx_font = 207,
  sym__statement_gfx_position = 208,
  sym__statement_gfx_format = 209,
  sym__statement_gfx_cull_distance = 210,
  sym__statement_gfx_textcolors = 211,
  sym__statement_gfx_bitmapfont_color = 212,
  sym__statement_gfx_bitmapfont_border_color = 213,
  sym__statement_gfx_animation_rate_fps = 214,
  sym__statement_gfx_looping = 215,
  sym__statement_gfx_play_on_show = 216,
  sym__statement_gfx_pause_on_loop = 217,
  sym_float = 218,
  sym__float_positive = 219,
  sym__integer_positive = 220,
  sym__boolean_yes_no = 221,
  aux_sym_dot_mod_repeat1 = 222,
  aux_sym_dot_gfx_repeat1 = 223,
  aux_sym__spriteTypes_block_repeat1 = 224,
  aux_sym__objectTypes_block_repeat1 = 225,
  aux_sym__bitmapfonts_block_repeat1 = 226,
  aux_sym__spriteType_block_repeat1 = 227,
  aux_sym__textSpriteType_block_repeat1 = 228,
  aux_sym__corneredTileSpriteType_block_repeat1 = 229,
  aux_sym__maskedShieldType_block_repeat1 = 230,
  aux_sym__animatedmaptext_block_repeat1 = 231,
  aux_sym__textcolors_block_repeat1 = 232,
  aux_sym__bitmapfont_block_repeat1 = 233,
  aux_sym__frameAnimatedSpriteType_block_repeat1 = 234,
  aux_sym__mod_tags_block_repeat1 = 235,
  aux_sym__mod_dependencies_block_repeat1 = 236,
  aux_sym__gfx_animation_block_repeat1 = 237,
  aux_sym__animation_entry_frames_repeat1 = 238,
  aux_sym__gfx_textblock_repeat1 = 239,
  alias_sym_dependencies = 240,
  alias_sym_name_value = 241,
  alias_sym_statement = 242,
  alias_sym_type_definition = 243,
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
      if (eof) ADVANCE(1292);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#') ADVANCE(1441);
      if (lookahead == '-') ADVANCE(1272);
      if (lookahead == '0') ADVANCE(1422);
      if (lookahead == '1') ADVANCE(1422);
      if (lookahead == '2') ADVANCE(1420);
      if (lookahead == '=') ADVANCE(1417);
      if (lookahead == 'B') ADVANCE(1398);
      if (lookahead == 'G') ADVANCE(1401);
      if (lookahead == 'H') ADVANCE(1402);
      if (lookahead == 'M') ADVANCE(1405);
      if (lookahead == 'O') ADVANCE(1406);
      if (lookahead == 'R') ADVANCE(1408);
      if (lookahead == 'T') ADVANCE(1409);
      if (lookahead == 'W') ADVANCE(1410);
      if (lookahead == 'Y') ADVANCE(1411);
      if (lookahead == '\\') SKIP(1288)
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'b') ADVANCE(1400);
      if (lookahead == 'c') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(793);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'g') ADVANCE(1407);
      if (lookahead == 'l') ADVANCE(1404);
      if (lookahead == 'm') ADVANCE(712);
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead == 'o') ADVANCE(755);
      if (lookahead == 'p') ADVANCE(716);
      if (lookahead == 'r') ADVANCE(796);
      if (lookahead == 's') ADVANCE(907);
      if (lookahead == 't') ADVANCE(720);
      if (lookahead == 'v') ADVANCE(823);
      if (lookahead == 'x') ADVANCE(1309);
      if (lookahead == 'y') ADVANCE(1311);
      if (lookahead == '{') ADVANCE(1294);
      if (lookahead == '}') ADVANCE(1295);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1422);
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
      if (lookahead == '\n') SKIP(426)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(426)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(427)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(427)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(428)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(428)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(431)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(431)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(430)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(430)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(659);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(660);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(654);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(658);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(656);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(657);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(655);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(347);
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1316);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(195);
      if (lookahead == 'C') ADVANCE(239);
      if (lookahead == 'E') ADVANCE(305);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'H') ADVANCE(166);
      if (lookahead == 'L') ADVANCE(241);
      if (lookahead == 'M') ADVANCE(104);
      if (lookahead == 'R') ADVANCE(139);
      if (lookahead == 'S') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead == 'h') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(169);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1316);
      if (lookahead == '.') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1316);
      if (lookahead == '.') ADVANCE(536);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'M') ADVANCE(442);
      if (lookahead == 'R') ADVANCE(481);
      if (lookahead == 'S') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'm') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead == 'p') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(480);
      if (lookahead == 's') ADVANCE(460);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(443);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(577);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(509);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(438);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(510);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(579);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(479);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1316);
      if (lookahead == '.') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'j') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'z') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'j') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'z') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'j') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'z') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'K') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'j') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'z') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'j') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'z') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'j') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'z') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'j') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'z') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'F') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'X') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '_') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'u') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'c') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 's') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'v') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'v') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'v') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'v') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 'F') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 'X') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == '_') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(1349);
      if (lookahead == 'G') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(1336);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(1336);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(1371);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(1371);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead == 'j') ADVANCE(342);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == 'z') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 330:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'd') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'g') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'u') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(1318);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(1318);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(1318);
      if (lookahead == '.') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(1318);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(1320);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(1320);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(1320);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(1314);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(1314);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(1314);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(1352);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(1352);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(1357);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(1357);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(1333);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(1333);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(1342);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(1342);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(1330);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(1330);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(1344);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(1344);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(1322);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(1322);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(1322);
      if (lookahead == '.') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(1322);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(1322);
      if (lookahead == '.') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(1322);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(1322);
      if (lookahead == '.') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(1322);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(1328);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(1328);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(1373);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(1373);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(1377);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(1377);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(1327);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(1327);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(1331);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(1331);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(1332);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(1332);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(1337);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(1337);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 396:
      if (lookahead == '"') ADVANCE(1341);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 397:
      if (lookahead == '"') ADVANCE(1341);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 398:
      if (lookahead == '"') ADVANCE(1372);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 399:
      if (lookahead == '"') ADVANCE(1372);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 400:
      if (lookahead == '"') ADVANCE(1376);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 401:
      if (lookahead == '"') ADVANCE(1376);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 402:
      if (lookahead == '"') ADVANCE(1329);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 403:
      if (lookahead == '"') ADVANCE(1329);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 404:
      if (lookahead == '"') ADVANCE(1375);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 405:
      if (lookahead == '"') ADVANCE(1375);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 406:
      if (lookahead == '"') ADVANCE(1346);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 407:
      if (lookahead == '"') ADVANCE(1346);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 408:
      if (lookahead == '"') ADVANCE(1334);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 409:
      if (lookahead == '"') ADVANCE(1334);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 410:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 411:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 412:
      if (lookahead == '"') ADVANCE(1345);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 413:
      if (lookahead == '"') ADVANCE(1345);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 414:
      if (lookahead == '"') ADVANCE(1343);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 415:
      if (lookahead == '"') ADVANCE(1343);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 416:
      if (lookahead == '"') ADVANCE(1335);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 417:
      if (lookahead == '"') ADVANCE(1335);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 418:
      if (lookahead == '"') ADVANCE(1339);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 419:
      if (lookahead == '"') ADVANCE(1339);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 420:
      if (lookahead == '"') ADVANCE(1326);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 421:
      if (lookahead == '"') ADVANCE(1326);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 422:
      if (lookahead == '"') ADVANCE(1347);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 423:
      if (lookahead == '"') ADVANCE(1347);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 424:
      if (lookahead == '"') ADVANCE(1338);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 425:
      if (lookahead == '"') ADVANCE(1338);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 426:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(1441);
      if (lookahead == '-') ADVANCE(1274);
      if (lookahead == '=') ADVANCE(1417);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'b') ADVANCE(945);
      if (lookahead == 'c') ADVANCE(990);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == 'f') ADVANCE(1120);
      if (lookahead == 'l') ADVANCE(1043);
      if (lookahead == 'm') ADVANCE(712);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead == 'p') ADVANCE(717);
      if (lookahead == 's') ADVANCE(1114);
      if (lookahead == 't') ADVANCE(865);
      if (lookahead == '}') ADVANCE(1295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(426)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      END_STATE();
    case 427:
      if (lookahead == '"') ADVANCE(769);
      if (lookahead == '#') ADVANCE(1441);
      if (lookahead == '-') ADVANCE(1276);
      if (lookahead == '=') ADVANCE(1417);
      if (lookahead == 'B') ADVANCE(1398);
      if (lookahead == 'G') ADVANCE(1401);
      if (lookahead == 'H') ADVANCE(1402);
      if (lookahead == 'M') ADVANCE(1405);
      if (lookahead == 'O') ADVANCE(1406);
      if (lookahead == 'R') ADVANCE(1408);
      if (lookahead == 'T') ADVANCE(1409);
      if (lookahead == 'W') ADVANCE(1410);
      if (lookahead == 'Y') ADVANCE(1411);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == 'b') ADVANCE(1399);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == 'g') ADVANCE(1407);
      if (lookahead == 'l') ADVANCE(1403);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(1236);
      if (lookahead == 't') ADVANCE(873);
      if (lookahead == '}') ADVANCE(1295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(427)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1426);
      END_STATE();
    case 428:
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1441);
      if (lookahead == '0') ADVANCE(670);
      if (lookahead == '3') ADVANCE(669);
      if (lookahead == '=') ADVANCE(1417);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(1079);
      if (lookahead == 'f') ADVANCE(1042);
      if (lookahead == 'n') ADVANCE(1044);
      if (lookahead == 'p') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(906);
      if (lookahead == 't') ADVANCE(867);
      if (lookahead == 'y') ADVANCE(829);
      if (lookahead == '}') ADVANCE(1295);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(672);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(671);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(428)
      END_STATE();
    case 429:
      if (lookahead == '"') ADVANCE(1363);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(666);
      END_STATE();
    case 430:
      if (lookahead == '#') ADVANCE(1441);
      if (lookahead == '0') ADVANCE(1428);
      if (lookahead == '1') ADVANCE(1432);
      if (lookahead == '2') ADVANCE(1429);
      if (lookahead == '\\') SKIP(10)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(430)
      END_STATE();
    case 431:
      if (lookahead == '#') ADVANCE(1441);
      if (lookahead == '=') ADVANCE(1417);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(959);
      if (lookahead == 'b') ADVANCE(1087);
      if (lookahead == 'c') ADVANCE(1079);
      if (lookahead == 'f') ADVANCE(1042);
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead == 'p') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(906);
      if (lookahead == 't') ADVANCE(869);
      if (lookahead == '}') ADVANCE(1295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(431)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      END_STATE();
    case 432:
      if (lookahead == '*') ADVANCE(381);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == 'j') ADVANCE(592);
      if (lookahead == 'l') ADVANCE(642);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'z') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 433:
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == 'j') ADVANCE(592);
      if (lookahead == 'l') ADVANCE(642);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'z') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 434:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'C') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 435:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 436:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 437:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'K') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 438:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == 'u') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 439:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 440:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 441:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead == 'u') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 442:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 443:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 444:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 445:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 446:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 447:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 448:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 449:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 450:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 451:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 452:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 453:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(629);
      if (lookahead == 'e') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 454:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 455:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 456:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 457:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 458:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 459:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 460:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == 'o') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 461:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 462:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 463:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 464:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 465:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 466:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 467:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(475);
      if (lookahead == 'l') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 468:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == 'j') ADVANCE(592);
      if (lookahead == 'l') ADVANCE(642);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'z') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 469:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == 'j') ADVANCE(592);
      if (lookahead == 'l') ADVANCE(642);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == 'z') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 470:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 471:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 472:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 473:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 474:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 475:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 476:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 477:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 478:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 479:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 480:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'o') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 481:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 482:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 483:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 484:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 485:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 486:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 487:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 488:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 489:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 490:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 491:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 492:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 493:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 494:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 495:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 496:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 497:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 498:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 499:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 500:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'g') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 501:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'g') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 502:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'g') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 503:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'g') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 504:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'g') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 505:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'g') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 506:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'g') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 507:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'h') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 508:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 509:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 510:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 511:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 512:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 513:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 514:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 515:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 516:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 517:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 518:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 519:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 520:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 521:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 522:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 523:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 524:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 525:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 526:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 527:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 528:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 529:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 530:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 531:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 532:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 533:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 534:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 535:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 536:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'j') ADVANCE(592);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 'z') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 537:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 538:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 539:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 540:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 541:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead == 's') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 542:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 543:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 544:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 545:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 546:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 547:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 548:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 549:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 550:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 551:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 552:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 553:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 554:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 555:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 556:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 557:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 558:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 559:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 560:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 561:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 562:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 563:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 564:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 565:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 566:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 567:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 568:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 569:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 570:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 571:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 572:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 573:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 574:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 575:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 576:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 577:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 578:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 579:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 580:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 581:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 582:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 583:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 584:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 585:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 586:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 587:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 588:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 589:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 590:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 591:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 592:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 593:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 594:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 595:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 596:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 597:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 598:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 599:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 600:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 601:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 602:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 603:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 604:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 605:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 606:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 607:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 608:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 609:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 610:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 611:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 612:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 613:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 614:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 615:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 616:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 617:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 618:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 619:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 620:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 621:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 622:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 623:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 624:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 625:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 626:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 627:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 628:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 629:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 630:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 631:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 632:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 633:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 634:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 635:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 636:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 637:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 638:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 639:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 640:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'u') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 641:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'u') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 642:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'u') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 643:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 644:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(484);
      if (lookahead == 'x') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 645:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 646:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 647:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'w') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 648:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'x') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 649:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'y') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 650:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'y') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 651:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'y') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 652:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'y') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 653:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'y') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 654:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 655:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 656:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 657:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 658:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 659:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 660:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 661:
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 662:
      if (lookahead == '.') ADVANCE(674);
      END_STATE();
    case 663:
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 'd') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(666);
      END_STATE();
    case 664:
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 'd') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(666);
      END_STATE();
    case 665:
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(666);
      END_STATE();
    case 666:
      if (lookahead == '.') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(666);
      END_STATE();
    case 667:
      if (lookahead == '.') ADVANCE(1278);
      END_STATE();
    case 668:
      if (lookahead == '.') ADVANCE(1278);
      if (lookahead == '0') ADVANCE(662);
      END_STATE();
    case 669:
      if (lookahead == '.') ADVANCE(1278);
      if (lookahead == '6') ADVANCE(668);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(671);
      END_STATE();
    case 670:
      if (lookahead == '.') ADVANCE(1278);
      if (lookahead == 'x') ADVANCE(1286);
      END_STATE();
    case 671:
      if (lookahead == '.') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(667);
      END_STATE();
    case 672:
      if (lookahead == '.') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(671);
      END_STATE();
    case 673:
      if (lookahead == '.') ADVANCE(1279);
      if (lookahead == 'f') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      END_STATE();
    case 674:
      if (lookahead == '0') ADVANCE(1435);
      END_STATE();
    case 675:
      if (lookahead == 'A') ADVANCE(1041);
      END_STATE();
    case 676:
      if (lookahead == 'F') ADVANCE(1143);
      END_STATE();
    case 677:
      if (lookahead == 'F') ADVANCE(914);
      END_STATE();
    case 678:
      if (lookahead == 'O') ADVANCE(879);
      END_STATE();
    case 679:
      if (lookahead == 'S') ADVANCE(1094);
      if (lookahead == 'b') ADVANCE(971);
      if (lookahead == 'c') ADVANCE(1084);
      if (lookahead == 'u') ADVANCE(1134);
      END_STATE();
    case 680:
      if (lookahead == 'S') ADVANCE(923);
      END_STATE();
    case 681:
      if (lookahead == 'S') ADVANCE(923);
      if (lookahead == '_') ADVANCE(764);
      END_STATE();
    case 682:
      if (lookahead == 'S') ADVANCE(904);
      END_STATE();
    case 683:
      if (lookahead == 'S') ADVANCE(1113);
      END_STATE();
    case 684:
      if (lookahead == 'S') ADVANCE(1115);
      END_STATE();
    case 685:
      if (lookahead == 'T') ADVANCE(1259);
      END_STATE();
    case 686:
      if (lookahead == 'T') ADVANCE(930);
      END_STATE();
    case 687:
      if (lookahead == 'T') ADVANCE(1260);
      END_STATE();
    case 688:
      if (lookahead == 'T') ADVANCE(1261);
      END_STATE();
    case 689:
      if (lookahead == 'T') ADVANCE(1262);
      END_STATE();
    case 690:
      if (lookahead == 'T') ADVANCE(1263);
      END_STATE();
    case 691:
      if (lookahead == 'T') ADVANCE(1264);
      END_STATE();
    case 692:
      if (lookahead == 'T') ADVANCE(1265);
      END_STATE();
    case 693:
      if (lookahead == 'T') ADVANCE(1266);
      END_STATE();
    case 694:
      if (lookahead == '_') ADVANCE(896);
      END_STATE();
    case 695:
      if (lookahead == '_') ADVANCE(782);
      END_STATE();
    case 696:
      if (lookahead == '_') ADVANCE(1053);
      END_STATE();
    case 697:
      if (lookahead == '_') ADVANCE(887);
      END_STATE();
    case 698:
      if (lookahead == '_') ADVANCE(764);
      END_STATE();
    case 699:
      if (lookahead == '_') ADVANCE(886);
      END_STATE();
    case 700:
      if (lookahead == '_') ADVANCE(972);
      END_STATE();
    case 701:
      if (lookahead == '_') ADVANCE(1109);
      END_STATE();
    case 702:
      if (lookahead == '_') ADVANCE(1075);
      END_STATE();
    case 703:
      if (lookahead == '_') ADVANCE(1164);
      END_STATE();
    case 704:
      if (lookahead == '_') ADVANCE(918);
      END_STATE();
    case 705:
      if (lookahead == '_') ADVANCE(1142);
      if (lookahead == 'b') ADVANCE(980);
      if (lookahead == 'd') ADVANCE(861);
      if (lookahead == 'f') ADVANCE(1146);
      if (lookahead == 'l') ADVANCE(1086);
      if (lookahead == 'm') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(1066);
      if (lookahead == 't') ADVANCE(866);
      END_STATE();
    case 706:
      if (lookahead == '_') ADVANCE(1129);
      END_STATE();
    case 707:
      if (lookahead == '_') ADVANCE(1239);
      END_STATE();
    case 708:
      if (lookahead == '_') ADVANCE(989);
      END_STATE();
    case 709:
      if (lookahead == '_') ADVANCE(1060);
      END_STATE();
    case 710:
      if (lookahead == '_') ADVANCE(975);
      END_STATE();
    case 711:
      if (lookahead == '_') ADVANCE(1102);
      END_STATE();
    case 712:
      if (lookahead == 'a') ADVANCE(1150);
      END_STATE();
    case 713:
      if (lookahead == 'a') ADVANCE(994);
      if (lookahead == 'o') ADVANCE(1440);
      END_STATE();
    case 714:
      if (lookahead == 'a') ADVANCE(994);
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 715:
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(760);
      if (lookahead == 'l') ADVANCE(718);
      END_STATE();
    case 716:
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'i') ADVANCE(760);
      if (lookahead == 'l') ADVANCE(718);
      if (lookahead == 'o') ADVANCE(1163);
      END_STATE();
    case 717:
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'l') ADVANCE(718);
      END_STATE();
    case 718:
      if (lookahead == 'a') ADVANCE(1254);
      END_STATE();
    case 719:
      if (lookahead == 'a') ADVANCE(970);
      if (lookahead == 'o') ADVANCE(1022);
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 720:
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'e') ADVANCE(1245);
      if (lookahead == 'r') ADVANCE(1231);
      END_STATE();
    case 721:
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == 'e') ADVANCE(1247);
      END_STATE();
    case 722:
      if (lookahead == 'a') ADVANCE(1270);
      END_STATE();
    case 723:
      if (lookahead == 'a') ADVANCE(1258);
      END_STATE();
    case 724:
      if (lookahead == 'a') ADVANCE(773);
      END_STATE();
    case 725:
      if (lookahead == 'a') ADVANCE(1253);
      END_STATE();
    case 726:
      if (lookahead == 'a') ADVANCE(770);
      END_STATE();
    case 727:
      if (lookahead == 'a') ADVANCE(1090);
      END_STATE();
    case 728:
      if (lookahead == 'a') ADVANCE(1184);
      END_STATE();
    case 729:
      if (lookahead == 'a') ADVANCE(1110);
      END_STATE();
    case 730:
      if (lookahead == 'a') ADVANCE(1185);
      END_STATE();
    case 731:
      if (lookahead == 'a') ADVANCE(988);
      END_STATE();
    case 732:
      if (lookahead == 'a') ADVANCE(1030);
      END_STATE();
    case 733:
      if (lookahead == 'a') ADVANCE(1089);
      if (lookahead == 'i') ADVANCE(1180);
      END_STATE();
    case 734:
      if (lookahead == 'a') ADVANCE(779);
      END_STATE();
    case 735:
      if (lookahead == 'a') ADVANCE(1201);
      END_STATE();
    case 736:
      if (lookahead == 'a') ADVANCE(1039);
      END_STATE();
    case 737:
      if (lookahead == 'a') ADVANCE(1165);
      END_STATE();
    case 738:
      if (lookahead == 'a') ADVANCE(997);
      END_STATE();
    case 739:
      if (lookahead == 'a') ADVANCE(999);
      END_STATE();
    case 740:
      if (lookahead == 'a') ADVANCE(1257);
      END_STATE();
    case 741:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 742:
      if (lookahead == 'a') ADVANCE(1000);
      END_STATE();
    case 743:
      if (lookahead == 'a') ADVANCE(1208);
      END_STATE();
    case 744:
      if (lookahead == 'a') ADVANCE(1001);
      END_STATE();
    case 745:
      if (lookahead == 'a') ADVANCE(1135);
      END_STATE();
    case 746:
      if (lookahead == 'a') ADVANCE(984);
      END_STATE();
    case 747:
      if (lookahead == 'a') ADVANCE(1213);
      END_STATE();
    case 748:
      if (lookahead == 'a') ADVANCE(1111);
      END_STATE();
    case 749:
      if (lookahead == 'a') ADVANCE(1219);
      END_STATE();
    case 750:
      if (lookahead == 'a') ADVANCE(1112);
      END_STATE();
    case 751:
      if (lookahead == 'a') ADVANCE(1220);
      END_STATE();
    case 752:
      if (lookahead == 'a') ADVANCE(1221);
      END_STATE();
    case 753:
      if (lookahead == 'a') ADVANCE(1222);
      END_STATE();
    case 754:
      if (lookahead == 'a') ADVANCE(1223);
      END_STATE();
    case 755:
      if (lookahead == 'b') ADVANCE(952);
      if (lookahead == 'v') ADVANCE(827);
      END_STATE();
    case 756:
      if (lookahead == 'b') ADVANCE(971);
      if (lookahead == 'c') ADVANCE(1084);
      if (lookahead == 'u') ADVANCE(1134);
      END_STATE();
    case 757:
      if (lookahead == 'c') ADVANCE(903);
      END_STATE();
    case 758:
      if (lookahead == 'c') ADVANCE(953);
      END_STATE();
    case 759:
      if (lookahead == 'c') ADVANCE(954);
      END_STATE();
    case 760:
      if (lookahead == 'c') ADVANCE(1197);
      END_STATE();
    case 761:
      if (lookahead == 'c') ADVANCE(957);
      END_STATE();
    case 762:
      if (lookahead == 'c') ADVANCE(955);
      END_STATE();
    case 763:
      if (lookahead == 'c') ADVANCE(1199);
      END_STATE();
    case 764:
      if (lookahead == 'c') ADVANCE(1058);
      END_STATE();
    case 765:
      if (lookahead == 'c') ADVANCE(1186);
      END_STATE();
    case 766:
      if (lookahead == 'c') ADVANCE(942);
      END_STATE();
    case 767:
      if (lookahead == 'c') ADVANCE(746);
      END_STATE();
    case 768:
      if (lookahead == 'c') ADVANCE(731);
      END_STATE();
    case 769:
      if (lookahead == 'c') ADVANCE(1050);
      if (lookahead == 'd') ADVANCE(862);
      if (lookahead == 'e') ADVANCE(1238);
      if (lookahead == 'g') ADVANCE(882);
      if (lookahead == 'h') ADVANCE(927);
      if (lookahead == 'i') ADVANCE(1040);
      if (lookahead == 'l') ADVANCE(1080);
      if (lookahead == 'm') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 770:
      if (lookahead == 'c') ADVANCE(836);
      END_STATE();
    case 771:
      if (lookahead == 'c') ADVANCE(810);
      END_STATE();
    case 772:
      if (lookahead == 'c') ADVANCE(826);
      END_STATE();
    case 773:
      if (lookahead == 'c') ADVANCE(1256);
      END_STATE();
    case 774:
      if (lookahead == 'c') ADVANCE(922);
      END_STATE();
    case 775:
      if (lookahead == 'd') ADVANCE(1386);
      END_STATE();
    case 776:
      if (lookahead == 'd') ADVANCE(682);
      END_STATE();
    case 777:
      if (lookahead == 'd') ADVANCE(1383);
      END_STATE();
    case 778:
      if (lookahead == 'd') ADVANCE(1315);
      END_STATE();
    case 779:
      if (lookahead == 'd') ADVANCE(1382);
      END_STATE();
    case 780:
      if (lookahead == 'd') ADVANCE(686);
      END_STATE();
    case 781:
      if (lookahead == 'd') ADVANCE(998);
      END_STATE();
    case 782:
      if (lookahead == 'd') ADVANCE(915);
      END_STATE();
    case 783:
      if (lookahead == 'd') ADVANCE(707);
      END_STATE();
    case 784:
      if (lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 785:
      if (lookahead == 'd') ADVANCE(837);
      END_STATE();
    case 786:
      if (lookahead == 'd') ADVANCE(814);
      END_STATE();
    case 787:
      if (lookahead == 'd') ADVANCE(851);
      END_STATE();
    case 788:
      if (lookahead == 'd') ADVANCE(855);
      END_STATE();
    case 789:
      if (lookahead == 'd') ADVANCE(996);
      END_STATE();
    case 790:
      if (lookahead == 'd') ADVANCE(689);
      END_STATE();
    case 791:
      if (lookahead == 'd') ADVANCE(684);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(1020);
      if (lookahead == 'l') ADVANCE(911);
      if (lookahead == 'o') ADVANCE(967);
      if (lookahead == 'u') ADVANCE(969);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 794:
      if (lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(899);
      if (lookahead == 'o') ADVANCE(1047);
      END_STATE();
    case 796:
      if (lookahead == 'e') ADVANCE(992);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(1308);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(1379);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(1436);
      END_STATE();
    case 800:
      if (lookahead == 'e') ADVANCE(1437);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 802:
      if (lookahead == 'e') ADVANCE(1395);
      END_STATE();
    case 803:
      if (lookahead == 'e') ADVANCE(1313);
      END_STATE();
    case 804:
      if (lookahead == 'e') ADVANCE(1319);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(1271);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(1380);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(1356);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(1299);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(1351);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(1396);
      END_STATE();
    case 811:
      if (lookahead == 'e') ADVANCE(1300);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(1302);
      END_STATE();
    case 813:
      if (lookahead == 'e') ADVANCE(1361);
      END_STATE();
    case 814:
      if (lookahead == 'e') ADVANCE(1370);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(1301);
      END_STATE();
    case 816:
      if (lookahead == 'e') ADVANCE(1307);
      END_STATE();
    case 817:
      if (lookahead == 'e') ADVANCE(1298);
      END_STATE();
    case 818:
      if (lookahead == 'e') ADVANCE(1366);
      END_STATE();
    case 819:
      if (lookahead == 'e') ADVANCE(1374);
      END_STATE();
    case 820:
      if (lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 821:
      if (lookahead == 'e') ADVANCE(1362);
      END_STATE();
    case 822:
      if (lookahead == 'e') ADVANCE(1369);
      END_STATE();
    case 823:
      if (lookahead == 'e') ADVANCE(1137);
      END_STATE();
    case 824:
      if (lookahead == 'e') ADVANCE(775);
      END_STATE();
    case 825:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 826:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 827:
      if (lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 828:
      if (lookahead == 'e') ADVANCE(1037);
      END_STATE();
    case 829:
      if (lookahead == 'e') ADVANCE(1151);
      END_STATE();
    case 830:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 832:
      if (lookahead == 'e') ADVANCE(789);
      if (lookahead == 'i') ADVANCE(1063);
      END_STATE();
    case 833:
      if (lookahead == 'e') ADVANCE(1118);
      END_STATE();
    case 834:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 835:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 836:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 837:
      if (lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 838:
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead == 'r') ADVANCE(925);
      END_STATE();
    case 839:
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead == 'r') ADVANCE(948);
      END_STATE();
    case 840:
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead == 'r') ADVANCE(949);
      END_STATE();
    case 841:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 842:
      if (lookahead == 'e') ADVANCE(973);
      END_STATE();
    case 843:
      if (lookahead == 'e') ADVANCE(1153);
      END_STATE();
    case 844:
      if (lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 845:
      if (lookahead == 'e') ADVANCE(1155);
      END_STATE();
    case 846:
      if (lookahead == 'e') ADVANCE(1157);
      END_STATE();
    case 847:
      if (lookahead == 'e') ADVANCE(1127);
      END_STATE();
    case 848:
      if (lookahead == 'e') ADVANCE(1028);
      END_STATE();
    case 849:
      if (lookahead == 'e') ADVANCE(1169);
      END_STATE();
    case 850:
      if (lookahead == 'e') ADVANCE(1188);
      END_STATE();
    case 851:
      if (lookahead == 'e') ADVANCE(1128);
      END_STATE();
    case 852:
      if (lookahead == 'e') ADVANCE(1159);
      END_STATE();
    case 853:
      if (lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 854:
      if (lookahead == 'e') ADVANCE(1191);
      END_STATE();
    case 855:
      if (lookahead == 'e') ADVANCE(1121);
      END_STATE();
    case 856:
      if (lookahead == 'e') ADVANCE(1156);
      END_STATE();
    case 857:
      if (lookahead == 'e') ADVANCE(1246);
      END_STATE();
    case 858:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 859:
      if (lookahead == 'e') ADVANCE(1132);
      END_STATE();
    case 860:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 861:
      if (lookahead == 'e') ADVANCE(974);
      END_STATE();
    case 862:
      if (lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 863:
      if (lookahead == 'e') ADVANCE(1032);
      END_STATE();
    case 864:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 865:
      if (lookahead == 'e') ADVANCE(1248);
      END_STATE();
    case 866:
      if (lookahead == 'e') ADVANCE(1251);
      if (lookahead == 'i') ADVANCE(1002);
      if (lookahead == 'y') ADVANCE(1107);
      END_STATE();
    case 867:
      if (lookahead == 'e') ADVANCE(1249);
      END_STATE();
    case 868:
      if (lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 869:
      if (lookahead == 'e') ADVANCE(1250);
      END_STATE();
    case 870:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 871:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 872:
      if (lookahead == 'e') ADVANCE(1144);
      END_STATE();
    case 873:
      if (lookahead == 'e') ADVANCE(1252);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 875:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 876:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 877:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 878:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 879:
      if (lookahead == 'f') ADVANCE(676);
      END_STATE();
    case 880:
      if (lookahead == 'f') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      END_STATE();
    case 881:
      if (lookahead == 'f') ADVANCE(883);
      END_STATE();
    case 882:
      if (lookahead == 'f') ADVANCE(1244);
      END_STATE();
    case 883:
      if (lookahead == 'f') ADVANCE(858);
      END_STATE();
    case 884:
      if (lookahead == 'f') ADVANCE(889);
      END_STATE();
    case 885:
      if (lookahead == 'f') ADVANCE(1076);
      END_STATE();
    case 886:
      if (lookahead == 'f') ADVANCE(1097);
      END_STATE();
    case 887:
      if (lookahead == 'f') ADVANCE(926);
      END_STATE();
    case 888:
      if (lookahead == 'f') ADVANCE(741);
      END_STATE();
    case 889:
      if (lookahead == 'f') ADVANCE(1174);
      END_STATE();
    case 890:
      if (lookahead == 'f') ADVANCE(1175);
      END_STATE();
    case 891:
      if (lookahead == 'f') ADVANCE(890);
      END_STATE();
    case 892:
      if (lookahead == 'f') ADVANCE(1083);
      END_STATE();
    case 893:
      if (lookahead == 'f') ADVANCE(932);
      END_STATE();
    case 894:
      if (lookahead == 'f') ADVANCE(1085);
      END_STATE();
    case 895:
      if (lookahead == 'f') ADVANCE(934);
      if (lookahead == 's') ADVANCE(767);
      END_STATE();
    case 896:
      if (lookahead == 'f') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(1046);
      END_STATE();
    case 897:
      if (lookahead == 'g') ADVANCE(1414);
      END_STATE();
    case 898:
      if (lookahead == 'g') ADVANCE(1365);
      END_STATE();
    case 899:
      if (lookahead == 'g') ADVANCE(724);
      END_STATE();
    case 900:
      if (lookahead == 'g') ADVANCE(1152);
      END_STATE();
    case 901:
      if (lookahead == 'h') ADVANCE(1312);
      END_STATE();
    case 902:
      if (lookahead == 'h') ADVANCE(1323);
      END_STATE();
    case 903:
      if (lookahead == 'h') ADVANCE(909);
      END_STATE();
    case 904:
      if (lookahead == 'h') ADVANCE(921);
      END_STATE();
    case 905:
      if (lookahead == 'h') ADVANCE(1049);
      END_STATE();
    case 906:
      if (lookahead == 'i') ADVANCE(1268);
      END_STATE();
    case 907:
      if (lookahead == 'i') ADVANCE(1268);
      if (lookahead == 'p') ADVANCE(838);
      if (lookahead == 'u') ADVANCE(1091);
      END_STATE();
    case 908:
      if (lookahead == 'i') ADVANCE(1268);
      if (lookahead == 'p') ADVANCE(839);
      if (lookahead == 'u') ADVANCE(1091);
      END_STATE();
    case 909:
      if (lookahead == 'i') ADVANCE(1237);
      END_STATE();
    case 910:
      if (lookahead == 'i') ADVANCE(993);
      END_STATE();
    case 911:
      if (lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 912:
      if (lookahead == 'i') ADVANCE(1023);
      END_STATE();
    case 913:
      if (lookahead == 'i') ADVANCE(1217);
      END_STATE();
    case 914:
      if (lookahead == 'i') ADVANCE(977);
      END_STATE();
    case 915:
      if (lookahead == 'i') ADVANCE(1170);
      END_STATE();
    case 916:
      if (lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 917:
      if (lookahead == 'i') ADVANCE(762);
      END_STATE();
    case 918:
      if (lookahead == 'i') ADVANCE(778);
      END_STATE();
    case 919:
      if (lookahead == 'i') ADVANCE(1024);
      END_STATE();
    case 920:
      if (lookahead == 'i') ADVANCE(1181);
      END_STATE();
    case 921:
      if (lookahead == 'i') ADVANCE(842);
      END_STATE();
    case 922:
      if (lookahead == 'i') ADVANCE(846);
      END_STATE();
    case 923:
      if (lookahead == 'i') ADVANCE(1269);
      END_STATE();
    case 924:
      if (lookahead == 'i') ADVANCE(1057);
      END_STATE();
    case 925:
      if (lookahead == 'i') ADVANCE(1204);
      END_STATE();
    case 926:
      if (lookahead == 'i') ADVANCE(978);
      END_STATE();
    case 927:
      if (lookahead == 'i') ADVANCE(1173);
      END_STATE();
    case 928:
      if (lookahead == 'i') ADVANCE(979);
      END_STATE();
    case 929:
      if (lookahead == 'i') ADVANCE(1061);
      END_STATE();
    case 930:
      if (lookahead == 'i') ADVANCE(981);
      END_STATE();
    case 931:
      if (lookahead == 'i') ADVANCE(1067);
      END_STATE();
    case 932:
      if (lookahead == 'i') ADVANCE(982);
      END_STATE();
    case 933:
      if (lookahead == 'i') ADVANCE(1069);
      END_STATE();
    case 934:
      if (lookahead == 'i') ADVANCE(983);
      END_STATE();
    case 935:
      if (lookahead == 'i') ADVANCE(1070);
      END_STATE();
    case 936:
      if (lookahead == 'i') ADVANCE(1071);
      END_STATE();
    case 937:
      if (lookahead == 'i') ADVANCE(1072);
      END_STATE();
    case 938:
      if (lookahead == 'i') ADVANCE(1073);
      END_STATE();
    case 939:
      if (lookahead == 'i') ADVANCE(1074);
      END_STATE();
    case 940:
      if (lookahead == 'i') ADVANCE(1005);
      END_STATE();
    case 941:
      if (lookahead == 'i') ADVANCE(1009);
      END_STATE();
    case 942:
      if (lookahead == 'i') ADVANCE(1179);
      END_STATE();
    case 943:
      if (lookahead == 'i') ADVANCE(1224);
      if (lookahead == 'o') ADVANCE(1116);
      END_STATE();
    case 944:
      if (lookahead == 'i') ADVANCE(1226);
      END_STATE();
    case 945:
      if (lookahead == 'i') ADVANCE(1225);
      if (lookahead == 'o') ADVANCE(1140);
      END_STATE();
    case 946:
      if (lookahead == 'i') ADVANCE(1227);
      END_STATE();
    case 947:
      if (lookahead == 'i') ADVANCE(1228);
      END_STATE();
    case 948:
      if (lookahead == 'i') ADVANCE(1229);
      END_STATE();
    case 949:
      if (lookahead == 'i') ADVANCE(1230);
      END_STATE();
    case 950:
      if (lookahead == 'i') ADVANCE(1010);
      END_STATE();
    case 951:
      if (lookahead == 'i') ADVANCE(1011);
      END_STATE();
    case 952:
      if (lookahead == 'j') ADVANCE(864);
      END_STATE();
    case 953:
      if (lookahead == 'k') ADVANCE(1385);
      END_STATE();
    case 954:
      if (lookahead == 'k') ADVANCE(1387);
      END_STATE();
    case 955:
      if (lookahead == 'k') ADVANCE(1384);
      END_STATE();
    case 956:
      if (lookahead == 'k') ADVANCE(830);
      END_STATE();
    case 957:
      if (lookahead == 'k') ADVANCE(1166);
      END_STATE();
    case 958:
      if (lookahead == 'k') ADVANCE(893);
      END_STATE();
    case 959:
      if (lookahead == 'l') ADVANCE(964);
      END_STATE();
    case 960:
      if (lookahead == 'l') ADVANCE(964);
      if (lookahead == 'n') ADVANCE(910);
      if (lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 961:
      if (lookahead == 'l') ADVANCE(964);
      if (lookahead == 'n') ADVANCE(941);
      if (lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 962:
      if (lookahead == 'l') ADVANCE(964);
      if (lookahead == 'n') ADVANCE(950);
      END_STATE();
    case 963:
      if (lookahead == 'l') ADVANCE(964);
      if (lookahead == 'n') ADVANCE(951);
      END_STATE();
    case 964:
      if (lookahead == 'l') ADVANCE(1242);
      END_STATE();
    case 965:
      if (lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 966:
      if (lookahead == 'l') ADVANCE(1052);
      END_STATE();
    case 967:
      if (lookahead == 'l') ADVANCE(1052);
      if (lookahead == 'r') ADVANCE(1029);
      END_STATE();
    case 968:
      if (lookahead == 'l') ADVANCE(965);
      END_STATE();
    case 969:
      if (lookahead == 'l') ADVANCE(965);
      if (lookahead == 'r') ADVANCE(1177);
      END_STATE();
    case 970:
      if (lookahead == 'l') ADVANCE(1171);
      END_STATE();
    case 971:
      if (lookahead == 'l') ADVANCE(1054);
      END_STATE();
    case 972:
      if (lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 973:
      if (lookahead == 'l') ADVANCE(790);
      END_STATE();
    case 974:
      if (lookahead == 'l') ADVANCE(725);
      END_STATE();
    case 975:
      if (lookahead == 'l') ADVANCE(1064);
      END_STATE();
    case 976:
      if (lookahead == 'l') ADVANCE(1082);
      END_STATE();
    case 977:
      if (lookahead == 'l') ADVANCE(807);
      END_STATE();
    case 978:
      if (lookahead == 'l') ADVANCE(841);
      END_STATE();
    case 979:
      if (lookahead == 'l') ADVANCE(809);
      END_STATE();
    case 980:
      if (lookahead == 'l') ADVANCE(848);
      END_STATE();
    case 981:
      if (lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 982:
      if (lookahead == 'l') ADVANCE(813);
      END_STATE();
    case 983:
      if (lookahead == 'l') ADVANCE(821);
      END_STATE();
    case 984:
      if (lookahead == 'l') ADVANCE(822);
      END_STATE();
    case 985:
      if (lookahead == 'l') ADVANCE(916);
      if (lookahead == 'o') ADVANCE(966);
      if (lookahead == 'u') ADVANCE(1122);
      END_STATE();
    case 986:
      if (lookahead == 'l') ADVANCE(740);
      END_STATE();
    case 987:
      if (lookahead == 'l') ADVANCE(726);
      END_STATE();
    case 988:
      if (lookahead == 'l') ADVANCE(920);
      END_STATE();
    case 989:
      if (lookahead == 'l') ADVANCE(1077);
      END_STATE();
    case 990:
      if (lookahead == 'l') ADVANCE(917);
      if (lookahead == 'o') ADVANCE(967);
      if (lookahead == 'u') ADVANCE(1122);
      END_STATE();
    case 991:
      if (lookahead == 'l') ADVANCE(1065);
      END_STATE();
    case 992:
      if (lookahead == 'm') ADVANCE(1055);
      if (lookahead == 'p') ADVANCE(987);
      END_STATE();
    case 993:
      if (lookahead == 'm') ADVANCE(728);
      END_STATE();
    case 994:
      if (lookahead == 'm') ADVANCE(797);
      END_STATE();
    case 995:
      if (lookahead == 'm') ADVANCE(727);
      END_STATE();
    case 996:
      if (lookahead == 'm') ADVANCE(729);
      END_STATE();
    case 997:
      if (lookahead == 'm') ADVANCE(801);
      END_STATE();
    case 998:
      if (lookahead == 'm') ADVANCE(1081);
      END_STATE();
    case 999:
      if (lookahead == 'm') ADVANCE(843);
      END_STATE();
    case 1000:
      if (lookahead == 'm') ADVANCE(849);
      END_STATE();
    case 1001:
      if (lookahead == 'm') ADVANCE(852);
      END_STATE();
    case 1002:
      if (lookahead == 'm') ADVANCE(818);
      END_STATE();
    case 1003:
      if (lookahead == 'm') ADVANCE(1006);
      END_STATE();
    case 1004:
      if (lookahead == 'm') ADVANCE(730);
      END_STATE();
    case 1005:
      if (lookahead == 'm') ADVANCE(743);
      END_STATE();
    case 1006:
      if (lookahead == 'm') ADVANCE(1072);
      END_STATE();
    case 1007:
      if (lookahead == 'm') ADVANCE(748);
      END_STATE();
    case 1008:
      if (lookahead == 'm') ADVANCE(750);
      END_STATE();
    case 1009:
      if (lookahead == 'm') ADVANCE(751);
      END_STATE();
    case 1010:
      if (lookahead == 'm') ADVANCE(752);
      END_STATE();
    case 1011:
      if (lookahead == 'm') ADVANCE(753);
      END_STATE();
    case 1012:
      if (lookahead == 'n') ADVANCE(1317);
      END_STATE();
    case 1013:
      if (lookahead == 'n') ADVANCE(1393);
      END_STATE();
    case 1014:
      if (lookahead == 'n') ADVANCE(1360);
      END_STATE();
    case 1015:
      if (lookahead == 'n') ADVANCE(1364);
      END_STATE();
    case 1016:
      if (lookahead == 'n') ADVANCE(1321);
      END_STATE();
    case 1017:
      if (lookahead == 'n') ADVANCE(1359);
      END_STATE();
    case 1018:
      if (lookahead == 'n') ADVANCE(705);
      END_STATE();
    case 1019:
      if (lookahead == 'n') ADVANCE(1358);
      END_STATE();
    case 1020:
      if (lookahead == 'n') ADVANCE(1200);
      END_STATE();
    case 1021:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 1022:
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead == 'r') ADVANCE(1004);
      END_STATE();
    case 1023:
      if (lookahead == 'n') ADVANCE(897);
      END_STATE();
    case 1024:
      if (lookahead == 'n') ADVANCE(898);
      END_STATE();
    case 1025:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 1026:
      if (lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 1027:
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 1028:
      if (lookahead == 'n') ADVANCE(781);
      END_STATE();
    case 1029:
      if (lookahead == 'n') ADVANCE(859);
      END_STATE();
    case 1030:
      if (lookahead == 'n') ADVANCE(1168);
      END_STATE();
    case 1031:
      if (lookahead == 'n') ADVANCE(1187);
      END_STATE();
    case 1032:
      if (lookahead == 'n') ADVANCE(1190);
      END_STATE();
    case 1033:
      if (lookahead == 'n') ADVANCE(1205);
      END_STATE();
    case 1034:
      if (lookahead == 'n') ADVANCE(1194);
      END_STATE();
    case 1035:
      if (lookahead == 'n') ADVANCE(1162);
      END_STATE();
    case 1036:
      if (lookahead == 'n') ADVANCE(1206);
      END_STATE();
    case 1037:
      if (lookahead == 'n') ADVANCE(785);
      END_STATE();
    case 1038:
      if (lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 1039:
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 1040:
      if (lookahead == 'n') ADVANCE(1210);
      END_STATE();
    case 1041:
      if (lookahead == 'n') ADVANCE(940);
      END_STATE();
    case 1042:
      if (lookahead == 'o') ADVANCE(1022);
      END_STATE();
    case 1043:
      if (lookahead == 'o') ADVANCE(1047);
      END_STATE();
    case 1044:
      if (lookahead == 'o') ADVANCE(1439);
      END_STATE();
    case 1045:
      if (lookahead == 'o') ADVANCE(1163);
      END_STATE();
    case 1046:
      if (lookahead == 'o') ADVANCE(1243);
      END_STATE();
    case 1047:
      if (lookahead == 'o') ADVANCE(1093);
      END_STATE();
    case 1048:
      if (lookahead == 'o') ADVANCE(1232);
      END_STATE();
    case 1049:
      if (lookahead == 'o') ADVANCE(1240);
      END_STATE();
    case 1050:
      if (lookahead == 'o') ADVANCE(1003);
      END_STATE();
    case 1051:
      if (lookahead == 'o') ADVANCE(1241);
      END_STATE();
    case 1052:
      if (lookahead == 'o') ADVANCE(1117);
      END_STATE();
    case 1053:
      if (lookahead == 'o') ADVANCE(1025);
      END_STATE();
    case 1054:
      if (lookahead == 'o') ADVANCE(759);
      END_STATE();
    case 1055:
      if (lookahead == 'o') ADVANCE(1203);
      END_STATE();
    case 1056:
      if (lookahead == 'o') ADVANCE(1138);
      END_STATE();
    case 1057:
      if (lookahead == 'o') ADVANCE(1012);
      END_STATE();
    case 1058:
      if (lookahead == 'o') ADVANCE(991);
      END_STATE();
    case 1059:
      if (lookahead == 'o') ADVANCE(1139);
      END_STATE();
    case 1060:
      if (lookahead == 'o') ADVANCE(1038);
      END_STATE();
    case 1061:
      if (lookahead == 'o') ADVANCE(1013);
      END_STATE();
    case 1062:
      if (lookahead == 'o') ADVANCE(1088);
      END_STATE();
    case 1063:
      if (lookahead == 'o') ADVANCE(1014);
      END_STATE();
    case 1064:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 1065:
      if (lookahead == 'o') ADVANCE(1119);
      END_STATE();
    case 1066:
      if (lookahead == 'o') ADVANCE(1215);
      END_STATE();
    case 1067:
      if (lookahead == 'o') ADVANCE(1015);
      END_STATE();
    case 1068:
      if (lookahead == 'o') ADVANCE(1124);
      END_STATE();
    case 1069:
      if (lookahead == 'o') ADVANCE(1016);
      END_STATE();
    case 1070:
      if (lookahead == 'o') ADVANCE(1017);
      END_STATE();
    case 1071:
      if (lookahead == 'o') ADVANCE(1018);
      END_STATE();
    case 1072:
      if (lookahead == 'o') ADVANCE(1021);
      END_STATE();
    case 1073:
      if (lookahead == 'o') ADVANCE(1035);
      END_STATE();
    case 1074:
      if (lookahead == 'o') ADVANCE(1019);
      END_STATE();
    case 1075:
      if (lookahead == 'o') ADVANCE(884);
      END_STATE();
    case 1076:
      if (lookahead == 'o') ADVANCE(1031);
      END_STATE();
    case 1077:
      if (lookahead == 'o') ADVANCE(1062);
      END_STATE();
    case 1078:
      if (lookahead == 'o') ADVANCE(1096);
      END_STATE();
    case 1079:
      if (lookahead == 'o') ADVANCE(966);
      if (lookahead == 'u') ADVANCE(968);
      END_STATE();
    case 1080:
      if (lookahead == 'o') ADVANCE(768);
      END_STATE();
    case 1081:
      if (lookahead == 'o') ADVANCE(786);
      END_STATE();
    case 1082:
      if (lookahead == 'o') ADVANCE(1131);
      END_STATE();
    case 1083:
      if (lookahead == 'o') ADVANCE(1033);
      END_STATE();
    case 1084:
      if (lookahead == 'o') ADVANCE(976);
      END_STATE();
    case 1085:
      if (lookahead == 'o') ADVANCE(1034);
      END_STATE();
    case 1086:
      if (lookahead == 'o') ADVANCE(1078);
      END_STATE();
    case 1087:
      if (lookahead == 'o') ADVANCE(1141);
      END_STATE();
    case 1088:
      if (lookahead == 'p') ADVANCE(1416);
      END_STATE();
    case 1089:
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 1090:
      if (lookahead == 'p') ADVANCE(885);
      END_STATE();
    case 1091:
      if (lookahead == 'p') ADVANCE(1108);
      END_STATE();
    case 1092:
      if (lookahead == 'p') ADVANCE(828);
      END_STATE();
    case 1093:
      if (lookahead == 'p') ADVANCE(912);
      END_STATE();
    case 1094:
      if (lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 1095:
      if (lookahead == 'p') ADVANCE(745);
      END_STATE();
    case 1096:
      if (lookahead == 'p') ADVANCE(919);
      END_STATE();
    case 1097:
      if (lookahead == 'p') ADVANCE(1160);
      END_STATE();
    case 1098:
      if (lookahead == 'p') ADVANCE(845);
      END_STATE();
    case 1099:
      if (lookahead == 'p') ADVANCE(808);
      END_STATE();
    case 1100:
      if (lookahead == 'p') ADVANCE(811);
      END_STATE();
    case 1101:
      if (lookahead == 'p') ADVANCE(812);
      END_STATE();
    case 1102:
      if (lookahead == 'p') ADVANCE(847);
      END_STATE();
    case 1103:
      if (lookahead == 'p') ADVANCE(815);
      END_STATE();
    case 1104:
      if (lookahead == 'p') ADVANCE(816);
      END_STATE();
    case 1105:
      if (lookahead == 'p') ADVANCE(856);
      END_STATE();
    case 1106:
      if (lookahead == 'p') ADVANCE(817);
      END_STATE();
    case 1107:
      if (lookahead == 'p') ADVANCE(819);
      END_STATE();
    case 1108:
      if (lookahead == 'p') ADVANCE(1059);
      END_STATE();
    case 1109:
      if (lookahead == 'p') ADVANCE(735);
      END_STATE();
    case 1110:
      if (lookahead == 'p') ADVANCE(1209);
      END_STATE();
    case 1111:
      if (lookahead == 'p') ADVANCE(892);
      END_STATE();
    case 1112:
      if (lookahead == 'p') ADVANCE(894);
      END_STATE();
    case 1113:
      if (lookahead == 'p') ADVANCE(1148);
      END_STATE();
    case 1114:
      if (lookahead == 'p') ADVANCE(840);
      END_STATE();
    case 1115:
      if (lookahead == 'p') ADVANCE(1149);
      END_STATE();
    case 1116:
      if (lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 1117:
      if (lookahead == 'r') ADVANCE(1391);
      END_STATE();
    case 1118:
      if (lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 1119:
      if (lookahead == 'r') ADVANCE(1412);
      END_STATE();
    case 1120:
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 1121:
      if (lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 1122:
      if (lookahead == 'r') ADVANCE(1177);
      END_STATE();
    case 1123:
      if (lookahead == 'r') ADVANCE(986);
      END_STATE();
    case 1124:
      if (lookahead == 'r') ADVANCE(1255);
      END_STATE();
    case 1125:
      if (lookahead == 'r') ADVANCE(888);
      END_STATE();
    case 1126:
      if (lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 1127:
      if (lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 1128:
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 1129:
      if (lookahead == 'r') ADVANCE(1051);
      END_STATE();
    case 1130:
      if (lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 1131:
      if (lookahead == 'r') ADVANCE(1161);
      END_STATE();
    case 1132:
      if (lookahead == 'r') ADVANCE(834);
      END_STATE();
    case 1133:
      if (lookahead == 'r') ADVANCE(804);
      END_STATE();
    case 1134:
      if (lookahead == 'r') ADVANCE(805);
      END_STATE();
    case 1135:
      if (lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 1136:
      if (lookahead == 'r') ADVANCE(820);
      END_STATE();
    case 1137:
      if (lookahead == 'r') ADVANCE(1167);
      END_STATE();
    case 1138:
      if (lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 1139:
      if (lookahead == 'r') ADVANCE(1207);
      END_STATE();
    case 1140:
      if (lookahead == 'r') ADVANCE(787);
      END_STATE();
    case 1141:
      if (lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 1142:
      if (lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 1143:
      if (lookahead == 'r') ADVANCE(739);
      END_STATE();
    case 1144:
      if (lookahead == 'r') ADVANCE(1178);
      END_STATE();
    case 1145:
      if (lookahead == 'r') ADVANCE(742);
      END_STATE();
    case 1146:
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 1147:
      if (lookahead == 'r') ADVANCE(944);
      END_STATE();
    case 1148:
      if (lookahead == 'r') ADVANCE(946);
      END_STATE();
    case 1149:
      if (lookahead == 'r') ADVANCE(947);
      END_STATE();
    case 1150:
      if (lookahead == 's') ADVANCE(956);
      END_STATE();
    case 1151:
      if (lookahead == 's') ADVANCE(1438);
      END_STATE();
    case 1152:
      if (lookahead == 's') ADVANCE(1325);
      END_STATE();
    case 1153:
      if (lookahead == 's') ADVANCE(1353);
      END_STATE();
    case 1154:
      if (lookahead == 's') ADVANCE(1297);
      END_STATE();
    case 1155:
      if (lookahead == 's') ADVANCE(1296);
      END_STATE();
    case 1156:
      if (lookahead == 's') ADVANCE(1293);
      END_STATE();
    case 1157:
      if (lookahead == 's') ADVANCE(1348);
      END_STATE();
    case 1158:
      if (lookahead == 's') ADVANCE(1355);
      END_STATE();
    case 1159:
      if (lookahead == 's') ADVANCE(1378);
      END_STATE();
    case 1160:
      if (lookahead == 's') ADVANCE(1413);
      END_STATE();
    case 1161:
      if (lookahead == 's') ADVANCE(1304);
      END_STATE();
    case 1162:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 1163:
      if (lookahead == 's') ADVANCE(913);
      END_STATE();
    case 1164:
      if (lookahead == 's') ADVANCE(905);
      END_STATE();
    case 1165:
      if (lookahead == 's') ADVANCE(958);
      END_STATE();
    case 1166:
      if (lookahead == 's') ADVANCE(1048);
      END_STATE();
    case 1167:
      if (lookahead == 's') ADVANCE(924);
      END_STATE();
    case 1168:
      if (lookahead == 's') ADVANCE(1095);
      END_STATE();
    case 1169:
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 1170:
      if (lookahead == 's') ADVANCE(1212);
      END_STATE();
    case 1171:
      if (lookahead == 's') ADVANCE(800);
      END_STATE();
    case 1172:
      if (lookahead == 's') ADVANCE(870);
      END_STATE();
    case 1173:
      if (lookahead == 's') ADVANCE(1214);
      END_STATE();
    case 1174:
      if (lookahead == 's') ADVANCE(850);
      END_STATE();
    case 1175:
      if (lookahead == 's') ADVANCE(854);
      END_STATE();
    case 1176:
      if (lookahead == 's') ADVANCE(1202);
      END_STATE();
    case 1177:
      if (lookahead == 's') ADVANCE(1056);
      END_STATE();
    case 1178:
      if (lookahead == 's') ADVANCE(933);
      END_STATE();
    case 1179:
      if (lookahead == 's') ADVANCE(938);
      END_STATE();
    case 1180:
      if (lookahead == 's') ADVANCE(1179);
      END_STATE();
    case 1181:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 1182:
      if (lookahead == 't') ADVANCE(1392);
      END_STATE();
    case 1183:
      if (lookahead == 't') ADVANCE(1389);
      END_STATE();
    case 1184:
      if (lookahead == 't') ADVANCE(832);
      END_STATE();
    case 1185:
      if (lookahead == 't') ADVANCE(1394);
      END_STATE();
    case 1186:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 1187:
      if (lookahead == 't') ADVANCE(1306);
      END_STATE();
    case 1188:
      if (lookahead == 't') ADVANCE(1350);
      END_STATE();
    case 1189:
      if (lookahead == 't') ADVANCE(1303);
      END_STATE();
    case 1190:
      if (lookahead == 't') ADVANCE(1381);
      END_STATE();
    case 1191:
      if (lookahead == 't') ADVANCE(1368);
      END_STATE();
    case 1192:
      if (lookahead == 't') ADVANCE(756);
      END_STATE();
    case 1193:
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 1194:
      if (lookahead == 't') ADVANCE(1305);
      END_STATE();
    case 1195:
      if (lookahead == 't') ADVANCE(1388);
      END_STATE();
    case 1196:
      if (lookahead == 't') ADVANCE(1390);
      END_STATE();
    case 1197:
      if (lookahead == 't') ADVANCE(1233);
      END_STATE();
    case 1198:
      if (lookahead == 't') ADVANCE(901);
      if (lookahead == 'u') ADVANCE(1172);
      END_STATE();
    case 1199:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 1200:
      if (lookahead == 't') ADVANCE(1130);
      END_STATE();
    case 1201:
      if (lookahead == 't') ADVANCE(902);
      END_STATE();
    case 1202:
      if (lookahead == 't') ADVANCE(1126);
      END_STATE();
    case 1203:
      if (lookahead == 't') ADVANCE(831);
      END_STATE();
    case 1204:
      if (lookahead == 't') ADVANCE(871);
      END_STATE();
    case 1205:
      if (lookahead == 't') ADVANCE(1154);
      END_STATE();
    case 1206:
      if (lookahead == 't') ADVANCE(1162);
      END_STATE();
    case 1207:
      if (lookahead == 't') ADVANCE(835);
      END_STATE();
    case 1208:
      if (lookahead == 't') ADVANCE(844);
      END_STATE();
    case 1209:
      if (lookahead == 't') ADVANCE(857);
      END_STATE();
    case 1210:
      if (lookahead == 't') ADVANCE(853);
      END_STATE();
    case 1211:
      if (lookahead == 't') ADVANCE(995);
      END_STATE();
    case 1212:
      if (lookahead == 't') ADVANCE(736);
      END_STATE();
    case 1213:
      if (lookahead == 't') ADVANCE(860);
      END_STATE();
    case 1214:
      if (lookahead == 't') ADVANCE(1068);
      END_STATE();
    case 1215:
      if (lookahead == 't') ADVANCE(749);
      END_STATE();
    case 1216:
      if (lookahead == 't') ADVANCE(1235);
      END_STATE();
    case 1217:
      if (lookahead == 't') ADVANCE(929);
      END_STATE();
    case 1218:
      if (lookahead == 't') ADVANCE(1234);
      END_STATE();
    case 1219:
      if (lookahead == 't') ADVANCE(931);
      END_STATE();
    case 1220:
      if (lookahead == 't') ADVANCE(935);
      END_STATE();
    case 1221:
      if (lookahead == 't') ADVANCE(936);
      END_STATE();
    case 1222:
      if (lookahead == 't') ADVANCE(939);
      END_STATE();
    case 1223:
      if (lookahead == 't') ADVANCE(937);
      END_STATE();
    case 1224:
      if (lookahead == 't') ADVANCE(1007);
      END_STATE();
    case 1225:
      if (lookahead == 't') ADVANCE(1008);
      END_STATE();
    case 1226:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 1227:
      if (lookahead == 't') ADVANCE(875);
      END_STATE();
    case 1228:
      if (lookahead == 't') ADVANCE(876);
      END_STATE();
    case 1229:
      if (lookahead == 't') ADVANCE(877);
      END_STATE();
    case 1230:
      if (lookahead == 't') ADVANCE(878);
      END_STATE();
    case 1231:
      if (lookahead == 'u') ADVANCE(799);
      END_STATE();
    case 1232:
      if (lookahead == 'u') ADVANCE(1027);
      END_STATE();
    case 1233:
      if (lookahead == 'u') ADVANCE(1133);
      END_STATE();
    case 1234:
      if (lookahead == 'u') ADVANCE(1134);
      END_STATE();
    case 1235:
      if (lookahead == 'u') ADVANCE(1136);
      END_STATE();
    case 1236:
      if (lookahead == 'v') ADVANCE(827);
      END_STATE();
    case 1237:
      if (lookahead == 'v') ADVANCE(803);
      END_STATE();
    case 1238:
      if (lookahead == 'v') ADVANCE(868);
      END_STATE();
    case 1239:
      if (lookahead == 'v') ADVANCE(872);
      END_STATE();
    case 1240:
      if (lookahead == 'w') ADVANCE(1415);
      END_STATE();
    case 1241:
      if (lookahead == 'w') ADVANCE(1354);
      END_STATE();
    case 1242:
      if (lookahead == 'w') ADVANCE(723);
      END_STATE();
    case 1243:
      if (lookahead == 'w') ADVANCE(1158);
      END_STATE();
    case 1244:
      if (lookahead == 'x') ADVANCE(351);
      END_STATE();
    case 1245:
      if (lookahead == 'x') ADVANCE(1183);
      END_STATE();
    case 1246:
      if (lookahead == 'x') ADVANCE(1189);
      END_STATE();
    case 1247:
      if (lookahead == 'x') ADVANCE(1192);
      END_STATE();
    case 1248:
      if (lookahead == 'x') ADVANCE(1193);
      END_STATE();
    case 1249:
      if (lookahead == 'x') ADVANCE(1195);
      END_STATE();
    case 1250:
      if (lookahead == 'x') ADVANCE(1196);
      END_STATE();
    case 1251:
      if (lookahead == 'x') ADVANCE(1216);
      END_STATE();
    case 1252:
      if (lookahead == 'x') ADVANCE(1218);
      END_STATE();
    case 1253:
      if (lookahead == 'y') ADVANCE(1367);
      END_STATE();
    case 1254:
      if (lookahead == 'y') ADVANCE(696);
      END_STATE();
    case 1255:
      if (lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 1256:
      if (lookahead == 'y') ADVANCE(700);
      END_STATE();
    case 1257:
      if (lookahead == 'y') ADVANCE(694);
      END_STATE();
    case 1258:
      if (lookahead == 'y') ADVANCE(1176);
      END_STATE();
    case 1259:
      if (lookahead == 'y') ADVANCE(1098);
      END_STATE();
    case 1260:
      if (lookahead == 'y') ADVANCE(1099);
      END_STATE();
    case 1261:
      if (lookahead == 'y') ADVANCE(1100);
      END_STATE();
    case 1262:
      if (lookahead == 'y') ADVANCE(1101);
      END_STATE();
    case 1263:
      if (lookahead == 'y') ADVANCE(1103);
      END_STATE();
    case 1264:
      if (lookahead == 'y') ADVANCE(1104);
      END_STATE();
    case 1265:
      if (lookahead == 'y') ADVANCE(1105);
      END_STATE();
    case 1266:
      if (lookahead == 'y') ADVANCE(1106);
      END_STATE();
    case 1267:
      if (lookahead == 'y') ADVANCE(710);
      END_STATE();
    case 1268:
      if (lookahead == 'z') ADVANCE(798);
      END_STATE();
    case 1269:
      if (lookahead == 'z') ADVANCE(806);
      END_STATE();
    case 1270:
      if (lookahead == 'z') ADVANCE(1267);
      END_STATE();
    case 1271:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(928);
      END_STATE();
    case 1272:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1422);
      END_STATE();
    case 1273:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1423);
      END_STATE();
    case 1274:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      END_STATE();
    case 1275:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1425);
      END_STATE();
    case 1276:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1426);
      END_STATE();
    case 1277:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 1278:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1435);
      END_STATE();
    case 1279:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      END_STATE();
    case 1280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1434);
      END_STATE();
    case 1281:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 1282:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1280);
      END_STATE();
    case 1283:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1281);
      END_STATE();
    case 1284:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1282);
      END_STATE();
    case 1285:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1283);
      END_STATE();
    case 1286:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1284);
      END_STATE();
    case 1287:
      if (eof) ADVANCE(1292);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 1288:
      if (eof) ADVANCE(1292);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(1287)
      END_STATE();
    case 1289:
      if (eof) ADVANCE(1292);
      if (lookahead == '\n') SKIP(1291)
      END_STATE();
    case 1290:
      if (eof) ADVANCE(1292);
      if (lookahead == '\n') SKIP(1291)
      if (lookahead == '\r') SKIP(1289)
      END_STATE();
    case 1291:
      if (eof) ADVANCE(1292);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(1441);
      if (lookahead == '=') ADVANCE(1417);
      if (lookahead == '\\') SKIP(1290)
      if (lookahead == 'a') ADVANCE(961);
      if (lookahead == 'b') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(985);
      if (lookahead == 'd') ADVANCE(793);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == 'l') ADVANCE(795);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(755);
      if (lookahead == 'p') ADVANCE(715);
      if (lookahead == 'r') ADVANCE(796);
      if (lookahead == 's') ADVANCE(908);
      if (lookahead == 't') ADVANCE(721);
      if (lookahead == 'v') ADVANCE(823);
      if (lookahead == 'x') ADVANCE(1309);
      if (lookahead == 'y') ADVANCE(1310);
      if (lookahead == '}') ADVANCE(1295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1291)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_objectTypes);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_bitmapfonts);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(1293);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_textSpriteType);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_corneredTileSpriteType);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_maskedShieldType);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_animatedmaptext);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_textcolors);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      if (lookahead == 's') ADVANCE(1297);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_frameAnimatedSpriteType);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(1151);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym__statement_gfx_name_token1);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1351);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token2);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1142);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == '_') ADVANCE(1142);
      if (lookahead == 'b') ADVANCE(980);
      if (lookahead == 'd') ADVANCE(861);
      if (lookahead == 'f') ADVANCE(1146);
      if (lookahead == 'l') ADVANCE(1086);
      if (lookahead == 'm') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(1066);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(891);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_borderSize);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_allwaystransparent);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_legacy_lazy_load);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_clicksound);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == 's') ADVANCE(1048);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_speed);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_textblock);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'S') ADVANCE(1094);
      if (lookahead == 'b') ADVANCE(971);
      if (lookahead == 'u') ADVANCE(1134);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'u') ADVANCE(1134);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_cull_distance);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym__statement_gfx_cull_distance_token1);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'i') ADVANCE(1211);
      if (lookahead == 'o') ADVANCE(1116);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(899);
      if (lookahead == 'o') ADVANCE(1047);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_border_color);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_animation_rate_fps);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_looping);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_play_on_show);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_pause_on_loop);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1273);
      if (lookahead == '5') ADVANCE(1421);
      if (lookahead == 'f') ADVANCE(1419);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1422);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1422);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1273);
      if (lookahead == 'f') ADVANCE(1419);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1422);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1422);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1273);
      if (lookahead == 'f') ADVANCE(1419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1422);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(1419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1423);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1424);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1425);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1426);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1427);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead == '5') ADVANCE(1430);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1431);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1428);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1428);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1431);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_hexadecimal);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1285);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'O') ADVANCE(879);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1441);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1291},
  [2] = {.lex_state = 1291},
  [3] = {.lex_state = 1291},
  [4] = {.lex_state = 1291},
  [5] = {.lex_state = 1291},
  [6] = {.lex_state = 1291},
  [7] = {.lex_state = 426},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 426},
  [11] = {.lex_state = 426},
  [12] = {.lex_state = 426},
  [13] = {.lex_state = 426},
  [14] = {.lex_state = 426},
  [15] = {.lex_state = 426},
  [16] = {.lex_state = 1291},
  [17] = {.lex_state = 1291},
  [18] = {.lex_state = 427},
  [19] = {.lex_state = 427},
  [20] = {.lex_state = 427},
  [21] = {.lex_state = 1291},
  [22] = {.lex_state = 1291},
  [23] = {.lex_state = 1291},
  [24] = {.lex_state = 1291},
  [25] = {.lex_state = 426},
  [26] = {.lex_state = 1291},
  [27] = {.lex_state = 428},
  [28] = {.lex_state = 428},
  [29] = {.lex_state = 1291},
  [30] = {.lex_state = 1291},
  [31] = {.lex_state = 426},
  [32] = {.lex_state = 428},
  [33] = {.lex_state = 426},
  [34] = {.lex_state = 1291},
  [35] = {.lex_state = 427},
  [36] = {.lex_state = 427},
  [37] = {.lex_state = 431},
  [38] = {.lex_state = 427},
  [39] = {.lex_state = 427},
  [40] = {.lex_state = 1291},
  [41] = {.lex_state = 431},
  [42] = {.lex_state = 1291},
  [43] = {.lex_state = 1291},
  [44] = {.lex_state = 1291},
  [45] = {.lex_state = 427},
  [46] = {.lex_state = 426},
  [47] = {.lex_state = 426},
  [48] = {.lex_state = 426},
  [49] = {.lex_state = 426},
  [50] = {.lex_state = 426},
  [51] = {.lex_state = 426},
  [52] = {.lex_state = 426},
  [53] = {.lex_state = 426},
  [54] = {.lex_state = 426},
  [55] = {.lex_state = 426},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 426},
  [58] = {.lex_state = 426},
  [59] = {.lex_state = 426},
  [60] = {.lex_state = 426},
  [61] = {.lex_state = 1291},
  [62] = {.lex_state = 1291},
  [63] = {.lex_state = 1291},
  [64] = {.lex_state = 426},
  [65] = {.lex_state = 426},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 426},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 426},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 426},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 426},
  [92] = {.lex_state = 426},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 426},
  [95] = {.lex_state = 426},
  [96] = {.lex_state = 426},
  [97] = {.lex_state = 1291},
  [98] = {.lex_state = 1291},
  [99] = {.lex_state = 1291},
  [100] = {.lex_state = 426},
  [101] = {.lex_state = 426},
  [102] = {.lex_state = 427},
  [103] = {.lex_state = 427},
  [104] = {.lex_state = 427},
  [105] = {.lex_state = 1291},
  [106] = {.lex_state = 428},
  [107] = {.lex_state = 428},
  [108] = {.lex_state = 428},
  [109] = {.lex_state = 427},
  [110] = {.lex_state = 428},
  [111] = {.lex_state = 428},
  [112] = {.lex_state = 427},
  [113] = {.lex_state = 427},
  [114] = {.lex_state = 427},
  [115] = {.lex_state = 1291},
  [116] = {.lex_state = 427},
  [117] = {.lex_state = 428},
  [118] = {.lex_state = 1291},
  [119] = {.lex_state = 1291},
  [120] = {.lex_state = 428},
  [121] = {.lex_state = 426},
  [122] = {.lex_state = 1291},
  [123] = {.lex_state = 1291},
  [124] = {.lex_state = 428},
  [125] = {.lex_state = 428},
  [126] = {.lex_state = 1291},
  [127] = {.lex_state = 428},
  [128] = {.lex_state = 428},
  [129] = {.lex_state = 428},
  [130] = {.lex_state = 1291},
  [131] = {.lex_state = 426},
  [132] = {.lex_state = 1291},
  [133] = {.lex_state = 1291},
  [134] = {.lex_state = 1291},
  [135] = {.lex_state = 1291},
  [136] = {.lex_state = 426},
  [137] = {.lex_state = 1291},
  [138] = {.lex_state = 426},
  [139] = {.lex_state = 426},
  [140] = {.lex_state = 426},
  [141] = {.lex_state = 426},
  [142] = {.lex_state = 426},
  [143] = {.lex_state = 426},
  [144] = {.lex_state = 426},
  [145] = {.lex_state = 426},
  [146] = {.lex_state = 426},
  [147] = {.lex_state = 1291},
  [148] = {.lex_state = 1291},
  [149] = {.lex_state = 1291},
  [150] = {.lex_state = 426},
  [151] = {.lex_state = 1291},
  [152] = {.lex_state = 426},
  [153] = {.lex_state = 426},
  [154] = {.lex_state = 426},
  [155] = {.lex_state = 426},
  [156] = {.lex_state = 426},
  [157] = {.lex_state = 426},
  [158] = {.lex_state = 426},
  [159] = {.lex_state = 426},
  [160] = {.lex_state = 1291},
  [161] = {.lex_state = 1291},
  [162] = {.lex_state = 1291},
  [163] = {.lex_state = 1291},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 1291},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1291},
  [168] = {.lex_state = 1291},
  [169] = {.lex_state = 1291},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1291},
  [172] = {.lex_state = 1291},
  [173] = {.lex_state = 1291},
  [174] = {.lex_state = 1291},
  [175] = {.lex_state = 1291},
  [176] = {.lex_state = 1291},
  [177] = {.lex_state = 1291},
  [178] = {.lex_state = 1291},
  [179] = {.lex_state = 1291},
  [180] = {.lex_state = 1291},
  [181] = {.lex_state = 1291},
  [182] = {.lex_state = 1291},
  [183] = {.lex_state = 1291},
  [184] = {.lex_state = 1291},
  [185] = {.lex_state = 1291},
  [186] = {.lex_state = 1291},
  [187] = {.lex_state = 426},
  [188] = {.lex_state = 1291},
  [189] = {.lex_state = 426},
  [190] = {.lex_state = 426},
  [191] = {.lex_state = 428},
  [192] = {.lex_state = 428},
  [193] = {.lex_state = 428},
  [194] = {.lex_state = 1291},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 426},
  [197] = {.lex_state = 426},
  [198] = {.lex_state = 428},
  [199] = {.lex_state = 426},
  [200] = {.lex_state = 426},
  [201] = {.lex_state = 1291},
  [202] = {.lex_state = 1291},
  [203] = {.lex_state = 1291},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 428},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1291},
  [210] = {.lex_state = 426},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 426},
  [215] = {.lex_state = 426},
  [216] = {.lex_state = 426},
  [217] = {.lex_state = 426},
  [218] = {.lex_state = 1291},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 426},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 1291},
  [224] = {.lex_state = 1291},
  [225] = {.lex_state = 1291},
  [226] = {.lex_state = 1291},
  [227] = {.lex_state = 426},
  [228] = {.lex_state = 1291},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 427},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 428},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 1291},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 426},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 426},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 426},
  [248] = {.lex_state = 1291},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 427},
  [252] = {.lex_state = 427},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 426},
  [255] = {.lex_state = 428},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 426},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 431},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 430},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 428},
  [271] = {.lex_state = 430},
  [272] = {.lex_state = 427},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 1291},
  [277] = {.lex_state = 1291},
  [278] = {.lex_state = 427},
  [279] = {.lex_state = 1291},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 1291},
  [282] = {.lex_state = 426},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 1291},
  [286] = {.lex_state = 426},
  [287] = {.lex_state = 426},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 427},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 430},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 428},
  [300] = {.lex_state = 428},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
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
    [sym_file] = STATE(297),
    [sym_dot_mod] = STATE(295),
    [sym_dot_gfx] = STATE(295),
    [sym__spriteTypes] = STATE(122),
    [sym__objectTypes] = STATE(122),
    [sym__bitmapfonts] = STATE(122),
    [sym__statement_name] = STATE(9),
    [sym__statement_mod_path] = STATE(9),
    [sym__statement_mod_archive] = STATE(9),
    [sym__statement_mod_remote_file_id] = STATE(9),
    [sym__statement_mod_version] = STATE(9),
    [sym__statement_mod_picture] = STATE(9),
    [sym__statement_mod_supported_version] = STATE(9),
    [sym__statement_mod_replace_path] = STATE(9),
    [sym__statement_mod_tags] = STATE(9),
    [sym__statement_mod_dependencies] = STATE(9),
    [aux_sym_dot_mod_repeat1] = STATE(9),
    [aux_sym_dot_gfx_repeat1] = STATE(122),
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
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(33), 22,
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
  [35] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(38), 22,
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
  [70] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(42), 22,
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
  [105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_animation,
    ACTIONS(48), 1,
      sym_assign_equal,
    ACTIONS(44), 23,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
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
      anon_sym_speed,
      anon_sym_textblock,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_animation,
    ACTIONS(50), 23,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
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
      anon_sym_speed,
      anon_sym_textblock,
      anon_sym_color,
      anon_sym_border_color,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [172] = 3,
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
  [204] = 13,
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
  [254] = 13,
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
    ACTIONS(90), 1,
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
  [304] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      anon_sym_animationrotation,
    ACTIONS(98), 1,
      anon_sym_animationlooping,
    ACTIONS(104), 1,
      anon_sym_animationblendmode,
    ACTIONS(106), 1,
      anon_sym_animationtype,
    ACTIONS(108), 1,
      anon_sym_animationframes,
    ACTIONS(94), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(100), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(102), 2,
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
  [349] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_animationrotation,
    ACTIONS(118), 1,
      anon_sym_animationlooping,
    ACTIONS(127), 1,
      anon_sym_animationblendmode,
    ACTIONS(130), 1,
      anon_sym_animationtype,
    ACTIONS(133), 1,
      anon_sym_animationframes,
    ACTIONS(112), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(121), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(124), 2,
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
  [394] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_animationrotation,
    ACTIONS(98), 1,
      anon_sym_animationlooping,
    ACTIONS(104), 1,
      anon_sym_animationblendmode,
    ACTIONS(106), 1,
      anon_sym_animationtype,
    ACTIONS(108), 1,
      anon_sym_animationframes,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(100), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(102), 2,
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
  [439] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(142), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(144), 1,
      anon_sym_noOfFrames,
    ACTIONS(146), 1,
      anon_sym_effectFile,
    ACTIONS(148), 1,
      anon_sym_allwaystransparent,
    ACTIONS(150), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(152), 1,
      anon_sym_looping,
    ACTIONS(154), 1,
      anon_sym_play_on_show,
    ACTIONS(156), 1,
      anon_sym_pause_on_loop,
    STATE(15), 10,
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
  [485] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(163), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(166), 1,
      anon_sym_noOfFrames,
    ACTIONS(169), 1,
      anon_sym_effectFile,
    ACTIONS(172), 1,
      anon_sym_allwaystransparent,
    ACTIONS(175), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(178), 1,
      anon_sym_looping,
    ACTIONS(181), 1,
      anon_sym_play_on_show,
    ACTIONS(184), 1,
      anon_sym_pause_on_loop,
    STATE(14), 10,
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
  [531] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(142), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(144), 1,
      anon_sym_noOfFrames,
    ACTIONS(146), 1,
      anon_sym_effectFile,
    ACTIONS(148), 1,
      anon_sym_allwaystransparent,
    ACTIONS(150), 1,
      anon_sym_animation_rate_fps,
    ACTIONS(152), 1,
      anon_sym_looping,
    ACTIONS(154), 1,
      anon_sym_play_on_show,
    ACTIONS(156), 1,
      anon_sym_pause_on_loop,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(14), 10,
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
  [577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_animation,
    ACTIONS(193), 1,
      sym_assign_equal,
    ACTIONS(189), 16,
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
  [605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_animation,
    ACTIONS(199), 1,
      sym_assign_equal,
    ACTIONS(195), 16,
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
  [633] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(142), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(144), 1,
      anon_sym_noOfFrames,
    ACTIONS(146), 1,
      anon_sym_effectFile,
    ACTIONS(148), 1,
      anon_sym_allwaystransparent,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(205), 1,
      anon_sym_overlay_rows,
    ACTIONS(207), 1,
      anon_sym_animation,
    STATE(19), 9,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_allwaystransparent,
      aux_sym__spriteType_block_repeat1,
  [675] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(142), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(144), 1,
      anon_sym_noOfFrames,
    ACTIONS(146), 1,
      anon_sym_effectFile,
    ACTIONS(148), 1,
      anon_sym_allwaystransparent,
    ACTIONS(203), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(205), 1,
      anon_sym_overlay_rows,
    ACTIONS(207), 1,
      anon_sym_animation,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(20), 9,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_allwaystransparent,
      aux_sym__spriteType_block_repeat1,
  [717] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      anon_sym_name,
    ACTIONS(216), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(219), 1,
      anon_sym_noOfFrames,
    ACTIONS(222), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(225), 1,
      anon_sym_overlay_rows,
    ACTIONS(228), 1,
      anon_sym_effectFile,
    ACTIONS(231), 1,
      anon_sym_animation,
    ACTIONS(234), 1,
      anon_sym_allwaystransparent,
    STATE(20), 9,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      sym__statement_gfx_allwaystransparent,
      aux_sym__spriteType_block_repeat1,
  [759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_animation,
    ACTIONS(241), 1,
      sym_assign_equal,
    ACTIONS(237), 15,
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
  [786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_animation,
    ACTIONS(243), 16,
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
  [811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_animation,
    ACTIONS(247), 16,
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
  [836] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(142), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(144), 1,
      anon_sym_noOfFrames,
    ACTIONS(148), 1,
      anon_sym_allwaystransparent,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      anon_sym_size,
    ACTIONS(255), 1,
      anon_sym_borderSize,
    ACTIONS(257), 1,
      anon_sym_legacy_lazy_load,
    STATE(126), 1,
      sym__statement_gfx_size,
    STATE(26), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [876] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 1,
      anon_sym_spriteType,
    ACTIONS(263), 1,
      anon_sym_textSpriteType,
    ACTIONS(265), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(267), 1,
      anon_sym_maskedShieldType,
    ACTIONS(269), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(271), 1,
      anon_sym_cursor_offset,
    STATE(33), 9,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__frameAnimatedSpriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [912] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 1,
      anon_sym_name,
    ACTIONS(278), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(281), 1,
      anon_sym_noOfFrames,
    ACTIONS(284), 1,
      anon_sym_size,
    ACTIONS(287), 1,
      anon_sym_borderSize,
    ACTIONS(290), 1,
      anon_sym_allwaystransparent,
    ACTIONS(293), 1,
      anon_sym_legacy_lazy_load,
    STATE(126), 1,
      sym__statement_gfx_size,
    STATE(26), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [952] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    ACTIONS(298), 1,
      anon_sym_size,
    ACTIONS(301), 1,
      anon_sym_text,
    ACTIONS(304), 1,
      anon_sym_color,
    ACTIONS(307), 1,
      anon_sym_font,
    ACTIONS(310), 1,
      anon_sym_position,
    ACTIONS(313), 1,
      anon_sym_format,
    ACTIONS(316), 1,
      anon_sym_cull_distance,
    STATE(27), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [990] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_size,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      anon_sym_text,
    ACTIONS(323), 1,
      anon_sym_color,
    ACTIONS(325), 1,
      anon_sym_font,
    ACTIONS(327), 1,
      anon_sym_position,
    ACTIONS(329), 1,
      anon_sym_format,
    ACTIONS(331), 1,
      anon_sym_cull_distance,
    STATE(32), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [1028] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(142), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(144), 1,
      anon_sym_noOfFrames,
    ACTIONS(148), 1,
      anon_sym_allwaystransparent,
    ACTIONS(253), 1,
      anon_sym_size,
    ACTIONS(255), 1,
      anon_sym_borderSize,
    ACTIONS(257), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym__statement_gfx_size,
    STATE(24), 7,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [1068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_animation,
    ACTIONS(335), 15,
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
  [1092] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      anon_sym_spriteType,
    ACTIONS(344), 1,
      anon_sym_textSpriteType,
    ACTIONS(347), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(350), 1,
      anon_sym_maskedShieldType,
    ACTIONS(353), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(356), 1,
      anon_sym_cursor_offset,
    STATE(31), 9,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__frameAnimatedSpriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [1128] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_size,
    ACTIONS(321), 1,
      anon_sym_text,
    ACTIONS(323), 1,
      anon_sym_color,
    ACTIONS(325), 1,
      anon_sym_font,
    ACTIONS(327), 1,
      anon_sym_position,
    ACTIONS(329), 1,
      anon_sym_format,
    ACTIONS(331), 1,
      anon_sym_cull_distance,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(27), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [1166] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_spriteType,
    ACTIONS(263), 1,
      anon_sym_textSpriteType,
    ACTIONS(265), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(267), 1,
      anon_sym_maskedShieldType,
    ACTIONS(269), 1,
      anon_sym_frameAnimatedSpriteType,
    ACTIONS(271), 1,
      anon_sym_cursor_offset,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(31), 9,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__frameAnimatedSpriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [1202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_animation,
    ACTIONS(367), 1,
      sym_assign_equal,
    ACTIONS(363), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [1227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(371), 12,
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
  [1252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(376), 12,
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
  [1277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_text,
    ACTIONS(382), 1,
      sym_assign_equal,
    ACTIONS(378), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [1302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(376), 12,
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
  [1327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_assign_equal,
    ACTIONS(386), 13,
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
  [1349] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(392), 1,
      anon_sym_textcolors,
    ACTIONS(395), 1,
      anon_sym_name,
    ACTIONS(398), 1,
      anon_sym_path,
    ACTIONS(401), 1,
      anon_sym_cursor_offset,
    ACTIONS(404), 1,
      anon_sym_color,
    ACTIONS(407), 1,
      anon_sym_border_color,
    STATE(148), 1,
      sym__textcolors,
    STATE(40), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [1385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_text,
    ACTIONS(410), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [1407] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(271), 1,
      anon_sym_cursor_offset,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    ACTIONS(416), 1,
      anon_sym_textcolors,
    ACTIONS(418), 1,
      anon_sym_path,
    ACTIONS(420), 1,
      anon_sym_color,
    ACTIONS(422), 1,
      anon_sym_border_color,
    STATE(148), 1,
      sym__textcolors,
    STATE(44), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [1443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_animation,
    ACTIONS(424), 13,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_allwaystransparent,
      anon_sym_clicksound,
      anon_sym_animation_rate_fps,
      anon_sym_looping,
      anon_sym_play_on_show,
      anon_sym_pause_on_loop,
  [1465] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(271), 1,
      anon_sym_cursor_offset,
    ACTIONS(416), 1,
      anon_sym_textcolors,
    ACTIONS(418), 1,
      anon_sym_path,
    ACTIONS(420), 1,
      anon_sym_color,
    ACTIONS(422), 1,
      anon_sym_border_color,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym__textcolors,
    STATE(40), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_path,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [1501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 13,
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
  [1520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_animationrotation,
    ACTIONS(436), 1,
      sym_assign_equal,
    ACTIONS(432), 11,
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
  [1543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_animationrotation,
    ACTIONS(442), 1,
      sym_assign_equal,
    ACTIONS(438), 11,
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
  [1566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_animationrotation,
    ACTIONS(448), 1,
      sym_assign_equal,
    ACTIONS(444), 11,
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
  [1589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_animationrotation,
    ACTIONS(454), 1,
      sym_assign_equal,
    ACTIONS(450), 11,
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
  [1612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_animationrotation,
    ACTIONS(460), 1,
      sym_assign_equal,
    ACTIONS(456), 11,
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
  [1635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_animationrotation,
    ACTIONS(466), 1,
      sym_assign_equal,
    ACTIONS(462), 11,
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
  [1658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_animationrotation,
    ACTIONS(472), 1,
      sym_assign_equal,
    ACTIONS(468), 11,
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
  [1681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_animationrotation,
    ACTIONS(478), 1,
      sym_assign_equal,
    ACTIONS(474), 11,
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
  [1704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_assign_equal,
    ACTIONS(480), 12,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_textcolors,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [1725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_animationrotation,
    ACTIONS(484), 11,
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
  [1745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_assign_equal,
    ACTIONS(488), 11,
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
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_animationrotation,
    ACTIONS(492), 11,
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
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_animationrotation,
    ACTIONS(496), 11,
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
  [1805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_animationrotation,
    ACTIONS(500), 11,
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
  [1825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 12,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_textcolors,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [1843] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(142), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(144), 1,
      anon_sym_noOfFrames,
    ACTIONS(146), 1,
      anon_sym_effectFile,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(508), 1,
      anon_sym_clicksound,
    STATE(63), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [1873] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(142), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(144), 1,
      anon_sym_noOfFrames,
    ACTIONS(146), 1,
      anon_sym_effectFile,
    ACTIONS(508), 1,
      anon_sym_clicksound,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    STATE(61), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [1903] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(514), 1,
      anon_sym_name,
    ACTIONS(517), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(520), 1,
      anon_sym_noOfFrames,
    ACTIONS(523), 1,
      anon_sym_effectFile,
    ACTIONS(526), 1,
      anon_sym_clicksound,
    STATE(63), 6,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [1933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_animationrotation,
    ACTIONS(529), 11,
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
  [1953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_animationrotation,
    ACTIONS(533), 11,
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
  [1973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym_assign_equal,
    ACTIONS(537), 11,
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
  [1993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_assign_equal,
    ACTIONS(541), 11,
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
  [2013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_animationrotation,
    ACTIONS(545), 11,
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
    ACTIONS(551), 1,
      sym_assign_equal,
    ACTIONS(549), 11,
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
    ACTIONS(555), 1,
      sym_assign_equal,
    ACTIONS(553), 11,
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
    ACTIONS(559), 1,
      sym_assign_equal,
    ACTIONS(557), 11,
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
  [2093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_assign_equal,
    ACTIONS(561), 11,
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
  [2113] = 3,
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
  [2133] = 3,
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
  [2153] = 3,
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
  [2173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_animationrotation,
    ACTIONS(577), 11,
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
  [2193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 11,
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
  [2210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 11,
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
  [2227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 11,
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
  [2244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 11,
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
  [2261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 11,
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
  [2278] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [2295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 11,
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
  [2312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 11,
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
  [2329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 11,
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
  [2346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 11,
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
  [2363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_assign_equal,
    ACTIONS(601), 10,
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
  [2382] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [2399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 11,
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
  [2416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 11,
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
  [2433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_assign_equal,
    ACTIONS(611), 10,
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
  [2452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym_assign_equal,
    ACTIONS(615), 10,
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
  [2471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 11,
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
  [2488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_assign_equal,
    ACTIONS(621), 10,
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
  [2507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 10,
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
  [2523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 10,
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
  [2539] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(142), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(144), 1,
      anon_sym_noOfFrames,
    ACTIONS(146), 1,
      anon_sym_effectFile,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    STATE(99), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [2565] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(142), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(144), 1,
      anon_sym_noOfFrames,
    ACTIONS(146), 1,
      anon_sym_effectFile,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    STATE(97), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [2591] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    ACTIONS(635), 1,
      anon_sym_name,
    ACTIONS(638), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(641), 1,
      anon_sym_noOfFrames,
    ACTIONS(644), 1,
      anon_sym_effectFile,
    STATE(99), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 10,
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
  [2633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 10,
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
  [2649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_assign_equal,
    ACTIONS(651), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [2667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym_assign_equal,
    ACTIONS(655), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [2685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_assign_equal,
    ACTIONS(659), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [2703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_assign_equal,
    ACTIONS(663), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym_assign_equal,
    ACTIONS(667), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym_assign_equal,
    ACTIONS(671), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym_assign_equal,
    ACTIONS(675), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [2786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_assign_equal,
    ACTIONS(681), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      sym_assign_equal,
    ACTIONS(685), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [2865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_assign_equal,
    ACTIONS(695), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_allwaystransparent,
  [2897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_assign_equal,
    ACTIONS(701), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2914] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    ACTIONS(707), 1,
      anon_sym_speed,
    ACTIONS(709), 1,
      anon_sym_textblock,
    STATE(135), 4,
      sym__statement_gfx_name,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [2936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym_assign_equal,
    ACTIONS(711), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [2952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [2980] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(7), 1,
      anon_sym_objectTypes,
    ACTIONS(9), 1,
      anon_sym_bitmapfonts,
    ACTIONS(719), 1,
      ts_builtin_sym_end,
    STATE(130), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [3002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [3100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
    ACTIONS(737), 1,
      anon_sym_spriteTypes,
    ACTIONS(740), 1,
      anon_sym_objectTypes,
    ACTIONS(743), 1,
      anon_sym_bitmapfonts,
    STATE(130), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [3122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3136] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(750), 1,
      anon_sym_name,
    ACTIONS(753), 1,
      anon_sym_speed,
    ACTIONS(756), 1,
      anon_sym_textblock,
    STATE(132), 4,
      sym__statement_gfx_name,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [3158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [3172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym_assign_equal,
    ACTIONS(761), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_name,
    ACTIONS(707), 1,
      anon_sym_speed,
    ACTIONS(709), 1,
      anon_sym_textblock,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    STATE(132), 4,
      sym__statement_gfx_name,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [3210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      sym_assign_equal,
    ACTIONS(769), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(779), 1,
      anon_sym_textcolors,
    ACTIONS(782), 1,
      anon_sym_bitmapfont,
    STATE(196), 1,
      sym__textcolors,
    STATE(140), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [3287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3326] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_textcolors,
    ACTIONS(791), 1,
      anon_sym_RBRACE,
    ACTIONS(793), 1,
      anon_sym_bitmapfont,
    STATE(196), 1,
      sym__textcolors,
    STATE(156), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [3347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [3438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3490] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_textcolors,
    ACTIONS(793), 1,
      anon_sym_bitmapfont,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym__textcolors,
    STATE(140), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 7,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_frameAnimatedSpriteType,
      anon_sym_cursor_offset,
  [3550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_assign_equal,
    ACTIONS(825), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [3565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [3577] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_x,
    ACTIONS(833), 1,
      anon_sym_y,
    STATE(228), 1,
      sym__entry_x_integer,
    STATE(229), 1,
      sym__entry_y_integer,
    STATE(284), 1,
      sym__statement_xy_integer,
  [3596] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_x,
    ACTIONS(833), 1,
      anon_sym_y,
    STATE(228), 1,
      sym__entry_x_integer,
    STATE(229), 1,
      sym__entry_y_integer,
    STATE(288), 1,
      sym__statement_xy_integer,
  [3615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    ACTIONS(837), 1,
      anon_sym_animatedmaptext,
    STATE(166), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [3630] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_x,
    ACTIONS(833), 1,
      anon_sym_y,
    STATE(228), 1,
      sym__entry_x_integer,
    STATE(229), 1,
      sym__entry_y_integer,
    STATE(275), 1,
      sym__statement_xy_integer,
  [3649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    ACTIONS(841), 1,
      anon_sym_animatedmaptext,
    STATE(166), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [3664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_assign_equal,
    ACTIONS(844), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym_assign_equal,
    ACTIONS(848), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3690] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_x,
    ACTIONS(854), 1,
      anon_sym_y,
    STATE(221), 1,
      sym__entry_y_float,
    STATE(223), 1,
      sym__entry_x_float,
    STATE(283), 1,
      sym__statement_xy_float,
  [3709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_animatedmaptext,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
    STATE(164), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [3724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
    ACTIONS(860), 1,
      aux_sym__integer_positive_token1,
    STATE(172), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [3738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
    ACTIONS(864), 1,
      aux_sym__integer_positive_token1,
    STATE(172), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [3752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [3891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [3900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      aux_sym__integer_positive_token1,
    STATE(171), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [3911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [3920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    ACTIONS(903), 1,
      sym_string,
    STATE(199), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [3933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(101), 1,
      sym__boolean_yes_no,
    ACTIONS(905), 2,
      anon_sym_yes,
      anon_sym_no,
  [3944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(95), 1,
      sym__boolean_yes_no,
    ACTIONS(907), 2,
      anon_sym_yes,
      anon_sym_no,
  [3955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(123), 1,
      sym__boolean_yes_no,
    ACTIONS(909), 2,
      anon_sym_yes,
      anon_sym_no,
  [3966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym_assign_equal,
    ACTIONS(911), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [3977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym_assign_equal,
    ACTIONS(915), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [3988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [3997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [4006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(30), 1,
      sym__boolean_yes_no,
    ACTIONS(923), 2,
      anon_sym_yes,
      anon_sym_no,
  [4017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym_string,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [4030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    ACTIONS(929), 1,
      sym_string,
    STATE(200), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [4043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 3,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym_y,
  [4052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [4061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      sym_assign_equal,
    ACTIONS(936), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [4072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_assign_equal,
    ACTIONS(940), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [4083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(57), 1,
      sym__boolean_yes_no,
    ACTIONS(944), 2,
      anon_sym_yes,
      anon_sym_no,
  [4094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym__corneredTileSpriteType_block,
  [4104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym__spriteType_block,
  [4114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [4122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [4130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym_float_token1,
    STATE(301), 1,
      sym__float_positive,
  [4140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym__spriteTypes_block,
  [4150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [4158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym__objectTypes_block,
  [4168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      aux_sym_float_token1,
    STATE(208), 1,
      sym_float,
  [4178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym_float_token1,
    STATE(173), 1,
      sym__float_positive,
  [4188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      aux_sym_float_token1,
    STATE(209), 1,
      sym_float,
  [4198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym_float_token1,
    STATE(100), 1,
      sym__float_positive,
  [4208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      aux_sym__integer_positive_token1,
    STATE(96), 1,
      sym__integer_positive,
  [4218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      sym__bitmapfonts_block,
  [4228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym_float_token1,
    STATE(210), 1,
      sym__float_positive,
  [4238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_x,
    STATE(293), 1,
      sym__entry_x_float,
  [4248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym__gfx_animation_block,
  [4258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_y,
    STATE(293), 1,
      sym__entry_y_float,
  [4268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      aux_sym__integer_positive_token1,
    STATE(112), 1,
      sym__integer_positive,
  [4278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      aux_sym__integer_positive_token1,
    STATE(114), 1,
      sym__integer_positive,
  [4288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      aux_sym__integer_positive_token1,
    STATE(23), 1,
      sym__integer_positive,
  [4298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym_float_token1,
    STATE(220), 1,
      sym__float_positive,
  [4308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_y,
    STATE(253), 1,
      sym__entry_y_integer,
  [4318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_x,
    STATE(253), 1,
      sym__entry_x_integer,
  [4328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(86), 1,
      sym__mod_replace_path_folder,
  [4338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [4346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(982), 1,
      aux_sym__statement_gfx_name_token2,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [4364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [4372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [4380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym__mod_tags_block,
  [4390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      sym__bitmapfont_block,
  [4400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym__textcolors_block,
  [4410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym__mod_dependencies_block,
  [4420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym__gfx_textblock,
  [4430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 2,
      anon_sym_RBRACE,
      sym_string,
  [4438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACE,
    STATE(235), 1,
      sym__animatedmaptext_block,
  [4448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym_float_token1,
    STATE(65), 1,
      sym__float_positive,
  [4458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym__maskedShieldType_block,
  [4468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym__textSpriteType_block,
  [4478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym__frameAnimatedSpriteType_block,
  [4488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      sym_string,
  [4495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [4502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_LBRACE,
  [4509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_LBRACE,
  [4516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_integer,
  [4523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      sym_integer,
  [4530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
  [4537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym_string,
  [4544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_angle,
  [4551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_LBRACE,
  [4558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym_string,
  [4565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_LBRACE,
  [4572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_centre,
  [4579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      aux_sym__statement_gfx_cull_distance_token1,
  [4586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym_assign_equal,
  [4593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym_assign_equal,
  [4600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym_byte,
  [4607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_assign_equal,
  [4614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym_assign_equal,
  [4621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      sym_assign_equal,
  [4628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym_assign_equal,
  [4635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym_assign_equal,
  [4642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym_assign_equal,
  [4649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      aux_sym__animation_entry_dds_token1,
  [4656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      sym_byte,
  [4663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym_integer,
  [4670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym_assign_equal,
  [4677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_LBRACE,
  [4684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_RBRACE,
  [4691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      aux_sym__statement_mod_supported_version_token1,
  [4698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      aux_sym__statement_mod_picture_token1,
  [4705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      aux_sym__statement_mod_version_token1,
  [4712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [4719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_RBRACE,
  [4726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      aux_sym__statement_mod_archive_token1,
  [4733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_string,
  [4740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_RBRACE,
  [4747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_RBRACE,
  [4754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [4761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym_string,
  [4768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_click,
  [4775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_RBRACE,
  [4782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_LBRACE,
  [4789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_LBRACE,
  [4796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      sym_integer,
  [4803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_LBRACE,
  [4810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_RBRACE,
  [4817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_RBRACE,
  [4824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      ts_builtin_sym_end,
  [4831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_byte,
  [4838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      ts_builtin_sym_end,
  [4845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      sym_assign_equal,
  [4852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym_hexadecimal,
  [4859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym_hexadecimal,
  [4866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
  [4873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      sym_assign_equal,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 304,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 394,
  [SMALL_STATE(13)] = 439,
  [SMALL_STATE(14)] = 485,
  [SMALL_STATE(15)] = 531,
  [SMALL_STATE(16)] = 577,
  [SMALL_STATE(17)] = 605,
  [SMALL_STATE(18)] = 633,
  [SMALL_STATE(19)] = 675,
  [SMALL_STATE(20)] = 717,
  [SMALL_STATE(21)] = 759,
  [SMALL_STATE(22)] = 786,
  [SMALL_STATE(23)] = 811,
  [SMALL_STATE(24)] = 836,
  [SMALL_STATE(25)] = 876,
  [SMALL_STATE(26)] = 912,
  [SMALL_STATE(27)] = 952,
  [SMALL_STATE(28)] = 990,
  [SMALL_STATE(29)] = 1028,
  [SMALL_STATE(30)] = 1068,
  [SMALL_STATE(31)] = 1092,
  [SMALL_STATE(32)] = 1128,
  [SMALL_STATE(33)] = 1166,
  [SMALL_STATE(34)] = 1202,
  [SMALL_STATE(35)] = 1227,
  [SMALL_STATE(36)] = 1252,
  [SMALL_STATE(37)] = 1277,
  [SMALL_STATE(38)] = 1302,
  [SMALL_STATE(39)] = 1327,
  [SMALL_STATE(40)] = 1349,
  [SMALL_STATE(41)] = 1385,
  [SMALL_STATE(42)] = 1407,
  [SMALL_STATE(43)] = 1443,
  [SMALL_STATE(44)] = 1465,
  [SMALL_STATE(45)] = 1501,
  [SMALL_STATE(46)] = 1520,
  [SMALL_STATE(47)] = 1543,
  [SMALL_STATE(48)] = 1566,
  [SMALL_STATE(49)] = 1589,
  [SMALL_STATE(50)] = 1612,
  [SMALL_STATE(51)] = 1635,
  [SMALL_STATE(52)] = 1658,
  [SMALL_STATE(53)] = 1681,
  [SMALL_STATE(54)] = 1704,
  [SMALL_STATE(55)] = 1725,
  [SMALL_STATE(56)] = 1745,
  [SMALL_STATE(57)] = 1765,
  [SMALL_STATE(58)] = 1785,
  [SMALL_STATE(59)] = 1805,
  [SMALL_STATE(60)] = 1825,
  [SMALL_STATE(61)] = 1843,
  [SMALL_STATE(62)] = 1873,
  [SMALL_STATE(63)] = 1903,
  [SMALL_STATE(64)] = 1933,
  [SMALL_STATE(65)] = 1953,
  [SMALL_STATE(66)] = 1973,
  [SMALL_STATE(67)] = 1993,
  [SMALL_STATE(68)] = 2013,
  [SMALL_STATE(69)] = 2033,
  [SMALL_STATE(70)] = 2053,
  [SMALL_STATE(71)] = 2073,
  [SMALL_STATE(72)] = 2093,
  [SMALL_STATE(73)] = 2113,
  [SMALL_STATE(74)] = 2133,
  [SMALL_STATE(75)] = 2153,
  [SMALL_STATE(76)] = 2173,
  [SMALL_STATE(77)] = 2193,
  [SMALL_STATE(78)] = 2210,
  [SMALL_STATE(79)] = 2227,
  [SMALL_STATE(80)] = 2244,
  [SMALL_STATE(81)] = 2261,
  [SMALL_STATE(82)] = 2278,
  [SMALL_STATE(83)] = 2295,
  [SMALL_STATE(84)] = 2312,
  [SMALL_STATE(85)] = 2329,
  [SMALL_STATE(86)] = 2346,
  [SMALL_STATE(87)] = 2363,
  [SMALL_STATE(88)] = 2382,
  [SMALL_STATE(89)] = 2399,
  [SMALL_STATE(90)] = 2416,
  [SMALL_STATE(91)] = 2433,
  [SMALL_STATE(92)] = 2452,
  [SMALL_STATE(93)] = 2471,
  [SMALL_STATE(94)] = 2488,
  [SMALL_STATE(95)] = 2507,
  [SMALL_STATE(96)] = 2523,
  [SMALL_STATE(97)] = 2539,
  [SMALL_STATE(98)] = 2565,
  [SMALL_STATE(99)] = 2591,
  [SMALL_STATE(100)] = 2617,
  [SMALL_STATE(101)] = 2633,
  [SMALL_STATE(102)] = 2649,
  [SMALL_STATE(103)] = 2667,
  [SMALL_STATE(104)] = 2685,
  [SMALL_STATE(105)] = 2703,
  [SMALL_STATE(106)] = 2720,
  [SMALL_STATE(107)] = 2737,
  [SMALL_STATE(108)] = 2754,
  [SMALL_STATE(109)] = 2771,
  [SMALL_STATE(110)] = 2786,
  [SMALL_STATE(111)] = 2803,
  [SMALL_STATE(112)] = 2820,
  [SMALL_STATE(113)] = 2835,
  [SMALL_STATE(114)] = 2850,
  [SMALL_STATE(115)] = 2865,
  [SMALL_STATE(116)] = 2882,
  [SMALL_STATE(117)] = 2897,
  [SMALL_STATE(118)] = 2914,
  [SMALL_STATE(119)] = 2936,
  [SMALL_STATE(120)] = 2952,
  [SMALL_STATE(121)] = 2966,
  [SMALL_STATE(122)] = 2980,
  [SMALL_STATE(123)] = 3002,
  [SMALL_STATE(124)] = 3016,
  [SMALL_STATE(125)] = 3030,
  [SMALL_STATE(126)] = 3044,
  [SMALL_STATE(127)] = 3058,
  [SMALL_STATE(128)] = 3072,
  [SMALL_STATE(129)] = 3086,
  [SMALL_STATE(130)] = 3100,
  [SMALL_STATE(131)] = 3122,
  [SMALL_STATE(132)] = 3136,
  [SMALL_STATE(133)] = 3158,
  [SMALL_STATE(134)] = 3172,
  [SMALL_STATE(135)] = 3188,
  [SMALL_STATE(136)] = 3210,
  [SMALL_STATE(137)] = 3224,
  [SMALL_STATE(138)] = 3240,
  [SMALL_STATE(139)] = 3253,
  [SMALL_STATE(140)] = 3266,
  [SMALL_STATE(141)] = 3287,
  [SMALL_STATE(142)] = 3300,
  [SMALL_STATE(143)] = 3313,
  [SMALL_STATE(144)] = 3326,
  [SMALL_STATE(145)] = 3347,
  [SMALL_STATE(146)] = 3360,
  [SMALL_STATE(147)] = 3373,
  [SMALL_STATE(148)] = 3386,
  [SMALL_STATE(149)] = 3399,
  [SMALL_STATE(150)] = 3412,
  [SMALL_STATE(151)] = 3425,
  [SMALL_STATE(152)] = 3438,
  [SMALL_STATE(153)] = 3451,
  [SMALL_STATE(154)] = 3464,
  [SMALL_STATE(155)] = 3477,
  [SMALL_STATE(156)] = 3490,
  [SMALL_STATE(157)] = 3511,
  [SMALL_STATE(158)] = 3524,
  [SMALL_STATE(159)] = 3537,
  [SMALL_STATE(160)] = 3550,
  [SMALL_STATE(161)] = 3565,
  [SMALL_STATE(162)] = 3577,
  [SMALL_STATE(163)] = 3596,
  [SMALL_STATE(164)] = 3615,
  [SMALL_STATE(165)] = 3630,
  [SMALL_STATE(166)] = 3649,
  [SMALL_STATE(167)] = 3664,
  [SMALL_STATE(168)] = 3677,
  [SMALL_STATE(169)] = 3690,
  [SMALL_STATE(170)] = 3709,
  [SMALL_STATE(171)] = 3724,
  [SMALL_STATE(172)] = 3738,
  [SMALL_STATE(173)] = 3752,
  [SMALL_STATE(174)] = 3762,
  [SMALL_STATE(175)] = 3772,
  [SMALL_STATE(176)] = 3782,
  [SMALL_STATE(177)] = 3792,
  [SMALL_STATE(178)] = 3802,
  [SMALL_STATE(179)] = 3812,
  [SMALL_STATE(180)] = 3822,
  [SMALL_STATE(181)] = 3832,
  [SMALL_STATE(182)] = 3842,
  [SMALL_STATE(183)] = 3852,
  [SMALL_STATE(184)] = 3862,
  [SMALL_STATE(185)] = 3872,
  [SMALL_STATE(186)] = 3882,
  [SMALL_STATE(187)] = 3891,
  [SMALL_STATE(188)] = 3900,
  [SMALL_STATE(189)] = 3911,
  [SMALL_STATE(190)] = 3920,
  [SMALL_STATE(191)] = 3933,
  [SMALL_STATE(192)] = 3944,
  [SMALL_STATE(193)] = 3955,
  [SMALL_STATE(194)] = 3966,
  [SMALL_STATE(195)] = 3977,
  [SMALL_STATE(196)] = 3988,
  [SMALL_STATE(197)] = 3997,
  [SMALL_STATE(198)] = 4006,
  [SMALL_STATE(199)] = 4017,
  [SMALL_STATE(200)] = 4030,
  [SMALL_STATE(201)] = 4043,
  [SMALL_STATE(202)] = 4052,
  [SMALL_STATE(203)] = 4061,
  [SMALL_STATE(204)] = 4072,
  [SMALL_STATE(205)] = 4083,
  [SMALL_STATE(206)] = 4094,
  [SMALL_STATE(207)] = 4104,
  [SMALL_STATE(208)] = 4114,
  [SMALL_STATE(209)] = 4122,
  [SMALL_STATE(210)] = 4130,
  [SMALL_STATE(211)] = 4140,
  [SMALL_STATE(212)] = 4150,
  [SMALL_STATE(213)] = 4158,
  [SMALL_STATE(214)] = 4168,
  [SMALL_STATE(215)] = 4178,
  [SMALL_STATE(216)] = 4188,
  [SMALL_STATE(217)] = 4198,
  [SMALL_STATE(218)] = 4208,
  [SMALL_STATE(219)] = 4218,
  [SMALL_STATE(220)] = 4228,
  [SMALL_STATE(221)] = 4238,
  [SMALL_STATE(222)] = 4248,
  [SMALL_STATE(223)] = 4258,
  [SMALL_STATE(224)] = 4268,
  [SMALL_STATE(225)] = 4278,
  [SMALL_STATE(226)] = 4288,
  [SMALL_STATE(227)] = 4298,
  [SMALL_STATE(228)] = 4308,
  [SMALL_STATE(229)] = 4318,
  [SMALL_STATE(230)] = 4328,
  [SMALL_STATE(231)] = 4338,
  [SMALL_STATE(232)] = 4346,
  [SMALL_STATE(233)] = 4356,
  [SMALL_STATE(234)] = 4364,
  [SMALL_STATE(235)] = 4372,
  [SMALL_STATE(236)] = 4380,
  [SMALL_STATE(237)] = 4390,
  [SMALL_STATE(238)] = 4400,
  [SMALL_STATE(239)] = 4410,
  [SMALL_STATE(240)] = 4420,
  [SMALL_STATE(241)] = 4430,
  [SMALL_STATE(242)] = 4438,
  [SMALL_STATE(243)] = 4448,
  [SMALL_STATE(244)] = 4458,
  [SMALL_STATE(245)] = 4468,
  [SMALL_STATE(246)] = 4478,
  [SMALL_STATE(247)] = 4488,
  [SMALL_STATE(248)] = 4495,
  [SMALL_STATE(249)] = 4502,
  [SMALL_STATE(250)] = 4509,
  [SMALL_STATE(251)] = 4516,
  [SMALL_STATE(252)] = 4523,
  [SMALL_STATE(253)] = 4530,
  [SMALL_STATE(254)] = 4537,
  [SMALL_STATE(255)] = 4544,
  [SMALL_STATE(256)] = 4551,
  [SMALL_STATE(257)] = 4558,
  [SMALL_STATE(258)] = 4565,
  [SMALL_STATE(259)] = 4572,
  [SMALL_STATE(260)] = 4579,
  [SMALL_STATE(261)] = 4586,
  [SMALL_STATE(262)] = 4593,
  [SMALL_STATE(263)] = 4600,
  [SMALL_STATE(264)] = 4607,
  [SMALL_STATE(265)] = 4614,
  [SMALL_STATE(266)] = 4621,
  [SMALL_STATE(267)] = 4628,
  [SMALL_STATE(268)] = 4635,
  [SMALL_STATE(269)] = 4642,
  [SMALL_STATE(270)] = 4649,
  [SMALL_STATE(271)] = 4656,
  [SMALL_STATE(272)] = 4663,
  [SMALL_STATE(273)] = 4670,
  [SMALL_STATE(274)] = 4677,
  [SMALL_STATE(275)] = 4684,
  [SMALL_STATE(276)] = 4691,
  [SMALL_STATE(277)] = 4698,
  [SMALL_STATE(278)] = 4705,
  [SMALL_STATE(279)] = 4712,
  [SMALL_STATE(280)] = 4719,
  [SMALL_STATE(281)] = 4726,
  [SMALL_STATE(282)] = 4733,
  [SMALL_STATE(283)] = 4740,
  [SMALL_STATE(284)] = 4747,
  [SMALL_STATE(285)] = 4754,
  [SMALL_STATE(286)] = 4761,
  [SMALL_STATE(287)] = 4768,
  [SMALL_STATE(288)] = 4775,
  [SMALL_STATE(289)] = 4782,
  [SMALL_STATE(290)] = 4789,
  [SMALL_STATE(291)] = 4796,
  [SMALL_STATE(292)] = 4803,
  [SMALL_STATE(293)] = 4810,
  [SMALL_STATE(294)] = 4817,
  [SMALL_STATE(295)] = 4824,
  [SMALL_STATE(296)] = 4831,
  [SMALL_STATE(297)] = 4838,
  [SMALL_STATE(298)] = 4845,
  [SMALL_STATE(299)] = 4852,
  [SMALL_STATE(300)] = 4859,
  [SMALL_STATE(301)] = 4866,
  [SMALL_STATE(302)] = 4873,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(273),
  [7] = {.count = 1, .reusable = true}, SHIFT(302),
  [9] = {.count = 1, .reusable = true}, SHIFT(298),
  [11] = {.count = 1, .reusable = true}, SHIFT(74),
  [13] = {.count = 1, .reusable = true}, SHIFT(75),
  [15] = {.count = 1, .reusable = true}, SHIFT(73),
  [17] = {.count = 1, .reusable = true}, SHIFT(72),
  [19] = {.count = 1, .reusable = true}, SHIFT(71),
  [21] = {.count = 1, .reusable = true}, SHIFT(70),
  [23] = {.count = 1, .reusable = true}, SHIFT(69),
  [25] = {.count = 1, .reusable = true}, SHIFT(56),
  [27] = {.count = 1, .reusable = true}, SHIFT(67),
  [29] = {.count = 1, .reusable = true}, SHIFT(66),
  [31] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.count = 1, .reusable = true}, SHIFT(83),
  [38] = {.count = 1, .reusable = true}, SHIFT(4),
  [40] = {.count = 1, .reusable = true}, SHIFT(88),
  [42] = {.count = 1, .reusable = true}, SHIFT(2),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 1),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 1),
  [48] = {.count = 1, .reusable = true}, SHIFT(232),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 3),
  [52] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_name, 3),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym__float_positive, 1, .production_id = 5),
  [56] = {.count = 1, .reusable = false}, REDUCE(sym__float_positive, 1, .production_id = 5),
  [58] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(74),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(75),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(73),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(72),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(71),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(70),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(69),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(56),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(67),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(66),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [92] = {.count = 1, .reusable = true}, SHIFT(113),
  [94] = {.count = 1, .reusable = true}, SHIFT(46),
  [96] = {.count = 1, .reusable = false}, SHIFT(52),
  [98] = {.count = 1, .reusable = true}, SHIFT(53),
  [100] = {.count = 1, .reusable = true}, SHIFT(51),
  [102] = {.count = 1, .reusable = true}, SHIFT(50),
  [104] = {.count = 1, .reusable = true}, SHIFT(49),
  [106] = {.count = 1, .reusable = true}, SHIFT(48),
  [108] = {.count = 1, .reusable = true}, SHIFT(47),
  [110] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(46),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(52),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(53),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(51),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(50),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(49),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(48),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(47),
  [136] = {.count = 1, .reusable = true}, SHIFT(116),
  [138] = {.count = 1, .reusable = true}, SHIFT(142),
  [140] = {.count = 1, .reusable = true}, SHIFT(5),
  [142] = {.count = 1, .reusable = true}, SHIFT(16),
  [144] = {.count = 1, .reusable = true}, SHIFT(17),
  [146] = {.count = 1, .reusable = true}, SHIFT(34),
  [148] = {.count = 1, .reusable = true}, SHIFT(21),
  [150] = {.count = 1, .reusable = true}, SHIFT(94),
  [152] = {.count = 1, .reusable = true}, SHIFT(92),
  [154] = {.count = 1, .reusable = true}, SHIFT(91),
  [156] = {.count = 1, .reusable = true}, SHIFT(87),
  [158] = {.count = 1, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(5),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(17),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(34),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(21),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(94),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(92),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(91),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym__frameAnimatedSpriteType_block_repeat1, 2), SHIFT_REPEAT(87),
  [187] = {.count = 1, .reusable = true}, SHIFT(150),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 1),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 1),
  [193] = {.count = 1, .reusable = true}, SHIFT(248),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [199] = {.count = 1, .reusable = true}, SHIFT(226),
  [201] = {.count = 1, .reusable = true}, SHIFT(159),
  [203] = {.count = 1, .reusable = true}, SHIFT(104),
  [205] = {.count = 1, .reusable = true}, SHIFT(103),
  [207] = {.count = 1, .reusable = true}, SHIFT(102),
  [209] = {.count = 1, .reusable = true}, SHIFT(158),
  [211] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(5),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(17),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(104),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(103),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(34),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(102),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(21),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [241] = {.count = 1, .reusable = true}, SHIFT(198),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_textureFile, 3),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [251] = {.count = 1, .reusable = true}, SHIFT(157),
  [253] = {.count = 1, .reusable = true}, SHIFT(37),
  [255] = {.count = 1, .reusable = true}, SHIFT(115),
  [257] = {.count = 1, .reusable = true}, SHIFT(105),
  [259] = {.count = 1, .reusable = true}, SHIFT(182),
  [261] = {.count = 1, .reusable = true}, SHIFT(269),
  [263] = {.count = 1, .reusable = true}, SHIFT(268),
  [265] = {.count = 1, .reusable = true}, SHIFT(267),
  [267] = {.count = 1, .reusable = true}, SHIFT(266),
  [269] = {.count = 1, .reusable = true}, SHIFT(265),
  [271] = {.count = 1, .reusable = true}, SHIFT(54),
  [273] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(5),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(17),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(37),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(115),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(21),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(105),
  [296] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(37),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(108),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(107),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(111),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(117),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(110),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(106),
  [319] = {.count = 1, .reusable = true}, SHIFT(176),
  [321] = {.count = 1, .reusable = true}, SHIFT(108),
  [323] = {.count = 1, .reusable = true}, SHIFT(107),
  [325] = {.count = 1, .reusable = true}, SHIFT(111),
  [327] = {.count = 1, .reusable = true}, SHIFT(117),
  [329] = {.count = 1, .reusable = true}, SHIFT(110),
  [331] = {.count = 1, .reusable = true}, SHIFT(106),
  [333] = {.count = 1, .reusable = true}, SHIFT(154),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [339] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(269),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(268),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(267),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(266),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(265),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(54),
  [359] = {.count = 1, .reusable = true}, SHIFT(183),
  [361] = {.count = 1, .reusable = true}, SHIFT(177),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 1),
  [367] = {.count = 1, .reusable = true}, SHIFT(285),
  [369] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2), SHIFT_REPEAT(39),
  [374] = {.count = 1, .reusable = true}, SHIFT(136),
  [376] = {.count = 1, .reusable = true}, SHIFT(39),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 1),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size, 1),
  [382] = {.count = 1, .reusable = true}, SHIFT(289),
  [384] = {.count = 1, .reusable = true}, SHIFT(131),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 1),
  [388] = {.count = 1, .reusable = true}, SHIFT(292),
  [390] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(262),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(5),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(137),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(54),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(119),
  [407] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(134),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 5),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size, 5),
  [414] = {.count = 1, .reusable = true}, SHIFT(189),
  [416] = {.count = 1, .reusable = true}, SHIFT(262),
  [418] = {.count = 1, .reusable = true}, SHIFT(137),
  [420] = {.count = 1, .reusable = true}, SHIFT(119),
  [422] = {.count = 1, .reusable = true}, SHIFT(134),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_effectFile, 3),
  [428] = {.count = 1, .reusable = true}, SHIFT(187),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 7),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [434] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [436] = {.count = 1, .reusable = true}, SHIFT(270),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [442] = {.count = 1, .reusable = true}, SHIFT(250),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [448] = {.count = 1, .reusable = true}, SHIFT(186),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [452] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [454] = {.count = 1, .reusable = true}, SHIFT(202),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 1),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 1),
  [460] = {.count = 1, .reusable = true}, SHIFT(274),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [466] = {.count = 1, .reusable = true}, SHIFT(243),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [472] = {.count = 1, .reusable = true}, SHIFT(255),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [478] = {.count = 1, .reusable = true}, SHIFT(205),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 1),
  [482] = {.count = 1, .reusable = true}, SHIFT(249),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [490] = {.count = 1, .reusable = true}, SHIFT(230),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [502] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [506] = {.count = 1, .reusable = true}, SHIFT(138),
  [508] = {.count = 1, .reusable = true}, SHIFT(160),
  [510] = {.count = 1, .reusable = true}, SHIFT(139),
  [512] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2),
  [514] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(5),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(16),
  [520] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(17),
  [523] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(34),
  [526] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(160),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 5),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 5),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [539] = {.count = 1, .reusable = true}, SHIFT(239),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [543] = {.count = 1, .reusable = true}, SHIFT(236),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [551] = {.count = 1, .reusable = true}, SHIFT(276),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [555] = {.count = 1, .reusable = true}, SHIFT(277),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [559] = {.count = 1, .reusable = true}, SHIFT(278),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [563] = {.count = 1, .reusable = true}, SHIFT(279),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [567] = {.count = 1, .reusable = true}, SHIFT(281),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [571] = {.count = 1, .reusable = true}, SHIFT(286),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [575] = {.count = 1, .reusable = true}, SHIFT(282),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 1),
  [603] = {.count = 1, .reusable = true}, SHIFT(217),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 1),
  [613] = {.count = 1, .reusable = true}, SHIFT(191),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 1),
  [617] = {.count = 1, .reusable = true}, SHIFT(192),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 1),
  [623] = {.count = 1, .reusable = true}, SHIFT(218),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_looping, 3),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation_rate_fps, 3),
  [629] = {.count = 1, .reusable = true}, SHIFT(155),
  [631] = {.count = 1, .reusable = true}, SHIFT(153),
  [633] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(5),
  [638] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(16),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(17),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(34),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_pause_on_loop, 3),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_play_on_show, 3),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [653] = {.count = 1, .reusable = true}, SHIFT(222),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [657] = {.count = 1, .reusable = true}, SHIFT(224),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [661] = {.count = 1, .reusable = true}, SHIFT(225),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 1),
  [665] = {.count = 1, .reusable = true}, SHIFT(193),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [669] = {.count = 1, .reusable = true}, SHIFT(260),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 1),
  [673] = {.count = 1, .reusable = true}, SHIFT(256),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 1),
  [677] = {.count = 1, .reusable = true}, SHIFT(247),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 1),
  [683] = {.count = 1, .reusable = true}, SHIFT(259),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 1),
  [687] = {.count = 1, .reusable = true}, SHIFT(257),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 1),
  [697] = {.count = 1, .reusable = true}, SHIFT(290),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 1),
  [703] = {.count = 1, .reusable = true}, SHIFT(258),
  [705] = {.count = 1, .reusable = true}, SHIFT(233),
  [707] = {.count = 1, .reusable = true}, SHIFT(167),
  [709] = {.count = 1, .reusable = true}, SHIFT(168),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 1),
  [713] = {.count = 1, .reusable = true}, SHIFT(300),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 5),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 3),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 3),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 7),
  [727] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 1, .production_id = 4),
  [729] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 3),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 3),
  [733] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 3),
  [735] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [737] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(273),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(302),
  [743] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(298),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 3),
  [748] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(5),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(167),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(168),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 5),
  [761] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 1),
  [763] = {.count = 1, .reusable = true}, SHIFT(299),
  [765] = {.count = 1, .reusable = true}, SHIFT(212),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 2),
  [769] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 1),
  [771] = {.count = 1, .reusable = true}, SHIFT(254),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 3),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 2),
  [777] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2),
  [779] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(262),
  [782] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(261),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 3),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 2),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 3),
  [791] = {.count = 1, .reusable = true}, SHIFT(180),
  [793] = {.count = 1, .reusable = true}, SHIFT(261),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 3),
  [797] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 3),
  [801] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 1, .production_id = 4),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 3),
  [805] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType_block, 3),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_path, 3),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym__frameAnimatedSpriteType, 3),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 2),
  [813] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 2),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 3),
  [817] = {.count = 1, .reusable = true}, SHIFT(185),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 3),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [825] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 1),
  [827] = {.count = 1, .reusable = true}, SHIFT(287),
  [829] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 3),
  [831] = {.count = 1, .reusable = true}, SHIFT(203),
  [833] = {.count = 1, .reusable = true}, SHIFT(204),
  [835] = {.count = 1, .reusable = true}, SHIFT(178),
  [837] = {.count = 1, .reusable = true}, SHIFT(264),
  [839] = {.count = 1, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2),
  [841] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(264),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 1),
  [846] = {.count = 1, .reusable = true}, SHIFT(215),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 1),
  [850] = {.count = 1, .reusable = true}, SHIFT(240),
  [852] = {.count = 1, .reusable = true}, SHIFT(194),
  [854] = {.count = 1, .reusable = true}, SHIFT(195),
  [856] = {.count = 1, .reusable = true}, SHIFT(184),
  [858] = {.count = 1, .reusable = true}, SHIFT(68),
  [860] = {.count = 1, .reusable = true}, SHIFT(172),
  [862] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [864] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(172),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 3),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 3),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 3),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 2),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 3),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 3),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 2),
  [883] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [887] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 3),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 2),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 3),
  [893] = {.count = 1, .reusable = true}, SHIFT(55),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 3),
  [897] = {.count = 1, .reusable = true}, SHIFT(171),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 2),
  [901] = {.count = 1, .reusable = true}, SHIFT(81),
  [903] = {.count = 1, .reusable = true}, SHIFT(241),
  [905] = {.count = 1, .reusable = true}, SHIFT(101),
  [907] = {.count = 1, .reusable = true}, SHIFT(95),
  [909] = {.count = 1, .reusable = true}, SHIFT(123),
  [911] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 1),
  [913] = {.count = 1, .reusable = true}, SHIFT(216),
  [915] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 1),
  [917] = {.count = 1, .reusable = true}, SHIFT(214),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_type, 1, .production_id = 2),
  [921] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 3),
  [923] = {.count = 1, .reusable = true}, SHIFT(30),
  [925] = {.count = 1, .reusable = true}, SHIFT(90),
  [927] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [929] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(241),
  [932] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [934] = {.count = 1, .reusable = true}, SHIFT(76),
  [936] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 1),
  [938] = {.count = 1, .reusable = true}, SHIFT(251),
  [940] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 1),
  [942] = {.count = 1, .reusable = true}, SHIFT(252),
  [944] = {.count = 1, .reusable = true}, SHIFT(57),
  [946] = {.count = 1, .reusable = true}, SHIFT(29),
  [948] = {.count = 1, .reusable = true}, SHIFT(18),
  [950] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 3),
  [952] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 3),
  [954] = {.count = 1, .reusable = true}, SHIFT(7),
  [956] = {.count = 1, .reusable = true}, SHIFT(25),
  [958] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 3),
  [960] = {.count = 1, .reusable = true}, SHIFT(170),
  [962] = {.count = 1, .reusable = true}, SHIFT(201),
  [964] = {.count = 1, .reusable = true}, SHIFT(96),
  [966] = {.count = 1, .reusable = true}, SHIFT(144),
  [968] = {.count = 1, .reusable = true}, SHIFT(10),
  [970] = {.count = 1, .reusable = true}, SHIFT(112),
  [972] = {.count = 1, .reusable = true}, SHIFT(114),
  [974] = {.count = 1, .reusable = true}, SHIFT(23),
  [976] = {.count = 1, .reusable = true}, SHIFT(86),
  [978] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 3),
  [980] = {.count = 1, .reusable = true}, SHIFT(6),
  [982] = {.count = 1, .reusable = false}, SHIFT(6),
  [984] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 2),
  [986] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 3),
  [988] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 3),
  [990] = {.count = 1, .reusable = true}, SHIFT(3),
  [992] = {.count = 1, .reusable = true}, SHIFT(42),
  [994] = {.count = 1, .reusable = true}, SHIFT(36),
  [996] = {.count = 1, .reusable = true}, SHIFT(190),
  [998] = {.count = 1, .reusable = true}, SHIFT(28),
  [1000] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 3),
  [1002] = {.count = 1, .reusable = true}, SHIFT(118),
  [1004] = {.count = 1, .reusable = true}, SHIFT(98),
  [1006] = {.count = 1, .reusable = true}, SHIFT(62),
  [1008] = {.count = 1, .reusable = true}, SHIFT(13),
  [1010] = {.count = 1, .reusable = true}, SHIFT(129),
  [1012] = {.count = 1, .reusable = true}, SHIFT(22),
  [1014] = {.count = 1, .reusable = true}, SHIFT(272),
  [1016] = {.count = 1, .reusable = true}, SHIFT(188),
  [1018] = {.count = 1, .reusable = true}, SHIFT(234),
  [1020] = {.count = 1, .reusable = true}, SHIFT(231),
  [1022] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_integer, 2),
  [1024] = {.count = 1, .reusable = true}, SHIFT(151),
  [1026] = {.count = 1, .reusable = true}, SHIFT(58),
  [1028] = {.count = 1, .reusable = true}, SHIFT(227),
  [1030] = {.count = 1, .reusable = true}, SHIFT(128),
  [1032] = {.count = 1, .reusable = true}, SHIFT(163),
  [1034] = {.count = 1, .reusable = true}, SHIFT(127),
  [1036] = {.count = 1, .reusable = true}, SHIFT(124),
  [1038] = {.count = 1, .reusable = true}, SHIFT(237),
  [1040] = {.count = 1, .reusable = true}, SHIFT(238),
  [1042] = {.count = 1, .reusable = true}, SHIFT(280),
  [1044] = {.count = 1, .reusable = true}, SHIFT(242),
  [1046] = {.count = 1, .reusable = true}, SHIFT(246),
  [1048] = {.count = 1, .reusable = true}, SHIFT(244),
  [1050] = {.count = 1, .reusable = true}, SHIFT(206),
  [1052] = {.count = 1, .reusable = true}, SHIFT(245),
  [1054] = {.count = 1, .reusable = true}, SHIFT(207),
  [1056] = {.count = 1, .reusable = true}, SHIFT(59),
  [1058] = {.count = 1, .reusable = true}, SHIFT(263),
  [1060] = {.count = 1, .reusable = true}, SHIFT(291),
  [1062] = {.count = 1, .reusable = true}, SHIFT(211),
  [1064] = {.count = 1, .reusable = true}, SHIFT(169),
  [1066] = {.count = 1, .reusable = true}, SHIFT(133),
  [1068] = {.count = 1, .reusable = true}, SHIFT(85),
  [1070] = {.count = 1, .reusable = true}, SHIFT(84),
  [1072] = {.count = 1, .reusable = true}, SHIFT(82),
  [1074] = {.count = 1, .reusable = true}, SHIFT(80),
  [1076] = {.count = 1, .reusable = true}, SHIFT(45),
  [1078] = {.count = 1, .reusable = true}, SHIFT(79),
  [1080] = {.count = 1, .reusable = true}, SHIFT(78),
  [1082] = {.count = 1, .reusable = true}, SHIFT(64),
  [1084] = {.count = 1, .reusable = true}, SHIFT(41),
  [1086] = {.count = 1, .reusable = true}, SHIFT(43),
  [1088] = {.count = 1, .reusable = true}, SHIFT(77),
  [1090] = {.count = 1, .reusable = true}, SHIFT(161),
  [1092] = {.count = 1, .reusable = true}, SHIFT(120),
  [1094] = {.count = 1, .reusable = true}, SHIFT(162),
  [1096] = {.count = 1, .reusable = true}, SHIFT(165),
  [1098] = {.count = 1, .reusable = true}, SHIFT(294),
  [1100] = {.count = 1, .reusable = true}, SHIFT(296),
  [1102] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_float, 2),
  [1104] = {.count = 1, .reusable = true}, SHIFT(60),
  [1106] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [1108] = {.count = 1, .reusable = true}, SHIFT(271),
  [1110] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1112] = {.count = 1, .reusable = true}, SHIFT(219),
  [1114] = {.count = 1, .reusable = true}, SHIFT(147),
  [1116] = {.count = 1, .reusable = true}, SHIFT(149),
  [1118] = {.count = 1, .reusable = true}, SHIFT(125),
  [1120] = {.count = 1, .reusable = true}, SHIFT(213),
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
