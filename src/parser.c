#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_LBRACE = 1,
  aux_sym_mod_multi_line_token1 = 2,
  anon_sym_RBRACE = 3,
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
  aux_sym_dot_mod_repeat1 = 14,
  aux_sym_mod_multi_line_repeat1 = 15,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [aux_sym_mod_multi_line_token1] = "mod_multi_line_token1",
  [anon_sym_RBRACE] = "}",
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
  [aux_sym_dot_mod_repeat1] = "dot_mod_repeat1",
  [aux_sym_mod_multi_line_repeat1] = "mod_multi_line_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_mod_multi_line_token1] = aux_sym_mod_multi_line_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [aux_sym_dot_mod_repeat1] = aux_sym_dot_mod_repeat1,
  [aux_sym_mod_multi_line_repeat1] = aux_sym_mod_multi_line_repeat1,
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
  [aux_sym_mod_multi_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
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
  [aux_sym_dot_mod_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_multi_line_repeat1] = {
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
      if (eof) ADVANCE(62);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 59:
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_mod_multi_line_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_mod_multi_line_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_mod_multi_line_token1);
      if (lookahead == '\n') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_mod_multi_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_mod_var_name);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_mod_var_name_multi);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_mod_equal);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_mod_var_value);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__carriage_return);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__carriage_return);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_warning_space_tab);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 60},
  [2] = {.lex_state = 60},
  [3] = {.lex_state = 60},
  [4] = {.lex_state = 60},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 60},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 60},
  [17] = {.lex_state = 60},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 60},
  [20] = {.lex_state = 60},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 60},
  [25] = {.lex_state = 61},
  [26] = {.lex_state = 61},
  [27] = {.lex_state = 60},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 61},
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 61},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 61},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_mod_multi_line_token1] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_mod_var_name] = ACTIONS(1),
    [sym_mod_var_name_multi] = ACTIONS(1),
    [sym_mod_equal] = ACTIONS(1),
    [sym_mod_var_value] = ACTIONS(1),
    [sym__carriage_return] = ACTIONS(1),
    [sym_warning_space_tab] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(45),
    [sym_dot_mod] = STATE(44),
    [sym_mod_mono_line] = STATE(3),
    [sym_mod_multi_line] = STATE(3),
    [aux_sym_dot_mod_repeat1] = STATE(3),
    [aux_sym_mod_multi_line_token1] = ACTIONS(3),
    [sym_mod_var_name] = ACTIONS(5),
    [sym_mod_var_name_multi] = ACTIONS(7),
    [sym_warning_space_tab] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_mod_var_name,
    ACTIONS(16), 1,
      sym_mod_var_name_multi,
    ACTIONS(19), 1,
      sym_warning_space_tab,
    STATE(2), 3,
      sym_mod_mono_line,
      sym_mod_multi_line,
      aux_sym_dot_mod_repeat1,
  [21] = 6,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(5), 1,
      sym_mod_var_name,
    ACTIONS(7), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(2), 3,
      sym_mod_mono_line,
      sym_mod_multi_line,
      aux_sym_dot_mod_repeat1,
  [42] = 4,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(26), 1,
      sym_mod_equal,
    ACTIONS(28), 1,
      sym_warning_space_tab,
    ACTIONS(24), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [57] = 4,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(32), 1,
      sym_mod_equal,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(30), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [72] = 4,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(38), 1,
      sym__carriage_return,
    ACTIONS(40), 1,
      sym_warning_space_tab,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [87] = 4,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(44), 1,
      sym__carriage_return,
    ACTIONS(46), 1,
      sym_warning_space_tab,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [102] = 4,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(50), 1,
      sym__carriage_return,
    ACTIONS(52), 1,
      sym_warning_space_tab,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [117] = 4,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(56), 1,
      sym__carriage_return,
    ACTIONS(58), 1,
      sym_warning_space_tab,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [132] = 4,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(62), 1,
      sym_mod_equal,
    ACTIONS(64), 1,
      sym_warning_space_tab,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [147] = 4,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(68), 1,
      sym_mod_equal,
    ACTIONS(70), 1,
      sym_warning_space_tab,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [162] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(74), 1,
      sym_warning_space_tab,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [174] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(78), 1,
      sym_warning_space_tab,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [186] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(82), 1,
      sym_warning_space_tab,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [198] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(58), 1,
      sym_warning_space_tab,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [210] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(86), 1,
      sym_warning_space_tab,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [222] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(90), 1,
      sym_warning_space_tab,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [234] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(40), 1,
      sym_warning_space_tab,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [246] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(94), 1,
      sym_warning_space_tab,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [258] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(46), 1,
      sym_warning_space_tab,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
  [270] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(96), 1,
      sym__carriage_return,
    ACTIONS(98), 1,
      sym_warning_space_tab,
  [280] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(100), 1,
      sym__carriage_return,
    ACTIONS(102), 1,
      sym_warning_space_tab,
  [290] = 3,
    ACTIONS(104), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_mod_multi_line_repeat1,
  [300] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(108), 1,
      sym_mod_var_value,
    ACTIONS(110), 1,
      sym_warning_space_tab,
  [310] = 3,
    ACTIONS(104), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_mod_multi_line_repeat1,
  [320] = 3,
    ACTIONS(112), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(114), 1,
      sym_mod_var_name,
    ACTIONS(116), 1,
      sym_mod_var_name_multi,
  [330] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(118), 1,
      sym_mod_var_value,
    ACTIONS(120), 1,
      sym_warning_space_tab,
  [340] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(122), 1,
      sym_mod_var_value,
    ACTIONS(124), 1,
      sym_warning_space_tab,
  [350] = 3,
    ACTIONS(104), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_mod_multi_line_repeat1,
  [360] = 3,
    ACTIONS(104), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_mod_multi_line_repeat1,
  [370] = 3,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(130), 1,
      sym__carriage_return,
    ACTIONS(132), 1,
      sym_warning_space_tab,
  [380] = 3,
    ACTIONS(134), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_mod_multi_line_repeat1,
  [390] = 2,
    ACTIONS(112), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(139), 1,
      sym_mod_var_value,
  [397] = 2,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(130), 1,
      sym__carriage_return,
  [404] = 2,
    ACTIONS(112), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
  [411] = 1,
    ACTIONS(143), 2,
      aux_sym_mod_multi_line_token1,
      anon_sym_RBRACE,
  [416] = 2,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(145), 1,
      sym__carriage_return,
  [423] = 2,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(100), 1,
      sym__carriage_return,
  [430] = 2,
    ACTIONS(112), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(122), 1,
      sym_mod_var_value,
  [437] = 2,
    ACTIONS(112), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(147), 1,
      sym_mod_var_value,
  [444] = 2,
    ACTIONS(112), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
  [451] = 2,
    ACTIONS(108), 1,
      sym_mod_var_value,
    ACTIONS(112), 1,
      aux_sym_mod_multi_line_token1,
  [458] = 2,
    ACTIONS(3), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(151), 1,
      sym__carriage_return,
  [465] = 2,
    ACTIONS(112), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [472] = 2,
    ACTIONS(112), 1,
      aux_sym_mod_multi_line_token1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 147,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 198,
  [SMALL_STATE(16)] = 210,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 234,
  [SMALL_STATE(19)] = 246,
  [SMALL_STATE(20)] = 258,
  [SMALL_STATE(21)] = 270,
  [SMALL_STATE(22)] = 280,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 300,
  [SMALL_STATE(25)] = 310,
  [SMALL_STATE(26)] = 320,
  [SMALL_STATE(27)] = 330,
  [SMALL_STATE(28)] = 340,
  [SMALL_STATE(29)] = 350,
  [SMALL_STATE(30)] = 360,
  [SMALL_STATE(31)] = 370,
  [SMALL_STATE(32)] = 380,
  [SMALL_STATE(33)] = 390,
  [SMALL_STATE(34)] = 397,
  [SMALL_STATE(35)] = 404,
  [SMALL_STATE(36)] = 411,
  [SMALL_STATE(37)] = 416,
  [SMALL_STATE(38)] = 423,
  [SMALL_STATE(39)] = 430,
  [SMALL_STATE(40)] = 437,
  [SMALL_STATE(41)] = 444,
  [SMALL_STATE(42)] = 451,
  [SMALL_STATE(43)] = 458,
  [SMALL_STATE(44)] = 465,
  [SMALL_STATE(45)] = 472,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(4),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = false}, SHIFT(26),
  [11] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [13] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(4),
  [16] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(5),
  [19] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(26),
  [22] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [24] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 1),
  [26] = {.count = 1, .reusable = true}, SHIFT(27),
  [28] = {.count = 1, .reusable = false}, REDUCE(sym_mod_mono_line, 1),
  [30] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 1),
  [32] = {.count = 1, .reusable = true}, SHIFT(41),
  [34] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line, 1),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 4),
  [38] = {.count = 1, .reusable = false}, SHIFT(20),
  [40] = {.count = 1, .reusable = false}, REDUCE(sym_mod_mono_line, 4),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 5),
  [44] = {.count = 1, .reusable = false}, SHIFT(15),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_mod_mono_line, 5),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 3),
  [50] = {.count = 1, .reusable = false}, SHIFT(18),
  [52] = {.count = 1, .reusable = false}, REDUCE(sym_mod_mono_line, 3),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 6),
  [56] = {.count = 1, .reusable = false}, SHIFT(17),
  [58] = {.count = 1, .reusable = false}, REDUCE(sym_mod_mono_line, 6),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 2),
  [62] = {.count = 1, .reusable = true}, SHIFT(28),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym_mod_mono_line, 2),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 2),
  [68] = {.count = 1, .reusable = true}, SHIFT(35),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line, 2),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 8),
  [74] = {.count = 1, .reusable = false}, REDUCE(sym_mod_mono_line, 8),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 8),
  [78] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line, 8),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 6),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line, 6),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 5),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line, 5),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 7),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_mod_mono_line, 7),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 7),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line, 7),
  [96] = {.count = 1, .reusable = false}, SHIFT(16),
  [98] = {.count = 1, .reusable = false}, SHIFT(34),
  [100] = {.count = 1, .reusable = false}, SHIFT(19),
  [102] = {.count = 1, .reusable = false}, SHIFT(43),
  [104] = {.count = 1, .reusable = true}, SHIFT(40),
  [106] = {.count = 1, .reusable = true}, SHIFT(31),
  [108] = {.count = 1, .reusable = true}, SHIFT(7),
  [110] = {.count = 1, .reusable = false}, SHIFT(33),
  [112] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [114] = {.count = 1, .reusable = true}, SHIFT(10),
  [116] = {.count = 1, .reusable = true}, SHIFT(11),
  [118] = {.count = 1, .reusable = true}, SHIFT(8),
  [120] = {.count = 1, .reusable = false}, SHIFT(39),
  [122] = {.count = 1, .reusable = true}, SHIFT(6),
  [124] = {.count = 1, .reusable = false}, SHIFT(42),
  [126] = {.count = 1, .reusable = true}, SHIFT(21),
  [128] = {.count = 1, .reusable = true}, SHIFT(22),
  [130] = {.count = 1, .reusable = false}, SHIFT(14),
  [132] = {.count = 1, .reusable = false}, SHIFT(38),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mod_multi_line_repeat1, 2), SHIFT_REPEAT(40),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_multi_line_repeat1, 2),
  [139] = {.count = 1, .reusable = true}, SHIFT(9),
  [141] = {.count = 1, .reusable = true}, SHIFT(25),
  [143] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_multi_line_repeat1, 3),
  [145] = {.count = 1, .reusable = false}, SHIFT(36),
  [147] = {.count = 1, .reusable = true}, SHIFT(37),
  [149] = {.count = 1, .reusable = true}, SHIFT(29),
  [151] = {.count = 1, .reusable = false}, SHIFT(13),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [155] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
