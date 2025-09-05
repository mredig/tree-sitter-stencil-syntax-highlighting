#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_text = 1,
  anon_sym_LBRACE_LBRACE = 2,
  aux_sym_expression_token1 = 3,
  anon_sym_RBRACE_RBRACE = 4,
  sym_expression_content = 5,
  anon_sym_LBRACE_PERCENT = 6,
  anon_sym_PERCENT_RBRACE = 7,
  sym_statement_content = 8,
  anon_sym_LBRACE_POUND = 9,
  anon_sym_POUND_RBRACE = 10,
  sym_comment_content = 11,
  sym_template = 12,
  sym__content = 13,
  sym_expression = 14,
  sym_statement = 15,
  sym_comment = 16,
  aux_sym_template_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [aux_sym_expression_token1] = "expression_token1",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_expression_content] = "expression_content",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [sym_statement_content] = "statement_content",
  [anon_sym_LBRACE_POUND] = "{#",
  [anon_sym_POUND_RBRACE] = "#}",
  [sym_comment_content] = "comment_content",
  [sym_template] = "template",
  [sym__content] = "_content",
  [sym_expression] = "expression",
  [sym_statement] = "statement",
  [sym_comment] = "comment",
  [aux_sym_template_repeat1] = "template_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_expression_content] = sym_expression_content,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [sym_statement_content] = sym_statement_content,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [sym_comment_content] = sym_comment_content,
  [sym_template] = sym_template,
  [sym__content] = sym__content,
  [sym_expression] = sym_expression,
  [sym_statement] = sym_statement,
  [sym_comment] = sym_comment,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_expression_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_statement_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__content] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '}') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '{') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '}') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '}') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(13);
      END_STATE();
    case 5:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(19);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '{') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_expression_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_expression_content);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_statement_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_statement_content);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(22),
    [sym__content] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
  },
  [2] = {
    [sym__content] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
  },
  [3] = {
    [sym__content] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(22),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(25),
    [anon_sym_LBRACE_POUND] = ACTIONS(28),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(33), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [10] = 2,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(37), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [20] = 2,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(41), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [30] = 2,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(45), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [40] = 2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(49), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [50] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(53), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [60] = 2,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(57), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [70] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(61), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [80] = 2,
    ACTIONS(63), 1,
      aux_sym_expression_token1,
    ACTIONS(65), 1,
      sym_expression_content,
  [87] = 2,
    ACTIONS(67), 1,
      aux_sym_expression_token1,
    ACTIONS(69), 1,
      sym_statement_content,
  [94] = 2,
    ACTIONS(71), 1,
      anon_sym_POUND_RBRACE,
    ACTIONS(73), 1,
      sym_comment_content,
  [101] = 2,
    ACTIONS(75), 1,
      aux_sym_expression_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACE_RBRACE,
  [108] = 2,
    ACTIONS(79), 1,
      aux_sym_expression_token1,
    ACTIONS(81), 1,
      anon_sym_PERCENT_RBRACE,
  [115] = 2,
    ACTIONS(83), 1,
      aux_sym_expression_token1,
    ACTIONS(85), 1,
      anon_sym_RBRACE_RBRACE,
  [122] = 2,
    ACTIONS(87), 1,
      aux_sym_expression_token1,
    ACTIONS(89), 1,
      anon_sym_PERCENT_RBRACE,
  [129] = 1,
    ACTIONS(91), 1,
      anon_sym_POUND_RBRACE,
  [133] = 1,
    ACTIONS(93), 1,
      anon_sym_PERCENT_RBRACE,
  [137] = 1,
    ACTIONS(95), 1,
      anon_sym_RBRACE_RBRACE,
  [141] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [145] = 1,
    ACTIONS(99), 1,
      anon_sym_PERCENT_RBRACE,
  [149] = 1,
    ACTIONS(101), 1,
      anon_sym_RBRACE_RBRACE,
  [153] = 1,
    ACTIONS(103), 1,
      sym_statement_content,
  [157] = 1,
    ACTIONS(105), 1,
      sym_expression_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 40,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 70,
  [SMALL_STATE(12)] = 80,
  [SMALL_STATE(13)] = 87,
  [SMALL_STATE(14)] = 94,
  [SMALL_STATE(15)] = 101,
  [SMALL_STATE(16)] = 108,
  [SMALL_STATE(17)] = 115,
  [SMALL_STATE(18)] = 122,
  [SMALL_STATE(19)] = 129,
  [SMALL_STATE(20)] = 133,
  [SMALL_STATE(21)] = 137,
  [SMALL_STATE(22)] = 141,
  [SMALL_STATE(23)] = 145,
  [SMALL_STATE(24)] = 149,
  [SMALL_STATE(25)] = 153,
  [SMALL_STATE(26)] = 157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 5, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 5, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 5, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_stencil(void) {
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
