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
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 5
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_spriteTypes = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_spriteType = 4,
  anon_sym_name = 5,
  anon_sym_path = 6,
  anon_sym_archive = 7,
  anon_sym_remote_file_id = 8,
  anon_sym_version = 9,
  anon_sym_picture = 10,
  anon_sym_supported_version = 11,
  anon_sym_tags = 12,
  anon_sym_DQUOTEAlternativeHistory_DQUOTE = 13,
  anon_sym_DQUOTEBalance_DQUOTE = 14,
  anon_sym_DQUOTEEvents_DQUOTE = 15,
  anon_sym_DQUOTEExpansion_DQUOTE = 16,
  anon_sym_DQUOTEFixes_DQUOTE = 17,
  anon_sym_DQUOTEGameplay_DQUOTE = 18,
  anon_sym_DQUOTEGraphics_DQUOTE = 19,
  anon_sym_DQUOTEGuide_DQUOTE = 20,
  anon_sym_DQUOTEHistorical_DQUOTE = 21,
  anon_sym_DQUOTELoadingScreen_DQUOTE = 22,
  anon_sym_DQUOTEMap_DQUOTE = 23,
  anon_sym_DQUOTEMilitary_DQUOTE = 24,
  anon_sym_DQUOTEMissionsAndDecisions_DQUOTE = 25,
  anon_sym_DQUOTENationalIdeas_DQUOTE = 26,
  anon_sym_DQUOTENewNations_DQUOTE = 27,
  anon_sym_DQUOTEReligion_DQUOTE = 28,
  anon_sym_DQUOTESound_DQUOTE = 29,
  anon_sym_DQUOTETechnologies_DQUOTE = 30,
  anon_sym_DQUOTETrade_DQUOTE = 31,
  anon_sym_DQUOTETranslation_DQUOTE = 32,
  anon_sym_DQUOTEUtilities_DQUOTE = 33,
  anon_sym_DQUOTEConvertedFromCKII_DQUOTE = 34,
  anon_sym_dependencies = 35,
  anon_sym_texturefile = 36,
  anon_sym_cursor_offset = 37,
  sym_name = 38,
  sym_assign_equal = 39,
  sym_string = 40,
  sym_number = 41,
  sym_comment = 42,
  sym_file = 43,
  sym_dot_mod = 44,
  sym_dot_gfx = 45,
  sym_gfx_types_definition = 46,
  sym__types_spriteTypes = 47,
  sym__spriteTypes_block = 48,
  sym__spriteTypes_statement = 49,
  sym__spriteTypes_type = 50,
  sym__type_spriteType = 51,
  sym__spriteType_block = 52,
  sym__statement_name = 53,
  sym__statement_mod_name = 54,
  sym__statement_mod_path = 55,
  sym__statement_mod_archive = 56,
  sym__statement_mod_remote_file_id = 57,
  sym__statement_mod_version = 58,
  sym__statement_mod_picture = 59,
  sym__statement_mod_supported_version = 60,
  sym__statement_mod_tags = 61,
  sym__mod_tags_block = 62,
  sym__mod_tags_keyword = 63,
  sym__statement_mod_dependencies = 64,
  sym__mod_dependencies_block = 65,
  sym__statement_gfx_texturefile = 66,
  sym__statement_gfx_cursor_offset = 67,
  sym_debug_loop = 68,
  sym_debug_multi = 69,
  aux_sym_dot_mod_repeat1 = 70,
  aux_sym_dot_gfx_repeat1 = 71,
  aux_sym__spriteTypes_block_repeat1 = 72,
  aux_sym__spriteType_block_repeat1 = 73,
  aux_sym__mod_tags_block_repeat1 = 74,
  aux_sym__mod_dependencies_block_repeat1 = 75,
  aux_sym_debug_multi_repeat1 = 76,
  aux_sym_debug_multi_repeat2 = 77,
  aux_sym_debug_multi_repeat3 = 78,
  alias_sym_dependencies = 79,
  alias_sym_identifier = 80,
  alias_sym_mod_name_identifier = 81,
  alias_sym_mod_name_value = 82,
  alias_sym_statement = 83,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_spriteTypes] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_spriteType] = "identifier",
  [anon_sym_name] = "name",
  [anon_sym_path] = "identifier",
  [anon_sym_archive] = "identifier",
  [anon_sym_remote_file_id] = "identifier",
  [anon_sym_version] = "identifier",
  [anon_sym_picture] = "identifier",
  [anon_sym_supported_version] = "identifier",
  [anon_sym_tags] = "identifier",
  [anon_sym_DQUOTEAlternativeHistory_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEBalance_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEEvents_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEExpansion_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEFixes_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEGameplay_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEGraphics_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEGuide_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEHistorical_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTELoadingScreen_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEMap_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEMilitary_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEMissionsAndDecisions_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTENationalIdeas_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTENewNations_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEReligion_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTESound_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTETechnologies_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTETrade_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTETranslation_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEUtilities_DQUOTE] = "tags_keyword",
  [anon_sym_DQUOTEConvertedFromCKII_DQUOTE] = "tags_keyword",
  [anon_sym_dependencies] = "identifier",
  [anon_sym_texturefile] = "identifier",
  [anon_sym_cursor_offset] = "identifier",
  [sym_name] = "name",
  [sym_assign_equal] = "assign_equal",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_file] = "file",
  [sym_dot_mod] = "dot_mod",
  [sym_dot_gfx] = "dot_gfx",
  [sym_gfx_types_definition] = "gfx_types_definition",
  [sym__types_spriteTypes] = "_types_spriteTypes",
  [sym__spriteTypes_block] = "_spriteTypes_block",
  [sym__spriteTypes_statement] = "_spriteTypes_statement",
  [sym__spriteTypes_type] = "_spriteTypes_type",
  [sym__type_spriteType] = "gfx_type_definition",
  [sym__spriteType_block] = "_spriteType_block",
  [sym__statement_name] = "statement",
  [sym__statement_mod_name] = "_statement_mod_name",
  [sym__statement_mod_path] = "_statement_mod_path",
  [sym__statement_mod_archive] = "_statement_mod_archive",
  [sym__statement_mod_remote_file_id] = "_statement_mod_remote_file_id",
  [sym__statement_mod_version] = "_statement_mod_version",
  [sym__statement_mod_picture] = "_statement_mod_picture",
  [sym__statement_mod_supported_version] = "_statement_mod_supported_version",
  [sym__statement_mod_tags] = "_statement_mod_tags",
  [sym__mod_tags_block] = "_mod_tags_block",
  [sym__mod_tags_keyword] = "_mod_tags_keyword",
  [sym__statement_mod_dependencies] = "_statement_mod_dependencies",
  [sym__mod_dependencies_block] = "_mod_dependencies_block",
  [sym__statement_gfx_texturefile] = "statement",
  [sym__statement_gfx_cursor_offset] = "statement",
  [sym_debug_loop] = "debug_loop",
  [sym_debug_multi] = "debug_multi",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_dot_gfx_repeat1] = "dot_gfx_repeat1",
  [aux_sym__spriteTypes_block_repeat1] = "_spriteTypes_block_repeat1",
  [aux_sym__spriteType_block_repeat1] = "_spriteType_block_repeat1",
  [aux_sym__mod_tags_block_repeat1] = "_mod_tags_block_repeat1",
  [aux_sym__mod_dependencies_block_repeat1] = "_mod_dependencies_block_repeat1",
  [aux_sym_debug_multi_repeat1] = "debug_multi_repeat1",
  [aux_sym_debug_multi_repeat2] = "debug_multi_repeat2",
  [aux_sym_debug_multi_repeat3] = "debug_multi_repeat3",
  [alias_sym_dependencies] = "dependencies",
  [alias_sym_identifier] = "identifier",
  [alias_sym_mod_name_identifier] = "mod_name_identifier",
  [alias_sym_mod_name_value] = "mod_name_value",
  [alias_sym_statement] = "statement",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_spriteTypes] = anon_sym_spriteTypes,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_spriteType] = anon_sym_spriteTypes,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_path] = anon_sym_spriteTypes,
  [anon_sym_archive] = anon_sym_spriteTypes,
  [anon_sym_remote_file_id] = anon_sym_spriteTypes,
  [anon_sym_version] = anon_sym_spriteTypes,
  [anon_sym_picture] = anon_sym_spriteTypes,
  [anon_sym_supported_version] = anon_sym_spriteTypes,
  [anon_sym_tags] = anon_sym_spriteTypes,
  [anon_sym_DQUOTEAlternativeHistory_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEBalance_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEEvents_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEExpansion_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEFixes_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEGameplay_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEGraphics_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEGuide_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEHistorical_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTELoadingScreen_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEMap_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEMilitary_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEMissionsAndDecisions_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTENationalIdeas_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTENewNations_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEReligion_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTESound_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTETechnologies_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTETrade_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTETranslation_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEUtilities_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_DQUOTEConvertedFromCKII_DQUOTE] = anon_sym_DQUOTEAlternativeHistory_DQUOTE,
  [anon_sym_dependencies] = anon_sym_spriteTypes,
  [anon_sym_texturefile] = anon_sym_spriteTypes,
  [anon_sym_cursor_offset] = anon_sym_spriteTypes,
  [sym_name] = sym_name,
  [sym_assign_equal] = sym_assign_equal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_file] = sym_file,
  [sym_dot_mod] = sym_dot_mod,
  [sym_dot_gfx] = sym_dot_gfx,
  [sym_gfx_types_definition] = sym_gfx_types_definition,
  [sym__types_spriteTypes] = sym__types_spriteTypes,
  [sym__spriteTypes_block] = sym__spriteTypes_block,
  [sym__spriteTypes_statement] = sym__spriteTypes_statement,
  [sym__spriteTypes_type] = sym__spriteTypes_type,
  [sym__type_spriteType] = sym__type_spriteType,
  [sym__spriteType_block] = sym__spriteType_block,
  [sym__statement_name] = sym__statement_name,
  [sym__statement_mod_name] = sym__statement_mod_name,
  [sym__statement_mod_path] = sym__statement_mod_path,
  [sym__statement_mod_archive] = sym__statement_mod_archive,
  [sym__statement_mod_remote_file_id] = sym__statement_mod_remote_file_id,
  [sym__statement_mod_version] = sym__statement_mod_version,
  [sym__statement_mod_picture] = sym__statement_mod_picture,
  [sym__statement_mod_supported_version] = sym__statement_mod_supported_version,
  [sym__statement_mod_tags] = sym__statement_mod_tags,
  [sym__mod_tags_block] = sym__mod_tags_block,
  [sym__mod_tags_keyword] = sym__mod_tags_keyword,
  [sym__statement_mod_dependencies] = sym__statement_mod_dependencies,
  [sym__mod_dependencies_block] = sym__mod_dependencies_block,
  [sym__statement_gfx_texturefile] = sym__statement_name,
  [sym__statement_gfx_cursor_offset] = sym__statement_name,
  [sym_debug_loop] = sym_debug_loop,
  [sym_debug_multi] = sym_debug_multi,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_dot_gfx_repeat1] = aux_sym_dot_gfx_repeat1,
  [aux_sym__spriteTypes_block_repeat1] = aux_sym__spriteTypes_block_repeat1,
  [aux_sym__spriteType_block_repeat1] = aux_sym__spriteType_block_repeat1,
  [aux_sym__mod_tags_block_repeat1] = aux_sym__mod_tags_block_repeat1,
  [aux_sym__mod_dependencies_block_repeat1] = aux_sym__mod_dependencies_block_repeat1,
  [aux_sym_debug_multi_repeat1] = aux_sym_debug_multi_repeat1,
  [aux_sym_debug_multi_repeat2] = aux_sym_debug_multi_repeat2,
  [aux_sym_debug_multi_repeat3] = aux_sym_debug_multi_repeat3,
  [alias_sym_dependencies] = alias_sym_dependencies,
  [alias_sym_identifier] = alias_sym_identifier,
  [alias_sym_mod_name_identifier] = alias_sym_mod_name_identifier,
  [alias_sym_mod_name_value] = alias_sym_mod_name_value,
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
    .named = false,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_archive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_remote_file_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_picture] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_supported_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tags] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEAlternativeHistory_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEBalance_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEEvents_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEExpansion_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEFixes_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEGameplay_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEGraphics_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEGuide_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEHistorical_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTELoadingScreen_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEMap_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEMilitary_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEMissionsAndDecisions_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTENationalIdeas_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTENewNations_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEReligion_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTESound_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTETechnologies_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTETrade_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTETranslation_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEUtilities_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEConvertedFromCKII_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_texturefile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cursor_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
  [sym_gfx_types_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__types_spriteTypes] = {
    .visible = false,
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
  [sym__type_spriteType] = {
    .visible = true,
    .named = true,
  },
  [sym__spriteType_block] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_name] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_mod_name] = {
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
  [sym__statement_gfx_texturefile] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_cursor_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_multi] = {
    .visible = true,
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
  [aux_sym_debug_multi_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_debug_multi_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_debug_multi_repeat3] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_mod_name_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_mod_name_value] = {
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
    [0] = alias_sym_mod_name_identifier,
    [2] = alias_sym_mod_name_value,
  },
  [2] = {
    [0] = alias_sym_dependencies,
  },
  [3] = {
    [0] = alias_sym_statement,
  },
  [4] = {
    [0] = alias_sym_identifier,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(509);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '-') ADVANCE(502);
      if (lookahead == '=') ADVANCE(665);
      if (lookahead == '\\') SKIP(505)
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead == 'c') ADVANCE(656);
      if (lookahead == 'd') ADVANCE(574);
      if (lookahead == 'n') ADVANCE(565);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == 's') ADVANCE(625);
      if (lookahead == 't') ADVANCE(567);
      if (lookahead == 'v') ADVANCE(588);
      if (lookahead == '{') ADVANCE(512);
      if (lookahead == '}') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(203)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(203)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(248)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(248)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(202)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(202)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '"') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '"') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '"') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '"') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '"') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(38);
      if (lookahead == 'C') ADVANCE(139);
      if (lookahead == 'E') ADVANCE(193);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'G') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(142);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(47);
      if (lookahead == 'R') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(140);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead == 'U') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'C') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'F') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'H') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'I') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'I') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'K') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'S') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'g') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'g') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'p') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'u') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'v') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'v') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'v') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'w') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'y') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'y') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead == 'y') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '-') ADVANCE(502);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '{') ADVANCE(512);
      if (lookahead == '}') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(202)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(656);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == '}') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(203)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(542);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(536);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(539);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(548);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(550);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(534);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(533);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(537);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(538);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(543);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(547);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(535);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(552);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(540);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(546);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(551);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(549);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(541);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(545);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(532);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(553);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(544);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 248:
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'n') ADVANCE(565);
      if (lookahead == 't') ADVANCE(575);
      if (lookahead == '}') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(248)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 249:
      if (lookahead == 'A') ADVANCE(375);
      if (lookahead == 'B') ADVANCE(268);
      if (lookahead == 'C') ADVANCE(411);
      if (lookahead == 'E') ADVANCE(491);
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == 'G') ADVANCE(272);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == 'L') ADVANCE(415);
      if (lookahead == 'M') ADVANCE(273);
      if (lookahead == 'N') ADVANCE(280);
      if (lookahead == 'R') ADVANCE(313);
      if (lookahead == 'S') ADVANCE(412);
      if (lookahead == 'T') ADVANCE(330);
      if (lookahead == 'U') ADVANCE(474);
      END_STATE();
    case 250:
      if (lookahead == 'A') ADVANCE(406);
      END_STATE();
    case 251:
      if (lookahead == 'C') ADVANCE(258);
      END_STATE();
    case 252:
      if (lookahead == 'D') ADVANCE(331);
      END_STATE();
    case 253:
      if (lookahead == 'F') ADVANCE(443);
      END_STATE();
    case 254:
      if (lookahead == 'H') ADVANCE(359);
      END_STATE();
    case 255:
      if (lookahead == 'I') ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'I') ADVANCE(244);
      END_STATE();
    case 257:
      if (lookahead == 'I') ADVANCE(303);
      END_STATE();
    case 258:
      if (lookahead == 'K') ADVANCE(255);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(283);
      END_STATE();
    case 260:
      if (lookahead == 'S') ADVANCE(291);
      END_STATE();
    case 261:
      if (lookahead == 'T') ADVANCE(501);
      END_STATE();
    case 262:
      if (lookahead == '_') ADVANCE(337);
      END_STATE();
    case 263:
      if (lookahead == '_') ADVANCE(353);
      END_STATE();
    case 264:
      if (lookahead == '_') ADVANCE(495);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(430);
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 279:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 282:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 283:
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 284:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 285:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 286:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 289:
      if (lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 292:
      if (lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 294:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 295:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 296:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 297:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 298:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 299:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 300:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 301:
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 302:
      if (lookahead == 'd') ADVANCE(327);
      END_STATE();
    case 303:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(352);
      END_STATE();
    case 338:
      if (lookahead == 'g') ADVANCE(452);
      END_STATE();
    case 339:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 340:
      if (lookahead == 'g') ADVANCE(367);
      END_STATE();
    case 341:
      if (lookahead == 'g') ADVANCE(372);
      END_STATE();
    case 342:
      if (lookahead == 'h') ADVANCE(518);
      END_STATE();
    case 343:
      if (lookahead == 'h') ADVANCE(398);
      END_STATE();
    case 344:
      if (lookahead == 'h') ADVANCE(360);
      END_STATE();
    case 345:
      if (lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(459);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 371:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 372:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 373:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(349);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 386:
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 387:
      if (lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 388:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 389:
      if (lookahead == 'm') ADVANCE(323);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 391:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 392:
      if (lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 393:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 394:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 395:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 407:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 408:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 409:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 410:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 421:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 423:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 424:
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 425:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 426:
      if (lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 427:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 428:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 429:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 430:
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 431:
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 432:
      if (lookahead == 'p') ADVANCE(416);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(432);
      END_STATE();
    case 434:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 435:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 436:
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 437:
      if (lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 438:
      if (lookahead == 'p') ADVANCE(381);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(499);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 453:
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 454:
      if (lookahead == 's') ADVANCE(554);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 458:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 459:
      if (lookahead == 's') ADVANCE(485);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 461:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 464:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 465:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 466:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 467:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 469:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 470:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 471:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 489:
      if (lookahead == 'u') ADVANCE(395);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 491:
      if (lookahead == 'v') ADVANCE(311);
      if (lookahead == 'x') ADVANCE(435);
      END_STATE();
    case 492:
      if (lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 493:
      if (lookahead == 'v') ADVANCE(308);
      END_STATE();
    case 494:
      if (lookahead == 'v') ADVANCE(322);
      END_STATE();
    case 495:
      if (lookahead == 'v') ADVANCE(336);
      END_STATE();
    case 496:
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    case 497:
      if (lookahead == 'x') ADVANCE(318);
      END_STATE();
    case 498:
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 499:
      if (lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 500:
      if (lookahead == 'y') ADVANCE(242);
      END_STATE();
    case 501:
      if (lookahead == 'y') ADVANCE(436);
      END_STATE();
    case 502:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      END_STATE();
    case 503:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      END_STATE();
    case 504:
      if (eof) ADVANCE(509);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 505:
      if (eof) ADVANCE(509);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(504)
      END_STATE();
    case 506:
      if (eof) ADVANCE(509);
      if (lookahead == '\n') SKIP(508)
      END_STATE();
    case 507:
      if (eof) ADVANCE(509);
      if (lookahead == '\n') SKIP(508)
      if (lookahead == '\r') SKIP(506)
      END_STATE();
    case 508:
      if (eof) ADVANCE(509);
      if (lookahead == '"') ADVANCE(249);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '-') ADVANCE(502);
      if (lookahead == '\\') SKIP(507)
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == '}') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(508)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_path);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_archive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_picture);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_supported_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_DQUOTEAlternativeHistory_DQUOTE);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DQUOTEBalance_DQUOTE);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DQUOTEEvents_DQUOTE);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DQUOTEExpansion_DQUOTE);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DQUOTEFixes_DQUOTE);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DQUOTEGameplay_DQUOTE);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_DQUOTEGraphics_DQUOTE);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_DQUOTEGuide_DQUOTE);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_DQUOTEHistorical_DQUOTE);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_DQUOTELoadingScreen_DQUOTE);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_DQUOTEMap_DQUOTE);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DQUOTEMilitary_DQUOTE);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DQUOTEMissionsAndDecisions_DQUOTE);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DQUOTENationalIdeas_DQUOTE);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_DQUOTENewNations_DQUOTE);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DQUOTEReligion_DQUOTE);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_DQUOTESound_DQUOTE);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_DQUOTETechnologies_DQUOTE);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_DQUOTETrade_DQUOTE);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DQUOTETranslation_DQUOTE);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_DQUOTEUtilities_DQUOTE);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_DQUOTEConvertedFromCKII_DQUOTE);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_dependencies);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_texturefile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == 'f') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 'e') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead == 'u') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == 'f') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(668);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(670);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 508},
  [2] = {.lex_state = 508},
  [3] = {.lex_state = 508},
  [4] = {.lex_state = 508},
  [5] = {.lex_state = 508},
  [6] = {.lex_state = 508},
  [7] = {.lex_state = 203},
  [8] = {.lex_state = 508},
  [9] = {.lex_state = 203},
  [10] = {.lex_state = 508},
  [11] = {.lex_state = 508},
  [12] = {.lex_state = 508},
  [13] = {.lex_state = 508},
  [14] = {.lex_state = 508},
  [15] = {.lex_state = 508},
  [16] = {.lex_state = 508},
  [17] = {.lex_state = 508},
  [18] = {.lex_state = 508},
  [19] = {.lex_state = 508},
  [20] = {.lex_state = 508},
  [21] = {.lex_state = 203},
  [22] = {.lex_state = 508},
  [23] = {.lex_state = 248},
  [24] = {.lex_state = 202},
  [25] = {.lex_state = 202},
  [26] = {.lex_state = 202},
  [27] = {.lex_state = 248},
  [28] = {.lex_state = 248},
  [29] = {.lex_state = 508},
  [30] = {.lex_state = 202},
  [31] = {.lex_state = 202},
  [32] = {.lex_state = 202},
  [33] = {.lex_state = 508},
  [34] = {.lex_state = 203},
  [35] = {.lex_state = 203},
  [36] = {.lex_state = 203},
  [37] = {.lex_state = 248},
  [38] = {.lex_state = 248},
  [39] = {.lex_state = 248},
  [40] = {.lex_state = 202},
  [41] = {.lex_state = 202},
  [42] = {.lex_state = 248},
  [43] = {.lex_state = 203},
  [44] = {.lex_state = 203},
  [45] = {.lex_state = 203},
  [46] = {.lex_state = 202},
  [47] = {.lex_state = 248},
  [48] = {.lex_state = 203},
  [49] = {.lex_state = 248},
  [50] = {.lex_state = 202},
  [51] = {.lex_state = 508},
  [52] = {.lex_state = 508},
  [53] = {.lex_state = 203},
  [54] = {.lex_state = 203},
  [55] = {.lex_state = 203},
  [56] = {.lex_state = 203},
  [57] = {.lex_state = 508},
  [58] = {.lex_state = 203},
  [59] = {.lex_state = 203},
  [60] = {.lex_state = 508},
  [61] = {.lex_state = 203},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 508},
  [64] = {.lex_state = 508},
  [65] = {.lex_state = 202},
  [66] = {.lex_state = 202},
  [67] = {.lex_state = 202},
  [68] = {.lex_state = 508},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 203},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 508},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 508},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 203},
  [78] = {.lex_state = 203},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 203},
  [82] = {.lex_state = 203},
  [83] = {.lex_state = 203},
  [84] = {.lex_state = 203},
  [85] = {.lex_state = 203},
  [86] = {.lex_state = 203},
  [87] = {.lex_state = 203},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 508},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_spriteTypes] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_spriteType] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_archive] = ACTIONS(1),
    [anon_sym_remote_file_id] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_picture] = ACTIONS(1),
    [anon_sym_supported_version] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [anon_sym_DQUOTEAlternativeHistory_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEBalance_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEEvents_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEExpansion_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEFixes_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEGameplay_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEGraphics_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEGuide_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEHistorical_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTELoadingScreen_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEMap_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEMilitary_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEMissionsAndDecisions_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTENationalIdeas_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTENewNations_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEReligion_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTESound_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTETechnologies_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTETrade_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTETranslation_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEUtilities_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEConvertedFromCKII_DQUOTE] = ACTIONS(1),
    [anon_sym_dependencies] = ACTIONS(1),
    [anon_sym_texturefile] = ACTIONS(1),
    [anon_sym_cursor_offset] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_assign_equal] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(94),
    [sym_dot_mod] = STATE(90),
    [sym_dot_gfx] = STATE(90),
    [sym_gfx_types_definition] = STATE(29),
    [sym__types_spriteTypes] = STATE(68),
    [sym__statement_mod_name] = STATE(6),
    [sym__statement_mod_path] = STATE(6),
    [sym__statement_mod_archive] = STATE(6),
    [sym__statement_mod_remote_file_id] = STATE(6),
    [sym__statement_mod_version] = STATE(6),
    [sym__statement_mod_picture] = STATE(6),
    [sym__statement_mod_supported_version] = STATE(6),
    [sym__statement_mod_tags] = STATE(6),
    [sym__statement_mod_dependencies] = STATE(6),
    [aux_sym_dot_mod_repeat1] = STATE(6),
    [aux_sym_dot_gfx_repeat1] = STATE(29),
    [anon_sym_spriteTypes] = ACTIONS(5),
    [anon_sym_name] = ACTIONS(7),
    [anon_sym_path] = ACTIONS(9),
    [anon_sym_archive] = ACTIONS(11),
    [anon_sym_remote_file_id] = ACTIONS(13),
    [anon_sym_version] = ACTIONS(15),
    [anon_sym_picture] = ACTIONS(17),
    [anon_sym_supported_version] = ACTIONS(19),
    [anon_sym_tags] = ACTIONS(21),
    [anon_sym_dependencies] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(3), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(27), 22,
      anon_sym_DQUOTEAlternativeHistory_DQUOTE,
      anon_sym_DQUOTEBalance_DQUOTE,
      anon_sym_DQUOTEEvents_DQUOTE,
      anon_sym_DQUOTEExpansion_DQUOTE,
      anon_sym_DQUOTEFixes_DQUOTE,
      anon_sym_DQUOTEGameplay_DQUOTE,
      anon_sym_DQUOTEGraphics_DQUOTE,
      anon_sym_DQUOTEGuide_DQUOTE,
      anon_sym_DQUOTEHistorical_DQUOTE,
      anon_sym_DQUOTELoadingScreen_DQUOTE,
      anon_sym_DQUOTEMap_DQUOTE,
      anon_sym_DQUOTEMilitary_DQUOTE,
      anon_sym_DQUOTEMissionsAndDecisions_DQUOTE,
      anon_sym_DQUOTENationalIdeas_DQUOTE,
      anon_sym_DQUOTENewNations_DQUOTE,
      anon_sym_DQUOTEReligion_DQUOTE,
      anon_sym_DQUOTESound_DQUOTE,
      anon_sym_DQUOTETechnologies_DQUOTE,
      anon_sym_DQUOTETrade_DQUOTE,
      anon_sym_DQUOTETranslation_DQUOTE,
      anon_sym_DQUOTEUtilities_DQUOTE,
      anon_sym_DQUOTEConvertedFromCKII_DQUOTE,
  [35] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(3), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(31), 22,
      anon_sym_DQUOTEAlternativeHistory_DQUOTE,
      anon_sym_DQUOTEBalance_DQUOTE,
      anon_sym_DQUOTEEvents_DQUOTE,
      anon_sym_DQUOTEExpansion_DQUOTE,
      anon_sym_DQUOTEFixes_DQUOTE,
      anon_sym_DQUOTEGameplay_DQUOTE,
      anon_sym_DQUOTEGraphics_DQUOTE,
      anon_sym_DQUOTEGuide_DQUOTE,
      anon_sym_DQUOTEHistorical_DQUOTE,
      anon_sym_DQUOTELoadingScreen_DQUOTE,
      anon_sym_DQUOTEMap_DQUOTE,
      anon_sym_DQUOTEMilitary_DQUOTE,
      anon_sym_DQUOTEMissionsAndDecisions_DQUOTE,
      anon_sym_DQUOTENationalIdeas_DQUOTE,
      anon_sym_DQUOTENewNations_DQUOTE,
      anon_sym_DQUOTEReligion_DQUOTE,
      anon_sym_DQUOTESound_DQUOTE,
      anon_sym_DQUOTETechnologies_DQUOTE,
      anon_sym_DQUOTETrade_DQUOTE,
      anon_sym_DQUOTETranslation_DQUOTE,
      anon_sym_DQUOTEUtilities_DQUOTE,
      anon_sym_DQUOTEConvertedFromCKII_DQUOTE,
  [70] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym__mod_tags_keyword,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(36), 22,
      anon_sym_DQUOTEAlternativeHistory_DQUOTE,
      anon_sym_DQUOTEBalance_DQUOTE,
      anon_sym_DQUOTEEvents_DQUOTE,
      anon_sym_DQUOTEExpansion_DQUOTE,
      anon_sym_DQUOTEFixes_DQUOTE,
      anon_sym_DQUOTEGameplay_DQUOTE,
      anon_sym_DQUOTEGraphics_DQUOTE,
      anon_sym_DQUOTEGuide_DQUOTE,
      anon_sym_DQUOTEHistorical_DQUOTE,
      anon_sym_DQUOTELoadingScreen_DQUOTE,
      anon_sym_DQUOTEMap_DQUOTE,
      anon_sym_DQUOTEMilitary_DQUOTE,
      anon_sym_DQUOTEMissionsAndDecisions_DQUOTE,
      anon_sym_DQUOTENationalIdeas_DQUOTE,
      anon_sym_DQUOTENewNations_DQUOTE,
      anon_sym_DQUOTEReligion_DQUOTE,
      anon_sym_DQUOTESound_DQUOTE,
      anon_sym_DQUOTETechnologies_DQUOTE,
      anon_sym_DQUOTETrade_DQUOTE,
      anon_sym_DQUOTETranslation_DQUOTE,
      anon_sym_DQUOTEUtilities_DQUOTE,
      anon_sym_DQUOTEConvertedFromCKII_DQUOTE,
  [105] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_name,
    ACTIONS(43), 1,
      anon_sym_path,
    ACTIONS(46), 1,
      anon_sym_archive,
    ACTIONS(49), 1,
      anon_sym_remote_file_id,
    ACTIONS(52), 1,
      anon_sym_version,
    ACTIONS(55), 1,
      anon_sym_picture,
    ACTIONS(58), 1,
      anon_sym_supported_version,
    ACTIONS(61), 1,
      anon_sym_tags,
    ACTIONS(64), 1,
      anon_sym_dependencies,
    STATE(5), 10,
      sym__statement_mod_name,
      sym__statement_mod_path,
      sym__statement_mod_archive,
      sym__statement_mod_remote_file_id,
      sym__statement_mod_version,
      sym__statement_mod_picture,
      sym__statement_mod_supported_version,
      sym__statement_mod_tags,
      sym__statement_mod_dependencies,
      aux_sym_dot_mod_repeat1,
  [151] = 12,
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
      anon_sym_tags,
    ACTIONS(23), 1,
      anon_sym_dependencies,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(5), 10,
      sym__statement_mod_name,
      sym__statement_mod_path,
      sym__statement_mod_archive,
      sym__statement_mod_remote_file_id,
      sym__statement_mod_version,
      sym__statement_mod_picture,
      sym__statement_mod_supported_version,
      sym__statement_mod_tags,
      sym__statement_mod_dependencies,
      aux_sym_dot_mod_repeat1,
  [197] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_spriteType,
    ACTIONS(74), 1,
      anon_sym_cursor_offset,
    ACTIONS(77), 1,
      sym_name,
    STATE(7), 6,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__type_spriteType,
      sym__statement_gfx_cursor_offset,
      sym_debug_loop,
      aux_sym__spriteTypes_block_repeat1,
  [221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [237] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      anon_sym_spriteType,
    ACTIONS(86), 1,
      anon_sym_cursor_offset,
    ACTIONS(88), 1,
      sym_name,
    STATE(7), 6,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__type_spriteType,
      sym__statement_gfx_cursor_offset,
      sym_debug_loop,
      aux_sym__spriteTypes_block_repeat1,
  [261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [437] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_spriteType,
    ACTIONS(86), 1,
      anon_sym_cursor_offset,
    ACTIONS(88), 1,
      sym_name,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(9), 6,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__type_spriteType,
      sym__statement_gfx_cursor_offset,
      sym_debug_loop,
      aux_sym__spriteTypes_block_repeat1,
  [461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [477] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 1,
      anon_sym_name,
    ACTIONS(120), 1,
      anon_sym_texturefile,
    ACTIONS(122), 1,
      sym_name,
    STATE(47), 1,
      sym_debug_loop,
    STATE(27), 3,
      sym__statement_name,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [501] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      sym_name,
    ACTIONS(128), 1,
      sym_string,
    ACTIONS(130), 1,
      sym_number,
    STATE(56), 1,
      aux_sym_debug_multi_repeat1,
    STATE(57), 1,
      aux_sym_debug_multi_repeat2,
    STATE(41), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [527] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_name,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      sym_string,
    ACTIONS(136), 1,
      sym_number,
    STATE(51), 1,
      aux_sym_debug_multi_repeat2,
    STATE(53), 1,
      aux_sym_debug_multi_repeat1,
    STATE(40), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [553] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_name,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_string,
    ACTIONS(142), 1,
      sym_number,
    STATE(52), 1,
      aux_sym_debug_multi_repeat2,
    STATE(54), 1,
      aux_sym_debug_multi_repeat1,
    STATE(46), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [579] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      anon_sym_name,
    ACTIONS(149), 1,
      anon_sym_texturefile,
    ACTIONS(152), 1,
      sym_name,
    STATE(47), 1,
      sym_debug_loop,
    STATE(27), 3,
      sym__statement_name,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [603] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_name,
    ACTIONS(120), 1,
      anon_sym_texturefile,
    ACTIONS(122), 1,
      sym_name,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_debug_loop,
    STATE(23), 3,
      sym__statement_name,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym__types_spriteTypes,
    STATE(33), 2,
      sym_gfx_types_definition,
      aux_sym_dot_gfx_repeat1,
  [644] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      sym_string,
    STATE(37), 1,
      sym_debug_multi,
    ACTIONS(161), 2,
      sym_name,
      sym_number,
  [661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      sym_string,
    STATE(67), 1,
      sym_debug_multi,
    ACTIONS(167), 2,
      sym_name,
      sym_number,
  [678] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      sym_string,
    STATE(44), 1,
      sym_debug_multi,
    ACTIONS(173), 2,
      sym_name,
      sym_number,
  [695] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      anon_sym_spriteTypes,
    STATE(68), 1,
      sym__types_spriteTypes,
    STATE(33), 2,
      sym_gfx_types_definition,
      aux_sym_dot_gfx_repeat1,
  [712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 1,
      sym_name,
    STATE(50), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_name,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_name,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      sym_name,
    STATE(50), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 1,
      sym_number,
    STATE(60), 1,
      aux_sym_debug_multi_repeat2,
  [937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 1,
      sym_number,
    STATE(60), 1,
      aux_sym_debug_multi_repeat2,
  [950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      sym_string,
    STATE(59), 1,
      aux_sym_debug_multi_repeat1,
  [963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      sym_string,
    STATE(59), 1,
      aux_sym_debug_multi_repeat1,
  [976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      sym_string,
    STATE(58), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      sym_string,
    STATE(59), 1,
      aux_sym_debug_multi_repeat1,
  [1002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 1,
      sym_number,
    STATE(60), 1,
      aux_sym_debug_multi_repeat2,
  [1015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      sym_string,
    STATE(58), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [1028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 1,
      sym_string,
    STATE(59), 1,
      aux_sym_debug_multi_repeat1,
  [1041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 1,
      sym_number,
    STATE(60), 1,
      aux_sym_debug_multi_repeat2,
  [1054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_string,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [1067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym__mod_tags_block,
  [1077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [1093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_RBRACE,
      sym_name,
  [1101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_RBRACE,
      sym_name,
  [1109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 2,
      anon_sym_RBRACE,
      sym_name,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [1125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym__spriteType_block,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_RBRACE,
      sym_string,
  [1143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym__spriteTypes_block,
  [1153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym__mod_dependencies_block,
  [1163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [1171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_assign_equal,
  [1178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_number,
  [1185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_assign_equal,
  [1192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_string,
  [1199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_string,
  [1206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
  [1213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
  [1220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_string,
  [1227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_string,
  [1234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_string,
  [1241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_string,
  [1248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_string,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_string,
  [1262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_string,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_assign_equal,
  [1276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_number,
  [1283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
  [1290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_assign_equal,
  [1297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_assign_equal,
  [1304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_assign_equal,
  [1311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
  [1318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_assign_equal,
  [1325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_assign_equal,
  [1332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_assign_equal,
  [1339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_assign_equal,
  [1346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_assign_equal,
  [1353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_assign_equal,
  [1360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_assign_equal,
  [1367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_assign_equal,
  [1374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_assign_equal,
  [1381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_assign_equal,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_assign_equal,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 221,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 261,
  [SMALL_STATE(11)] = 277,
  [SMALL_STATE(12)] = 293,
  [SMALL_STATE(13)] = 309,
  [SMALL_STATE(14)] = 325,
  [SMALL_STATE(15)] = 341,
  [SMALL_STATE(16)] = 357,
  [SMALL_STATE(17)] = 373,
  [SMALL_STATE(18)] = 389,
  [SMALL_STATE(19)] = 405,
  [SMALL_STATE(20)] = 421,
  [SMALL_STATE(21)] = 437,
  [SMALL_STATE(22)] = 461,
  [SMALL_STATE(23)] = 477,
  [SMALL_STATE(24)] = 501,
  [SMALL_STATE(25)] = 527,
  [SMALL_STATE(26)] = 553,
  [SMALL_STATE(27)] = 579,
  [SMALL_STATE(28)] = 603,
  [SMALL_STATE(29)] = 627,
  [SMALL_STATE(30)] = 644,
  [SMALL_STATE(31)] = 661,
  [SMALL_STATE(32)] = 678,
  [SMALL_STATE(33)] = 695,
  [SMALL_STATE(34)] = 712,
  [SMALL_STATE(35)] = 724,
  [SMALL_STATE(36)] = 736,
  [SMALL_STATE(37)] = 748,
  [SMALL_STATE(38)] = 760,
  [SMALL_STATE(39)] = 772,
  [SMALL_STATE(40)] = 784,
  [SMALL_STATE(41)] = 798,
  [SMALL_STATE(42)] = 812,
  [SMALL_STATE(43)] = 824,
  [SMALL_STATE(44)] = 836,
  [SMALL_STATE(45)] = 848,
  [SMALL_STATE(46)] = 860,
  [SMALL_STATE(47)] = 874,
  [SMALL_STATE(48)] = 886,
  [SMALL_STATE(49)] = 898,
  [SMALL_STATE(50)] = 910,
  [SMALL_STATE(51)] = 924,
  [SMALL_STATE(52)] = 937,
  [SMALL_STATE(53)] = 950,
  [SMALL_STATE(54)] = 963,
  [SMALL_STATE(55)] = 976,
  [SMALL_STATE(56)] = 989,
  [SMALL_STATE(57)] = 1002,
  [SMALL_STATE(58)] = 1015,
  [SMALL_STATE(59)] = 1028,
  [SMALL_STATE(60)] = 1041,
  [SMALL_STATE(61)] = 1054,
  [SMALL_STATE(62)] = 1067,
  [SMALL_STATE(63)] = 1077,
  [SMALL_STATE(64)] = 1085,
  [SMALL_STATE(65)] = 1093,
  [SMALL_STATE(66)] = 1101,
  [SMALL_STATE(67)] = 1109,
  [SMALL_STATE(68)] = 1117,
  [SMALL_STATE(69)] = 1125,
  [SMALL_STATE(70)] = 1135,
  [SMALL_STATE(71)] = 1143,
  [SMALL_STATE(72)] = 1153,
  [SMALL_STATE(73)] = 1163,
  [SMALL_STATE(74)] = 1171,
  [SMALL_STATE(75)] = 1178,
  [SMALL_STATE(76)] = 1185,
  [SMALL_STATE(77)] = 1192,
  [SMALL_STATE(78)] = 1199,
  [SMALL_STATE(79)] = 1206,
  [SMALL_STATE(80)] = 1213,
  [SMALL_STATE(81)] = 1220,
  [SMALL_STATE(82)] = 1227,
  [SMALL_STATE(83)] = 1234,
  [SMALL_STATE(84)] = 1241,
  [SMALL_STATE(85)] = 1248,
  [SMALL_STATE(86)] = 1255,
  [SMALL_STATE(87)] = 1262,
  [SMALL_STATE(88)] = 1269,
  [SMALL_STATE(89)] = 1276,
  [SMALL_STATE(90)] = 1283,
  [SMALL_STATE(91)] = 1290,
  [SMALL_STATE(92)] = 1297,
  [SMALL_STATE(93)] = 1304,
  [SMALL_STATE(94)] = 1311,
  [SMALL_STATE(95)] = 1318,
  [SMALL_STATE(96)] = 1325,
  [SMALL_STATE(97)] = 1332,
  [SMALL_STATE(98)] = 1339,
  [SMALL_STATE(99)] = 1346,
  [SMALL_STATE(100)] = 1353,
  [SMALL_STATE(101)] = 1360,
  [SMALL_STATE(102)] = 1367,
  [SMALL_STATE(103)] = 1374,
  [SMALL_STATE(104)] = 1381,
  [SMALL_STATE(105)] = 1388,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(93),
  [7] = {.count = 1, .reusable = true}, SHIFT(103),
  [9] = {.count = 1, .reusable = true}, SHIFT(102),
  [11] = {.count = 1, .reusable = true}, SHIFT(101),
  [13] = {.count = 1, .reusable = true}, SHIFT(100),
  [15] = {.count = 1, .reusable = true}, SHIFT(99),
  [17] = {.count = 1, .reusable = true}, SHIFT(98),
  [19] = {.count = 1, .reusable = true}, SHIFT(97),
  [21] = {.count = 1, .reusable = true}, SHIFT(96),
  [23] = {.count = 1, .reusable = true}, SHIFT(95),
  [25] = {.count = 1, .reusable = true}, SHIFT(22),
  [27] = {.count = 1, .reusable = true}, SHIFT(3),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(3),
  [34] = {.count = 1, .reusable = true}, SHIFT(8),
  [36] = {.count = 1, .reusable = true}, SHIFT(2),
  [38] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(103),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(102),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(101),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(100),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(99),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(98),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(97),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(96),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(95),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(76),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(74),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(88),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [82] = {.count = 1, .reusable = true}, SHIFT(64),
  [84] = {.count = 1, .reusable = false}, SHIFT(76),
  [86] = {.count = 1, .reusable = false}, SHIFT(74),
  [88] = {.count = 1, .reusable = false}, SHIFT(88),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_name, 3, .production_id = 1),
  [112] = {.count = 1, .reusable = true}, SHIFT(73),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [116] = {.count = 1, .reusable = true}, SHIFT(45),
  [118] = {.count = 1, .reusable = false}, SHIFT(92),
  [120] = {.count = 1, .reusable = false}, SHIFT(91),
  [122] = {.count = 1, .reusable = false}, SHIFT(104),
  [124] = {.count = 1, .reusable = true}, SHIFT(66),
  [126] = {.count = 1, .reusable = false}, SHIFT(105),
  [128] = {.count = 1, .reusable = true}, SHIFT(56),
  [130] = {.count = 1, .reusable = false}, SHIFT(57),
  [132] = {.count = 1, .reusable = true}, SHIFT(43),
  [134] = {.count = 1, .reusable = true}, SHIFT(53),
  [136] = {.count = 1, .reusable = false}, SHIFT(51),
  [138] = {.count = 1, .reusable = true}, SHIFT(38),
  [140] = {.count = 1, .reusable = true}, SHIFT(54),
  [142] = {.count = 1, .reusable = false}, SHIFT(52),
  [144] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(92),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(91),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(104),
  [155] = {.count = 1, .reusable = true}, SHIFT(48),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [159] = {.count = 1, .reusable = true}, SHIFT(26),
  [161] = {.count = 1, .reusable = false}, SHIFT(37),
  [163] = {.count = 1, .reusable = true}, SHIFT(37),
  [165] = {.count = 1, .reusable = true}, SHIFT(24),
  [167] = {.count = 1, .reusable = false}, SHIFT(67),
  [169] = {.count = 1, .reusable = true}, SHIFT(67),
  [171] = {.count = 1, .reusable = true}, SHIFT(25),
  [173] = {.count = 1, .reusable = false}, SHIFT(44),
  [175] = {.count = 1, .reusable = true}, SHIFT(44),
  [177] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(93),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym__type_spriteType, 3),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym__type_spriteType, 3),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_debug_multi, 3),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_debug_multi, 3),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_debug_loop, 3),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_debug_loop, 3),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_debug_multi, 2),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_debug_multi, 2),
  [202] = {.count = 1, .reusable = true}, SHIFT(36),
  [204] = {.count = 1, .reusable = true}, SHIFT(105),
  [206] = {.count = 1, .reusable = true}, SHIFT(65),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texturefile, 3),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_texturefile, 3),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym__spriteType_block, 3),
  [216] = {.count = 1, .reusable = true}, SHIFT(39),
  [218] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 3),
  [220] = {.count = 1, .reusable = false}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 3),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym__spriteType_block, 2),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 4),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym__statement_name, 3, .production_id = 4),
  [230] = {.count = 1, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat3, 2),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat3, 2), SHIFT_REPEAT(105),
  [235] = {.count = 1, .reusable = true}, SHIFT(60),
  [237] = {.count = 1, .reusable = true}, SHIFT(59),
  [239] = {.count = 1, .reusable = true}, SHIFT(12),
  [241] = {.count = 1, .reusable = true}, SHIFT(70),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(70),
  [248] = {.count = 1, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat1, 2),
  [250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat1, 2), SHIFT_REPEAT(59),
  [253] = {.count = 1, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat2, 2),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat2, 2), SHIFT_REPEAT(60),
  [258] = {.count = 1, .reusable = true}, SHIFT(15),
  [260] = {.count = 1, .reusable = true}, SHIFT(4),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym__types_spriteTypes, 3),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_gfx_types_definition, 1),
  [268] = {.count = 1, .reusable = true}, SHIFT(28),
  [270] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 2),
  [272] = {.count = 1, .reusable = true}, SHIFT(21),
  [274] = {.count = 1, .reusable = true}, SHIFT(61),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [278] = {.count = 1, .reusable = true}, SHIFT(79),
  [280] = {.count = 1, .reusable = true}, SHIFT(80),
  [282] = {.count = 1, .reusable = true}, SHIFT(69),
  [284] = {.count = 1, .reusable = true}, SHIFT(49),
  [286] = {.count = 1, .reusable = true}, SHIFT(42),
  [288] = {.count = 1, .reusable = true}, SHIFT(89),
  [290] = {.count = 1, .reusable = true}, SHIFT(35),
  [292] = {.count = 1, .reusable = true}, SHIFT(13),
  [294] = {.count = 1, .reusable = true}, SHIFT(14),
  [296] = {.count = 1, .reusable = true}, SHIFT(16),
  [298] = {.count = 1, .reusable = true}, SHIFT(17),
  [300] = {.count = 1, .reusable = true}, SHIFT(18),
  [302] = {.count = 1, .reusable = true}, SHIFT(19),
  [304] = {.count = 1, .reusable = true}, SHIFT(20),
  [306] = {.count = 1, .reusable = true}, SHIFT(32),
  [308] = {.count = 1, .reusable = true}, SHIFT(75),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [312] = {.count = 1, .reusable = true}, SHIFT(78),
  [314] = {.count = 1, .reusable = true}, SHIFT(77),
  [316] = {.count = 1, .reusable = true}, SHIFT(71),
  [318] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [320] = {.count = 1, .reusable = true}, SHIFT(72),
  [322] = {.count = 1, .reusable = true}, SHIFT(62),
  [324] = {.count = 1, .reusable = true}, SHIFT(81),
  [326] = {.count = 1, .reusable = true}, SHIFT(82),
  [328] = {.count = 1, .reusable = true}, SHIFT(83),
  [330] = {.count = 1, .reusable = true}, SHIFT(84),
  [332] = {.count = 1, .reusable = true}, SHIFT(85),
  [334] = {.count = 1, .reusable = true}, SHIFT(86),
  [336] = {.count = 1, .reusable = true}, SHIFT(87),
  [338] = {.count = 1, .reusable = true}, SHIFT(30),
  [340] = {.count = 1, .reusable = true}, SHIFT(31),
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
