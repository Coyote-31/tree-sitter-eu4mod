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
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 5
#define TOKEN_COUNT 44
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
  aux_sym__mod_tags_keyword_token1 = 13,
  aux_sym__mod_tags_keyword_token2 = 14,
  aux_sym__mod_tags_keyword_token3 = 15,
  aux_sym__mod_tags_keyword_token4 = 16,
  aux_sym__mod_tags_keyword_token5 = 17,
  aux_sym__mod_tags_keyword_token6 = 18,
  aux_sym__mod_tags_keyword_token7 = 19,
  aux_sym__mod_tags_keyword_token8 = 20,
  aux_sym__mod_tags_keyword_token9 = 21,
  aux_sym__mod_tags_keyword_token10 = 22,
  aux_sym__mod_tags_keyword_token11 = 23,
  aux_sym__mod_tags_keyword_token12 = 24,
  aux_sym__mod_tags_keyword_token13 = 25,
  aux_sym__mod_tags_keyword_token14 = 26,
  aux_sym__mod_tags_keyword_token15 = 27,
  aux_sym__mod_tags_keyword_token16 = 28,
  aux_sym__mod_tags_keyword_token17 = 29,
  aux_sym__mod_tags_keyword_token18 = 30,
  aux_sym__mod_tags_keyword_token19 = 31,
  aux_sym__mod_tags_keyword_token20 = 32,
  aux_sym__mod_tags_keyword_token21 = 33,
  aux_sym__mod_tags_keyword_token22 = 34,
  anon_sym_dependencies = 35,
  anon_sym_texturefile = 36,
  anon_sym_cursor_offset = 37,
  sym_name = 38,
  sym_assign_equal = 39,
  sym_string = 40,
  sym_number = 41,
  sym_comment = 42,
  sym__eol = 43,
  sym_file = 44,
  sym_dot_mod = 45,
  sym__dot_mod_statement = 46,
  sym_dot_gfx = 47,
  sym__gfx_types_definition = 48,
  sym__spriteTypes = 49,
  sym__spriteTypes_block = 50,
  sym__spriteTypes_statement = 51,
  sym__spriteTypes_type = 52,
  sym__spriteType = 53,
  sym__spriteType_block = 54,
  sym__statement_name = 55,
  sym__statement_mod_name = 56,
  sym__statement_mod_path = 57,
  sym__statement_mod_archive = 58,
  sym__statement_mod_remote_file_id = 59,
  sym__statement_mod_version = 60,
  sym__statement_mod_picture = 61,
  sym__statement_mod_supported_version = 62,
  sym__statement_mod_tags = 63,
  sym__mod_tags_block = 64,
  sym__mod_tags_keyword = 65,
  sym__statement_mod_dependencies = 66,
  sym__mod_dependencies_block = 67,
  sym__statement_gfx_texturefile = 68,
  sym__statement_gfx_cursor_offset = 69,
  sym_debug_loop = 70,
  sym__debug_block = 71,
  aux_sym_dot_mod_repeat1 = 72,
  aux_sym_dot_gfx_repeat1 = 73,
  aux_sym__spriteTypes_block_repeat1 = 74,
  aux_sym__spriteType_block_repeat1 = 75,
  aux_sym__mod_tags_block_repeat1 = 76,
  aux_sym__mod_tags_block_repeat2 = 77,
  aux_sym__mod_dependencies_block_repeat1 = 78,
  aux_sym__debug_block_repeat1 = 79,
  aux_sym__debug_block_repeat2 = 80,
  aux_sym__debug_block_repeat3 = 81,
  alias_sym_dependencies = 82,
  alias_sym_mod_name_identifier = 83,
  alias_sym_mod_name_value = 84,
  alias_sym_name_identifier = 85,
  alias_sym_statement = 86,
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
  [anon_sym_texturefile] = "identifier",
  [anon_sym_cursor_offset] = "identifier",
  [sym_name] = "name",
  [sym_assign_equal] = "assign_equal",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym__eol] = "_eol",
  [sym_file] = "file",
  [sym_dot_mod] = "dot_mod",
  [sym__dot_mod_statement] = "_dot_mod_statement",
  [sym_dot_gfx] = "dot_gfx",
  [sym__gfx_types_definition] = "_gfx_types_definition",
  [sym__spriteTypes] = "types_definition",
  [sym__spriteTypes_block] = "_spriteTypes_block",
  [sym__spriteTypes_statement] = "_spriteTypes_statement",
  [sym__spriteTypes_type] = "_spriteTypes_type",
  [sym__spriteType] = "type_definition",
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
  [sym__debug_block] = "_debug_block",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_dot_gfx_repeat1] = "dot_gfx_repeat1",
  [aux_sym__spriteTypes_block_repeat1] = "_spriteTypes_block_repeat1",
  [aux_sym__spriteType_block_repeat1] = "_spriteType_block_repeat1",
  [aux_sym__mod_tags_block_repeat1] = "_mod_tags_block_repeat1",
  [aux_sym__mod_tags_block_repeat2] = "_mod_tags_block_repeat2",
  [aux_sym__mod_dependencies_block_repeat1] = "_mod_dependencies_block_repeat1",
  [aux_sym__debug_block_repeat1] = "_debug_block_repeat1",
  [aux_sym__debug_block_repeat2] = "_debug_block_repeat2",
  [aux_sym__debug_block_repeat3] = "_debug_block_repeat3",
  [alias_sym_dependencies] = "dependencies",
  [alias_sym_mod_name_identifier] = "mod_name_identifier",
  [alias_sym_mod_name_value] = "mod_name_value",
  [alias_sym_name_identifier] = "name_identifier",
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
  [anon_sym_texturefile] = anon_sym_spriteTypes,
  [anon_sym_cursor_offset] = anon_sym_spriteTypes,
  [sym_name] = sym_name,
  [sym_assign_equal] = sym_assign_equal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym__eol] = sym__eol,
  [sym_file] = sym_file,
  [sym_dot_mod] = sym_dot_mod,
  [sym__dot_mod_statement] = sym__dot_mod_statement,
  [sym_dot_gfx] = sym_dot_gfx,
  [sym__gfx_types_definition] = sym__gfx_types_definition,
  [sym__spriteTypes] = sym__spriteTypes,
  [sym__spriteTypes_block] = sym__spriteTypes_block,
  [sym__spriteTypes_statement] = sym__spriteTypes_statement,
  [sym__spriteTypes_type] = sym__spriteTypes_type,
  [sym__spriteType] = sym__spriteType,
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
  [sym__debug_block] = sym__debug_block,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_dot_gfx_repeat1] = aux_sym_dot_gfx_repeat1,
  [aux_sym__spriteTypes_block_repeat1] = aux_sym__spriteTypes_block_repeat1,
  [aux_sym__spriteType_block_repeat1] = aux_sym__spriteType_block_repeat1,
  [aux_sym__mod_tags_block_repeat1] = aux_sym__mod_tags_block_repeat1,
  [aux_sym__mod_tags_block_repeat2] = aux_sym__mod_tags_block_repeat2,
  [aux_sym__mod_dependencies_block_repeat1] = aux_sym__mod_dependencies_block_repeat1,
  [aux_sym__debug_block_repeat1] = aux_sym__debug_block_repeat1,
  [aux_sym__debug_block_repeat2] = aux_sym__debug_block_repeat2,
  [aux_sym__debug_block_repeat3] = aux_sym__debug_block_repeat3,
  [alias_sym_dependencies] = alias_sym_dependencies,
  [alias_sym_mod_name_identifier] = alias_sym_mod_name_identifier,
  [alias_sym_mod_name_value] = alias_sym_mod_name_value,
  [alias_sym_name_identifier] = alias_sym_name_identifier,
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
  [sym__eol] = {
    .visible = false,
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
  [sym__dot_mod_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_dot_gfx] = {
    .visible = true,
    .named = true,
  },
  [sym__gfx_types_definition] = {
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
  [sym__spriteType] = {
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
  [sym__debug_block] = {
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
  [aux_sym__mod_tags_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mod_dependencies_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__debug_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__debug_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__debug_block_repeat3] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_dependencies] = {
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
  [alias_sym_name_identifier] = {
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
    [0] = alias_sym_name_identifier,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(446);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == '=') ADVANCE(604);
      if (lookahead == '\\') SKIP(439)
      if (lookahead == 'a') ADVANCE(567);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead == 'd') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(494);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead == 's') ADVANCE(557);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == 'v') ADVANCE(517);
      if (lookahead == '{') ADVANCE(448);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(255)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(255)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(210)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(210)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(257)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(257)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(209)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(209)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(256)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(256)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(206);
      if (lookahead == '"') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '"') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '"') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(205);
      if (lookahead == '"') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead == '"') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(204);
      if (lookahead == '"') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '"') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '"') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(434);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(435);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(429);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(433);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(431);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(432);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(430);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'C') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'K') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'c') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'g') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'v') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'v') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'v') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'x') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'y') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'y') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'y') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(87);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(34);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(38);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '{') ADVANCE(448);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(209)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(210)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(470);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(464);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(467);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(476);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(478);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(462);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(461);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(465);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(466);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(471);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(475);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(463);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(480);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(468);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(474);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(479);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(477);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(469);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(473);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(460);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(481);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(472);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(567);
      if (lookahead == 'd') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(494);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead == 's') ADVANCE(564);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead == 'v') ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(255)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 256:
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(256)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 257:
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(257)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 258:
      if (lookahead == 'C') ADVANCE(261);
      END_STATE();
    case 259:
      if (lookahead == 'I') ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'I') ADVANCE(251);
      END_STATE();
    case 261:
      if (lookahead == 'K') ADVANCE(259);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 279:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 280:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 281:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 282:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 283:
      if (lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 284:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 285:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 286:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 287:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 288:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 289:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 290:
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 291:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(334);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(329);
      END_STATE();
    case 313:
      if (lookahead == 'h') ADVANCE(354);
      END_STATE();
    case 314:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 348:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 381:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 419:
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 420:
      if (lookahead == 'v') ADVANCE(294);
      if (lookahead == 'x') ADVANCE(383);
      END_STATE();
    case 421:
      if (lookahead == 'v') ADVANCE(295);
      END_STATE();
    case 422:
      if (lookahead == 'v') ADVANCE(303);
      END_STATE();
    case 423:
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 424:
      if (lookahead == 'x') ADVANCE(297);
      END_STATE();
    case 425:
      if (lookahead == 'y') ADVANCE(225);
      END_STATE();
    case 426:
      if (lookahead == 'y') ADVANCE(229);
      END_STATE();
    case 427:
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 428:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(420);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(315);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(262);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(266);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(367);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 429:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 430:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 431:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(385);
      END_STATE();
    case 432:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(333);
      END_STATE();
    case 433:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 434:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 435:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      END_STATE();
    case 436:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 437:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 438:
      if (eof) ADVANCE(446);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 439:
      if (eof) ADVANCE(446);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(438)
      END_STATE();
    case 440:
      if (eof) ADVANCE(446);
      if (lookahead == '\n') SKIP(442)
      END_STATE();
    case 441:
      if (eof) ADVANCE(446);
      if (lookahead == '\n') SKIP(442)
      if (lookahead == '\r') SKIP(440)
      END_STATE();
    case 442:
      if (eof) ADVANCE(446);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\\') SKIP(441)
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(442)
      END_STATE();
    case 443:
      if (eof) ADVANCE(446);
      if (lookahead == '\n') SKIP(445)
      END_STATE();
    case 444:
      if (eof) ADVANCE(446);
      if (lookahead == '\n') SKIP(445)
      if (lookahead == '\r') SKIP(443)
      END_STATE();
    case 445:
      if (eof) ADVANCE(446);
      if (lookahead == '#') ADVANCE(609);
      if (lookahead == '\\') SKIP(444)
      if (lookahead == 's') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(445)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_path);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_archive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_picture);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_supported_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_dependencies);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_texturefile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(437);
      if (lookahead == 'f') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(586);
      if (lookahead == 'i') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(530);
      if (lookahead == 'e') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(569);
      if (lookahead == 'u') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(576);
      if (lookahead == 'u') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(437);
      if (lookahead == 'f') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 255},
  [2] = {.lex_state = 442},
  [3] = {.lex_state = 442},
  [4] = {.lex_state = 442},
  [5] = {.lex_state = 442},
  [6] = {.lex_state = 255},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 210},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 210},
  [13] = {.lex_state = 210},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 257},
  [16] = {.lex_state = 257},
  [17] = {.lex_state = 257},
  [18] = {.lex_state = 209},
  [19] = {.lex_state = 209},
  [20] = {.lex_state = 209},
  [21] = {.lex_state = 209},
  [22] = {.lex_state = 445},
  [23] = {.lex_state = 445},
  [24] = {.lex_state = 209},
  [25] = {.lex_state = 209},
  [26] = {.lex_state = 209},
  [27] = {.lex_state = 209},
  [28] = {.lex_state = 210},
  [29] = {.lex_state = 442},
  [30] = {.lex_state = 209},
  [31] = {.lex_state = 210},
  [32] = {.lex_state = 210},
  [33] = {.lex_state = 209},
  [34] = {.lex_state = 210},
  [35] = {.lex_state = 210},
  [36] = {.lex_state = 209},
  [37] = {.lex_state = 257},
  [38] = {.lex_state = 257},
  [39] = {.lex_state = 257},
  [40] = {.lex_state = 210},
  [41] = {.lex_state = 442},
  [42] = {.lex_state = 210},
  [43] = {.lex_state = 209},
  [44] = {.lex_state = 257},
  [45] = {.lex_state = 442},
  [46] = {.lex_state = 442},
  [47] = {.lex_state = 257},
  [48] = {.lex_state = 257},
  [49] = {.lex_state = 209},
  [50] = {.lex_state = 256},
  [51] = {.lex_state = 445},
  [52] = {.lex_state = 210},
  [53] = {.lex_state = 445},
  [54] = {.lex_state = 256},
  [55] = {.lex_state = 445},
  [56] = {.lex_state = 256},
  [57] = {.lex_state = 210},
  [58] = {.lex_state = 210},
  [59] = {.lex_state = 442},
  [60] = {.lex_state = 210},
  [61] = {.lex_state = 445},
  [62] = {.lex_state = 210},
  [63] = {.lex_state = 210},
  [64] = {.lex_state = 442},
  [65] = {.lex_state = 256},
  [66] = {.lex_state = 445},
  [67] = {.lex_state = 442},
  [68] = {.lex_state = 256},
  [69] = {.lex_state = 210},
  [70] = {.lex_state = 442},
  [71] = {.lex_state = 445},
  [72] = {.lex_state = 210},
  [73] = {.lex_state = 442},
  [74] = {.lex_state = 210},
  [75] = {.lex_state = 442},
  [76] = {.lex_state = 442},
  [77] = {.lex_state = 442},
  [78] = {.lex_state = 442},
  [79] = {.lex_state = 442},
  [80] = {.lex_state = 442},
  [81] = {.lex_state = 442},
  [82] = {.lex_state = 442},
  [83] = {.lex_state = 442},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 442},
  [86] = {.lex_state = 442},
  [87] = {.lex_state = 209},
  [88] = {.lex_state = 442},
  [89] = {.lex_state = 442},
  [90] = {.lex_state = 442},
  [91] = {.lex_state = 442},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 442},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 442},
  [97] = {.lex_state = 209},
  [98] = {.lex_state = 209},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 256},
  [106] = {.lex_state = 256},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 210},
  [110] = {.lex_state = 210},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 210},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 442},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 210},
  [123] = {.lex_state = 210},
  [124] = {.lex_state = 210},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 210},
  [128] = {.lex_state = 210},
  [129] = {.lex_state = 210},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
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
    [anon_sym_texturefile] = ACTIONS(1),
    [anon_sym_cursor_offset] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_assign_equal] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(103),
    [sym_dot_mod] = STATE(113),
    [sym__dot_mod_statement] = STATE(77),
    [sym_dot_gfx] = STATE(113),
    [sym__gfx_types_definition] = STATE(23),
    [sym__spriteTypes] = STATE(23),
    [sym__statement_mod_name] = STATE(77),
    [sym__statement_mod_path] = STATE(77),
    [sym__statement_mod_archive] = STATE(77),
    [sym__statement_mod_remote_file_id] = STATE(77),
    [sym__statement_mod_version] = STATE(77),
    [sym__statement_mod_picture] = STATE(77),
    [sym__statement_mod_supported_version] = STATE(77),
    [sym__statement_mod_tags] = STATE(77),
    [sym__statement_mod_dependencies] = STATE(77),
    [sym_debug_loop] = STATE(23),
    [aux_sym_dot_mod_repeat1] = STATE(8),
    [aux_sym_dot_gfx_repeat1] = STATE(23),
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
    [sym_name] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__eol,
    STATE(4), 1,
      aux_sym__mod_tags_block_repeat1,
    STATE(45), 1,
      sym__mod_tags_keyword,
    ACTIONS(27), 22,
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
  [37] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      sym__eol,
    STATE(81), 1,
      sym__mod_tags_keyword,
    ACTIONS(35), 22,
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
  [74] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__eol,
    STATE(4), 1,
      aux_sym__mod_tags_block_repeat1,
    ACTIONS(39), 23,
      anon_sym_RBRACE,
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
  [109] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym__eol,
    STATE(2), 1,
      aux_sym__mod_tags_block_repeat1,
    STATE(29), 1,
      sym__mod_tags_keyword,
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
  [146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(81), 1,
      sym__mod_tags_keyword,
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
  [177] = 12,
    ACTIONS(3), 1,
      sym_comment,
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
      anon_sym_tags,
    ACTIONS(74), 1,
      anon_sym_dependencies,
    STATE(7), 1,
      aux_sym_dot_mod_repeat1,
    STATE(119), 10,
      sym__dot_mod_statement,
      sym__statement_mod_name,
      sym__statement_mod_path,
      sym__statement_mod_archive,
      sym__statement_mod_remote_file_id,
      sym__statement_mod_version,
      sym__statement_mod_picture,
      sym__statement_mod_supported_version,
      sym__statement_mod_tags,
      sym__statement_mod_dependencies,
  [223] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_name,
    ACTIONS(79), 1,
      anon_sym_path,
    ACTIONS(81), 1,
      anon_sym_archive,
    ACTIONS(83), 1,
      anon_sym_remote_file_id,
    ACTIONS(85), 1,
      anon_sym_version,
    ACTIONS(87), 1,
      anon_sym_picture,
    ACTIONS(89), 1,
      anon_sym_supported_version,
    ACTIONS(91), 1,
      anon_sym_tags,
    ACTIONS(93), 1,
      anon_sym_dependencies,
    STATE(7), 1,
      aux_sym_dot_mod_repeat1,
    STATE(91), 10,
      sym__dot_mod_statement,
      sym__statement_mod_name,
      sym__statement_mod_path,
      sym__statement_mod_archive,
      sym__statement_mod_remote_file_id,
      sym__statement_mod_version,
      sym__statement_mod_picture,
      sym__statement_mod_supported_version,
      sym__statement_mod_tags,
      sym__statement_mod_dependencies,
  [269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 9,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [287] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_spriteType,
    ACTIONS(104), 1,
      anon_sym_cursor_offset,
    ACTIONS(107), 1,
      sym_name,
    STATE(10), 6,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      sym_debug_loop,
      aux_sym__spriteTypes_block_repeat1,
  [311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 9,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [329] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 1,
      anon_sym_spriteType,
    ACTIONS(116), 1,
      anon_sym_cursor_offset,
    ACTIONS(118), 1,
      sym_name,
    STATE(10), 6,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      sym_debug_loop,
      aux_sym__spriteTypes_block_repeat1,
  [353] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_spriteType,
    ACTIONS(116), 1,
      anon_sym_cursor_offset,
    ACTIONS(118), 1,
      sym_name,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(12), 6,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      sym_debug_loop,
      aux_sym__spriteTypes_block_repeat1,
  [377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 9,
      anon_sym_name,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_remote_file_id,
      anon_sym_version,
      anon_sym_picture,
      anon_sym_supported_version,
      anon_sym_tags,
      anon_sym_dependencies,
  [392] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_name,
    ACTIONS(127), 1,
      anon_sym_texturefile,
    ACTIONS(130), 1,
      sym_name,
    STATE(39), 1,
      sym_debug_loop,
    STATE(15), 3,
      sym__statement_name,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [416] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      anon_sym_name,
    ACTIONS(137), 1,
      anon_sym_texturefile,
    ACTIONS(139), 1,
      sym_name,
    STATE(39), 1,
      sym_debug_loop,
    STATE(15), 3,
      sym__statement_name,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [440] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_name,
    ACTIONS(137), 1,
      anon_sym_texturefile,
    ACTIONS(139), 1,
      sym_name,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_debug_loop,
    STATE(16), 3,
      sym__statement_name,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [464] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      sym_name,
    ACTIONS(147), 1,
      sym_string,
    ACTIONS(149), 1,
      sym_number,
    STATE(52), 1,
      aux_sym__debug_block_repeat1,
    STATE(65), 1,
      aux_sym__debug_block_repeat2,
    STATE(30), 2,
      sym_debug_loop,
      aux_sym__debug_block_repeat3,
  [490] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_name,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(155), 1,
      sym_number,
    STATE(54), 1,
      aux_sym__debug_block_repeat2,
    STATE(57), 1,
      aux_sym__debug_block_repeat1,
    STATE(36), 2,
      sym_debug_loop,
      aux_sym__debug_block_repeat3,
  [516] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_name,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      sym_string,
    ACTIONS(161), 1,
      sym_number,
    STATE(56), 1,
      aux_sym__debug_block_repeat2,
    STATE(58), 1,
      aux_sym__debug_block_repeat1,
    STATE(33), 2,
      sym_debug_loop,
      aux_sym__debug_block_repeat3,
  [542] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_name,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 1,
      sym_string,
    ACTIONS(167), 1,
      sym_number,
    STATE(50), 1,
      aux_sym__debug_block_repeat2,
    STATE(62), 1,
      aux_sym__debug_block_repeat1,
    STATE(49), 2,
      sym_debug_loop,
      aux_sym__debug_block_repeat3,
  [568] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_spriteTypes,
    ACTIONS(174), 1,
      sym_name,
    STATE(22), 4,
      sym__gfx_types_definition,
      sym__spriteTypes,
      sym_debug_loop,
      aux_sym_dot_gfx_repeat1,
  [587] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(25), 1,
      sym_name,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    STATE(22), 4,
      sym__gfx_types_definition,
      sym__spriteTypes,
      sym_debug_loop,
      aux_sym_dot_gfx_repeat1,
  [606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      sym_string,
    STATE(53), 1,
      sym__debug_block,
    ACTIONS(181), 2,
      sym_name,
      sym_number,
  [623] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      sym_string,
    STATE(44), 1,
      sym__debug_block,
    ACTIONS(187), 2,
      sym_name,
      sym_number,
  [640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      sym_string,
    STATE(34), 1,
      sym__debug_block,
    ACTIONS(193), 2,
      sym_name,
      sym_number,
  [657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      sym_string,
    STATE(97), 1,
      sym__debug_block,
    ACTIONS(199), 2,
      sym_name,
      sym_number,
  [674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [686] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 1,
      sym__eol,
    STATE(46), 1,
      aux_sym__mod_tags_block_repeat2,
    STATE(70), 1,
      aux_sym__mod_tags_block_repeat1,
  [702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      sym_name,
    STATE(43), 2,
      sym_debug_loop,
      aux_sym__debug_block_repeat3,
  [716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_name,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_debug_loop,
      aux_sym__debug_block_repeat3,
  [754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_name,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_debug_loop,
      aux_sym__debug_block_repeat3,
  [792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(249), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [840] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__eol,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym__mod_tags_block_repeat1,
    STATE(64), 1,
      aux_sym__mod_tags_block_repeat2,
  [856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_name,
  [868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(259), 1,
      sym_name,
    STATE(43), 2,
      sym_debug_loop,
      aux_sym__debug_block_repeat3,
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [894] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__eol,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym__mod_tags_block_repeat2,
    STATE(67), 1,
      aux_sym__mod_tags_block_repeat1,
  [910] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__eol,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym__mod_tags_block_repeat2,
    STATE(67), 1,
      aux_sym__mod_tags_block_repeat1,
  [926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_name,
  [950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_name,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_debug_loop,
      aux_sym__debug_block_repeat3,
  [964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      sym_number,
    STATE(68), 1,
      aux_sym__debug_block_repeat2,
  [977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 2,
      anon_sym_spriteTypes,
      sym_name,
  [988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      sym_string,
    STATE(69), 1,
      aux_sym__debug_block_repeat1,
  [1001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(227), 2,
      anon_sym_spriteTypes,
      sym_name,
  [1012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      sym_number,
    STATE(68), 1,
      aux_sym__debug_block_repeat2,
  [1025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 2,
      anon_sym_spriteTypes,
      sym_name,
  [1036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      sym_number,
    STATE(68), 1,
      aux_sym__debug_block_repeat2,
  [1049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      sym_string,
    STATE(69), 1,
      aux_sym__debug_block_repeat1,
  [1062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      sym_string,
    STATE(69), 1,
      aux_sym__debug_block_repeat1,
  [1075] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__eol,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym__mod_tags_block_repeat1,
  [1088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      sym_string,
    STATE(72), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [1101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 2,
      anon_sym_spriteTypes,
      sym_name,
  [1112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      sym_string,
    STATE(69), 1,
      aux_sym__debug_block_repeat1,
  [1125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_string,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [1138] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(288), 1,
      sym__eol,
    STATE(64), 1,
      aux_sym__mod_tags_block_repeat2,
  [1151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      sym_number,
    STATE(68), 1,
      aux_sym__debug_block_repeat2,
  [1164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 2,
      anon_sym_spriteTypes,
      sym_name,
  [1175] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__eol,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym__mod_tags_block_repeat1,
  [1188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      sym_number,
    STATE(68), 1,
      aux_sym__debug_block_repeat2,
  [1201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    ACTIONS(302), 1,
      sym_string,
    STATE(69), 1,
      aux_sym__debug_block_repeat1,
  [1214] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__eol,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym__mod_tags_block_repeat1,
  [1227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 2,
      anon_sym_spriteTypes,
      sym_name,
  [1238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      sym_string,
    STATE(72), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [1251] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_RBRACE,
      sym_string,
  [1267] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1275] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1283] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      sym__eol,
  [1293] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(322), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1301] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1309] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1317] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      sym__eol,
  [1327] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1335] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym__spriteType_block,
  [1353] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1361] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_RBRACE,
      sym_name,
  [1377] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1385] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1393] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1401] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 1,
      sym__eol,
  [1411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym__mod_dependencies_block,
  [1421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym__mod_tags_block,
  [1431] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(352), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym__spriteTypes_block,
  [1449] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(356), 2,
      ts_builtin_sym_end,
      sym__eol,
  [1457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_RBRACE,
      sym_name,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_RBRACE,
      sym_name,
  [1473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_assign_equal,
  [1480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_assign_equal,
  [1487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
  [1494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_assign_equal,
  [1501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
  [1508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_assign_equal,
  [1515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_number,
  [1522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_number,
  [1529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_assign_equal,
  [1536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_assign_equal,
  [1543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_string,
  [1550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_string,
  [1557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_assign_equal,
  [1564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_string,
  [1571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
  [1578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_assign_equal,
  [1585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_assign_equal,
  [1592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_assign_equal,
  [1599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
  [1606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_assign_equal,
  [1613] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym__eol,
  [1620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym_assign_equal,
  [1627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_assign_equal,
  [1634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_string,
  [1641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_string,
  [1648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_string,
  [1655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_assign_equal,
  [1662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_assign_equal,
  [1669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_string,
  [1676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_string,
  [1683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_string,
  [1690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_assign_equal,
  [1697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_assign_equal,
  [1704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_assign_equal,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 269,
  [SMALL_STATE(10)] = 287,
  [SMALL_STATE(11)] = 311,
  [SMALL_STATE(12)] = 329,
  [SMALL_STATE(13)] = 353,
  [SMALL_STATE(14)] = 377,
  [SMALL_STATE(15)] = 392,
  [SMALL_STATE(16)] = 416,
  [SMALL_STATE(17)] = 440,
  [SMALL_STATE(18)] = 464,
  [SMALL_STATE(19)] = 490,
  [SMALL_STATE(20)] = 516,
  [SMALL_STATE(21)] = 542,
  [SMALL_STATE(22)] = 568,
  [SMALL_STATE(23)] = 587,
  [SMALL_STATE(24)] = 606,
  [SMALL_STATE(25)] = 623,
  [SMALL_STATE(26)] = 640,
  [SMALL_STATE(27)] = 657,
  [SMALL_STATE(28)] = 674,
  [SMALL_STATE(29)] = 686,
  [SMALL_STATE(30)] = 702,
  [SMALL_STATE(31)] = 716,
  [SMALL_STATE(32)] = 728,
  [SMALL_STATE(33)] = 740,
  [SMALL_STATE(34)] = 754,
  [SMALL_STATE(35)] = 766,
  [SMALL_STATE(36)] = 778,
  [SMALL_STATE(37)] = 792,
  [SMALL_STATE(38)] = 804,
  [SMALL_STATE(39)] = 816,
  [SMALL_STATE(40)] = 828,
  [SMALL_STATE(41)] = 840,
  [SMALL_STATE(42)] = 856,
  [SMALL_STATE(43)] = 868,
  [SMALL_STATE(44)] = 882,
  [SMALL_STATE(45)] = 894,
  [SMALL_STATE(46)] = 910,
  [SMALL_STATE(47)] = 926,
  [SMALL_STATE(48)] = 938,
  [SMALL_STATE(49)] = 950,
  [SMALL_STATE(50)] = 964,
  [SMALL_STATE(51)] = 977,
  [SMALL_STATE(52)] = 988,
  [SMALL_STATE(53)] = 1001,
  [SMALL_STATE(54)] = 1012,
  [SMALL_STATE(55)] = 1025,
  [SMALL_STATE(56)] = 1036,
  [SMALL_STATE(57)] = 1049,
  [SMALL_STATE(58)] = 1062,
  [SMALL_STATE(59)] = 1075,
  [SMALL_STATE(60)] = 1088,
  [SMALL_STATE(61)] = 1101,
  [SMALL_STATE(62)] = 1112,
  [SMALL_STATE(63)] = 1125,
  [SMALL_STATE(64)] = 1138,
  [SMALL_STATE(65)] = 1151,
  [SMALL_STATE(66)] = 1164,
  [SMALL_STATE(67)] = 1175,
  [SMALL_STATE(68)] = 1188,
  [SMALL_STATE(69)] = 1201,
  [SMALL_STATE(70)] = 1214,
  [SMALL_STATE(71)] = 1227,
  [SMALL_STATE(72)] = 1238,
  [SMALL_STATE(73)] = 1251,
  [SMALL_STATE(74)] = 1259,
  [SMALL_STATE(75)] = 1267,
  [SMALL_STATE(76)] = 1275,
  [SMALL_STATE(77)] = 1283,
  [SMALL_STATE(78)] = 1293,
  [SMALL_STATE(79)] = 1301,
  [SMALL_STATE(80)] = 1309,
  [SMALL_STATE(81)] = 1317,
  [SMALL_STATE(82)] = 1327,
  [SMALL_STATE(83)] = 1335,
  [SMALL_STATE(84)] = 1343,
  [SMALL_STATE(85)] = 1353,
  [SMALL_STATE(86)] = 1361,
  [SMALL_STATE(87)] = 1369,
  [SMALL_STATE(88)] = 1377,
  [SMALL_STATE(89)] = 1385,
  [SMALL_STATE(90)] = 1393,
  [SMALL_STATE(91)] = 1401,
  [SMALL_STATE(92)] = 1411,
  [SMALL_STATE(93)] = 1421,
  [SMALL_STATE(94)] = 1431,
  [SMALL_STATE(95)] = 1439,
  [SMALL_STATE(96)] = 1449,
  [SMALL_STATE(97)] = 1457,
  [SMALL_STATE(98)] = 1465,
  [SMALL_STATE(99)] = 1473,
  [SMALL_STATE(100)] = 1480,
  [SMALL_STATE(101)] = 1487,
  [SMALL_STATE(102)] = 1494,
  [SMALL_STATE(103)] = 1501,
  [SMALL_STATE(104)] = 1508,
  [SMALL_STATE(105)] = 1515,
  [SMALL_STATE(106)] = 1522,
  [SMALL_STATE(107)] = 1529,
  [SMALL_STATE(108)] = 1536,
  [SMALL_STATE(109)] = 1543,
  [SMALL_STATE(110)] = 1550,
  [SMALL_STATE(111)] = 1557,
  [SMALL_STATE(112)] = 1564,
  [SMALL_STATE(113)] = 1571,
  [SMALL_STATE(114)] = 1578,
  [SMALL_STATE(115)] = 1585,
  [SMALL_STATE(116)] = 1592,
  [SMALL_STATE(117)] = 1599,
  [SMALL_STATE(118)] = 1606,
  [SMALL_STATE(119)] = 1613,
  [SMALL_STATE(120)] = 1620,
  [SMALL_STATE(121)] = 1627,
  [SMALL_STATE(122)] = 1634,
  [SMALL_STATE(123)] = 1641,
  [SMALL_STATE(124)] = 1648,
  [SMALL_STATE(125)] = 1655,
  [SMALL_STATE(126)] = 1662,
  [SMALL_STATE(127)] = 1669,
  [SMALL_STATE(128)] = 1676,
  [SMALL_STATE(129)] = 1683,
  [SMALL_STATE(130)] = 1690,
  [SMALL_STATE(131)] = 1697,
  [SMALL_STATE(132)] = 1704,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(114),
  [7] = {.count = 1, .reusable = false}, SHIFT(126),
  [9] = {.count = 1, .reusable = false}, SHIFT(125),
  [11] = {.count = 1, .reusable = false}, SHIFT(121),
  [13] = {.count = 1, .reusable = false}, SHIFT(120),
  [15] = {.count = 1, .reusable = false}, SHIFT(116),
  [17] = {.count = 1, .reusable = false}, SHIFT(115),
  [19] = {.count = 1, .reusable = false}, SHIFT(100),
  [21] = {.count = 1, .reusable = false}, SHIFT(111),
  [23] = {.count = 1, .reusable = false}, SHIFT(107),
  [25] = {.count = 1, .reusable = false}, SHIFT(104),
  [27] = {.count = 1, .reusable = false}, SHIFT(45),
  [29] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [31] = {.count = 1, .reusable = true}, SHIFT(4),
  [33] = {.count = 1, .reusable = false}, REDUCE(aux_sym__mod_tags_block_repeat1, 1),
  [35] = {.count = 1, .reusable = false}, SHIFT(81),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.count = 1, .reusable = false}, SHIFT(29),
  [46] = {.count = 1, .reusable = true}, SHIFT(2),
  [48] = {.count = 1, .reusable = true}, SHIFT(81),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(126),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(125),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(121),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(120),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(116),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(115),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(100),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(111),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(107),
  [77] = {.count = 1, .reusable = true}, SHIFT(126),
  [79] = {.count = 1, .reusable = true}, SHIFT(125),
  [81] = {.count = 1, .reusable = true}, SHIFT(121),
  [83] = {.count = 1, .reusable = true}, SHIFT(120),
  [85] = {.count = 1, .reusable = true}, SHIFT(116),
  [87] = {.count = 1, .reusable = true}, SHIFT(115),
  [89] = {.count = 1, .reusable = true}, SHIFT(100),
  [91] = {.count = 1, .reusable = true}, SHIFT(111),
  [93] = {.count = 1, .reusable = true}, SHIFT(107),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 3),
  [97] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [99] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(99),
  [104] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(118),
  [107] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(130),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 2),
  [112] = {.count = 1, .reusable = true}, SHIFT(66),
  [114] = {.count = 1, .reusable = false}, SHIFT(99),
  [116] = {.count = 1, .reusable = false}, SHIFT(118),
  [118] = {.count = 1, .reusable = false}, SHIFT(130),
  [120] = {.count = 1, .reusable = true}, SHIFT(55),
  [122] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(108),
  [127] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(102),
  [130] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(132),
  [133] = {.count = 1, .reusable = true}, SHIFT(28),
  [135] = {.count = 1, .reusable = false}, SHIFT(108),
  [137] = {.count = 1, .reusable = false}, SHIFT(102),
  [139] = {.count = 1, .reusable = false}, SHIFT(132),
  [141] = {.count = 1, .reusable = true}, SHIFT(40),
  [143] = {.count = 1, .reusable = true}, SHIFT(47),
  [145] = {.count = 1, .reusable = false}, SHIFT(131),
  [147] = {.count = 1, .reusable = true}, SHIFT(52),
  [149] = {.count = 1, .reusable = false}, SHIFT(65),
  [151] = {.count = 1, .reusable = true}, SHIFT(32),
  [153] = {.count = 1, .reusable = true}, SHIFT(57),
  [155] = {.count = 1, .reusable = false}, SHIFT(54),
  [157] = {.count = 1, .reusable = true}, SHIFT(87),
  [159] = {.count = 1, .reusable = true}, SHIFT(58),
  [161] = {.count = 1, .reusable = false}, SHIFT(56),
  [163] = {.count = 1, .reusable = true}, SHIFT(61),
  [165] = {.count = 1, .reusable = true}, SHIFT(62),
  [167] = {.count = 1, .reusable = false}, SHIFT(50),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [171] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(114),
  [174] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(104),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [179] = {.count = 1, .reusable = true}, SHIFT(21),
  [181] = {.count = 1, .reusable = false}, SHIFT(53),
  [183] = {.count = 1, .reusable = true}, SHIFT(53),
  [185] = {.count = 1, .reusable = true}, SHIFT(18),
  [187] = {.count = 1, .reusable = false}, SHIFT(44),
  [189] = {.count = 1, .reusable = true}, SHIFT(44),
  [191] = {.count = 1, .reusable = true}, SHIFT(19),
  [193] = {.count = 1, .reusable = false}, SHIFT(34),
  [195] = {.count = 1, .reusable = true}, SHIFT(34),
  [197] = {.count = 1, .reusable = true}, SHIFT(20),
  [199] = {.count = 1, .reusable = false}, SHIFT(97),
  [201] = {.count = 1, .reusable = true}, SHIFT(97),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym__spriteType_block, 3),
  [207] = {.count = 1, .reusable = false}, SHIFT(78),
  [209] = {.count = 1, .reusable = true}, SHIFT(3),
  [211] = {.count = 1, .reusable = true}, SHIFT(48),
  [213] = {.count = 1, .reusable = true}, SHIFT(131),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym__debug_block, 3),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym__debug_block, 3),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym__debug_block, 2),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym__debug_block, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(98),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_debug_loop, 3),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_debug_loop, 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [233] = {.count = 1, .reusable = true}, SHIFT(31),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texturefile, 3),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym__statement_gfx_texturefile, 3),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 4),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym__statement_name, 3, .production_id = 4),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 3),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym__spriteType_block, 2),
  [251] = {.count = 1, .reusable = false}, SHIFT(88),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym__spriteType, 3),
  [257] = {.count = 1, .reusable = true}, REDUCE(aux_sym__debug_block_repeat3, 2),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym__debug_block_repeat3, 2), SHIFT_REPEAT(131),
  [262] = {.count = 1, .reusable = false}, SHIFT(82),
  [264] = {.count = 1, .reusable = true}, SHIFT(71),
  [266] = {.count = 1, .reusable = true}, SHIFT(68),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym__spriteTypes, 3),
  [272] = {.count = 1, .reusable = true}, SHIFT(69),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym__spriteTypes_block, 2),
  [278] = {.count = 1, .reusable = false}, SHIFT(90),
  [280] = {.count = 1, .reusable = true}, SHIFT(86),
  [282] = {.count = 1, .reusable = true}, SHIFT(74),
  [284] = {.count = 1, .reusable = true}, SHIFT(94),
  [286] = {.count = 1, .reusable = false}, REDUCE(aux_sym__mod_tags_block_repeat2, 2),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat2, 2), SHIFT_REPEAT(6),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym__spriteTypes_block, 3),
  [295] = {.count = 1, .reusable = true}, REDUCE(aux_sym__debug_block_repeat2, 2),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym__debug_block_repeat2, 2), SHIFT_REPEAT(68),
  [300] = {.count = 1, .reusable = true}, REDUCE(aux_sym__debug_block_repeat1, 2),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym__debug_block_repeat1, 2), SHIFT_REPEAT(69),
  [305] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(74),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [312] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 2),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [320] = {.count = 1, .reusable = true}, SHIFT(11),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [328] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat2, 2),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 4),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [334] = {.count = 1, .reusable = true}, SHIFT(17),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 5),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_name, 3, .production_id = 1),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 6),
  [346] = {.count = 1, .reusable = true}, SHIFT(9),
  [348] = {.count = 1, .reusable = true}, SHIFT(63),
  [350] = {.count = 1, .reusable = true}, SHIFT(5),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [354] = {.count = 1, .reusable = true}, SHIFT(13),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [358] = {.count = 1, .reusable = true}, SHIFT(84),
  [360] = {.count = 1, .reusable = true}, SHIFT(122),
  [362] = {.count = 1, .reusable = true}, SHIFT(35),
  [364] = {.count = 1, .reusable = true}, SHIFT(110),
  [366] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [368] = {.count = 1, .reusable = true}, SHIFT(24),
  [370] = {.count = 1, .reusable = true}, SHIFT(101),
  [372] = {.count = 1, .reusable = true}, SHIFT(105),
  [374] = {.count = 1, .reusable = true}, SHIFT(92),
  [376] = {.count = 1, .reusable = true}, SHIFT(109),
  [378] = {.count = 1, .reusable = true}, SHIFT(38),
  [380] = {.count = 1, .reusable = true}, SHIFT(37),
  [382] = {.count = 1, .reusable = true}, SHIFT(93),
  [384] = {.count = 1, .reusable = true}, SHIFT(89),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [388] = {.count = 1, .reusable = true}, SHIFT(95),
  [390] = {.count = 1, .reusable = true}, SHIFT(123),
  [392] = {.count = 1, .reusable = true}, SHIFT(124),
  [394] = {.count = 1, .reusable = true}, SHIFT(106),
  [396] = {.count = 1, .reusable = true}, SHIFT(117),
  [398] = {.count = 1, .reusable = true}, SHIFT(14),
  [400] = {.count = 1, .reusable = true}, SHIFT(127),
  [402] = {.count = 1, .reusable = true}, SHIFT(128),
  [404] = {.count = 1, .reusable = true}, SHIFT(76),
  [406] = {.count = 1, .reusable = true}, SHIFT(85),
  [408] = {.count = 1, .reusable = true}, SHIFT(75),
  [410] = {.count = 1, .reusable = true}, SHIFT(129),
  [412] = {.count = 1, .reusable = true}, SHIFT(112),
  [414] = {.count = 1, .reusable = true}, SHIFT(79),
  [416] = {.count = 1, .reusable = true}, SHIFT(80),
  [418] = {.count = 1, .reusable = true}, SHIFT(73),
  [420] = {.count = 1, .reusable = true}, SHIFT(26),
  [422] = {.count = 1, .reusable = true}, SHIFT(27),
  [424] = {.count = 1, .reusable = true}, SHIFT(25),
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
