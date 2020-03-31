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
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 3
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_spriteTypes = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_spriteType = 4,
  anon_sym_textSpriteType = 5,
  anon_sym_corneredTileSpriteType = 6,
  anon_sym_maskedShieldType = 7,
  anon_sym_name = 8,
  anon_sym_x = 9,
  anon_sym_y = 10,
  anon_sym_path = 11,
  anon_sym_archive = 12,
  aux_sym__statement_mod_archive_token1 = 13,
  anon_sym_remote_file_id = 14,
  aux_sym__statement_mod_remote_file_id_token1 = 15,
  anon_sym_version = 16,
  aux_sym__statement_mod_version_token1 = 17,
  anon_sym_picture = 18,
  aux_sym__statement_mod_picture_token1 = 19,
  anon_sym_supported_version = 20,
  aux_sym__statement_mod_supported_version_token1 = 21,
  anon_sym_replace_path = 22,
  aux_sym__mod_replace_path_folder_token1 = 23,
  anon_sym_tags = 24,
  aux_sym__mod_tags_keyword_token1 = 25,
  aux_sym__mod_tags_keyword_token2 = 26,
  aux_sym__mod_tags_keyword_token3 = 27,
  aux_sym__mod_tags_keyword_token4 = 28,
  aux_sym__mod_tags_keyword_token5 = 29,
  aux_sym__mod_tags_keyword_token6 = 30,
  aux_sym__mod_tags_keyword_token7 = 31,
  aux_sym__mod_tags_keyword_token8 = 32,
  aux_sym__mod_tags_keyword_token9 = 33,
  aux_sym__mod_tags_keyword_token10 = 34,
  aux_sym__mod_tags_keyword_token11 = 35,
  aux_sym__mod_tags_keyword_token12 = 36,
  aux_sym__mod_tags_keyword_token13 = 37,
  aux_sym__mod_tags_keyword_token14 = 38,
  aux_sym__mod_tags_keyword_token15 = 39,
  aux_sym__mod_tags_keyword_token16 = 40,
  aux_sym__mod_tags_keyword_token17 = 41,
  aux_sym__mod_tags_keyword_token18 = 42,
  aux_sym__mod_tags_keyword_token19 = 43,
  aux_sym__mod_tags_keyword_token20 = 44,
  aux_sym__mod_tags_keyword_token21 = 45,
  aux_sym__mod_tags_keyword_token22 = 46,
  anon_sym_dependencies = 47,
  anon_sym_cursor_offset = 48,
  aux_sym__statement_gfx_textureFile_token1 = 49,
  aux_sym__statement_gfx_textureFile_token2 = 50,
  anon_sym_noOfFrames = 51,
  anon_sym_overlay_frames_per_row = 52,
  anon_sym_overlay_rows = 53,
  anon_sym_effectFile = 54,
  aux_sym__statement_gfx_effectFile_token1 = 55,
  anon_sym_animation = 56,
  anon_sym_animationmaskfile = 57,
  anon_sym_animationtexturefile = 58,
  aux_sym__animation_entry_dds_token1 = 59,
  anon_sym_animationrotation = 60,
  anon_sym_animationlooping = 61,
  anon_sym_animationtime = 62,
  anon_sym_animationdelay = 63,
  anon_sym_animationrotationoffset = 64,
  anon_sym_animationtexturescale = 65,
  anon_sym_animationblendmode = 66,
  anon_sym_DQUOTEadd_DQUOTE = 67,
  anon_sym_DQUOTEmultiply_DQUOTE = 68,
  anon_sym_DQUOTEoverlay_DQUOTE = 69,
  anon_sym_animationtype = 70,
  anon_sym_DQUOTEscrolling_DQUOTE = 71,
  anon_sym_DQUOTErotating_DQUOTE = 72,
  anon_sym_DQUOTEpulsing_DQUOTE = 73,
  anon_sym_animationframes = 74,
  anon_sym_size = 75,
  anon_sym_borderSize = 76,
  anon_sym_allwaystransparent = 77,
  anon_sym_clicksound = 78,
  anon_sym_click = 79,
  sym_assign_equal = 80,
  sym_string = 81,
  sym_number = 82,
  aux_sym__number_precision_1_token1 = 83,
  sym_integer = 84,
  aux_sym__integer_positive_token1 = 85,
  sym_byte = 86,
  sym_angle = 87,
  anon_sym_true = 88,
  anon_sym_false = 89,
  anon_sym_yes = 90,
  anon_sym_no = 91,
  sym_comment = 92,
  sym_file = 93,
  sym_dot_mod = 94,
  sym_dot_gfx = 95,
  sym__spriteTypes = 96,
  sym__spriteTypes_block = 97,
  sym__spriteTypes_statement = 98,
  sym__spriteTypes_type = 99,
  sym__spriteType = 100,
  sym__spriteType_block = 101,
  sym__textSpriteType = 102,
  sym__textSpriteType_block = 103,
  sym__corneredTileSpriteType = 104,
  sym__corneredTileSpriteType_block = 105,
  sym__maskedShieldType = 106,
  sym__maskedShieldType_block = 107,
  sym__statement_name = 108,
  sym__statement_xy_integer = 109,
  sym__entry_x_integer = 110,
  sym__entry_y_integer = 111,
  sym__statement_xy_precision_1 = 112,
  sym__entry_x_precision_1 = 113,
  sym__entry_y_precision_1 = 114,
  sym__statement_mod_path = 115,
  sym__statement_mod_archive = 116,
  sym__statement_mod_remote_file_id = 117,
  sym__statement_mod_version = 118,
  sym__statement_mod_picture = 119,
  sym__statement_mod_supported_version = 120,
  sym__statement_mod_replace_path = 121,
  sym__mod_replace_path_folder = 122,
  sym__statement_mod_tags = 123,
  sym__mod_tags_block = 124,
  sym__mod_tags_keyword = 125,
  sym__statement_mod_dependencies = 126,
  sym__mod_dependencies_block = 127,
  sym__statement_gfx_cursor_offset = 128,
  sym__statement_gfx_textureFile = 129,
  sym__statement_gfx_noOfFrames = 130,
  sym__statement_gfx_overlay_frames_per_row = 131,
  sym__statement_gfx_overlay_rows = 132,
  sym__statement_gfx_effectFile = 133,
  sym__statement_gfx_animation = 134,
  sym__gfx_animation_block = 135,
  sym__animation_entry_dds = 136,
  sym__animation_entry_angle = 137,
  sym__animation_entry_bool = 138,
  sym__animation_entry_time = 139,
  sym__animation_entry_xy = 140,
  sym__animation_entry_blendmode = 141,
  sym__animation_entry_type = 142,
  sym__animation_entry_frames = 143,
  sym__statement_gfx_size = 144,
  sym__statement_gfx_borderSize = 145,
  sym__statement_gfx_allwaystransparent = 146,
  sym__statement_gfx_clicksound = 147,
  sym__number_precision_1 = 148,
  sym__integer_positive = 149,
  sym_time = 150,
  sym__yes_no = 151,
  aux_sym_dot_mod_repeat1 = 152,
  aux_sym_dot_gfx_repeat1 = 153,
  aux_sym__spriteTypes_block_repeat1 = 154,
  aux_sym__spriteType_block_repeat1 = 155,
  aux_sym__textSpriteType_block_repeat1 = 156,
  aux_sym__corneredTileSpriteType_block_repeat1 = 157,
  aux_sym__maskedShieldType_block_repeat1 = 158,
  aux_sym__mod_tags_block_repeat1 = 159,
  aux_sym__mod_dependencies_block_repeat1 = 160,
  aux_sym__gfx_animation_block_repeat1 = 161,
  aux_sym__animation_entry_frames_repeat1 = 162,
  alias_sym_dependencies = 163,
  alias_sym_name_value = 164,
  alias_sym_statement = 165,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_spriteTypes] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_spriteType] = "identifier",
  [anon_sym_textSpriteType] = "identifier",
  [anon_sym_corneredTileSpriteType] = "identifier",
  [anon_sym_maskedShieldType] = "identifier",
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
  [anon_sym_clicksound] = "identifier",
  [anon_sym_click] = "keywords",
  [sym_assign_equal] = "assign_equal",
  [sym_string] = "string",
  [sym_number] = "number",
  [aux_sym__number_precision_1_token1] = "_number_precision_1_token1",
  [sym_integer] = "integer",
  [aux_sym__integer_positive_token1] = "integer",
  [sym_byte] = "byte",
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
  [sym__spriteType] = "type_definition",
  [sym__spriteType_block] = "_spriteType_block",
  [sym__textSpriteType] = "type_definition",
  [sym__textSpriteType_block] = "_textSpriteType_block",
  [sym__corneredTileSpriteType] = "type_definition",
  [sym__corneredTileSpriteType_block] = "_corneredTileSpriteType_block",
  [sym__maskedShieldType] = "type_definition",
  [sym__maskedShieldType_block] = "_maskedShieldType_block",
  [sym__statement_name] = "_statement_name",
  [sym__statement_xy_integer] = "_statement_xy_integer",
  [sym__entry_x_integer] = "_entry_x_integer",
  [sym__entry_y_integer] = "_entry_y_integer",
  [sym__statement_xy_precision_1] = "_statement_xy_precision_1",
  [sym__entry_x_precision_1] = "_entry_x_precision_1",
  [sym__entry_y_precision_1] = "_entry_y_precision_1",
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
  [sym__animation_entry_xy] = "_animation_entry_xy",
  [sym__animation_entry_blendmode] = "_animation_entry_blendmode",
  [sym__animation_entry_type] = "_animation_entry_type",
  [sym__animation_entry_frames] = "_animation_entry_frames",
  [sym__statement_gfx_size] = "statement",
  [sym__statement_gfx_borderSize] = "statement",
  [sym__statement_gfx_allwaystransparent] = "statement",
  [sym__statement_gfx_clicksound] = "statement",
  [sym__number_precision_1] = "_number_precision_1",
  [sym__integer_positive] = "_integer_positive",
  [sym_time] = "time",
  [sym__yes_no] = "_yes_no",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_dot_gfx_repeat1] = "dot_gfx_repeat1",
  [aux_sym__spriteTypes_block_repeat1] = "_spriteTypes_block_repeat1",
  [aux_sym__spriteType_block_repeat1] = "_spriteType_block_repeat1",
  [aux_sym__textSpriteType_block_repeat1] = "_textSpriteType_block_repeat1",
  [aux_sym__corneredTileSpriteType_block_repeat1] = "_corneredTileSpriteType_block_repeat1",
  [aux_sym__maskedShieldType_block_repeat1] = "_maskedShieldType_block_repeat1",
  [aux_sym__mod_tags_block_repeat1] = "_mod_tags_block_repeat1",
  [aux_sym__mod_dependencies_block_repeat1] = "_mod_dependencies_block_repeat1",
  [aux_sym__gfx_animation_block_repeat1] = "_gfx_animation_block_repeat1",
  [aux_sym__animation_entry_frames_repeat1] = "_animation_entry_frames_repeat1",
  [alias_sym_dependencies] = "dependencies",
  [alias_sym_name_value] = "name_value",
  [alias_sym_statement] = "statement",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_spriteTypes] = anon_sym_spriteTypes,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_spriteType] = anon_sym_spriteTypes,
  [anon_sym_textSpriteType] = anon_sym_spriteTypes,
  [anon_sym_corneredTileSpriteType] = anon_sym_spriteTypes,
  [anon_sym_maskedShieldType] = anon_sym_spriteTypes,
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
  [anon_sym_clicksound] = anon_sym_spriteTypes,
  [anon_sym_click] = anon_sym_click,
  [sym_assign_equal] = sym_assign_equal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [aux_sym__number_precision_1_token1] = aux_sym__number_precision_1_token1,
  [sym_integer] = sym_integer,
  [aux_sym__integer_positive_token1] = sym_integer,
  [sym_byte] = sym_byte,
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
  [sym__spriteType] = sym__spriteType,
  [sym__spriteType_block] = sym__spriteType_block,
  [sym__textSpriteType] = sym__spriteType,
  [sym__textSpriteType_block] = sym__textSpriteType_block,
  [sym__corneredTileSpriteType] = sym__spriteType,
  [sym__corneredTileSpriteType_block] = sym__corneredTileSpriteType_block,
  [sym__maskedShieldType] = sym__spriteType,
  [sym__maskedShieldType_block] = sym__maskedShieldType_block,
  [sym__statement_name] = sym__statement_name,
  [sym__statement_xy_integer] = sym__statement_xy_integer,
  [sym__entry_x_integer] = sym__entry_x_integer,
  [sym__entry_y_integer] = sym__entry_y_integer,
  [sym__statement_xy_precision_1] = sym__statement_xy_precision_1,
  [sym__entry_x_precision_1] = sym__entry_x_precision_1,
  [sym__entry_y_precision_1] = sym__entry_y_precision_1,
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
  [sym__statement_gfx_cursor_offset] = sym__statement_gfx_cursor_offset,
  [sym__statement_gfx_textureFile] = sym__statement_gfx_cursor_offset,
  [sym__statement_gfx_noOfFrames] = sym__statement_gfx_cursor_offset,
  [sym__statement_gfx_overlay_frames_per_row] = sym__statement_gfx_cursor_offset,
  [sym__statement_gfx_overlay_rows] = sym__statement_gfx_cursor_offset,
  [sym__statement_gfx_effectFile] = sym__statement_gfx_cursor_offset,
  [sym__statement_gfx_animation] = sym__statement_gfx_cursor_offset,
  [sym__gfx_animation_block] = sym__gfx_animation_block,
  [sym__animation_entry_dds] = sym__animation_entry_dds,
  [sym__animation_entry_angle] = sym__animation_entry_angle,
  [sym__animation_entry_bool] = sym__animation_entry_bool,
  [sym__animation_entry_time] = sym__animation_entry_time,
  [sym__animation_entry_xy] = sym__animation_entry_xy,
  [sym__animation_entry_blendmode] = sym__animation_entry_blendmode,
  [sym__animation_entry_type] = sym__animation_entry_type,
  [sym__animation_entry_frames] = sym__animation_entry_frames,
  [sym__statement_gfx_size] = sym__statement_gfx_cursor_offset,
  [sym__statement_gfx_borderSize] = sym__statement_gfx_cursor_offset,
  [sym__statement_gfx_allwaystransparent] = sym__statement_gfx_cursor_offset,
  [sym__statement_gfx_clicksound] = sym__statement_gfx_cursor_offset,
  [sym__number_precision_1] = sym__number_precision_1,
  [sym__integer_positive] = sym__integer_positive,
  [sym_time] = sym_time,
  [sym__yes_no] = sym__yes_no,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_dot_gfx_repeat1] = aux_sym_dot_gfx_repeat1,
  [aux_sym__spriteTypes_block_repeat1] = aux_sym__spriteTypes_block_repeat1,
  [aux_sym__spriteType_block_repeat1] = aux_sym__spriteType_block_repeat1,
  [aux_sym__textSpriteType_block_repeat1] = aux_sym__textSpriteType_block_repeat1,
  [aux_sym__corneredTileSpriteType_block_repeat1] = aux_sym__corneredTileSpriteType_block_repeat1,
  [aux_sym__maskedShieldType_block_repeat1] = aux_sym__maskedShieldType_block_repeat1,
  [aux_sym__mod_tags_block_repeat1] = aux_sym__mod_tags_block_repeat1,
  [aux_sym__mod_dependencies_block_repeat1] = aux_sym__mod_dependencies_block_repeat1,
  [aux_sym__gfx_animation_block_repeat1] = aux_sym__gfx_animation_block_repeat1,
  [aux_sym__animation_entry_frames_repeat1] = aux_sym__animation_entry_frames_repeat1,
  [alias_sym_dependencies] = alias_sym_dependencies,
  [alias_sym_name_value] = alias_sym_name_value,
  [alias_sym_statement] = alias_sym_statement,
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
  [anon_sym_clicksound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_click] = {
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
  [aux_sym__number_precision_1_token1] = {
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
  [sym__statement_xy_precision_1] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_x_precision_1] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_y_precision_1] = {
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
  [sym__animation_entry_xy] = {
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
    .visible = true,
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
  [sym__statement_gfx_clicksound] = {
    .visible = true,
    .named = true,
  },
  [sym__number_precision_1] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_positive] = {
    .visible = false,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
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
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_name_value,
  },
  [2] = {
    [0] = alias_sym_dependencies,
  },
  [3] = {
    [0] = alias_sym_statement,
  },
  [4] = {
    [0] = sym_number,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1074);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '-') ADVANCE(1062);
      if (lookahead == '0') ADVANCE(1166);
      if (lookahead == '1') ADVANCE(1166);
      if (lookahead == '2') ADVANCE(1163);
      if (lookahead == '3') ADVANCE(1164);
      if (lookahead == '=') ADVANCE(1158);
      if (lookahead == '\\') SKIP(1070)
      if (lookahead == 'a') ADVANCE(860);
      if (lookahead == 'b') ADVANCE(911);
      if (lookahead == 'c') ADVANCE(863);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(801);
      if (lookahead == 'f') ADVANCE(694);
      if (lookahead == 'm') ADVANCE(687);
      if (lookahead == 'n') ADVANCE(688);
      if (lookahead == 'o') ADVANCE(1039);
      if (lookahead == 'p') ADVANCE(690);
      if (lookahead == 'r') ADVANCE(738);
      if (lookahead == 's') ADVANCE(819);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead == 'v') ADVANCE(790);
      if (lookahead == 'x') ADVANCE(1084);
      if (lookahead == 'y') ADVANCE(1086);
      if (lookahead == '{') ADVANCE(1076);
      if (lookahead == '}') ADVANCE(1077);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1166);
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
      if (lookahead == '\n') SKIP(415)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(415)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(416)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(416)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(417)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(417)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(419)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(419)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(310);
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(648);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(649);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(643);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(647);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(645);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(646);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(644);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(337);
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1091);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(208);
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead == 'G') ADVANCE(39);
      if (lookahead == 'H') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'g') ADVANCE(38);
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1091);
      if (lookahead == '.') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1091);
      if (lookahead == '.') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1091);
      if (lookahead == 'c') ADVANCE(917);
      if (lookahead == 'd') ADVANCE(791);
      if (lookahead == 'e') ADVANCE(1038);
      if (lookahead == 'g') ADVANCE(802);
      if (lookahead == 'h') ADVANCE(837);
      if (lookahead == 'i') ADVANCE(905);
      if (lookahead == 'l') ADVANCE(934);
      if (lookahead == 'm') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'j') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'z') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'j') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'z') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'j') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'z') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'K') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'j') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'z') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'j') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'z') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'j') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'z') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'g') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'g') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'g') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'g') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'g') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'g') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'h') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'y') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'j') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 'z') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'w') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'y') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'y') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'y') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'y') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'y') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(1111);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(1111);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(1144);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(1144);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'j') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == 'z') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 330:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 's') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(1093);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(1093);
      if (lookahead == '.') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(1093);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(1093);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(1095);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(1095);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(1095);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(1089);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(1089);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(1089);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(1126);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(1126);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(1131);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(1131);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(1108);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(1108);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(1117);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(1117);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(1105);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(1105);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(1119);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(1119);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(1097);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(1097);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(1097);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(1097);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(1097);
      if (lookahead == '.') ADVANCE(421);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(1097);
      if (lookahead == '.') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(1097);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(1103);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(1103);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(1146);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(1146);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(1150);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(1150);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(1102);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(1102);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(1106);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(1106);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(1112);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(1116);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(1116);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(1145);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(1145);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(1149);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(1149);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(1104);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(1104);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(1148);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(1148);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(1121);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 396:
      if (lookahead == '"') ADVANCE(1121);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 397:
      if (lookahead == '"') ADVANCE(1109);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 398:
      if (lookahead == '"') ADVANCE(1109);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 399:
      if (lookahead == '"') ADVANCE(1115);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 400:
      if (lookahead == '"') ADVANCE(1115);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 401:
      if (lookahead == '"') ADVANCE(1120);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 402:
      if (lookahead == '"') ADVANCE(1120);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 403:
      if (lookahead == '"') ADVANCE(1118);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 404:
      if (lookahead == '"') ADVANCE(1118);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 405:
      if (lookahead == '"') ADVANCE(1110);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 406:
      if (lookahead == '"') ADVANCE(1110);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 407:
      if (lookahead == '"') ADVANCE(1114);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 408:
      if (lookahead == '"') ADVANCE(1114);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 409:
      if (lookahead == '"') ADVANCE(1101);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 410:
      if (lookahead == '"') ADVANCE(1101);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 411:
      if (lookahead == '"') ADVANCE(1122);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 412:
      if (lookahead == '"') ADVANCE(1122);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 413:
      if (lookahead == '"') ADVANCE(1113);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 414:
      if (lookahead == '"') ADVANCE(1113);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 415:
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '=') ADVANCE(1158);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(910);
      if (lookahead == 'c') ADVANCE(879);
      if (lookahead == 'm') ADVANCE(687);
      if (lookahead == 'n') ADVANCE(912);
      if (lookahead == 's') ADVANCE(952);
      if (lookahead == 't') ADVANCE(792);
      if (lookahead == 'y') ADVANCE(762);
      if (lookahead == '{') ADVANCE(1076);
      if (lookahead == '}') ADVANCE(1077);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(415)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(652);
      END_STATE();
    case 416:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '0') ADVANCE(653);
      if (lookahead == '3') ADVANCE(655);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(657);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(416)
      END_STATE();
    case 417:
      if (lookahead == '"') ADVANCE(1068);
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '-') ADVANCE(1066);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(417)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1169);
      END_STATE();
    case 418:
      if (lookahead == '"') ADVANCE(1136);
      if (lookahead == '.') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(661);
      END_STATE();
    case 419:
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '-') ADVANCE(1062);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(419)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      END_STATE();
    case 420:
      if (lookahead == '*') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 421:
      if (lookahead == '*') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 422:
      if (lookahead == '.') ADVANCE(525);
      if (lookahead == 'A') ADVANCE(526);
      if (lookahead == 'M') ADVANCE(431);
      if (lookahead == 'R') ADVANCE(470);
      if (lookahead == 'S') ADVANCE(565);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(430);
      if (lookahead == 'o') ADVANCE(632);
      if (lookahead == 'p') ADVANCE(629);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead == 's') ADVANCE(449);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(432);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(498);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(427);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(499);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(568);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 423:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'C') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 424:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 425:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 426:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'K') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 427:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 428:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 429:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 430:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 431:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 432:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 433:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 434:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 435:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 436:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 437:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 438:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 439:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 440:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 441:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 442:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 443:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 444:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 445:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 446:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 447:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 448:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'a') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 449:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 450:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 451:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 452:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 453:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 454:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 455:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'c') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 456:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(464);
      if (lookahead == 'l') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 457:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(459);
      if (lookahead == 'j') ADVANCE(581);
      if (lookahead == 'l') ADVANCE(631);
      if (lookahead == 'p') ADVANCE(545);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'z') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 458:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(459);
      if (lookahead == 'j') ADVANCE(581);
      if (lookahead == 'l') ADVANCE(631);
      if (lookahead == 'p') ADVANCE(545);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'z') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 459:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 460:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 461:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 462:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 463:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 464:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 465:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 466:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 467:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 468:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 469:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == 'o') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 470:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 471:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 472:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 473:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 474:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 475:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 476:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 477:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 478:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 479:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 480:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 481:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 482:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 483:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 484:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 485:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 486:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 487:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 488:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'g') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 489:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'g') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 490:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'g') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 491:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'g') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 492:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'g') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 493:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'g') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 494:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'g') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 495:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'g') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 496:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'h') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 497:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'h') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 498:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 499:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 500:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 501:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 502:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 503:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 504:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 505:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 506:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 507:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 508:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 509:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 510:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 511:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 512:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 513:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 514:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 515:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 516:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 517:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 518:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 519:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 520:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 521:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 522:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 523:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 524:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 525:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'j') ADVANCE(581);
      if (lookahead == 'p') ADVANCE(545);
      if (lookahead == 'z') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 526:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 527:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 528:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 529:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 530:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 531:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 532:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 533:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 534:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 535:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 536:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 537:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 538:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 539:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 540:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 541:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 542:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 543:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 544:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 545:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 546:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 547:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 548:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 549:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 550:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 551:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 552:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 553:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 554:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 555:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 556:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 557:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 558:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 559:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 560:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 561:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 562:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 563:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 564:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 565:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 566:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 567:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 568:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 569:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 570:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 571:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 572:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 573:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 574:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 575:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 576:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 577:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 578:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 579:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 580:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 581:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 582:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 583:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 584:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 585:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 586:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 587:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 588:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 589:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 590:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 591:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 592:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 593:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 594:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 595:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 596:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 597:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 598:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 599:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 600:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 601:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 602:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 603:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 604:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 605:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 606:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 607:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 608:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 609:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 610:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 611:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 612:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 613:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 614:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 615:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 616:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 617:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 618:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 619:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 620:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 621:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 622:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 623:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 624:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 625:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 626:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 627:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 628:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 629:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 630:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 631:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 632:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'v') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 633:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'v') ADVANCE(473);
      if (lookahead == 'x') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 634:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'v') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 635:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'v') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 636:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'w') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 637:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'x') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 638:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'y') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 639:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'y') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 640:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'y') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 641:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'y') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 642:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'y') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 643:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 644:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 645:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 646:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 647:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 648:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 649:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 650:
      if (lookahead == '.') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(650);
      END_STATE();
    case 651:
      if (lookahead == '.') ADVANCE(663);
      END_STATE();
    case 652:
      if (lookahead == '.') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(652);
      END_STATE();
    case 653:
      if (lookahead == '.') ADVANCE(1065);
      END_STATE();
    case 654:
      if (lookahead == '.') ADVANCE(1065);
      if (lookahead == '0') ADVANCE(651);
      END_STATE();
    case 655:
      if (lookahead == '.') ADVANCE(1065);
      if (lookahead == '6') ADVANCE(654);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(656);
      END_STATE();
    case 656:
      if (lookahead == '.') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      END_STATE();
    case 657:
      if (lookahead == '.') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      END_STATE();
    case 658:
      if (lookahead == '.') ADVANCE(659);
      if (lookahead == 'd') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 659:
      if (lookahead == '.') ADVANCE(659);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 660:
      if (lookahead == '.') ADVANCE(659);
      if (lookahead == 's') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 661:
      if (lookahead == '.') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 662:
      if (lookahead == '0') ADVANCE(1167);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1167);
      END_STATE();
    case 663:
      if (lookahead == '0') ADVANCE(1171);
      END_STATE();
    case 664:
      if (lookahead == 'F') ADVANCE(824);
      END_STATE();
    case 665:
      if (lookahead == 'F') ADVANCE(962);
      END_STATE();
    case 666:
      if (lookahead == 'O') ADVANCE(800);
      END_STATE();
    case 667:
      if (lookahead == 'S') ADVANCE(950);
      END_STATE();
    case 668:
      if (lookahead == 'S') ADVANCE(950);
      if (lookahead == 'u') ADVANCE(968);
      END_STATE();
    case 669:
      if (lookahead == 'S') ADVANCE(833);
      END_STATE();
    case 670:
      if (lookahead == 'S') ADVANCE(818);
      END_STATE();
    case 671:
      if (lookahead == 'S') ADVANCE(951);
      END_STATE();
    case 672:
      if (lookahead == 'T') ADVANCE(1053);
      END_STATE();
    case 673:
      if (lookahead == 'T') ADVANCE(842);
      END_STATE();
    case 674:
      if (lookahead == 'T') ADVANCE(1054);
      END_STATE();
    case 675:
      if (lookahead == 'T') ADVANCE(1055);
      END_STATE();
    case 676:
      if (lookahead == 'T') ADVANCE(1056);
      END_STATE();
    case 677:
      if (lookahead == 'T') ADVANCE(1057);
      END_STATE();
    case 678:
      if (lookahead == 'T') ADVANCE(1058);
      END_STATE();
    case 679:
      if (lookahead == '_') ADVANCE(810);
      END_STATE();
    case 680:
      if (lookahead == '_') ADVANCE(807);
      END_STATE();
    case 681:
      if (lookahead == '_') ADVANCE(931);
      END_STATE();
    case 682:
      if (lookahead == '_') ADVANCE(938);
      END_STATE();
    case 683:
      if (lookahead == '_') ADVANCE(827);
      END_STATE();
    case 684:
      if (lookahead == '_') ADVANCE(965);
      END_STATE();
    case 685:
      if (lookahead == '_') ADVANCE(949);
      END_STATE();
    case 686:
      if (lookahead == '_') ADVANCE(1040);
      END_STATE();
    case 687:
      if (lookahead == 'a') ADVANCE(980);
      END_STATE();
    case 688:
      if (lookahead == 'a') ADVANCE(883);
      if (lookahead == 'o') ADVANCE(1176);
      END_STATE();
    case 689:
      if (lookahead == 'a') ADVANCE(883);
      if (lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 690:
      if (lookahead == 'a') ADVANCE(1009);
      if (lookahead == 'i') ADVANCE(716);
      END_STATE();
    case 691:
      if (lookahead == 'a') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(1045);
      if (lookahead == 'r') ADVANCE(1033);
      END_STATE();
    case 692:
      if (lookahead == 'a') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(1047);
      END_STATE();
    case 693:
      if (lookahead == 'a') ADVANCE(1052);
      END_STATE();
    case 694:
      if (lookahead == 'a') ADVANCE(864);
      END_STATE();
    case 695:
      if (lookahead == 'a') ADVANCE(1051);
      END_STATE();
    case 696:
      if (lookahead == 'a') ADVANCE(722);
      END_STATE();
    case 697:
      if (lookahead == 'a') ADVANCE(1049);
      END_STATE();
    case 698:
      if (lookahead == 'a') ADVANCE(1017);
      END_STATE();
    case 699:
      if (lookahead == 'a') ADVANCE(869);
      END_STATE();
    case 700:
      if (lookahead == 'a') ADVANCE(935);
      if (lookahead == 'i') ADVANCE(1002);
      END_STATE();
    case 701:
      if (lookahead == 'a') ADVANCE(903);
      END_STATE();
    case 702:
      if (lookahead == 'a') ADVANCE(989);
      END_STATE();
    case 703:
      if (lookahead == 'a') ADVANCE(885);
      END_STATE();
    case 704:
      if (lookahead == 'a') ADVANCE(1011);
      END_STATE();
    case 705:
      if (lookahead == 'a') ADVANCE(723);
      END_STATE();
    case 706:
      if (lookahead == 'a') ADVANCE(886);
      END_STATE();
    case 707:
      if (lookahead == 'a') ADVANCE(887);
      END_STATE();
    case 708:
      if (lookahead == 'a') ADVANCE(969);
      END_STATE();
    case 709:
      if (lookahead == 'a') ADVANCE(877);
      END_STATE();
    case 710:
      if (lookahead == 'a') ADVANCE(1018);
      END_STATE();
    case 711:
      if (lookahead == 'a') ADVANCE(1020);
      END_STATE();
    case 712:
      if (lookahead == 'a') ADVANCE(1022);
      END_STATE();
    case 713:
      if (lookahead == 'a') ADVANCE(1023);
      END_STATE();
    case 714:
      if (lookahead == 'b') ADVANCE(873);
      if (lookahead == 'd') ADVANCE(793);
      if (lookahead == 'f') ADVANCE(975);
      if (lookahead == 'l') ADVANCE(921);
      if (lookahead == 'm') ADVANCE(702);
      if (lookahead == 'r') ADVANCE(923);
      if (lookahead == 't') ADVANCE(799);
      END_STATE();
    case 715:
      if (lookahead == 'c') ADVANCE(817);
      END_STATE();
    case 716:
      if (lookahead == 'c') ADVANCE(1008);
      END_STATE();
    case 717:
      if (lookahead == 'c') ADVANCE(855);
      END_STATE();
    case 718:
      if (lookahead == 'c') ADVANCE(858);
      END_STATE();
    case 719:
      if (lookahead == 'c') ADVANCE(856);
      END_STATE();
    case 720:
      if (lookahead == 'c') ADVANCE(1010);
      END_STATE();
    case 721:
      if (lookahead == 'c') ADVANCE(848);
      END_STATE();
    case 722:
      if (lookahead == 'c') ADVANCE(771);
      END_STATE();
    case 723:
      if (lookahead == 'c') ADVANCE(766);
      END_STATE();
    case 724:
      if (lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 725:
      if (lookahead == 'c') ADVANCE(831);
      END_STATE();
    case 726:
      if (lookahead == 'c') ADVANCE(699);
      END_STATE();
    case 727:
      if (lookahead == 'd') ADVANCE(1155);
      END_STATE();
    case 728:
      if (lookahead == 'd') ADVANCE(1090);
      END_STATE();
    case 729:
      if (lookahead == 'd') ADVANCE(670);
      END_STATE();
    case 730:
      if (lookahead == 'd') ADVANCE(673);
      END_STATE();
    case 731:
      if (lookahead == 'd') ADVANCE(884);
      END_STATE();
    case 732:
      if (lookahead == 'd') ADVANCE(686);
      END_STATE();
    case 733:
      if (lookahead == 'd') ADVANCE(770);
      END_STATE();
    case 734:
      if (lookahead == 'd') ADVANCE(754);
      END_STATE();
    case 735:
      if (lookahead == 'd') ADVANCE(774);
      END_STATE();
    case 736:
      if (lookahead == 'd') ADVANCE(675);
      END_STATE();
    case 737:
      if (lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 738:
      if (lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 739:
      if (lookahead == 'e') ADVANCE(1083);
      END_STATE();
    case 740:
      if (lookahead == 'e') ADVANCE(1152);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(1172);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(1173);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 744:
      if (lookahead == 'e') ADVANCE(1088);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(1094);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 747:
      if (lookahead == 'e') ADVANCE(1153);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(1130);
      END_STATE();
    case 749:
      if (lookahead == 'e') ADVANCE(1079);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 751:
      if (lookahead == 'e') ADVANCE(1080);
      END_STATE();
    case 752:
      if (lookahead == 'e') ADVANCE(1082);
      END_STATE();
    case 753:
      if (lookahead == 'e') ADVANCE(1134);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(1143);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(1081);
      END_STATE();
    case 756:
      if (lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 757:
      if (lookahead == 'e') ADVANCE(1139);
      END_STATE();
    case 758:
      if (lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 759:
      if (lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 760:
      if (lookahead == 'e') ADVANCE(1135);
      END_STATE();
    case 761:
      if (lookahead == 'e') ADVANCE(1142);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 763:
      if (lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 764:
      if (lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 765:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 766:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 767:
      if (lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 768:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 769:
      if (lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 770:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 771:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 772:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 773:
      if (lookahead == 'e') ADVANCE(971);
      END_STATE();
    case 774:
      if (lookahead == 'e') ADVANCE(955);
      END_STATE();
    case 775:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 776:
      if (lookahead == 'e') ADVANCE(966);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(983);
      END_STATE();
    case 778:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 779:
      if (lookahead == 'e') ADVANCE(1005);
      END_STATE();
    case 780:
      if (lookahead == 'e') ADVANCE(985);
      END_STATE();
    case 781:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 782:
      if (lookahead == 'e') ADVANCE(1007);
      END_STATE();
    case 783:
      if (lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(993);
      END_STATE();
    case 785:
      if (lookahead == 'e') ADVANCE(987);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(961);
      END_STATE();
    case 787:
      if (lookahead == 'e') ADVANCE(984);
      END_STATE();
    case 788:
      if (lookahead == 'e') ADVANCE(906);
      END_STATE();
    case 789:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 790:
      if (lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(1046);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(868);
      END_STATE();
    case 794:
      if (lookahead == 'e') ADVANCE(972);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 796:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(1048);
      if (lookahead == 'i') ADVANCE(888);
      if (lookahead == 'y') ADVANCE(947);
      END_STATE();
    case 800:
      if (lookahead == 'f') ADVANCE(665);
      END_STATE();
    case 801:
      if (lookahead == 'f') ADVANCE(803);
      END_STATE();
    case 802:
      if (lookahead == 'f') ADVANCE(1044);
      END_STATE();
    case 803:
      if (lookahead == 'f') ADVANCE(789);
      END_STATE();
    case 804:
      if (lookahead == 'f') ADVANCE(805);
      END_STATE();
    case 805:
      if (lookahead == 'f') ADVANCE(996);
      END_STATE();
    case 806:
      if (lookahead == 'f') ADVANCE(705);
      END_STATE();
    case 807:
      if (lookahead == 'f') ADVANCE(835);
      END_STATE();
    case 808:
      if (lookahead == 'f') ADVANCE(997);
      END_STATE();
    case 809:
      if (lookahead == 'f') ADVANCE(808);
      END_STATE();
    case 810:
      if (lookahead == 'f') ADVANCE(974);
      if (lookahead == 'r') ADVANCE(913);
      END_STATE();
    case 811:
      if (lookahead == 'f') ADVANCE(844);
      END_STATE();
    case 812:
      if (lookahead == 'f') ADVANCE(846);
      if (lookahead == 's') ADVANCE(724);
      END_STATE();
    case 813:
      if (lookahead == 'g') ADVANCE(1138);
      END_STATE();
    case 814:
      if (lookahead == 'g') ADVANCE(982);
      END_STATE();
    case 815:
      if (lookahead == 'h') ADVANCE(1087);
      END_STATE();
    case 816:
      if (lookahead == 'h') ADVANCE(1098);
      END_STATE();
    case 817:
      if (lookahead == 'h') ADVANCE(832);
      END_STATE();
    case 818:
      if (lookahead == 'h') ADVANCE(830);
      END_STATE();
    case 819:
      if (lookahead == 'i') ADVANCE(1059);
      if (lookahead == 'p') ADVANCE(957);
      if (lookahead == 'u') ADVANCE(936);
      END_STATE();
    case 820:
      if (lookahead == 'i') ADVANCE(1059);
      if (lookahead == 'p') ADVANCE(978);
      if (lookahead == 'u') ADVANCE(936);
      END_STATE();
    case 821:
      if (lookahead == 'i') ADVANCE(881);
      END_STATE();
    case 822:
      if (lookahead == 'i') ADVANCE(916);
      END_STATE();
    case 823:
      if (lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 824:
      if (lookahead == 'i') ADVANCE(870);
      END_STATE();
    case 825:
      if (lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 826:
      if (lookahead == 'i') ADVANCE(719);
      END_STATE();
    case 827:
      if (lookahead == 'i') ADVANCE(728);
      END_STATE();
    case 828:
      if (lookahead == 'i') ADVANCE(898);
      END_STATE();
    case 829:
      if (lookahead == 'i') ADVANCE(1003);
      END_STATE();
    case 830:
      if (lookahead == 'i') ADVANCE(772);
      END_STATE();
    case 831:
      if (lookahead == 'i') ADVANCE(780);
      END_STATE();
    case 832:
      if (lookahead == 'i') ADVANCE(1037);
      END_STATE();
    case 833:
      if (lookahead == 'i') ADVANCE(1060);
      END_STATE();
    case 834:
      if (lookahead == 'i') ADVANCE(919);
      END_STATE();
    case 835:
      if (lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 836:
      if (lookahead == 'i') ADVANCE(1014);
      END_STATE();
    case 837:
      if (lookahead == 'i') ADVANCE(995);
      END_STATE();
    case 838:
      if (lookahead == 'i') ADVANCE(925);
      END_STATE();
    case 839:
      if (lookahead == 'i') ADVANCE(872);
      END_STATE();
    case 840:
      if (lookahead == 'i') ADVANCE(926);
      END_STATE();
    case 841:
      if (lookahead == 'i') ADVANCE(927);
      END_STATE();
    case 842:
      if (lookahead == 'i') ADVANCE(874);
      END_STATE();
    case 843:
      if (lookahead == 'i') ADVANCE(929);
      END_STATE();
    case 844:
      if (lookahead == 'i') ADVANCE(875);
      END_STATE();
    case 845:
      if (lookahead == 'i') ADVANCE(930);
      END_STATE();
    case 846:
      if (lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 847:
      if (lookahead == 'i') ADVANCE(932);
      END_STATE();
    case 848:
      if (lookahead == 'i') ADVANCE(1001);
      END_STATE();
    case 849:
      if (lookahead == 'i') ADVANCE(1027);
      END_STATE();
    case 850:
      if (lookahead == 'i') ADVANCE(1028);
      END_STATE();
    case 851:
      if (lookahead == 'i') ADVANCE(890);
      END_STATE();
    case 852:
      if (lookahead == 'i') ADVANCE(1029);
      END_STATE();
    case 853:
      if (lookahead == 'i') ADVANCE(891);
      END_STATE();
    case 854:
      if (lookahead == 'i') ADVANCE(1030);
      END_STATE();
    case 855:
      if (lookahead == 'k') ADVANCE(1157);
      END_STATE();
    case 856:
      if (lookahead == 'k') ADVANCE(1156);
      END_STATE();
    case 857:
      if (lookahead == 'k') ADVANCE(763);
      END_STATE();
    case 858:
      if (lookahead == 'k') ADVANCE(990);
      END_STATE();
    case 859:
      if (lookahead == 'k') ADVANCE(811);
      END_STATE();
    case 860:
      if (lookahead == 'l') ADVANCE(862);
      if (lookahead == 'n') ADVANCE(821);
      if (lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 861:
      if (lookahead == 'l') ADVANCE(862);
      if (lookahead == 'n') ADVANCE(851);
      if (lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 862:
      if (lookahead == 'l') ADVANCE(1042);
      END_STATE();
    case 863:
      if (lookahead == 'l') ADVANCE(823);
      if (lookahead == 'o') ADVANCE(954);
      if (lookahead == 'u') ADVANCE(958);
      END_STATE();
    case 864:
      if (lookahead == 'l') ADVANCE(994);
      END_STATE();
    case 865:
      if (lookahead == 'l') ADVANCE(696);
      END_STATE();
    case 866:
      if (lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 867:
      if (lookahead == 'l') ADVANCE(736);
      END_STATE();
    case 868:
      if (lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 869:
      if (lookahead == 'l') ADVANCE(829);
      END_STATE();
    case 870:
      if (lookahead == 'l') ADVANCE(748);
      END_STATE();
    case 871:
      if (lookahead == 'l') ADVANCE(775);
      END_STATE();
    case 872:
      if (lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 873:
      if (lookahead == 'l') ADVANCE(778);
      END_STATE();
    case 874:
      if (lookahead == 'l') ADVANCE(768);
      END_STATE();
    case 875:
      if (lookahead == 'l') ADVANCE(753);
      END_STATE();
    case 876:
      if (lookahead == 'l') ADVANCE(760);
      END_STATE();
    case 877:
      if (lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 878:
      if (lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 879:
      if (lookahead == 'l') ADVANCE(826);
      if (lookahead == 'o') ADVANCE(954);
      if (lookahead == 'u') ADVANCE(958);
      END_STATE();
    case 880:
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == 'p') ADVANCE(865);
      END_STATE();
    case 881:
      if (lookahead == 'm') ADVANCE(698);
      END_STATE();
    case 882:
      if (lookahead == 'm') ADVANCE(889);
      END_STATE();
    case 883:
      if (lookahead == 'm') ADVANCE(739);
      END_STATE();
    case 884:
      if (lookahead == 'm') ADVANCE(933);
      END_STATE();
    case 885:
      if (lookahead == 'm') ADVANCE(777);
      END_STATE();
    case 886:
      if (lookahead == 'm') ADVANCE(784);
      END_STATE();
    case 887:
      if (lookahead == 'm') ADVANCE(785);
      END_STATE();
    case 888:
      if (lookahead == 'm') ADVANCE(757);
      END_STATE();
    case 889:
      if (lookahead == 'm') ADVANCE(930);
      END_STATE();
    case 890:
      if (lookahead == 'm') ADVANCE(711);
      END_STATE();
    case 891:
      if (lookahead == 'm') ADVANCE(712);
      END_STATE();
    case 892:
      if (lookahead == 'n') ADVANCE(1092);
      END_STATE();
    case 893:
      if (lookahead == 'n') ADVANCE(1133);
      END_STATE();
    case 894:
      if (lookahead == 'n') ADVANCE(1137);
      END_STATE();
    case 895:
      if (lookahead == 'n') ADVANCE(1096);
      END_STATE();
    case 896:
      if (lookahead == 'n') ADVANCE(1132);
      END_STATE();
    case 897:
      if (lookahead == 'n') ADVANCE(714);
      END_STATE();
    case 898:
      if (lookahead == 'n') ADVANCE(813);
      END_STATE();
    case 899:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 900:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 901:
      if (lookahead == 'n') ADVANCE(727);
      END_STATE();
    case 902:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 903:
      if (lookahead == 'n') ADVANCE(999);
      END_STATE();
    case 904:
      if (lookahead == 'n') ADVANCE(1006);
      END_STATE();
    case 905:
      if (lookahead == 'n') ADVANCE(1021);
      END_STATE();
    case 906:
      if (lookahead == 'n') ADVANCE(1015);
      END_STATE();
    case 907:
      if (lookahead == 'n') ADVANCE(988);
      END_STATE();
    case 908:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 909:
      if (lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 910:
      if (lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 911:
      if (lookahead == 'o') ADVANCE(953);
      END_STATE();
    case 912:
      if (lookahead == 'o') ADVANCE(1175);
      END_STATE();
    case 913:
      if (lookahead == 'o') ADVANCE(1043);
      END_STATE();
    case 914:
      if (lookahead == 'o') ADVANCE(1032);
      END_STATE();
    case 915:
      if (lookahead == 'o') ADVANCE(1041);
      END_STATE();
    case 916:
      if (lookahead == 'o') ADVANCE(892);
      END_STATE();
    case 917:
      if (lookahead == 'o') ADVANCE(882);
      END_STATE();
    case 918:
      if (lookahead == 'o') ADVANCE(1012);
      END_STATE();
    case 919:
      if (lookahead == 'o') ADVANCE(893);
      END_STATE();
    case 920:
      if (lookahead == 'o') ADVANCE(939);
      END_STATE();
    case 921:
      if (lookahead == 'o') ADVANCE(920);
      END_STATE();
    case 922:
      if (lookahead == 'o') ADVANCE(956);
      END_STATE();
    case 923:
      if (lookahead == 'o') ADVANCE(1026);
      END_STATE();
    case 924:
      if (lookahead == 'o') ADVANCE(973);
      END_STATE();
    case 925:
      if (lookahead == 'o') ADVANCE(894);
      END_STATE();
    case 926:
      if (lookahead == 'o') ADVANCE(895);
      END_STATE();
    case 927:
      if (lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 928:
      if (lookahead == 'o') ADVANCE(959);
      END_STATE();
    case 929:
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 930:
      if (lookahead == 'o') ADVANCE(899);
      END_STATE();
    case 931:
      if (lookahead == 'o') ADVANCE(804);
      END_STATE();
    case 932:
      if (lookahead == 'o') ADVANCE(907);
      END_STATE();
    case 933:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 934:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 935:
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 936:
      if (lookahead == 'p') ADVANCE(948);
      END_STATE();
    case 937:
      if (lookahead == 'p') ADVANCE(764);
      END_STATE();
    case 938:
      if (lookahead == 'p') ADVANCE(704);
      END_STATE();
    case 939:
      if (lookahead == 'p') ADVANCE(828);
      END_STATE();
    case 940:
      if (lookahead == 'p') ADVANCE(708);
      END_STATE();
    case 941:
      if (lookahead == 'p') ADVANCE(749);
      END_STATE();
    case 942:
      if (lookahead == 'p') ADVANCE(751);
      END_STATE();
    case 943:
      if (lookahead == 'p') ADVANCE(752);
      END_STATE();
    case 944:
      if (lookahead == 'p') ADVANCE(755);
      END_STATE();
    case 945:
      if (lookahead == 'p') ADVANCE(787);
      END_STATE();
    case 946:
      if (lookahead == 'p') ADVANCE(756);
      END_STATE();
    case 947:
      if (lookahead == 'p') ADVANCE(758);
      END_STATE();
    case 948:
      if (lookahead == 'p') ADVANCE(924);
      END_STATE();
    case 949:
      if (lookahead == 'p') ADVANCE(783);
      END_STATE();
    case 950:
      if (lookahead == 'p') ADVANCE(976);
      END_STATE();
    case 951:
      if (lookahead == 'p') ADVANCE(977);
      END_STATE();
    case 952:
      if (lookahead == 'p') ADVANCE(979);
      END_STATE();
    case 953:
      if (lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 954:
      if (lookahead == 'r') ADVANCE(909);
      END_STATE();
    case 955:
      if (lookahead == 'r') ADVANCE(669);
      END_STATE();
    case 956:
      if (lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 957:
      if (lookahead == 'r') ADVANCE(836);
      END_STATE();
    case 958:
      if (lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 959:
      if (lookahead == 'r') ADVANCE(1050);
      END_STATE();
    case 960:
      if (lookahead == 'r') ADVANCE(991);
      END_STATE();
    case 961:
      if (lookahead == 'r') ADVANCE(806);
      END_STATE();
    case 962:
      if (lookahead == 'r') ADVANCE(703);
      END_STATE();
    case 963:
      if (lookahead == 'r') ADVANCE(701);
      END_STATE();
    case 964:
      if (lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 965:
      if (lookahead == 'r') ADVANCE(915);
      END_STATE();
    case 966:
      if (lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 967:
      if (lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 968:
      if (lookahead == 'r') ADVANCE(746);
      END_STATE();
    case 969:
      if (lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 970:
      if (lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 971:
      if (lookahead == 'r') ADVANCE(866);
      END_STATE();
    case 972:
      if (lookahead == 'r') ADVANCE(1000);
      END_STATE();
    case 973:
      if (lookahead == 'r') ADVANCE(1016);
      END_STATE();
    case 974:
      if (lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 975:
      if (lookahead == 'r') ADVANCE(707);
      END_STATE();
    case 976:
      if (lookahead == 'r') ADVANCE(849);
      END_STATE();
    case 977:
      if (lookahead == 'r') ADVANCE(850);
      END_STATE();
    case 978:
      if (lookahead == 'r') ADVANCE(852);
      END_STATE();
    case 979:
      if (lookahead == 'r') ADVANCE(854);
      END_STATE();
    case 980:
      if (lookahead == 's') ADVANCE(857);
      END_STATE();
    case 981:
      if (lookahead == 's') ADVANCE(1174);
      END_STATE();
    case 982:
      if (lookahead == 's') ADVANCE(1100);
      END_STATE();
    case 983:
      if (lookahead == 's') ADVANCE(1127);
      END_STATE();
    case 984:
      if (lookahead == 's') ADVANCE(1075);
      END_STATE();
    case 985:
      if (lookahead == 's') ADVANCE(1123);
      END_STATE();
    case 986:
      if (lookahead == 's') ADVANCE(1129);
      END_STATE();
    case 987:
      if (lookahead == 's') ADVANCE(1151);
      END_STATE();
    case 988:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 989:
      if (lookahead == 's') ADVANCE(859);
      END_STATE();
    case 990:
      if (lookahead == 's') ADVANCE(914);
      END_STATE();
    case 991:
      if (lookahead == 's') ADVANCE(822);
      END_STATE();
    case 992:
      if (lookahead == 's') ADVANCE(1013);
      END_STATE();
    case 993:
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 994:
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 995:
      if (lookahead == 's') ADVANCE(1019);
      END_STATE();
    case 996:
      if (lookahead == 's') ADVANCE(779);
      END_STATE();
    case 997:
      if (lookahead == 's') ADVANCE(782);
      END_STATE();
    case 998:
      if (lookahead == 's') ADVANCE(922);
      END_STATE();
    case 999:
      if (lookahead == 's') ADVANCE(940);
      END_STATE();
    case 1000:
      if (lookahead == 's') ADVANCE(840);
      END_STATE();
    case 1001:
      if (lookahead == 's') ADVANCE(847);
      END_STATE();
    case 1002:
      if (lookahead == 's') ADVANCE(1001);
      END_STATE();
    case 1003:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 1004:
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 1005:
      if (lookahead == 't') ADVANCE(1124);
      END_STATE();
    case 1006:
      if (lookahead == 't') ADVANCE(1154);
      END_STATE();
    case 1007:
      if (lookahead == 't') ADVANCE(1141);
      END_STATE();
    case 1008:
      if (lookahead == 't') ADVANCE(1034);
      END_STATE();
    case 1009:
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 1010:
      if (lookahead == 't') ADVANCE(664);
      END_STATE();
    case 1011:
      if (lookahead == 't') ADVANCE(816);
      END_STATE();
    case 1012:
      if (lookahead == 't') ADVANCE(765);
      END_STATE();
    case 1013:
      if (lookahead == 't') ADVANCE(963);
      END_STATE();
    case 1014:
      if (lookahead == 't') ADVANCE(743);
      END_STATE();
    case 1015:
      if (lookahead == 't') ADVANCE(988);
      END_STATE();
    case 1016:
      if (lookahead == 't') ADVANCE(769);
      END_STATE();
    case 1017:
      if (lookahead == 't') ADVANCE(834);
      END_STATE();
    case 1018:
      if (lookahead == 't') ADVANCE(838);
      END_STATE();
    case 1019:
      if (lookahead == 't') ADVANCE(928);
      END_STATE();
    case 1020:
      if (lookahead == 't') ADVANCE(841);
      END_STATE();
    case 1021:
      if (lookahead == 't') ADVANCE(786);
      END_STATE();
    case 1022:
      if (lookahead == 't') ADVANCE(843);
      END_STATE();
    case 1023:
      if (lookahead == 't') ADVANCE(845);
      END_STATE();
    case 1024:
      if (lookahead == 't') ADVANCE(1035);
      END_STATE();
    case 1025:
      if (lookahead == 't') ADVANCE(1036);
      END_STATE();
    case 1026:
      if (lookahead == 't') ADVANCE(710);
      END_STATE();
    case 1027:
      if (lookahead == 't') ADVANCE(795);
      END_STATE();
    case 1028:
      if (lookahead == 't') ADVANCE(796);
      END_STATE();
    case 1029:
      if (lookahead == 't') ADVANCE(797);
      END_STATE();
    case 1030:
      if (lookahead == 't') ADVANCE(798);
      END_STATE();
    case 1031:
      if (lookahead == 't') ADVANCE(667);
      END_STATE();
    case 1032:
      if (lookahead == 'u') ADVANCE(901);
      END_STATE();
    case 1033:
      if (lookahead == 'u') ADVANCE(741);
      END_STATE();
    case 1034:
      if (lookahead == 'u') ADVANCE(967);
      END_STATE();
    case 1035:
      if (lookahead == 'u') ADVANCE(968);
      END_STATE();
    case 1036:
      if (lookahead == 'u') ADVANCE(970);
      END_STATE();
    case 1037:
      if (lookahead == 'v') ADVANCE(744);
      END_STATE();
    case 1038:
      if (lookahead == 'v') ADVANCE(788);
      END_STATE();
    case 1039:
      if (lookahead == 'v') ADVANCE(773);
      END_STATE();
    case 1040:
      if (lookahead == 'v') ADVANCE(794);
      END_STATE();
    case 1041:
      if (lookahead == 'w') ADVANCE(1128);
      END_STATE();
    case 1042:
      if (lookahead == 'w') ADVANCE(693);
      END_STATE();
    case 1043:
      if (lookahead == 'w') ADVANCE(986);
      END_STATE();
    case 1044:
      if (lookahead == 'x') ADVANCE(340);
      END_STATE();
    case 1045:
      if (lookahead == 'x') ADVANCE(1004);
      END_STATE();
    case 1046:
      if (lookahead == 'x') ADVANCE(1031);
      END_STATE();
    case 1047:
      if (lookahead == 'x') ADVANCE(1024);
      END_STATE();
    case 1048:
      if (lookahead == 'x') ADVANCE(1025);
      END_STATE();
    case 1049:
      if (lookahead == 'y') ADVANCE(1140);
      END_STATE();
    case 1050:
      if (lookahead == 'y') ADVANCE(340);
      END_STATE();
    case 1051:
      if (lookahead == 'y') ADVANCE(679);
      END_STATE();
    case 1052:
      if (lookahead == 'y') ADVANCE(992);
      END_STATE();
    case 1053:
      if (lookahead == 'y') ADVANCE(941);
      END_STATE();
    case 1054:
      if (lookahead == 'y') ADVANCE(942);
      END_STATE();
    case 1055:
      if (lookahead == 'y') ADVANCE(943);
      END_STATE();
    case 1056:
      if (lookahead == 'y') ADVANCE(944);
      END_STATE();
    case 1057:
      if (lookahead == 'y') ADVANCE(945);
      END_STATE();
    case 1058:
      if (lookahead == 'y') ADVANCE(946);
      END_STATE();
    case 1059:
      if (lookahead == 'z') ADVANCE(740);
      END_STATE();
    case 1060:
      if (lookahead == 'z') ADVANCE(747);
      END_STATE();
    case 1061:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(839);
      END_STATE();
    case 1062:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      END_STATE();
    case 1063:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1167);
      END_STATE();
    case 1064:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1168);
      END_STATE();
    case 1065:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1171);
      END_STATE();
    case 1066:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1169);
      END_STATE();
    case 1067:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 1068:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(661);
      END_STATE();
    case 1069:
      if (eof) ADVANCE(1074);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 1070:
      if (eof) ADVANCE(1074);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(1069)
      END_STATE();
    case 1071:
      if (eof) ADVANCE(1074);
      if (lookahead == '\n') SKIP(1073)
      END_STATE();
    case 1072:
      if (eof) ADVANCE(1074);
      if (lookahead == '\n') SKIP(1073)
      if (lookahead == '\r') SKIP(1071)
      END_STATE();
    case 1073:
      if (eof) ADVANCE(1074);
      if (lookahead == '"') ADVANCE(422);
      if (lookahead == '#') ADVANCE(1177);
      if (lookahead == '=') ADVANCE(1158);
      if (lookahead == '\\') SKIP(1072)
      if (lookahead == 'a') ADVANCE(861);
      if (lookahead == 'b') ADVANCE(911);
      if (lookahead == 'c') ADVANCE(878);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(801);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead == 'o') ADVANCE(1039);
      if (lookahead == 'p') ADVANCE(690);
      if (lookahead == 'r') ADVANCE(738);
      if (lookahead == 's') ADVANCE(820);
      if (lookahead == 't') ADVANCE(692);
      if (lookahead == 'v') ADVANCE(790);
      if (lookahead == 'x') ADVANCE(1084);
      if (lookahead == 'y') ADVANCE(1085);
      if (lookahead == '}') ADVANCE(1077);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1073)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1170);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(1075);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_textSpriteType);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_corneredTileSpriteType);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_maskedShieldType);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1125);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__statement_gfx_textureFile_token2);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == 'b') ADVANCE(873);
      if (lookahead == 'd') ADVANCE(793);
      if (lookahead == 'f') ADVANCE(975);
      if (lookahead == 'l') ADVANCE(921);
      if (lookahead == 'm') ADVANCE(702);
      if (lookahead == 'r') ADVANCE(923);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(809);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_borderSize);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_allwaystransparent);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_clicksound);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_click);
      if (lookahead == 's') ADVANCE(914);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == 'f') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1063);
      if (lookahead == '0') ADVANCE(1161);
      if (lookahead == 'f') ADVANCE(1160);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1063);
      if (lookahead == '5') ADVANCE(1165);
      if (lookahead == 'f') ADVANCE(1160);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1166);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1063);
      if (lookahead == '6') ADVANCE(1162);
      if (lookahead == 'f') ADVANCE(1160);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1166);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1063);
      if (lookahead == 'f') ADVANCE(1160);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1166);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1063);
      if (lookahead == 'f') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1167);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__number_precision_1_token1);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1169);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1170);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'O') ADVANCE(800);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1177);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1073},
  [2] = {.lex_state = 1073},
  [3] = {.lex_state = 1073},
  [4] = {.lex_state = 1073},
  [5] = {.lex_state = 1073},
  [6] = {.lex_state = 1073},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 415},
  [10] = {.lex_state = 415},
  [11] = {.lex_state = 415},
  [12] = {.lex_state = 1073},
  [13] = {.lex_state = 1073},
  [14] = {.lex_state = 1073},
  [15] = {.lex_state = 415},
  [16] = {.lex_state = 415},
  [17] = {.lex_state = 1073},
  [18] = {.lex_state = 1073},
  [19] = {.lex_state = 1073},
  [20] = {.lex_state = 415},
  [21] = {.lex_state = 415},
  [22] = {.lex_state = 415},
  [23] = {.lex_state = 1073},
  [24] = {.lex_state = 415},
  [25] = {.lex_state = 415},
  [26] = {.lex_state = 415},
  [27] = {.lex_state = 415},
  [28] = {.lex_state = 1073},
  [29] = {.lex_state = 415},
  [30] = {.lex_state = 415},
  [31] = {.lex_state = 1073},
  [32] = {.lex_state = 415},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1073},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 415},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 415},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 415},
  [45] = {.lex_state = 415},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1073},
  [48] = {.lex_state = 1073},
  [49] = {.lex_state = 415},
  [50] = {.lex_state = 415},
  [51] = {.lex_state = 1073},
  [52] = {.lex_state = 415},
  [53] = {.lex_state = 415},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1073},
  [68] = {.lex_state = 1073},
  [69] = {.lex_state = 1073},
  [70] = {.lex_state = 1073},
  [71] = {.lex_state = 1073},
  [72] = {.lex_state = 1073},
  [73] = {.lex_state = 1073},
  [74] = {.lex_state = 1073},
  [75] = {.lex_state = 1073},
  [76] = {.lex_state = 1073},
  [77] = {.lex_state = 1073},
  [78] = {.lex_state = 1073},
  [79] = {.lex_state = 1073},
  [80] = {.lex_state = 1073},
  [81] = {.lex_state = 1073},
  [82] = {.lex_state = 1073},
  [83] = {.lex_state = 1073},
  [84] = {.lex_state = 1073},
  [85] = {.lex_state = 415},
  [86] = {.lex_state = 1073},
  [87] = {.lex_state = 1073},
  [88] = {.lex_state = 1073},
  [89] = {.lex_state = 1073},
  [90] = {.lex_state = 415},
  [91] = {.lex_state = 415},
  [92] = {.lex_state = 415},
  [93] = {.lex_state = 415},
  [94] = {.lex_state = 415},
  [95] = {.lex_state = 415},
  [96] = {.lex_state = 415},
  [97] = {.lex_state = 415},
  [98] = {.lex_state = 415},
  [99] = {.lex_state = 415},
  [100] = {.lex_state = 415},
  [101] = {.lex_state = 415},
  [102] = {.lex_state = 1073},
  [103] = {.lex_state = 1073},
  [104] = {.lex_state = 415},
  [105] = {.lex_state = 1073},
  [106] = {.lex_state = 1073},
  [107] = {.lex_state = 1073},
  [108] = {.lex_state = 1073},
  [109] = {.lex_state = 1073},
  [110] = {.lex_state = 1073},
  [111] = {.lex_state = 1073},
  [112] = {.lex_state = 1073},
  [113] = {.lex_state = 1073},
  [114] = {.lex_state = 1073},
  [115] = {.lex_state = 1073},
  [116] = {.lex_state = 415},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1073},
  [119] = {.lex_state = 415},
  [120] = {.lex_state = 415},
  [121] = {.lex_state = 415},
  [122] = {.lex_state = 1073},
  [123] = {.lex_state = 1073},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 415},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1073},
  [130] = {.lex_state = 415},
  [131] = {.lex_state = 415},
  [132] = {.lex_state = 1073},
  [133] = {.lex_state = 1073},
  [134] = {.lex_state = 1073},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 416},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 415},
  [141] = {.lex_state = 1073},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1073},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1073},
  [147] = {.lex_state = 1073},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 415},
  [150] = {.lex_state = 1073},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1073},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 416},
  [155] = {.lex_state = 1073},
  [156] = {.lex_state = 417},
  [157] = {.lex_state = 417},
  [158] = {.lex_state = 1073},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1073},
  [162] = {.lex_state = 416},
  [163] = {.lex_state = 1073},
  [164] = {.lex_state = 415},
  [165] = {.lex_state = 415},
  [166] = {.lex_state = 415},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1073},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 417},
  [172] = {.lex_state = 419},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 416},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 419},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_spriteTypes] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_spriteType] = ACTIONS(1),
    [anon_sym_textSpriteType] = ACTIONS(1),
    [anon_sym_corneredTileSpriteType] = ACTIONS(1),
    [anon_sym_maskedShieldType] = ACTIONS(1),
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
    [anon_sym_clicksound] = ACTIONS(1),
    [anon_sym_click] = ACTIONS(1),
    [sym_assign_equal] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym__number_precision_1_token1] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [aux_sym__integer_positive_token1] = ACTIONS(1),
    [sym_byte] = ACTIONS(1),
    [sym_angle] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(182),
    [sym_dot_mod] = STATE(180),
    [sym_dot_gfx] = STATE(180),
    [sym__spriteTypes] = STATE(109),
    [sym__statement_name] = STATE(7),
    [sym__statement_mod_path] = STATE(7),
    [sym__statement_mod_archive] = STATE(7),
    [sym__statement_mod_remote_file_id] = STATE(7),
    [sym__statement_mod_version] = STATE(7),
    [sym__statement_mod_picture] = STATE(7),
    [sym__statement_mod_supported_version] = STATE(7),
    [sym__statement_mod_replace_path] = STATE(7),
    [sym__statement_mod_tags] = STATE(7),
    [sym__statement_mod_dependencies] = STATE(7),
    [aux_sym_dot_mod_repeat1] = STATE(7),
    [aux_sym_dot_gfx_repeat1] = STATE(109),
    [anon_sym_spriteTypes] = ACTIONS(5),
    [anon_sym_name] = ACTIONS(7),
    [anon_sym_path] = ACTIONS(9),
    [anon_sym_archive] = ACTIONS(11),
    [anon_sym_remote_file_id] = ACTIONS(13),
    [anon_sym_version] = ACTIONS(15),
    [anon_sym_picture] = ACTIONS(17),
    [anon_sym_supported_version] = ACTIONS(19),
    [anon_sym_replace_path] = ACTIONS(21),
    [anon_sym_tags] = ACTIONS(23),
    [anon_sym_dependencies] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(29), 22,
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
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(34), 22,
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
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
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
  [105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_assign_equal,
    ACTIONS(40), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
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
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_clicksound,
  [136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
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
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
      anon_sym_clicksound,
  [164] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(9), 1,
      anon_sym_path,
    ACTIONS(11), 1,
      anon_sym_archive,
    ACTIONS(13), 1,
      anon_sym_remote_file_id,
    ACTIONS(15), 1,
      anon_sym_version,
    ACTIONS(17), 1,
      anon_sym_picture,
    ACTIONS(19), 1,
      anon_sym_supported_version,
    ACTIONS(21), 1,
      anon_sym_replace_path,
    ACTIONS(23), 1,
      anon_sym_tags,
    ACTIONS(25), 1,
      anon_sym_dependencies,
    ACTIONS(46), 1,
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
  [214] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_name,
    ACTIONS(53), 1,
      anon_sym_path,
    ACTIONS(56), 1,
      anon_sym_archive,
    ACTIONS(59), 1,
      anon_sym_remote_file_id,
    ACTIONS(62), 1,
      anon_sym_version,
    ACTIONS(65), 1,
      anon_sym_picture,
    ACTIONS(68), 1,
      anon_sym_supported_version,
    ACTIONS(71), 1,
      anon_sym_replace_path,
    ACTIONS(74), 1,
      anon_sym_tags,
    ACTIONS(77), 1,
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
  [264] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_animationrotation,
    ACTIONS(88), 1,
      anon_sym_animationlooping,
    ACTIONS(97), 1,
      anon_sym_animationblendmode,
    ACTIONS(100), 1,
      anon_sym_animationtype,
    ACTIONS(103), 1,
      anon_sym_animationframes,
    ACTIONS(82), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(91), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(94), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(9), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [309] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      anon_sym_animationrotation,
    ACTIONS(112), 1,
      anon_sym_animationlooping,
    ACTIONS(118), 1,
      anon_sym_animationblendmode,
    ACTIONS(120), 1,
      anon_sym_animationtype,
    ACTIONS(122), 1,
      anon_sym_animationframes,
    ACTIONS(108), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(114), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(116), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(11), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [354] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_animationrotation,
    ACTIONS(112), 1,
      anon_sym_animationlooping,
    ACTIONS(118), 1,
      anon_sym_animationblendmode,
    ACTIONS(120), 1,
      anon_sym_animationtype,
    ACTIONS(122), 1,
      anon_sym_animationframes,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(114), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(116), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(9), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [399] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(130), 1,
      anon_sym_noOfFrames,
    ACTIONS(132), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(134), 1,
      anon_sym_overlay_rows,
    ACTIONS(136), 1,
      anon_sym_effectFile,
    ACTIONS(138), 1,
      anon_sym_animation,
    STATE(82), 1,
      sym__statement_name,
    STATE(13), 7,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [439] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      anon_sym_name,
    ACTIONS(145), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(148), 1,
      anon_sym_noOfFrames,
    ACTIONS(151), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(154), 1,
      anon_sym_overlay_rows,
    ACTIONS(157), 1,
      anon_sym_effectFile,
    ACTIONS(160), 1,
      anon_sym_animation,
    STATE(82), 1,
      sym__statement_name,
    STATE(13), 7,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [479] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(128), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(130), 1,
      anon_sym_noOfFrames,
    ACTIONS(132), 1,
      anon_sym_overlay_frames_per_row,
    ACTIONS(134), 1,
      anon_sym_overlay_rows,
    ACTIONS(136), 1,
      anon_sym_effectFile,
    ACTIONS(138), 1,
      anon_sym_animation,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__statement_name,
    STATE(12), 7,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [519] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      anon_sym_spriteType,
    ACTIONS(170), 1,
      anon_sym_textSpriteType,
    ACTIONS(173), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(176), 1,
      anon_sym_maskedShieldType,
    ACTIONS(179), 1,
      anon_sym_cursor_offset,
    STATE(15), 8,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [551] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      anon_sym_spriteType,
    ACTIONS(186), 1,
      anon_sym_textSpriteType,
    ACTIONS(188), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(190), 1,
      anon_sym_maskedShieldType,
    ACTIONS(192), 1,
      anon_sym_cursor_offset,
    STATE(20), 8,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [583] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(128), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(130), 1,
      anon_sym_noOfFrames,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      anon_sym_size,
    ACTIONS(198), 1,
      anon_sym_borderSize,
    ACTIONS(200), 1,
      anon_sym_allwaystransparent,
    STATE(84), 1,
      sym__statement_name,
    STATE(18), 6,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_size,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [619] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 1,
      anon_sym_name,
    ACTIONS(207), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(210), 1,
      anon_sym_noOfFrames,
    ACTIONS(213), 1,
      anon_sym_size,
    ACTIONS(216), 1,
      anon_sym_borderSize,
    ACTIONS(219), 1,
      anon_sym_allwaystransparent,
    STATE(84), 1,
      sym__statement_name,
    STATE(18), 6,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_size,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [655] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(128), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(130), 1,
      anon_sym_noOfFrames,
    ACTIONS(196), 1,
      anon_sym_size,
    ACTIONS(198), 1,
      anon_sym_borderSize,
    ACTIONS(200), 1,
      anon_sym_allwaystransparent,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym__statement_name,
    STATE(17), 6,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_size,
      sym__statement_gfx_borderSize,
      sym__statement_gfx_allwaystransparent,
      aux_sym__corneredTileSpriteType_block_repeat1,
  [691] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_spriteType,
    ACTIONS(186), 1,
      anon_sym_textSpriteType,
    ACTIONS(188), 1,
      anon_sym_corneredTileSpriteType,
    ACTIONS(190), 1,
      anon_sym_maskedShieldType,
    ACTIONS(192), 1,
      anon_sym_cursor_offset,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(15), 8,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__textSpriteType,
      sym__corneredTileSpriteType,
      sym__maskedShieldType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_animationrotation,
    ACTIONS(230), 1,
      sym_assign_equal,
    ACTIONS(226), 11,
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
  [746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_animationrotation,
    ACTIONS(236), 1,
      sym_assign_equal,
    ACTIONS(232), 11,
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
  [769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_assign_equal,
    ACTIONS(238), 12,
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
      anon_sym_clicksound,
  [790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_animationrotation,
    ACTIONS(246), 1,
      sym_assign_equal,
    ACTIONS(242), 11,
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
  [813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_animationrotation,
    ACTIONS(252), 1,
      sym_assign_equal,
    ACTIONS(248), 11,
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
  [836] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_animationrotation,
    ACTIONS(258), 1,
      sym_assign_equal,
    ACTIONS(254), 11,
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
  [859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_animationrotation,
    ACTIONS(264), 1,
      sym_assign_equal,
    ACTIONS(260), 11,
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
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_assign_equal,
    ACTIONS(266), 12,
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
      anon_sym_clicksound,
  [903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_animationrotation,
    ACTIONS(274), 1,
      sym_assign_equal,
    ACTIONS(270), 11,
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
  [926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_animationrotation,
    ACTIONS(280), 1,
      sym_assign_equal,
    ACTIONS(276), 11,
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
  [949] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 1,
      anon_sym_name,
    ACTIONS(287), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(290), 1,
      anon_sym_noOfFrames,
    ACTIONS(293), 1,
      anon_sym_effectFile,
    ACTIONS(296), 1,
      anon_sym_clicksound,
    STATE(102), 1,
      sym__statement_name,
    STATE(31), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_animationrotation,
    ACTIONS(299), 11,
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
  [1001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_assign_equal,
    ACTIONS(303), 11,
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
  [1021] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(128), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(130), 1,
      anon_sym_noOfFrames,
    ACTIONS(136), 1,
      anon_sym_effectFile,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      anon_sym_clicksound,
    STATE(102), 1,
      sym__statement_name,
    STATE(51), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [1053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_assign_equal,
    ACTIONS(311), 11,
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
  [1073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_assign_equal,
    ACTIONS(315), 11,
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
  [1093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_assign_equal,
    ACTIONS(319), 11,
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
  [1113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_assign_equal,
    ACTIONS(323), 11,
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
  [1133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_assign_equal,
    ACTIONS(327), 11,
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
  [1153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_animationrotation,
    ACTIONS(331), 11,
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
  [1173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_assign_equal,
    ACTIONS(335), 11,
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
  [1193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_animationrotation,
    ACTIONS(339), 11,
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
  [1213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_assign_equal,
    ACTIONS(343), 11,
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
  [1233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_animationrotation,
    ACTIONS(347), 11,
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
  [1253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_animationrotation,
    ACTIONS(351), 11,
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
  [1273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_assign_equal,
    ACTIONS(355), 11,
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
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 12,
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
      anon_sym_clicksound,
  [1311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 12,
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
      anon_sym_clicksound,
  [1329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_animationrotation,
    ACTIONS(363), 11,
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
  [1349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_animationrotation,
    ACTIONS(367), 11,
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
  [1369] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(128), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(130), 1,
      anon_sym_noOfFrames,
    ACTIONS(136), 1,
      anon_sym_effectFile,
    ACTIONS(309), 1,
      anon_sym_clicksound,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym__statement_name,
    STATE(31), 5,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_clicksound,
      aux_sym__textSpriteType_block_repeat1,
  [1401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_animationrotation,
    ACTIONS(373), 11,
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
  [1421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_animationrotation,
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
  [1441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 11,
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
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 11,
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
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 11,
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
  [1492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 11,
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
  [1509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 11,
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
  [1526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 11,
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
  [1543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 11,
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
  [1560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 11,
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
  [1577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 11,
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
  [1594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 11,
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
  [1611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 11,
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
  [1628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 11,
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
  [1645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 11,
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
  [1662] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      anon_sym_name,
    ACTIONS(412), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(415), 1,
      anon_sym_noOfFrames,
    ACTIONS(418), 1,
      anon_sym_effectFile,
    STATE(108), 1,
      sym__statement_name,
    STATE(67), 4,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1690] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(128), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(130), 1,
      anon_sym_noOfFrames,
    ACTIONS(136), 1,
      anon_sym_effectFile,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__statement_name,
    STATE(67), 4,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_assign_equal,
    ACTIONS(423), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_clicksound,
  [1736] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(128), 1,
      aux_sym__statement_gfx_textureFile_token1,
    ACTIONS(130), 1,
      anon_sym_noOfFrames,
    ACTIONS(136), 1,
      anon_sym_effectFile,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__statement_name,
    STATE(68), 4,
      sym__statement_gfx_textureFile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_effectFile,
      aux_sym__maskedShieldType_block_repeat1,
  [1764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 9,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
      anon_sym_clicksound,
  [1779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_assign_equal,
    ACTIONS(431), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_assign_equal,
    ACTIONS(435), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_assign_equal,
    ACTIONS(439), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_assign_equal,
    ACTIONS(443), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
  [1846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_assign_equal,
    ACTIONS(447), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
  [1862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym_assign_equal,
    ACTIONS(459), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
  [1934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
  [1975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
    ACTIONS(471), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [1990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
  [2003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_assign_equal,
    ACTIONS(475), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [2018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
  [2031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_size,
      anon_sym_borderSize,
      anon_sym_allwaystransparent,
  [2044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [2200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
      anon_sym_clicksound,
  [2212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 6,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_textSpriteType,
      anon_sym_corneredTileSpriteType,
      anon_sym_maskedShieldType,
      anon_sym_cursor_offset,
  [2224] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_x,
    ACTIONS(515), 1,
      anon_sym_y,
    STATE(139), 1,
      sym__entry_y_precision_1,
    STATE(141), 1,
      sym__entry_x_precision_1,
    STATE(174), 1,
      sym__statement_xy_precision_1,
  [2243] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_x,
    ACTIONS(519), 1,
      anon_sym_y,
    STATE(143), 1,
      sym__entry_x_integer,
    STATE(144), 1,
      sym__entry_y_integer,
    STATE(175), 1,
      sym__statement_xy_integer,
  [2262] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_x,
    ACTIONS(519), 1,
      anon_sym_y,
    STATE(143), 1,
      sym__entry_x_integer,
    STATE(144), 1,
      sym__entry_y_integer,
    STATE(173), 1,
      sym__statement_xy_integer,
  [2281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 5,
      anon_sym_RBRACE,
      anon_sym_name,
      aux_sym__statement_gfx_textureFile_token1,
      anon_sym_noOfFrames,
      anon_sym_effectFile,
  [2292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    STATE(110), 2,
      sym__spriteTypes,
      aux_sym_dot_gfx_repeat1,
  [2306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    ACTIONS(527), 1,
      anon_sym_spriteTypes,
    STATE(110), 2,
      sym__spriteTypes,
      aux_sym_dot_gfx_repeat1,
  [2320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    ACTIONS(532), 1,
      aux_sym__integer_positive_token1,
    STATE(112), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [2334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    ACTIONS(536), 1,
      aux_sym__integer_positive_token1,
    STATE(112), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [2348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [2357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [2366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 3,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym_y,
  [2375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      sym__yes_no,
    ACTIONS(545), 2,
      anon_sym_yes,
      anon_sym_no,
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_assign_equal,
    ACTIONS(547), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [2397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_assign_equal,
    ACTIONS(551), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [2408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(89), 1,
      sym__yes_no,
    ACTIONS(555), 2,
      anon_sym_yes,
      anon_sym_no,
  [2419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
    ACTIONS(559), 1,
      sym_string,
    STATE(125), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [2432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_string,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [2445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym__integer_positive_token1,
    STATE(111), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [2456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_assign_equal,
    ACTIONS(565), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [2467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_assign_equal,
    ACTIONS(569), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [2478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(575), 1,
      sym_string,
    STATE(125), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [2491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym__gfx_animation_block,
  [2501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym__textSpriteType_block,
  [2511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [2519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [2527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym__number_precision_1_token1,
    STATE(128), 1,
      sym__number_precision_1,
  [2537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym__number_precision_1_token1,
    STATE(129), 1,
      sym__number_precision_1,
  [2547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [2555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [2563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [2571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym__maskedShieldType_block,
  [2581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym__mod_dependencies_block,
  [2591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym__mod_tags_block,
  [2601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(58), 1,
      sym__mod_replace_path_folder,
  [2611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_x,
    STATE(181), 1,
      sym__entry_x_precision_1,
  [2621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_RBRACE,
      sym_string,
  [2629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_y,
    STATE(181), 1,
      sym__entry_y_precision_1,
  [2639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym__corneredTileSpriteType_block,
  [2649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_y,
    STATE(159), 1,
      sym__entry_y_integer,
  [2659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_x,
    STATE(159), 1,
      sym__entry_x_integer,
  [2669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [2677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [2685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym__integer_positive_token1,
    STATE(47), 1,
      sym__integer_positive,
  [2695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym__spriteTypes_block,
  [2705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      aux_sym__number_precision_1_token1,
    STATE(50), 1,
      sym_time,
  [2715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      aux_sym__integer_positive_token1,
    STATE(79), 1,
      sym__integer_positive,
  [2725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym__spriteType_block,
  [2735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym__integer_positive_token1,
    STATE(80), 1,
      sym__integer_positive,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
  [2752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym_angle,
  [2759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      aux_sym__statement_mod_picture_token1,
  [2766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_integer,
  [2773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_integer,
  [2780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [2787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
  [2794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_assign_equal,
  [2801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      aux_sym__statement_mod_version_token1,
  [2808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [2815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      aux_sym__statement_mod_archive_token1,
  [2822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_string,
  [2829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_string,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_click,
  [2843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_LBRACE,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      aux_sym__statement_gfx_textureFile_token2,
  [2864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
  [2871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym__animation_entry_dds_token1,
  [2878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym_number,
  [2885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
  [2899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
  [2906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_assign_equal,
  [2913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      aux_sym__statement_mod_supported_version_token1,
  [2920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
  [2927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_assign_equal,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
  [2941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      ts_builtin_sym_end,
  [2955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_assign_equal,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym_number,
  [2969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_assign_equal,
  [2976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_assign_equal,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 164,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 309,
  [SMALL_STATE(11)] = 354,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 439,
  [SMALL_STATE(14)] = 479,
  [SMALL_STATE(15)] = 519,
  [SMALL_STATE(16)] = 551,
  [SMALL_STATE(17)] = 583,
  [SMALL_STATE(18)] = 619,
  [SMALL_STATE(19)] = 655,
  [SMALL_STATE(20)] = 691,
  [SMALL_STATE(21)] = 723,
  [SMALL_STATE(22)] = 746,
  [SMALL_STATE(23)] = 769,
  [SMALL_STATE(24)] = 790,
  [SMALL_STATE(25)] = 813,
  [SMALL_STATE(26)] = 836,
  [SMALL_STATE(27)] = 859,
  [SMALL_STATE(28)] = 882,
  [SMALL_STATE(29)] = 903,
  [SMALL_STATE(30)] = 926,
  [SMALL_STATE(31)] = 949,
  [SMALL_STATE(32)] = 981,
  [SMALL_STATE(33)] = 1001,
  [SMALL_STATE(34)] = 1021,
  [SMALL_STATE(35)] = 1053,
  [SMALL_STATE(36)] = 1073,
  [SMALL_STATE(37)] = 1093,
  [SMALL_STATE(38)] = 1113,
  [SMALL_STATE(39)] = 1133,
  [SMALL_STATE(40)] = 1153,
  [SMALL_STATE(41)] = 1173,
  [SMALL_STATE(42)] = 1193,
  [SMALL_STATE(43)] = 1213,
  [SMALL_STATE(44)] = 1233,
  [SMALL_STATE(45)] = 1253,
  [SMALL_STATE(46)] = 1273,
  [SMALL_STATE(47)] = 1293,
  [SMALL_STATE(48)] = 1311,
  [SMALL_STATE(49)] = 1329,
  [SMALL_STATE(50)] = 1349,
  [SMALL_STATE(51)] = 1369,
  [SMALL_STATE(52)] = 1401,
  [SMALL_STATE(53)] = 1421,
  [SMALL_STATE(54)] = 1441,
  [SMALL_STATE(55)] = 1458,
  [SMALL_STATE(56)] = 1475,
  [SMALL_STATE(57)] = 1492,
  [SMALL_STATE(58)] = 1509,
  [SMALL_STATE(59)] = 1526,
  [SMALL_STATE(60)] = 1543,
  [SMALL_STATE(61)] = 1560,
  [SMALL_STATE(62)] = 1577,
  [SMALL_STATE(63)] = 1594,
  [SMALL_STATE(64)] = 1611,
  [SMALL_STATE(65)] = 1628,
  [SMALL_STATE(66)] = 1645,
  [SMALL_STATE(67)] = 1662,
  [SMALL_STATE(68)] = 1690,
  [SMALL_STATE(69)] = 1718,
  [SMALL_STATE(70)] = 1736,
  [SMALL_STATE(71)] = 1764,
  [SMALL_STATE(72)] = 1779,
  [SMALL_STATE(73)] = 1796,
  [SMALL_STATE(74)] = 1813,
  [SMALL_STATE(75)] = 1830,
  [SMALL_STATE(76)] = 1846,
  [SMALL_STATE(77)] = 1862,
  [SMALL_STATE(78)] = 1876,
  [SMALL_STATE(79)] = 1890,
  [SMALL_STATE(80)] = 1904,
  [SMALL_STATE(81)] = 1918,
  [SMALL_STATE(82)] = 1934,
  [SMALL_STATE(83)] = 1948,
  [SMALL_STATE(84)] = 1962,
  [SMALL_STATE(85)] = 1975,
  [SMALL_STATE(86)] = 1990,
  [SMALL_STATE(87)] = 2003,
  [SMALL_STATE(88)] = 2018,
  [SMALL_STATE(89)] = 2031,
  [SMALL_STATE(90)] = 2044,
  [SMALL_STATE(91)] = 2056,
  [SMALL_STATE(92)] = 2068,
  [SMALL_STATE(93)] = 2080,
  [SMALL_STATE(94)] = 2092,
  [SMALL_STATE(95)] = 2104,
  [SMALL_STATE(96)] = 2116,
  [SMALL_STATE(97)] = 2128,
  [SMALL_STATE(98)] = 2140,
  [SMALL_STATE(99)] = 2152,
  [SMALL_STATE(100)] = 2164,
  [SMALL_STATE(101)] = 2176,
  [SMALL_STATE(102)] = 2188,
  [SMALL_STATE(103)] = 2200,
  [SMALL_STATE(104)] = 2212,
  [SMALL_STATE(105)] = 2224,
  [SMALL_STATE(106)] = 2243,
  [SMALL_STATE(107)] = 2262,
  [SMALL_STATE(108)] = 2281,
  [SMALL_STATE(109)] = 2292,
  [SMALL_STATE(110)] = 2306,
  [SMALL_STATE(111)] = 2320,
  [SMALL_STATE(112)] = 2334,
  [SMALL_STATE(113)] = 2348,
  [SMALL_STATE(114)] = 2357,
  [SMALL_STATE(115)] = 2366,
  [SMALL_STATE(116)] = 2375,
  [SMALL_STATE(117)] = 2386,
  [SMALL_STATE(118)] = 2397,
  [SMALL_STATE(119)] = 2408,
  [SMALL_STATE(120)] = 2419,
  [SMALL_STATE(121)] = 2432,
  [SMALL_STATE(122)] = 2445,
  [SMALL_STATE(123)] = 2456,
  [SMALL_STATE(124)] = 2467,
  [SMALL_STATE(125)] = 2478,
  [SMALL_STATE(126)] = 2491,
  [SMALL_STATE(127)] = 2501,
  [SMALL_STATE(128)] = 2511,
  [SMALL_STATE(129)] = 2519,
  [SMALL_STATE(130)] = 2527,
  [SMALL_STATE(131)] = 2537,
  [SMALL_STATE(132)] = 2547,
  [SMALL_STATE(133)] = 2555,
  [SMALL_STATE(134)] = 2563,
  [SMALL_STATE(135)] = 2571,
  [SMALL_STATE(136)] = 2581,
  [SMALL_STATE(137)] = 2591,
  [SMALL_STATE(138)] = 2601,
  [SMALL_STATE(139)] = 2611,
  [SMALL_STATE(140)] = 2621,
  [SMALL_STATE(141)] = 2629,
  [SMALL_STATE(142)] = 2639,
  [SMALL_STATE(143)] = 2649,
  [SMALL_STATE(144)] = 2659,
  [SMALL_STATE(145)] = 2669,
  [SMALL_STATE(146)] = 2677,
  [SMALL_STATE(147)] = 2685,
  [SMALL_STATE(148)] = 2695,
  [SMALL_STATE(149)] = 2705,
  [SMALL_STATE(150)] = 2715,
  [SMALL_STATE(151)] = 2725,
  [SMALL_STATE(152)] = 2735,
  [SMALL_STATE(153)] = 2745,
  [SMALL_STATE(154)] = 2752,
  [SMALL_STATE(155)] = 2759,
  [SMALL_STATE(156)] = 2766,
  [SMALL_STATE(157)] = 2773,
  [SMALL_STATE(158)] = 2780,
  [SMALL_STATE(159)] = 2787,
  [SMALL_STATE(160)] = 2794,
  [SMALL_STATE(161)] = 2801,
  [SMALL_STATE(162)] = 2808,
  [SMALL_STATE(163)] = 2815,
  [SMALL_STATE(164)] = 2822,
  [SMALL_STATE(165)] = 2829,
  [SMALL_STATE(166)] = 2836,
  [SMALL_STATE(167)] = 2843,
  [SMALL_STATE(168)] = 2850,
  [SMALL_STATE(169)] = 2857,
  [SMALL_STATE(170)] = 2864,
  [SMALL_STATE(171)] = 2871,
  [SMALL_STATE(172)] = 2878,
  [SMALL_STATE(173)] = 2885,
  [SMALL_STATE(174)] = 2892,
  [SMALL_STATE(175)] = 2899,
  [SMALL_STATE(176)] = 2906,
  [SMALL_STATE(177)] = 2913,
  [SMALL_STATE(178)] = 2920,
  [SMALL_STATE(179)] = 2927,
  [SMALL_STATE(180)] = 2934,
  [SMALL_STATE(181)] = 2941,
  [SMALL_STATE(182)] = 2948,
  [SMALL_STATE(183)] = 2955,
  [SMALL_STATE(184)] = 2962,
  [SMALL_STATE(185)] = 2969,
  [SMALL_STATE(186)] = 2976,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(183),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(33),
  [11] = {.count = 1, .reusable = true}, SHIFT(35),
  [13] = {.count = 1, .reusable = true}, SHIFT(36),
  [15] = {.count = 1, .reusable = true}, SHIFT(37),
  [17] = {.count = 1, .reusable = true}, SHIFT(38),
  [19] = {.count = 1, .reusable = true}, SHIFT(39),
  [21] = {.count = 1, .reusable = true}, SHIFT(41),
  [23] = {.count = 1, .reusable = true}, SHIFT(43),
  [25] = {.count = 1, .reusable = true}, SHIFT(46),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.count = 1, .reusable = true}, SHIFT(55),
  [34] = {.count = 1, .reusable = true}, SHIFT(4),
  [36] = {.count = 1, .reusable = true}, SHIFT(60),
  [38] = {.count = 1, .reusable = true}, SHIFT(2),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [42] = {.count = 1, .reusable = true}, SHIFT(165),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [48] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(5),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(33),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(35),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(36),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(37),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(38),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(39),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(41),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(43),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(46),
  [80] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(30),
  [85] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(21),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(22),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(29),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(27),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(26),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(25),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(24),
  [106] = {.count = 1, .reusable = true}, SHIFT(83),
  [108] = {.count = 1, .reusable = true}, SHIFT(30),
  [110] = {.count = 1, .reusable = false}, SHIFT(21),
  [112] = {.count = 1, .reusable = true}, SHIFT(22),
  [114] = {.count = 1, .reusable = true}, SHIFT(29),
  [116] = {.count = 1, .reusable = true}, SHIFT(27),
  [118] = {.count = 1, .reusable = true}, SHIFT(26),
  [120] = {.count = 1, .reusable = true}, SHIFT(25),
  [122] = {.count = 1, .reusable = true}, SHIFT(24),
  [124] = {.count = 1, .reusable = true}, SHIFT(77),
  [126] = {.count = 1, .reusable = true}, SHIFT(91),
  [128] = {.count = 1, .reusable = true}, SHIFT(23),
  [130] = {.count = 1, .reusable = true}, SHIFT(28),
  [132] = {.count = 1, .reusable = true}, SHIFT(72),
  [134] = {.count = 1, .reusable = true}, SHIFT(73),
  [136] = {.count = 1, .reusable = true}, SHIFT(69),
  [138] = {.count = 1, .reusable = true}, SHIFT(74),
  [140] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(5),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(28),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(72),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(73),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(69),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(74),
  [163] = {.count = 1, .reusable = true}, SHIFT(94),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(179),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(185),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(186),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(160),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(176),
  [182] = {.count = 1, .reusable = true}, SHIFT(132),
  [184] = {.count = 1, .reusable = true}, SHIFT(179),
  [186] = {.count = 1, .reusable = true}, SHIFT(185),
  [188] = {.count = 1, .reusable = true}, SHIFT(186),
  [190] = {.count = 1, .reusable = true}, SHIFT(160),
  [192] = {.count = 1, .reusable = true}, SHIFT(176),
  [194] = {.count = 1, .reusable = true}, SHIFT(99),
  [196] = {.count = 1, .reusable = true}, SHIFT(76),
  [198] = {.count = 1, .reusable = true}, SHIFT(81),
  [200] = {.count = 1, .reusable = true}, SHIFT(75),
  [202] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(5),
  [207] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(28),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(76),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(81),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 2), SHIFT_REPEAT(75),
  [222] = {.count = 1, .reusable = true}, SHIFT(101),
  [224] = {.count = 1, .reusable = true}, SHIFT(133),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [230] = {.count = 1, .reusable = true}, SHIFT(154),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [236] = {.count = 1, .reusable = true}, SHIFT(116),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 1),
  [240] = {.count = 1, .reusable = true}, SHIFT(169),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [246] = {.count = 1, .reusable = true}, SHIFT(170),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [252] = {.count = 1, .reusable = true}, SHIFT(113),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [258] = {.count = 1, .reusable = true}, SHIFT(114),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy, 1),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy, 1),
  [264] = {.count = 1, .reusable = true}, SHIFT(167),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [268] = {.count = 1, .reusable = true}, SHIFT(147),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [274] = {.count = 1, .reusable = true}, SHIFT(149),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [280] = {.count = 1, .reusable = true}, SHIFT(171),
  [282] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(5),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(23),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(28),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(69),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 2), SHIFT_REPEAT(87),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [305] = {.count = 1, .reusable = true}, SHIFT(164),
  [307] = {.count = 1, .reusable = true}, SHIFT(104),
  [309] = {.count = 1, .reusable = true}, SHIFT(87),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [313] = {.count = 1, .reusable = true}, SHIFT(163),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [317] = {.count = 1, .reusable = true}, SHIFT(162),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [321] = {.count = 1, .reusable = true}, SHIFT(161),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [325] = {.count = 1, .reusable = true}, SHIFT(155),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [329] = {.count = 1, .reusable = true}, SHIFT(177),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [337] = {.count = 1, .reusable = true}, SHIFT(138),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [345] = {.count = 1, .reusable = true}, SHIFT(137),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_time, 1),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_time, 1),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [357] = {.count = 1, .reusable = true}, SHIFT(136),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_textureFile, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy, 5),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy, 5),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [371] = {.count = 1, .reusable = true}, SHIFT(100),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(5),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(23),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(28),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 2), SHIFT_REPEAT(69),
  [421] = {.count = 1, .reusable = true}, SHIFT(98),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [425] = {.count = 1, .reusable = true}, SHIFT(158),
  [427] = {.count = 1, .reusable = true}, SHIFT(95),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [433] = {.count = 1, .reusable = true}, SHIFT(150),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [437] = {.count = 1, .reusable = true}, SHIFT(152),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [441] = {.count = 1, .reusable = true}, SHIFT(126),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 1),
  [445] = {.count = 1, .reusable = true}, SHIFT(119),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 1),
  [449] = {.count = 1, .reusable = true}, SHIFT(168),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 1),
  [461] = {.count = 1, .reusable = true}, SHIFT(153),
  [463] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 3),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [467] = {.count = 1, .reusable = true}, REDUCE(aux_sym__corneredTileSpriteType_block_repeat1, 1, .production_id = 3),
  [469] = {.count = 1, .reusable = true}, SHIFT(184),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 2),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_size, 5),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 1),
  [477] = {.count = 1, .reusable = true}, SHIFT(166),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_borderSize, 5),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_allwaystransparent, 3),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType, 3),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType, 3),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 2),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType, 3),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym__maskedShieldType_block, 3),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 3),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 3),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym__corneredTileSpriteType_block, 2),
  [507] = {.count = 1, .reusable = true}, REDUCE(aux_sym__textSpriteType_block_repeat1, 1, .production_id = 3),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_clicksound, 3),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym__textSpriteType_block, 2),
  [513] = {.count = 1, .reusable = true}, SHIFT(123),
  [515] = {.count = 1, .reusable = true}, SHIFT(124),
  [517] = {.count = 1, .reusable = true}, SHIFT(118),
  [519] = {.count = 1, .reusable = true}, SHIFT(117),
  [521] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maskedShieldType_block_repeat1, 1, .production_id = 3),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [525] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [527] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(183),
  [530] = {.count = 1, .reusable = true}, SHIFT(40),
  [532] = {.count = 1, .reusable = true}, SHIFT(112),
  [534] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [536] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(112),
  [539] = {.count = 1, .reusable = true}, SHIFT(53),
  [541] = {.count = 1, .reusable = true}, SHIFT(32),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym__number_precision_1, 1, .production_id = 4),
  [545] = {.count = 1, .reusable = true}, SHIFT(44),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 1),
  [549] = {.count = 1, .reusable = true}, SHIFT(157),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 1),
  [553] = {.count = 1, .reusable = true}, SHIFT(156),
  [555] = {.count = 1, .reusable = true}, SHIFT(89),
  [557] = {.count = 1, .reusable = true}, SHIFT(62),
  [559] = {.count = 1, .reusable = true}, SHIFT(140),
  [561] = {.count = 1, .reusable = true}, SHIFT(61),
  [563] = {.count = 1, .reusable = true}, SHIFT(111),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_precision_1, 1),
  [567] = {.count = 1, .reusable = true}, SHIFT(131),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_precision_1, 1),
  [571] = {.count = 1, .reusable = true}, SHIFT(130),
  [573] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [575] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(140),
  [578] = {.count = 1, .reusable = true}, SHIFT(10),
  [580] = {.count = 1, .reusable = true}, SHIFT(34),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_precision_1, 3),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_precision_1, 3),
  [586] = {.count = 1, .reusable = true}, SHIFT(115),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [594] = {.count = 1, .reusable = true}, SHIFT(70),
  [596] = {.count = 1, .reusable = true}, SHIFT(121),
  [598] = {.count = 1, .reusable = true}, SHIFT(3),
  [600] = {.count = 1, .reusable = true}, SHIFT(58),
  [602] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 2),
  [604] = {.count = 1, .reusable = true}, SHIFT(19),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y_integer, 3),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x_integer, 3),
  [610] = {.count = 1, .reusable = true}, SHIFT(47),
  [612] = {.count = 1, .reusable = true}, SHIFT(16),
  [614] = {.count = 1, .reusable = true}, SHIFT(45),
  [616] = {.count = 1, .reusable = true}, SHIFT(79),
  [618] = {.count = 1, .reusable = true}, SHIFT(14),
  [620] = {.count = 1, .reusable = true}, SHIFT(80),
  [622] = {.count = 1, .reusable = true}, SHIFT(107),
  [624] = {.count = 1, .reusable = true}, SHIFT(42),
  [626] = {.count = 1, .reusable = true}, SHIFT(54),
  [628] = {.count = 1, .reusable = true}, SHIFT(146),
  [630] = {.count = 1, .reusable = true}, SHIFT(145),
  [632] = {.count = 1, .reusable = true}, SHIFT(71),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_integer, 2),
  [636] = {.count = 1, .reusable = true}, SHIFT(135),
  [638] = {.count = 1, .reusable = true}, SHIFT(63),
  [640] = {.count = 1, .reusable = true}, SHIFT(64),
  [642] = {.count = 1, .reusable = true}, SHIFT(65),
  [644] = {.count = 1, .reusable = true}, SHIFT(66),
  [646] = {.count = 1, .reusable = true}, SHIFT(6),
  [648] = {.count = 1, .reusable = true}, SHIFT(103),
  [650] = {.count = 1, .reusable = true}, SHIFT(105),
  [652] = {.count = 1, .reusable = true}, SHIFT(106),
  [654] = {.count = 1, .reusable = true}, SHIFT(48),
  [656] = {.count = 1, .reusable = true}, SHIFT(122),
  [658] = {.count = 1, .reusable = true}, SHIFT(52),
  [660] = {.count = 1, .reusable = true}, SHIFT(178),
  [662] = {.count = 1, .reusable = true}, SHIFT(88),
  [664] = {.count = 1, .reusable = true}, SHIFT(49),
  [666] = {.count = 1, .reusable = true}, SHIFT(86),
  [668] = {.count = 1, .reusable = true}, SHIFT(85),
  [670] = {.count = 1, .reusable = true}, SHIFT(59),
  [672] = {.count = 1, .reusable = true}, SHIFT(93),
  [674] = {.count = 1, .reusable = true}, SHIFT(151),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym__statement_xy_precision_1, 2),
  [680] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [682] = {.count = 1, .reusable = true}, SHIFT(148),
  [684] = {.count = 1, .reusable = true}, SHIFT(172),
  [686] = {.count = 1, .reusable = true}, SHIFT(127),
  [688] = {.count = 1, .reusable = true}, SHIFT(142),
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
