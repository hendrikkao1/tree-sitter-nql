#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_table_token1 = 1,
  anon_sym_DOT = 2,
  sym_statmentStep = 3,
  anon_sym_include = 4,
  aux_sym_includeStatment_token1 = 5,
  anon_sym_list = 6,
  anon_sym_sort = 7,
  anon_sym_summarize = 8,
  anon_sym_where = 9,
  anon_sym_with = 10,
  anon_sym_duringpast = 11,
  aux_sym_time_token1 = 12,
  aux_sym_time_token2 = 13,
  aux_sym_time_token3 = 14,
  aux_sym_time_token4 = 15,
  aux_sym_time_token5 = 16,
  aux_sym_time_token6 = 17,
  sym_source_file = 18,
  sym_query = 19,
  sym_table = 20,
  sym_statment = 21,
  sym_includeStatment = 22,
  sym_listStatment = 23,
  sym_sortStatment = 24,
  sym_summarizeStatment = 25,
  sym_whereStatment = 26,
  sym_withStatment = 27,
  sym_timeFrame = 28,
  sym_time = 29,
  aux_sym_query_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_table_token1] = "table_token1",
  [anon_sym_DOT] = ".",
  [sym_statmentStep] = "statmentStep",
  [anon_sym_include] = "include",
  [aux_sym_includeStatment_token1] = "includeStatment_token1",
  [anon_sym_list] = "list",
  [anon_sym_sort] = "sort",
  [anon_sym_summarize] = "summarize",
  [anon_sym_where] = "where",
  [anon_sym_with] = "with",
  [anon_sym_duringpast] = "during past",
  [aux_sym_time_token1] = "time_token1",
  [aux_sym_time_token2] = "time_token2",
  [aux_sym_time_token3] = "time_token3",
  [aux_sym_time_token4] = "time_token4",
  [aux_sym_time_token5] = "time_token5",
  [aux_sym_time_token6] = "time_token6",
  [sym_source_file] = "source_file",
  [sym_query] = "query",
  [sym_table] = "table",
  [sym_statment] = "statment",
  [sym_includeStatment] = "includeStatment",
  [sym_listStatment] = "listStatment",
  [sym_sortStatment] = "sortStatment",
  [sym_summarizeStatment] = "summarizeStatment",
  [sym_whereStatment] = "whereStatment",
  [sym_withStatment] = "withStatment",
  [sym_timeFrame] = "timeFrame",
  [sym_time] = "time",
  [aux_sym_query_repeat1] = "query_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_table_token1] = aux_sym_table_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_statmentStep] = sym_statmentStep,
  [anon_sym_include] = anon_sym_include,
  [aux_sym_includeStatment_token1] = aux_sym_includeStatment_token1,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_summarize] = anon_sym_summarize,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_duringpast] = anon_sym_duringpast,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [aux_sym_time_token2] = aux_sym_time_token2,
  [aux_sym_time_token3] = aux_sym_time_token3,
  [aux_sym_time_token4] = aux_sym_time_token4,
  [aux_sym_time_token5] = aux_sym_time_token5,
  [aux_sym_time_token6] = aux_sym_time_token6,
  [sym_source_file] = sym_source_file,
  [sym_query] = sym_query,
  [sym_table] = sym_table,
  [sym_statment] = sym_statment,
  [sym_includeStatment] = sym_includeStatment,
  [sym_listStatment] = sym_listStatment,
  [sym_sortStatment] = sym_sortStatment,
  [sym_summarizeStatment] = sym_summarizeStatment,
  [sym_whereStatment] = sym_whereStatment,
  [sym_withStatment] = sym_withStatment,
  [sym_timeFrame] = sym_timeFrame,
  [sym_time] = sym_time,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_table_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_statmentStep] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_includeStatment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_summarize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duringpast] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_token6] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_statment] = {
    .visible = true,
    .named = true,
  },
  [sym_includeStatment] = {
    .visible = true,
    .named = true,
  },
  [sym_listStatment] = {
    .visible = true,
    .named = true,
  },
  [sym_sortStatment] = {
    .visible = true,
    .named = true,
  },
  [sym_summarizeStatment] = {
    .visible = true,
    .named = true,
  },
  [sym_whereStatment] = {
    .visible = true,
    .named = true,
  },
  [sym_withStatment] = {
    .visible = true,
    .named = true,
  },
  [sym_timeFrame] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_query_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 8,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 16,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 13,
  [35] = 14,
  [36] = 36,
  [37] = 16,
  [38] = 31,
  [39] = 39,
  [40] = 31,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(16);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == 'y') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 41:
      if (lookahead == 'z') ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_statmentStep);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == 'g') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_includeStatment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_summarize);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_duringpast);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_duringpast);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_time_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_time_token2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_time_token3);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_time_token4);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_time_token5);
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_time_token6);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 42},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 42},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 42},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 42},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_statmentStep] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_summarize] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_duringpast] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [aux_sym_time_token2] = ACTIONS(1),
    [aux_sym_time_token3] = ACTIONS(1),
    [aux_sym_time_token4] = ACTIONS(1),
    [aux_sym_time_token5] = ACTIONS(1),
    [aux_sym_time_token6] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_query] = STATE(32),
    [sym_table] = STATE(22),
    [aux_sym_table_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_include,
    ACTIONS(7), 1,
      anon_sym_list,
    ACTIONS(9), 1,
      anon_sym_sort,
    ACTIONS(11), 1,
      anon_sym_summarize,
    ACTIONS(13), 1,
      anon_sym_where,
    ACTIONS(15), 1,
      anon_sym_with,
    STATE(10), 6,
      sym_includeStatment,
      sym_listStatment,
      sym_sortStatment,
      sym_summarizeStatment,
      sym_whereStatment,
      sym_withStatment,
  [27] = 3,
    ACTIONS(19), 1,
      aux_sym_time_token5,
    STATE(35), 1,
      sym_time,
    ACTIONS(17), 5,
      aux_sym_time_token1,
      aux_sym_time_token2,
      aux_sym_time_token3,
      aux_sym_time_token4,
      aux_sym_time_token6,
  [41] = 3,
    ACTIONS(23), 1,
      aux_sym_time_token5,
    STATE(14), 1,
      sym_time,
    ACTIONS(21), 5,
      aux_sym_time_token1,
      aux_sym_time_token2,
      aux_sym_time_token3,
      aux_sym_time_token4,
      aux_sym_time_token6,
  [55] = 3,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_statmentStep,
    STATE(6), 2,
      sym_statment,
      aux_sym_query_repeat1,
  [66] = 3,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_statmentStep,
    STATE(6), 2,
      sym_statment,
      aux_sym_query_repeat1,
  [77] = 3,
    ACTIONS(27), 1,
      sym_statmentStep,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym_statment,
      aux_sym_query_repeat1,
  [88] = 2,
    ACTIONS(36), 1,
      anon_sym_DOT,
    ACTIONS(38), 2,
      aux_sym_includeStatment_token1,
      anon_sym_duringpast,
  [96] = 3,
    ACTIONS(40), 1,
      aux_sym_includeStatment_token1,
    ACTIONS(42), 1,
      anon_sym_duringpast,
    STATE(29), 1,
      sym_timeFrame,
  [106] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      sym_statmentStep,
  [111] = 1,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_statmentStep,
  [116] = 2,
    ACTIONS(38), 1,
      aux_sym_includeStatment_token1,
    ACTIONS(48), 1,
      anon_sym_DOT,
  [123] = 1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      sym_statmentStep,
  [128] = 1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      sym_statmentStep,
  [133] = 2,
    ACTIONS(54), 1,
      aux_sym_table_token1,
    STATE(9), 1,
      sym_table,
  [140] = 1,
    ACTIONS(56), 2,
      aux_sym_includeStatment_token1,
      anon_sym_duringpast,
  [145] = 1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_statmentStep,
  [150] = 1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_statmentStep,
  [155] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_statmentStep,
  [160] = 2,
    ACTIONS(64), 1,
      aux_sym_table_token1,
    STATE(27), 1,
      sym_table,
  [167] = 2,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_duringpast,
  [174] = 2,
    ACTIONS(70), 1,
      anon_sym_duringpast,
    STATE(7), 1,
      sym_timeFrame,
  [181] = 1,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_statmentStep,
  [186] = 1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_statmentStep,
  [191] = 1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_statmentStep,
  [196] = 1,
    ACTIONS(78), 1,
      aux_sym_includeStatment_token1,
  [200] = 1,
    ACTIONS(80), 1,
      aux_sym_includeStatment_token1,
  [204] = 1,
    ACTIONS(82), 1,
      anon_sym_duringpast,
  [208] = 1,
    ACTIONS(84), 1,
      aux_sym_includeStatment_token1,
  [212] = 1,
    ACTIONS(86), 1,
      aux_sym_includeStatment_token1,
  [216] = 1,
    ACTIONS(88), 1,
      aux_sym_table_token1,
  [220] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [224] = 1,
    ACTIONS(92), 1,
      aux_sym_includeStatment_token1,
  [228] = 1,
    ACTIONS(50), 1,
      aux_sym_includeStatment_token1,
  [232] = 1,
    ACTIONS(52), 1,
      aux_sym_includeStatment_token1,
  [236] = 1,
    ACTIONS(94), 1,
      aux_sym_includeStatment_token1,
  [240] = 1,
    ACTIONS(82), 1,
      aux_sym_includeStatment_token1,
  [244] = 1,
    ACTIONS(96), 1,
      aux_sym_table_token1,
  [248] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [252] = 1,
    ACTIONS(100), 1,
      aux_sym_table_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 96,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 123,
  [SMALL_STATE(14)] = 128,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 145,
  [SMALL_STATE(18)] = 150,
  [SMALL_STATE(19)] = 155,
  [SMALL_STATE(20)] = 160,
  [SMALL_STATE(21)] = 167,
  [SMALL_STATE(22)] = 174,
  [SMALL_STATE(23)] = 181,
  [SMALL_STATE(24)] = 186,
  [SMALL_STATE(25)] = 191,
  [SMALL_STATE(26)] = 196,
  [SMALL_STATE(27)] = 200,
  [SMALL_STATE(28)] = 204,
  [SMALL_STATE(29)] = 208,
  [SMALL_STATE(30)] = 212,
  [SMALL_STATE(31)] = 216,
  [SMALL_STATE(32)] = 220,
  [SMALL_STATE(33)] = 224,
  [SMALL_STATE(34)] = 228,
  [SMALL_STATE(35)] = 232,
  [SMALL_STATE(36)] = 236,
  [SMALL_STATE(37)] = 240,
  [SMALL_STATE(38)] = 244,
  [SMALL_STATE(39)] = 248,
  [SMALL_STATE(40)] = 252,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statment, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whereStatment, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeFrame, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_includeStatment, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_withStatment, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_includeStatment, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_listStatment, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sortStatment, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarizeStatment, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
