#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
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
  aux_sym_mod_mono_line_repeat1 = 17,
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
  [aux_sym_mod_mono_line_repeat1] = "mod_mono_line_repeat1",
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
      if (eof) ADVANCE(61);
      if (lookahead == '\t') ADVANCE(64);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(68);
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
      if (lookahead == 'd') ADVANCE(65);
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
      if (lookahead == 'e') ADVANCE(65);
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
      if (lookahead == 'h') ADVANCE(65);
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
      if (lookahead == 'n') ADVANCE(65);
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
      if (lookahead == 's') ADVANCE(66);
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
      if (eof) ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_mod_multi_line_content_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_mod_var_name);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_mod_var_name_multi);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_mod_equal);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_mod_var_value);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__carriage_return);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_warning_space_tab);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_warning_space_tab);
      if (lookahead == ' ') ADVANCE(64);
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
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 60},
  [8] = {.lex_state = 60},
  [9] = {.lex_state = 60},
  [10] = {.lex_state = 60},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 60},
  [26] = {.lex_state = 60},
  [27] = {.lex_state = 60},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 60},
  [30] = {.lex_state = 60},
  [31] = {.lex_state = 60},
  [32] = {.lex_state = 60},
  [33] = {.lex_state = 60},
  [34] = {.lex_state = 60},
  [35] = {.lex_state = 60},
  [36] = {.lex_state = 60},
  [37] = {.lex_state = 60},
  [38] = {.lex_state = 60},
  [39] = {.lex_state = 60},
  [40] = {.lex_state = 60},
  [41] = {.lex_state = 60},
  [42] = {.lex_state = 60},
  [43] = {.lex_state = 60},
  [44] = {.lex_state = 60},
  [45] = {.lex_state = 60},
  [46] = {.lex_state = 60},
  [47] = {.lex_state = 60},
  [48] = {.lex_state = 60},
  [49] = {.lex_state = 60},
  [50] = {.lex_state = 60},
  [51] = {.lex_state = 60},
  [52] = {.lex_state = 60},
  [53] = {.lex_state = 60},
  [54] = {.lex_state = 60},
  [55] = {.lex_state = 60},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 60},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 60},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
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
    [sym_file] = STATE(71),
    [sym_dot_mod] = STATE(70),
    [sym_mod_mono_line] = STATE(21),
    [sym_mod_multi_line] = STATE(21),
    [aux_sym_dot_mod_repeat1] = STATE(7),
    [aux_sym_mod_mono_line_repeat1] = STATE(18),
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
    STATE(10), 1,
      aux_sym_dot_mod_repeat1,
    STATE(18), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(69), 2,
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
    STATE(10), 1,
      aux_sym_dot_mod_repeat1,
    STATE(18), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(69), 2,
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
    STATE(10), 1,
      aux_sym_dot_mod_repeat1,
    STATE(18), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(69), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [78] = 3,
    ACTIONS(21), 1,
      sym_warning_space_tab,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
    ACTIONS(19), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_mod_var_name,
      sym_mod_var_name_multi,
      sym_mod_equal,
      sym_mod_var_value,
  [93] = 7,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(13), 1,
      sym__carriage_return,
    STATE(10), 1,
      aux_sym_dot_mod_repeat1,
    STATE(18), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(69), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [116] = 7,
    ACTIONS(3), 1,
      sym_mod_var_name,
    ACTIONS(5), 1,
      sym_mod_var_name_multi,
    ACTIONS(9), 1,
      sym_warning_space_tab,
    ACTIONS(13), 1,
      sym__carriage_return,
    STATE(10), 1,
      aux_sym_dot_mod_repeat1,
    STATE(18), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(20), 2,
      sym_mod_mono_line,
      sym_mod_multi_line,
  [139] = 6,
    ACTIONS(24), 1,
      sym_mod_var_value,
    ACTIONS(26), 1,
      sym__carriage_return,
    ACTIONS(28), 1,
      sym_warning_space_tab,
    STATE(22), 1,
      aux_sym_dot_mod_repeat1,
    STATE(37), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(50), 1,
      sym_mod_multi_line_content,
  [158] = 6,
    ACTIONS(24), 1,
      sym_mod_var_value,
    ACTIONS(26), 1,
      sym__carriage_return,
    ACTIONS(28), 1,
      sym_warning_space_tab,
    STATE(22), 1,
      aux_sym_dot_mod_repeat1,
    STATE(37), 1,
      aux_sym_mod_mono_line_repeat1,
    STATE(48), 1,
      sym_mod_multi_line_content,
  [177] = 3,
    ACTIONS(32), 1,
      sym__carriage_return,
    STATE(10), 1,
      aux_sym_dot_mod_repeat1,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      sym_mod_var_name,
      sym_mod_var_name_multi,
      sym_warning_space_tab,
  [190] = 6,
    ACTIONS(24), 1,
      sym_mod_var_value,
    ACTIONS(26), 1,
      sym__carriage_return,
    ACTIONS(28), 1,
      sym_warning_space_tab,
    STATE(22), 1,
      aux_sym_dot_mod_repeat1,
    STATE(36), 1,
      sym_mod_multi_line_content,
    STATE(37), 1,
      aux_sym_mod_mono_line_repeat1,
  [209] = 6,
    ACTIONS(24), 1,
      sym_mod_var_value,
    ACTIONS(26), 1,
      sym__carriage_return,
    ACTIONS(28), 1,
      sym_warning_space_tab,
    STATE(22), 1,
      aux_sym_dot_mod_repeat1,
    STATE(25), 1,
      sym_mod_multi_line_content,
    STATE(37), 1,
      aux_sym_mod_mono_line_repeat1,
  [228] = 4,
    ACTIONS(35), 1,
      sym__carriage_return,
    ACTIONS(38), 1,
      sym_warning_space_tab,
    STATE(13), 1,
      aux_sym_dot_mod_repeat1,
    ACTIONS(30), 2,
      anon_sym_RBRACE,
      aux_sym_mod_multi_line_content_token1,
  [242] = 4,
    ACTIONS(42), 1,
      sym__carriage_return,
    ACTIONS(44), 1,
      sym_warning_space_tab,
    STATE(13), 1,
      aux_sym_dot_mod_repeat1,
    ACTIONS(40), 2,
      anon_sym_RBRACE,
      aux_sym_mod_multi_line_content_token1,
  [256] = 4,
    ACTIONS(42), 1,
      sym__carriage_return,
    ACTIONS(48), 1,
      sym_warning_space_tab,
    STATE(13), 1,
      aux_sym_dot_mod_repeat1,
    ACTIONS(46), 2,
      anon_sym_RBRACE,
      aux_sym_mod_multi_line_content_token1,
  [270] = 4,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      aux_sym_mod_multi_line_content_token1,
    ACTIONS(55), 1,
      sym_warning_space_tab,
    STATE(16), 1,
      aux_sym_mod_multi_line_content_repeat1,
  [283] = 4,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      aux_sym_mod_multi_line_content_token1,
    ACTIONS(61), 1,
      sym_warning_space_tab,
    STATE(16), 1,
      aux_sym_mod_multi_line_content_repeat1,
  [296] = 4,
    ACTIONS(63), 1,
      sym_mod_var_name,
    ACTIONS(65), 1,
      sym_mod_var_name_multi,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [309] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym__carriage_return,
    STATE(3), 1,
      aux_sym_dot_mod_repeat1,
    STATE(23), 1,
      aux_sym_dot_mod_repeat2,
  [322] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym__carriage_return,
    STATE(3), 1,
      aux_sym_dot_mod_repeat1,
    STATE(24), 1,
      aux_sym_dot_mod_repeat2,
  [335] = 4,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym__carriage_return,
    STATE(4), 1,
      aux_sym_dot_mod_repeat1,
    STATE(19), 1,
      aux_sym_dot_mod_repeat2,
  [348] = 4,
    ACTIONS(42), 1,
      sym__carriage_return,
    ACTIONS(59), 1,
      aux_sym_mod_multi_line_content_token1,
    STATE(13), 1,
      aux_sym_dot_mod_repeat1,
    STATE(17), 1,
      aux_sym_mod_multi_line_content_repeat1,
  [361] = 4,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym__carriage_return,
    STATE(6), 1,
      aux_sym_dot_mod_repeat1,
    STATE(23), 1,
      aux_sym_dot_mod_repeat2,
  [374] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      sym__carriage_return,
    STATE(2), 1,
      aux_sym_dot_mod_repeat1,
    STATE(23), 1,
      aux_sym_dot_mod_repeat2,
  [387] = 3,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      sym_warning_space_tab,
    STATE(46), 1,
      aux_sym_mod_mono_line_repeat1,
  [397] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(86), 1,
      sym_mod_equal,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [407] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(88), 1,
      sym_mod_var_value,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [417] = 3,
    ACTIONS(88), 1,
      sym_mod_var_value,
    ACTIONS(90), 1,
      sym_warning_space_tab,
    STATE(35), 1,
      aux_sym_mod_mono_line_repeat1,
  [427] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [437] = 3,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      sym_warning_space_tab,
    STATE(39), 1,
      aux_sym_mod_mono_line_repeat1,
  [447] = 3,
    ACTIONS(96), 1,
      sym_mod_equal,
    ACTIONS(98), 1,
      sym_warning_space_tab,
    STATE(26), 1,
      aux_sym_mod_mono_line_repeat1,
  [457] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(100), 1,
      sym_mod_equal,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [467] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(102), 1,
      sym_mod_equal,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [477] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [487] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(106), 1,
      sym_mod_var_value,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [497] = 3,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      sym_warning_space_tab,
    STATE(34), 1,
      aux_sym_mod_mono_line_repeat1,
  [507] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(112), 1,
      sym_mod_var_value,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [517] = 3,
    ACTIONS(114), 1,
      sym_mod_equal,
    ACTIONS(116), 1,
      sym_warning_space_tab,
    STATE(54), 1,
      aux_sym_mod_mono_line_repeat1,
  [527] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [537] = 3,
    ACTIONS(86), 1,
      sym_mod_equal,
    ACTIONS(120), 1,
      sym_warning_space_tab,
    STATE(33), 1,
      aux_sym_mod_mono_line_repeat1,
  [547] = 3,
    ACTIONS(122), 1,
      sym_mod_equal,
    ACTIONS(124), 1,
      sym_warning_space_tab,
    STATE(32), 1,
      aux_sym_mod_mono_line_repeat1,
  [557] = 3,
    ACTIONS(106), 1,
      sym_mod_var_value,
    ACTIONS(126), 1,
      sym_warning_space_tab,
    STATE(52), 1,
      aux_sym_mod_mono_line_repeat1,
  [567] = 3,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      sym_warning_space_tab,
    STATE(53), 1,
      aux_sym_mod_mono_line_repeat1,
  [577] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [587] = 3,
    ACTIONS(130), 1,
      sym_mod_var_value,
    ACTIONS(132), 1,
      sym_warning_space_tab,
    STATE(27), 1,
      aux_sym_mod_mono_line_repeat1,
  [597] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [607] = 3,
    ACTIONS(136), 1,
      sym_mod_var_value,
    ACTIONS(138), 1,
      sym_warning_space_tab,
    STATE(55), 1,
      aux_sym_mod_mono_line_repeat1,
  [617] = 3,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      sym_warning_space_tab,
    STATE(44), 1,
      aux_sym_mod_mono_line_repeat1,
  [627] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [637] = 3,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      sym_warning_space_tab,
    STATE(49), 1,
      aux_sym_mod_mono_line_repeat1,
  [647] = 3,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      sym_warning_space_tab,
    STATE(29), 1,
      aux_sym_mod_mono_line_repeat1,
  [657] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(150), 1,
      sym_mod_var_value,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [667] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [677] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(122), 1,
      sym_mod_equal,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [687] = 3,
    ACTIONS(67), 1,
      sym_warning_space_tab,
    ACTIONS(154), 1,
      sym_mod_var_value,
    STATE(5), 1,
      aux_sym_mod_mono_line_repeat1,
  [697] = 2,
    ACTIONS(156), 1,
      sym__carriage_return,
    STATE(14), 1,
      aux_sym_dot_mod_repeat1,
  [704] = 1,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [709] = 1,
    ACTIONS(57), 2,
      anon_sym_RBRACE,
      sym_warning_space_tab,
  [714] = 1,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [719] = 1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [724] = 1,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [729] = 2,
    ACTIONS(166), 1,
      sym__carriage_return,
    STATE(15), 1,
      aux_sym_dot_mod_repeat1,
  [736] = 1,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [741] = 1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [746] = 1,
    ACTIONS(172), 2,
      anon_sym_RBRACE,
      sym_warning_space_tab,
  [751] = 1,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [756] = 1,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [761] = 1,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [766] = 1,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym__carriage_return,
  [771] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [775] = 1,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 139,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 190,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 242,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 296,
  [SMALL_STATE(19)] = 309,
  [SMALL_STATE(20)] = 322,
  [SMALL_STATE(21)] = 335,
  [SMALL_STATE(22)] = 348,
  [SMALL_STATE(23)] = 361,
  [SMALL_STATE(24)] = 374,
  [SMALL_STATE(25)] = 387,
  [SMALL_STATE(26)] = 397,
  [SMALL_STATE(27)] = 407,
  [SMALL_STATE(28)] = 417,
  [SMALL_STATE(29)] = 427,
  [SMALL_STATE(30)] = 437,
  [SMALL_STATE(31)] = 447,
  [SMALL_STATE(32)] = 457,
  [SMALL_STATE(33)] = 467,
  [SMALL_STATE(34)] = 477,
  [SMALL_STATE(35)] = 487,
  [SMALL_STATE(36)] = 497,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 517,
  [SMALL_STATE(39)] = 527,
  [SMALL_STATE(40)] = 537,
  [SMALL_STATE(41)] = 547,
  [SMALL_STATE(42)] = 557,
  [SMALL_STATE(43)] = 567,
  [SMALL_STATE(44)] = 577,
  [SMALL_STATE(45)] = 587,
  [SMALL_STATE(46)] = 597,
  [SMALL_STATE(47)] = 607,
  [SMALL_STATE(48)] = 617,
  [SMALL_STATE(49)] = 627,
  [SMALL_STATE(50)] = 637,
  [SMALL_STATE(51)] = 647,
  [SMALL_STATE(52)] = 657,
  [SMALL_STATE(53)] = 667,
  [SMALL_STATE(54)] = 677,
  [SMALL_STATE(55)] = 687,
  [SMALL_STATE(56)] = 697,
  [SMALL_STATE(57)] = 704,
  [SMALL_STATE(58)] = 709,
  [SMALL_STATE(59)] = 714,
  [SMALL_STATE(60)] = 719,
  [SMALL_STATE(61)] = 724,
  [SMALL_STATE(62)] = 729,
  [SMALL_STATE(63)] = 736,
  [SMALL_STATE(64)] = 741,
  [SMALL_STATE(65)] = 746,
  [SMALL_STATE(66)] = 751,
  [SMALL_STATE(67)] = 756,
  [SMALL_STATE(68)] = 761,
  [SMALL_STATE(69)] = 766,
  [SMALL_STATE(70)] = 771,
  [SMALL_STATE(71)] = 775,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(38),
  [5] = {.count = 1, .reusable = true}, SHIFT(31),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(18),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 4),
  [13] = {.count = 1, .reusable = true}, SHIFT(10),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 3),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 2),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_mono_line_repeat1, 2),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mod_mono_line_repeat1, 2), SHIFT_REPEAT(5),
  [24] = {.count = 1, .reusable = true}, SHIFT(65),
  [26] = {.count = 1, .reusable = true}, SHIFT(22),
  [28] = {.count = 1, .reusable = true}, SHIFT(37),
  [30] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(10),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat1, 2), SHIFT_REPEAT(13),
  [38] = {.count = 1, .reusable = false}, REDUCE(aux_sym_dot_mod_repeat1, 2),
  [40] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 3),
  [42] = {.count = 1, .reusable = true}, SHIFT(13),
  [44] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 3),
  [46] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 4),
  [48] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 4),
  [50] = {.count = 1, .reusable = true}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 2),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 2), SHIFT_REPEAT(47),
  [55] = {.count = 1, .reusable = false}, REDUCE(aux_sym_mod_multi_line_content_repeat1, 2),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line_content, 2),
  [59] = {.count = 1, .reusable = true}, SHIFT(47),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_mod_multi_line_content, 2),
  [63] = {.count = 1, .reusable = true}, SHIFT(41),
  [65] = {.count = 1, .reusable = true}, SHIFT(40),
  [67] = {.count = 1, .reusable = true}, SHIFT(5),
  [69] = {.count = 1, .reusable = true}, SHIFT(3),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_dot_mod, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(4),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat2, 2),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dot_mod_repeat2, 2), SHIFT_REPEAT(6),
  [80] = {.count = 1, .reusable = true}, SHIFT(2),
  [82] = {.count = 1, .reusable = true}, SHIFT(61),
  [84] = {.count = 1, .reusable = true}, SHIFT(46),
  [86] = {.count = 1, .reusable = true}, SHIFT(30),
  [88] = {.count = 1, .reusable = true}, SHIFT(67),
  [90] = {.count = 1, .reusable = true}, SHIFT(35),
  [92] = {.count = 1, .reusable = true}, SHIFT(8),
  [94] = {.count = 1, .reusable = true}, SHIFT(39),
  [96] = {.count = 1, .reusable = true}, SHIFT(51),
  [98] = {.count = 1, .reusable = true}, SHIFT(26),
  [100] = {.count = 1, .reusable = true}, SHIFT(42),
  [102] = {.count = 1, .reusable = true}, SHIFT(43),
  [104] = {.count = 1, .reusable = true}, SHIFT(68),
  [106] = {.count = 1, .reusable = true}, SHIFT(64),
  [108] = {.count = 1, .reusable = true}, SHIFT(66),
  [110] = {.count = 1, .reusable = true}, SHIFT(34),
  [112] = {.count = 1, .reusable = true}, SHIFT(58),
  [114] = {.count = 1, .reusable = true}, SHIFT(45),
  [116] = {.count = 1, .reusable = true}, SHIFT(54),
  [118] = {.count = 1, .reusable = true}, SHIFT(9),
  [120] = {.count = 1, .reusable = true}, SHIFT(33),
  [122] = {.count = 1, .reusable = true}, SHIFT(28),
  [124] = {.count = 1, .reusable = true}, SHIFT(32),
  [126] = {.count = 1, .reusable = true}, SHIFT(52),
  [128] = {.count = 1, .reusable = true}, SHIFT(53),
  [130] = {.count = 1, .reusable = true}, SHIFT(59),
  [132] = {.count = 1, .reusable = true}, SHIFT(27),
  [134] = {.count = 1, .reusable = true}, SHIFT(57),
  [136] = {.count = 1, .reusable = true}, SHIFT(56),
  [138] = {.count = 1, .reusable = true}, SHIFT(55),
  [140] = {.count = 1, .reusable = true}, SHIFT(63),
  [142] = {.count = 1, .reusable = true}, SHIFT(44),
  [144] = {.count = 1, .reusable = true}, SHIFT(49),
  [146] = {.count = 1, .reusable = true}, SHIFT(12),
  [148] = {.count = 1, .reusable = true}, SHIFT(29),
  [150] = {.count = 1, .reusable = true}, SHIFT(60),
  [152] = {.count = 1, .reusable = true}, SHIFT(11),
  [154] = {.count = 1, .reusable = true}, SHIFT(62),
  [156] = {.count = 1, .reusable = true}, SHIFT(14),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 6),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 3),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 6),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 5),
  [166] = {.count = 1, .reusable = true}, SHIFT(15),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 7),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 5),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line_content, 1),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 8),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_mod_mono_line, 4),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_mod_multi_line, 9),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [182] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
