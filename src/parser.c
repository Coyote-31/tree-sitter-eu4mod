#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 2
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
  sym_debug_name = 24,
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
  sym_debug_loop = 43,
  sym_debug_multi = 44,
  aux_sym_dot_mod_repeat1 = 45,
  aux_sym_mod_line_multi_repeat1 = 46,
  aux_sym_dot_gfx_repeat1 = 47,
  aux_sym_debug_multi_repeat1 = 48,
  aux_sym_debug_multi_repeat2 = 49,
  aux_sym_debug_multi_repeat3 = 50,
  alias_sym_attribut_name = 51,
  alias_sym_gfx_attribut = 52,
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
  [sym_debug_name] = "debug_name",
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
  [sym_debug_loop] = "debug_loop",
  [sym_debug_multi] = "debug_multi",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_mod_line_multi_repeat1] = "mod_line_multi_repeat1",
  [aux_sym_dot_gfx_repeat1] = "dot_gfx_repeat1",
  [aux_sym_debug_multi_repeat1] = "debug_multi_repeat1",
  [aux_sym_debug_multi_repeat2] = "debug_multi_repeat2",
  [aux_sym_debug_multi_repeat3] = "debug_multi_repeat3",
  [alias_sym_attribut_name] = "attribut_name",
  [alias_sym_gfx_attribut] = "gfx_attribut",
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
  [sym_debug_name] = sym_debug_name,
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
  [sym_debug_loop] = sym_debug_loop,
  [sym_debug_multi] = sym_debug_multi,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_mod_line_multi_repeat1] = aux_sym_mod_line_multi_repeat1,
  [aux_sym_dot_gfx_repeat1] = aux_sym_dot_gfx_repeat1,
  [aux_sym_debug_multi_repeat1] = aux_sym_debug_multi_repeat1,
  [aux_sym_debug_multi_repeat2] = aux_sym_debug_multi_repeat2,
  [aux_sym_debug_multi_repeat3] = aux_sym_debug_multi_repeat3,
  [alias_sym_attribut_name] = alias_sym_attribut_name,
  [alias_sym_gfx_attribut] = alias_sym_gfx_attribut,
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
  [sym_debug_name] = {
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
  [aux_sym_mod_line_multi_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dot_gfx_repeat1] = {
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
  [alias_sym_attribut_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gfx_attribut] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_gfx_attribut,
  },
  [2] = {
    [0] = alias_sym_attribut_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'v') ADVANCE(93);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(2)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'v') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 29:
      if (eof) ADVANCE(34);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 30:
      if (eof) ADVANCE(34);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (eof) ADVANCE(34);
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__mod_line_multi_content_token1);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__mod_line_multi_content_token2);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_spriteTypes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (lookahead == 's') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_spriteType);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_texturefile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_cursor_offset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_supported_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_path);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_archive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_picture);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_remote_file_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_dependencies);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_assign_equal);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(19);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'T') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'T') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'T') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == '_') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'c') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'c') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'c') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'd') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'd') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'd') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'f') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'f') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'f') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'f') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'g') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'h') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'h') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'i') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'i') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'i') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'i') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'i') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'i') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'i') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'l') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'm') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'n') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'n') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'o') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'o') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'p') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'p') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'p') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'p') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'p') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'p') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'p') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead == 'u') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'p') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'p') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'r') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 's') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 's') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 's') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'u') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'u') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'u') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'v') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'v') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'x') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'y') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'y') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_debug_name);
      if (lookahead == 'y') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_debug_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 33},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 19},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
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
    [sym_debug_name] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(61),
    [sym_dot_mod] = STATE(60),
    [sym_mod_line_mono] = STATE(2),
    [sym_mod_line_multi] = STATE(2),
    [sym_dot_gfx] = STATE(60),
    [sym_gfx_types] = STATE(17),
    [sym__types_spriteTypes] = STATE(44),
    [sym_mod_line_mono_name] = STATE(71),
    [sym_mod_line_multi_name] = STATE(64),
    [sym_debug_loop] = STATE(17),
    [aux_sym_dot_mod_repeat1] = STATE(2),
    [aux_sym_dot_gfx_repeat1] = STATE(17),
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
    [sym_debug_name] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_mod_line_multi_name,
    STATE(71), 1,
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
    STATE(64), 1,
      sym_mod_line_multi_name,
    STATE(71), 1,
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
  [62] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_spriteType,
    ACTIONS(31), 1,
      anon_sym_cursor_offset,
    ACTIONS(33), 1,
      sym_debug_name,
    STATE(8), 6,
      aux_sym__spriteTypes_content,
      sym__spriteTypes_attribut,
      sym__spriteTypes_type,
      sym__type_spriteType,
      sym__attribut_cursor_offset,
      sym_debug_loop,
  [86] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 10,
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
  [102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 10,
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
  [118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 10,
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
  [134] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_spriteType,
    ACTIONS(46), 1,
      anon_sym_cursor_offset,
    ACTIONS(49), 1,
      sym_debug_name,
    STATE(8), 6,
      aux_sym__spriteTypes_content,
      sym__spriteTypes_attribut,
      sym__spriteTypes_type,
      sym__type_spriteType,
      sym__attribut_cursor_offset,
      sym_debug_loop,
  [158] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_spriteType,
    ACTIONS(31), 1,
      anon_sym_cursor_offset,
    ACTIONS(33), 1,
      sym_debug_name,
    STATE(4), 6,
      aux_sym__spriteTypes_content,
      sym__spriteTypes_attribut,
      sym__spriteTypes_type,
      sym__type_spriteType,
      sym__attribut_cursor_offset,
      sym_debug_loop,
  [179] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_name,
    ACTIONS(57), 1,
      anon_sym_texturefile,
    ACTIONS(60), 1,
      sym_debug_name,
    STATE(34), 1,
      sym_debug_loop,
    STATE(10), 3,
      aux_sym__spriteType_content,
      sym__attribut_name,
      sym__attribut_texturefile,
  [203] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_name,
    ACTIONS(67), 1,
      anon_sym_texturefile,
    ACTIONS(69), 1,
      sym_debug_name,
    STATE(34), 1,
      sym_debug_loop,
    STATE(10), 3,
      aux_sym__spriteType_content,
      sym__attribut_name,
      sym__attribut_texturefile,
  [227] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_string,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(75), 1,
      sym_debug_name,
    STATE(47), 1,
      aux_sym_debug_multi_repeat2,
    STATE(54), 1,
      aux_sym_debug_multi_repeat1,
    STATE(35), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [250] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_debug_name,
    ACTIONS(77), 1,
      sym_string,
    ACTIONS(79), 1,
      sym_number,
    STATE(41), 1,
      aux_sym_debug_multi_repeat2,
    STATE(50), 1,
      aux_sym_debug_multi_repeat1,
    STATE(29), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [273] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_debug_name,
    ACTIONS(81), 1,
      sym_string,
    ACTIONS(83), 1,
      sym_number,
    STATE(42), 1,
      aux_sym_debug_multi_repeat2,
    STATE(43), 1,
      aux_sym_debug_multi_repeat1,
    STATE(37), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_name,
    ACTIONS(67), 1,
      anon_sym_texturefile,
    ACTIONS(69), 1,
      sym_debug_name,
    STATE(34), 1,
      sym_debug_loop,
    STATE(11), 3,
      aux_sym__spriteType_content,
      sym__attribut_name,
      sym__attribut_texturefile,
  [317] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_debug_name,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(87), 1,
      sym_number,
    STATE(51), 1,
      aux_sym_debug_multi_repeat2,
    STATE(52), 1,
      aux_sym_debug_multi_repeat1,
    STATE(33), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_spriteTypes,
    ACTIONS(11), 1,
      sym_debug_name,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym__types_spriteTypes,
    STATE(18), 3,
      sym_gfx_types,
      sym_debug_loop,
      aux_sym_dot_gfx_repeat1,
  [361] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_spriteTypes,
    ACTIONS(96), 1,
      sym_debug_name,
    STATE(44), 1,
      sym__types_spriteTypes,
    STATE(18), 3,
      sym_gfx_types,
      sym_debug_loop,
      aux_sym_dot_gfx_repeat1,
  [382] = 4,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      sym_comment,
    STATE(19), 2,
      sym__mod_line_multi_content,
      aux_sym_mod_line_multi_repeat1,
    ACTIONS(101), 3,
      aux_sym__mod_line_multi_content_token1,
      aux_sym__mod_line_multi_content_token2,
      aux_sym__mod_line_multi_content_token3,
  [398] = 4,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym__mod_line_multi_content,
      aux_sym_mod_line_multi_repeat1,
    ACTIONS(108), 3,
      aux_sym__mod_line_multi_content_token1,
      aux_sym__mod_line_multi_content_token2,
      aux_sym__mod_line_multi_content_token3,
  [414] = 4,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym__mod_line_multi_content,
      aux_sym_mod_line_multi_repeat1,
    ACTIONS(108), 3,
      aux_sym__mod_line_multi_content_token1,
      aux_sym__mod_line_multi_content_token2,
      aux_sym__mod_line_multi_content_token3,
  [430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      sym_string,
    STATE(56), 1,
      sym_debug_multi,
    ACTIONS(116), 2,
      sym_number,
      sym_debug_name,
  [447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      sym_string,
    STATE(53), 1,
      sym_debug_multi,
    ACTIONS(122), 2,
      sym_number,
      sym_debug_name,
  [464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      sym_string,
    STATE(38), 1,
      sym_debug_multi,
    ACTIONS(128), 2,
      sym_number,
      sym_debug_name,
  [481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      sym_string,
    STATE(27), 1,
      sym_debug_multi,
    ACTIONS(134), 2,
      sym_number,
      sym_debug_name,
  [498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_debug_name,
  [510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_debug_name,
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_debug_name,
  [534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 1,
      sym_debug_name,
    STATE(40), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_debug_name,
  [560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_debug_name,
  [572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 3,
      anon_sym_spriteType,
      anon_sym_cursor_offset,
      sym_debug_name,
  [584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_debug_name,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_debug_name,
  [610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_debug_name,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [624] = 2,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(172), 4,
      anon_sym_RBRACE,
      aux_sym__mod_line_multi_content_token1,
      aux_sym__mod_line_multi_content_token2,
      aux_sym__mod_line_multi_content_token3,
  [634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_debug_name,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_debug_name,
  [660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 3,
      anon_sym_name,
      anon_sym_texturefile,
      sym_debug_name,
  [672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      sym_debug_name,
    STATE(40), 2,
      sym_debug_loop,
      aux_sym_debug_multi_repeat3,
  [686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      sym_number,
    STATE(45), 1,
      aux_sym_debug_multi_repeat2,
  [699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      sym_number,
    STATE(45), 1,
      aux_sym_debug_multi_repeat2,
  [712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_debug_multi_repeat1,
  [725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 2,
      anon_sym_spriteTypes,
      sym_debug_name,
  [736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(191), 1,
      sym_number,
    STATE(45), 1,
      aux_sym_debug_multi_repeat2,
  [749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_debug_multi_repeat1,
  [762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      sym_number,
    STATE(45), 1,
      aux_sym_debug_multi_repeat2,
  [775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 2,
      anon_sym_spriteTypes,
      sym_debug_name,
  [786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 2,
      anon_sym_spriteTypes,
      sym_debug_name,
  [797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_debug_multi_repeat1,
  [810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      sym_number,
    STATE(45), 1,
      aux_sym_debug_multi_repeat2,
  [823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_debug_multi_repeat1,
  [836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 2,
      anon_sym_spriteTypes,
      sym_debug_name,
  [847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_debug_multi_repeat1,
  [860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_RBRACE,
      sym_debug_name,
  [868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_RBRACE,
      sym_debug_name,
  [876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
  [883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_string,
  [890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_string,
  [897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
  [918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_number,
  [925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_assign_equal,
  [932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_assign_equal,
  [939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_assign_equal,
  [946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_number,
  [953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_assign_equal,
  [960] = 2,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__eol,
  [967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_assign_equal,
  [981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_string,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_assign_equal,
  [995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_assign_equal,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
  [1009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_string,
  [1016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
  [1023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_assign_equal,
  [1030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_assign_equal,
  [1037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_assign_equal,
  [1044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_assign_equal,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_assign_equal,
  [1058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_assign_equal,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 86,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 179,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 227,
  [SMALL_STATE(13)] = 250,
  [SMALL_STATE(14)] = 273,
  [SMALL_STATE(15)] = 296,
  [SMALL_STATE(16)] = 317,
  [SMALL_STATE(17)] = 340,
  [SMALL_STATE(18)] = 361,
  [SMALL_STATE(19)] = 382,
  [SMALL_STATE(20)] = 398,
  [SMALL_STATE(21)] = 414,
  [SMALL_STATE(22)] = 430,
  [SMALL_STATE(23)] = 447,
  [SMALL_STATE(24)] = 464,
  [SMALL_STATE(25)] = 481,
  [SMALL_STATE(26)] = 498,
  [SMALL_STATE(27)] = 510,
  [SMALL_STATE(28)] = 522,
  [SMALL_STATE(29)] = 534,
  [SMALL_STATE(30)] = 548,
  [SMALL_STATE(31)] = 560,
  [SMALL_STATE(32)] = 572,
  [SMALL_STATE(33)] = 584,
  [SMALL_STATE(34)] = 598,
  [SMALL_STATE(35)] = 610,
  [SMALL_STATE(36)] = 624,
  [SMALL_STATE(37)] = 634,
  [SMALL_STATE(38)] = 648,
  [SMALL_STATE(39)] = 660,
  [SMALL_STATE(40)] = 672,
  [SMALL_STATE(41)] = 686,
  [SMALL_STATE(42)] = 699,
  [SMALL_STATE(43)] = 712,
  [SMALL_STATE(44)] = 725,
  [SMALL_STATE(45)] = 736,
  [SMALL_STATE(46)] = 749,
  [SMALL_STATE(47)] = 762,
  [SMALL_STATE(48)] = 775,
  [SMALL_STATE(49)] = 786,
  [SMALL_STATE(50)] = 797,
  [SMALL_STATE(51)] = 810,
  [SMALL_STATE(52)] = 823,
  [SMALL_STATE(53)] = 836,
  [SMALL_STATE(54)] = 847,
  [SMALL_STATE(55)] = 860,
  [SMALL_STATE(56)] = 868,
  [SMALL_STATE(57)] = 876,
  [SMALL_STATE(58)] = 883,
  [SMALL_STATE(59)] = 890,
  [SMALL_STATE(60)] = 897,
  [SMALL_STATE(61)] = 904,
  [SMALL_STATE(62)] = 911,
  [SMALL_STATE(63)] = 918,
  [SMALL_STATE(64)] = 925,
  [SMALL_STATE(65)] = 932,
  [SMALL_STATE(66)] = 939,
  [SMALL_STATE(67)] = 946,
  [SMALL_STATE(68)] = 953,
  [SMALL_STATE(69)] = 960,
  [SMALL_STATE(70)] = 967,
  [SMALL_STATE(71)] = 974,
  [SMALL_STATE(72)] = 981,
  [SMALL_STATE(73)] = 988,
  [SMALL_STATE(74)] = 995,
  [SMALL_STATE(75)] = 1002,
  [SMALL_STATE(76)] = 1009,
  [SMALL_STATE(77)] = 1016,
  [SMALL_STATE(78)] = 1023,
  [SMALL_STATE(79)] = 1030,
  [SMALL_STATE(80)] = 1037,
  [SMALL_STATE(81)] = 1044,
  [SMALL_STATE(82)] = 1051,
  [SMALL_STATE(83)] = 1058,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(68),
  [7] = {.count = 1, .reusable = false}, SHIFT(83),
  [9] = {.count = 1, .reusable = false}, SHIFT(81),
  [11] = {.count = 1, .reusable = false}, SHIFT(79),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(83),
  [17] = {.count = 1, .reusable = true}, SHIFT(81),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(83),
  [24] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(81),
  [27] = {.count = 1, .reusable = true}, SHIFT(49),
  [29] = {.count = 1, .reusable = false}, SHIFT(74),
  [31] = {.count = 1, .reusable = false}, SHIFT(73),
  [33] = {.count = 1, .reusable = false}, SHIFT(78),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_mod_line_mono, 3),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_mod_line_multi, 4),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_mod_line_multi, 5),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteTypes_content, 2),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteTypes_content, 2), SHIFT_REPEAT(74),
  [46] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteTypes_content, 2), SHIFT_REPEAT(73),
  [49] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteTypes_content, 2), SHIFT_REPEAT(78),
  [52] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_content, 2),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteType_content, 2), SHIFT_REPEAT(66),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteType_content, 2), SHIFT_REPEAT(65),
  [60] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spriteType_content, 2), SHIFT_REPEAT(82),
  [63] = {.count = 1, .reusable = true}, SHIFT(32),
  [65] = {.count = 1, .reusable = false}, SHIFT(66),
  [67] = {.count = 1, .reusable = false}, SHIFT(65),
  [69] = {.count = 1, .reusable = false}, SHIFT(82),
  [71] = {.count = 1, .reusable = true}, SHIFT(54),
  [73] = {.count = 1, .reusable = false}, SHIFT(47),
  [75] = {.count = 1, .reusable = false}, SHIFT(80),
  [77] = {.count = 1, .reusable = true}, SHIFT(50),
  [79] = {.count = 1, .reusable = false}, SHIFT(41),
  [81] = {.count = 1, .reusable = true}, SHIFT(43),
  [83] = {.count = 1, .reusable = false}, SHIFT(42),
  [85] = {.count = 1, .reusable = true}, SHIFT(52),
  [87] = {.count = 1, .reusable = false}, SHIFT(51),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_dot_gfx, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_gfx_repeat1, 2),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(68),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dot_gfx_repeat1, 2), SHIFT_REPEAT(79),
  [99] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mod_line_multi_repeat1, 2),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mod_line_multi_repeat1, 2), SHIFT_REPEAT(72),
  [104] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [106] = {.count = 1, .reusable = false}, SHIFT(6),
  [108] = {.count = 1, .reusable = false}, SHIFT(72),
  [110] = {.count = 1, .reusable = false}, SHIFT(7),
  [112] = {.count = 1, .reusable = true}, SHIFT(13),
  [114] = {.count = 1, .reusable = true}, SHIFT(56),
  [116] = {.count = 1, .reusable = false}, SHIFT(56),
  [118] = {.count = 1, .reusable = true}, SHIFT(16),
  [120] = {.count = 1, .reusable = true}, SHIFT(53),
  [122] = {.count = 1, .reusable = false}, SHIFT(53),
  [124] = {.count = 1, .reusable = true}, SHIFT(12),
  [126] = {.count = 1, .reusable = true}, SHIFT(38),
  [128] = {.count = 1, .reusable = false}, SHIFT(38),
  [130] = {.count = 1, .reusable = true}, SHIFT(14),
  [132] = {.count = 1, .reusable = true}, SHIFT(27),
  [134] = {.count = 1, .reusable = false}, SHIFT(27),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_debug_multi, 3),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_debug_multi, 3),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_debug_loop, 3),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_debug_loop, 3),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym__attribut_cursor_offset, 6),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym__attribut_cursor_offset, 6),
  [148] = {.count = 1, .reusable = true}, SHIFT(55),
  [150] = {.count = 1, .reusable = true}, SHIFT(80),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym__attribut_texturefile, 3),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym__attribut_texturefile, 3),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym__attribut_name, 3, .production_id = 2),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym__attribut_name, 3, .production_id = 2),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym__type_spriteType, 5),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym__type_spriteType, 5),
  [164] = {.count = 1, .reusable = true}, SHIFT(48),
  [166] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spriteType_content, 1, .production_id = 1),
  [168] = {.count = 1, .reusable = false}, REDUCE(aux_sym__spriteType_content, 1, .production_id = 1),
  [170] = {.count = 1, .reusable = true}, SHIFT(39),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym__mod_line_multi_content, 3),
  [174] = {.count = 1, .reusable = true}, SHIFT(26),
  [176] = {.count = 1, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat3, 2),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat3, 2), SHIFT_REPEAT(80),
  [181] = {.count = 1, .reusable = true}, SHIFT(45),
  [183] = {.count = 1, .reusable = true}, SHIFT(46),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_gfx_types, 1),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_gfx_types, 1),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat2, 2),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat2, 2), SHIFT_REPEAT(45),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat1, 2),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_debug_multi_repeat1, 2), SHIFT_REPEAT(46),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym__types_spriteTypes, 5),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym__types_spriteTypes, 5),
  [203] = {.count = 1, .reusable = true}, SHIFT(15),
  [205] = {.count = 1, .reusable = true}, SHIFT(31),
  [207] = {.count = 1, .reusable = true}, SHIFT(30),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [211] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [213] = {.count = 1, .reusable = true}, SHIFT(28),
  [215] = {.count = 1, .reusable = true}, SHIFT(62),
  [217] = {.count = 1, .reusable = true}, SHIFT(75),
  [219] = {.count = 1, .reusable = true}, SHIFT(59),
  [221] = {.count = 1, .reusable = true}, SHIFT(58),
  [223] = {.count = 1, .reusable = true}, SHIFT(63),
  [225] = {.count = 1, .reusable = true}, SHIFT(77),
  [227] = {.count = 1, .reusable = true}, SHIFT(36),
  [229] = {.count = 1, .reusable = true}, SHIFT(67),
  [231] = {.count = 1, .reusable = true}, SHIFT(76),
  [233] = {.count = 1, .reusable = true}, SHIFT(69),
  [235] = {.count = 1, .reusable = true}, SHIFT(70),
  [237] = {.count = 1, .reusable = true}, SHIFT(57),
  [239] = {.count = 1, .reusable = true}, SHIFT(20),
  [241] = {.count = 1, .reusable = true}, SHIFT(5),
  [243] = {.count = 1, .reusable = true}, SHIFT(9),
  [245] = {.count = 1, .reusable = true}, SHIFT(25),
  [247] = {.count = 1, .reusable = true}, SHIFT(23),
  [249] = {.count = 1, .reusable = true}, SHIFT(22),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_mod_line_multi_name, 1),
  [253] = {.count = 1, .reusable = true}, SHIFT(24),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_mod_line_mono_name, 1),
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
