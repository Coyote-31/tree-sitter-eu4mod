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
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 3
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_spriteTypes = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_spriteType = 4,
  anon_sym_name = 5,
  anon_sym_x = 6,
  anon_sym_y = 7,
  anon_sym_path = 8,
  anon_sym_archive = 9,
  aux_sym__statement_mod_archive_token1 = 10,
  anon_sym_remote_file_id = 11,
  aux_sym__statement_mod_remote_file_id_token1 = 12,
  anon_sym_version = 13,
  aux_sym__statement_mod_version_token1 = 14,
  anon_sym_picture = 15,
  aux_sym__statement_mod_picture_token1 = 16,
  anon_sym_supported_version = 17,
  aux_sym__statement_mod_supported_version_token1 = 18,
  anon_sym_replace_path = 19,
  aux_sym__mod_replace_path_folder_token1 = 20,
  anon_sym_tags = 21,
  aux_sym__mod_tags_keyword_token1 = 22,
  aux_sym__mod_tags_keyword_token2 = 23,
  aux_sym__mod_tags_keyword_token3 = 24,
  aux_sym__mod_tags_keyword_token4 = 25,
  aux_sym__mod_tags_keyword_token5 = 26,
  aux_sym__mod_tags_keyword_token6 = 27,
  aux_sym__mod_tags_keyword_token7 = 28,
  aux_sym__mod_tags_keyword_token8 = 29,
  aux_sym__mod_tags_keyword_token9 = 30,
  aux_sym__mod_tags_keyword_token10 = 31,
  aux_sym__mod_tags_keyword_token11 = 32,
  aux_sym__mod_tags_keyword_token12 = 33,
  aux_sym__mod_tags_keyword_token13 = 34,
  aux_sym__mod_tags_keyword_token14 = 35,
  aux_sym__mod_tags_keyword_token15 = 36,
  aux_sym__mod_tags_keyword_token16 = 37,
  aux_sym__mod_tags_keyword_token17 = 38,
  aux_sym__mod_tags_keyword_token18 = 39,
  aux_sym__mod_tags_keyword_token19 = 40,
  aux_sym__mod_tags_keyword_token20 = 41,
  aux_sym__mod_tags_keyword_token21 = 42,
  aux_sym__mod_tags_keyword_token22 = 43,
  anon_sym_dependencies = 44,
  anon_sym_cursor_offset = 45,
  anon_sym_texturefile = 46,
  aux_sym__statement_gfx_texturefile_token1 = 47,
  anon_sym_noOfFrames = 48,
  anon_sym_overlay_frames_per_row = 49,
  anon_sym_overlay_rows = 50,
  anon_sym_effectFile = 51,
  aux_sym__statement_gfx_effectFile_token1 = 52,
  anon_sym_animation = 53,
  anon_sym_animationmaskfile = 54,
  anon_sym_animationtexturefile = 55,
  aux_sym__animation_entry_dds_token1 = 56,
  anon_sym_animationrotation = 57,
  anon_sym_animationlooping = 58,
  anon_sym_animationtime = 59,
  anon_sym_animationdelay = 60,
  anon_sym_animationrotationoffset = 61,
  anon_sym_animationtexturescale = 62,
  anon_sym_animationblendmode = 63,
  anon_sym_DQUOTEadd_DQUOTE = 64,
  anon_sym_DQUOTEmultiply_DQUOTE = 65,
  anon_sym_DQUOTEoverlay_DQUOTE = 66,
  anon_sym_animationtype = 67,
  anon_sym_DQUOTEscrolling_DQUOTE = 68,
  anon_sym_DQUOTErotating_DQUOTE = 69,
  anon_sym_DQUOTEpulsing_DQUOTE = 70,
  anon_sym_animationframes = 71,
  sym_assign_equal = 72,
  sym_string = 73,
  sym_number = 74,
  aux_sym__number_precision_1_token1 = 75,
  sym_integer = 76,
  aux_sym__integer_positive_token1 = 77,
  sym_byte = 78,
  sym_angle = 79,
  anon_sym_true = 80,
  anon_sym_false = 81,
  anon_sym_yes = 82,
  anon_sym_no = 83,
  sym_comment = 84,
  sym_file = 85,
  sym_dot_mod = 86,
  sym_dot_gfx = 87,
  sym__spriteTypes = 88,
  sym__spriteTypes_block = 89,
  sym__spriteTypes_statement = 90,
  sym__spriteTypes_type = 91,
  sym__spriteType = 92,
  sym__spriteType_block = 93,
  sym__statement_name = 94,
  sym__entry_x = 95,
  sym__entry_y = 96,
  sym__statement_mod_path = 97,
  sym__statement_mod_archive = 98,
  sym__statement_mod_remote_file_id = 99,
  sym__statement_mod_version = 100,
  sym__statement_mod_picture = 101,
  sym__statement_mod_supported_version = 102,
  sym__statement_mod_replace_path = 103,
  sym__mod_replace_path_folder = 104,
  sym__statement_mod_tags = 105,
  sym__mod_tags_block = 106,
  sym__mod_tags_keyword = 107,
  sym__statement_mod_dependencies = 108,
  sym__mod_dependencies_block = 109,
  sym__statement_gfx_cursor_offset = 110,
  sym__statement_gfx_texturefile = 111,
  sym__statement_gfx_noOfFrames = 112,
  sym__statement_gfx_overlay_frames_per_row = 113,
  sym__statement_gfx_overlay_rows = 114,
  sym__statement_gfx_effectFile = 115,
  sym__statement_gfx_animation = 116,
  sym__gfx_animation_block = 117,
  sym__animation_entry_dds = 118,
  sym__animation_entry_angle = 119,
  sym__animation_entry_bool = 120,
  sym__animation_entry_time = 121,
  sym__animation_entry_xy = 122,
  sym__animation_entry_blendmode = 123,
  sym__animation_entry_type = 124,
  sym__animation_entry_frames = 125,
  sym__number_precision_1 = 126,
  sym__integer_positive = 127,
  sym_time = 128,
  sym__yes_no = 129,
  aux_sym_dot_mod_repeat1 = 130,
  aux_sym_dot_gfx_repeat1 = 131,
  aux_sym__spriteTypes_block_repeat1 = 132,
  aux_sym__spriteType_block_repeat1 = 133,
  aux_sym__mod_tags_block_repeat1 = 134,
  aux_sym__mod_dependencies_block_repeat1 = 135,
  aux_sym__gfx_animation_block_repeat1 = 136,
  aux_sym__animation_entry_frames_repeat1 = 137,
  alias_sym_dependencies = 138,
  alias_sym_name_value = 139,
  alias_sym_statement = 140,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_spriteTypes] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_spriteType] = "identifier",
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
  [anon_sym_texturefile] = "identifier",
  [aux_sym__statement_gfx_texturefile_token1] = "string",
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
  [anon_sym_DQUOTEadd_DQUOTE] = "\"add\"",
  [anon_sym_DQUOTEmultiply_DQUOTE] = "\"multiply\"",
  [anon_sym_DQUOTEoverlay_DQUOTE] = "\"overlay\"",
  [anon_sym_animationtype] = "identifier",
  [anon_sym_DQUOTEscrolling_DQUOTE] = "\"scrolling\"",
  [anon_sym_DQUOTErotating_DQUOTE] = "\"rotating\"",
  [anon_sym_DQUOTEpulsing_DQUOTE] = "\"pulsing\"",
  [anon_sym_animationframes] = "identifier",
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
  [sym__statement_name] = "_statement_name",
  [sym__entry_x] = "_entry_x",
  [sym__entry_y] = "_entry_y",
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
  [sym__statement_gfx_texturefile] = "statement",
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
  [sym__number_precision_1] = "_number_precision_1",
  [sym__integer_positive] = "_integer_positive",
  [sym_time] = "time",
  [sym__yes_no] = "_yes_no",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_dot_gfx_repeat1] = "dot_gfx_repeat1",
  [aux_sym__spriteTypes_block_repeat1] = "_spriteTypes_block_repeat1",
  [aux_sym__spriteType_block_repeat1] = "_spriteType_block_repeat1",
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
  [anon_sym_texturefile] = anon_sym_spriteTypes,
  [aux_sym__statement_gfx_texturefile_token1] = sym_string,
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
  [anon_sym_DQUOTEadd_DQUOTE] = anon_sym_DQUOTEadd_DQUOTE,
  [anon_sym_DQUOTEmultiply_DQUOTE] = anon_sym_DQUOTEmultiply_DQUOTE,
  [anon_sym_DQUOTEoverlay_DQUOTE] = anon_sym_DQUOTEoverlay_DQUOTE,
  [anon_sym_animationtype] = anon_sym_spriteTypes,
  [anon_sym_DQUOTEscrolling_DQUOTE] = anon_sym_DQUOTEscrolling_DQUOTE,
  [anon_sym_DQUOTErotating_DQUOTE] = anon_sym_DQUOTErotating_DQUOTE,
  [anon_sym_DQUOTEpulsing_DQUOTE] = anon_sym_DQUOTEpulsing_DQUOTE,
  [anon_sym_animationframes] = anon_sym_spriteTypes,
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
  [sym__statement_name] = sym__statement_name,
  [sym__entry_x] = sym__entry_x,
  [sym__entry_y] = sym__entry_y,
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
  [sym__statement_gfx_texturefile] = sym__statement_gfx_cursor_offset,
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
  [sym__number_precision_1] = sym__number_precision_1,
  [sym__integer_positive] = sym__integer_positive,
  [sym_time] = sym_time,
  [sym__yes_no] = sym__yes_no,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_dot_gfx_repeat1] = aux_sym_dot_gfx_repeat1,
  [aux_sym__spriteTypes_block_repeat1] = aux_sym__spriteTypes_block_repeat1,
  [aux_sym__spriteType_block_repeat1] = aux_sym__spriteType_block_repeat1,
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
  [anon_sym_texturefile] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_gfx_texturefile_token1] = {
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
    .named = false,
  },
  [anon_sym_DQUOTEmultiply_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEoverlay_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animationtype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEscrolling_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTErotating_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEpulsing_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animationframes] = {
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
  [sym__statement_name] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_x] = {
    .visible = false,
    .named = true,
  },
  [sym__entry_y] = {
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
  [sym__statement_gfx_texturefile] = {
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
      if (eof) ADVANCE(978);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1071);
      if (lookahead == '-') ADVANCE(964);
      if (lookahead == '0') ADVANCE(1061);
      if (lookahead == '1') ADVANCE(1061);
      if (lookahead == '2') ADVANCE(1058);
      if (lookahead == '3') ADVANCE(1059);
      if (lookahead == '=') ADVANCE(1053);
      if (lookahead == '\\') SKIP(971)
      if (lookahead == 'a') ADVANCE(830);
      if (lookahead == 'c') ADVANCE(944);
      if (lookahead == 'd') ADVANCE(712);
      if (lookahead == 'e') ADVANCE(761);
      if (lookahead == 'f') ADVANCE(672);
      if (lookahead == 'n') ADVANCE(674);
      if (lookahead == 'o') ADVANCE(949);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(713);
      if (lookahead == 's') ADVANCE(869);
      if (lookahead == 't') ADVANCE(679);
      if (lookahead == 'v') ADVANCE(750);
      if (lookahead == 'x') ADVANCE(985);
      if (lookahead == 'y') ADVANCE(987);
      if (lookahead == '{') ADVANCE(980);
      if (lookahead == '}') ADVANCE(981);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1061);
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
      if (lookahead == '\n') SKIP(411)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(411)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(412)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(412)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(642);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(643);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(637);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(641);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(639);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(640);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(638);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(333);
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(334);
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(992);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(204);
      if (lookahead == 'E') ADVANCE(287);
      if (lookahead == 'G') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'L') ADVANCE(205);
      if (lookahead == 'M') ADVANCE(38);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(992);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(992);
      if (lookahead == '.') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(992);
      if (lookahead == 'c') ADVANCE(853);
      if (lookahead == 'd') ADVANCE(753);
      if (lookahead == 'e') ADVANCE(951);
      if (lookahead == 'g') ADVANCE(762);
      if (lookahead == 'h') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(868);
      if (lookahead == 'm') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'z') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '*') ADVANCE(361);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'z') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '*') ADVANCE(361);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'z') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'I') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'K') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'z') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'z') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'z') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'h') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'y') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 'z') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(100);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == 'x') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'x') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'x') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(1012);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(1012);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(1045);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(1045);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'j') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(325);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == 'z') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'g') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 330:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 's') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(994);
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(994);
      if (lookahead == '.') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(994);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(994);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(996);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(996);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(996);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(990);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(990);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(990);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(1027);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(1027);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(1032);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(1032);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 351:
      if (lookahead == '"') ADVANCE(1009);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 352:
      if (lookahead == '"') ADVANCE(1009);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 353:
      if (lookahead == '"') ADVANCE(1018);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 354:
      if (lookahead == '"') ADVANCE(1018);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 355:
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 356:
      if (lookahead == '"') ADVANCE(1006);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 357:
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 358:
      if (lookahead == '"') ADVANCE(1020);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 359:
      if (lookahead == '"') ADVANCE(998);
      END_STATE();
    case 360:
      if (lookahead == '"') ADVANCE(998);
      if (lookahead == '.') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 361:
      if (lookahead == '"') ADVANCE(998);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 362:
      if (lookahead == '"') ADVANCE(998);
      if (lookahead == '.') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 363:
      if (lookahead == '"') ADVANCE(998);
      if (lookahead == '.') ADVANCE(415);
      END_STATE();
    case 364:
      if (lookahead == '"') ADVANCE(998);
      if (lookahead == '.') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 365:
      if (lookahead == '"') ADVANCE(998);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 366:
      if (lookahead == '"') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      if (lookahead == '"') ADVANCE(1004);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 368:
      if (lookahead == '"') ADVANCE(1004);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 369:
      if (lookahead == '"') ADVANCE(1047);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 370:
      if (lookahead == '"') ADVANCE(1047);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 371:
      if (lookahead == '"') ADVANCE(1051);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 372:
      if (lookahead == '"') ADVANCE(1051);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 373:
      if (lookahead == '"') ADVANCE(1003);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 374:
      if (lookahead == '"') ADVANCE(1003);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 375:
      if (lookahead == '"') ADVANCE(1007);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 376:
      if (lookahead == '"') ADVANCE(1007);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 377:
      if (lookahead == '"') ADVANCE(1008);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 378:
      if (lookahead == '"') ADVANCE(1008);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 379:
      if (lookahead == '"') ADVANCE(1013);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 380:
      if (lookahead == '"') ADVANCE(1013);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 381:
      if (lookahead == '"') ADVANCE(1017);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 382:
      if (lookahead == '"') ADVANCE(1017);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 383:
      if (lookahead == '"') ADVANCE(1046);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 384:
      if (lookahead == '"') ADVANCE(1046);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 385:
      if (lookahead == '"') ADVANCE(1050);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 386:
      if (lookahead == '"') ADVANCE(1050);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 387:
      if (lookahead == '"') ADVANCE(1005);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 388:
      if (lookahead == '"') ADVANCE(1005);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 389:
      if (lookahead == '"') ADVANCE(1049);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 390:
      if (lookahead == '"') ADVANCE(1049);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 391:
      if (lookahead == '"') ADVANCE(1022);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 392:
      if (lookahead == '"') ADVANCE(1022);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 393:
      if (lookahead == '"') ADVANCE(1010);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 394:
      if (lookahead == '"') ADVANCE(1010);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 395:
      if (lookahead == '"') ADVANCE(1016);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 396:
      if (lookahead == '"') ADVANCE(1016);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 397:
      if (lookahead == '"') ADVANCE(1021);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 398:
      if (lookahead == '"') ADVANCE(1021);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 399:
      if (lookahead == '"') ADVANCE(1019);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 400:
      if (lookahead == '"') ADVANCE(1019);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 401:
      if (lookahead == '"') ADVANCE(1011);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 402:
      if (lookahead == '"') ADVANCE(1011);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 403:
      if (lookahead == '"') ADVANCE(1015);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 404:
      if (lookahead == '"') ADVANCE(1015);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 405:
      if (lookahead == '"') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 406:
      if (lookahead == '"') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 407:
      if (lookahead == '"') ADVANCE(1023);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 408:
      if (lookahead == '"') ADVANCE(1023);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 409:
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 410:
      if (lookahead == '"') ADVANCE(1014);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(644);
      END_STATE();
    case 411:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '#') ADVANCE(1071);
      if (lookahead == '0') ADVANCE(647);
      if (lookahead == '3') ADVANCE(649);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'n') ADVANCE(848);
      if (lookahead == 'y') ADVANCE(714);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(651);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(411)
      END_STATE();
    case 412:
      if (lookahead == '"') ADVANCE(969);
      if (lookahead == '#') ADVANCE(1071);
      if (lookahead == '-') ADVANCE(964);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(412)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      END_STATE();
    case 413:
      if (lookahead == '"') ADVANCE(1037);
      if (lookahead == '.') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(655);
      END_STATE();
    case 414:
      if (lookahead == '*') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 415:
      if (lookahead == '*') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 416:
      if (lookahead == '.') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(520);
      if (lookahead == 'M') ADVANCE(425);
      if (lookahead == 'R') ADVANCE(464);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'm') ADVANCE(424);
      if (lookahead == 'o') ADVANCE(626);
      if (lookahead == 'p') ADVANCE(623);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(426);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(627);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(492);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(421);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(493);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(562);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(436);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(462);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 417:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'C') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 418:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 419:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 420:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'K') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 421:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead == 'u') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 422:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 423:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 424:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead == 'u') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 425:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 426:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 427:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 428:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 429:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 430:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 431:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 432:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 433:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 434:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 435:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 436:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 437:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 438:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 439:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 440:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 441:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 442:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'a') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 443:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(582);
      if (lookahead == 'o') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 444:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 445:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 446:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 447:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 448:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 449:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'c') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 450:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 451:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == 'j') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(539);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead == 'z') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 452:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == 'j') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(539);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead == 'z') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 453:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 454:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 455:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 456:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 457:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 458:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 459:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 460:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(475);
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 461:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 462:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 463:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 464:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 465:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 466:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 467:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 468:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 469:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 470:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 471:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 472:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 473:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 474:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 475:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 476:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 477:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 478:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 479:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 480:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 481:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 482:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'g') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 483:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'g') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 484:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'g') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 485:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'g') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 486:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'g') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 487:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'g') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 488:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'g') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 489:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'g') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 490:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'h') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 491:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'h') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 492:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 493:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 494:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 495:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 496:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 497:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 498:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 499:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 500:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 501:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 502:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 503:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 504:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 505:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 506:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 507:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 508:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 509:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 510:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 511:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 512:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 513:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 514:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 515:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 516:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 517:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 518:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 519:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'j') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(539);
      if (lookahead == 'z') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 520:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 521:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 522:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 523:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 524:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(504);
      if (lookahead == 's') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 525:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 526:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 527:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 528:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 529:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 530:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 531:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 532:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 533:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 534:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 535:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 536:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 537:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 538:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 539:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 540:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 541:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 542:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 543:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 544:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 545:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 546:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 547:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 548:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 549:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 550:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 551:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 552:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 553:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 554:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 555:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 556:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 557:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 558:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 559:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 560:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 561:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 562:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 563:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 564:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 565:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 566:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 567:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 568:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 569:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 570:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 571:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 572:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 573:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 574:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 575:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 576:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 577:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 578:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 579:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 580:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 581:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 582:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 583:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 584:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 585:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 586:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 587:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 588:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 589:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 590:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 591:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 592:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 593:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 594:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 595:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 596:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 597:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 598:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 599:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 600:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 601:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 602:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 603:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 604:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 605:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 606:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 607:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 's') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 608:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 609:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 610:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 611:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 612:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 613:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 614:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 615:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 616:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 617:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 618:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 619:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 620:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 621:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 622:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 't') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 623:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'u') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 624:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'u') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 625:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'u') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 626:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'v') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 627:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'v') ADVANCE(467);
      if (lookahead == 'x') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 628:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'v') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 629:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'v') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 630:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 631:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'x') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 632:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'y') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 633:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'y') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 634:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'y') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 635:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'y') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 636:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'y') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 637:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 638:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 639:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 640:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 641:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 642:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 643:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 644:
      if (lookahead == '.') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(644);
      END_STATE();
    case 645:
      if (lookahead == '.') ADVANCE(657);
      END_STATE();
    case 646:
      if (lookahead == '.') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 647:
      if (lookahead == '.') ADVANCE(967);
      END_STATE();
    case 648:
      if (lookahead == '.') ADVANCE(967);
      if (lookahead == '0') ADVANCE(645);
      END_STATE();
    case 649:
      if (lookahead == '.') ADVANCE(967);
      if (lookahead == '6') ADVANCE(648);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(650);
      END_STATE();
    case 650:
      if (lookahead == '.') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(647);
      END_STATE();
    case 651:
      if (lookahead == '.') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(650);
      END_STATE();
    case 652:
      if (lookahead == '.') ADVANCE(653);
      if (lookahead == 'd') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(655);
      END_STATE();
    case 653:
      if (lookahead == '.') ADVANCE(653);
      if (lookahead == 'd') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(655);
      END_STATE();
    case 654:
      if (lookahead == '.') ADVANCE(653);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(655);
      END_STATE();
    case 655:
      if (lookahead == '.') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(655);
      END_STATE();
    case 656:
      if (lookahead == '0') ADVANCE(1062);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1062);
      END_STATE();
    case 657:
      if (lookahead == '0') ADVANCE(1065);
      END_STATE();
    case 658:
      if (lookahead == 'F') ADVANCE(887);
      END_STATE();
    case 659:
      if (lookahead == 'F') ADVANCE(780);
      END_STATE();
    case 660:
      if (lookahead == 'O') ADVANCE(760);
      END_STATE();
    case 661:
      if (lookahead == 'T') ADVANCE(961);
      END_STATE();
    case 662:
      if (lookahead == 'T') ADVANCE(962);
      END_STATE();
    case 663:
      if (lookahead == 'T') ADVANCE(963);
      END_STATE();
    case 664:
      if (lookahead == '_') ADVANCE(772);
      END_STATE();
    case 665:
      if (lookahead == '_') ADVANCE(766);
      END_STATE();
    case 666:
      if (lookahead == '_') ADVANCE(873);
      END_STATE();
    case 667:
      if (lookahead == '_') ADVANCE(866);
      END_STATE();
    case 668:
      if (lookahead == '_') ADVANCE(783);
      END_STATE();
    case 669:
      if (lookahead == '_') ADVANCE(891);
      END_STATE();
    case 670:
      if (lookahead == '_') ADVANCE(952);
      END_STATE();
    case 671:
      if (lookahead == '_') ADVANCE(876);
      END_STATE();
    case 672:
      if (lookahead == 'a') ADVANCE(807);
      END_STATE();
    case 673:
      if (lookahead == 'a') ADVANCE(820);
      END_STATE();
    case 674:
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead == 'o') ADVANCE(1070);
      END_STATE();
    case 675:
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 676:
      if (lookahead == 'a') ADVANCE(924);
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 677:
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 678:
      if (lookahead == 'a') ADVANCE(775);
      if (lookahead == 'e') ADVANCE(956);
      END_STATE();
    case 679:
      if (lookahead == 'a') ADVANCE(775);
      if (lookahead == 'e') ADVANCE(956);
      if (lookahead == 'r') ADVANCE(946);
      END_STATE();
    case 680:
      if (lookahead == 'a') ADVANCE(960);
      END_STATE();
    case 681:
      if (lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 682:
      if (lookahead == 'a') ADVANCE(958);
      END_STATE();
    case 683:
      if (lookahead == 'a') ADVANCE(817);
      END_STATE();
    case 684:
      if (lookahead == 'a') ADVANCE(927);
      END_STATE();
    case 685:
      if (lookahead == 'a') ADVANCE(870);
      if (lookahead == 'i') ADVANCE(920);
      END_STATE();
    case 686:
      if (lookahead == 'a') ADVANCE(906);
      END_STATE();
    case 687:
      if (lookahead == 'a') ADVANCE(822);
      END_STATE();
    case 688:
      if (lookahead == 'a') ADVANCE(926);
      END_STATE();
    case 689:
      if (lookahead == 'a') ADVANCE(703);
      END_STATE();
    case 690:
      if (lookahead == 'a') ADVANCE(823);
      END_STATE();
    case 691:
      if (lookahead == 'a') ADVANCE(824);
      END_STATE();
    case 692:
      if (lookahead == 'a') ADVANCE(815);
      END_STATE();
    case 693:
      if (lookahead == 'a') ADVANCE(934);
      END_STATE();
    case 694:
      if (lookahead == 'a') ADVANCE(938);
      END_STATE();
    case 695:
      if (lookahead == 'a') ADVANCE(939);
      END_STATE();
    case 696:
      if (lookahead == 'a') ADVANCE(940);
      END_STATE();
    case 697:
      if (lookahead == 'b') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(755);
      if (lookahead == 'f') ADVANCE(899);
      if (lookahead == 'l') ADVANCE(860);
      if (lookahead == 'm') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(856);
      if (lookahead == 't') ADVANCE(757);
      END_STATE();
    case 698:
      if (lookahead == 'c') ADVANCE(778);
      END_STATE();
    case 699:
      if (lookahead == 'c') ADVANCE(933);
      END_STATE();
    case 700:
      if (lookahead == 'c') ADVANCE(925);
      END_STATE();
    case 701:
      if (lookahead == 'c') ADVANCE(787);
      END_STATE();
    case 702:
      if (lookahead == 'c') ADVANCE(738);
      END_STATE();
    case 703:
      if (lookahead == 'c') ADVANCE(735);
      END_STATE();
    case 704:
      if (lookahead == 'c') ADVANCE(692);
      END_STATE();
    case 705:
      if (lookahead == 'c') ADVANCE(800);
      END_STATE();
    case 706:
      if (lookahead == 'c') ADVANCE(683);
      END_STATE();
    case 707:
      if (lookahead == 'd') ADVANCE(991);
      END_STATE();
    case 708:
      if (lookahead == 'd') ADVANCE(821);
      END_STATE();
    case 709:
      if (lookahead == 'd') ADVANCE(670);
      END_STATE();
    case 710:
      if (lookahead == 'd') ADVANCE(737);
      END_STATE();
    case 711:
      if (lookahead == 'd') ADVANCE(726);
      END_STATE();
    case 712:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 713:
      if (lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 714:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 715:
      if (lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 716:
      if (lookahead == 'e') ADVANCE(984);
      END_STATE();
    case 717:
      if (lookahead == 'e') ADVANCE(1066);
      END_STATE();
    case 718:
      if (lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 719:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 720:
      if (lookahead == 'e') ADVANCE(989);
      END_STATE();
    case 721:
      if (lookahead == 'e') ADVANCE(995);
      END_STATE();
    case 722:
      if (lookahead == 'e') ADVANCE(1031);
      END_STATE();
    case 723:
      if (lookahead == 'e') ADVANCE(983);
      END_STATE();
    case 724:
      if (lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 725:
      if (lookahead == 'e') ADVANCE(1035);
      END_STATE();
    case 726:
      if (lookahead == 'e') ADVANCE(1044);
      END_STATE();
    case 727:
      if (lookahead == 'e') ADVANCE(1040);
      END_STATE();
    case 728:
      if (lookahead == 'e') ADVANCE(1048);
      END_STATE();
    case 729:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 730:
      if (lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 731:
      if (lookahead == 'e') ADVANCE(1043);
      END_STATE();
    case 732:
      if (lookahead == 'e') ADVANCE(982);
      END_STATE();
    case 733:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 734:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 735:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 736:
      if (lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 737:
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 738:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 739:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 740:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(922);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 744:
      if (lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 747:
      if (lookahead == 'e') ADVANCE(842);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 749:
      if (lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 751:
      if (lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 752:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 753:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 756:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 757:
      if (lookahead == 'e') ADVANCE(957);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'y') ADVANCE(878);
      END_STATE();
    case 758:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 759:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 760:
      if (lookahead == 'f') ADVANCE(658);
      END_STATE();
    case 761:
      if (lookahead == 'f') ADVANCE(764);
      END_STATE();
    case 762:
      if (lookahead == 'f') ADVANCE(955);
      END_STATE();
    case 763:
      if (lookahead == 'f') ADVANCE(765);
      END_STATE();
    case 764:
      if (lookahead == 'f') ADVANCE(752);
      END_STATE();
    case 765:
      if (lookahead == 'f') ADVANCE(916);
      END_STATE();
    case 766:
      if (lookahead == 'f') ADVANCE(789);
      END_STATE();
    case 767:
      if (lookahead == 'f') ADVANCE(917);
      END_STATE();
    case 768:
      if (lookahead == 'f') ADVANCE(792);
      END_STATE();
    case 769:
      if (lookahead == 'f') ADVANCE(795);
      END_STATE();
    case 770:
      if (lookahead == 'f') ADVANCE(689);
      END_STATE();
    case 771:
      if (lookahead == 'f') ADVANCE(767);
      END_STATE();
    case 772:
      if (lookahead == 'f') ADVANCE(898);
      if (lookahead == 'r') ADVANCE(847);
      END_STATE();
    case 773:
      if (lookahead == 'f') ADVANCE(797);
      if (lookahead == 's') ADVANCE(704);
      END_STATE();
    case 774:
      if (lookahead == 'g') ADVANCE(1039);
      END_STATE();
    case 775:
      if (lookahead == 'g') ADVANCE(903);
      END_STATE();
    case 776:
      if (lookahead == 'h') ADVANCE(988);
      END_STATE();
    case 777:
      if (lookahead == 'h') ADVANCE(999);
      END_STATE();
    case 778:
      if (lookahead == 'h') ADVANCE(788);
      END_STATE();
    case 779:
      if (lookahead == 'i') ADVANCE(819);
      END_STATE();
    case 780:
      if (lookahead == 'i') ADVANCE(810);
      END_STATE();
    case 781:
      if (lookahead == 'i') ADVANCE(849);
      END_STATE();
    case 782:
      if (lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 783:
      if (lookahead == 'i') ADVANCE(707);
      END_STATE();
    case 784:
      if (lookahead == 'i') ADVANCE(838);
      END_STATE();
    case 785:
      if (lookahead == 'i') ADVANCE(915);
      END_STATE();
    case 786:
      if (lookahead == 'i') ADVANCE(921);
      END_STATE();
    case 787:
      if (lookahead == 'i') ADVANCE(744);
      END_STATE();
    case 788:
      if (lookahead == 'i') ADVANCE(950);
      END_STATE();
    case 789:
      if (lookahead == 'i') ADVANCE(811);
      END_STATE();
    case 790:
      if (lookahead == 'i') ADVANCE(929);
      END_STATE();
    case 791:
      if (lookahead == 'i') ADVANCE(857);
      END_STATE();
    case 792:
      if (lookahead == 'i') ADVANCE(812);
      END_STATE();
    case 793:
      if (lookahead == 'i') ADVANCE(859);
      END_STATE();
    case 794:
      if (lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 795:
      if (lookahead == 'i') ADVANCE(813);
      END_STATE();
    case 796:
      if (lookahead == 'i') ADVANCE(862);
      END_STATE();
    case 797:
      if (lookahead == 'i') ADVANCE(814);
      END_STATE();
    case 798:
      if (lookahead == 'i') ADVANCE(864);
      END_STATE();
    case 799:
      if (lookahead == 'i') ADVANCE(865);
      END_STATE();
    case 800:
      if (lookahead == 'i') ADVANCE(919);
      END_STATE();
    case 801:
      if (lookahead == 'i') ADVANCE(828);
      END_STATE();
    case 802:
      if (lookahead == 'i') ADVANCE(942);
      END_STATE();
    case 803:
      if (lookahead == 'i') ADVANCE(943);
      END_STATE();
    case 804:
      if (lookahead == 'i') ADVANCE(829);
      END_STATE();
    case 805:
      if (lookahead == 'k') ADVANCE(769);
      END_STATE();
    case 806:
      if (lookahead == 'l') ADVANCE(681);
      END_STATE();
    case 807:
      if (lookahead == 'l') ADVANCE(914);
      END_STATE();
    case 808:
      if (lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 809:
      if (lookahead == 'l') ADVANCE(682);
      END_STATE();
    case 810:
      if (lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 811:
      if (lookahead == 'l') ADVANCE(740);
      END_STATE();
    case 812:
      if (lookahead == 'l') ADVANCE(724);
      END_STATE();
    case 813:
      if (lookahead == 'l') ADVANCE(725);
      END_STATE();
    case 814:
      if (lookahead == 'l') ADVANCE(730);
      END_STATE();
    case 815:
      if (lookahead == 'l') ADVANCE(731);
      END_STATE();
    case 816:
      if (lookahead == 'l') ADVANCE(751);
      END_STATE();
    case 817:
      if (lookahead == 'l') ADVANCE(786);
      END_STATE();
    case 818:
      if (lookahead == 'm') ADVANCE(851);
      if (lookahead == 'p') ADVANCE(806);
      END_STATE();
    case 819:
      if (lookahead == 'm') ADVANCE(684);
      END_STATE();
    case 820:
      if (lookahead == 'm') ADVANCE(716);
      END_STATE();
    case 821:
      if (lookahead == 'm') ADVANCE(867);
      END_STATE();
    case 822:
      if (lookahead == 'm') ADVANCE(739);
      END_STATE();
    case 823:
      if (lookahead == 'm') ADVANCE(746);
      END_STATE();
    case 824:
      if (lookahead == 'm') ADVANCE(748);
      END_STATE();
    case 825:
      if (lookahead == 'm') ADVANCE(727);
      END_STATE();
    case 826:
      if (lookahead == 'm') ADVANCE(827);
      END_STATE();
    case 827:
      if (lookahead == 'm') ADVANCE(864);
      END_STATE();
    case 828:
      if (lookahead == 'm') ADVANCE(694);
      END_STATE();
    case 829:
      if (lookahead == 'm') ADVANCE(695);
      END_STATE();
    case 830:
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 831:
      if (lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 832:
      if (lookahead == 'n') ADVANCE(993);
      END_STATE();
    case 833:
      if (lookahead == 'n') ADVANCE(1034);
      END_STATE();
    case 834:
      if (lookahead == 'n') ADVANCE(1038);
      END_STATE();
    case 835:
      if (lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 836:
      if (lookahead == 'n') ADVANCE(697);
      END_STATE();
    case 837:
      if (lookahead == 'n') ADVANCE(1033);
      END_STATE();
    case 838:
      if (lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 839:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 840:
      if (lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 841:
      if (lookahead == 'n') ADVANCE(701);
      END_STATE();
    case 842:
      if (lookahead == 'n') ADVANCE(930);
      END_STATE();
    case 843:
      if (lookahead == 'n') ADVANCE(911);
      END_STATE();
    case 844:
      if (lookahead == 'n') ADVANCE(932);
      END_STATE();
    case 845:
      if (lookahead == 'n') ADVANCE(801);
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 846:
      if (lookahead == 'n') ADVANCE(804);
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 847:
      if (lookahead == 'o') ADVANCE(954);
      END_STATE();
    case 848:
      if (lookahead == 'o') ADVANCE(1069);
      END_STATE();
    case 849:
      if (lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 850:
      if (lookahead == 'o') ADVANCE(953);
      END_STATE();
    case 851:
      if (lookahead == 'o') ADVANCE(928);
      END_STATE();
    case 852:
      if (lookahead == 'o') ADVANCE(883);
      END_STATE();
    case 853:
      if (lookahead == 'o') ADVANCE(826);
      END_STATE();
    case 854:
      if (lookahead == 'o') ADVANCE(833);
      END_STATE();
    case 855:
      if (lookahead == 'o') ADVANCE(874);
      END_STATE();
    case 856:
      if (lookahead == 'o') ADVANCE(941);
      END_STATE();
    case 857:
      if (lookahead == 'o') ADVANCE(834);
      END_STATE();
    case 858:
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 859:
      if (lookahead == 'o') ADVANCE(835);
      END_STATE();
    case 860:
      if (lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 861:
      if (lookahead == 'o') ADVANCE(836);
      END_STATE();
    case 862:
      if (lookahead == 'o') ADVANCE(837);
      END_STATE();
    case 863:
      if (lookahead == 'o') ADVANCE(886);
      END_STATE();
    case 864:
      if (lookahead == 'o') ADVANCE(839);
      END_STATE();
    case 865:
      if (lookahead == 'o') ADVANCE(843);
      END_STATE();
    case 866:
      if (lookahead == 'o') ADVANCE(763);
      END_STATE();
    case 867:
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 868:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 869:
      if (lookahead == 'p') ADVANCE(884);
      if (lookahead == 'u') ADVANCE(871);
      END_STATE();
    case 870:
      if (lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 871:
      if (lookahead == 'p') ADVANCE(880);
      END_STATE();
    case 872:
      if (lookahead == 'p') ADVANCE(715);
      END_STATE();
    case 873:
      if (lookahead == 'p') ADVANCE(688);
      END_STATE();
    case 874:
      if (lookahead == 'p') ADVANCE(784);
      END_STATE();
    case 875:
      if (lookahead == 'p') ADVANCE(723);
      END_STATE();
    case 876:
      if (lookahead == 'p') ADVANCE(742);
      END_STATE();
    case 877:
      if (lookahead == 'p') ADVANCE(749);
      END_STATE();
    case 878:
      if (lookahead == 'p') ADVANCE(728);
      END_STATE();
    case 879:
      if (lookahead == 'p') ADVANCE(732);
      END_STATE();
    case 880:
      if (lookahead == 'p') ADVANCE(858);
      END_STATE();
    case 881:
      if (lookahead == 'p') ADVANCE(900);
      if (lookahead == 'u') ADVANCE(871);
      END_STATE();
    case 882:
      if (lookahead == 'p') ADVANCE(901);
      if (lookahead == 'u') ADVANCE(871);
      END_STATE();
    case 883:
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 884:
      if (lookahead == 'r') ADVANCE(790);
      END_STATE();
    case 885:
      if (lookahead == 'r') ADVANCE(910);
      END_STATE();
    case 886:
      if (lookahead == 'r') ADVANCE(959);
      END_STATE();
    case 887:
      if (lookahead == 'r') ADVANCE(687);
      END_STATE();
    case 888:
      if (lookahead == 'r') ADVANCE(912);
      END_STATE();
    case 889:
      if (lookahead == 'r') ADVANCE(770);
      END_STATE();
    case 890:
      if (lookahead == 'r') ADVANCE(669);
      END_STATE();
    case 891:
      if (lookahead == 'r') ADVANCE(850);
      END_STATE();
    case 892:
      if (lookahead == 'r') ADVANCE(918);
      END_STATE();
    case 893:
      if (lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 894:
      if (lookahead == 'r') ADVANCE(756);
      END_STATE();
    case 895:
      if (lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 896:
      if (lookahead == 'r') ADVANCE(808);
      END_STATE();
    case 897:
      if (lookahead == 'r') ADVANCE(931);
      END_STATE();
    case 898:
      if (lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 899:
      if (lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 900:
      if (lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 901:
      if (lookahead == 'r') ADVANCE(803);
      END_STATE();
    case 902:
      if (lookahead == 's') ADVANCE(1068);
      END_STATE();
    case 903:
      if (lookahead == 's') ADVANCE(1001);
      END_STATE();
    case 904:
      if (lookahead == 's') ADVANCE(1028);
      END_STATE();
    case 905:
      if (lookahead == 's') ADVANCE(979);
      END_STATE();
    case 906:
      if (lookahead == 's') ADVANCE(805);
      END_STATE();
    case 907:
      if (lookahead == 's') ADVANCE(1024);
      END_STATE();
    case 908:
      if (lookahead == 's') ADVANCE(1030);
      END_STATE();
    case 909:
      if (lookahead == 's') ADVANCE(1052);
      END_STATE();
    case 910:
      if (lookahead == 's') ADVANCE(852);
      END_STATE();
    case 911:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 912:
      if (lookahead == 's') ADVANCE(781);
      END_STATE();
    case 913:
      if (lookahead == 's') ADVANCE(671);
      END_STATE();
    case 914:
      if (lookahead == 's') ADVANCE(718);
      END_STATE();
    case 915:
      if (lookahead == 's') ADVANCE(936);
      END_STATE();
    case 916:
      if (lookahead == 's') ADVANCE(741);
      END_STATE();
    case 917:
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 918:
      if (lookahead == 's') ADVANCE(793);
      END_STATE();
    case 919:
      if (lookahead == 's') ADVANCE(799);
      END_STATE();
    case 920:
      if (lookahead == 's') ADVANCE(919);
      END_STATE();
    case 921:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 922:
      if (lookahead == 't') ADVANCE(1025);
      END_STATE();
    case 923:
      if (lookahead == 't') ADVANCE(1042);
      END_STATE();
    case 924:
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 925:
      if (lookahead == 't') ADVANCE(659);
      END_STATE();
    case 926:
      if (lookahead == 't') ADVANCE(777);
      END_STATE();
    case 927:
      if (lookahead == 't') ADVANCE(782);
      END_STATE();
    case 928:
      if (lookahead == 't') ADVANCE(734);
      END_STATE();
    case 929:
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 930:
      if (lookahead == 't') ADVANCE(911);
      END_STATE();
    case 931:
      if (lookahead == 't') ADVANCE(733);
      END_STATE();
    case 932:
      if (lookahead == 't') ADVANCE(745);
      END_STATE();
    case 933:
      if (lookahead == 't') ADVANCE(945);
      END_STATE();
    case 934:
      if (lookahead == 't') ADVANCE(791);
      END_STATE();
    case 935:
      if (lookahead == 't') ADVANCE(947);
      END_STATE();
    case 936:
      if (lookahead == 't') ADVANCE(863);
      END_STATE();
    case 937:
      if (lookahead == 't') ADVANCE(948);
      END_STATE();
    case 938:
      if (lookahead == 't') ADVANCE(794);
      END_STATE();
    case 939:
      if (lookahead == 't') ADVANCE(796);
      END_STATE();
    case 940:
      if (lookahead == 't') ADVANCE(798);
      END_STATE();
    case 941:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 942:
      if (lookahead == 't') ADVANCE(758);
      END_STATE();
    case 943:
      if (lookahead == 't') ADVANCE(759);
      END_STATE();
    case 944:
      if (lookahead == 'u') ADVANCE(885);
      END_STATE();
    case 945:
      if (lookahead == 'u') ADVANCE(893);
      END_STATE();
    case 946:
      if (lookahead == 'u') ADVANCE(717);
      END_STATE();
    case 947:
      if (lookahead == 'u') ADVANCE(894);
      END_STATE();
    case 948:
      if (lookahead == 'u') ADVANCE(895);
      END_STATE();
    case 949:
      if (lookahead == 'v') ADVANCE(736);
      END_STATE();
    case 950:
      if (lookahead == 'v') ADVANCE(720);
      END_STATE();
    case 951:
      if (lookahead == 'v') ADVANCE(747);
      END_STATE();
    case 952:
      if (lookahead == 'v') ADVANCE(754);
      END_STATE();
    case 953:
      if (lookahead == 'w') ADVANCE(1029);
      END_STATE();
    case 954:
      if (lookahead == 'w') ADVANCE(908);
      END_STATE();
    case 955:
      if (lookahead == 'x') ADVANCE(336);
      END_STATE();
    case 956:
      if (lookahead == 'x') ADVANCE(935);
      END_STATE();
    case 957:
      if (lookahead == 'x') ADVANCE(937);
      END_STATE();
    case 958:
      if (lookahead == 'y') ADVANCE(1041);
      END_STATE();
    case 959:
      if (lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 960:
      if (lookahead == 'y') ADVANCE(664);
      END_STATE();
    case 961:
      if (lookahead == 'y') ADVANCE(875);
      END_STATE();
    case 962:
      if (lookahead == 'y') ADVANCE(877);
      END_STATE();
    case 963:
      if (lookahead == 'y') ADVANCE(879);
      END_STATE();
    case 964:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      END_STATE();
    case 965:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1062);
      END_STATE();
    case 966:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1063);
      END_STATE();
    case 967:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1065);
      END_STATE();
    case 968:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 969:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(655);
      END_STATE();
    case 970:
      if (eof) ADVANCE(978);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 971:
      if (eof) ADVANCE(978);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(970)
      END_STATE();
    case 972:
      if (eof) ADVANCE(978);
      if (lookahead == '\n') SKIP(976)
      END_STATE();
    case 973:
      if (eof) ADVANCE(978);
      if (lookahead == '\n') SKIP(976)
      if (lookahead == '\r') SKIP(972)
      END_STATE();
    case 974:
      if (eof) ADVANCE(978);
      if (lookahead == '\n') SKIP(977)
      END_STATE();
    case 975:
      if (eof) ADVANCE(978);
      if (lookahead == '\n') SKIP(977)
      if (lookahead == '\r') SKIP(974)
      END_STATE();
    case 976:
      if (eof) ADVANCE(978);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '#') ADVANCE(1071);
      if (lookahead == '=') ADVANCE(1053);
      if (lookahead == '\\') SKIP(973)
      if (lookahead == 'a') ADVANCE(845);
      if (lookahead == 'd') ADVANCE(712);
      if (lookahead == 'n') ADVANCE(673);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(713);
      if (lookahead == 's') ADVANCE(881);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == 'v') ADVANCE(750);
      if (lookahead == 'x') ADVANCE(985);
      if (lookahead == 'y') ADVANCE(986);
      if (lookahead == '}') ADVANCE(981);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(976)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1064);
      END_STATE();
    case 977:
      if (eof) ADVANCE(978);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '#') ADVANCE(1071);
      if (lookahead == '=') ADVANCE(1053);
      if (lookahead == '\\') SKIP(975)
      if (lookahead == 'a') ADVANCE(846);
      if (lookahead == 'c') ADVANCE(944);
      if (lookahead == 'd') ADVANCE(712);
      if (lookahead == 'e') ADVANCE(761);
      if (lookahead == 'n') ADVANCE(675);
      if (lookahead == 'o') ADVANCE(949);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(713);
      if (lookahead == 's') ADVANCE(882);
      if (lookahead == 't') ADVANCE(678);
      if (lookahead == 'v') ADVANCE(750);
      if (lookahead == '{') ADVANCE(980);
      if (lookahead == '}') ADVANCE(981);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(977)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(979);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_texturefile);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__statement_gfx_texturefile_token1);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_noOfFrames);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_overlay_frames_per_row);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_overlay_rows);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_effectFile);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__statement_gfx_effectFile_token1);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_animation);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_animation);
      if (lookahead == 'b') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(755);
      if (lookahead == 'f') ADVANCE(899);
      if (lookahead == 'l') ADVANCE(860);
      if (lookahead == 'm') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(856);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_animationmaskfile);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_animationtexturefile);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__animation_entry_dds_token1);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_animationrotation);
      if (lookahead == 'o') ADVANCE(771);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_animationlooping);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_animationtime);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_animationdelay);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_animationrotationoffset);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_animationtexturescale);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_animationblendmode);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_DQUOTEadd_DQUOTE);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_DQUOTEmultiply_DQUOTE);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_DQUOTEoverlay_DQUOTE);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_animationtype);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_DQUOTEscrolling_DQUOTE);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_DQUOTErotating_DQUOTE);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_DQUOTEpulsing_DQUOTE);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_animationframes);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == 'f') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(965);
      if (lookahead == '0') ADVANCE(1056);
      if (lookahead == 'f') ADVANCE(1055);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(965);
      if (lookahead == '5') ADVANCE(1060);
      if (lookahead == 'f') ADVANCE(1055);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1061);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(965);
      if (lookahead == '6') ADVANCE(1057);
      if (lookahead == 'f') ADVANCE(1055);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1061);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(965);
      if (lookahead == 'f') ADVANCE(1055);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1061);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(965);
      if (lookahead == 'f') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1061);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1062);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__number_precision_1_token1);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__integer_positive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1064);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_angle);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'O') ADVANCE(760);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1071);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 976},
  [2] = {.lex_state = 976},
  [3] = {.lex_state = 976},
  [4] = {.lex_state = 976},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 976},
  [8] = {.lex_state = 976},
  [9] = {.lex_state = 976},
  [10] = {.lex_state = 977},
  [11] = {.lex_state = 977},
  [12] = {.lex_state = 977},
  [13] = {.lex_state = 977},
  [14] = {.lex_state = 977},
  [15] = {.lex_state = 976},
  [16] = {.lex_state = 976},
  [17] = {.lex_state = 976},
  [18] = {.lex_state = 976},
  [19] = {.lex_state = 976},
  [20] = {.lex_state = 976},
  [21] = {.lex_state = 976},
  [22] = {.lex_state = 976},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 976},
  [25] = {.lex_state = 976},
  [26] = {.lex_state = 976},
  [27] = {.lex_state = 976},
  [28] = {.lex_state = 976},
  [29] = {.lex_state = 976},
  [30] = {.lex_state = 976},
  [31] = {.lex_state = 976},
  [32] = {.lex_state = 976},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 977},
  [55] = {.lex_state = 977},
  [56] = {.lex_state = 977},
  [57] = {.lex_state = 977},
  [58] = {.lex_state = 977},
  [59] = {.lex_state = 977},
  [60] = {.lex_state = 977},
  [61] = {.lex_state = 977},
  [62] = {.lex_state = 977},
  [63] = {.lex_state = 977},
  [64] = {.lex_state = 977},
  [65] = {.lex_state = 977},
  [66] = {.lex_state = 977},
  [67] = {.lex_state = 977},
  [68] = {.lex_state = 977},
  [69] = {.lex_state = 977},
  [70] = {.lex_state = 977},
  [71] = {.lex_state = 977},
  [72] = {.lex_state = 977},
  [73] = {.lex_state = 976},
  [74] = {.lex_state = 976},
  [75] = {.lex_state = 976},
  [76] = {.lex_state = 976},
  [77] = {.lex_state = 976},
  [78] = {.lex_state = 976},
  [79] = {.lex_state = 976},
  [80] = {.lex_state = 977},
  [81] = {.lex_state = 976},
  [82] = {.lex_state = 411},
  [83] = {.lex_state = 976},
  [84] = {.lex_state = 976},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 977},
  [87] = {.lex_state = 977},
  [88] = {.lex_state = 977},
  [89] = {.lex_state = 977},
  [90] = {.lex_state = 977},
  [91] = {.lex_state = 977},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 976},
  [96] = {.lex_state = 976},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 411},
  [100] = {.lex_state = 976},
  [101] = {.lex_state = 977},
  [102] = {.lex_state = 977},
  [103] = {.lex_state = 976},
  [104] = {.lex_state = 977},
  [105] = {.lex_state = 976},
  [106] = {.lex_state = 976},
  [107] = {.lex_state = 977},
  [108] = {.lex_state = 976},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 976},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 976},
  [114] = {.lex_state = 411},
  [115] = {.lex_state = 977},
  [116] = {.lex_state = 976},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 976},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 976},
  [122] = {.lex_state = 977},
  [123] = {.lex_state = 976},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 411},
  [126] = {.lex_state = 412},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 412},
  [131] = {.lex_state = 411},
  [132] = {.lex_state = 412},
  [133] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_spriteTypes] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_spriteType] = ACTIONS(1),
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
    [anon_sym_texturefile] = ACTIONS(1),
    [aux_sym__statement_gfx_texturefile_token1] = ACTIONS(1),
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
    [sym_file] = STATE(133),
    [sym_dot_mod] = STATE(128),
    [sym_dot_gfx] = STATE(128),
    [sym__spriteTypes] = STATE(76),
    [sym__statement_name] = STATE(5),
    [sym__statement_mod_path] = STATE(5),
    [sym__statement_mod_archive] = STATE(5),
    [sym__statement_mod_remote_file_id] = STATE(5),
    [sym__statement_mod_version] = STATE(5),
    [sym__statement_mod_picture] = STATE(5),
    [sym__statement_mod_supported_version] = STATE(5),
    [sym__statement_mod_replace_path] = STATE(5),
    [sym__statement_mod_tags] = STATE(5),
    [sym__statement_mod_dependencies] = STATE(5),
    [aux_sym_dot_mod_repeat1] = STATE(5),
    [aux_sym_dot_gfx_repeat1] = STATE(76),
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
  [105] = 13,
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
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(6), 11,
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
  [155] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_name,
    ACTIONS(47), 1,
      anon_sym_path,
    ACTIONS(50), 1,
      anon_sym_archive,
    ACTIONS(53), 1,
      anon_sym_remote_file_id,
    ACTIONS(56), 1,
      anon_sym_version,
    ACTIONS(59), 1,
      anon_sym_picture,
    ACTIONS(62), 1,
      anon_sym_supported_version,
    ACTIONS(65), 1,
      anon_sym_replace_path,
    ACTIONS(68), 1,
      anon_sym_tags,
    ACTIONS(71), 1,
      anon_sym_dependencies,
    STATE(6), 11,
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
  [205] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      anon_sym_animationrotation,
    ACTIONS(80), 1,
      anon_sym_animationlooping,
    ACTIONS(86), 1,
      anon_sym_animationblendmode,
    ACTIONS(88), 1,
      anon_sym_animationtype,
    ACTIONS(90), 1,
      anon_sym_animationframes,
    ACTIONS(76), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(82), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(84), 2,
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
  [250] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      anon_sym_animationrotation,
    ACTIONS(100), 1,
      anon_sym_animationlooping,
    ACTIONS(109), 1,
      anon_sym_animationblendmode,
    ACTIONS(112), 1,
      anon_sym_animationtype,
    ACTIONS(115), 1,
      anon_sym_animationframes,
    ACTIONS(94), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(103), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(106), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(8), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [295] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_animationrotation,
    ACTIONS(80), 1,
      anon_sym_animationlooping,
    ACTIONS(86), 1,
      anon_sym_animationblendmode,
    ACTIONS(88), 1,
      anon_sym_animationtype,
    ACTIONS(90), 1,
      anon_sym_animationframes,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 2,
      anon_sym_animationmaskfile,
      anon_sym_animationtexturefile,
    ACTIONS(82), 2,
      anon_sym_animationtime,
      anon_sym_animationdelay,
    ACTIONS(84), 2,
      anon_sym_animationrotationoffset,
      anon_sym_animationtexturescale,
    STATE(8), 9,
      sym__animation_entry_dds,
      sym__animation_entry_angle,
      sym__animation_entry_bool,
      sym__animation_entry_time,
      sym__animation_entry_xy,
      sym__animation_entry_blendmode,
      sym__animation_entry_type,
      sym__animation_entry_frames,
      aux_sym__gfx_animation_block_repeat1,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_assign_equal,
    ACTIONS(120), 18,
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
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 18,
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
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [391] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_texturefile,
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
    STATE(69), 1,
      sym__statement_name,
    STATE(13), 7,
      sym__statement_gfx_texturefile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [431] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      anon_sym_name,
    ACTIONS(145), 1,
      anon_sym_texturefile,
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
    STATE(69), 1,
      sym__statement_name,
    STATE(13), 7,
      sym__statement_gfx_texturefile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [471] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(128), 1,
      anon_sym_texturefile,
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
    STATE(69), 1,
      sym__statement_name,
    STATE(12), 7,
      sym__statement_gfx_texturefile,
      sym__statement_gfx_noOfFrames,
      sym__statement_gfx_overlay_frames_per_row,
      sym__statement_gfx_overlay_rows,
      sym__statement_gfx_effectFile,
      sym__statement_gfx_animation,
      aux_sym__spriteType_block_repeat1,
  [511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_animationrotation,
    ACTIONS(169), 1,
      sym_assign_equal,
    ACTIONS(165), 11,
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
  [534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_animationrotation,
    ACTIONS(175), 1,
      sym_assign_equal,
    ACTIONS(171), 11,
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
  [557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_animationrotation,
    ACTIONS(181), 1,
      sym_assign_equal,
    ACTIONS(177), 11,
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
  [580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_animationrotation,
    ACTIONS(187), 1,
      sym_assign_equal,
    ACTIONS(183), 11,
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
  [603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_animationrotation,
    ACTIONS(193), 1,
      sym_assign_equal,
    ACTIONS(189), 11,
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
  [626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_animationrotation,
    ACTIONS(199), 1,
      sym_assign_equal,
    ACTIONS(195), 11,
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
  [649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_animationrotation,
    ACTIONS(205), 1,
      sym_assign_equal,
    ACTIONS(201), 11,
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
  [672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_animationrotation,
    ACTIONS(211), 1,
      sym_assign_equal,
    ACTIONS(207), 11,
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
  [695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_assign_equal,
    ACTIONS(213), 11,
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
  [715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_animationrotation,
    ACTIONS(217), 11,
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
  [735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_animationrotation,
    ACTIONS(221), 11,
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
  [755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_animationrotation,
    ACTIONS(225), 11,
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
  [775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_animationrotation,
    ACTIONS(229), 11,
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
  [795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_animationrotation,
    ACTIONS(233), 11,
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
  [815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_animationrotation,
    ACTIONS(237), 11,
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
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_animationrotation,
    ACTIONS(241), 11,
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
  [855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_animationrotation,
    ACTIONS(245), 11,
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
  [875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_animationrotation,
    ACTIONS(249), 11,
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
  [895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_assign_equal,
    ACTIONS(253), 11,
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
  [915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_assign_equal,
    ACTIONS(257), 11,
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
  [935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_assign_equal,
    ACTIONS(261), 11,
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
  [955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_assign_equal,
    ACTIONS(265), 11,
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
  [975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_assign_equal,
    ACTIONS(269), 11,
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
  [995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_assign_equal,
    ACTIONS(273), 11,
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
  [1015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_assign_equal,
    ACTIONS(277), 11,
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
  [1035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_assign_equal,
    ACTIONS(281), 11,
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
  [1055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 11,
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
  [1072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 11,
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
  [1089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 11,
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
  [1106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 11,
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
  [1123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 11,
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
  [1140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 11,
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
  [1157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 11,
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
  [1174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 11,
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
  [1191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 11,
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
  [1208] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [1225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 11,
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
  [1242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 11,
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
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 11,
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
  [1276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_assign_equal,
    ACTIONS(311), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_assign_equal,
    ACTIONS(315), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_assign_equal,
    ACTIONS(319), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_assign_equal,
    ACTIONS(323), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_assign_equal,
    ACTIONS(327), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_assign_equal,
    ACTIONS(331), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_spriteType,
    ACTIONS(346), 1,
      anon_sym_cursor_offset,
    STATE(63), 5,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [1440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1454] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 1,
      anon_sym_spriteType,
    ACTIONS(355), 1,
      anon_sym_cursor_offset,
    STATE(66), 5,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [1474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_spriteType,
    ACTIONS(355), 1,
      anon_sym_cursor_offset,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(63), 5,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [1494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 8,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
      anon_sym_noOfFrames,
      anon_sym_overlay_frames_per_row,
      anon_sym_overlay_rows,
      anon_sym_effectFile,
      anon_sym_animation,
  [1564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(371), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [1576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 1,
      aux_sym__integer_positive_token1,
    STATE(73), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [1590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      aux_sym__integer_positive_token1,
    STATE(73), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [1604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      anon_sym_spriteTypes,
    STATE(75), 2,
      sym__spriteTypes,
      aux_sym_dot_gfx_repeat1,
  [1618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    STATE(75), 2,
      sym__spriteTypes,
      aux_sym_dot_gfx_repeat1,
  [1632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_x,
    ACTIONS(391), 1,
      anon_sym_y,
    STATE(93), 1,
      sym__entry_y,
    STATE(105), 1,
      sym__entry_x,
  [1648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym__integer_positive_token1,
    STATE(74), 2,
      sym__integer_positive,
      aux_sym__animation_entry_frames_repeat1,
  [1659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 3,
      anon_sym_DQUOTEscrolling_DQUOTE,
      anon_sym_DQUOTErotating_DQUOTE,
      anon_sym_DQUOTEpulsing_DQUOTE,
  [1668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [1677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 3,
      anon_sym_DQUOTEadd_DQUOTE,
      anon_sym_DQUOTEmultiply_DQUOTE,
      anon_sym_DQUOTEoverlay_DQUOTE,
  [1686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym__yes_no,
    ACTIONS(401), 2,
      anon_sym_yes,
      anon_sym_no,
  [1697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 3,
      anon_sym_RBRACE,
      anon_sym_x,
      anon_sym_y,
  [1706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym_assign_equal,
    ACTIONS(405), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [1717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_assign_equal,
    ACTIONS(409), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [1728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(415), 1,
      sym_string,
    STATE(91), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [1741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_string,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [1754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [1763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [1772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [1781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    ACTIONS(427), 1,
      sym_string,
    STATE(91), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [1794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym__mod_dependencies_block,
  [1804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_x,
    STATE(127), 1,
      sym__entry_x,
  [1814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_RBRACE,
      anon_sym_x,
  [1822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [1830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [1838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym__spriteType_block,
  [1848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym__mod_tags_block,
  [1858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(43), 1,
      sym__mod_replace_path_folder,
  [1868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_RBRACE,
      anon_sym_y,
  [1876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      aux_sym__number_precision_1_token1,
    STATE(94), 1,
      sym__number_precision_1,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      aux_sym__number_precision_1_token1,
    STATE(100), 1,
      sym__number_precision_1,
  [1896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [1904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      aux_sym__number_precision_1_token1,
    STATE(29), 1,
      sym_time,
  [1914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_y,
    STATE(127), 1,
      sym__entry_y,
  [1924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym__integer_positive_token1,
    STATE(70), 1,
      sym__integer_positive,
  [1934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_RBRACE,
      sym_string,
  [1942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      aux_sym__integer_positive_token1,
    STATE(68), 1,
      sym__integer_positive,
  [1952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym__gfx_animation_block,
  [1962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym__integer_positive_token1,
    STATE(67), 1,
      sym__integer_positive,
  [1972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym__spriteTypes_block,
  [1982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
  [1989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym__statement_mod_version_token1,
  [1996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [2003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_string,
  [2010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      aux_sym__statement_gfx_effectFile_token1,
  [2017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_assign_equal,
  [2024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      aux_sym__statement_mod_picture_token1,
  [2031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
  [2038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
  [2045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym__statement_gfx_texturefile_token1,
  [2052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_string,
  [2059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      aux_sym__statement_mod_archive_token1,
  [2066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_assign_equal,
  [2073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_angle,
  [2080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      aux_sym__animation_entry_dds_token1,
  [2087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
  [2094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
  [2101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_assign_equal,
  [2108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_number,
  [2115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym__statement_mod_supported_version_token1,
  [2122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_number,
  [2129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 340,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 391,
  [SMALL_STATE(13)] = 431,
  [SMALL_STATE(14)] = 471,
  [SMALL_STATE(15)] = 511,
  [SMALL_STATE(16)] = 534,
  [SMALL_STATE(17)] = 557,
  [SMALL_STATE(18)] = 580,
  [SMALL_STATE(19)] = 603,
  [SMALL_STATE(20)] = 626,
  [SMALL_STATE(21)] = 649,
  [SMALL_STATE(22)] = 672,
  [SMALL_STATE(23)] = 695,
  [SMALL_STATE(24)] = 715,
  [SMALL_STATE(25)] = 735,
  [SMALL_STATE(26)] = 755,
  [SMALL_STATE(27)] = 775,
  [SMALL_STATE(28)] = 795,
  [SMALL_STATE(29)] = 815,
  [SMALL_STATE(30)] = 835,
  [SMALL_STATE(31)] = 855,
  [SMALL_STATE(32)] = 875,
  [SMALL_STATE(33)] = 895,
  [SMALL_STATE(34)] = 915,
  [SMALL_STATE(35)] = 935,
  [SMALL_STATE(36)] = 955,
  [SMALL_STATE(37)] = 975,
  [SMALL_STATE(38)] = 995,
  [SMALL_STATE(39)] = 1015,
  [SMALL_STATE(40)] = 1035,
  [SMALL_STATE(41)] = 1055,
  [SMALL_STATE(42)] = 1072,
  [SMALL_STATE(43)] = 1089,
  [SMALL_STATE(44)] = 1106,
  [SMALL_STATE(45)] = 1123,
  [SMALL_STATE(46)] = 1140,
  [SMALL_STATE(47)] = 1157,
  [SMALL_STATE(48)] = 1174,
  [SMALL_STATE(49)] = 1191,
  [SMALL_STATE(50)] = 1208,
  [SMALL_STATE(51)] = 1225,
  [SMALL_STATE(52)] = 1242,
  [SMALL_STATE(53)] = 1259,
  [SMALL_STATE(54)] = 1276,
  [SMALL_STATE(55)] = 1293,
  [SMALL_STATE(56)] = 1310,
  [SMALL_STATE(57)] = 1327,
  [SMALL_STATE(58)] = 1344,
  [SMALL_STATE(59)] = 1361,
  [SMALL_STATE(60)] = 1378,
  [SMALL_STATE(61)] = 1392,
  [SMALL_STATE(62)] = 1406,
  [SMALL_STATE(63)] = 1420,
  [SMALL_STATE(64)] = 1440,
  [SMALL_STATE(65)] = 1454,
  [SMALL_STATE(66)] = 1474,
  [SMALL_STATE(67)] = 1494,
  [SMALL_STATE(68)] = 1508,
  [SMALL_STATE(69)] = 1522,
  [SMALL_STATE(70)] = 1536,
  [SMALL_STATE(71)] = 1550,
  [SMALL_STATE(72)] = 1564,
  [SMALL_STATE(73)] = 1576,
  [SMALL_STATE(74)] = 1590,
  [SMALL_STATE(75)] = 1604,
  [SMALL_STATE(76)] = 1618,
  [SMALL_STATE(77)] = 1632,
  [SMALL_STATE(78)] = 1648,
  [SMALL_STATE(79)] = 1659,
  [SMALL_STATE(80)] = 1668,
  [SMALL_STATE(81)] = 1677,
  [SMALL_STATE(82)] = 1686,
  [SMALL_STATE(83)] = 1697,
  [SMALL_STATE(84)] = 1706,
  [SMALL_STATE(85)] = 1717,
  [SMALL_STATE(86)] = 1728,
  [SMALL_STATE(87)] = 1741,
  [SMALL_STATE(88)] = 1754,
  [SMALL_STATE(89)] = 1763,
  [SMALL_STATE(90)] = 1772,
  [SMALL_STATE(91)] = 1781,
  [SMALL_STATE(92)] = 1794,
  [SMALL_STATE(93)] = 1804,
  [SMALL_STATE(94)] = 1814,
  [SMALL_STATE(95)] = 1822,
  [SMALL_STATE(96)] = 1830,
  [SMALL_STATE(97)] = 1838,
  [SMALL_STATE(98)] = 1848,
  [SMALL_STATE(99)] = 1858,
  [SMALL_STATE(100)] = 1868,
  [SMALL_STATE(101)] = 1876,
  [SMALL_STATE(102)] = 1886,
  [SMALL_STATE(103)] = 1896,
  [SMALL_STATE(104)] = 1904,
  [SMALL_STATE(105)] = 1914,
  [SMALL_STATE(106)] = 1924,
  [SMALL_STATE(107)] = 1934,
  [SMALL_STATE(108)] = 1942,
  [SMALL_STATE(109)] = 1952,
  [SMALL_STATE(110)] = 1962,
  [SMALL_STATE(111)] = 1972,
  [SMALL_STATE(112)] = 1982,
  [SMALL_STATE(113)] = 1989,
  [SMALL_STATE(114)] = 1996,
  [SMALL_STATE(115)] = 2003,
  [SMALL_STATE(116)] = 2010,
  [SMALL_STATE(117)] = 2017,
  [SMALL_STATE(118)] = 2024,
  [SMALL_STATE(119)] = 2031,
  [SMALL_STATE(120)] = 2038,
  [SMALL_STATE(121)] = 2045,
  [SMALL_STATE(122)] = 2052,
  [SMALL_STATE(123)] = 2059,
  [SMALL_STATE(124)] = 2066,
  [SMALL_STATE(125)] = 2073,
  [SMALL_STATE(126)] = 2080,
  [SMALL_STATE(127)] = 2087,
  [SMALL_STATE(128)] = 2094,
  [SMALL_STATE(129)] = 2101,
  [SMALL_STATE(130)] = 2108,
  [SMALL_STATE(131)] = 2115,
  [SMALL_STATE(132)] = 2122,
  [SMALL_STATE(133)] = 2129,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(129),
  [7] = {.count = 1, .reusable = true}, SHIFT(10),
  [9] = {.count = 1, .reusable = true}, SHIFT(40),
  [11] = {.count = 1, .reusable = true}, SHIFT(39),
  [13] = {.count = 1, .reusable = true}, SHIFT(38),
  [15] = {.count = 1, .reusable = true}, SHIFT(37),
  [17] = {.count = 1, .reusable = true}, SHIFT(36),
  [19] = {.count = 1, .reusable = true}, SHIFT(35),
  [21] = {.count = 1, .reusable = true}, SHIFT(23),
  [23] = {.count = 1, .reusable = true}, SHIFT(34),
  [25] = {.count = 1, .reusable = true}, SHIFT(33),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.count = 1, .reusable = true}, SHIFT(51),
  [34] = {.count = 1, .reusable = true}, SHIFT(4),
  [36] = {.count = 1, .reusable = true}, SHIFT(53),
  [38] = {.count = 1, .reusable = true}, SHIFT(2),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [42] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(10),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(40),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(39),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(38),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(37),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(36),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(35),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(23),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(34),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(33),
  [74] = {.count = 1, .reusable = true}, SHIFT(62),
  [76] = {.count = 1, .reusable = true}, SHIFT(15),
  [78] = {.count = 1, .reusable = false}, SHIFT(16),
  [80] = {.count = 1, .reusable = true}, SHIFT(17),
  [82] = {.count = 1, .reusable = true}, SHIFT(19),
  [84] = {.count = 1, .reusable = true}, SHIFT(20),
  [86] = {.count = 1, .reusable = true}, SHIFT(21),
  [88] = {.count = 1, .reusable = true}, SHIFT(22),
  [90] = {.count = 1, .reusable = true}, SHIFT(18),
  [92] = {.count = 1, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(15),
  [97] = {.count = 2, .reusable = false}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(16),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(17),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(19),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(20),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(21),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(22),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym__gfx_animation_block_repeat1, 2), SHIFT_REPEAT(18),
  [118] = {.count = 1, .reusable = true}, SHIFT(61),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [122] = {.count = 1, .reusable = true}, SHIFT(115),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [126] = {.count = 1, .reusable = true}, SHIFT(80),
  [128] = {.count = 1, .reusable = true}, SHIFT(56),
  [130] = {.count = 1, .reusable = true}, SHIFT(57),
  [132] = {.count = 1, .reusable = true}, SHIFT(58),
  [134] = {.count = 1, .reusable = true}, SHIFT(59),
  [136] = {.count = 1, .reusable = true}, SHIFT(55),
  [138] = {.count = 1, .reusable = true}, SHIFT(54),
  [140] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(10),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(56),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(57),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(58),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(59),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(55),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(54),
  [163] = {.count = 1, .reusable = true}, SHIFT(88),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 1),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 1),
  [169] = {.count = 1, .reusable = true}, SHIFT(126),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 1),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 1),
  [175] = {.count = 1, .reusable = true}, SHIFT(125),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 1),
  [181] = {.count = 1, .reusable = true}, SHIFT(82),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 1),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 1),
  [187] = {.count = 1, .reusable = true}, SHIFT(119),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 1),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 1),
  [193] = {.count = 1, .reusable = true}, SHIFT(104),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy, 1),
  [199] = {.count = 1, .reusable = true}, SHIFT(112),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 1),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 1),
  [205] = {.count = 1, .reusable = true}, SHIFT(81),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 1),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 1),
  [211] = {.count = 1, .reusable = true}, SHIFT(79),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [215] = {.count = 1, .reusable = true}, SHIFT(99),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_dds, 3),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_dds, 3),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_xy, 6),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_xy, 6),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_angle, 3),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_angle, 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_bool, 3),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_bool, 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_time, 1),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_time, 1),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_time, 3),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_time, 3),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_blendmode, 3),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_blendmode, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_type, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_type, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym__animation_entry_frames, 5),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym__animation_entry_frames, 5),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [255] = {.count = 1, .reusable = true}, SHIFT(92),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [259] = {.count = 1, .reusable = true}, SHIFT(98),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [263] = {.count = 1, .reusable = true}, SHIFT(131),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [267] = {.count = 1, .reusable = true}, SHIFT(118),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [271] = {.count = 1, .reusable = true}, SHIFT(113),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [275] = {.count = 1, .reusable = true}, SHIFT(114),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [279] = {.count = 1, .reusable = true}, SHIFT(123),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [283] = {.count = 1, .reusable = true}, SHIFT(122),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 1),
  [313] = {.count = 1, .reusable = true}, SHIFT(109),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 1),
  [317] = {.count = 1, .reusable = true}, SHIFT(116),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texturefile, 1),
  [321] = {.count = 1, .reusable = true}, SHIFT(121),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 1),
  [325] = {.count = 1, .reusable = true}, SHIFT(106),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 1),
  [329] = {.count = 1, .reusable = true}, SHIFT(108),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 1),
  [333] = {.count = 1, .reusable = true}, SHIFT(110),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_effectFile, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 3),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym__gfx_animation_block, 2),
  [341] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(124),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(117),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_animation, 3),
  [351] = {.count = 1, .reusable = true}, SHIFT(95),
  [353] = {.count = 1, .reusable = true}, SHIFT(124),
  [355] = {.count = 1, .reusable = true}, SHIFT(117),
  [357] = {.count = 1, .reusable = true}, SHIFT(103),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_rows, 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_overlay_frames_per_row, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 3),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_noOfFrames, 3),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texturefile, 3),
  [369] = {.count = 1, .reusable = true}, SHIFT(130),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym__animation_entry_frames_repeat1, 2), SHIFT_REPEAT(73),
  [378] = {.count = 1, .reusable = true}, SHIFT(32),
  [380] = {.count = 1, .reusable = true}, SHIFT(73),
  [382] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(129),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [389] = {.count = 1, .reusable = true}, SHIFT(84),
  [391] = {.count = 1, .reusable = true}, SHIFT(85),
  [393] = {.count = 1, .reusable = true}, SHIFT(74),
  [395] = {.count = 1, .reusable = true}, SHIFT(31),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [399] = {.count = 1, .reusable = true}, SHIFT(30),
  [401] = {.count = 1, .reusable = true}, SHIFT(27),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym__number_precision_1, 1, .production_id = 4),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x, 1),
  [407] = {.count = 1, .reusable = true}, SHIFT(102),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y, 1),
  [411] = {.count = 1, .reusable = true}, SHIFT(101),
  [413] = {.count = 1, .reusable = true}, SHIFT(42),
  [415] = {.count = 1, .reusable = true}, SHIFT(107),
  [417] = {.count = 1, .reusable = true}, SHIFT(52),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [425] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(107),
  [430] = {.count = 1, .reusable = true}, SHIFT(87),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym__entry_y, 3),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [438] = {.count = 1, .reusable = true}, SHIFT(14),
  [440] = {.count = 1, .reusable = true}, SHIFT(3),
  [442] = {.count = 1, .reusable = true}, SHIFT(43),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym__entry_x, 3),
  [446] = {.count = 1, .reusable = true}, SHIFT(83),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [450] = {.count = 1, .reusable = true}, SHIFT(28),
  [452] = {.count = 1, .reusable = true}, SHIFT(70),
  [454] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 2),
  [456] = {.count = 1, .reusable = true}, SHIFT(68),
  [458] = {.count = 1, .reusable = true}, SHIFT(7),
  [460] = {.count = 1, .reusable = true}, SHIFT(67),
  [462] = {.count = 1, .reusable = true}, SHIFT(65),
  [464] = {.count = 1, .reusable = true}, SHIFT(77),
  [466] = {.count = 1, .reusable = true}, SHIFT(48),
  [468] = {.count = 1, .reusable = true}, SHIFT(47),
  [470] = {.count = 1, .reusable = true}, SHIFT(11),
  [472] = {.count = 1, .reusable = true}, SHIFT(60),
  [474] = {.count = 1, .reusable = true}, SHIFT(72),
  [476] = {.count = 1, .reusable = true}, SHIFT(50),
  [478] = {.count = 1, .reusable = true}, SHIFT(78),
  [480] = {.count = 1, .reusable = true}, SHIFT(90),
  [482] = {.count = 1, .reusable = true}, SHIFT(71),
  [484] = {.count = 1, .reusable = true}, SHIFT(41),
  [486] = {.count = 1, .reusable = true}, SHIFT(45),
  [488] = {.count = 1, .reusable = true}, SHIFT(97),
  [490] = {.count = 1, .reusable = true}, SHIFT(26),
  [492] = {.count = 1, .reusable = true}, SHIFT(24),
  [494] = {.count = 1, .reusable = true}, SHIFT(25),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [498] = {.count = 1, .reusable = true}, SHIFT(111),
  [500] = {.count = 1, .reusable = true}, SHIFT(132),
  [502] = {.count = 1, .reusable = true}, SHIFT(49),
  [504] = {.count = 1, .reusable = true}, SHIFT(120),
  [506] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
