#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  aux_sym_mod_multi_line_content_token1 = 3,
  sym_mod_var_name = 4,
  sym_mod_var_name_multi = 5,
  sym_mod_equal = 6,
  sym_mod_var_value = 7,
  sym__carriage_return = 8,
  sym_warning_space_tab = 9,
  sym_file = 10,
  sym_dot_mod = 11,
  sym_mod_mono_line = 12,
  sym_mod_multi_line = 13,
  sym_mod_multi_line_content = 14,
  aux_sym_dot_mod_repeat1 = 15,
  aux_sym_dot_mod_repeat2 = 16,
  aux_sym_mod_mono_line_repeat1 = 17,
  aux_sym_mod_multi_line_repeat1 = 18,
  aux_sym_mod_multi_line_content_repeat1 = 19,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_mod_multi_line_content_token1] = "mod_multi_line_content_token1",
  [sym_mod_var_name] = "mod_var_name",
  [sym_mod_var_name_multi] = "mod_var_name_multi",
  [sym_mod_equal] = "mod_equal",
  [sym_mod_var_value] = "mod_var_value",
  [sym__carriage_return] = "_carriage_return",
  [sym_warning_space_tab] = "warning_space_tab",
  [sym_file] = "file",
  [sym_dot_mod] = "dot_mod",
  [sym_mod_mono_line] = "mod_mono_line",
  [sym_mod_multi_line] = "mod_multi_line",
  [sym_mod_multi_line_content] = "mod_multi_line_content",
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_dot_mod_repeat2] = "dot_mod_repeat2",
  [aux_sym_mod_mono_line_repeat1] = "mod_mono_line_repeat1",
  [aux_sym_mod_multi_line_repeat1] = "mod_multi_line_repeat1",
  [aux_sym_mod_multi_line_content_repeat1] = "mod_multi_line_content_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_mod_multi_line_content_token1] = aux_sym_mod_multi_line_content_token1,
  [sym_mod_var_name] = sym_mod_var_name,
  [sym_mod_var_name_multi] = sym_mod_var_name_multi,
  [sym_mod_equal] = sym_mod_equal,
  [sym_mod_var_value] = sym_mod_var_value,
  [sym__carriage_return] = sym__carriage_return,
  [sym_warning_space_tab] = sym_warning_space_tab,
  [sym_file] = sym_file,
  [sym_dot_mod] = sym_dot_mod,
  [sym_mod_mono_line] = sym_mod_mono_line,
  [sym_mod_multi_line] = sym_mod_multi_line,
  [sym_mod_multi_line_content] = sym_mod_multi_line_content,
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_dot_mod_repeat2] = aux_sym_dot_mod_repeat2,
  [aux_sym_mod_mono_line_repeat1] = aux_sym_mod_mono_line_repeat1,
  [aux_sym_mod_multi_line_repeat1] = aux_sym_mod_multi_line_repeat1,
  [aux_sym_mod_multi_line_content_repeat1] = aux_sym_mod_multi_line_content_repeat1,
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
  [aux_sym_mod_multi_line_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_mod_var_name] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_var_name_multi] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_var_value] = {
    .visible = true,
    .named = true,
  },
  [sym__carriage_return] = {
    .visible = false,
    .named = true,
  },
  [sym_warning_space_tab] = {
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
  [sym_mod_mono_line] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_multi_line] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_multi_line_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dot_mod_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dot_mod_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_mono_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_multi_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_multi_line_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(69)
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '}') ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '}') ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '}') ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '}') ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '}') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 67:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 68:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 69:
      if (eof) ADVANCE(72);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(69)
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == '}') ADVANCE(74);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(71)
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_mod_multi_line_content_token1);
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_mod_multi_line_content_token1);
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_mod_multi_line_content_token1);
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_mod_multi_line_content_token1);
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_mod_var_name);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_mod_var_name_multi);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_mod_equal);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_mod_var_value);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__carriage_return);
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__carriage_return);
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__carriage_return);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_warning_space_tab);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_warning_space_tab);
      if (lookahead == '\t') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_warning_space_tab);
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 70},
  [3] = {.lex_state = 70},
  [4] = {.lex_state = 70},
  [5] = {.lex_state = 70},
  [6] = {.lex_state = 70},
  [7] = {.lex_state = 70},
  [8] = {.lex_state = 70},
  [9] = {.lex_state = 70},
  [10] = {.lex_state = 70},
  [11] = {.lex_state = 70},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 70},
  [14] = {.lex_state = 70},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 70},
  [17] = {.lex_state = 70},
  [18] = {.lex_state = 70},
  [19] = {.lex_state = 70},
  [20] = {.lex_state = 70},
  [21] = {.lex_state = 70},
  [22] = {.lex_state = 70},
  [23] = {.lex_state = 70},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 70},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 70},
  [29] = {.lex_state = 71},
  [30] = {.lex_state = 71},
  [31] = {.lex_state = 71},
  [32] = {.lex_state = 71},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 70},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 70},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 71},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 71},
  [62] = {.lex_state = 71},
  [63] = {.lex_state = 71},
  [64] = {.lex_state = 71},
  [65] = {.lex_state = 71},
  [66] = {.lex_state = 71},
  [67] = {.lex_state = 71},
  [68] = {.lex_state = 71},
  [69] = {.lex_state = 71},
  [70] = {.lex_state = 71},
  [71] = {.lex_state = 71},
  [72] = {.lex_state = 71},
  [73] = {.lex_state = 71},
  [74] = {.lex_state = 71},
  [75] = {.lex_state = 71},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 71},
  [79] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_mod_var_name] = ACTIONS(1),
    [sym_mod_var_name_multi] = ACTIONS(1),
    [sym_mod_equal] = ACTIONS(1),
    [sym_mod_var_value] = ACTIONS(1),
    [sym_warning_space_tab] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(76),
    [sym_dot_mod] = STATE(79),
    [sym_mod_mono_line] = STATE(32),
    [sym_mod_multi_line] = STATE(32),
    [aux_sym_dot_mod_repeat1] = STATE(8),
    [aux_sym_mod_mono_line_repeat1] = STATE(38),
    [sym_mod_var_name] = ACTIONS(3),
    [sym_mod_var_name_multi] = ACTIONS(5),
    [sym__carriage_return] = ACTIONS(7),
    [sym_warning_space_tab] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym__carriage_return,
    STATE(17), 1,
      aux_sym_dot_mod_repeat1,
    STATE(38), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(63), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [26] = 8,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(13), 1,
      sym__carriage_return,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_dot_mod_repeat1,
    STATE(38), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(63), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [52] = 8,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(13), 1,
      sym__carriage_return,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_dot_mod_repeat1,
    STATE(38), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(63), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [78] = 7,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(13), 1,
      sym__carriage_return,
    STATE(17), 1,
      aux_sym_dot_mod_repeat1,
    STATE(38), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(63), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [101] = 7,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_mod_var_value,
    ACTIONS(23), 1,
      sym__carriage_return,
    ACTIONS(25), 1,
      sym_warning_space_tab,
    STATE(33), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(73), 1,
      aux_sym_mod_multi_line_content_repeat1,
    STATE(7), 2,
      sym_mod_multi_line_content,
      aux_sym_mod_multi_line_repeat1,
  [124] = 7,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      sym_mod_var_value,
    ACTIONS(32), 1,
      sym__carriage_return,
    ACTIONS(35), 1,
      sym_warning_space_tab,
    STATE(56), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(73), 1,
      aux_sym_mod_multi_line_content_repeat1,
    STATE(7), 2,
      sym_mod_multi_line_content,
      aux_sym_mod_multi_line_repeat1,
  [147] = 7,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(13), 1,
      sym__carriage_return,
    STATE(17), 1,
      aux_sym_dot_mod_repeat1,
    STATE(38), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(30), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [170] = 7,
    ACTIONS(21), 1,
      sym_mod_var_value,
    ACTIONS(23), 1,
      sym__carriage_return,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      sym_warning_space_tab,
    STATE(35), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(73), 1,
      aux_sym_mod_multi_line_content_repeat1,
    STATE(7), 2,
      sym_mod_multi_line_content,
      aux_sym_mod_multi_line_repeat1,
  [193] = 7,
    ACTIONS(21), 1,
      sym_mod_var_value,
    ACTIONS(23), 1,
      sym__carriage_return,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      sym_warning_space_tab,
    STATE(36), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(73), 1,
      aux_sym_mod_multi_line_content_repeat1,
    STATE(7), 2,
      sym_mod_multi_line_content,
      aux_sym_mod_multi_line_repeat1,
  [216] = 7,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_mod_var_value,
    ACTIONS(23), 1,
      sym__carriage_return,
    ACTIONS(25), 1,
      sym_warning_space_tab,
    STATE(33), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(73), 1,
      aux_sym_mod_multi_line_content_repeat1,
    STATE(9), 2,
      sym_mod_multi_line_content,
      aux_sym_mod_multi_line_repeat1,
  [239] = 7,
    ACTIONS(21), 1,
      sym_mod_var_value,
    ACTIONS(23), 1,
      sym__carriage_return,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      sym_warning_space_tab,
    STATE(35), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(73), 1,
      aux_sym_mod_multi_line_content_repeat1,
    STATE(16), 2,
      sym_mod_multi_line_content,
      aux_sym_mod_multi_line_repeat1,
  [262] = 7,
    ACTIONS(21), 1,
      sym_mod_var_value,
    ACTIONS(23), 1,
      sym__carriage_return,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      sym_warning_space_tab,
    STATE(40), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(73), 1,
      aux_sym_mod_multi_line_content_repeat1,
    STATE(10), 2,
      sym_mod_multi_line_content,
      aux_sym_mod_multi_line_repeat1,
  [285] = 7,
    ACTIONS(21), 1,
      sym_mod_var_value,
    ACTIONS(23), 1,
      sym__carriage_return,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      sym_warning_space_tab,
    STATE(39), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(73), 1,
      aux_sym_mod_multi_line_content_repeat1,
    STATE(6), 2,
      sym_mod_multi_line_content,
      aux_sym_mod_multi_line_repeat1,
  [308] = 4,
    ACTIONS(58), 1,
      sym_warning_space_tab,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
    ACTIONS(54), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(56), 4,
      sym_mod_var_name,
      sym_mod_var_name_multi,
      sym_mod_equal,
      sym_mod_var_value,
  [325] = 7,
    ACTIONS(21), 1,
      sym_mod_var_value,
    ACTIONS(23), 1,
      sym__carriage_return,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      sym_warning_space_tab,
    STATE(40), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(73), 1,
      aux_sym_mod_multi_line_content_repeat1,
    STATE(7), 2,
      sym_mod_multi_line_content,
      aux_sym_mod_multi_line_repeat1,
  [348] = 4,
    ACTIONS(63), 1,
      sym__carriage_return,
    ACTIONS(66), 1,
      sym_warning_space_tab,
    STATE(17), 1,
      aux_sym_dot_mod_repeat1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [363] = 5,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym_mod_equal,
    ACTIONS(72), 1,
      sym__carriage_return,
    ACTIONS(74), 1,
      sym_warning_space_tab,
    STATE(23), 1,
      aux_sym_mod_mono_line_repeat1,
  [379] = 5,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym_mod_equal,
    ACTIONS(80), 1,
      sym__carriage_return,
    ACTIONS(82), 1,
      sym_warning_space_tab,
    STATE(28), 1,
      aux_sym_mod_mono_line_repeat1,
  [395] = 5,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym_mod_equal,
    ACTIONS(72), 1,
      sym__carriage_return,
    ACTIONS(84), 1,
      sym_warning_space_tab,
    STATE(19), 1,
      aux_sym_mod_mono_line_repeat1,
  [411] = 5,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym_mod_equal,
    ACTIONS(90), 1,
      sym__carriage_return,
    ACTIONS(92), 1,
      sym_warning_space_tab,
    STATE(55), 1,
      aux_sym_mod_mono_line_repeat1,
  [427] = 5,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      sym_mod_equal,
    ACTIONS(98), 1,
      sym__carriage_return,
    ACTIONS(100), 1,
      sym_warning_space_tab,
    STATE(46), 1,
      aux_sym_mod_mono_line_repeat1,
  [443] = 5,
    ACTIONS(54), 1,
      sym__carriage_return,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym_mod_equal,
    ACTIONS(102), 1,
      sym_warning_space_tab,
    STATE(25), 1,
      aux_sym_mod_mono_line_repeat1,
  [459] = 5,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym_mod_equal,
    ACTIONS(109), 1,
      sym__carriage_return,
    ACTIONS(111), 1,
      sym_warning_space_tab,
    STATE(18), 1,
      aux_sym_mod_mono_line_repeat1,
  [475] = 4,
    ACTIONS(54), 1,
      sym__carriage_return,
    ACTIONS(102), 1,
      sym_warning_space_tab,
    STATE(25), 1,
      aux_sym_mod_mono_line_repeat1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym_mod_equal,
  [489] = 3,
    ACTIONS(115), 1,
      aux_sym_mod_multi_line_content_token1,
    ACTIONS(117), 1,
      sym_mod_var_value,
    ACTIONS(113), 3,
      anon_sym_RBRACE,
      sym__carriage_return,
      sym_warning_space_tab,
  [501] = 3,
    ACTIONS(115), 1,
      aux_sym_mod_multi_line_content_token1,
    ACTIONS(121), 1,
      sym_mod_var_value,
    ACTIONS(119), 3,
      anon_sym_RBRACE,
      sym__carriage_return,
      sym_warning_space_tab,
  [513] = 5,
    ACTIONS(54), 1,
      sym__carriage_return,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym_warning_space_tab,
    ACTIONS(123), 1,
      sym_mod_equal,
    STATE(25), 1,
      aux_sym_mod_mono_line_repeat1,
  [529] = 4,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      sym__carriage_return,
    STATE(5), 1,
      aux_sym_dot_mod_repeat1,
    STATE(29), 1,
      aux_sym_dot_mod_repeat2,
  [542] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      sym__carriage_return,
    STATE(3), 1,
      aux_sym_dot_mod_repeat1,
    STATE(31), 1,
      aux_sym_dot_mod_repeat2,
  [555] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      sym__carriage_return,
    STATE(2), 1,
      aux_sym_dot_mod_repeat1,
    STATE(29), 1,
      aux_sym_dot_mod_repeat2,
  [568] = 4,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      sym__carriage_return,
    STATE(4), 1,
      aux_sym_dot_mod_repeat1,
    STATE(41), 1,
      aux_sym_dot_mod_repeat2,
  [581] = 4,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      sym_mod_var_value,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [594] = 2,
    ACTIONS(121), 1,
      sym_mod_var_value,
    ACTIONS(119), 3,
      anon_sym_RBRACE,
      sym__carriage_return,
      sym_warning_space_tab,
  [603] = 4,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      sym_mod_var_value,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [616] = 4,
    ACTIONS(138), 1,
      sym_mod_var_value,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [629] = 2,
    ACTIONS(117), 1,
      sym_mod_var_value,
    ACTIONS(113), 3,
      anon_sym_RBRACE,
      sym__carriage_return,
      sym_warning_space_tab,
  [638] = 4,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    ACTIONS(144), 1,
      sym_mod_var_name,
    ACTIONS(146), 1,
      sym_mod_var_name_multi,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [651] = 4,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      sym_mod_var_value,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [664] = 4,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      sym_mod_var_value,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [677] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      sym__carriage_return,
    STATE(3), 1,
      aux_sym_dot_mod_repeat1,
    STATE(29), 1,
      aux_sym_dot_mod_repeat2,
  [690] = 3,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    ACTIONS(148), 1,
      sym_mod_var_value,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [700] = 3,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [710] = 3,
    ACTIONS(152), 1,
      sym_mod_var_value,
    ACTIONS(154), 1,
      sym_warning_space_tab,
    STATE(42), 1,
      aux_sym_mod_mono_line_repeat1,
  [720] = 3,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      sym_warning_space_tab,
    STATE(54), 1,
      aux_sym_mod_mono_line_repeat1,
  [730] = 3,
    ACTIONS(88), 1,
      sym_mod_equal,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [740] = 3,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      sym_warning_space_tab,
    STATE(60), 1,
      aux_sym_mod_mono_line_repeat1,
  [750] = 3,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    ACTIONS(162), 1,
      sym_mod_var_value,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [760] = 3,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    ACTIONS(164), 1,
      sym_mod_var_value,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [770] = 3,
    ACTIONS(166), 1,
      sym_mod_var_value,
    ACTIONS(168), 1,
      sym_warning_space_tab,
    STATE(57), 1,
      aux_sym_mod_mono_line_repeat1,
  [780] = 3,
    ACTIONS(148), 1,
      sym_mod_var_value,
    ACTIONS(170), 1,
      sym_warning_space_tab,
    STATE(53), 1,
      aux_sym_mod_mono_line_repeat1,
  [790] = 3,
    ACTIONS(172), 1,
      sym_mod_var_value,
    ACTIONS(174), 1,
      sym_warning_space_tab,
    STATE(49), 1,
      aux_sym_mod_mono_line_repeat1,
  [800] = 3,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    ACTIONS(172), 1,
      sym_mod_var_value,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [810] = 3,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [820] = 3,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    ACTIONS(178), 1,
      sym_mod_equal,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [830] = 3,
    ACTIONS(138), 1,
      sym_mod_var_value,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [840] = 3,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    ACTIONS(180), 1,
      sym_mod_var_value,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [850] = 3,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      sym_warning_space_tab,
    STATE(43), 1,
      aux_sym_mod_mono_line_repeat1,
  [860] = 3,
    ACTIONS(164), 1,
      sym_mod_var_value,
    ACTIONS(184), 1,
      sym_warning_space_tab,
    STATE(48), 1,
      aux_sym_mod_mono_line_repeat1,
  [870] = 3,
    ACTIONS(140), 1,
      sym_warning_space_tab,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      aux_sym_mod_mono_line_repeat1,
  [880] = 1,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [885] = 1,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [890] = 1,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [895] = 2,
    ACTIONS(192), 1,
      sym__carriage_return,
    STATE(64), 1,
      aux_sym_mod_multi_line_content_repeat1,
  [902] = 1,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [907] = 1,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [912] = 1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [917] = 1,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [922] = 1,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [927] = 1,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [932] = 1,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [937] = 1,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [942] = 2,
    ACTIONS(209), 1,
      sym__carriage_return,
    STATE(64), 1,
      aux_sym_mod_multi_line_content_repeat1,
  [949] = 1,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [954] = 1,
    ACTIONS(213), 1,
      sym__carriage_return,
  [958] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [962] = 1,
    ACTIONS(217), 1,
      aux_sym_mod_multi_line_content_token1,
  [966] = 1,
    ACTIONS(219), 1,
      sym__carriage_return,
  [970] = 1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 124,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 170,
  [SMALL_STATE(10)] = 193,
  [SMALL_STATE(11)] = 216,
  [SMALL_STATE(12)] = 239,
  [SMALL_STATE(13)] = 262,
  [SMALL_STATE(14)] = 285,
  [SMALL_STATE(15)] = 308,
  [SMALL_STATE(16)] = 325,
  [SMALL_STATE(17)] = 348,
  [SMALL_STATE(18)] = 363,
  [SMALL_STATE(19)] = 379,
  [SMALL_STATE(20)] = 395,
  [SMALL_STATE(21)] = 411,
  [SMALL_STATE(22)] = 427,
  [SMALL_STATE(23)] = 443,
  [SMALL_STATE(24)] = 459,
  [SMALL_STATE(25)] = 475,
  [SMALL_STATE(26)] = 489,
  [SMALL_STATE(27)] = 501,
  [SMALL_STATE(28)] = 513,
  [SMALL_STATE(29)] = 529,
  [SMALL_STATE(30)] = 542,
  [SMALL_STATE(31)] = 555,
  [SMALL_STATE(32)] = 568,
  [SMALL_STATE(33)] = 581,
  [SMALL_STATE(34)] = 594,
  [SMALL_STATE(35)] = 603,
  [SMALL_STATE(36)] = 616,
  [SMALL_STATE(37)] = 629,
  [SMALL_STATE(38)] = 638,
  [SMALL_STATE(39)] = 651,
  [SMALL_STATE(40)] = 664,
  [SMALL_STATE(41)] = 677,
  [SMALL_STATE(42)] = 690,
  [SMALL_STATE(43)] = 700,
  [SMALL_STATE(44)] = 710,
  [SMALL_STATE(45)] = 720,
  [SMALL_STATE(46)] = 730,
  [SMALL_STATE(47)] = 740,
  [SMALL_STATE(48)] = 750,
  [SMALL_STATE(49)] = 760,
  [SMALL_STATE(50)] = 770,
  [SMALL_STATE(51)] = 780,
  [SMALL_STATE(52)] = 790,
  [SMALL_STATE(53)] = 800,
  [SMALL_STATE(54)] = 810,
  [SMALL_STATE(55)] = 820,
  [SMALL_STATE(56)] = 830,
  [SMALL_STATE(57)] = 840,
  [SMALL_STATE(58)] = 850,
  [SMALL_STATE(59)] = 860,
  [SMALL_STATE(60)] = 870,
  [SMALL_STATE(61)] = 880,
  [SMALL_STATE(62)] = 885,
  [SMALL_STATE(63)] = 890,
  [SMALL_STATE(64)] = 895,
  [SMALL_STATE(65)] = 902,
  [SMALL_STATE(66)] = 907,
  [SMALL_STATE(67)] = 912,
  [SMALL_STATE(68)] = 917,
  [SMALL_STATE(69)] = 922,
  [SMALL_STATE(70)] = 927,
  [SMALL_STATE(71)] = 932,
  [SMALL_STATE(72)] = 937,
  [SMALL_STATE(73)] = 942,
  [SMALL_STATE(74)] = 949,
  [SMALL_STATE(75)] = 954,
  [SMALL_STATE(76)] = 958,
  [SMALL_STATE(77)] = 962,
  [SMALL_STATE(78)] = 966,
  [SMALL_STATE(79)] = 970,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(24),
  [5] = {.count = 1, .reusable = true}, SHIFT(22),
  [7] = {.count = 1, .reusable = false}, SHIFT(8),
  [9] = {.count = 1, .reusable = false}, SHIFT(38),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 4),
  [13] = {.count = 1, .reusable = false}, SHIFT(17),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 3),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 2),
  [19] = {.count = 1, .reusable = false}, SHIFT(66),
  [21] = {.count = 1, .reusable = true}, SHIFT(37),
  [23] = {.count = 1, .reusable = false}, SHIFT(26),
  [25] = {.count = 1, .reusable = false}, SHIFT(33),
  [27] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mod_multi_line_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mod_multi_line_repeat1, 2), SHIFT_REPEAT(37),
  [32] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mod_multi_line_repeat1, 2), SHIFT_REPEAT(26),
  [35] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mod_multi_line_repeat1, 2), SHIFT_REPEAT(56),
  [38] = {.count = 1, .reusable = false}, SHIFT(62),
  [40] = {.count = 1, .reusable = false}, SHIFT(35),
  [42] = {.count = 1, .reusable = false}, SHIFT(72),
  [44] = {.count = 1, .reusable = false}, SHIFT(36),
  [46] = {.count = 1, .reusable = false}, SHIFT(68),
  [48] = {.count = 1, .reusable = false}, SHIFT(40),
  [50] = {.count = 1, .reusable = false}, SHIFT(71),
  [52] = {.count = 1, .reusable = false}, SHIFT(39),
  [54] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mod_mono_line_repeat1, 2),
  [56] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_mono_line_repeat1, 2),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mod_mono_line_repeat1, 2), SHIFT_REPEAT(15),
  [61] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(17),
  [66] = {.count = 1, .reusable = false}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 2),
  [70] = {.count = 1, .reusable = true}, SHIFT(51),
  [72] = {.count = 1, .reusable = false}, REDUCE(sym_mod_mono_line, 2),
  [74] = {.count = 1, .reusable = false}, SHIFT(23),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 3),
  [78] = {.count = 1, .reusable = true}, SHIFT(52),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_mod_mono_line, 3),
  [82] = {.count = 1, .reusable = false}, SHIFT(28),
  [84] = {.count = 1, .reusable = false}, SHIFT(19),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 2),
  [88] = {.count = 1, .reusable = true}, SHIFT(58),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line, 2),
  [92] = {.count = 1, .reusable = false}, SHIFT(55),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 1),
  [96] = {.count = 1, .reusable = true}, SHIFT(45),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line, 1),
  [100] = {.count = 1, .reusable = false}, SHIFT(46),
  [102] = {.count = 2, .reusable = false}, REDUCE(aux_sym_mod_mono_line_repeat1, 2), SHIFT_REPEAT(25),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(44),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_mod_mono_line, 1),
  [111] = {.count = 1, .reusable = false}, SHIFT(18),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line_content, 1),
  [115] = {.count = 1, .reusable = false}, SHIFT(50),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line_content, 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line_content, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line_content, 2),
  [123] = {.count = 1, .reusable = true}, SHIFT(59),
  [125] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat2, 2),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat2, 2), SHIFT_REPEAT(5),
  [130] = {.count = 1, .reusable = true}, SHIFT(3),
  [132] = {.count = 1, .reusable = true}, SHIFT(2),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [136] = {.count = 1, .reusable = true}, SHIFT(4),
  [138] = {.count = 1, .reusable = true}, SHIFT(34),
  [140] = {.count = 1, .reusable = true}, SHIFT(15),
  [142] = {.count = 1, .reusable = false}, SHIFT(74),
  [144] = {.count = 1, .reusable = true}, SHIFT(20),
  [146] = {.count = 1, .reusable = true}, SHIFT(21),
  [148] = {.count = 1, .reusable = true}, SHIFT(65),
  [150] = {.count = 1, .reusable = false}, SHIFT(12),
  [152] = {.count = 1, .reusable = true}, SHIFT(67),
  [154] = {.count = 1, .reusable = true}, SHIFT(42),
  [156] = {.count = 1, .reusable = false}, SHIFT(14),
  [158] = {.count = 1, .reusable = true}, SHIFT(54),
  [160] = {.count = 1, .reusable = true}, SHIFT(60),
  [162] = {.count = 1, .reusable = true}, SHIFT(70),
  [164] = {.count = 1, .reusable = true}, SHIFT(61),
  [166] = {.count = 1, .reusable = true}, SHIFT(75),
  [168] = {.count = 1, .reusable = true}, SHIFT(57),
  [170] = {.count = 1, .reusable = true}, SHIFT(53),
  [172] = {.count = 1, .reusable = true}, SHIFT(69),
  [174] = {.count = 1, .reusable = true}, SHIFT(49),
  [176] = {.count = 1, .reusable = false}, SHIFT(11),
  [178] = {.count = 1, .reusable = true}, SHIFT(47),
  [180] = {.count = 1, .reusable = true}, SHIFT(78),
  [182] = {.count = 1, .reusable = true}, SHIFT(43),
  [184] = {.count = 1, .reusable = true}, SHIFT(48),
  [186] = {.count = 1, .reusable = false}, SHIFT(13),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 6),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 6),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 2), SHIFT_REPEAT(77),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 4),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 5),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 7),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 5),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 7),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 4),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 8),
  [209] = {.count = 1, .reusable = true}, SHIFT(27),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 9),
  [213] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 3),
  [215] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [217] = {.count = 1, .reusable = true}, SHIFT(50),
  [219] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 4),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
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
