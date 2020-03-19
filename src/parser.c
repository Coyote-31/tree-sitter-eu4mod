#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  aux_sym__mod_line_multi_content_token1 = 3,
  aux_sym__mod_line_multi_content_token2 = 4,
  aux_sym__mod_line_multi_content_token3 = 5,
  anon_sym_spriteTypes = 6,
  anon_sym_spriteType = 7,
  anon_sym_name = 8,
  anon_sym_texturefile = 9,
  anon_sym_cursor_offset = 10,
  anon_sym_supported_version = 11,
  anon_sym_version = 12,
  anon_sym_path = 13,
  anon_sym_archive = 14,
  anon_sym_picture = 15,
  anon_sym_remote_file_id = 16,
  anon_sym_tags = 17,
  anon_sym_dependencies = 18,
  sym_assign_equal = 19,
  sym_string = 20,
  sym_number = 21,
  sym_comment = 22,
  sym__eol = 23,
  sym_debug_assign_name = 24,
  sym_file = 25,
  sym_dot_mod = 26,
  sym_mod_line_mono = 27,
  sym_mod_line_multi = 28,
  sym__mod_line_multi_content = 29,
  sym_dot_gfx = 30,
  sym_gfx_types = 31,
  sym__types_spriteTypes = 32,
  aux_sym__spriteTypes_content = 33,
  sym__spriteTypes_attribut = 34,
  sym__spriteTypes_type = 35,
  sym__type_spriteType = 36,
  aux_sym__spriteType_content = 37,
  sym__attribut_name = 38,
  sym__attribut_texturefile = 39,
  sym__attribut_cursor_offset = 40,
  sym_mod_line_mono_name = 41,
  sym_mod_line_multi_name = 42,
  sym_debug_assign = 43,
  sym_debug_assign_multi = 44,
  aux_sym_dot_mod_repeat1 = 45,
  aux_sym_mod_line_multi_repeat1 = 46,
  aux_sym_dot_gfx_repeat1 = 47,
  aux_sym_debug_assign_multi_repeat1 = 48,
  aux_sym_debug_assign_multi_repeat2 = 49,
  alias_sym_attribut_name = 50,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__mod_line_multi_content_token1] = "_mod_line_multi_content_token1",
  [aux_sym__mod_line_multi_content_token2] = "_mod_line_multi_content_token2",
  [aux_sym__mod_line_multi_content_token3] = "_mod_line_multi_content_token3",
  [anon_sym_spriteTypes] = "types_name",
  [anon_sym_spriteType] = "type_name",
  [anon_sym_name] = "name",
  [anon_sym_texturefile] = "attribut_name",
  [anon_sym_cursor_offset] = "attribut_name",
  [anon_sym_supported_version] = "supported_version",
  [anon_sym_version] = "version",
  [anon_sym_path] = "path",
  [anon_sym_archive] = "archive",
  [anon_sym_picture] = "picture",
  [anon_sym_remote_file_id] = "remote_file_id",
  [anon_sym_tags] = "tags",
  [anon_sym_dependencies] = "dependencies",
  [sym_assign_equal] = "assign_equal",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym__eol] = "_eol",
  [sym_debug_assign_name] = "debug_assign_name",
  [sym_file] = "file",
  [sym_dot_mod] = "dot_mod",
  [sym_mod_line_mono] = "mod_line_mono",
  [sym_mod_line_multi] = "mod_line_multi",
  [sym__mod_line_multi_content] = "_mod_line_multi_content",
  [sym_dot_gfx] = "dot_gfx",
  [sym_gfx_types] = "gfx_types",
  [sym__types_spriteTypes] = "_types_spriteTypes",
  [aux_sym__spriteTypes_content] = "_spriteTypes_content",
  [sym__spriteTypes_attribut] = "_spriteTypes_attribut",
  [sym__spriteTypes_type] = "_spriteTypes_type",
  [sym__type_spriteType] = "gfx_type",
  [aux_sym__spriteType_content] = "_spriteType_content",
  [sym__attribut_name] = "gfx_attribut",
  [sym__attribut_texturefile] = "gfx_attribut",
  [sym__attribut_cursor_offset] = "gfx_attribut",
  [sym_mod_line_mono_name] = "mod_line_mono_name",
  [sym_mod_line_multi_name] = "mod_line_multi_name",
  [sym_debug_assign] = "debug_assign",
  [sym_debug_assign_multi] = "debug_assign_multi",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_mod_line_multi_repeat1] = "mod_line_multi_repeat1",
  [aux_sym_dot_gfx_repeat1] = "dot_gfx_repeat1",
  [aux_sym_debug_assign_multi_repeat1] = "debug_assign_multi_repeat1",
  [aux_sym_debug_assign_multi_repeat2] = "debug_assign_multi_repeat2",
  [alias_sym_attribut_name] = "attribut_name",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__mod_line_multi_content_token1] = aux_sym__mod_line_multi_content_token1,
  [aux_sym__mod_line_multi_content_token2] = aux_sym__mod_line_multi_content_token2,
  [aux_sym__mod_line_multi_content_token3] = aux_sym__mod_line_multi_content_token3,
  [anon_sym_spriteTypes] = anon_sym_spriteTypes,
  [anon_sym_spriteType] = anon_sym_spriteType,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_texturefile] = anon_sym_texturefile,
  [anon_sym_cursor_offset] = anon_sym_texturefile,
  [anon_sym_supported_version] = anon_sym_supported_version,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_archive] = anon_sym_archive,
  [anon_sym_picture] = anon_sym_picture,
  [anon_sym_remote_file_id] = anon_sym_remote_file_id,
  [anon_sym_tags] = anon_sym_tags,
  [anon_sym_dependencies] = anon_sym_dependencies,
  [sym_assign_equal] = sym_assign_equal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym__eol] = sym__eol,
  [sym_debug_assign_name] = sym_debug_assign_name,
  [sym_file] = sym_file,
  [sym_dot_mod] = sym_dot_mod,
  [sym_mod_line_mono] = sym_mod_line_mono,
  [sym_mod_line_multi] = sym_mod_line_multi,
  [sym__mod_line_multi_content] = sym__mod_line_multi_content,
  [sym_dot_gfx] = sym_dot_gfx,
  [sym_gfx_types] = sym_gfx_types,
  [sym__types_spriteTypes] = sym__types_spriteTypes,
  [aux_sym__spriteTypes_content] = aux_sym__spriteTypes_content,
  [sym__spriteTypes_attribut] = sym__spriteTypes_attribut,
  [sym__spriteTypes_type] = sym__spriteTypes_type,
  [sym__type_spriteType] = sym__type_spriteType,
  [aux_sym__spriteType_content] = aux_sym__spriteType_content,
  [sym__attribut_name] = sym__attribut_name,
  [sym__attribut_texturefile] = sym__attribut_name,
  [sym__attribut_cursor_offset] = sym__attribut_name,
  [sym_mod_line_mono_name] = sym_mod_line_mono_name,
  [sym_mod_line_multi_name] = sym_mod_line_multi_name,
  [sym_debug_assign] = sym_debug_assign,
  [sym_debug_assign_multi] = sym_debug_assign_multi,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_mod_line_multi_repeat1] = aux_sym_mod_line_multi_repeat1,
  [aux_sym_dot_gfx_repeat1] = aux_sym_dot_gfx_repeat1,
  [aux_sym_debug_assign_multi_repeat1] = aux_sym_debug_assign_multi_repeat1,
  [aux_sym_debug_assign_multi_repeat2] = aux_sym_debug_assign_multi_repeat2,
  [alias_sym_attribut_name] = alias_sym_attribut_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [aux_sym__mod_line_multi_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mod_line_multi_content_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mod_line_multi_content_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_spriteTypes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_spriteType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texturefile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cursor_offset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_supported_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_archive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_picture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remote_file_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dependencies] = {
    .visible = true,
    .named = false,
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
  [sym_debug_assign_name] = {
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
  [sym_mod_line_mono] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_line_multi] = {
    .visible = true,
    .named = true,
  },
  [sym__mod_line_multi_content] = {
    .visible = false,
    .named = true,
  },
  [sym_dot_gfx] = {
    .visible = true,
    .named = true,
  },
  [sym_gfx_types] = {
    .visible = true,
    .named = true,
  },
  [sym__types_spriteTypes] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__spriteTypes_content] = {
    .visible = false,
    .named = false,
  },
  [sym__spriteTypes_attribut] = {
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
  [aux_sym__spriteType_content] = {
    .visible = false,
    .named = false,
  },
  [sym__attribut_name] = {
    .visible = true,
    .named = true,
  },
  [sym__attribut_texturefile] = {
    .visible = true,
    .named = true,
  },
  [sym__attribut_cursor_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_line_mono_name] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_line_multi_name] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_assign_multi] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dot_mod_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_line_multi_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dot_gfx_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_debug_assign_multi_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_debug_assign_multi_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribut_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_attribut_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '\\') SKIP(54)
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(61);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(61);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(2)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 53:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 54:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(53)
      END_STATE();
    case 55:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') SKIP(57)
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\r') SKIP(55)
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\\') SKIP(56)
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(57)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__mod_line_multi_content_token1);
      if (lookahead == '\t') ADVANCE(61);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__mod_line_multi_content_token2);
      if (lookahead == '\t') ADVANCE(61);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_spriteType);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_texturefile);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_texturefile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_supported_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_path);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_archive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_picture);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_dependencies);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(13);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'T') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'T') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == '_') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == '_') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'a') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'c') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'c') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'c') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'd') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'd') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'd') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'f') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'f') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'f') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'f') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'g') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'h') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'h') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'i') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'i') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'i') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'm') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'n') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'n') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'o') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'o') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'o') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'o') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'p') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'p') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'p') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'p') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 'u') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'p') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'r') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 's') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 's') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 's') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 't') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'u') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'u') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'v') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'v') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'x') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'y') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (lookahead == 'y') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_debug_assign_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 57},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 57},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_spriteTypes] = ACTIONS(1),
    [anon_sym_spriteType] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_texturefile] = ACTIONS(1),
    [anon_sym_cursor_offset] = ACTIONS(1),
    [anon_sym_supported_version] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_archive] = ACTIONS(1),
    [anon_sym_picture] = ACTIONS(1),
    [anon_sym_remote_file_id] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [anon_sym_dependencies] = ACTIONS(1),
    [sym_assign_equal] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_debug_assign_name] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(43),
    [sym_dot_mod] = STATE(42),
    [sym_mod_line_mono] = STATE(2),
    [sym_mod_line_multi] = STATE(2),
    [sym_dot_gfx] = STATE(42),
    [sym_gfx_types] = STATE(9),
    [sym__types_spriteTypes] = STATE(30),
    [sym_mod_line_mono_name] = STATE(39),
    [sym_mod_line_multi_name] = STATE(36),
    [sym_debug_assign] = STATE(9),
    [aux_sym_dot_mod_repeat1] = STATE(2),
    [aux_sym_dot_gfx_repeat1] = STATE(9),
    [anon_sym_spriteTypes] = ACTIONS(5),
    [anon_sym_name] = ACTIONS(7),
    [anon_sym_supported_version] = ACTIONS(7),
    [anon_sym_version] = ACTIONS(7),
    [anon_sym_path] = ACTIONS(7),
    [anon_sym_archive] = ACTIONS(7),
    [anon_sym_picture] = ACTIONS(7),
    [anon_sym_remote_file_id] = ACTIONS(7),
    [anon_sym_tags] = ACTIONS(9),
    [anon_sym_dependencies] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_debug_assign_name] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_mod_line_multi_name,
    STATE(39), 1,
      sym_mod_line_mono_name,
    ACTIONS(17), 2,
      anon_sym_tags,
      anon_sym_dependencies,
    STATE(3), 3,
      sym_mod_line_mono,
      sym_mod_line_multi,
      aux_sym_dot_mod_repeat1,
    ACTIONS(15), 7,
      anon_sym_name,
      anon_sym_supported_version,
      anon_sym_version,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_picture,
      anon_sym_remote_file_id,
  [31] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_mod_line_multi_name,
    STATE(39), 1,
      sym_mod_line_mono_name,
    ACTIONS(24), 2,
      anon_sym_tags,
      anon_sym_dependencies,
    STATE(3), 3,
      sym_mod_line_mono,
      sym_mod_line_multi,
      aux_sym_dot_mod_repeat1,
    ACTIONS(21), 7,
      anon_sym_name,
      anon_sym_supported_version,
      anon_sym_version,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_picture,
      anon_sym_remote_file_id,
  [62] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_supported_version,
      anon_sym_version,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_picture,
      anon_sym_remote_file_id,
      anon_sym_tags,
      anon_sym_dependencies,
  [78] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_supported_version,
      anon_sym_version,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_picture,
      anon_sym_remote_file_id,
      anon_sym_tags,
      anon_sym_dependencies,
  [94] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 10,
      ts_builtin_sym_end,
      anon_sym_name,
      anon_sym_supported_version,
      anon_sym_version,
      anon_sym_path,
      anon_sym_archive,
      anon_sym_picture,
      anon_sym_remote_file_id,
      anon_sym_tags,
      anon_sym_dependencies,
  [110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_spriteType,
    ACTIONS(38), 1,
      anon_sym_cursor_offset,
    STATE(7), 5,
      aux_sym__spriteTypes_content,
      sym__spriteTypes_attribut,
      sym__spriteTypes_type,
      sym__type_spriteType,
      sym__attribut_cursor_offset,
  [130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_spriteType,
    ACTIONS(45), 1,
      anon_sym_cursor_offset,
    STATE(7), 5,
      aux_sym__spriteTypes_content,
      sym__spriteTypes_attribut,
      sym__spriteTypes_type,
      sym__type_spriteType,
      sym__attribut_cursor_offset,
  [150] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(11), 1,
      sym_debug_assign_name,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym__types_spriteTypes,
    STATE(10), 3,
      sym_gfx_types,
      sym_debug_assign,
      aux_sym_dot_gfx_repeat1,
  [171] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_spriteTypes,
    ACTIONS(54), 1,
      sym_debug_assign_name,
    STATE(30), 1,
      sym__types_spriteTypes,
    STATE(10), 3,
      sym_gfx_types,
      sym_debug_assign,
      aux_sym_dot_gfx_repeat1,
  [192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_spriteType,
    ACTIONS(45), 1,
      anon_sym_cursor_offset,
    STATE(8), 5,
      aux_sym__spriteTypes_content,
      sym__spriteTypes_attribut,
      sym__spriteTypes_type,
      sym__type_spriteType,
      sym__attribut_cursor_offset,
  [209] = 4,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      sym_comment,
    STATE(12), 2,
      sym__mod_line_multi_content,
      aux_sym_mod_line_multi_repeat1,
    ACTIONS(59), 3,
      aux_sym__mod_line_multi_content_token1,
      aux_sym__mod_line_multi_content_token2,
      aux_sym__mod_line_multi_content_token3,
  [225] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym__mod_line_multi_content,
      aux_sym_mod_line_multi_repeat1,
    ACTIONS(66), 3,
      aux_sym__mod_line_multi_content_token1,
      aux_sym__mod_line_multi_content_token2,
      aux_sym__mod_line_multi_content_token3,
  [241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_name,
    ACTIONS(73), 1,
      anon_sym_texturefile,
    STATE(14), 3,
      aux_sym__spriteType_content,
      sym__attribut_name,
      sym__attribut_texturefile,
  [259] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_debug_assign_name,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      sym_string,
    ACTIONS(80), 1,
      sym_number,
    STATE(24), 2,
      sym_debug_assign,
      sym_debug_assign_multi,
  [279] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym__mod_line_multi_content,
      aux_sym_mod_line_multi_repeat1,
    ACTIONS(66), 3,
      aux_sym__mod_line_multi_content_token1,
      aux_sym__mod_line_multi_content_token2,
      aux_sym__mod_line_multi_content_token3,
  [295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_name,
    ACTIONS(88), 1,
      anon_sym_texturefile,
    STATE(14), 3,
      aux_sym__spriteType_content,
      sym__attribut_name,
      sym__attribut_texturefile,
  [313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_name,
    ACTIONS(88), 1,
      anon_sym_texturefile,
    STATE(17), 3,
      aux_sym__spriteType_content,
      sym__attribut_name,
      sym__attribut_texturefile,
  [328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      sym_string,
    ACTIONS(94), 1,
      sym_number,
    STATE(21), 1,
      aux_sym_debug_assign_multi_repeat1,
    STATE(29), 1,
      aux_sym_debug_assign_multi_repeat2,
  [347] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(96), 4,
      anon_sym_RBRACE,
      aux_sym__mod_line_multi_content_token1,
      aux_sym__mod_line_multi_content_token2,
      aux_sym__mod_line_multi_content_token3,
  [357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      sym_string,
    STATE(22), 1,
      aux_sym_debug_assign_multi_repeat1,
  [370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      sym_string,
    STATE(22), 1,
      aux_sym_debug_assign_multi_repeat1,
  [383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 2,
      anon_sym_spriteTypes,
      sym_debug_assign_name,
  [403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
  [412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_texturefile,
  [421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 2,
      anon_sym_spriteTypes,
      sym_debug_assign_name,
  [432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_RBRACE,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
  [441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      sym_number,
    STATE(32), 1,
      aux_sym_debug_assign_multi_repeat2,
  [454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 2,
      anon_sym_spriteTypes,
      sym_debug_assign_name,
  [465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 2,
      anon_sym_spriteTypes,
      sym_debug_assign_name,
  [476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      sym_number,
    STATE(32), 1,
      aux_sym_debug_assign_multi_repeat2,
  [489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 2,
      anon_sym_spriteTypes,
      sym_debug_assign_name,
  [500] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym__eol,
  [507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_assign_equal,
  [514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_assign_equal,
  [521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
  [528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
  [535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_assign_equal,
  [542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_string,
  [549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
  [556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
  [563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
  [570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_number,
  [577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_string,
  [584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_assign_equal,
  [591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_assign_equal,
  [598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_assign_equal,
  [605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_number,
  [612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_string,
  [619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_string,
  [626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
  [633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_assign_equal,
  [640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
  [647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_assign_equal,
  [654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_assign_equal,
  [661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_assign_equal,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 225,
  [SMALL_STATE(14)] = 241,
  [SMALL_STATE(15)] = 259,
  [SMALL_STATE(16)] = 279,
  [SMALL_STATE(17)] = 295,
  [SMALL_STATE(18)] = 313,
  [SMALL_STATE(19)] = 328,
  [SMALL_STATE(20)] = 347,
  [SMALL_STATE(21)] = 357,
  [SMALL_STATE(22)] = 370,
  [SMALL_STATE(23)] = 383,
  [SMALL_STATE(24)] = 392,
  [SMALL_STATE(25)] = 403,
  [SMALL_STATE(26)] = 412,
  [SMALL_STATE(27)] = 421,
  [SMALL_STATE(28)] = 432,
  [SMALL_STATE(29)] = 441,
  [SMALL_STATE(30)] = 454,
  [SMALL_STATE(31)] = 465,
  [SMALL_STATE(32)] = 476,
  [SMALL_STATE(33)] = 489,
  [SMALL_STATE(34)] = 500,
  [SMALL_STATE(35)] = 507,
  [SMALL_STATE(36)] = 514,
  [SMALL_STATE(37)] = 521,
  [SMALL_STATE(38)] = 528,
  [SMALL_STATE(39)] = 535,
  [SMALL_STATE(40)] = 542,
  [SMALL_STATE(41)] = 549,
  [SMALL_STATE(42)] = 556,
  [SMALL_STATE(43)] = 563,
  [SMALL_STATE(44)] = 570,
  [SMALL_STATE(45)] = 577,
  [SMALL_STATE(46)] = 584,
  [SMALL_STATE(47)] = 591,
  [SMALL_STATE(48)] = 598,
  [SMALL_STATE(49)] = 605,
  [SMALL_STATE(50)] = 612,
  [SMALL_STATE(51)] = 619,
  [SMALL_STATE(52)] = 626,
  [SMALL_STATE(53)] = 633,
  [SMALL_STATE(54)] = 640,
  [SMALL_STATE(55)] = 647,
  [SMALL_STATE(56)] = 654,
  [SMALL_STATE(57)] = 661,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(55),
  [7] = {.count = 1, .reusable = false}, SHIFT(53),
  [9] = {.count = 1, .reusable = false}, SHIFT(48),
  [11] = {.count = 1, .reusable = false}, SHIFT(35),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(53),
  [17] = {.count = 1, .reusable = true}, SHIFT(48),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(53),
  [24] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(48),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_mod_line_mono, 3),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_mod_line_multi, 5),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_mod_line_multi, 4),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_content, 2),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_content, 2), SHIFT_REPEAT(57),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteTypes_content, 2), SHIFT_REPEAT(56),
  [41] = {.count = 1, .reusable = true}, SHIFT(31),
  [43] = {.count = 1, .reusable = true}, SHIFT(57),
  [45] = {.count = 1, .reusable = true}, SHIFT(56),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(55),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(35),
  [57] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mod_line_multi_repeat1, 2),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mod_line_multi_repeat1, 2), SHIFT_REPEAT(45),
  [62] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [64] = {.count = 1, .reusable = false}, SHIFT(5),
  [66] = {.count = 1, .reusable = false}, SHIFT(45),
  [68] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_content, 2),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_content, 2), SHIFT_REPEAT(46),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spriteType_content, 2), SHIFT_REPEAT(47),
  [76] = {.count = 1, .reusable = true}, SHIFT(19),
  [78] = {.count = 1, .reusable = true}, SHIFT(24),
  [80] = {.count = 1, .reusable = false}, SHIFT(24),
  [82] = {.count = 1, .reusable = false}, SHIFT(6),
  [84] = {.count = 1, .reusable = true}, SHIFT(28),
  [86] = {.count = 1, .reusable = true}, SHIFT(46),
  [88] = {.count = 1, .reusable = true}, SHIFT(47),
  [90] = {.count = 1, .reusable = true}, SHIFT(27),
  [92] = {.count = 1, .reusable = true}, SHIFT(21),
  [94] = {.count = 1, .reusable = true}, SHIFT(29),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym__mod_line_multi_content, 3),
  [98] = {.count = 1, .reusable = true}, SHIFT(33),
  [100] = {.count = 1, .reusable = true}, SHIFT(22),
  [102] = {.count = 1, .reusable = true}, REDUCE(aux_sym_debug_assign_multi_repeat1, 2),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_debug_assign_multi_repeat1, 2), SHIFT_REPEAT(22),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__attribut_cursor_offset, 6),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_debug_assign, 3),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_debug_assign, 3),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__attribut_texturefile, 3),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__attribut_name, 3, .production_id = 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_debug_assign_multi, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_debug_assign_multi, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym__type_spriteType, 5),
  [123] = {.count = 1, .reusable = true}, SHIFT(32),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_gfx_types, 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_gfx_types, 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__types_spriteTypes, 5),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym__types_spriteTypes, 5),
  [133] = {.count = 1, .reusable = true}, REDUCE(aux_sym_debug_assign_multi_repeat2, 2),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_debug_assign_multi_repeat2, 2), SHIFT_REPEAT(32),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_debug_assign_multi, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_debug_assign_multi, 3),
  [142] = {.count = 1, .reusable = true}, SHIFT(20),
  [144] = {.count = 1, .reusable = true}, SHIFT(15),
  [146] = {.count = 1, .reusable = true}, SHIFT(41),
  [148] = {.count = 1, .reusable = true}, SHIFT(18),
  [150] = {.count = 1, .reusable = true}, SHIFT(44),
  [152] = {.count = 1, .reusable = true}, SHIFT(40),
  [154] = {.count = 1, .reusable = true}, SHIFT(4),
  [156] = {.count = 1, .reusable = true}, SHIFT(16),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [160] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [162] = {.count = 1, .reusable = true}, SHIFT(49),
  [164] = {.count = 1, .reusable = true}, SHIFT(34),
  [166] = {.count = 1, .reusable = true}, SHIFT(50),
  [168] = {.count = 1, .reusable = true}, SHIFT(51),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_mod_line_multi_name, 1),
  [172] = {.count = 1, .reusable = true}, SHIFT(54),
  [174] = {.count = 1, .reusable = true}, SHIFT(26),
  [176] = {.count = 1, .reusable = true}, SHIFT(25),
  [178] = {.count = 1, .reusable = true}, SHIFT(11),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_mod_line_mono_name, 1),
  [182] = {.count = 1, .reusable = true}, SHIFT(23),
  [184] = {.count = 1, .reusable = true}, SHIFT(52),
  [186] = {.count = 1, .reusable = true}, SHIFT(38),
  [188] = {.count = 1, .reusable = true}, SHIFT(37),
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
