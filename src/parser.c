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
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 3
#define TOKEN_COUNT 49
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
  aux_sym__statement_mod_archive_token1 = 8,
  anon_sym_remote_file_id = 9,
  aux_sym__statement_mod_remote_file_id_token1 = 10,
  anon_sym_version = 11,
  aux_sym__statement_mod_version_token1 = 12,
  anon_sym_picture = 13,
  aux_sym__statement_mod_picture_token1 = 14,
  anon_sym_supported_version = 15,
  aux_sym__statement_mod_supported_version_token1 = 16,
  anon_sym_replace_path = 17,
  aux_sym__mod_replace_path_folder_token1 = 18,
  anon_sym_tags = 19,
  aux_sym__mod_tags_keyword_token1 = 20,
  aux_sym__mod_tags_keyword_token2 = 21,
  aux_sym__mod_tags_keyword_token3 = 22,
  aux_sym__mod_tags_keyword_token4 = 23,
  aux_sym__mod_tags_keyword_token5 = 24,
  aux_sym__mod_tags_keyword_token6 = 25,
  aux_sym__mod_tags_keyword_token7 = 26,
  aux_sym__mod_tags_keyword_token8 = 27,
  aux_sym__mod_tags_keyword_token9 = 28,
  aux_sym__mod_tags_keyword_token10 = 29,
  aux_sym__mod_tags_keyword_token11 = 30,
  aux_sym__mod_tags_keyword_token12 = 31,
  aux_sym__mod_tags_keyword_token13 = 32,
  aux_sym__mod_tags_keyword_token14 = 33,
  aux_sym__mod_tags_keyword_token15 = 34,
  aux_sym__mod_tags_keyword_token16 = 35,
  aux_sym__mod_tags_keyword_token17 = 36,
  aux_sym__mod_tags_keyword_token18 = 37,
  aux_sym__mod_tags_keyword_token19 = 38,
  aux_sym__mod_tags_keyword_token20 = 39,
  aux_sym__mod_tags_keyword_token21 = 40,
  aux_sym__mod_tags_keyword_token22 = 41,
  anon_sym_dependencies = 42,
  anon_sym_texturefile = 43,
  anon_sym_cursor_offset = 44,
  sym_assign_equal = 45,
  sym_string = 46,
  sym_number = 47,
  sym_comment = 48,
  sym_file = 49,
  sym_dot_mod = 50,
  sym_dot_gfx = 51,
  sym__spriteTypes = 52,
  sym__spriteTypes_block = 53,
  sym__spriteTypes_statement = 54,
  sym__spriteTypes_type = 55,
  sym__spriteType = 56,
  sym__spriteType_block = 57,
  sym__statement_name = 58,
  sym__statement_mod_path = 59,
  sym__statement_mod_archive = 60,
  sym__statement_mod_remote_file_id = 61,
  sym__statement_mod_version = 62,
  sym__statement_mod_picture = 63,
  sym__statement_mod_supported_version = 64,
  sym__statement_mod_replace_path = 65,
  sym__mod_replace_path_folder = 66,
  sym__statement_mod_tags = 67,
  sym__mod_tags_block = 68,
  sym__mod_tags_keyword = 69,
  sym__statement_mod_dependencies = 70,
  sym__mod_dependencies_block = 71,
  sym__statement_gfx_texturefile = 72,
  sym__statement_gfx_cursor_offset = 73,
  aux_sym_dot_mod_repeat1 = 74,
  aux_sym_dot_gfx_repeat1 = 75,
  aux_sym__spriteTypes_block_repeat1 = 76,
  aux_sym__spriteType_block_repeat1 = 77,
  aux_sym__mod_tags_block_repeat1 = 78,
  aux_sym__mod_dependencies_block_repeat1 = 79,
  alias_sym_dependencies = 80,
  alias_sym_name_value = 81,
  alias_sym_statement = 82,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_spriteTypes] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_spriteType] = "identifier",
  [anon_sym_name] = "name_identifier",
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
  [anon_sym_texturefile] = "identifier",
  [anon_sym_cursor_offset] = "identifier",
  [sym_assign_equal] = "assign_equal",
  [sym_string] = "string",
  [sym_number] = "number",
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
  [sym__statement_gfx_texturefile] = "statement",
  [sym__statement_gfx_cursor_offset] = "statement",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_dot_gfx_repeat1] = "dot_gfx_repeat1",
  [aux_sym__spriteTypes_block_repeat1] = "_spriteTypes_block_repeat1",
  [aux_sym__spriteType_block_repeat1] = "_spriteType_block_repeat1",
  [aux_sym__mod_tags_block_repeat1] = "_mod_tags_block_repeat1",
  [aux_sym__mod_dependencies_block_repeat1] = "_mod_dependencies_block_repeat1",
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
  [anon_sym_texturefile] = anon_sym_spriteTypes,
  [anon_sym_cursor_offset] = anon_sym_spriteTypes,
  [sym_assign_equal] = sym_assign_equal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
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
  [sym__statement_gfx_texturefile] = sym__statement_gfx_texturefile,
  [sym__statement_gfx_cursor_offset] = sym__statement_gfx_texturefile,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_dot_gfx_repeat1] = aux_sym_dot_gfx_repeat1,
  [aux_sym__spriteTypes_block_repeat1] = aux_sym__spriteTypes_block_repeat1,
  [aux_sym__spriteType_block_repeat1] = aux_sym__spriteType_block_repeat1,
  [aux_sym__mod_tags_block_repeat1] = aux_sym__mod_tags_block_repeat1,
  [aux_sym__mod_dependencies_block_repeat1] = aux_sym__mod_dependencies_block_repeat1,
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
  [anon_sym_texturefile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cursor_offset] = {
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
  [sym__statement_gfx_texturefile] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_gfx_cursor_offset] = {
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

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(716);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(767);
      if (lookahead == '-') ADVANCE(708);
      if (lookahead == '=') ADVANCE(762);
      if (lookahead == '\\') SKIP(712)
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 'c') ADVANCE(696);
      if (lookahead == 'd') ADVANCE(567);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(568);
      if (lookahead == 's') ADVANCE(647);
      if (lookahead == 't') ADVANCE(549);
      if (lookahead == 'v') ADVANCE(582);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '}') ADVANCE(719);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(349)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(349)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(350)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(350)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(535);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(536);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(530);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(534);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(532);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(533);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(531);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'E') ADVANCE(248);
      if (lookahead == 'G') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(101);
      if (lookahead == 'L') ADVANCE(177);
      if (lookahead == 'M') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(103);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '.') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(360);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(467);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(411);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(357);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(412);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(469);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(466);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(727);
      if (lookahead == '.') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '*') ADVANCE(312);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'j') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'z') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '*') ADVANCE(308);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'j') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'z') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '*') ADVANCE(308);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'j') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'z') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'K') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'g') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'g') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'g') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'h') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'y') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'j') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'z') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'j') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'z') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'j') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'z') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'v') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'v') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'v') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'y') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'y') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'y') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(747);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(747);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'j') ADVANCE(281);
      if (lookahead == 'p') ADVANCE(277);
      if (lookahead == 'z') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '.') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(729);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(731);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(731);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(731);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(725);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(725);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(725);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(744);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(744);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(741);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(741);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(753);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(753);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(755);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(755);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '.') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '.') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '.') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '.') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(733);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(739);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(739);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(738);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(742);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(742);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(743);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(743);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(752);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 326:
      if (lookahead == '"') ADVANCE(752);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 327:
      if (lookahead == '"') ADVANCE(740);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 328:
      if (lookahead == '"') ADVANCE(740);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 329:
      if (lookahead == '"') ADVANCE(757);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 330:
      if (lookahead == '"') ADVANCE(757);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 331:
      if (lookahead == '"') ADVANCE(745);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 332:
      if (lookahead == '"') ADVANCE(745);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 333:
      if (lookahead == '"') ADVANCE(751);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 334:
      if (lookahead == '"') ADVANCE(751);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 335:
      if (lookahead == '"') ADVANCE(756);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 336:
      if (lookahead == '"') ADVANCE(756);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 337:
      if (lookahead == '"') ADVANCE(754);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 338:
      if (lookahead == '"') ADVANCE(754);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 339:
      if (lookahead == '"') ADVANCE(746);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 340:
      if (lookahead == '"') ADVANCE(746);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 341:
      if (lookahead == '"') ADVANCE(750);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 342:
      if (lookahead == '"') ADVANCE(750);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 343:
      if (lookahead == '"') ADVANCE(758);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 344:
      if (lookahead == '"') ADVANCE(758);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 345:
      if (lookahead == '"') ADVANCE(737);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 346:
      if (lookahead == '"') ADVANCE(737);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 347:
      if (lookahead == '"') ADVANCE(749);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 348:
      if (lookahead == '"') ADVANCE(749);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 349:
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '#') ADVANCE(767);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(696);
      if (lookahead == 's') ADVANCE(656);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '}') ADVANCE(719);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(349)
      END_STATE();
    case 350:
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == '#') ADVANCE(767);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(350)
      END_STATE();
    case 351:
      if (lookahead == '*') ADVANCE(314);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'j') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(448);
      if (lookahead == 'z') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 352:
      if (lookahead == '*') ADVANCE(310);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'j') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(448);
      if (lookahead == 'z') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 353:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'C') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 354:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'I') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 355:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'I') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 356:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'K') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 357:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead == 'u') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 358:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 359:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 360:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 361:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 362:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 363:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 364:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 365:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 366:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 367:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 368:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 369:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 370:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 371:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 372:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 373:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 374:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'c') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 375:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 376:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'c') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 377:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 378:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'c') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 379:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 380:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 381:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 382:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 383:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 384:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 385:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 386:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 387:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 388:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 389:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 390:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 391:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 392:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 393:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 394:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 395:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 396:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 397:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 398:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 399:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 400:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 401:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 402:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 403:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 404:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 405:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'g') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 406:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'g') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 407:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'g') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 408:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'g') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 409:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'h') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 410:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'h') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 411:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 412:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 413:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 414:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 415:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 416:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 417:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 418:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 419:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 420:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 421:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 422:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 423:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 424:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 425:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 426:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 427:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 428:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 429:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 430:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 431:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 432:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 433:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 434:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'j') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(448);
      if (lookahead == 'z') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 435:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'j') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(448);
      if (lookahead == 'z') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 436:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 437:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 438:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 439:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 440:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(417);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 441:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 442:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 443:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 444:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 445:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 446:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 447:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 448:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 449:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 450:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 451:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 452:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 453:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 454:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 455:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 456:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 457:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 458:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 459:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 460:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 461:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 462:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 463:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 464:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 465:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 466:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 467:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 468:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 469:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 470:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 471:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 472:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 473:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 474:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 475:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 476:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 477:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 478:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 479:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 480:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 481:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 482:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 483:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 484:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 485:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 486:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 487:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 488:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 489:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 490:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 491:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 492:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 493:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 494:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 495:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 496:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 497:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 498:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 499:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 500:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 501:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 502:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 503:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 504:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 505:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 506:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 507:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 508:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 509:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 510:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 511:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 512:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 513:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 514:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 515:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 516:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 517:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 518:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 519:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 520:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 521:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'u') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 522:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'v') ADVANCE(391);
      if (lookahead == 'x') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 523:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'v') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 524:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'v') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 525:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 526:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'x') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 527:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'y') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 528:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'y') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 529:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'y') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 530:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 531:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 532:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 533:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 534:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 535:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 536:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 537:
      if (lookahead == '.') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(537);
      END_STATE();
    case 538:
      if (lookahead == 'T') ADVANCE(705);
      END_STATE();
    case 539:
      if (lookahead == 'T') ADVANCE(706);
      END_STATE();
    case 540:
      if (lookahead == 'T') ADVANCE(707);
      END_STATE();
    case 541:
      if (lookahead == '_') ADVANCE(597);
      END_STATE();
    case 542:
      if (lookahead == '_') ADVANCE(648);
      END_STATE();
    case 543:
      if (lookahead == '_') ADVANCE(637);
      END_STATE();
    case 544:
      if (lookahead == '_') ADVANCE(607);
      END_STATE();
    case 545:
      if (lookahead == '_') ADVANCE(701);
      END_STATE();
    case 546:
      if (lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 547:
      if (lookahead == 'a') ADVANCE(683);
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 548:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 549:
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 550:
      if (lookahead == 'a') ADVANCE(562);
      END_STATE();
    case 551:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 552:
      if (lookahead == 'a') ADVANCE(646);
      if (lookahead == 'i') ADVANCE(681);
      END_STATE();
    case 553:
      if (lookahead == 'a') ADVANCE(688);
      END_STATE();
    case 554:
      if (lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 555:
      if (lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 556:
      if (lookahead == 'c') ADVANCE(603);
      END_STATE();
    case 557:
      if (lookahead == 'c') ADVANCE(690);
      END_STATE();
    case 558:
      if (lookahead == 'c') ADVANCE(551);
      END_STATE();
    case 559:
      if (lookahead == 'c') ADVANCE(613);
      END_STATE();
    case 560:
      if (lookahead == 'c') ADVANCE(635);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead == 'g') ADVANCE(594);
      if (lookahead == 'h') ADVANCE(609);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(641);
      if (lookahead == 'm') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 561:
      if (lookahead == 'c') ADVANCE(616);
      END_STATE();
    case 562:
      if (lookahead == 'c') ADVANCE(581);
      END_STATE();
    case 563:
      if (lookahead == 'c') ADVANCE(579);
      END_STATE();
    case 564:
      if (lookahead == 'd') ADVANCE(726);
      END_STATE();
    case 565:
      if (lookahead == 'd') ADVANCE(545);
      END_STATE();
    case 566:
      if (lookahead == 'd') ADVANCE(580);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 568:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 569:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 570:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 571:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 572:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 573:
      if (lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 574:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 575:
      if (lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 576:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 577:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 578:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 579:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 580:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 581:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 582:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 583:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 584:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 585:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 586:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 587:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 588:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 589:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 590:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 591:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 592:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 593:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 594:
      if (lookahead == 'f') ADVANCE(702);
      END_STATE();
    case 595:
      if (lookahead == 'f') ADVANCE(596);
      END_STATE();
    case 596:
      if (lookahead == 'f') ADVANCE(680);
      END_STATE();
    case 597:
      if (lookahead == 'f') ADVANCE(605);
      END_STATE();
    case 598:
      if (lookahead == 'f') ADVANCE(614);
      END_STATE();
    case 599:
      if (lookahead == 'f') ADVANCE(555);
      END_STATE();
    case 600:
      if (lookahead == 'g') ADVANCE(670);
      END_STATE();
    case 601:
      if (lookahead == 'h') ADVANCE(723);
      END_STATE();
    case 602:
      if (lookahead == 'h') ADVANCE(734);
      END_STATE();
    case 603:
      if (lookahead == 'h') ADVANCE(604);
      END_STATE();
    case 604:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 605:
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 606:
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 607:
      if (lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 608:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 609:
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 610:
      if (lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 611:
      if (lookahead == 'i') ADVANCE(644);
      END_STATE();
    case 612:
      if (lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 613:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 614:
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 615:
      if (lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 616:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 617:
      if (lookahead == 'i') ADVANCE(694);
      END_STATE();
    case 618:
      if (lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 619:
      if (lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 620:
      if (lookahead == 'l') ADVANCE(612);
      END_STATE();
    case 621:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 622:
      if (lookahead == 'l') ADVANCE(575);
      END_STATE();
    case 623:
      if (lookahead == 'm') ADVANCE(638);
      if (lookahead == 'p') ADVANCE(619);
      END_STATE();
    case 624:
      if (lookahead == 'm') ADVANCE(626);
      END_STATE();
    case 625:
      if (lookahead == 'm') ADVANCE(570);
      END_STATE();
    case 626:
      if (lookahead == 'm') ADVANCE(643);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(566);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(728);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(732);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(691);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 646:
      if (lookahead == 'p') ADVANCE(288);
      END_STATE();
    case 647:
      if (lookahead == 'p') ADVANCE(659);
      if (lookahead == 'u') ADVANCE(649);
      END_STATE();
    case 648:
      if (lookahead == 'p') ADVANCE(554);
      END_STATE();
    case 649:
      if (lookahead == 'p') ADVANCE(654);
      END_STATE();
    case 650:
      if (lookahead == 'p') ADVANCE(569);
      END_STATE();
    case 651:
      if (lookahead == 'p') ADVANCE(574);
      END_STATE();
    case 652:
      if (lookahead == 'p') ADVANCE(586);
      END_STATE();
    case 653:
      if (lookahead == 'p') ADVANCE(576);
      END_STATE();
    case 654:
      if (lookahead == 'p') ADVANCE(642);
      END_STATE();
    case 655:
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead == 'u') ADVANCE(649);
      END_STATE();
    case 656:
      if (lookahead == 'p') ADVANCE(669);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(673);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(615);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(599);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 670:
      if (lookahead == 's') ADVANCE(736);
      END_STATE();
    case 671:
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 672:
      if (lookahead == 's') ADVANCE(759);
      END_STATE();
    case 673:
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 674:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 675:
      if (lookahead == 's') ADVANCE(606);
      END_STATE();
    case 676:
      if (lookahead == 's') ADVANCE(553);
      END_STATE();
    case 677:
      if (lookahead == 's') ADVANCE(693);
      END_STATE();
    case 678:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 679:
      if (lookahead == 's') ADVANCE(611);
      END_STATE();
    case 680:
      if (lookahead == 's') ADVANCE(583);
      END_STATE();
    case 681:
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(761);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(601);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(610);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(698);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 696:
      if (lookahead == 'u') ADVANCE(658);
      END_STATE();
    case 697:
      if (lookahead == 'u') ADVANCE(664);
      END_STATE();
    case 698:
      if (lookahead == 'u') ADVANCE(665);
      END_STATE();
    case 699:
      if (lookahead == 'v') ADVANCE(572);
      END_STATE();
    case 700:
      if (lookahead == 'v') ADVANCE(587);
      END_STATE();
    case 701:
      if (lookahead == 'v') ADVANCE(589);
      END_STATE();
    case 702:
      if (lookahead == 'x') ADVANCE(288);
      END_STATE();
    case 703:
      if (lookahead == 'x') ADVANCE(692);
      END_STATE();
    case 704:
      if (lookahead == 'y') ADVANCE(288);
      END_STATE();
    case 705:
      if (lookahead == 'y') ADVANCE(651);
      END_STATE();
    case 706:
      if (lookahead == 'y') ADVANCE(652);
      END_STATE();
    case 707:
      if (lookahead == 'y') ADVANCE(653);
      END_STATE();
    case 708:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 709:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 710:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 711:
      if (eof) ADVANCE(716);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 712:
      if (eof) ADVANCE(716);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(711)
      END_STATE();
    case 713:
      if (eof) ADVANCE(716);
      if (lookahead == '\n') SKIP(715)
      END_STATE();
    case 714:
      if (eof) ADVANCE(716);
      if (lookahead == '\n') SKIP(715)
      if (lookahead == '\r') SKIP(713)
      END_STATE();
    case 715:
      if (eof) ADVANCE(716);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#') ADVANCE(767);
      if (lookahead == '\\') SKIP(714)
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 'd') ADVANCE(567);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(568);
      if (lookahead == 's') ADVANCE(655);
      if (lookahead == 't') ADVANCE(548);
      if (lookahead == 'v') ADVANCE(582);
      if (lookahead == '}') ADVANCE(719);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(715)
      END_STATE();
    case 716:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_archive);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__statement_mod_archive_token1);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__statement_mod_remote_file_id_token1);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__statement_mod_version_token1);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_picture);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__statement_mod_picture_token1);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_supported_version);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__statement_mod_supported_version_token1);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_replace_path);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__mod_replace_path_folder_token1);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token1);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token2);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token3);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token4);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token5);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token6);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token7);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token8);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token9);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token10);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token11);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token12);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token13);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token14);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token15);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token16);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token17);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token18);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token19);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token20);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token21);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__mod_tags_keyword_token22);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_texturefile);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(709);
      if (lookahead == 'f') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(767);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 715},
  [2] = {.lex_state = 715},
  [3] = {.lex_state = 715},
  [4] = {.lex_state = 715},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 349},
  [32] = {.lex_state = 349},
  [33] = {.lex_state = 349},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 715},
  [38] = {.lex_state = 349},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 715},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 349},
  [43] = {.lex_state = 349},
  [44] = {.lex_state = 349},
  [45] = {.lex_state = 349},
  [46] = {.lex_state = 349},
  [47] = {.lex_state = 349},
  [48] = {.lex_state = 349},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 349},
  [54] = {.lex_state = 715},
  [55] = {.lex_state = 715},
  [56] = {.lex_state = 350},
  [57] = {.lex_state = 715},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 715},
  [62] = {.lex_state = 715},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 350},
  [65] = {.lex_state = 715},
  [66] = {.lex_state = 715},
  [67] = {.lex_state = 349},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 349},
  [70] = {.lex_state = 349},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
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
    [anon_sym_texturefile] = ACTIONS(1),
    [anon_sym_cursor_offset] = ACTIONS(1),
    [sym_assign_equal] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_file] = STATE(74),
    [sym_dot_mod] = STATE(73),
    [sym_dot_gfx] = STATE(73),
    [sym__spriteTypes] = STATE(37),
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
    [aux_sym_dot_gfx_repeat1] = STATE(37),
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
    STATE(2), 2,
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
    STATE(3), 2,
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
  [205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_assign_equal,
    ACTIONS(74), 13,
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
  [227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 13,
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
  [246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_assign_equal,
    ACTIONS(80), 11,
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
  [266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_assign_equal,
    ACTIONS(84), 11,
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
  [286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_assign_equal,
    ACTIONS(88), 11,
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
  [306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_assign_equal,
    ACTIONS(92), 11,
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
  [326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_assign_equal,
    ACTIONS(96), 11,
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
  [346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_assign_equal,
    ACTIONS(100), 11,
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
  [366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_assign_equal,
    ACTIONS(104), 11,
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
  [386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_assign_equal,
    ACTIONS(108), 11,
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
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_assign_equal,
    ACTIONS(112), 11,
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
  [426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 11,
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
  [443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 11,
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
  [460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 11,
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
  [477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 11,
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
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 11,
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
  [511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 11,
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
  [528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 11,
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
  [545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 11,
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
  [562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 11,
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
  [579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 11,
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
  [596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 11,
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
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 11,
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
  [630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 11,
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
  [647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      anon_sym_spriteType,
    ACTIONS(146), 1,
      anon_sym_cursor_offset,
    STATE(33), 5,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [667] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_spriteType,
    ACTIONS(146), 1,
      anon_sym_cursor_offset,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(31), 5,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      anon_sym_spriteType,
    ACTIONS(155), 1,
      anon_sym_cursor_offset,
    STATE(33), 5,
      sym__spriteTypes_statement,
      sym__spriteTypes_type,
      sym__spriteType,
      sym__statement_gfx_cursor_offset,
      aux_sym__spriteTypes_block_repeat1,
  [707] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(163), 1,
      anon_sym_texturefile,
    STATE(41), 1,
      sym__statement_name,
    STATE(34), 2,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [727] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      anon_sym_texturefile,
    STATE(41), 1,
      sym__statement_name,
    STATE(36), 2,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [747] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_name,
    ACTIONS(168), 1,
      anon_sym_texturefile,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__statement_name,
    STATE(34), 2,
      sym__statement_gfx_texturefile,
      aux_sym__spriteType_block_repeat1,
  [767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    STATE(40), 2,
      sym__spriteTypes,
      aux_sym_dot_gfx_repeat1,
  [781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_assign_equal,
    ACTIONS(178), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
  [805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      anon_sym_spriteTypes,
    STATE(40), 2,
      sym__spriteTypes,
      aux_sym_dot_gfx_repeat1,
  [819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
  [828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      sym_string,
    STATE(48), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      sym_string,
    STATE(45), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_string,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym__mod_dependencies_block_repeat1,
  [903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
  [912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym__spriteType_block,
  [922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym__mod_tags_block,
  [932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym__spriteTypes_block,
  [942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 2,
      anon_sym_RBRACE,
      sym_string,
  [950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      aux_sym__mod_replace_path_folder_token1,
    STATE(26), 1,
      sym__mod_replace_path_folder,
  [976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_spriteTypes,
  [984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym__mod_dependencies_block,
  [994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_number,
  [1001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_assign_equal,
  [1008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym__statement_mod_supported_version_token1,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym__statement_mod_picture_token1,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_assign_equal,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym__statement_mod_version_token1,
  [1036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym__statement_mod_remote_file_id_token1,
  [1043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym__statement_mod_archive_token1,
  [1050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_string,
  [1057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_number,
  [1064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_string,
  [1071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_string,
  [1078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_assign_equal,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
  [1092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
  [1099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 227,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 266,
  [SMALL_STATE(11)] = 286,
  [SMALL_STATE(12)] = 306,
  [SMALL_STATE(13)] = 326,
  [SMALL_STATE(14)] = 346,
  [SMALL_STATE(15)] = 366,
  [SMALL_STATE(16)] = 386,
  [SMALL_STATE(17)] = 406,
  [SMALL_STATE(18)] = 426,
  [SMALL_STATE(19)] = 443,
  [SMALL_STATE(20)] = 460,
  [SMALL_STATE(21)] = 477,
  [SMALL_STATE(22)] = 494,
  [SMALL_STATE(23)] = 511,
  [SMALL_STATE(24)] = 528,
  [SMALL_STATE(25)] = 545,
  [SMALL_STATE(26)] = 562,
  [SMALL_STATE(27)] = 579,
  [SMALL_STATE(28)] = 596,
  [SMALL_STATE(29)] = 613,
  [SMALL_STATE(30)] = 630,
  [SMALL_STATE(31)] = 647,
  [SMALL_STATE(32)] = 667,
  [SMALL_STATE(33)] = 687,
  [SMALL_STATE(34)] = 707,
  [SMALL_STATE(35)] = 727,
  [SMALL_STATE(36)] = 747,
  [SMALL_STATE(37)] = 767,
  [SMALL_STATE(38)] = 781,
  [SMALL_STATE(39)] = 793,
  [SMALL_STATE(40)] = 805,
  [SMALL_STATE(41)] = 819,
  [SMALL_STATE(42)] = 828,
  [SMALL_STATE(43)] = 837,
  [SMALL_STATE(44)] = 850,
  [SMALL_STATE(45)] = 859,
  [SMALL_STATE(46)] = 872,
  [SMALL_STATE(47)] = 881,
  [SMALL_STATE(48)] = 890,
  [SMALL_STATE(49)] = 903,
  [SMALL_STATE(50)] = 912,
  [SMALL_STATE(51)] = 922,
  [SMALL_STATE(52)] = 932,
  [SMALL_STATE(53)] = 942,
  [SMALL_STATE(54)] = 950,
  [SMALL_STATE(55)] = 958,
  [SMALL_STATE(56)] = 966,
  [SMALL_STATE(57)] = 976,
  [SMALL_STATE(58)] = 984,
  [SMALL_STATE(59)] = 994,
  [SMALL_STATE(60)] = 1001,
  [SMALL_STATE(61)] = 1008,
  [SMALL_STATE(62)] = 1015,
  [SMALL_STATE(63)] = 1022,
  [SMALL_STATE(64)] = 1029,
  [SMALL_STATE(65)] = 1036,
  [SMALL_STATE(66)] = 1043,
  [SMALL_STATE(67)] = 1050,
  [SMALL_STATE(68)] = 1057,
  [SMALL_STATE(69)] = 1064,
  [SMALL_STATE(70)] = 1071,
  [SMALL_STATE(71)] = 1078,
  [SMALL_STATE(72)] = 1085,
  [SMALL_STATE(73)] = 1092,
  [SMALL_STATE(74)] = 1099,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(60),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(9),
  [11] = {.count = 1, .reusable = true}, SHIFT(10),
  [13] = {.count = 1, .reusable = true}, SHIFT(11),
  [15] = {.count = 1, .reusable = true}, SHIFT(12),
  [17] = {.count = 1, .reusable = true}, SHIFT(13),
  [19] = {.count = 1, .reusable = true}, SHIFT(14),
  [21] = {.count = 1, .reusable = true}, SHIFT(15),
  [23] = {.count = 1, .reusable = true}, SHIFT(16),
  [25] = {.count = 1, .reusable = true}, SHIFT(17),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_tags_block_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.count = 1, .reusable = true}, SHIFT(24),
  [34] = {.count = 1, .reusable = true}, SHIFT(2),
  [36] = {.count = 1, .reusable = true}, SHIFT(21),
  [38] = {.count = 1, .reusable = true}, SHIFT(3),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [42] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(9),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(10),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(11),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(12),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(14),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(15),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(16),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(17),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 1),
  [76] = {.count = 1, .reusable = true}, SHIFT(70),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym__statement_name, 3, .production_id = 1),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 1),
  [82] = {.count = 1, .reusable = true}, SHIFT(67),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 1),
  [86] = {.count = 1, .reusable = true}, SHIFT(66),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 1),
  [90] = {.count = 1, .reusable = true}, SHIFT(65),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 1),
  [94] = {.count = 1, .reusable = true}, SHIFT(64),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 1),
  [98] = {.count = 1, .reusable = true}, SHIFT(62),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 1),
  [102] = {.count = 1, .reusable = true}, SHIFT(61),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 1),
  [106] = {.count = 1, .reusable = true}, SHIFT(56),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 1),
  [110] = {.count = 1, .reusable = true}, SHIFT(51),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 1),
  [114] = {.count = 1, .reusable = true}, SHIFT(58),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_version, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_supported_version, 3),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 2),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 2),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym__mod_dependencies_block, 3),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_dependencies, 3),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym__mod_tags_block, 3),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_tags, 3),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_replace_path, 3),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_path, 3),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_archive, 3),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_remote_file_id, 3),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym__statement_mod_picture, 3),
  [142] = {.count = 1, .reusable = true}, SHIFT(55),
  [144] = {.count = 1, .reusable = true}, SHIFT(63),
  [146] = {.count = 1, .reusable = true}, SHIFT(71),
  [148] = {.count = 1, .reusable = true}, SHIFT(54),
  [150] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(63),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_block_repeat1, 2), SHIFT_REPEAT(71),
  [158] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(7),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 2), SHIFT_REPEAT(39),
  [166] = {.count = 1, .reusable = true}, SHIFT(47),
  [168] = {.count = 1, .reusable = true}, SHIFT(39),
  [170] = {.count = 1, .reusable = true}, SHIFT(42),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [174] = {.count = 1, .reusable = true}, SHIFT(59),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 2),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texturefile, 1),
  [180] = {.count = 1, .reusable = true}, SHIFT(69),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(60),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_block_repeat1, 1, .production_id = 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 3),
  [191] = {.count = 1, .reusable = true}, SHIFT(20),
  [193] = {.count = 1, .reusable = true}, SHIFT(53),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_cursor_offset, 6),
  [197] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 2), SHIFT_REPEAT(53),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType, 3),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym__spriteType_block, 2),
  [206] = {.count = 1, .reusable = true}, SHIFT(22),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym__statement_gfx_texturefile, 3),
  [210] = {.count = 1, .reusable = true}, SHIFT(35),
  [212] = {.count = 1, .reusable = true}, SHIFT(4),
  [214] = {.count = 1, .reusable = true}, SHIFT(32),
  [216] = {.count = 1, .reusable = true}, REDUCE(aux_sym__mod_dependencies_block_repeat1, 1, .production_id = 2),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 2),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes_block, 3),
  [222] = {.count = 1, .reusable = true}, SHIFT(26),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym__spriteTypes, 3),
  [226] = {.count = 1, .reusable = true}, SHIFT(43),
  [228] = {.count = 1, .reusable = true}, SHIFT(68),
  [230] = {.count = 1, .reusable = true}, SHIFT(52),
  [232] = {.count = 1, .reusable = true}, SHIFT(19),
  [234] = {.count = 1, .reusable = true}, SHIFT(30),
  [236] = {.count = 1, .reusable = true}, SHIFT(50),
  [238] = {.count = 1, .reusable = true}, SHIFT(18),
  [240] = {.count = 1, .reusable = true}, SHIFT(29),
  [242] = {.count = 1, .reusable = true}, SHIFT(28),
  [244] = {.count = 1, .reusable = true}, SHIFT(27),
  [246] = {.count = 1, .reusable = true}, SHIFT(72),
  [248] = {.count = 1, .reusable = true}, SHIFT(49),
  [250] = {.count = 1, .reusable = true}, SHIFT(8),
  [252] = {.count = 1, .reusable = true}, SHIFT(38),
  [254] = {.count = 1, .reusable = true}, SHIFT(44),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [258] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
