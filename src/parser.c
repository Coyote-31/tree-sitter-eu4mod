#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 19
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
  aux_sym_dot_mod_repeat3 = 17,
  aux_sym_mod_multi_line_content_repeat1 = 18,
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
  [aux_sym_dot_mod_repeat3] = "dot_mod_repeat3",
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
  [aux_sym_dot_mod_repeat3] = aux_sym_dot_mod_repeat3,
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
  [aux_sym_dot_mod_repeat3] = {
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
      if (eof) ADVANCE(62);
      if (lookahead == '\t') ADVANCE(66);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(70);
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
      if (lookahead == 'd') ADVANCE(67);
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
      if (lookahead == 'e') ADVANCE(67);
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
      if (lookahead == 'h') ADVANCE(67);
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
      if (lookahead == 'n') ADVANCE(67);
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
      if (lookahead == 's') ADVANCE(68);
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
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '\n') ADVANCE(65);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_mod_multi_line_content_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_mod_multi_line_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_mod_var_name);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_mod_var_name_multi);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_mod_equal);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_mod_var_value);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__carriage_return);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__carriage_return);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_warning_space_tab);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_warning_space_tab);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 61},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 61},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 61},
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 61},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 61},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 61},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 61},
  [46] = {.lex_state = 61},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 61},
  [49] = {.lex_state = 61},
  [50] = {.lex_state = 61},
  [51] = {.lex_state = 61},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 61},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 61},
  [58] = {.lex_state = 61},
  [59] = {.lex_state = 61},
  [60] = {.lex_state = 61},
  [61] = {.lex_state = 61},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 61},
  [65] = {.lex_state = 61},
  [66] = {.lex_state = 61},
  [67] = {.lex_state = 61},
  [68] = {.lex_state = 61},
  [69] = {.lex_state = 61},
  [70] = {.lex_state = 61},
  [71] = {.lex_state = 61},
  [72] = {.lex_state = 61},
  [73] = {.lex_state = 61},
  [74] = {.lex_state = 61},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_mod_multi_line_content_token1] = ACTIONS(1),
    [sym_mod_var_name] = ACTIONS(1),
    [sym_mod_var_name_multi] = ACTIONS(1),
    [sym_mod_equal] = ACTIONS(1),
    [sym_mod_var_value] = ACTIONS(1),
    [sym__carriage_return] = ACTIONS(1),
    [sym_warning_space_tab] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(75),
    [sym_dot_mod] = STATE(76),
    [sym_mod_mono_line] = STATE(12),
    [sym_mod_multi_line] = STATE(12),
    [aux_sym_dot_mod_repeat1] = STATE(7),
    [aux_sym_dot_mod_repeat2] = STATE(23),
    [sym_mod_var_name] = ACTIONS(3),
    [sym_mod_var_name_multi] = ACTIONS(5),
    [sym__carriage_return] = ACTIONS(7),
    [sym_warning_space_tab] = ACTIONS(9),
  },
  [2] = {
    [aux_sym_dot_mod_repeat2] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(11),
    [sym_mod_var_name] = ACTIONS(11),
    [sym_mod_var_name_multi] = ACTIONS(11),
    [sym_mod_equal] = ACTIONS(11),
    [sym_mod_var_value] = ACTIONS(11),
    [sym__carriage_return] = ACTIONS(11),
    [sym_warning_space_tab] = ACTIONS(13),
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
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    ACTIONS(18), 1,
      sym__carriage_return,
    STATE(16), 1,
      aux_sym_dot_mod_repeat1,
    STATE(23), 1,
      aux_sym_dot_mod_repeat2,
    STATE(27), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [26] = 8,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(18), 1,
      sym__carriage_return,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_dot_mod_repeat1,
    STATE(23), 1,
      aux_sym_dot_mod_repeat2,
    STATE(27), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [52] = 8,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(18), 1,
      sym__carriage_return,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_dot_mod_repeat1,
    STATE(23), 1,
      aux_sym_dot_mod_repeat2,
    STATE(27), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [78] = 8,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(18), 1,
      sym__carriage_return,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_dot_mod_repeat1,
    STATE(23), 1,
      aux_sym_dot_mod_repeat2,
    STATE(27), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [104] = 7,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(18), 1,
      sym__carriage_return,
    STATE(16), 1,
      aux_sym_dot_mod_repeat1,
    STATE(23), 1,
      aux_sym_dot_mod_repeat2,
    STATE(15), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [127] = 7,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(18), 1,
      sym__carriage_return,
    STATE(16), 1,
      aux_sym_dot_mod_repeat1,
    STATE(23), 1,
      aux_sym_dot_mod_repeat2,
    STATE(27), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [150] = 6,
    ACTIONS(26), 1,
      sym_mod_var_value,
    ACTIONS(28), 1,
      sym__carriage_return,
    ACTIONS(30), 1,
      sym_warning_space_tab,
    STATE(25), 1,
      aux_sym_dot_mod_repeat1,
    STATE(39), 1,
      aux_sym_dot_mod_repeat2,
    STATE(68), 1,
      sym_mod_multi_line_content,
  [169] = 6,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym__carriage_return,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
    STATE(5), 1,
      aux_sym_dot_mod_repeat1,
    STATE(24), 1,
      aux_sym_dot_mod_repeat3,
  [188] = 6,
    ACTIONS(26), 1,
      sym_mod_var_value,
    ACTIONS(28), 1,
      sym__carriage_return,
    ACTIONS(30), 1,
      sym_warning_space_tab,
    STATE(25), 1,
      aux_sym_dot_mod_repeat1,
    STATE(39), 1,
      aux_sym_dot_mod_repeat2,
    STATE(64), 1,
      sym_mod_multi_line_content,
  [207] = 6,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym__carriage_return,
    ACTIONS(40), 1,
      sym_warning_space_tab,
    STATE(3), 1,
      aux_sym_dot_mod_repeat1,
    STATE(13), 1,
      aux_sym_dot_mod_repeat2,
    STATE(26), 1,
      aux_sym_dot_mod_repeat3,
  [226] = 6,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(42), 1,
      sym__carriage_return,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
    STATE(4), 1,
      aux_sym_dot_mod_repeat1,
    STATE(29), 1,
      aux_sym_dot_mod_repeat3,
  [245] = 6,
    ACTIONS(26), 1,
      sym_mod_var_value,
    ACTIONS(28), 1,
      sym__carriage_return,
    ACTIONS(30), 1,
      sym_warning_space_tab,
    STATE(25), 1,
      aux_sym_dot_mod_repeat1,
    STATE(31), 1,
      sym_mod_multi_line_content,
    STATE(39), 1,
      aux_sym_dot_mod_repeat2,
  [264] = 6,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym__carriage_return,
    ACTIONS(44), 1,
      sym_warning_space_tab,
    STATE(4), 1,
      aux_sym_dot_mod_repeat1,
    STATE(10), 1,
      aux_sym_dot_mod_repeat2,
    STATE(29), 1,
      aux_sym_dot_mod_repeat3,
  [283] = 3,
    ACTIONS(48), 1,
      sym__carriage_return,
    STATE(16), 1,
      aux_sym_dot_mod_repeat1,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
      sym_warning_space_tab,
  [296] = 6,
    ACTIONS(26), 1,
      sym_mod_var_value,
    ACTIONS(28), 1,
      sym__carriage_return,
    ACTIONS(30), 1,
      sym_warning_space_tab,
    STATE(25), 1,
      aux_sym_dot_mod_repeat1,
    STATE(32), 1,
      sym_mod_multi_line_content,
    STATE(39), 1,
      aux_sym_dot_mod_repeat2,
  [315] = 4,
    ACTIONS(53), 1,
      sym__carriage_return,
    ACTIONS(55), 1,
      sym_warning_space_tab,
    STATE(20), 1,
      aux_sym_dot_mod_repeat1,
    ACTIONS(51), 2,
      anon_sym_RBRACE,
      aux_sym_mod_multi_line_content_token1,
  [329] = 4,
    ACTIONS(53), 1,
      sym__carriage_return,
    ACTIONS(59), 1,
      sym_warning_space_tab,
    STATE(20), 1,
      aux_sym_dot_mod_repeat1,
    ACTIONS(57), 2,
      anon_sym_RBRACE,
      aux_sym_mod_multi_line_content_token1,
  [343] = 4,
    ACTIONS(61), 1,
      sym__carriage_return,
    ACTIONS(64), 1,
      sym_warning_space_tab,
    STATE(20), 1,
      aux_sym_dot_mod_repeat1,
    ACTIONS(46), 2,
      anon_sym_RBRACE,
      aux_sym_mod_multi_line_content_token1,
  [357] = 4,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      aux_sym_mod_multi_line_content_token1,
    ACTIONS(70), 1,
      sym_warning_space_tab,
    STATE(28), 1,
      aux_sym_mod_multi_line_content_repeat1,
  [370] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [381] = 4,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(74), 1,
      sym_mod_var_name,
    ACTIONS(76), 1,
      sym_mod_var_name_multi,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [394] = 4,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym__carriage_return,
    STATE(6), 1,
      aux_sym_dot_mod_repeat1,
    STATE(30), 1,
      aux_sym_dot_mod_repeat3,
  [407] = 4,
    ACTIONS(53), 1,
      sym__carriage_return,
    ACTIONS(68), 1,
      aux_sym_mod_multi_line_content_token1,
    STATE(20), 1,
      aux_sym_dot_mod_repeat1,
    STATE(21), 1,
      aux_sym_mod_multi_line_content_repeat1,
  [420] = 4,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym__carriage_return,
    STATE(4), 1,
      aux_sym_dot_mod_repeat1,
    STATE(30), 1,
      aux_sym_dot_mod_repeat3,
  [433] = 3,
    ACTIONS(82), 1,
      sym_warning_space_tab,
    STATE(22), 1,
      aux_sym_dot_mod_repeat2,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [444] = 4,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      aux_sym_mod_multi_line_content_token1,
    ACTIONS(89), 1,
      sym_warning_space_tab,
    STATE(28), 1,
      aux_sym_mod_multi_line_content_repeat1,
  [457] = 4,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym__carriage_return,
    STATE(5), 1,
      aux_sym_dot_mod_repeat1,
    STATE(30), 1,
      aux_sym_dot_mod_repeat3,
  [470] = 4,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym__carriage_return,
    STATE(8), 1,
      aux_sym_dot_mod_repeat1,
    STATE(30), 1,
      aux_sym_dot_mod_repeat3,
  [483] = 3,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      sym_warning_space_tab,
    STATE(50), 1,
      aux_sym_dot_mod_repeat2,
  [493] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      sym_warning_space_tab,
    STATE(63), 1,
      aux_sym_dot_mod_repeat2,
  [503] = 3,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      sym_warning_space_tab,
    STATE(41), 1,
      aux_sym_dot_mod_repeat2,
  [513] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(106), 1,
      sym_mod_equal,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [523] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(108), 1,
      sym_mod_equal,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [533] = 1,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      sym__carriage_return,
      sym_warning_space_tab,
  [539] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(112), 1,
      sym_mod_var_value,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [549] = 3,
    ACTIONS(114), 1,
      sym_mod_equal,
    ACTIONS(116), 1,
      sym_warning_space_tab,
    STATE(55), 1,
      aux_sym_dot_mod_repeat2,
  [559] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(118), 1,
      sym_mod_var_value,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [569] = 3,
    ACTIONS(120), 1,
      sym_mod_equal,
    ACTIONS(122), 1,
      sym_warning_space_tab,
    STATE(62), 1,
      aux_sym_dot_mod_repeat2,
  [579] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [589] = 3,
    ACTIONS(126), 1,
      sym_mod_var_value,
    ACTIONS(128), 1,
      sym_warning_space_tab,
    STATE(37), 1,
      aux_sym_dot_mod_repeat2,
  [599] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(126), 1,
      sym_mod_var_value,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [609] = 1,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      sym__carriage_return,
      sym_warning_space_tab,
  [615] = 3,
    ACTIONS(132), 1,
      sym_mod_equal,
    ACTIONS(134), 1,
      sym_warning_space_tab,
    STATE(35), 1,
      aux_sym_dot_mod_repeat2,
  [625] = 3,
    ACTIONS(112), 1,
      sym_mod_var_value,
    ACTIONS(136), 1,
      sym_warning_space_tab,
    STATE(57), 1,
      aux_sym_dot_mod_repeat2,
  [635] = 3,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_warning_space_tab,
    STATE(58), 1,
      aux_sym_dot_mod_repeat2,
  [645] = 1,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      sym__carriage_return,
      sym_warning_space_tab,
  [651] = 1,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      sym__carriage_return,
      sym_warning_space_tab,
  [657] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [667] = 3,
    ACTIONS(144), 1,
      sym_mod_var_value,
    ACTIONS(146), 1,
      sym_warning_space_tab,
    STATE(61), 1,
      aux_sym_dot_mod_repeat2,
  [677] = 3,
    ACTIONS(148), 1,
      sym_mod_equal,
    ACTIONS(150), 1,
      sym_warning_space_tab,
    STATE(34), 1,
      aux_sym_dot_mod_repeat2,
  [687] = 1,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      sym__carriage_return,
      sym_warning_space_tab,
  [693] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [703] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(132), 1,
      sym_mod_equal,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [713] = 3,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      sym_warning_space_tab,
    STATE(54), 1,
      aux_sym_dot_mod_repeat2,
  [723] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(158), 1,
      sym_mod_var_value,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [733] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [743] = 1,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      sym__carriage_return,
      sym_warning_space_tab,
  [749] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [759] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(166), 1,
      sym_mod_var_value,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [769] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(148), 1,
      sym_mod_equal,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [779] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [789] = 3,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      sym_warning_space_tab,
    STATE(70), 1,
      aux_sym_dot_mod_repeat2,
  [799] = 1,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      sym__carriage_return,
      sym_warning_space_tab,
  [805] = 3,
    ACTIONS(174), 1,
      sym_mod_var_value,
    ACTIONS(176), 1,
      sym_warning_space_tab,
    STATE(43), 1,
      aux_sym_dot_mod_repeat2,
  [815] = 1,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      sym__carriage_return,
      sym_warning_space_tab,
  [821] = 3,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      sym_warning_space_tab,
    STATE(60), 1,
      aux_sym_dot_mod_repeat2,
  [831] = 1,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      sym__carriage_return,
      sym_warning_space_tab,
  [837] = 3,
    ACTIONS(34), 1,
      sym_warning_space_tab,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_dot_mod_repeat2,
  [847] = 2,
    ACTIONS(186), 1,
      sym__carriage_return,
    STATE(18), 1,
      aux_sym_dot_mod_repeat1,
  [854] = 2,
    ACTIONS(188), 1,
      sym__carriage_return,
    STATE(19), 1,
      aux_sym_dot_mod_repeat1,
  [861] = 1,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      sym_warning_space_tab,
  [866] = 1,
    ACTIONS(190), 2,
      anon_sym_RBRACE,
      sym_warning_space_tab,
  [871] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [875] = 1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 169,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 207,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 283,
  [SMALL_STATE(17)] = 296,
  [SMALL_STATE(18)] = 315,
  [SMALL_STATE(19)] = 329,
  [SMALL_STATE(20)] = 343,
  [SMALL_STATE(21)] = 357,
  [SMALL_STATE(22)] = 370,
  [SMALL_STATE(23)] = 381,
  [SMALL_STATE(24)] = 394,
  [SMALL_STATE(25)] = 407,
  [SMALL_STATE(26)] = 420,
  [SMALL_STATE(27)] = 433,
  [SMALL_STATE(28)] = 444,
  [SMALL_STATE(29)] = 457,
  [SMALL_STATE(30)] = 470,
  [SMALL_STATE(31)] = 483,
  [SMALL_STATE(32)] = 493,
  [SMALL_STATE(33)] = 503,
  [SMALL_STATE(34)] = 513,
  [SMALL_STATE(35)] = 523,
  [SMALL_STATE(36)] = 533,
  [SMALL_STATE(37)] = 539,
  [SMALL_STATE(38)] = 549,
  [SMALL_STATE(39)] = 559,
  [SMALL_STATE(40)] = 569,
  [SMALL_STATE(41)] = 579,
  [SMALL_STATE(42)] = 589,
  [SMALL_STATE(43)] = 599,
  [SMALL_STATE(44)] = 609,
  [SMALL_STATE(45)] = 615,
  [SMALL_STATE(46)] = 625,
  [SMALL_STATE(47)] = 635,
  [SMALL_STATE(48)] = 645,
  [SMALL_STATE(49)] = 651,
  [SMALL_STATE(50)] = 657,
  [SMALL_STATE(51)] = 667,
  [SMALL_STATE(52)] = 677,
  [SMALL_STATE(53)] = 687,
  [SMALL_STATE(54)] = 693,
  [SMALL_STATE(55)] = 703,
  [SMALL_STATE(56)] = 713,
  [SMALL_STATE(57)] = 723,
  [SMALL_STATE(58)] = 733,
  [SMALL_STATE(59)] = 743,
  [SMALL_STATE(60)] = 749,
  [SMALL_STATE(61)] = 759,
  [SMALL_STATE(62)] = 769,
  [SMALL_STATE(63)] = 779,
  [SMALL_STATE(64)] = 789,
  [SMALL_STATE(65)] = 799,
  [SMALL_STATE(66)] = 805,
  [SMALL_STATE(67)] = 815,
  [SMALL_STATE(68)] = 821,
  [SMALL_STATE(69)] = 831,
  [SMALL_STATE(70)] = 837,
  [SMALL_STATE(71)] = 847,
  [SMALL_STATE(72)] = 854,
  [SMALL_STATE(73)] = 861,
  [SMALL_STATE(74)] = 866,
  [SMALL_STATE(75)] = 871,
  [SMALL_STATE(76)] = 875,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(40),
  [5] = {.count = 1, .reusable = true}, SHIFT(38),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(23),
  [11] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat2, 2),
  [13] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat2, 2), SHIFT_REPEAT(2),
  [16] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 2),
  [18] = {.count = 1, .reusable = true}, SHIFT(16),
  [20] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 3),
  [22] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 4),
  [24] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 5),
  [26] = {.count = 1, .reusable = true}, SHIFT(74),
  [28] = {.count = 1, .reusable = true}, SHIFT(25),
  [30] = {.count = 1, .reusable = true}, SHIFT(39),
  [32] = {.count = 1, .reusable = true}, SHIFT(5),
  [34] = {.count = 1, .reusable = true}, SHIFT(2),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [38] = {.count = 1, .reusable = true}, SHIFT(3),
  [40] = {.count = 1, .reusable = true}, SHIFT(13),
  [42] = {.count = 1, .reusable = true}, SHIFT(4),
  [44] = {.count = 1, .reusable = true}, SHIFT(10),
  [46] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(16),
  [51] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 4),
  [53] = {.count = 1, .reusable = false}, SHIFT(20),
  [55] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 4),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 3),
  [59] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 3),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(20),
  [64] = {.count = 1, .reusable = false}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line_content, 2),
  [68] = {.count = 1, .reusable = true}, SHIFT(51),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line_content, 2),
  [72] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat3, 3),
  [74] = {.count = 1, .reusable = true}, SHIFT(52),
  [76] = {.count = 1, .reusable = true}, SHIFT(45),
  [78] = {.count = 1, .reusable = true}, SHIFT(6),
  [80] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat3, 2),
  [82] = {.count = 1, .reusable = true}, SHIFT(22),
  [84] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 2),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 2), SHIFT_REPEAT(51),
  [89] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 2),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat3, 2), SHIFT_REPEAT(8),
  [94] = {.count = 1, .reusable = true}, SHIFT(49),
  [96] = {.count = 1, .reusable = true}, SHIFT(50),
  [98] = {.count = 1, .reusable = true}, SHIFT(59),
  [100] = {.count = 1, .reusable = true}, SHIFT(63),
  [102] = {.count = 1, .reusable = true}, SHIFT(17),
  [104] = {.count = 1, .reusable = true}, SHIFT(41),
  [106] = {.count = 1, .reusable = true}, SHIFT(46),
  [108] = {.count = 1, .reusable = true}, SHIFT(47),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 4),
  [112] = {.count = 1, .reusable = true}, SHIFT(48),
  [114] = {.count = 1, .reusable = true}, SHIFT(56),
  [116] = {.count = 1, .reusable = true}, SHIFT(55),
  [118] = {.count = 1, .reusable = true}, SHIFT(73),
  [120] = {.count = 1, .reusable = true}, SHIFT(66),
  [122] = {.count = 1, .reusable = true}, SHIFT(62),
  [124] = {.count = 1, .reusable = true}, SHIFT(11),
  [126] = {.count = 1, .reusable = true}, SHIFT(36),
  [128] = {.count = 1, .reusable = true}, SHIFT(37),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 3),
  [132] = {.count = 1, .reusable = true}, SHIFT(33),
  [134] = {.count = 1, .reusable = true}, SHIFT(35),
  [136] = {.count = 1, .reusable = true}, SHIFT(57),
  [138] = {.count = 1, .reusable = true}, SHIFT(58),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 5),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 5),
  [144] = {.count = 1, .reusable = true}, SHIFT(72),
  [146] = {.count = 1, .reusable = true}, SHIFT(61),
  [148] = {.count = 1, .reusable = true}, SHIFT(42),
  [150] = {.count = 1, .reusable = true}, SHIFT(34),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 9),
  [154] = {.count = 1, .reusable = true}, SHIFT(14),
  [156] = {.count = 1, .reusable = true}, SHIFT(54),
  [158] = {.count = 1, .reusable = true}, SHIFT(65),
  [160] = {.count = 1, .reusable = true}, SHIFT(9),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 6),
  [164] = {.count = 1, .reusable = true}, SHIFT(53),
  [166] = {.count = 1, .reusable = true}, SHIFT(71),
  [168] = {.count = 1, .reusable = true}, SHIFT(69),
  [170] = {.count = 1, .reusable = true}, SHIFT(70),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 6),
  [174] = {.count = 1, .reusable = true}, SHIFT(44),
  [176] = {.count = 1, .reusable = true}, SHIFT(43),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 8),
  [180] = {.count = 1, .reusable = true}, SHIFT(67),
  [182] = {.count = 1, .reusable = true}, SHIFT(60),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 7),
  [186] = {.count = 1, .reusable = true}, SHIFT(18),
  [188] = {.count = 1, .reusable = true}, SHIFT(19),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line_content, 1),
  [192] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
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
