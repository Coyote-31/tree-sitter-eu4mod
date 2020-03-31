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
#define STATE_COUNT 282
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 227
#define ALIAS_COUNT 4
#define TOKEN_COUNT 125
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
  anon_sym_name = 13,
  anon_sym_x = 14,
  anon_sym_y = 15,
  anon_sym_path = 16,
  anon_sym_archive = 17,
  aux_sym__statement_mod_archive_token1 = 18,
  anon_sym_remote_file_id = 19,
  aux_sym__statement_mod_remote_file_id_token1 = 20,
  anon_sym_version = 21,
  aux_sym__statement_mod_version_token1 = 22,
  anon_sym_picture = 23,
  aux_sym__statement_mod_picture_token1 = 24,
  anon_sym_supported_version = 25,
  aux_sym__statement_mod_supported_version_token1 = 26,
  anon_sym_replace_path = 27,
  aux_sym__mod_replace_path_folder_token1 = 28,
  anon_sym_tags = 29,
  aux_sym__mod_tags_keyword_token1 = 30,
  aux_sym__mod_tags_keyword_token2 = 31,
  aux_sym__mod_tags_keyword_token3 = 32,
  aux_sym__mod_tags_keyword_token4 = 33,
  aux_sym__mod_tags_keyword_token5 = 34,
  aux_sym__mod_tags_keyword_token6 = 35,
  aux_sym__mod_tags_keyword_token7 = 36,
  aux_sym__mod_tags_keyword_token8 = 37,
  aux_sym__mod_tags_keyword_token9 = 38,
  aux_sym__mod_tags_keyword_token10 = 39,
  aux_sym__mod_tags_keyword_token11 = 40,
  aux_sym__mod_tags_keyword_token12 = 41,
  aux_sym__mod_tags_keyword_token13 = 42,
  aux_sym__mod_tags_keyword_token14 = 43,
  aux_sym__mod_tags_keyword_token15 = 44,
  aux_sym__mod_tags_keyword_token16 = 45,
  aux_sym__mod_tags_keyword_token17 = 46,
  aux_sym__mod_tags_keyword_token18 = 47,
  aux_sym__mod_tags_keyword_token19 = 48,
  aux_sym__mod_tags_keyword_token20 = 49,
  aux_sym__mod_tags_keyword_token21 = 50,
  aux_sym__mod_tags_keyword_token22 = 51,
  anon_sym_dependencies = 52,
  aux_sym__statement_gfx_name_token1 = 53,
  aux_sym__statement_gfx_name_token2 = 54,
  anon_sym_cursor_offset = 55,
  aux_sym__statement_gfx_textureFile_token1 = 56,
  aux_sym__statement_gfx_textureFile_token2 = 57,
  anon_sym_noOfFrames = 58,
  anon_sym_overlay_frames_per_row = 59,
  anon_sym_overlay_rows = 60,
  anon_sym_effectFile = 61,
  aux_sym__statement_gfx_effectFile_token1 = 62,
  anon_sym_animation = 63,
  anon_sym_animationmaskfile = 64,
  anon_sym_animationtexturefile = 65,
  aux_sym__animation_entry_dds_token1 = 66,
  anon_sym_animationrotation = 67,
  anon_sym_animationlooping = 68,
  anon_sym_animationtime = 69,
  anon_sym_animationdelay = 70,
  anon_sym_animationrotationoffset = 71,
  anon_sym_animationtexturescale = 72,
  anon_sym_animationblendmode = 73,
  anon_sym_DQUOTEadd_DQUOTE = 74,
  anon_sym_DQUOTEmultiply_DQUOTE = 75,
  anon_sym_DQUOTEoverlay_DQUOTE = 76,
  anon_sym_animationtype = 77,
  anon_sym_DQUOTEscrolling_DQUOTE = 78,
  anon_sym_DQUOTErotating_DQUOTE = 79,
  anon_sym_DQUOTEpulsing_DQUOTE = 80,
  anon_sym_animationframes = 81,
  anon_sym_size = 82,
  anon_sym_borderSize = 83,
  anon_sym_allwaystransparent = 84,
  anon_sym_legacy_lazy_load = 85,
  anon_sym_clicksound = 86,
  anon_sym_click = 87,
  anon_sym_speed = 88,
  anon_sym_textblock = 89,
  anon_sym_text = 90,
  anon_sym_color = 91,
  anon_sym_font = 92,
  anon_sym_position = 93,
  anon_sym_format = 94,
  anon_sym_centre = 95,
  anon_sym_cull_distance = 96,
  aux_sym__statement_gfx_cull_distance_token1 = 97,
  anon_sym_B = 98,
  anon_sym_b = 99,
  anon_sym_G = 100,
  anon_sym_H = 101,
  anon_sym_l = 102,
  anon_sym_M = 103,
  anon_sym_O = 104,
  anon_sym_g = 105,
  anon_sym_R = 106,
  anon_sym_T = 107,
  anon_sym_W = 108,
  anon_sym_Y = 109,
  anon_sym_border_color = 110,
  sym_assign_equal = 111,
  sym_string = 112,
  sym_number = 113,
  aux_sym_float_token1 = 114,
  sym_integer = 115,
  aux_sym__integer_positive_token1 = 116,
  sym_byte = 117,
  sym_hexadecimal = 118,
  sym_angle = 119,
  anon_sym_true = 120,
  anon_sym_false = 121,
  anon_sym_yes = 122,
  anon_sym_no = 123,
  sym_comment = 124,
  sym_file = 125,
  sym_dot_mod = 126,
  sym_dot_gfx = 127,
  sym__spriteTypes = 128,
  sym__spriteTypes_block = 129,
  sym__spriteTypes_statement = 130,
  sym__spriteTypes_type = 131,
  sym__objectTypes = 132,
  sym__objectTypes_block = 133,
  sym__objectTypes_type = 134,
  sym__bitmapfonts = 135,
  sym__bitmapfonts_block = 136,
  sym__bitmapfonts_type = 137,
  sym__spriteType = 138,
  sym__spriteType_block = 139,
  sym__textSpriteType = 140,
  sym__textSpriteType_block = 141,
  sym__corneredTileSpriteType = 142,
  sym__corneredTileSpriteType_block = 143,
  sym__maskedShieldType = 144,
  sym__maskedShieldType_block = 145,
  sym__animatedmaptext = 146,
  sym__animatedmaptext_block = 147,
  sym__textcolors = 148,
  sym__textcolors_block = 149,
  sym__bitmapfont = 150,
  sym__bitmapfont_block = 151,
  sym__statement_name = 152,
  sym__statement_xy_integer = 153,
  sym__entry_x_integer = 154,
  sym__entry_y_integer = 155,
  sym__statement_xy_float = 156,
  sym__entry_x_float = 157,
  sym__entry_y_float = 158,
  sym__statement_mod_path = 159,
  sym__statement_mod_archive = 160,
  sym__statement_mod_remote_file_id = 161,
  sym__statement_mod_version = 162,
  sym__statement_mod_picture = 163,
  sym__statement_mod_supported_version = 164,
  sym__statement_mod_replace_path = 165,
  sym__mod_replace_path_folder = 166,
  sym__statement_mod_tags = 167,
  sym__mod_tags_block = 168,
  sym__mod_tags_keyword = 169,
  sym__statement_mod_dependencies = 170,
  sym__mod_dependencies_block = 171,
  sym__statement_gfx_name = 172,
  sym__statement_gfx_cursor_offset = 173,
  sym__statement_gfx_textureFile = 174,
  sym__statement_gfx_noOfFrames = 175,
  sym__statement_gfx_overlay_frames_per_row = 176,
  sym__statement_gfx_overlay_rows = 177,
  sym__statement_gfx_effectFile = 178,
  sym__statement_gfx_animation = 179,
  sym__gfx_animation_block = 180,
  sym__animation_entry_dds = 181,
  sym__animation_entry_angle = 182,
  sym__animation_entry_bool = 183,
  sym__animation_entry_time = 184,
  sym__animation_entry_xy_float = 185,
  sym__animation_entry_blendmode = 186,
  sym__animation_entry_type = 187,
  sym__animation_entry_frames = 188,
  sym__statement_gfx_size = 189,
  sym__statement_gfx_borderSize = 190,
  sym__statement_gfx_allwaystransparent = 191,
  sym__statement_gfx_legacy_lazy_load = 192,
  sym__statement_gfx_clicksound = 193,
  sym__statement_gfx_speed = 194,
  sym__statement_gfx_textblock = 195,
  sym__gfx_textblock = 196,
  sym__statement_gfx_text = 197,
  sym__statement_gfx_color = 198,
  sym__statement_gfx_font = 199,
  sym__statement_gfx_position = 200,
  sym__statement_gfx_format = 201,
  sym__statement_gfx_cull_distance = 202,
  sym__statement_gfx_textcolors = 203,
  sym__statement_gfx_bitmapfont_color = 204,
  sym__statement_gfx_bitmapfont_border_color = 205,
  sym_float = 206,
  sym__float_positive = 207,
  sym__integer_positive = 208,
  sym__yes_no = 209,
  aux_sym_dot_mod_repeat1 = 210,
  aux_sym_dot_gfx_repeat1 = 211,
  aux_sym__spriteTypes_block_repeat1 = 212,
  aux_sym__objectTypes_block_repeat1 = 213,
  aux_sym__bitmapfonts_block_repeat1 = 214,
  aux_sym__spriteType_block_repeat1 = 215,
  aux_sym__textSpriteType_block_repeat1 = 216,
  aux_sym__corneredTileSpriteType_block_repeat1 = 217,
  aux_sym__maskedShieldType_block_repeat1 = 218,
  aux_sym__animatedmaptext_block_repeat1 = 219,
  aux_sym__textcolors_block_repeat1 = 220,
  aux_sym__bitmapfont_block_repeat1 = 221,
  aux_sym__mod_tags_block_repeat1 = 222,
  aux_sym__mod_dependencies_block_repeat1 = 223,
  aux_sym__gfx_animation_block_repeat1 = 224,
  aux_sym__animation_entry_frames_repeat1 = 225,
  aux_sym__gfx_textblock_repeat1 = 226,
  alias_sym_dependencies = 227,
  alias_sym_name_value = 228,
  alias_sym_statement = 229,
  alias_sym_type_definition = 230,
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
  [anon_sym_name] = "name_identifier",
  [anon_sym_x] = "identifier",
  [anon_sym_y] = "identifier",
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
  [anon_sym_click] = "keywords",
  [anon_sym_speed] = "identifier",
  [anon_sym_textblock] = "identifier",
  [anon_sym_text] = "identifier",
  [anon_sym_color] = "identifier",
  [anon_sym_font] = "identifier",
  [anon_sym_position] = "identifier",
  [anon_sym_format] = "identifier",
  [anon_sym_centre] = "keywords",
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
  [sym_float] = "float",
  [sym__float_positive] = "_float_positive",
  [sym__integer_positive] = "_integer_positive",
  [sym__yes_no] = "_yes_no",
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
  [anon_sym_name] = anon_sym_name,
  [anon_sym_x] = anon_sym_spriteTypes,
  [anon_sym_y] = anon_sym_spriteTypes,
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
  [anon_sym_click] = anon_sym_click,
  [anon_sym_speed] = anon_sym_spriteTypes,
  [anon_sym_textblock] = anon_sym_spriteTypes,
  [anon_sym_text] = anon_sym_spriteTypes,
  [anon_sym_color] = anon_sym_spriteTypes,
  [anon_sym_font] = anon_sym_spriteTypes,
  [anon_sym_position] = anon_sym_spriteTypes,
  [anon_sym_format] = anon_sym_spriteTypes,
  [anon_sym_centre] = anon_sym_click,
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
  [sym_float] = sym_float,
  [sym__float_positive] = sym__float_positive,
  [sym__integer_positive] = sym__integer_positive,
  [sym__yes_no] = sym__yes_no,
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
  [sym__yes_no] = {
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
      if (eof) ADVANCE(1220);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#') ADVANCE(1363);
      if (lookahead == '-') ADVANCE(1200);
      if (lookahead == '0') ADVANCE(1344);
      if (lookahead == '1') ADVANCE(1344);
      if (lookahead == '2') ADVANCE(1342);
      if (lookahead == '=') ADVANCE(1339);
      if (lookahead == 'B') ADVANCE(1324);
      if (lookahead == 'G') ADVANCE(1327);
      if (lookahead == 'H') ADVANCE(1328);
      if (lookahead == 'M') ADVANCE(1331);
      if (lookahead == 'O') ADVANCE(1332);
      if (lookahead == 'R') ADVANCE(1334);
      if (lookahead == 'T') ADVANCE(1335);
      if (lookahead == 'W') ADVANCE(1336);
      if (lookahead == 'Y') ADVANCE(1337);
      if (lookahead == '\\') SKIP(1216)
      if (lookahead == 'a') ADVANCE(928);
      if (lookahead == 'b') ADVANCE(1326);
      if (lookahead == 'c') ADVANCE(777);
      if (lookahead == 'd') ADVANCE(778);
      if (lookahead == 'e') ADVANCE(856);
      if (lookahead == 'f') ADVANCE(706);
      if (lookahead == 'g') ADVANCE(1333);
      if (lookahead == 'l') ADVANCE(1330);
      if (lookahead == 'm') ADVANCE(702);
      if (lookahead == 'n') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(741);
      if (lookahead == 'p') ADVANCE(709);
      if (lookahead == 'r') ADVANCE(780);
      if (lookahead == 's') ADVANCE(879);
      if (lookahead == 't') ADVANCE(710);
      if (lookahead == 'v') ADVANCE(805);
      if (lookahead == 'x') ADVANCE(1236);
      if (lookahead == 'y') ADVANCE(1238);
      if (lookahead == '{') ADVANCE(1222);
      if (lookahead == '}') ADVANCE(1223);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1344);
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
      if (lookahead == '\n') SKIP(429)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(429)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(430)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(430)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(431)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(431)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(1340);
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
      if (lookahead == '"') ADVANCE(1251);
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
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1243);
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
      if (lookahead == '"') ADVANCE(1243);
      if (lookahead == '.') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1243);
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
      if (lookahead == '"') ADVANCE(1243);
      if (lookahead == '.') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1340);
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
      if (lookahead == '"') ADVANCE(1340);
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
      if (lookahead == '"') ADVANCE(1340);
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
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'K') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1340);
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
      if (lookahead == '"') ADVANCE(1340);
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
      if (lookahead == '"') ADVANCE(1340);
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
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'j') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'z') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '_') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
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
      if (lookahead == '"') ADVANCE(1276);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(1276);
      if (lookahead == '.') ADVANCE(666);
      if (lookahead == 'F') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(1276);
      if (lookahead == '.') ADVANCE(666);
      if (lookahead == 'X') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(1276);
      if (lookahead == '.') ADVANCE(666);
      if (lookahead == '_') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(1276);
      if (lookahead == '.') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(1276);
      if (lookahead == 'G') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(1263);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(1263);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(1297);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(1297);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(1251);
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
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'd') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'g') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'u') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(1245);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(1245);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(1245);
      if (lookahead == '.') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(1245);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(1247);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(1247);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(1247);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(1241);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(1241);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(1241);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(1279);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(1279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(1284);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(1284);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(1260);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(1260);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(1269);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(1269);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(1257);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(1257);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(1271);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(1271);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(1249);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(1249);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(1249);
      if (lookahead == '.') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(1249);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(1249);
      if (lookahead == '.') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(1249);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(1249);
      if (lookahead == '.') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(1249);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(1255);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(1255);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(1299);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(1299);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(1303);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(1303);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(1254);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(1254);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(1258);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(1258);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(1259);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(1259);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(1264);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(1264);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 396:
      if (lookahead == '"') ADVANCE(1268);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 397:
      if (lookahead == '"') ADVANCE(1268);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 398:
      if (lookahead == '"') ADVANCE(1298);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 399:
      if (lookahead == '"') ADVANCE(1298);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 400:
      if (lookahead == '"') ADVANCE(1302);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 401:
      if (lookahead == '"') ADVANCE(1302);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 402:
      if (lookahead == '"') ADVANCE(1256);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 403:
      if (lookahead == '"') ADVANCE(1256);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 404:
      if (lookahead == '"') ADVANCE(1301);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 405:
      if (lookahead == '"') ADVANCE(1301);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 406:
      if (lookahead == '"') ADVANCE(1273);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 407:
      if (lookahead == '"') ADVANCE(1273);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 408:
      if (lookahead == '"') ADVANCE(1261);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 409:
      if (lookahead == '"') ADVANCE(1261);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 410:
      if (lookahead == '"') ADVANCE(1267);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 411:
      if (lookahead == '"') ADVANCE(1267);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 412:
      if (lookahead == '"') ADVANCE(1272);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 413:
      if (lookahead == '"') ADVANCE(1272);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 414:
      if (lookahead == '"') ADVANCE(1270);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 415:
      if (lookahead == '"') ADVANCE(1270);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 416:
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 417:
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 418:
      if (lookahead == '"') ADVANCE(1266);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 419:
      if (lookahead == '"') ADVANCE(1266);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 420:
      if (lookahead == '"') ADVANCE(1253);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 421:
      if (lookahead == '"') ADVANCE(1253);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 422:
      if (lookahead == '"') ADVANCE(1274);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 423:
      if (lookahead == '"') ADVANCE(1274);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 424:
      if (lookahead == '"') ADVANCE(1265);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 425:
      if (lookahead == '"') ADVANCE(1265);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 426:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(1363);
      if (lookahead == '=') ADVANCE(1339);
      if (lookahead == 'B') ADVANCE(1324);
      if (lookahead == 'G') ADVANCE(1327);
      if (lookahead == 'H') ADVANCE(1328);
      if (lookahead == 'M') ADVANCE(1331);
      if (lookahead == 'O') ADVANCE(1332);
      if (lookahead == 'R') ADVANCE(1334);
      if (lookahead == 'T') ADVANCE(1335);
      if (lookahead == 'W') ADVANCE(1336);
      if (lookahead == 'Y') ADVANCE(1337);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'b') ADVANCE(1325);
      if (lookahead == 'c') ADVANCE(956);
      if (lookahead == 'f') ADVANCE(1001);
      if (lookahead == 'g') ADVANCE(1333);
      if (lookahead == 'l') ADVANCE(1329);
      if (lookahead == 'n') ADVANCE(1002);
      if (lookahead == 'p') ADVANCE(1003);
      if (lookahead == 's') ADVANCE(878);
      if (lookahead == 't') ADVANCE(844);
      if (lookahead == 'y') ADVANCE(811);
      if (lookahead == '}') ADVANCE(1223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(426)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1349);
      END_STATE();
    case 427:
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1363);
      if (lookahead == '-') ADVANCE(1204);
      if (lookahead == '=') ADVANCE(1339);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(930);
      if (lookahead == 'b') ADVANCE(916);
      if (lookahead == 'c') ADVANCE(953);
      if (lookahead == 'e') ADVANCE(856);
      if (lookahead == 'l') ADVANCE(779);
      if (lookahead == 'm') ADVANCE(702);
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(1168);
      if (lookahead == 'p') ADVANCE(707);
      if (lookahead == 's') ADVANCE(881);
      if (lookahead == 't') ADVANCE(845);
      if (lookahead == '}') ADVANCE(1223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(427)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1348);
      END_STATE();
    case 428:
      if (lookahead == '"') ADVANCE(1289);
      if (lookahead == '.') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 429:
      if (lookahead == '"') ADVANCE(757);
      if (lookahead == '#') ADVANCE(1363);
      if (lookahead == '0') ADVANCE(663);
      if (lookahead == '=') ADVANCE(1339);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(927);
      if (lookahead == 'b') ADVANCE(1037);
      if (lookahead == 'c') ADVANCE(1030);
      if (lookahead == 'f') ADVANCE(1001);
      if (lookahead == 'l') ADVANCE(779);
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(1003);
      if (lookahead == 's') ADVANCE(878);
      if (lookahead == 't') ADVANCE(847);
      if (lookahead == '}') ADVANCE(1223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(429)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 430:
      if (lookahead == '#') ADVANCE(1363);
      if (lookahead == '0') ADVANCE(1350);
      if (lookahead == '1') ADVANCE(1354);
      if (lookahead == '2') ADVANCE(1351);
      if (lookahead == '\\') SKIP(8)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1353);
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
      if (lookahead == '#') ADVANCE(1363);
      if (lookahead == '0') ADVANCE(669);
      if (lookahead == '3') ADVANCE(671);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(673);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(431)
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
      if (lookahead == '.') ADVANCE(1206);
      if (lookahead == 'f') ADVANCE(1323);
      if (lookahead == 'x') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 664:
      if (lookahead == '.') ADVANCE(1206);
      if (lookahead == 'f') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 665:
      if (lookahead == '.') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(668);
      END_STATE();
    case 666:
      if (lookahead == '.') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(668);
      END_STATE();
    case 667:
      if (lookahead == '.') ADVANCE(666);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == '.') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(668);
      END_STATE();
    case 669:
      if (lookahead == '.') ADVANCE(1207);
      END_STATE();
    case 670:
      if (lookahead == '.') ADVANCE(1207);
      if (lookahead == '0') ADVANCE(662);
      END_STATE();
    case 671:
      if (lookahead == '.') ADVANCE(1207);
      if (lookahead == '6') ADVANCE(670);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(672);
      END_STATE();
    case 672:
      if (lookahead == '.') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      END_STATE();
    case 673:
      if (lookahead == '.') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      END_STATE();
    case 674:
      if (lookahead == '0') ADVANCE(1357);
      END_STATE();
    case 675:
      if (lookahead == 'F') ADVANCE(886);
      END_STATE();
    case 676:
      if (lookahead == 'F') ADVANCE(1070);
      END_STATE();
    case 677:
      if (lookahead == 'O') ADVANCE(854);
      END_STATE();
    case 678:
      if (lookahead == 'S') ADVANCE(1043);
      if (lookahead == 'c') ADVANCE(1038);
      if (lookahead == 'u') ADVANCE(1079);
      END_STATE();
    case 679:
      if (lookahead == 'S') ADVANCE(896);
      END_STATE();
    case 680:
      if (lookahead == 'S') ADVANCE(896);
      if (lookahead == '_') ADVANCE(751);
      END_STATE();
    case 681:
      if (lookahead == 'S') ADVANCE(877);
      END_STATE();
    case 682:
      if (lookahead == 'S') ADVANCE(1060);
      END_STATE();
    case 683:
      if (lookahead == 'T') ADVANCE(1188);
      END_STATE();
    case 684:
      if (lookahead == 'T') ADVANCE(904);
      END_STATE();
    case 685:
      if (lookahead == 'T') ADVANCE(1190);
      END_STATE();
    case 686:
      if (lookahead == 'T') ADVANCE(1191);
      END_STATE();
    case 687:
      if (lookahead == 'T') ADVANCE(1192);
      END_STATE();
    case 688:
      if (lookahead == 'T') ADVANCE(1193);
      END_STATE();
    case 689:
      if (lookahead == 'T') ADVANCE(1194);
      END_STATE();
    case 690:
      if (lookahead == 'T') ADVANCE(1195);
      END_STATE();
    case 691:
      if (lookahead == '_') ADVANCE(867);
      END_STATE();
    case 692:
      if (lookahead == '_') ADVANCE(769);
      END_STATE();
    case 693:
      if (lookahead == '_') ADVANCE(862);
      END_STATE();
    case 694:
      if (lookahead == '_') ADVANCE(1044);
      END_STATE();
    case 695:
      if (lookahead == '_') ADVANCE(1028);
      END_STATE();
    case 696:
      if (lookahead == '_') ADVANCE(943);
      END_STATE();
    case 697:
      if (lookahead == '_') ADVANCE(892);
      END_STATE();
    case 698:
      if (lookahead == '_') ADVANCE(1074);
      END_STATE();
    case 699:
      if (lookahead == '_') ADVANCE(1170);
      END_STATE();
    case 700:
      if (lookahead == '_') ADVANCE(940);
      END_STATE();
    case 701:
      if (lookahead == '_') ADVANCE(1051);
      END_STATE();
    case 702:
      if (lookahead == 'a') ADVANCE(1091);
      END_STATE();
    case 703:
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'o') ADVANCE(1362);
      END_STATE();
    case 704:
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 705:
      if (lookahead == 'a') ADVANCE(1187);
      END_STATE();
    case 706:
      if (lookahead == 'a') ADVANCE(937);
      if (lookahead == 'o') ADVANCE(986);
      END_STATE();
    case 707:
      if (lookahead == 'a') ADVANCE(1136);
      END_STATE();
    case 708:
      if (lookahead == 'a') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 709:
      if (lookahead == 'a') ADVANCE(1136);
      if (lookahead == 'i') ADVANCE(748);
      if (lookahead == 'o') ADVANCE(1103);
      END_STATE();
    case 710:
      if (lookahead == 'a') ADVANCE(873);
      if (lookahead == 'e') ADVANCE(1176);
      if (lookahead == 'r') ADVANCE(1165);
      END_STATE();
    case 711:
      if (lookahead == 'a') ADVANCE(873);
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 712:
      if (lookahead == 'a') ADVANCE(1198);
      END_STATE();
    case 713:
      if (lookahead == 'a') ADVANCE(746);
      END_STATE();
    case 714:
      if (lookahead == 'a') ADVANCE(1041);
      END_STATE();
    case 715:
      if (lookahead == 'a') ADVANCE(1183);
      END_STATE();
    case 716:
      if (lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 717:
      if (lookahead == 'a') ADVANCE(1057);
      END_STATE();
    case 718:
      if (lookahead == 'a') ADVANCE(1122);
      END_STATE();
    case 719:
      if (lookahead == 'a') ADVANCE(990);
      END_STATE();
    case 720:
      if (lookahead == 'a') ADVANCE(1039);
      if (lookahead == 'i') ADVANCE(1118);
      END_STATE();
    case 721:
      if (lookahead == 'a') ADVANCE(999);
      END_STATE();
    case 722:
      if (lookahead == 'a') ADVANCE(1123);
      END_STATE();
    case 723:
      if (lookahead == 'a') ADVANCE(766);
      END_STATE();
    case 724:
      if (lookahead == 'a') ADVANCE(955);
      END_STATE();
    case 725:
      if (lookahead == 'a') ADVANCE(1105);
      END_STATE();
    case 726:
      if (lookahead == 'a') ADVANCE(965);
      END_STATE();
    case 727:
      if (lookahead == 'a') ADVANCE(1138);
      END_STATE();
    case 728:
      if (lookahead == 'a') ADVANCE(1186);
      END_STATE();
    case 729:
      if (lookahead == 'a') ADVANCE(966);
      END_STATE();
    case 730:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 731:
      if (lookahead == 'a') ADVANCE(967);
      END_STATE();
    case 732:
      if (lookahead == 'a') ADVANCE(1080);
      END_STATE();
    case 733:
      if (lookahead == 'a') ADVANCE(951);
      END_STATE();
    case 734:
      if (lookahead == 'a') ADVANCE(1152);
      END_STATE();
    case 735:
      if (lookahead == 'a') ADVANCE(1155);
      END_STATE();
    case 736:
      if (lookahead == 'a') ADVANCE(1058);
      END_STATE();
    case 737:
      if (lookahead == 'a') ADVANCE(1156);
      END_STATE();
    case 738:
      if (lookahead == 'a') ADVANCE(1059);
      END_STATE();
    case 739:
      if (lookahead == 'a') ADVANCE(1157);
      END_STATE();
    case 740:
      if (lookahead == 'b') ADVANCE(920);
      END_STATE();
    case 741:
      if (lookahead == 'b') ADVANCE(920);
      if (lookahead == 'v') ADVANCE(809);
      END_STATE();
    case 742:
      if (lookahead == 'b') ADVANCE(938);
      if (lookahead == 'c') ADVANCE(1038);
      if (lookahead == 'u') ADVANCE(1079);
      END_STATE();
    case 743:
      if (lookahead == 'b') ADVANCE(947);
      if (lookahead == 'd') ADVANCE(842);
      if (lookahead == 'f') ADVANCE(1087);
      if (lookahead == 'l') ADVANCE(1018);
      if (lookahead == 'm') ADVANCE(725);
      if (lookahead == 'r') ADVANCE(1024);
      if (lookahead == 't') ADVANCE(843);
      END_STATE();
    case 744:
      if (lookahead == 'c') ADVANCE(876);
      END_STATE();
    case 745:
      if (lookahead == 'c') ADVANCE(921);
      END_STATE();
    case 746:
      if (lookahead == 'c') ADVANCE(1185);
      END_STATE();
    case 747:
      if (lookahead == 'c') ADVANCE(922);
      END_STATE();
    case 748:
      if (lookahead == 'c') ADVANCE(1135);
      END_STATE();
    case 749:
      if (lookahead == 'c') ADVANCE(925);
      END_STATE();
    case 750:
      if (lookahead == 'c') ADVANCE(923);
      END_STATE();
    case 751:
      if (lookahead == 'c') ADVANCE(1014);
      END_STATE();
    case 752:
      if (lookahead == 'c') ADVANCE(1137);
      END_STATE();
    case 753:
      if (lookahead == 'c') ADVANCE(912);
      END_STATE();
    case 754:
      if (lookahead == 'c') ADVANCE(1124);
      END_STATE();
    case 755:
      if (lookahead == 'c') ADVANCE(733);
      END_STATE();
    case 756:
      if (lookahead == 'c') ADVANCE(724);
      END_STATE();
    case 757:
      if (lookahead == 'c') ADVANCE(1008);
      if (lookahead == 'd') ADVANCE(838);
      if (lookahead == 'e') ADVANCE(1171);
      if (lookahead == 'g') ADVANCE(857);
      if (lookahead == 'h') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(1000);
      if (lookahead == 'l') ADVANCE(1032);
      if (lookahead == 'm') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 758:
      if (lookahead == 'c') ADVANCE(818);
      END_STATE();
    case 759:
      if (lookahead == 'c') ADVANCE(793);
      END_STATE();
    case 760:
      if (lookahead == 'c') ADVANCE(808);
      END_STATE();
    case 761:
      if (lookahead == 'c') ADVANCE(895);
      END_STATE();
    case 762:
      if (lookahead == 'd') ADVANCE(1312);
      END_STATE();
    case 763:
      if (lookahead == 'd') ADVANCE(681);
      END_STATE();
    case 764:
      if (lookahead == 'd') ADVANCE(1309);
      END_STATE();
    case 765:
      if (lookahead == 'd') ADVANCE(1242);
      END_STATE();
    case 766:
      if (lookahead == 'd') ADVANCE(1308);
      END_STATE();
    case 767:
      if (lookahead == 'd') ADVANCE(684);
      END_STATE();
    case 768:
      if (lookahead == 'd') ADVANCE(964);
      END_STATE();
    case 769:
      if (lookahead == 'd') ADVANCE(888);
      END_STATE();
    case 770:
      if (lookahead == 'd') ADVANCE(699);
      END_STATE();
    case 771:
      if (lookahead == 'd') ADVANCE(816);
      END_STATE();
    case 772:
      if (lookahead == 'd') ADVANCE(814);
      END_STATE();
    case 773:
      if (lookahead == 'd') ADVANCE(797);
      END_STATE();
    case 774:
      if (lookahead == 'd') ADVANCE(832);
      END_STATE();
    case 775:
      if (lookahead == 'd') ADVANCE(963);
      END_STATE();
    case 776:
      if (lookahead == 'd') ADVANCE(687);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(984);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(933);
      if (lookahead == 'u') ADVANCE(936);
      END_STATE();
    case 778:
      if (lookahead == 'e') ADVANCE(1042);
      END_STATE();
    case 779:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 780:
      if (lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 781:
      if (lookahead == 'e') ADVANCE(1235);
      END_STATE();
    case 782:
      if (lookahead == 'e') ADVANCE(1305);
      END_STATE();
    case 783:
      if (lookahead == 'e') ADVANCE(1358);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(1359);
      END_STATE();
    case 785:
      if (lookahead == 'e') ADVANCE(1321);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(1240);
      END_STATE();
    case 787:
      if (lookahead == 'e') ADVANCE(1246);
      END_STATE();
    case 788:
      if (lookahead == 'e') ADVANCE(1199);
      END_STATE();
    case 789:
      if (lookahead == 'e') ADVANCE(1306);
      END_STATE();
    case 790:
      if (lookahead == 'e') ADVANCE(1283);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(1278);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(1322);
      END_STATE();
    case 794:
      if (lookahead == 'e') ADVANCE(1228);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(1230);
      END_STATE();
    case 796:
      if (lookahead == 'e') ADVANCE(1287);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(1296);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(1229);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(1292);
      END_STATE();
    case 800:
      if (lookahead == 'e') ADVANCE(1300);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 802:
      if (lookahead == 'e') ADVANCE(1288);
      END_STATE();
    case 803:
      if (lookahead == 'e') ADVANCE(1295);
      END_STATE();
    case 804:
      if (lookahead == 'e') ADVANCE(1226);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(1082);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(1068);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(998);
      END_STATE();
    case 811:
      if (lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 813:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 814:
      if (lookahead == 'e') ADVANCE(987);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(1013);
      END_STATE();
    case 816:
      if (lookahead == 'e') ADVANCE(1063);
      END_STATE();
    case 817:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 818:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 819:
      if (lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 820:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 821:
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == 'r') ADVANCE(899);
      END_STATE();
    case 822:
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == 'r') ADVANCE(918);
      END_STATE();
    case 823:
      if (lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 824:
      if (lookahead == 'e') ADVANCE(1094);
      END_STATE();
    case 825:
      if (lookahead == 'e') ADVANCE(1096);
      END_STATE();
    case 826:
      if (lookahead == 'e') ADVANCE(1098);
      END_STATE();
    case 827:
      if (lookahead == 'e') ADVANCE(1073);
      END_STATE();
    case 828:
      if (lookahead == 'e') ADVANCE(1107);
      END_STATE();
    case 829:
      if (lookahead == 'e') ADVANCE(1071);
      END_STATE();
    case 830:
      if (lookahead == 'e') ADVANCE(1100);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(1126);
      END_STATE();
    case 832:
      if (lookahead == 'e') ADVANCE(1066);
      END_STATE();
    case 833:
      if (lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 834:
      if (lookahead == 'e') ADVANCE(1097);
      END_STATE();
    case 835:
      if (lookahead == 'e') ADVANCE(1177);
      END_STATE();
    case 836:
      if (lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 837:
      if (lookahead == 'e') ADVANCE(1077);
      END_STATE();
    case 838:
      if (lookahead == 'e') ADVANCE(753);
      END_STATE();
    case 839:
      if (lookahead == 'e') ADVANCE(989);
      END_STATE();
    case 840:
      if (lookahead == 'e') ADVANCE(993);
      END_STATE();
    case 841:
      if (lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 842:
      if (lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 843:
      if (lookahead == 'e') ADVANCE(1182);
      if (lookahead == 'i') ADVANCE(968);
      if (lookahead == 'y') ADVANCE(1054);
      END_STATE();
    case 844:
      if (lookahead == 'e') ADVANCE(1179);
      END_STATE();
    case 845:
      if (lookahead == 'e') ADVANCE(1180);
      END_STATE();
    case 846:
      if (lookahead == 'e') ADVANCE(997);
      END_STATE();
    case 847:
      if (lookahead == 'e') ADVANCE(1181);
      END_STATE();
    case 848:
      if (lookahead == 'e') ADVANCE(1083);
      END_STATE();
    case 849:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 850:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 851:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 852:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 853:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 854:
      if (lookahead == 'f') ADVANCE(676);
      END_STATE();
    case 855:
      if (lookahead == 'f') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      END_STATE();
    case 856:
      if (lookahead == 'f') ADVANCE(858);
      END_STATE();
    case 857:
      if (lookahead == 'f') ADVANCE(1175);
      END_STATE();
    case 858:
      if (lookahead == 'f') ADVANCE(836);
      END_STATE();
    case 859:
      if (lookahead == 'f') ADVANCE(861);
      END_STATE();
    case 860:
      if (lookahead == 'f') ADVANCE(1029);
      END_STATE();
    case 861:
      if (lookahead == 'f') ADVANCE(1111);
      END_STATE();
    case 862:
      if (lookahead == 'f') ADVANCE(898);
      END_STATE();
    case 863:
      if (lookahead == 'f') ADVANCE(730);
      END_STATE();
    case 864:
      if (lookahead == 'f') ADVANCE(1112);
      END_STATE();
    case 865:
      if (lookahead == 'f') ADVANCE(864);
      END_STATE();
    case 866:
      if (lookahead == 'f') ADVANCE(1035);
      END_STATE();
    case 867:
      if (lookahead == 'f') ADVANCE(1086);
      if (lookahead == 'r') ADVANCE(1004);
      END_STATE();
    case 868:
      if (lookahead == 'f') ADVANCE(906);
      END_STATE();
    case 869:
      if (lookahead == 'f') ADVANCE(1036);
      END_STATE();
    case 870:
      if (lookahead == 'f') ADVANCE(908);
      if (lookahead == 's') ADVANCE(755);
      END_STATE();
    case 871:
      if (lookahead == 'g') ADVANCE(1291);
      END_STATE();
    case 872:
      if (lookahead == 'g') ADVANCE(713);
      END_STATE();
    case 873:
      if (lookahead == 'g') ADVANCE(1093);
      END_STATE();
    case 874:
      if (lookahead == 'h') ADVANCE(1239);
      END_STATE();
    case 875:
      if (lookahead == 'h') ADVANCE(1250);
      END_STATE();
    case 876:
      if (lookahead == 'h') ADVANCE(882);
      END_STATE();
    case 877:
      if (lookahead == 'h') ADVANCE(894);
      END_STATE();
    case 878:
      if (lookahead == 'i') ADVANCE(1196);
      END_STATE();
    case 879:
      if (lookahead == 'i') ADVANCE(1196);
      if (lookahead == 'p') ADVANCE(821);
      if (lookahead == 'u') ADVANCE(1040);
      END_STATE();
    case 880:
      if (lookahead == 'i') ADVANCE(1196);
      if (lookahead == 'p') ADVANCE(822);
      if (lookahead == 'u') ADVANCE(1040);
      END_STATE();
    case 881:
      if (lookahead == 'i') ADVANCE(1196);
      if (lookahead == 'p') ADVANCE(1090);
      END_STATE();
    case 882:
      if (lookahead == 'i') ADVANCE(1169);
      END_STATE();
    case 883:
      if (lookahead == 'i') ADVANCE(960);
      END_STATE();
    case 884:
      if (lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 885:
      if (lookahead == 'i') ADVANCE(1007);
      END_STATE();
    case 886:
      if (lookahead == 'i') ADVANCE(944);
      END_STATE();
    case 887:
      if (lookahead == 'i') ADVANCE(1149);
      END_STATE();
    case 888:
      if (lookahead == 'i') ADVANCE(1109);
      END_STATE();
    case 889:
      if (lookahead == 'i') ADVANCE(749);
      END_STATE();
    case 890:
      if (lookahead == 'i') ADVANCE(750);
      END_STATE();
    case 891:
      if (lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 892:
      if (lookahead == 'i') ADVANCE(765);
      END_STATE();
    case 893:
      if (lookahead == 'i') ADVANCE(1119);
      END_STATE();
    case 894:
      if (lookahead == 'i') ADVANCE(823);
      END_STATE();
    case 895:
      if (lookahead == 'i') ADVANCE(826);
      END_STATE();
    case 896:
      if (lookahead == 'i') ADVANCE(1197);
      END_STATE();
    case 897:
      if (lookahead == 'i') ADVANCE(1010);
      END_STATE();
    case 898:
      if (lookahead == 'i') ADVANCE(945);
      END_STATE();
    case 899:
      if (lookahead == 'i') ADVANCE(1142);
      END_STATE();
    case 900:
      if (lookahead == 'i') ADVANCE(1110);
      END_STATE();
    case 901:
      if (lookahead == 'i') ADVANCE(946);
      END_STATE();
    case 902:
      if (lookahead == 'i') ADVANCE(1020);
      END_STATE();
    case 903:
      if (lookahead == 'i') ADVANCE(1021);
      END_STATE();
    case 904:
      if (lookahead == 'i') ADVANCE(948);
      END_STATE();
    case 905:
      if (lookahead == 'i') ADVANCE(1023);
      END_STATE();
    case 906:
      if (lookahead == 'i') ADVANCE(949);
      END_STATE();
    case 907:
      if (lookahead == 'i') ADVANCE(1025);
      END_STATE();
    case 908:
      if (lookahead == 'i') ADVANCE(950);
      END_STATE();
    case 909:
      if (lookahead == 'i') ADVANCE(1026);
      END_STATE();
    case 910:
      if (lookahead == 'i') ADVANCE(1031);
      END_STATE();
    case 911:
      if (lookahead == 'i') ADVANCE(973);
      END_STATE();
    case 912:
      if (lookahead == 'i') ADVANCE(1117);
      END_STATE();
    case 913:
      if (lookahead == 'i') ADVANCE(1158);
      if (lookahead == 'o') ADVANCE(1061);
      END_STATE();
    case 914:
      if (lookahead == 'i') ADVANCE(1160);
      END_STATE();
    case 915:
      if (lookahead == 'i') ADVANCE(975);
      END_STATE();
    case 916:
      if (lookahead == 'i') ADVANCE(1159);
      if (lookahead == 'o') ADVANCE(1061);
      END_STATE();
    case 917:
      if (lookahead == 'i') ADVANCE(1161);
      END_STATE();
    case 918:
      if (lookahead == 'i') ADVANCE(1162);
      END_STATE();
    case 919:
      if (lookahead == 'i') ADVANCE(1163);
      END_STATE();
    case 920:
      if (lookahead == 'j') ADVANCE(841);
      END_STATE();
    case 921:
      if (lookahead == 'k') ADVANCE(1311);
      END_STATE();
    case 922:
      if (lookahead == 'k') ADVANCE(1313);
      END_STATE();
    case 923:
      if (lookahead == 'k') ADVANCE(1310);
      END_STATE();
    case 924:
      if (lookahead == 'k') ADVANCE(812);
      END_STATE();
    case 925:
      if (lookahead == 'k') ADVANCE(1104);
      END_STATE();
    case 926:
      if (lookahead == 'k') ADVANCE(868);
      END_STATE();
    case 927:
      if (lookahead == 'l') ADVANCE(931);
      END_STATE();
    case 928:
      if (lookahead == 'l') ADVANCE(931);
      if (lookahead == 'n') ADVANCE(883);
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 929:
      if (lookahead == 'l') ADVANCE(931);
      if (lookahead == 'n') ADVANCE(911);
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 930:
      if (lookahead == 'l') ADVANCE(931);
      if (lookahead == 'n') ADVANCE(915);
      END_STATE();
    case 931:
      if (lookahead == 'l') ADVANCE(1173);
      END_STATE();
    case 932:
      if (lookahead == 'l') ADVANCE(1009);
      END_STATE();
    case 933:
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'r') ADVANCE(991);
      END_STATE();
    case 934:
      if (lookahead == 'l') ADVANCE(692);
      END_STATE();
    case 935:
      if (lookahead == 'l') ADVANCE(934);
      END_STATE();
    case 936:
      if (lookahead == 'l') ADVANCE(934);
      if (lookahead == 'r') ADVANCE(1113);
      END_STATE();
    case 937:
      if (lookahead == 'l') ADVANCE(1108);
      END_STATE();
    case 938:
      if (lookahead == 'l') ADVANCE(1011);
      END_STATE();
    case 939:
      if (lookahead == 'l') ADVANCE(728);
      END_STATE();
    case 940:
      if (lookahead == 'l') ADVANCE(712);
      END_STATE();
    case 941:
      if (lookahead == 'l') ADVANCE(776);
      END_STATE();
    case 942:
      if (lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 943:
      if (lookahead == 'l') ADVANCE(1022);
      END_STATE();
    case 944:
      if (lookahead == 'l') ADVANCE(790);
      END_STATE();
    case 945:
      if (lookahead == 'l') ADVANCE(820);
      END_STATE();
    case 946:
      if (lookahead == 'l') ADVANCE(792);
      END_STATE();
    case 947:
      if (lookahead == 'l') ADVANCE(839);
      END_STATE();
    case 948:
      if (lookahead == 'l') ADVANCE(807);
      END_STATE();
    case 949:
      if (lookahead == 'l') ADVANCE(796);
      END_STATE();
    case 950:
      if (lookahead == 'l') ADVANCE(802);
      END_STATE();
    case 951:
      if (lookahead == 'l') ADVANCE(803);
      END_STATE();
    case 952:
      if (lookahead == 'l') ADVANCE(716);
      END_STATE();
    case 953:
      if (lookahead == 'l') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(933);
      if (lookahead == 'u') ADVANCE(1067);
      END_STATE();
    case 954:
      if (lookahead == 'l') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(932);
      if (lookahead == 'u') ADVANCE(1067);
      END_STATE();
    case 955:
      if (lookahead == 'l') ADVANCE(893);
      END_STATE();
    case 956:
      if (lookahead == 'l') ADVANCE(890);
      if (lookahead == 'o') ADVANCE(932);
      if (lookahead == 'u') ADVANCE(935);
      END_STATE();
    case 957:
      if (lookahead == 'l') ADVANCE(1019);
      END_STATE();
    case 958:
      if (lookahead == 'l') ADVANCE(1034);
      END_STATE();
    case 959:
      if (lookahead == 'm') ADVANCE(1015);
      if (lookahead == 'p') ADVANCE(952);
      END_STATE();
    case 960:
      if (lookahead == 'm') ADVANCE(718);
      END_STATE();
    case 961:
      if (lookahead == 'm') ADVANCE(714);
      END_STATE();
    case 962:
      if (lookahead == 'm') ADVANCE(781);
      END_STATE();
    case 963:
      if (lookahead == 'm') ADVANCE(717);
      END_STATE();
    case 964:
      if (lookahead == 'm') ADVANCE(1033);
      END_STATE();
    case 965:
      if (lookahead == 'm') ADVANCE(824);
      END_STATE();
    case 966:
      if (lookahead == 'm') ADVANCE(828);
      END_STATE();
    case 967:
      if (lookahead == 'm') ADVANCE(830);
      END_STATE();
    case 968:
      if (lookahead == 'm') ADVANCE(799);
      END_STATE();
    case 969:
      if (lookahead == 'm') ADVANCE(971);
      END_STATE();
    case 970:
      if (lookahead == 'm') ADVANCE(722);
      END_STATE();
    case 971:
      if (lookahead == 'm') ADVANCE(1026);
      END_STATE();
    case 972:
      if (lookahead == 'm') ADVANCE(736);
      END_STATE();
    case 973:
      if (lookahead == 'm') ADVANCE(735);
      END_STATE();
    case 974:
      if (lookahead == 'm') ADVANCE(738);
      END_STATE();
    case 975:
      if (lookahead == 'm') ADVANCE(737);
      END_STATE();
    case 976:
      if (lookahead == 'n') ADVANCE(1244);
      END_STATE();
    case 977:
      if (lookahead == 'n') ADVANCE(1319);
      END_STATE();
    case 978:
      if (lookahead == 'n') ADVANCE(1286);
      END_STATE();
    case 979:
      if (lookahead == 'n') ADVANCE(1290);
      END_STATE();
    case 980:
      if (lookahead == 'n') ADVANCE(1248);
      END_STATE();
    case 981:
      if (lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 982:
      if (lookahead == 'n') ADVANCE(1285);
      END_STATE();
    case 983:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 984:
      if (lookahead == 'n') ADVANCE(1139);
      END_STATE();
    case 985:
      if (lookahead == 'n') ADVANCE(871);
      END_STATE();
    case 986:
      if (lookahead == 'n') ADVANCE(1120);
      if (lookahead == 'r') ADVANCE(970);
      END_STATE();
    case 987:
      if (lookahead == 'n') ADVANCE(761);
      END_STATE();
    case 988:
      if (lookahead == 'n') ADVANCE(764);
      END_STATE();
    case 989:
      if (lookahead == 'n') ADVANCE(768);
      END_STATE();
    case 990:
      if (lookahead == 'n') ADVANCE(1115);
      END_STATE();
    case 991:
      if (lookahead == 'n') ADVANCE(837);
      END_STATE();
    case 992:
      if (lookahead == 'n') ADVANCE(1125);
      END_STATE();
    case 993:
      if (lookahead == 'n') ADVANCE(1128);
      END_STATE();
    case 994:
      if (lookahead == 'n') ADVANCE(1143);
      END_STATE();
    case 995:
      if (lookahead == 'n') ADVANCE(1102);
      END_STATE();
    case 996:
      if (lookahead == 'n') ADVANCE(1133);
      END_STATE();
    case 997:
      if (lookahead == 'n') ADVANCE(1144);
      END_STATE();
    case 998:
      if (lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 999:
      if (lookahead == 'n') ADVANCE(759);
      END_STATE();
    case 1000:
      if (lookahead == 'n') ADVANCE(1147);
      END_STATE();
    case 1001:
      if (lookahead == 'o') ADVANCE(986);
      END_STATE();
    case 1002:
      if (lookahead == 'o') ADVANCE(1361);
      END_STATE();
    case 1003:
      if (lookahead == 'o') ADVANCE(1103);
      END_STATE();
    case 1004:
      if (lookahead == 'o') ADVANCE(1174);
      END_STATE();
    case 1005:
      if (lookahead == 'o') ADVANCE(1164);
      END_STATE();
    case 1006:
      if (lookahead == 'o') ADVANCE(1172);
      END_STATE();
    case 1007:
      if (lookahead == 'o') ADVANCE(976);
      END_STATE();
    case 1008:
      if (lookahead == 'o') ADVANCE(969);
      END_STATE();
    case 1009:
      if (lookahead == 'o') ADVANCE(1062);
      END_STATE();
    case 1010:
      if (lookahead == 'o') ADVANCE(977);
      END_STATE();
    case 1011:
      if (lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 1012:
      if (lookahead == 'o') ADVANCE(1065);
      END_STATE();
    case 1013:
      if (lookahead == 'o') ADVANCE(978);
      END_STATE();
    case 1014:
      if (lookahead == 'o') ADVANCE(957);
      END_STATE();
    case 1015:
      if (lookahead == 'o') ADVANCE(1141);
      END_STATE();
    case 1016:
      if (lookahead == 'o') ADVANCE(1045);
      END_STATE();
    case 1017:
      if (lookahead == 'o') ADVANCE(1084);
      END_STATE();
    case 1018:
      if (lookahead == 'o') ADVANCE(1016);
      END_STATE();
    case 1019:
      if (lookahead == 'o') ADVANCE(1064);
      END_STATE();
    case 1020:
      if (lookahead == 'o') ADVANCE(979);
      END_STATE();
    case 1021:
      if (lookahead == 'o') ADVANCE(980);
      END_STATE();
    case 1022:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 1023:
      if (lookahead == 'o') ADVANCE(981);
      END_STATE();
    case 1024:
      if (lookahead == 'o') ADVANCE(1151);
      END_STATE();
    case 1025:
      if (lookahead == 'o') ADVANCE(982);
      END_STATE();
    case 1026:
      if (lookahead == 'o') ADVANCE(983);
      END_STATE();
    case 1027:
      if (lookahead == 'o') ADVANCE(1069);
      END_STATE();
    case 1028:
      if (lookahead == 'o') ADVANCE(859);
      END_STATE();
    case 1029:
      if (lookahead == 'o') ADVANCE(992);
      END_STATE();
    case 1030:
      if (lookahead == 'o') ADVANCE(932);
      if (lookahead == 'u') ADVANCE(935);
      END_STATE();
    case 1031:
      if (lookahead == 'o') ADVANCE(995);
      END_STATE();
    case 1032:
      if (lookahead == 'o') ADVANCE(756);
      END_STATE();
    case 1033:
      if (lookahead == 'o') ADVANCE(773);
      END_STATE();
    case 1034:
      if (lookahead == 'o') ADVANCE(1076);
      END_STATE();
    case 1035:
      if (lookahead == 'o') ADVANCE(994);
      END_STATE();
    case 1036:
      if (lookahead == 'o') ADVANCE(996);
      END_STATE();
    case 1037:
      if (lookahead == 'o') ADVANCE(1085);
      END_STATE();
    case 1038:
      if (lookahead == 'o') ADVANCE(958);
      END_STATE();
    case 1039:
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 1040:
      if (lookahead == 'p') ADVANCE(1056);
      END_STATE();
    case 1041:
      if (lookahead == 'p') ADVANCE(860);
      END_STATE();
    case 1042:
      if (lookahead == 'p') ADVANCE(810);
      END_STATE();
    case 1043:
      if (lookahead == 'p') ADVANCE(1088);
      END_STATE();
    case 1044:
      if (lookahead == 'p') ADVANCE(727);
      END_STATE();
    case 1045:
      if (lookahead == 'p') ADVANCE(891);
      END_STATE();
    case 1046:
      if (lookahead == 'p') ADVANCE(732);
      END_STATE();
    case 1047:
      if (lookahead == 'p') ADVANCE(825);
      END_STATE();
    case 1048:
      if (lookahead == 'p') ADVANCE(791);
      END_STATE();
    case 1049:
      if (lookahead == 'p') ADVANCE(794);
      END_STATE();
    case 1050:
      if (lookahead == 'p') ADVANCE(795);
      END_STATE();
    case 1051:
      if (lookahead == 'p') ADVANCE(827);
      END_STATE();
    case 1052:
      if (lookahead == 'p') ADVANCE(798);
      END_STATE();
    case 1053:
      if (lookahead == 'p') ADVANCE(834);
      END_STATE();
    case 1054:
      if (lookahead == 'p') ADVANCE(800);
      END_STATE();
    case 1055:
      if (lookahead == 'p') ADVANCE(804);
      END_STATE();
    case 1056:
      if (lookahead == 'p') ADVANCE(1017);
      END_STATE();
    case 1057:
      if (lookahead == 'p') ADVANCE(1146);
      END_STATE();
    case 1058:
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 1059:
      if (lookahead == 'p') ADVANCE(869);
      END_STATE();
    case 1060:
      if (lookahead == 'p') ADVANCE(1089);
      END_STATE();
    case 1061:
      if (lookahead == 'r') ADVANCE(771);
      END_STATE();
    case 1062:
      if (lookahead == 'r') ADVANCE(1317);
      END_STATE();
    case 1063:
      if (lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 1064:
      if (lookahead == 'r') ADVANCE(1338);
      END_STATE();
    case 1065:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 1066:
      if (lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 1067:
      if (lookahead == 'r') ADVANCE(1113);
      END_STATE();
    case 1068:
      if (lookahead == 'r') ADVANCE(939);
      END_STATE();
    case 1069:
      if (lookahead == 'r') ADVANCE(1184);
      END_STATE();
    case 1070:
      if (lookahead == 'r') ADVANCE(726);
      END_STATE();
    case 1071:
      if (lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 1072:
      if (lookahead == 'r') ADVANCE(719);
      END_STATE();
    case 1073:
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 1074:
      if (lookahead == 'r') ADVANCE(1006);
      END_STATE();
    case 1075:
      if (lookahead == 'r') ADVANCE(785);
      END_STATE();
    case 1076:
      if (lookahead == 'r') ADVANCE(1101);
      END_STATE();
    case 1077:
      if (lookahead == 'r') ADVANCE(817);
      END_STATE();
    case 1078:
      if (lookahead == 'r') ADVANCE(787);
      END_STATE();
    case 1079:
      if (lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 1080:
      if (lookahead == 'r') ADVANCE(840);
      END_STATE();
    case 1081:
      if (lookahead == 'r') ADVANCE(801);
      END_STATE();
    case 1082:
      if (lookahead == 'r') ADVANCE(1106);
      END_STATE();
    case 1083:
      if (lookahead == 'r') ADVANCE(1116);
      END_STATE();
    case 1084:
      if (lookahead == 'r') ADVANCE(1145);
      END_STATE();
    case 1085:
      if (lookahead == 'r') ADVANCE(774);
      END_STATE();
    case 1086:
      if (lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 1087:
      if (lookahead == 'r') ADVANCE(731);
      END_STATE();
    case 1088:
      if (lookahead == 'r') ADVANCE(914);
      END_STATE();
    case 1089:
      if (lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 1090:
      if (lookahead == 'r') ADVANCE(919);
      END_STATE();
    case 1091:
      if (lookahead == 's') ADVANCE(924);
      END_STATE();
    case 1092:
      if (lookahead == 's') ADVANCE(1360);
      END_STATE();
    case 1093:
      if (lookahead == 's') ADVANCE(1252);
      END_STATE();
    case 1094:
      if (lookahead == 's') ADVANCE(1280);
      END_STATE();
    case 1095:
      if (lookahead == 's') ADVANCE(1225);
      END_STATE();
    case 1096:
      if (lookahead == 's') ADVANCE(1224);
      END_STATE();
    case 1097:
      if (lookahead == 's') ADVANCE(1221);
      END_STATE();
    case 1098:
      if (lookahead == 's') ADVANCE(1275);
      END_STATE();
    case 1099:
      if (lookahead == 's') ADVANCE(1282);
      END_STATE();
    case 1100:
      if (lookahead == 's') ADVANCE(1304);
      END_STATE();
    case 1101:
      if (lookahead == 's') ADVANCE(1232);
      END_STATE();
    case 1102:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 1103:
      if (lookahead == 's') ADVANCE(887);
      END_STATE();
    case 1104:
      if (lookahead == 's') ADVANCE(1005);
      END_STATE();
    case 1105:
      if (lookahead == 's') ADVANCE(926);
      END_STATE();
    case 1106:
      if (lookahead == 's') ADVANCE(885);
      END_STATE();
    case 1107:
      if (lookahead == 's') ADVANCE(701);
      END_STATE();
    case 1108:
      if (lookahead == 's') ADVANCE(784);
      END_STATE();
    case 1109:
      if (lookahead == 's') ADVANCE(1150);
      END_STATE();
    case 1110:
      if (lookahead == 's') ADVANCE(1153);
      END_STATE();
    case 1111:
      if (lookahead == 's') ADVANCE(831);
      END_STATE();
    case 1112:
      if (lookahead == 's') ADVANCE(833);
      END_STATE();
    case 1113:
      if (lookahead == 's') ADVANCE(1012);
      END_STATE();
    case 1114:
      if (lookahead == 's') ADVANCE(1140);
      END_STATE();
    case 1115:
      if (lookahead == 's') ADVANCE(1046);
      END_STATE();
    case 1116:
      if (lookahead == 's') ADVANCE(903);
      END_STATE();
    case 1117:
      if (lookahead == 's') ADVANCE(910);
      END_STATE();
    case 1118:
      if (lookahead == 's') ADVANCE(1117);
      END_STATE();
    case 1119:
      if (lookahead == 's') ADVANCE(739);
      END_STATE();
    case 1120:
      if (lookahead == 't') ADVANCE(1318);
      END_STATE();
    case 1121:
      if (lookahead == 't') ADVANCE(1315);
      END_STATE();
    case 1122:
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 1123:
      if (lookahead == 't') ADVANCE(1320);
      END_STATE();
    case 1124:
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 1125:
      if (lookahead == 't') ADVANCE(1234);
      END_STATE();
    case 1126:
      if (lookahead == 't') ADVANCE(1277);
      END_STATE();
    case 1127:
      if (lookahead == 't') ADVANCE(1231);
      END_STATE();
    case 1128:
      if (lookahead == 't') ADVANCE(1307);
      END_STATE();
    case 1129:
      if (lookahead == 't') ADVANCE(1294);
      END_STATE();
    case 1130:
      if (lookahead == 't') ADVANCE(742);
      END_STATE();
    case 1131:
      if (lookahead == 't') ADVANCE(1314);
      END_STATE();
    case 1132:
      if (lookahead == 't') ADVANCE(678);
      END_STATE();
    case 1133:
      if (lookahead == 't') ADVANCE(1233);
      END_STATE();
    case 1134:
      if (lookahead == 't') ADVANCE(1316);
      END_STATE();
    case 1135:
      if (lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 1136:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 1137:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 1138:
      if (lookahead == 't') ADVANCE(875);
      END_STATE();
    case 1139:
      if (lookahead == 't') ADVANCE(1075);
      END_STATE();
    case 1140:
      if (lookahead == 't') ADVANCE(1072);
      END_STATE();
    case 1141:
      if (lookahead == 't') ADVANCE(813);
      END_STATE();
    case 1142:
      if (lookahead == 't') ADVANCE(849);
      END_STATE();
    case 1143:
      if (lookahead == 't') ADVANCE(1095);
      END_STATE();
    case 1144:
      if (lookahead == 't') ADVANCE(1102);
      END_STATE();
    case 1145:
      if (lookahead == 't') ADVANCE(819);
      END_STATE();
    case 1146:
      if (lookahead == 't') ADVANCE(835);
      END_STATE();
    case 1147:
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 1148:
      if (lookahead == 't') ADVANCE(961);
      END_STATE();
    case 1149:
      if (lookahead == 't') ADVANCE(897);
      END_STATE();
    case 1150:
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 1151:
      if (lookahead == 't') ADVANCE(734);
      END_STATE();
    case 1152:
      if (lookahead == 't') ADVANCE(902);
      END_STATE();
    case 1153:
      if (lookahead == 't') ADVANCE(1027);
      END_STATE();
    case 1154:
      if (lookahead == 't') ADVANCE(1167);
      END_STATE();
    case 1155:
      if (lookahead == 't') ADVANCE(905);
      END_STATE();
    case 1156:
      if (lookahead == 't') ADVANCE(907);
      END_STATE();
    case 1157:
      if (lookahead == 't') ADVANCE(909);
      END_STATE();
    case 1158:
      if (lookahead == 't') ADVANCE(972);
      END_STATE();
    case 1159:
      if (lookahead == 't') ADVANCE(974);
      END_STATE();
    case 1160:
      if (lookahead == 't') ADVANCE(850);
      END_STATE();
    case 1161:
      if (lookahead == 't') ADVANCE(851);
      END_STATE();
    case 1162:
      if (lookahead == 't') ADVANCE(852);
      END_STATE();
    case 1163:
      if (lookahead == 't') ADVANCE(853);
      END_STATE();
    case 1164:
      if (lookahead == 'u') ADVANCE(988);
      END_STATE();
    case 1165:
      if (lookahead == 'u') ADVANCE(783);
      END_STATE();
    case 1166:
      if (lookahead == 'u') ADVANCE(1078);
      END_STATE();
    case 1167:
      if (lookahead == 'u') ADVANCE(1081);
      END_STATE();
    case 1168:
      if (lookahead == 'v') ADVANCE(809);
      END_STATE();
    case 1169:
      if (lookahead == 'v') ADVANCE(786);
      END_STATE();
    case 1170:
      if (lookahead == 'v') ADVANCE(848);
      END_STATE();
    case 1171:
      if (lookahead == 'v') ADVANCE(846);
      END_STATE();
    case 1172:
      if (lookahead == 'w') ADVANCE(1281);
      END_STATE();
    case 1173:
      if (lookahead == 'w') ADVANCE(705);
      END_STATE();
    case 1174:
      if (lookahead == 'w') ADVANCE(1099);
      END_STATE();
    case 1175:
      if (lookahead == 'x') ADVANCE(351);
      END_STATE();
    case 1176:
      if (lookahead == 'x') ADVANCE(1121);
      END_STATE();
    case 1177:
      if (lookahead == 'x') ADVANCE(1127);
      END_STATE();
    case 1178:
      if (lookahead == 'x') ADVANCE(1130);
      END_STATE();
    case 1179:
      if (lookahead == 'x') ADVANCE(1131);
      END_STATE();
    case 1180:
      if (lookahead == 'x') ADVANCE(1132);
      END_STATE();
    case 1181:
      if (lookahead == 'x') ADVANCE(1134);
      END_STATE();
    case 1182:
      if (lookahead == 'x') ADVANCE(1154);
      END_STATE();
    case 1183:
      if (lookahead == 'y') ADVANCE(1293);
      END_STATE();
    case 1184:
      if (lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 1185:
      if (lookahead == 'y') ADVANCE(700);
      END_STATE();
    case 1186:
      if (lookahead == 'y') ADVANCE(691);
      END_STATE();
    case 1187:
      if (lookahead == 'y') ADVANCE(1114);
      END_STATE();
    case 1188:
      if (lookahead == 'y') ADVANCE(1047);
      END_STATE();
    case 1189:
      if (lookahead == 'y') ADVANCE(696);
      END_STATE();
    case 1190:
      if (lookahead == 'y') ADVANCE(1048);
      END_STATE();
    case 1191:
      if (lookahead == 'y') ADVANCE(1049);
      END_STATE();
    case 1192:
      if (lookahead == 'y') ADVANCE(1050);
      END_STATE();
    case 1193:
      if (lookahead == 'y') ADVANCE(1052);
      END_STATE();
    case 1194:
      if (lookahead == 'y') ADVANCE(1053);
      END_STATE();
    case 1195:
      if (lookahead == 'y') ADVANCE(1055);
      END_STATE();
    case 1196:
      if (lookahead == 'z') ADVANCE(782);
      END_STATE();
    case 1197:
      if (lookahead == 'z') ADVANCE(789);
      END_STATE();
    case 1198:
      if (lookahead == 'z') ADVANCE(1189);
      END_STATE();
    case 1199:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(901);
      END_STATE();
    case 1200:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1344);
      END_STATE();
    case 1201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1345);
      END_STATE();
    case 1202:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1346);
      END_STATE();
    case 1203:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1347);
      END_STATE();
    case 1204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1348);
      END_STATE();
    case 1205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 1206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      END_STATE();
    case 1207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1357);
      END_STATE();
    case 1208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1356);
      END_STATE();
    case 1209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1355);
      END_STATE();
    case 1210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1208);
      END_STATE();
    case 1211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1209);
      END_STATE();
    case 1212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1210);
      END_STATE();
    case 1213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1211);
      END_STATE();
    case 1214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1212);
      END_STATE();
    case 1215:
      if (eof) ADVANCE(1220);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 1216:
      if (eof) ADVANCE(1220);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(1215)
      END_STATE();
    case 1217:
      if (eof) ADVANCE(1220);
      if (lookahead == '\n') SKIP(1219)
      END_STATE();
    case 1218:
      if (eof) ADVANCE(1220);
      if (lookahead == '\n') SKIP(1219)
      if (lookahead == '\r') SKIP(1217)
      END_STATE();
    case 1219:
      if (eof) ADVANCE(1220);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(1363);
      if (lookahead == '-') ADVANCE(1202);
      if (lookahead == '=') ADVANCE(1339);
      if (lookahead == '\\') SKIP(1218)
      if (lookahead == 'a') ADVANCE(929);
      if (lookahead == 'b') ADVANCE(913);
      if (lookahead == 'c') ADVANCE(954);
      if (lookahead == 'd') ADVANCE(778);
      if (lookahead == 'e') ADVANCE(856);
      if (lookahead == 'l') ADVANCE(779);
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(740);
      if (lookahead == 'p') ADVANCE(708);
      if (lookahead == 'r') ADVANCE(780);
      if (lookahead == 's') ADVANCE(880);
      if (lookahead == 't') ADVANCE(711);
      if (lookahead == 'v') ADVANCE(805);
      if (lookahead == 'x') ADVANCE(1236);
      if (lookahead == 'y') ADVANCE(1237);
      if (lookahead == '}') ADVANCE(1223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1219)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1346);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_objectTypes);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_bitmapfonts);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(1221);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_textSpriteType);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_corneredTileSpriteType);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_maskedShieldType);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_animatedmaptext);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_textcolors);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_bitmapfont);
      if (lookahead == 's') ADVANCE(1225);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym__statement_gfx_name_token1);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1278);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token2);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == 'b') ADVANCE(947);
      if (lookahead == 'd') ADVANCE(842);
      if (lookahead == 'f') ADVANCE(1087);
      if (lookahead == 'l') ADVANCE(1018);
      if (lookahead == 'm') ADVANCE(725);
      if (lookahead == 'r') ADVANCE(1024);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(865);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_borderSize);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_allwaystransparent);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_legacy_lazy_load);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_clicksound);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == 's') ADVANCE(1005);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_speed);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_textblock);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'S') ADVANCE(1043);
      if (lookahead == 'b') ADVANCE(938);
      if (lookahead == 'u') ADVANCE(1079);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'u') ADVANCE(1079);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_centre);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_cull_distance);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym__statement_gfx_cull_distance_token1);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'i') ADVANCE(1148);
      if (lookahead == 'o') ADVANCE(1061);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_border_color);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1201);
      if (lookahead == '5') ADVANCE(1343);
      if (lookahead == 'f') ADVANCE(1341);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1344);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1201);
      if (lookahead == 'f') ADVANCE(1341);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1344);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1201);
      if (lookahead == 'f') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1344);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1345);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1346);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1347);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1348);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1349);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead == '5') ADVANCE(1352);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1353);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1350);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1350);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1353);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_hexadecimal);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1213);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'O') ADVANCE(854);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1363);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1219},
  [2] = {.lex_state = 1219},
  [3] = {.lex_state = 1219},
  [4] = {.lex_state = 1219},
  [5] = {.lex_state = 1219},
  [6] = {.lex_state = 1219},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1219},
  [10] = {.lex_state = 1219},
  [11] = {.lex_state = 1219},
  [12] = {.lex_state = 1219},
  [13] = {.lex_state = 426},
  [14] = {.lex_state = 1219},
  [15] = {.lex_state = 426},
  [16] = {.lex_state = 427},
  [17] = {.lex_state = 426},
  [18] = {.lex_state = 1219},
  [19] = {.lex_state = 1219},
  [20] = {.lex_state = 427},
  [21] = {.lex_state = 427},
  [22] = {.lex_state = 1219},
  [23] = {.lex_state = 1219},
  [24] = {.lex_state = 426},
  [25] = {.lex_state = 429},
  [26] = {.lex_state = 426},
  [27] = {.lex_state = 426},
  [28] = {.lex_state = 1219},
  [29] = {.lex_state = 427},
  [30] = {.lex_state = 427},
  [31] = {.lex_state = 426},
  [32] = {.lex_state = 1219},
  [33] = {.lex_state = 427},
  [34] = {.lex_state = 427},
  [35] = {.lex_state = 429},
  [36] = {.lex_state = 1219},
  [37] = {.lex_state = 427},
  [38] = {.lex_state = 1219},
  [39] = {.lex_state = 1219},
  [40] = {.lex_state = 427},
  [41] = {.lex_state = 427},
  [42] = {.lex_state = 1219},
  [43] = {.lex_state = 1219},
  [44] = {.lex_state = 1219},
  [45] = {.lex_state = 1219},
  [46] = {.lex_state = 1219},
  [47] = {.lex_state = 1219},
  [48] = {.lex_state = 426},
  [49] = {.lex_state = 1219},
  [50] = {.lex_state = 1219},
  [51] = {.lex_state = 1219},
  [52] = {.lex_state = 1219},
  [53] = {.lex_state = 1219},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1219},
  [56] = {.lex_state = 1219},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 427},
  [59] = {.lex_state = 1219},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1219},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1219},
  [66] = {.lex_state = 1219},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 427},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1219},
  [83] = {.lex_state = 427},
  [84] = {.lex_state = 1219},
  [85] = {.lex_state = 1219},
  [86] = {.lex_state = 426},
  [87] = {.lex_state = 427},
  [88] = {.lex_state = 427},
  [89] = {.lex_state = 426},
  [90] = {.lex_state = 426},
  [91] = {.lex_state = 1219},
  [92] = {.lex_state = 1219},
  [93] = {.lex_state = 1219},
  [94] = {.lex_state = 426},
  [95] = {.lex_state = 426},
  [96] = {.lex_state = 426},
  [97] = {.lex_state = 427},
  [98] = {.lex_state = 427},
  [99] = {.lex_state = 427},
  [100] = {.lex_state = 427},
  [101] = {.lex_state = 427},
  [102] = {.lex_state = 1219},
  [103] = {.lex_state = 426},
  [104] = {.lex_state = 426},
  [105] = {.lex_state = 426},
  [106] = {.lex_state = 1219},
  [107] = {.lex_state = 426},
  [108] = {.lex_state = 1219},
  [109] = {.lex_state = 427},
  [110] = {.lex_state = 426},
  [111] = {.lex_state = 1219},
  [112] = {.lex_state = 427},
  [113] = {.lex_state = 1219},
  [114] = {.lex_state = 427},
  [115] = {.lex_state = 426},
  [116] = {.lex_state = 1219},
  [117] = {.lex_state = 1219},
  [118] = {.lex_state = 427},
  [119] = {.lex_state = 427},
  [120] = {.lex_state = 1219},
  [121] = {.lex_state = 427},
  [122] = {.lex_state = 1219},
  [123] = {.lex_state = 1219},
  [124] = {.lex_state = 1219},
  [125] = {.lex_state = 427},
  [126] = {.lex_state = 1219},
  [127] = {.lex_state = 1219},
  [128] = {.lex_state = 1219},
  [129] = {.lex_state = 427},
  [130] = {.lex_state = 427},
  [131] = {.lex_state = 1219},
  [132] = {.lex_state = 427},
  [133] = {.lex_state = 427},
  [134] = {.lex_state = 1219},
  [135] = {.lex_state = 427},
  [136] = {.lex_state = 427},
  [137] = {.lex_state = 427},
  [138] = {.lex_state = 427},
  [139] = {.lex_state = 427},
  [140] = {.lex_state = 1219},
  [141] = {.lex_state = 427},
  [142] = {.lex_state = 427},
  [143] = {.lex_state = 427},
  [144] = {.lex_state = 427},
  [145] = {.lex_state = 427},
  [146] = {.lex_state = 427},
  [147] = {.lex_state = 1219},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1219},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 1219},
  [152] = {.lex_state = 1219},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1219},
  [155] = {.lex_state = 1219},
  [156] = {.lex_state = 1219},
  [157] = {.lex_state = 1219},
  [158] = {.lex_state = 1219},
  [159] = {.lex_state = 1219},
  [160] = {.lex_state = 1219},
  [161] = {.lex_state = 1219},
  [162] = {.lex_state = 426},
  [163] = {.lex_state = 426},
  [164] = {.lex_state = 1219},
  [165] = {.lex_state = 1219},
  [166] = {.lex_state = 1219},
  [167] = {.lex_state = 1219},
  [168] = {.lex_state = 1219},
  [169] = {.lex_state = 1219},
  [170] = {.lex_state = 1219},
  [171] = {.lex_state = 1219},
  [172] = {.lex_state = 426},
  [173] = {.lex_state = 427},
  [174] = {.lex_state = 1219},
  [175] = {.lex_state = 1219},
  [176] = {.lex_state = 426},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 427},
  [179] = {.lex_state = 426},
  [180] = {.lex_state = 426},
  [181] = {.lex_state = 1219},
  [182] = {.lex_state = 427},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 427},
  [185] = {.lex_state = 426},
  [186] = {.lex_state = 1219},
  [187] = {.lex_state = 426},
  [188] = {.lex_state = 426},
  [189] = {.lex_state = 1219},
  [190] = {.lex_state = 1219},
  [191] = {.lex_state = 426},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 1219},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1219},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 1219},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 426},
  [207] = {.lex_state = 1219},
  [208] = {.lex_state = 1219},
  [209] = {.lex_state = 1219},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1219},
  [213] = {.lex_state = 427},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 1219},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 1219},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 429},
  [222] = {.lex_state = 1219},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 426},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 426},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 426},
  [230] = {.lex_state = 427},
  [231] = {.lex_state = 1219},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 429},
  [234] = {.lex_state = 426},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 426},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 429},
  [240] = {.lex_state = 429},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 430},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 1219},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 1219},
  [247] = {.lex_state = 1219},
  [248] = {.lex_state = 429},
  [249] = {.lex_state = 1219},
  [250] = {.lex_state = 426},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 1219},
  [254] = {.lex_state = 431},
  [255] = {.lex_state = 427},
  [256] = {.lex_state = 426},
  [257] = {.lex_state = 427},
  [258] = {.lex_state = 430},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 430},
  [278] = {.lex_state = 427},
  [279] = {.lex_state = 427},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
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
    [sym_file] = STATE(273),
    [sym_dot_mod] = STATE(271),
    [sym_dot_gfx] = STATE(271),
    [sym__spriteTypes] = STATE(113),
    [sym__objectTypes] = STATE(113),
    [sym__bitmapfonts] = STATE(113),
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
    [aux_sym_dot_gfx_repeat1] = STATE(113),
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
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_assign_equal,
    ACTIONS(31), 26,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_textcolors,
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
      anon_sym_cursor_offset,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
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
  [35] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 26,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_textcolors,
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
      anon_sym_cursor_offset,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
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
  [67] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
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
  [102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(44), 22,
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
  [137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(5), 2,
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
  [172] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_name,
    ACTIONS(55), 1,
      anon_sym_path,
    ACTIONS(58), 1,
      anon_sym_archive,
    ACTIONS(61), 1,
      anon_sym_remote_file_id,
    ACTIONS(64), 1,
      anon_sym_version,
    ACTIONS(67), 1,
      anon_sym_picture,
    ACTIONS(70), 1,
      anon_sym_supported_version,
    ACTIONS(73), 1,
      anon_sym_replace_path,
    ACTIONS(76), 1,
      anon_sym_tags,
    ACTIONS(79), 1,
      anon_sym_dependencies,
    STATE(7), 11,
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
  [222] = 13,
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
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(7), 11,
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
  [272] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      anon_sym_animationrotation,
    ACTIONS(90), 1,
      anon_sym_animationlooping,
    ACTIONS(96), 1,
      anon_sym_animationblendmode,
    ACTIONS(98), 1,
      anon_sym_animationtype,
    ACTIONS(100), 1,
      anon_sym_animationframes,
    ACTIONS(86), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(92), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(94), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(10), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy_float,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [317] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_animationrotation,
    ACTIONS(90), 1,
      anon_sym_animationlooping,
    ACTIONS(96), 1,
      anon_sym_animationblendmode,
    ACTIONS(98), 1,
      anon_sym_animationtype,
    ACTIONS(100), 1,
      anon_sym_animationframes,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(92), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(94), 2,
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
  [362] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      anon_sym_animationrotation,
    ACTIONS(112), 1,
      anon_sym_animationlooping,
    ACTIONS(121), 1,
      anon_sym_animationblendmode,
    ACTIONS(124), 1,
      anon_sym_animationtype,
    ACTIONS(127), 1,
      anon_sym_animationframes,
    ACTIONS(106), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(115), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(118), 2,
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
  [407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_assign_equal,
    ACTIONS(130), 16,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_textcolors,
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
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [432] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      anon_sym_size,
    ACTIONS(139), 1,
      anon_sym_text,
    ACTIONS(142), 1,
      anon_sym_color,
    ACTIONS(145), 1,
      anon_sym_font,
    ACTIONS(148), 1,
      anon_sym_position,
    ACTIONS(151), 1,
      anon_sym_format,
    ACTIONS(154), 1,
      anon_sym_cull_distance,
    STATE(13), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [470] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_name,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(161), 1,
      anon_sym_noOfFrames,
    ACTIONS(163), 1,
      anon_sym_size,
    ACTIONS(165), 1,
      anon_sym_borderSize,
    ACTIONS(167), 1,
      anon_sym_allwaystransparent,
    ACTIONS(169), 1,
      anon_sym_legacy_lazy_load,
    STATE(111), 2,
      sym__statement_name,
      sym__statement_gfx_size,
    STATE(18), 6,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [510] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_size,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(173), 1,
      anon_sym_text,
    ACTIONS(175), 1,
      anon_sym_color,
    ACTIONS(177), 1,
      anon_sym_font,
    ACTIONS(179), 1,
      anon_sym_position,
    ACTIONS(181), 1,
      anon_sym_format,
    ACTIONS(183), 1,
      anon_sym_cull_distance,
    STATE(13), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [548] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      anon_sym_name,
    ACTIONS(190), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(193), 1,
      anon_sym_noOfFrames,
    ACTIONS(196), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(199), 1,
      anon_sym_overlay_rows,
    ACTIONS(202), 1,
      anon_sym_effectFile,
    ACTIONS(205), 1,
      anon_sym_animation,
    STATE(16), 8,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [586] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_size,
    ACTIONS(173), 1,
      anon_sym_text,
    ACTIONS(175), 1,
      anon_sym_color,
    ACTIONS(177), 1,
      anon_sym_font,
    ACTIONS(179), 1,
      anon_sym_position,
    ACTIONS(181), 1,
      anon_sym_format,
    ACTIONS(183), 1,
      anon_sym_cull_distance,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(15), 8,
      sym__statement_gfx_size,
      sym__statement_gfx_text,
      sym__statement_gfx_color,
      sym__statement_gfx_font,
      sym__statement_gfx_position,
      sym__statement_gfx_format,
      sym__statement_gfx_cull_distance,
      aux_sym__gfx_textblock_repeat1,
  [624] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_name,
    ACTIONS(159), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(161), 1,
      anon_sym_noOfFrames,
    ACTIONS(163), 1,
      anon_sym_size,
    ACTIONS(165), 1,
      anon_sym_borderSize,
    ACTIONS(167), 1,
      anon_sym_allwaystransparent,
    ACTIONS(169), 1,
      anon_sym_legacy_lazy_load,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(111), 2,
      sym__statement_name,
      sym__statement_gfx_size,
    STATE(23), 6,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_animationrotation,
    ACTIONS(212), 15,
      anon_sym_RBRACE,
      anon_sym_name,
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
      anon_sym_speed,
      anon_sym_textblock,
      aux_sym_float_token1,
  [688] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(161), 1,
      anon_sym_noOfFrames,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(218), 1,
      anon_sym_name,
    ACTIONS(220), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(222), 1,
      anon_sym_overlay_rows,
    ACTIONS(224), 1,
      anon_sym_effectFile,
    ACTIONS(226), 1,
      anon_sym_animation,
    STATE(16), 8,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [726] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(161), 1,
      anon_sym_noOfFrames,
    ACTIONS(218), 1,
      anon_sym_name,
    ACTIONS(220), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(222), 1,
      anon_sym_overlay_rows,
    ACTIONS(224), 1,
      anon_sym_effectFile,
    ACTIONS(226), 1,
      anon_sym_animation,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(20), 8,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 16,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_textcolors,
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
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [786] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(234), 1,
      anon_sym_name,
    ACTIONS(237), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(240), 1,
      anon_sym_noOfFrames,
    ACTIONS(243), 1,
      anon_sym_size,
    ACTIONS(246), 1,
      anon_sym_borderSize,
    ACTIONS(249), 1,
      anon_sym_allwaystransparent,
    ACTIONS(252), 1,
      anon_sym_legacy_lazy_load,
    STATE(111), 2,
      sym__statement_name,
      sym__statement_gfx_size,
    STATE(23), 6,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      sym__statement_gfx_legacy_lazy_load,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(257), 12,
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
  [851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_text,
    ACTIONS(263), 1,
      sym_assign_equal,
    ACTIONS(259), 13,
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
  [876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(267), 12,
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
  [901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym__statement_gfx_textcolors,
      aux_sym__textcolors_block_repeat1,
    ACTIONS(257), 12,
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
  [926] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_name,
    ACTIONS(13), 1,
      anon_sym_path,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(274), 1,
      anon_sym_textcolors,
    ACTIONS(276), 1,
      anon_sym_cursor_offset,
    ACTIONS(278), 1,
      anon_sym_color,
    ACTIONS(280), 1,
      anon_sym_border_color,
    STATE(127), 3,
      sym__textcolors,
      sym__statement_name,
      sym__statement_mod_path,
    STATE(36), 4,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_assign_equal,
    ACTIONS(282), 13,
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
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
  [984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_assign_equal,
    ACTIONS(286), 13,
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
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
  [1006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_assign_equal,
    ACTIONS(290), 13,
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
  [1028] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      anon_sym_textcolors,
    ACTIONS(299), 1,
      anon_sym_name,
    ACTIONS(302), 1,
      anon_sym_path,
    ACTIONS(305), 1,
      anon_sym_cursor_offset,
    ACTIONS(308), 1,
      anon_sym_color,
    ACTIONS(311), 1,
      anon_sym_border_color,
    STATE(127), 3,
      sym__textcolors,
      sym__statement_name,
      sym__statement_mod_path,
    STATE(32), 4,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [1064] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      anon_sym_spriteType,
    ACTIONS(319), 1,
      anon_sym_textSpriteType,
    ACTIONS(322), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(325), 1,
      anon_sym_maskedShieldType,
    ACTIONS(328), 1,
      anon_sym_cursor_offset,
    STATE(33), 8,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [1096] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_cursor_offset,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 1,
      anon_sym_spriteType,
    ACTIONS(335), 1,
      anon_sym_textSpriteType,
    ACTIONS(337), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(339), 1,
      anon_sym_maskedShieldType,
    STATE(33), 8,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [1128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_text,
    ACTIONS(341), 13,
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
  [1150] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_name,
    ACTIONS(13), 1,
      anon_sym_path,
    ACTIONS(274), 1,
      anon_sym_textcolors,
    ACTIONS(276), 1,
      anon_sym_cursor_offset,
    ACTIONS(278), 1,
      anon_sym_color,
    ACTIONS(280), 1,
      anon_sym_border_color,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(127), 3,
      sym__textcolors,
      sym__statement_name,
      sym__statement_mod_path,
    STATE(32), 4,
      sym__statement_gfx_cursor_offset,
      sym__statement_gfx_bitmapfont_color,
      sym__statement_gfx_bitmapfont_border_color,
      aux_sym__bitmapfont_block_repeat1,
  [1186] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_cursor_offset,
    ACTIONS(333), 1,
      anon_sym_spriteType,
    ACTIONS(335), 1,
      anon_sym_textSpriteType,
    ACTIONS(337), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(339), 1,
      anon_sym_maskedShieldType,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(34), 8,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [1218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_animationrotation,
    ACTIONS(353), 1,
      sym_assign_equal,
    ACTIONS(349), 11,
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
  [1241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_animationrotation,
    ACTIONS(359), 1,
      sym_assign_equal,
    ACTIONS(355), 11,
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
  [1264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 13,
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
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
  [1283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 13,
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
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
      anon_sym_clicksound,
  [1302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_animationrotation,
    ACTIONS(369), 1,
      sym_assign_equal,
    ACTIONS(365), 11,
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
  [1325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_animationrotation,
    ACTIONS(375), 1,
      sym_assign_equal,
    ACTIONS(371), 11,
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
  [1348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_animationrotation,
    ACTIONS(381), 1,
      sym_assign_equal,
    ACTIONS(377), 11,
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
  [1371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_animationrotation,
    ACTIONS(387), 1,
      sym_assign_equal,
    ACTIONS(383), 11,
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
  [1394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_animationrotation,
    ACTIONS(393), 1,
      sym_assign_equal,
    ACTIONS(389), 11,
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
  [1417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_animationrotation,
    ACTIONS(399), 1,
      sym_assign_equal,
    ACTIONS(395), 11,
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
  [1440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 13,
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
  [1459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_animationrotation,
    ACTIONS(403), 11,
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
  [1479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_animationrotation,
    ACTIONS(407), 11,
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
  [1499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_animationrotation,
    ACTIONS(411), 11,
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
  [1519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_animationrotation,
    ACTIONS(415), 11,
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
  [1539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_animationrotation,
    ACTIONS(419), 11,
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
  [1559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_assign_equal,
    ACTIONS(423), 11,
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
  [1579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_animationrotation,
    ACTIONS(427), 11,
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
  [1599] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_name,
    ACTIONS(159), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(161), 1,
      anon_sym_noOfFrames,
    ACTIONS(224), 1,
      anon_sym_effectFile,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    ACTIONS(433), 1,
      anon_sym_clicksound,
    STATE(134), 1,
      sym__statement_name,
    STATE(61), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [1631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_assign_equal,
    ACTIONS(435), 11,
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
  [1651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_assign_equal,
    ACTIONS(439), 11,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [1671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_animationrotation,
    ACTIONS(443), 11,
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
  [1691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_assign_equal,
    ACTIONS(447), 11,
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
  [1711] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    ACTIONS(453), 1,
      anon_sym_name,
    ACTIONS(456), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(459), 1,
      anon_sym_noOfFrames,
    ACTIONS(462), 1,
      anon_sym_effectFile,
    ACTIONS(465), 1,
      anon_sym_clicksound,
    STATE(134), 1,
      sym__statement_name,
    STATE(61), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [1743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_assign_equal,
    ACTIONS(468), 11,
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
  [1763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_assign_equal,
    ACTIONS(472), 11,
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
  [1783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_assign_equal,
    ACTIONS(476), 11,
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
  [1803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_animationrotation,
    ACTIONS(480), 11,
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
  [1823] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_name,
    ACTIONS(159), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(161), 1,
      anon_sym_noOfFrames,
    ACTIONS(224), 1,
      anon_sym_effectFile,
    ACTIONS(433), 1,
      anon_sym_clicksound,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym__statement_name,
    STATE(56), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [1855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_assign_equal,
    ACTIONS(486), 11,
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
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_assign_equal,
    ACTIONS(490), 11,
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
  [1895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 11,
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
  [1912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 11,
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
  [1929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 11,
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
  [1946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 11,
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
  [1963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 11,
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
  [1980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 11,
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
  [1997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 11,
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
  [2014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 11,
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
  [2031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 11,
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
  [2048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 11,
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
  [2065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 11,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [2082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 11,
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
  [2099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 11,
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
  [2116] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(161), 1,
      anon_sym_noOfFrames,
    ACTIONS(218), 1,
      anon_sym_name,
    ACTIONS(224), 1,
      anon_sym_effectFile,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(84), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [2142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_assign_equal,
    ACTIONS(522), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_clicksound,
  [2160] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(161), 1,
      anon_sym_noOfFrames,
    ACTIONS(218), 1,
      anon_sym_name,
    ACTIONS(224), 1,
      anon_sym_effectFile,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(85), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [2186] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    ACTIONS(530), 1,
      anon_sym_name,
    ACTIONS(533), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(536), 1,
      anon_sym_noOfFrames,
    ACTIONS(539), 1,
      anon_sym_effectFile,
    STATE(85), 5,
      sym__statement_gfx_name,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [2212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_assign_equal,
    ACTIONS(542), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_assign_equal,
    ACTIONS(546), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_clicksound,
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym_assign_equal,
    ACTIONS(552), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym_assign_equal,
    ACTIONS(556), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_assign_equal,
    ACTIONS(560), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_assign_equal,
    ACTIONS(564), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_assign_equal,
    ACTIONS(568), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym_assign_equal,
    ACTIONS(572), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_assign_equal,
    ACTIONS(576), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_assign_equal,
    ACTIONS(580), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_assign_equal,
    ACTIONS(584), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_assign_equal,
    ACTIONS(588), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_assign_equal,
    ACTIONS(592), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [2462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2476] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
    ACTIONS(602), 1,
      anon_sym_spriteTypes,
    ACTIONS(605), 1,
      anon_sym_objectTypes,
    ACTIONS(608), 1,
      anon_sym_bitmapfonts,
    STATE(102), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [2498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2568] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_name,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    ACTIONS(623), 1,
      anon_sym_speed,
    ACTIONS(625), 1,
      anon_sym_textblock,
    STATE(160), 1,
      sym__statement_name,
    STATE(117), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [2592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [2606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2648] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(7), 1,
      anon_sym_objectTypes,
    ACTIONS(9), 1,
      anon_sym_bitmapfonts,
    ACTIONS(635), 1,
      ts_builtin_sym_end,
    STATE(102), 4,
      sym__spriteTypes,
      sym__objectTypes,
      sym__bitmapfonts,
      aux_sym_dot_gfx_repeat1,
  [2670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 8,
      anon_sym_RBRACE,
      anon_sym_size,
      anon_sym_text,
      anon_sym_color,
      anon_sym_font,
      anon_sym_position,
      anon_sym_format,
      anon_sym_cull_distance,
  [2698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2712] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_name,
    ACTIONS(623), 1,
      anon_sym_speed,
    ACTIONS(625), 1,
      anon_sym_textblock,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      sym__statement_name,
    STATE(120), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [2736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 8,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [2750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2764] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(651), 1,
      anon_sym_name,
    ACTIONS(654), 1,
      anon_sym_speed,
    ACTIONS(657), 1,
      anon_sym_textblock,
    STATE(160), 1,
      sym__statement_name,
    STATE(120), 3,
      sym__statement_gfx_speed,
      sym__statement_gfx_textblock,
      aux_sym__animatedmaptext_block_repeat1,
  [2788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym_assign_equal,
    ACTIONS(662), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [2818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_assign_equal,
    ACTIONS(666), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [2834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_legacy_lazy_load,
  [2848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [2862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [2875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [2888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_assign_equal,
    ACTIONS(678), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [2903] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_textcolors,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
    ACTIONS(684), 1,
      anon_sym_bitmapfont,
    STATE(184), 1,
      sym__textcolors,
    STATE(130), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [2924] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_textcolors,
    ACTIONS(684), 1,
      anon_sym_bitmapfont,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym__textcolors,
    STATE(132), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [2945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 7,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_name,
      anon_sym_path,
      anon_sym_cursor_offset,
      anon_sym_color,
      anon_sym_border_color,
  [2958] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    ACTIONS(692), 1,
      anon_sym_textcolors,
    ACTIONS(695), 1,
      anon_sym_bitmapfont,
    STATE(184), 1,
      sym__textcolors,
    STATE(132), 3,
      sym__bitmapfonts_type,
      sym__bitmapfont,
      aux_sym__bitmapfonts_block_repeat1,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [3003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [3015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [3027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [3039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [3051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [3063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [3075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [3087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [3099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [3123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [3135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [3147] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_x,
    ACTIONS(728), 1,
      anon_sym_y,
    STATE(209), 1,
      sym__entry_x_integer,
    STATE(210), 1,
      sym__entry_y_integer,
    STATE(269), 1,
      sym__statement_xy_integer,
  [3166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    ACTIONS(732), 1,
      anon_sym_animatedmaptext,
    STATE(148), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [3181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_assign_equal,
    ACTIONS(735), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    ACTIONS(741), 1,
      anon_sym_animatedmaptext,
    STATE(148), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [3209] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_x,
    ACTIONS(728), 1,
      anon_sym_y,
    STATE(209), 1,
      sym__entry_x_integer,
    STATE(210), 1,
      sym__entry_y_integer,
    STATE(267), 1,
      sym__statement_xy_integer,
  [3228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_assign_equal,
    ACTIONS(743), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_animatedmaptext,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(150), 3,
      sym__objectTypes_type,
      sym__animatedmaptext,
      aux_sym__objectTypes_block_repeat1,
  [3256] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_x,
    ACTIONS(728), 1,
      anon_sym_y,
    STATE(209), 1,
      sym__entry_x_integer,
    STATE(210), 1,
      sym__entry_y_integer,
    STATE(270), 1,
      sym__statement_xy_integer,
  [3275] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_x,
    ACTIONS(751), 1,
      anon_sym_y,
    STATE(215), 1,
      sym__entry_y_float,
    STATE(216), 1,
      sym__entry_x_float,
    STATE(262), 1,
      sym__statement_xy_float,
  [3294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    ACTIONS(767), 1,
      aux_sym__integer_positive_token1,
    STATE(162), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [3368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    ACTIONS(772), 1,
      aux_sym__integer_positive_token1,
    STATE(162), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [3382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 4,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_speed,
      anon_sym_textblock,
  [3432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 4,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
      anon_sym_objectTypes,
      anon_sym_bitmapfonts,
  [3462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(792), 1,
      sym_string,
    STATE(180), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [3475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [3484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [3493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [3502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(53), 1,
      sym__yes_no,
    ACTIONS(800), 2,
      anon_sym_yes,
      anon_sym_no,
  [3513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_assign_equal,
    ACTIONS(802), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [3524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [3533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      aux_sym__integer_positive_token1,
    STATE(163), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [3544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_string,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [3557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym_assign_equal,
    ACTIONS(812), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [3577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym_assign_equal,
    ACTIONS(818), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [3588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 3,
      anon_sym_RBRACE,
      anon_sym_textcolors,
      anon_sym_bitmapfont,
  [3597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
    ACTIONS(826), 1,
      sym_string,
    STATE(185), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [3610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 3,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym_y,
  [3619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(106), 1,
      sym__yes_no,
    ACTIONS(831), 2,
      anon_sym_yes,
      anon_sym_no,
  [3630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(116), 1,
      sym__yes_no,
    ACTIONS(833), 2,
      anon_sym_yes,
      anon_sym_no,
  [3641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_assign_equal,
    ACTIONS(835), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [3652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [3660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      aux_sym__integer_positive_token1,
    STATE(121), 1,
      sym__integer_positive,
  [3670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [3678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [3686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [3694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [3702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      aux_sym_float_token1,
    STATE(158), 1,
      sym__float_positive,
  [3712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym__bitmapfont_block,
  [3722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym__textcolors_block,
  [3732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      aux_sym_float_token1,
    STATE(280), 1,
      sym__float_positive,
  [3742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    STATE(195), 1,
      sym__animatedmaptext_block,
  [3752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym__gfx_textblock,
  [3762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym__maskedShieldType_block,
  [3772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym__corneredTileSpriteType_block,
  [3782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym__textSpriteType_block,
  [3792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym__spriteType_block,
  [3802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 2,
      anon_sym_RBRACE,
      sym_string,
  [3810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      aux_sym_float_token1,
    STATE(192), 1,
      sym_float,
  [3820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      aux_sym_float_token1,
    STATE(194), 1,
      sym_float,
  [3830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_y,
    STATE(232), 1,
      sym__entry_y_integer,
  [3840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_x,
    STATE(232), 1,
      sym__entry_x_integer,
  [3850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym__spriteTypes_block,
  [3860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      aux_sym_float_token1,
    STATE(199), 1,
      sym__float_positive,
  [3870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      aux_sym__statement_gfx_name_token1,
    ACTIONS(877), 1,
      aux_sym__statement_gfx_name_token2,
  [3880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 2,
      anon_sym_RBRACE,
      anon_sym_animatedmaptext,
  [3888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_x,
    STATE(272), 1,
      sym__entry_x_float,
  [3898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_y,
    STATE(272), 1,
      sym__entry_y_float,
  [3908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym__objectTypes_block,
  [3918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym__bitmapfonts_block,
  [3928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      aux_sym_float_token1,
    STATE(212), 1,
      sym__float_positive,
  [3938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [3946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(75), 1,
      sym__mod_replace_path_folder,
  [3956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      aux_sym_float_token1,
    STATE(52), 1,
      sym__float_positive,
  [3966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym__mod_tags_block,
  [3976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym__mod_dependencies_block,
  [3986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      aux_sym__integer_positive_token1,
    STATE(40), 1,
      sym__integer_positive,
  [3996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym__gfx_animation_block,
  [4006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      aux_sym__integer_positive_token1,
    STATE(125), 1,
      sym__integer_positive,
  [4016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym_assign_equal,
  [4023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym_string,
  [4030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym_integer,
  [4037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [4044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
  [4051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym_hexadecimal,
  [4058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_string,
  [4065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_LBRACE,
  [4072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_string,
  [4079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_LBRACE,
  [4086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_centre,
  [4093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      aux_sym__statement_gfx_cull_distance_token1,
  [4100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym_hexadecimal,
  [4107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym_assign_equal,
  [4114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_byte,
  [4121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
  [4128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [4135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
  [4142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      aux_sym__statement_mod_supported_version_token1,
  [4149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__statement_mod_picture_token1,
  [4156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      aux_sym__statement_mod_version_token1,
  [4163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [4170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_click,
  [4177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_LBRACE,
  [4184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_RBRACE,
  [4191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      aux_sym__statement_mod_archive_token1,
  [4198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym_angle,
  [4205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      sym_integer,
  [4212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym_string,
  [4219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym__animation_entry_dds_token1,
  [4226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym_byte,
  [4233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [4240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_LBRACE,
  [4247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_LBRACE,
  [4254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_RBRACE,
  [4261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_assign_equal,
  [4268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_assign_equal,
  [4275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym_assign_equal,
  [4282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym_assign_equal,
  [4289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
  [4296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym_assign_equal,
  [4303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
  [4310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
  [4317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
  [4324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
  [4331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      ts_builtin_sym_end,
  [4338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym_assign_equal,
  [4345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_LBRACE,
  [4352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym_assign_equal,
  [4359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym_byte,
  [4366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym_integer,
  [4373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym_integer,
  [4380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_RBRACE,
  [4387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym_assign_equal,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 272,
  [SMALL_STATE(10)] = 317,
  [SMALL_STATE(11)] = 362,
  [SMALL_STATE(12)] = 407,
  [SMALL_STATE(13)] = 432,
  [SMALL_STATE(14)] = 470,
  [SMALL_STATE(15)] = 510,
  [SMALL_STATE(16)] = 548,
  [SMALL_STATE(17)] = 586,
  [SMALL_STATE(18)] = 624,
  [SMALL_STATE(19)] = 664,
  [SMALL_STATE(20)] = 688,
  [SMALL_STATE(21)] = 726,
  [SMALL_STATE(22)] = 764,
  [SMALL_STATE(23)] = 786,
  [SMALL_STATE(24)] = 826,
  [SMALL_STATE(25)] = 851,
  [SMALL_STATE(26)] = 876,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 926,
  [SMALL_STATE(29)] = 962,
  [SMALL_STATE(30)] = 984,
  [SMALL_STATE(31)] = 1006,
  [SMALL_STATE(32)] = 1028,
  [SMALL_STATE(33)] = 1064,
  [SMALL_STATE(34)] = 1096,
  [SMALL_STATE(35)] = 1128,
  [SMALL_STATE(36)] = 1150,
  [SMALL_STATE(37)] = 1186,
  [SMALL_STATE(38)] = 1218,
  [SMALL_STATE(39)] = 1241,
  [SMALL_STATE(40)] = 1264,
  [SMALL_STATE(41)] = 1283,
  [SMALL_STATE(42)] = 1302,
  [SMALL_STATE(43)] = 1325,
  [SMALL_STATE(44)] = 1348,
  [SMALL_STATE(45)] = 1371,
  [SMALL_STATE(46)] = 1394,
  [SMALL_STATE(47)] = 1417,
  [SMALL_STATE(48)] = 1440,
  [SMALL_STATE(49)] = 1459,
  [SMALL_STATE(50)] = 1479,
  [SMALL_STATE(51)] = 1499,
  [SMALL_STATE(52)] = 1519,
  [SMALL_STATE(53)] = 1539,
  [SMALL_STATE(54)] = 1559,
  [SMALL_STATE(55)] = 1579,
  [SMALL_STATE(56)] = 1599,
  [SMALL_STATE(57)] = 1631,
  [SMALL_STATE(58)] = 1651,
  [SMALL_STATE(59)] = 1671,
  [SMALL_STATE(60)] = 1691,
  [SMALL_STATE(61)] = 1711,
  [SMALL_STATE(62)] = 1743,
  [SMALL_STATE(63)] = 1763,
  [SMALL_STATE(64)] = 1783,
  [SMALL_STATE(65)] = 1803,
  [SMALL_STATE(66)] = 1823,
  [SMALL_STATE(67)] = 1855,
  [SMALL_STATE(68)] = 1875,
  [SMALL_STATE(69)] = 1895,
  [SMALL_STATE(70)] = 1912,
  [SMALL_STATE(71)] = 1929,
  [SMALL_STATE(72)] = 1946,
  [SMALL_STATE(73)] = 1963,
  [SMALL_STATE(74)] = 1980,
  [SMALL_STATE(75)] = 1997,
  [SMALL_STATE(76)] = 2014,
  [SMALL_STATE(77)] = 2031,
  [SMALL_STATE(78)] = 2048,
  [SMALL_STATE(79)] = 2065,
  [SMALL_STATE(80)] = 2082,
  [SMALL_STATE(81)] = 2099,
  [SMALL_STATE(82)] = 2116,
  [SMALL_STATE(83)] = 2142,
  [SMALL_STATE(84)] = 2160,
  [SMALL_STATE(85)] = 2186,
  [SMALL_STATE(86)] = 2212,
  [SMALL_STATE(87)] = 2229,
  [SMALL_STATE(88)] = 2246,
  [SMALL_STATE(89)] = 2261,
  [SMALL_STATE(90)] = 2278,
  [SMALL_STATE(91)] = 2295,
  [SMALL_STATE(92)] = 2312,
  [SMALL_STATE(93)] = 2329,
  [SMALL_STATE(94)] = 2346,
  [SMALL_STATE(95)] = 2363,
  [SMALL_STATE(96)] = 2380,
  [SMALL_STATE(97)] = 2397,
  [SMALL_STATE(98)] = 2414,
  [SMALL_STATE(99)] = 2431,
  [SMALL_STATE(100)] = 2448,
  [SMALL_STATE(101)] = 2462,
  [SMALL_STATE(102)] = 2476,
  [SMALL_STATE(103)] = 2498,
  [SMALL_STATE(104)] = 2512,
  [SMALL_STATE(105)] = 2526,
  [SMALL_STATE(106)] = 2540,
  [SMALL_STATE(107)] = 2554,
  [SMALL_STATE(108)] = 2568,
  [SMALL_STATE(109)] = 2592,
  [SMALL_STATE(110)] = 2606,
  [SMALL_STATE(111)] = 2620,
  [SMALL_STATE(112)] = 2634,
  [SMALL_STATE(113)] = 2648,
  [SMALL_STATE(114)] = 2670,
  [SMALL_STATE(115)] = 2684,
  [SMALL_STATE(116)] = 2698,
  [SMALL_STATE(117)] = 2712,
  [SMALL_STATE(118)] = 2736,
  [SMALL_STATE(119)] = 2750,
  [SMALL_STATE(120)] = 2764,
  [SMALL_STATE(121)] = 2788,
  [SMALL_STATE(122)] = 2802,
  [SMALL_STATE(123)] = 2818,
  [SMALL_STATE(124)] = 2834,
  [SMALL_STATE(125)] = 2848,
  [SMALL_STATE(126)] = 2862,
  [SMALL_STATE(127)] = 2875,
  [SMALL_STATE(128)] = 2888,
  [SMALL_STATE(129)] = 2903,
  [SMALL_STATE(130)] = 2924,
  [SMALL_STATE(131)] = 2945,
  [SMALL_STATE(132)] = 2958,
  [SMALL_STATE(133)] = 2979,
  [SMALL_STATE(134)] = 2991,
  [SMALL_STATE(135)] = 3003,
  [SMALL_STATE(136)] = 3015,
  [SMALL_STATE(137)] = 3027,
  [SMALL_STATE(138)] = 3039,
  [SMALL_STATE(139)] = 3051,
  [SMALL_STATE(140)] = 3063,
  [SMALL_STATE(141)] = 3075,
  [SMALL_STATE(142)] = 3087,
  [SMALL_STATE(143)] = 3099,
  [SMALL_STATE(144)] = 3111,
  [SMALL_STATE(145)] = 3123,
  [SMALL_STATE(146)] = 3135,
  [SMALL_STATE(147)] = 3147,
  [SMALL_STATE(148)] = 3166,
  [SMALL_STATE(149)] = 3181,
  [SMALL_STATE(150)] = 3194,
  [SMALL_STATE(151)] = 3209,
  [SMALL_STATE(152)] = 3228,
  [SMALL_STATE(153)] = 3241,
  [SMALL_STATE(154)] = 3256,
  [SMALL_STATE(155)] = 3275,
  [SMALL_STATE(156)] = 3294,
  [SMALL_STATE(157)] = 3304,
  [SMALL_STATE(158)] = 3314,
  [SMALL_STATE(159)] = 3324,
  [SMALL_STATE(160)] = 3334,
  [SMALL_STATE(161)] = 3344,
  [SMALL_STATE(162)] = 3354,
  [SMALL_STATE(163)] = 3368,
  [SMALL_STATE(164)] = 3382,
  [SMALL_STATE(165)] = 3392,
  [SMALL_STATE(166)] = 3402,
  [SMALL_STATE(167)] = 3412,
  [SMALL_STATE(168)] = 3422,
  [SMALL_STATE(169)] = 3432,
  [SMALL_STATE(170)] = 3442,
  [SMALL_STATE(171)] = 3452,
  [SMALL_STATE(172)] = 3462,
  [SMALL_STATE(173)] = 3475,
  [SMALL_STATE(174)] = 3484,
  [SMALL_STATE(175)] = 3493,
  [SMALL_STATE(176)] = 3502,
  [SMALL_STATE(177)] = 3513,
  [SMALL_STATE(178)] = 3524,
  [SMALL_STATE(179)] = 3533,
  [SMALL_STATE(180)] = 3544,
  [SMALL_STATE(181)] = 3557,
  [SMALL_STATE(182)] = 3568,
  [SMALL_STATE(183)] = 3577,
  [SMALL_STATE(184)] = 3588,
  [SMALL_STATE(185)] = 3597,
  [SMALL_STATE(186)] = 3610,
  [SMALL_STATE(187)] = 3619,
  [SMALL_STATE(188)] = 3630,
  [SMALL_STATE(189)] = 3641,
  [SMALL_STATE(190)] = 3652,
  [SMALL_STATE(191)] = 3660,
  [SMALL_STATE(192)] = 3670,
  [SMALL_STATE(193)] = 3678,
  [SMALL_STATE(194)] = 3686,
  [SMALL_STATE(195)] = 3694,
  [SMALL_STATE(196)] = 3702,
  [SMALL_STATE(197)] = 3712,
  [SMALL_STATE(198)] = 3722,
  [SMALL_STATE(199)] = 3732,
  [SMALL_STATE(200)] = 3742,
  [SMALL_STATE(201)] = 3752,
  [SMALL_STATE(202)] = 3762,
  [SMALL_STATE(203)] = 3772,
  [SMALL_STATE(204)] = 3782,
  [SMALL_STATE(205)] = 3792,
  [SMALL_STATE(206)] = 3802,
  [SMALL_STATE(207)] = 3810,
  [SMALL_STATE(208)] = 3820,
  [SMALL_STATE(209)] = 3830,
  [SMALL_STATE(210)] = 3840,
  [SMALL_STATE(211)] = 3850,
  [SMALL_STATE(212)] = 3860,
  [SMALL_STATE(213)] = 3870,
  [SMALL_STATE(214)] = 3880,
  [SMALL_STATE(215)] = 3888,
  [SMALL_STATE(216)] = 3898,
  [SMALL_STATE(217)] = 3908,
  [SMALL_STATE(218)] = 3918,
  [SMALL_STATE(219)] = 3928,
  [SMALL_STATE(220)] = 3938,
  [SMALL_STATE(221)] = 3946,
  [SMALL_STATE(222)] = 3956,
  [SMALL_STATE(223)] = 3966,
  [SMALL_STATE(224)] = 3976,
  [SMALL_STATE(225)] = 3986,
  [SMALL_STATE(226)] = 3996,
  [SMALL_STATE(227)] = 4006,
  [SMALL_STATE(228)] = 4016,
  [SMALL_STATE(229)] = 4023,
  [SMALL_STATE(230)] = 4030,
  [SMALL_STATE(231)] = 4037,
  [SMALL_STATE(232)] = 4044,
  [SMALL_STATE(233)] = 4051,
  [SMALL_STATE(234)] = 4058,
  [SMALL_STATE(235)] = 4065,
  [SMALL_STATE(236)] = 4072,
  [SMALL_STATE(237)] = 4079,
  [SMALL_STATE(238)] = 4086,
  [SMALL_STATE(239)] = 4093,
  [SMALL_STATE(240)] = 4100,
  [SMALL_STATE(241)] = 4107,
  [SMALL_STATE(242)] = 4114,
  [SMALL_STATE(243)] = 4121,
  [SMALL_STATE(244)] = 4128,
  [SMALL_STATE(245)] = 4135,
  [SMALL_STATE(246)] = 4142,
  [SMALL_STATE(247)] = 4149,
  [SMALL_STATE(248)] = 4156,
  [SMALL_STATE(249)] = 4163,
  [SMALL_STATE(250)] = 4170,
  [SMALL_STATE(251)] = 4177,
  [SMALL_STATE(252)] = 4184,
  [SMALL_STATE(253)] = 4191,
  [SMALL_STATE(254)] = 4198,
  [SMALL_STATE(255)] = 4205,
  [SMALL_STATE(256)] = 4212,
  [SMALL_STATE(257)] = 4219,
  [SMALL_STATE(258)] = 4226,
  [SMALL_STATE(259)] = 4233,
  [SMALL_STATE(260)] = 4240,
  [SMALL_STATE(261)] = 4247,
  [SMALL_STATE(262)] = 4254,
  [SMALL_STATE(263)] = 4261,
  [SMALL_STATE(264)] = 4268,
  [SMALL_STATE(265)] = 4275,
  [SMALL_STATE(266)] = 4282,
  [SMALL_STATE(267)] = 4289,
  [SMALL_STATE(268)] = 4296,
  [SMALL_STATE(269)] = 4303,
  [SMALL_STATE(270)] = 4310,
  [SMALL_STATE(271)] = 4317,
  [SMALL_STATE(272)] = 4324,
  [SMALL_STATE(273)] = 4331,
  [SMALL_STATE(274)] = 4338,
  [SMALL_STATE(275)] = 4345,
  [SMALL_STATE(276)] = 4352,
  [SMALL_STATE(277)] = 4359,
  [SMALL_STATE(278)] = 4366,
  [SMALL_STATE(279)] = 4373,
  [SMALL_STATE(280)] = 4380,
  [SMALL_STATE(281)] = 4387,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(241),
  [7] = {.count = 1, .reusable = true}, SHIFT(281),
  [9] = {.count = 1, .reusable = true}, SHIFT(276),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = true}, SHIFT(12),
  [15] = {.count = 1, .reusable = true}, SHIFT(62),
  [17] = {.count = 1, .reusable = true}, SHIFT(63),
  [19] = {.count = 1, .reusable = true}, SHIFT(57),
  [21] = {.count = 1, .reusable = true}, SHIFT(68),
  [23] = {.count = 1, .reusable = true}, SHIFT(67),
  [25] = {.count = 1, .reusable = true}, SHIFT(60),
  [27] = {.count = 1, .reusable = true}, SHIFT(64),
  [29] = {.count = 1, .reusable = true}, SHIFT(54),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(256),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.count = 1, .reusable = true}, SHIFT(81),
  [44] = {.count = 1, .reusable = true}, SHIFT(4),
  [46] = {.count = 1, .reusable = true}, SHIFT(80),
  [48] = {.count = 1, .reusable = true}, SHIFT(5),
  [50] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(2),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(12),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(62),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(63),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(57),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(68),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(67),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(60),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(64),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(54),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [84] = {.count = 1, .reusable = true}, SHIFT(112),
  [86] = {.count = 1, .reusable = true}, SHIFT(42),
  [88] = {.count = 1, .reusable = false}, SHIFT(43),
  [90] = {.count = 1, .reusable = true}, SHIFT(44),
  [92] = {.count = 1, .reusable = true}, SHIFT(39),
  [94] = {.count = 1, .reusable = true}, SHIFT(38),
  [96] = {.count = 1, .reusable = true}, SHIFT(47),
  [98] = {.count = 1, .reusable = true}, SHIFT(45),
  [100] = {.count = 1, .reusable = true}, SHIFT(46),
  [102] = {.count = 1, .reusable = true}, SHIFT(119),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(42),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(43),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(44),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(39),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(38),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(47),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(45),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(46),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [132] = {.count = 1, .reusable = true}, SHIFT(229),
  [134] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(25),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(96),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(86),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(95),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(94),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(90),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_textblock_repeat1, 2), SHIFT_REPEAT(89),
  [157] = {.count = 1, .reusable = true}, SHIFT(144),
  [159] = {.count = 1, .reusable = true}, SHIFT(29),
  [161] = {.count = 1, .reusable = true}, SHIFT(30),
  [163] = {.count = 1, .reusable = true}, SHIFT(25),
  [165] = {.count = 1, .reusable = true}, SHIFT(93),
  [167] = {.count = 1, .reusable = true}, SHIFT(92),
  [169] = {.count = 1, .reusable = true}, SHIFT(91),
  [171] = {.count = 1, .reusable = true}, SHIFT(168),
  [173] = {.count = 1, .reusable = true}, SHIFT(96),
  [175] = {.count = 1, .reusable = true}, SHIFT(86),
  [177] = {.count = 1, .reusable = true}, SHIFT(95),
  [179] = {.count = 1, .reusable = true}, SHIFT(94),
  [181] = {.count = 1, .reusable = true}, SHIFT(90),
  [183] = {.count = 1, .reusable = true}, SHIFT(89),
  [185] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(98),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(29),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(30),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(87),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(99),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(83),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(97),
  [208] = {.count = 1, .reusable = true}, SHIFT(156),
  [210] = {.count = 1, .reusable = true}, SHIFT(136),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym__float_positive, 1, .production_id = 5),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym__float_positive, 1, .production_id = 5),
  [216] = {.count = 1, .reusable = true}, SHIFT(145),
  [218] = {.count = 1, .reusable = true}, SHIFT(98),
  [220] = {.count = 1, .reusable = true}, SHIFT(87),
  [222] = {.count = 1, .reusable = true}, SHIFT(99),
  [224] = {.count = 1, .reusable = true}, SHIFT(83),
  [226] = {.count = 1, .reusable = true}, SHIFT(97),
  [228] = {.count = 1, .reusable = true}, SHIFT(142),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [232] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(29),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(30),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(25),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(93),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(92),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(91),
  [255] = {.count = 1, .reusable = true}, SHIFT(118),
  [257] = {.count = 1, .reusable = true}, SHIFT(31),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 1),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size, 1),
  [263] = {.count = 1, .reusable = true}, SHIFT(261),
  [265] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2),
  [267] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textcolors_block_repeat1, 2), SHIFT_REPEAT(31),
  [270] = {.count = 1, .reusable = true}, SHIFT(109),
  [272] = {.count = 1, .reusable = true}, SHIFT(178),
  [274] = {.count = 1, .reusable = true}, SHIFT(268),
  [276] = {.count = 1, .reusable = true}, SHIFT(58),
  [278] = {.count = 1, .reusable = true}, SHIFT(122),
  [280] = {.count = 1, .reusable = true}, SHIFT(123),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 1),
  [284] = {.count = 1, .reusable = true}, SHIFT(244),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [288] = {.count = 1, .reusable = true}, SHIFT(225),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 1),
  [292] = {.count = 1, .reusable = true}, SHIFT(260),
  [294] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(268),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(2),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(12),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(58),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(122),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 2), SHIFT_REPEAT(123),
  [314] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(263),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(264),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(265),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(266),
  [328] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(58),
  [331] = {.count = 1, .reusable = true}, SHIFT(157),
  [333] = {.count = 1, .reusable = true}, SHIFT(263),
  [335] = {.count = 1, .reusable = true}, SHIFT(264),
  [337] = {.count = 1, .reusable = true}, SHIFT(265),
  [339] = {.count = 1, .reusable = true}, SHIFT(266),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 5),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_size, 5),
  [345] = {.count = 1, .reusable = true}, SHIFT(173),
  [347] = {.count = 1, .reusable = true}, SHIFT(171),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 1),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 1),
  [353] = {.count = 1, .reusable = true}, SHIFT(245),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [359] = {.count = 1, .reusable = true}, SHIFT(222),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 3),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [369] = {.count = 1, .reusable = true}, SHIFT(257),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [375] = {.count = 1, .reusable = true}, SHIFT(254),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [381] = {.count = 1, .reusable = true}, SHIFT(176),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [387] = {.count = 1, .reusable = true}, SHIFT(174),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [393] = {.count = 1, .reusable = true}, SHIFT(243),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [399] = {.count = 1, .reusable = true}, SHIFT(175),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textcolors, 7),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [425] = {.count = 1, .reusable = true}, SHIFT(224),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy_float, 5),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy_float, 5),
  [431] = {.count = 1, .reusable = true}, SHIFT(143),
  [433] = {.count = 1, .reusable = true}, SHIFT(128),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [437] = {.count = 1, .reusable = true}, SHIFT(248),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 1),
  [441] = {.count = 1, .reusable = true}, SHIFT(275),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [449] = {.count = 1, .reusable = true}, SHIFT(221),
  [451] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2),
  [453] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(2),
  [456] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(29),
  [459] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(30),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(83),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(128),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [470] = {.count = 1, .reusable = true}, SHIFT(253),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [474] = {.count = 1, .reusable = true}, SHIFT(249),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [478] = {.count = 1, .reusable = true}, SHIFT(223),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [482] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [484] = {.count = 1, .reusable = true}, SHIFT(141),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [488] = {.count = 1, .reusable = true}, SHIFT(246),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [492] = {.count = 1, .reusable = true}, SHIFT(247),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [520] = {.count = 1, .reusable = true}, SHIFT(133),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [524] = {.count = 1, .reusable = true}, SHIFT(231),
  [526] = {.count = 1, .reusable = true}, SHIFT(146),
  [528] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2),
  [530] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(98),
  [533] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(29),
  [536] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(30),
  [539] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(83),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 1),
  [544] = {.count = 1, .reusable = true}, SHIFT(235),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [548] = {.count = 1, .reusable = true}, SHIFT(227),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 1),
  [554] = {.count = 1, .reusable = true}, SHIFT(239),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 1),
  [558] = {.count = 1, .reusable = true}, SHIFT(238),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 1),
  [562] = {.count = 1, .reusable = true}, SHIFT(187),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [566] = {.count = 1, .reusable = true}, SHIFT(188),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 1),
  [570] = {.count = 1, .reusable = true}, SHIFT(251),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 1),
  [574] = {.count = 1, .reusable = true}, SHIFT(237),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 1),
  [578] = {.count = 1, .reusable = true}, SHIFT(236),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 1),
  [582] = {.count = 1, .reusable = true}, SHIFT(234),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [586] = {.count = 1, .reusable = true}, SHIFT(226),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 1),
  [590] = {.count = 1, .reusable = true}, SHIFT(213),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [594] = {.count = 1, .reusable = true}, SHIFT(191),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors, 3),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_name, 3),
  [600] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [602] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(241),
  [605] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(281),
  [608] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(276),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_color, 7),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cull_distance, 3),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_format, 3),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_legacy_lazy_load, 3),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_font, 3),
  [621] = {.count = 1, .reusable = true}, SHIFT(193),
  [623] = {.count = 1, .reusable = true}, SHIFT(149),
  [625] = {.count = 1, .reusable = true}, SHIFT(152),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 3),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_text, 3),
  [631] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 1, .production_id = 4),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_position, 5),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [643] = {.count = 1, .reusable = true}, SHIFT(214),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym__textcolors_block, 2),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [649] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(2),
  [654] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(149),
  [657] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 2), SHIFT_REPEAT(152),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 1),
  [664] = {.count = 1, .reusable = true}, SHIFT(240),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 1),
  [668] = {.count = 1, .reusable = true}, SHIFT(233),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 5),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_border_color, 3),
  [676] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfont_block_repeat1, 1, .production_id = 4),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 1),
  [680] = {.count = 1, .reusable = true}, SHIFT(250),
  [682] = {.count = 1, .reusable = true}, SHIFT(159),
  [684] = {.count = 1, .reusable = true}, SHIFT(274),
  [686] = {.count = 1, .reusable = true}, SHIFT(161),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_bitmapfont_color, 3),
  [690] = {.count = 1, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2),
  [692] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(268),
  [695] = {.count = 2, .reusable = true}, REDUCE(aux_sym__bitmapfonts_block_repeat1, 2), SHIFT_REPEAT(274),
  [698] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 2),
  [700] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 1, .production_id = 4),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 3),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 3),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 3),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 3),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 3),
  [714] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 2),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 3),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 2),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 3),
  [726] = {.count = 1, .reusable = true}, SHIFT(189),
  [728] = {.count = 1, .reusable = true}, SHIFT(177),
  [730] = {.count = 1, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym__objectTypes_block_repeat1, 2), SHIFT_REPEAT(228),
  [735] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 1),
  [737] = {.count = 1, .reusable = true}, SHIFT(196),
  [739] = {.count = 1, .reusable = true}, SHIFT(166),
  [741] = {.count = 1, .reusable = true}, SHIFT(228),
  [743] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 1),
  [745] = {.count = 1, .reusable = true}, SHIFT(201),
  [747] = {.count = 1, .reusable = true}, SHIFT(164),
  [749] = {.count = 1, .reusable = true}, SHIFT(181),
  [751] = {.count = 1, .reusable = true}, SHIFT(183),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 2),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [757] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_speed, 3),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 2),
  [761] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animatedmaptext_block_repeat1, 1, .production_id = 4),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_block, 3),
  [765] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [767] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(162),
  [770] = {.count = 1, .reusable = true}, SHIFT(65),
  [772] = {.count = 1, .reusable = true}, SHIFT(162),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 2),
  [776] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textblock, 3),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes_block, 3),
  [780] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [782] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_textblock, 3),
  [784] = {.count = 1, .reusable = true}, REDUCE(sym__objectTypes, 3),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts, 3),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [790] = {.count = 1, .reusable = true}, SHIFT(73),
  [792] = {.count = 1, .reusable = true}, SHIFT(206),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 3),
  [796] = {.count = 1, .reusable = true}, SHIFT(49),
  [798] = {.count = 1, .reusable = true}, SHIFT(51),
  [800] = {.count = 1, .reusable = true}, SHIFT(53),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 1),
  [804] = {.count = 1, .reusable = true}, SHIFT(230),
  [806] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont_block, 2),
  [808] = {.count = 1, .reusable = true}, SHIFT(163),
  [810] = {.count = 1, .reusable = true}, SHIFT(77),
  [812] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 1),
  [814] = {.count = 1, .reusable = true}, SHIFT(208),
  [816] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfont, 3),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 1),
  [820] = {.count = 1, .reusable = true}, SHIFT(207),
  [822] = {.count = 1, .reusable = true}, REDUCE(sym__bitmapfonts_type, 1, .production_id = 2),
  [824] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [826] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(206),
  [829] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [831] = {.count = 1, .reusable = true}, SHIFT(106),
  [833] = {.count = 1, .reusable = true}, SHIFT(116),
  [835] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 1),
  [837] = {.count = 1, .reusable = true}, SHIFT(255),
  [839] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 3),
  [841] = {.count = 1, .reusable = true}, SHIFT(121),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_float, 3),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 2),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_float, 3),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext, 3),
  [851] = {.count = 1, .reusable = true}, SHIFT(19),
  [853] = {.count = 1, .reusable = true}, SHIFT(28),
  [855] = {.count = 1, .reusable = true}, SHIFT(24),
  [857] = {.count = 1, .reusable = true}, SHIFT(108),
  [859] = {.count = 1, .reusable = true}, SHIFT(17),
  [861] = {.count = 1, .reusable = true}, SHIFT(82),
  [863] = {.count = 1, .reusable = true}, SHIFT(14),
  [865] = {.count = 1, .reusable = true}, SHIFT(66),
  [867] = {.count = 1, .reusable = true}, SHIFT(21),
  [869] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 3),
  [871] = {.count = 1, .reusable = true}, SHIFT(186),
  [873] = {.count = 1, .reusable = true}, SHIFT(37),
  [875] = {.count = 1, .reusable = true}, SHIFT(101),
  [877] = {.count = 1, .reusable = false}, SHIFT(101),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym__animatedmaptext_block, 3),
  [881] = {.count = 1, .reusable = true}, SHIFT(153),
  [883] = {.count = 1, .reusable = true}, SHIFT(129),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 3),
  [887] = {.count = 1, .reusable = true}, SHIFT(75),
  [889] = {.count = 1, .reusable = true}, SHIFT(6),
  [891] = {.count = 1, .reusable = true}, SHIFT(172),
  [893] = {.count = 1, .reusable = true}, SHIFT(40),
  [895] = {.count = 1, .reusable = true}, SHIFT(9),
  [897] = {.count = 1, .reusable = true}, SHIFT(125),
  [899] = {.count = 1, .reusable = true}, SHIFT(200),
  [901] = {.count = 1, .reusable = true}, SHIFT(22),
  [903] = {.count = 1, .reusable = true}, SHIFT(220),
  [905] = {.count = 1, .reusable = true}, SHIFT(88),
  [907] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_integer, 2),
  [909] = {.count = 1, .reusable = true}, SHIFT(126),
  [911] = {.count = 1, .reusable = true}, SHIFT(110),
  [913] = {.count = 1, .reusable = true}, SHIFT(219),
  [915] = {.count = 1, .reusable = true}, SHIFT(107),
  [917] = {.count = 1, .reusable = true}, SHIFT(151),
  [919] = {.count = 1, .reusable = true}, SHIFT(105),
  [921] = {.count = 1, .reusable = true}, SHIFT(104),
  [923] = {.count = 1, .reusable = true}, SHIFT(131),
  [925] = {.count = 1, .reusable = true}, SHIFT(211),
  [927] = {.count = 1, .reusable = true}, SHIFT(259),
  [929] = {.count = 1, .reusable = true}, SHIFT(179),
  [931] = {.count = 1, .reusable = true}, SHIFT(41),
  [933] = {.count = 1, .reusable = true}, SHIFT(155),
  [935] = {.count = 1, .reusable = true}, SHIFT(69),
  [937] = {.count = 1, .reusable = true}, SHIFT(74),
  [939] = {.count = 1, .reusable = true}, SHIFT(72),
  [941] = {.count = 1, .reusable = true}, SHIFT(71),
  [943] = {.count = 1, .reusable = true}, SHIFT(140),
  [945] = {.count = 1, .reusable = true}, SHIFT(147),
  [947] = {.count = 1, .reusable = true}, SHIFT(79),
  [949] = {.count = 1, .reusable = true}, SHIFT(70),
  [951] = {.count = 1, .reusable = true}, SHIFT(50),
  [953] = {.count = 1, .reusable = true}, SHIFT(190),
  [955] = {.count = 1, .reusable = true}, SHIFT(3),
  [957] = {.count = 1, .reusable = true}, SHIFT(59),
  [959] = {.count = 1, .reusable = true}, SHIFT(242),
  [961] = {.count = 1, .reusable = true}, SHIFT(48),
  [963] = {.count = 1, .reusable = true}, SHIFT(277),
  [965] = {.count = 1, .reusable = true}, SHIFT(154),
  [967] = {.count = 1, .reusable = true}, SHIFT(55),
  [969] = {.count = 1, .reusable = true}, SHIFT(205),
  [971] = {.count = 1, .reusable = true}, SHIFT(204),
  [973] = {.count = 1, .reusable = true}, SHIFT(203),
  [975] = {.count = 1, .reusable = true}, SHIFT(202),
  [977] = {.count = 1, .reusable = true}, SHIFT(115),
  [979] = {.count = 1, .reusable = true}, SHIFT(198),
  [981] = {.count = 1, .reusable = true}, SHIFT(124),
  [983] = {.count = 1, .reusable = true}, SHIFT(35),
  [985] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [987] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_float, 2),
  [989] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [991] = {.count = 1, .reusable = true}, SHIFT(197),
  [993] = {.count = 1, .reusable = true}, SHIFT(278),
  [995] = {.count = 1, .reusable = true}, SHIFT(218),
  [997] = {.count = 1, .reusable = true}, SHIFT(258),
  [999] = {.count = 1, .reusable = true}, SHIFT(279),
  [1001] = {.count = 1, .reusable = true}, SHIFT(252),
  [1003] = {.count = 1, .reusable = true}, SHIFT(103),
  [1005] = {.count = 1, .reusable = true}, SHIFT(217),
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
