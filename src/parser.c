#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_outputregdec_token1 = 2,
  anon_sym_COMMA = 3,
  sym_name = 4,
  anon_sym_DASH = 5,
  sym_ident = 6,
  sym_reg = 7,
  anon_sym_DOT = 8,
  aux_sym_accspec_token1 = 9,
  aux_sym_accspec_token2 = 10,
  aux_sym_accspec_token3 = 11,
  anon_sym_LBRACK = 12,
  aux_sym_index_token1 = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  sym_alias = 17,
  sym_unif = 18,
  sym_const = 19,
  sym_meta_ident = 20,
  sym_in = 21,
  sym_out = 22,
  sym_propname = 23,
  sym_line_comment = 24,
  sym_int = 25,
  sym_float = 26,
  sym_program = 27,
  sym__item = 28,
  sym_aliasdec = 29,
  sym_inputregdec = 30,
  sym_outputregdec = 31,
  sym_meta = 32,
  sym_instruction = 33,
  sym_accspec = 34,
  sym_index = 35,
  sym_arr = 36,
  aux_sym_program_repeat1 = 37,
  aux_sym_program_repeat2 = 38,
  aux_sym_meta_repeat1 = 39,
  aux_sym_meta_repeat2 = 40,
  aux_sym_instruction_repeat1 = 41,
  aux_sym_index_repeat1 = 42,
  aux_sym_arr_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_outputregdec_token1] = "outputregdec_token1",
  [anon_sym_COMMA] = ",",
  [sym_name] = "name",
  [anon_sym_DASH] = "-",
  [sym_ident] = "ident",
  [sym_reg] = "reg",
  [anon_sym_DOT] = ".",
  [aux_sym_accspec_token1] = "accspec_token1",
  [aux_sym_accspec_token2] = "accspec_token2",
  [aux_sym_accspec_token3] = "accspec_token3",
  [anon_sym_LBRACK] = "[",
  [aux_sym_index_token1] = "index_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_alias] = "alias",
  [sym_unif] = "unif",
  [sym_const] = "const",
  [sym_meta_ident] = "meta_ident",
  [sym_in] = "in",
  [sym_out] = "out",
  [sym_propname] = "propname",
  [sym_line_comment] = "line_comment",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_aliasdec] = "aliasdec",
  [sym_inputregdec] = "inputregdec",
  [sym_outputregdec] = "outputregdec",
  [sym_meta] = "meta",
  [sym_instruction] = "instruction",
  [sym_accspec] = "accspec",
  [sym_index] = "index",
  [sym_arr] = "arr",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_meta_repeat2] = "meta_repeat2",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_index_repeat1] = "index_repeat1",
  [aux_sym_arr_repeat1] = "arr_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_outputregdec_token1] = aux_sym_outputregdec_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_name] = sym_name,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_ident] = sym_ident,
  [sym_reg] = sym_reg,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_accspec_token1] = aux_sym_accspec_token1,
  [aux_sym_accspec_token2] = aux_sym_accspec_token2,
  [aux_sym_accspec_token3] = aux_sym_accspec_token3,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_index_token1] = aux_sym_index_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_alias] = sym_alias,
  [sym_unif] = sym_unif,
  [sym_const] = sym_const,
  [sym_meta_ident] = sym_meta_ident,
  [sym_in] = sym_in,
  [sym_out] = sym_out,
  [sym_propname] = sym_propname,
  [sym_line_comment] = sym_line_comment,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_aliasdec] = sym_aliasdec,
  [sym_inputregdec] = sym_inputregdec,
  [sym_outputregdec] = sym_outputregdec,
  [sym_meta] = sym_meta,
  [sym_instruction] = sym_instruction,
  [sym_accspec] = sym_accspec,
  [sym_index] = sym_index,
  [sym_arr] = sym_arr,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_meta_repeat2] = aux_sym_meta_repeat2,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_index_repeat1] = aux_sym_index_repeat1,
  [aux_sym_arr_repeat1] = aux_sym_arr_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_outputregdec_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accspec_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accspec_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accspec_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_unif] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_in] = {
    .visible = true,
    .named = true,
  },
  [sym_out] = {
    .visible = true,
    .named = true,
  },
  [sym_propname] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_aliasdec] = {
    .visible = true,
    .named = true,
  },
  [sym_inputregdec] = {
    .visible = true,
    .named = true,
  },
  [sym_outputregdec] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_accspec] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_arr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_index_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arr_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_kind = 1,
  field_specifier = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
  [field_specifier] = "specifier",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 3},
  [9] = {.index = 17, .length = 2},
  [10] = {.index = 19, .length = 1},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 1},
  [13] = {.index = 22, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
  [1] =
    {field_kind, 0},
    {field_specifier, 2},
  [3] =
    {field_kind, 0},
    {field_specifier, 2, .inherited = true},
  [5] =
    {field_kind, 0},
    {field_specifier, 3},
  [7] =
    {field_kind, 0},
    {field_specifier, 3, .inherited = true},
  [9] =
    {field_kind, 0},
    {field_specifier, 2},
    {field_specifier, 3, .inherited = true},
  [12] =
    {field_specifier, 0, .inherited = true},
    {field_specifier, 1, .inherited = true},
  [14] =
    {field_kind, 0},
    {field_specifier, 3},
    {field_specifier, 4, .inherited = true},
  [17] =
    {field_kind, 0},
    {field_specifier, 4, .inherited = true},
  [19] =
    {field_specifier, 2},
  [20] =
    {field_specifier, 1},
  [21] =
    {field_specifier, 1, .inherited = true},
  [22] =
    {field_specifier, 3},
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
  [15] = 12,
  [16] = 10,
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 20,
  [32] = 32,
  [33] = 33,
  [34] = 18,
  [35] = 35,
  [36] = 17,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 66,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == ',') ADVANCE(130);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == ';') ADVANCE(178);
      if (lookahead == '[') ADVANCE(150);
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g' ||
          lookahead == 'r') ADVANCE(148);
      if (('s' <= lookahead && lookahead <= 'v')) ADVANCE(149);
      if (('w' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == '1' ||
          lookahead == 'L') ADVANCE(141);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(166);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == '9') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(144);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(5);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'k') ADVANCE(133);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 'q') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 82:
      if (lookahead == 'q') ADVANCE(131);
      END_STATE();
    case 83:
      if (lookahead == 'q') ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 106:
      if (lookahead == 'v') ADVANCE(132);
      END_STATE();
    case 107:
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'c' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 109:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 110:
      if (lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 111:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 112:
      if (lookahead == 'y') ADVANCE(163);
      END_STATE();
    case 113:
      if (lookahead == 'y') ADVANCE(166);
      END_STATE();
    case 114:
      if (lookahead == 'c' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 'd' ||
          lookahead == 'x') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'j') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == ';') ADVANCE(178);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'r' ||
          lookahead == 'v') ADVANCE(137);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 118:
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 119:
      if (lookahead == '3' ||
          lookahead == '4' ||
          lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(141);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 122:
      if (eof) ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'j') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 123:
      if (eof) ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == ',') ADVANCE(130);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == ';') ADVANCE(178);
      if (lookahead == '[') ADVANCE(150);
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'r' ||
          lookahead == 'v') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 124:
      if (eof) ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == ';') ADVANCE(178);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'r' ||
          lookahead == 'v') ADVANCE(137);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 125:
      if (eof) ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == ',') ADVANCE(130);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == ';') ADVANCE(178);
      if (lookahead == '[') ADVANCE(150);
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(3);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 126:
      if (eof) ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(126)
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == ';') ADVANCE(178);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_outputregdec_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == '1' ||
          lookahead == 'L') ADVANCE(141);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '9') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(144);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(141);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_reg);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_reg);
      if (lookahead == '1') ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_reg);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(141);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_reg);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_accspec_token1);
      if (('w' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_accspec_token2);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_accspec_token3);
      if (('s' <= lookahead && lookahead <= 'v')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_index_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_alias);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_unif);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_unif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_const);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_const);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_meta_ident);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_in);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_out);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_propname);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_propname);
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_propname);
      if (lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'f' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'v') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 122},
  [2] = {.lex_state = 122},
  [3] = {.lex_state = 122},
  [4] = {.lex_state = 122},
  [5] = {.lex_state = 122},
  [6] = {.lex_state = 123},
  [7] = {.lex_state = 123},
  [8] = {.lex_state = 123},
  [9] = {.lex_state = 123},
  [10] = {.lex_state = 123},
  [11] = {.lex_state = 123},
  [12] = {.lex_state = 123},
  [13] = {.lex_state = 123},
  [14] = {.lex_state = 123},
  [15] = {.lex_state = 123},
  [16] = {.lex_state = 123},
  [17] = {.lex_state = 123},
  [18] = {.lex_state = 123},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 123},
  [21] = {.lex_state = 123},
  [22] = {.lex_state = 123},
  [23] = {.lex_state = 124},
  [24] = {.lex_state = 124},
  [25] = {.lex_state = 124},
  [26] = {.lex_state = 124},
  [27] = {.lex_state = 124},
  [28] = {.lex_state = 124},
  [29] = {.lex_state = 125},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 125},
  [32] = {.lex_state = 123},
  [33] = {.lex_state = 124},
  [34] = {.lex_state = 125},
  [35] = {.lex_state = 124},
  [36] = {.lex_state = 125},
  [37] = {.lex_state = 124},
  [38] = {.lex_state = 124},
  [39] = {.lex_state = 124},
  [40] = {.lex_state = 124},
  [41] = {.lex_state = 0},
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
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 126},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 126},
  [65] = {.lex_state = 126},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 126},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 126},
  [71] = {.lex_state = 117},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 123},
  [75] = {.lex_state = 123},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 123},
  [78] = {.lex_state = 123},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 123},
  [82] = {.lex_state = 126},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 123},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 123},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 123},
  [91] = {.lex_state = 124},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 126},
  [94] = {.lex_state = 124},
  [95] = {.lex_state = 124},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 124},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 124},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 123},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 125},
  [114] = {.lex_state = 123},
  [115] = {.lex_state = 126},
  [116] = {.lex_state = 123},
  [117] = {.lex_state = 125},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 126},
  [120] = {.lex_state = 125},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_outputregdec_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_accspec_token1] = ACTIONS(1),
    [aux_sym_accspec_token2] = ACTIONS(1),
    [aux_sym_accspec_token3] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_index_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_in] = ACTIONS(1),
    [sym_out] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(118),
    [sym__item] = STATE(45),
    [sym_aliasdec] = STATE(104),
    [sym_inputregdec] = STATE(104),
    [sym_outputregdec] = STATE(104),
    [sym_meta] = STATE(45),
    [sym_instruction] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_alias] = ACTIONS(9),
    [sym_unif] = ACTIONS(11),
    [sym_const] = ACTIONS(13),
    [sym_meta_ident] = ACTIONS(15),
    [sym_in] = ACTIONS(17),
    [sym_out] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      sym_alias,
    ACTIONS(11), 1,
      sym_unif,
    ACTIONS(13), 1,
      sym_const,
    ACTIONS(15), 1,
      sym_meta_ident,
    ACTIONS(17), 1,
      sym_in,
    ACTIONS(19), 1,
      sym_out,
    ACTIONS(21), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(104), 3,
      sym_aliasdec,
      sym_inputregdec,
      sym_outputregdec,
    STATE(105), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [44] = 13,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      sym_alias,
    ACTIONS(11), 1,
      sym_unif,
    ACTIONS(13), 1,
      sym_const,
    ACTIONS(15), 1,
      sym_meta_ident,
    ACTIONS(17), 1,
      sym_in,
    ACTIONS(19), 1,
      sym_out,
    ACTIONS(21), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(104), 3,
      sym_aliasdec,
      sym_inputregdec,
      sym_outputregdec,
    STATE(105), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [88] = 12,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      sym_alias,
    ACTIONS(11), 1,
      sym_unif,
    ACTIONS(13), 1,
      sym_const,
    ACTIONS(15), 1,
      sym_meta_ident,
    ACTIONS(17), 1,
      sym_in,
    ACTIONS(19), 1,
      sym_out,
    ACTIONS(21), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(104), 3,
      sym_aliasdec,
      sym_inputregdec,
      sym_outputregdec,
    STATE(105), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [129] = 5,
    ACTIONS(21), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_program_repeat1,
    ACTIONS(34), 2,
      sym_unif,
      sym_const,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      sym_name,
      sym_alias,
      sym_meta_ident,
      sym_in,
      sym_out,
  [151] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_index,
    STATE(22), 1,
      sym_accspec,
    ACTIONS(36), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_int,
    ACTIONS(38), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_float,
  [177] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      sym_accspec,
    STATE(56), 1,
      sym_index,
    STATE(57), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [203] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      sym_accspec,
    STATE(50), 1,
      sym_index,
    STATE(51), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [229] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(56), 1,
      sym_ident,
    ACTIONS(59), 1,
      sym_reg,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(67), 1,
      sym_float,
    STATE(9), 1,
      aux_sym_index_repeat1,
    ACTIONS(62), 2,
      aux_sym_index_token1,
      sym_int,
  [252] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      sym_ident,
    ACTIONS(72), 1,
      sym_reg,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    ACTIONS(78), 1,
      sym_float,
    STATE(9), 1,
      aux_sym_index_repeat1,
    ACTIONS(74), 2,
      aux_sym_index_token1,
      sym_int,
  [275] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_accspec,
    STATE(84), 1,
      sym_index,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [296] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      sym_ident,
    ACTIONS(72), 1,
      sym_reg,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(86), 1,
      sym_float,
    STATE(10), 1,
      aux_sym_index_repeat1,
    ACTIONS(82), 2,
      aux_sym_index_token1,
      sym_int,
  [319] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      sym_reg,
    STATE(81), 1,
      sym_accspec,
    STATE(87), 1,
      sym_index,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [342] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      sym_index,
    STATE(80), 1,
      sym_accspec,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [363] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      sym_ident,
    ACTIONS(72), 1,
      sym_reg,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    ACTIONS(98), 1,
      sym_float,
    STATE(16), 1,
      aux_sym_index_repeat1,
    ACTIONS(94), 2,
      aux_sym_index_token1,
      sym_int,
  [386] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      sym_ident,
    ACTIONS(72), 1,
      sym_reg,
    ACTIONS(78), 1,
      sym_float,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_index_repeat1,
    ACTIONS(74), 2,
      aux_sym_index_token1,
      sym_int,
  [409] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(102), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_int,
    ACTIONS(104), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_float,
  [423] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(106), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_int,
    ACTIONS(108), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_float,
  [437] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      sym_index,
    STATE(44), 1,
      aux_sym_meta_repeat1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [457] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_int,
    ACTIONS(116), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_float,
  [471] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_int,
    ACTIONS(120), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_float,
  [485] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(122), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_int,
    ACTIONS(124), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_float,
  [499] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [516] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [533] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_DASH,
    ACTIONS(138), 1,
      sym_ident,
    ACTIONS(140), 1,
      sym_reg,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [550] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [567] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [584] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [601] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      sym_propname,
    STATE(113), 1,
      sym_index,
    STATE(120), 1,
      sym_accspec,
  [620] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym_index,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [635] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [646] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      sym_reg,
    STATE(114), 1,
      sym_accspec,
    STATE(116), 1,
      sym_index,
  [665] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [682] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [693] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [710] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [721] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [738] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [755] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [772] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [789] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [803] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_meta_repeat1,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [817] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_meta_repeat1,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [831] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_meta_repeat1,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [845] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(48), 1,
      aux_sym_program_repeat2,
  [861] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_meta_repeat2,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [875] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_meta_repeat2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [889] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(54), 1,
      aux_sym_program_repeat2,
  [905] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [919] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [933] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [947] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [961] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [975] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(54), 1,
      aux_sym_program_repeat2,
  [991] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1005] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1019] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1033] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_meta_repeat1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1047] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1061] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1075] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_meta_repeat2,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1089] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      sym_ident,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1100] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1109] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 1,
      sym_ident,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1120] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 1,
      sym_ident,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1131] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 3,
      aux_sym_accspec_token1,
      aux_sym_accspec_token2,
      aux_sym_accspec_token3,
  [1140] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      sym_ident,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1151] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1160] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_arr_repeat1,
  [1173] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      sym_ident,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1184] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      aux_sym_outputregdec_token1,
    ACTIONS(256), 1,
      sym_ident,
    ACTIONS(258), 1,
      sym_reg,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1206] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1215] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      sym_reg,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1226] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      sym_reg,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1237] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_arr_repeat1,
  [1250] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      sym_int,
    ACTIONS(281), 1,
      sym_float,
  [1263] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      sym_int,
    ACTIONS(287), 1,
      sym_float,
  [1276] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1285] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1294] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 1,
      sym_reg,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      sym_ident,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1316] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1325] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1334] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      sym_reg,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 3,
      aux_sym_accspec_token1,
      aux_sym_accspec_token2,
      aux_sym_accspec_token3,
  [1354] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(307), 1,
      sym_reg,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1365] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_arr_repeat1,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1387] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      sym_int,
    ACTIONS(281), 1,
      sym_float,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
  [1400] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_reg,
  [1413] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1422] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      sym_ident,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1433] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(317), 1,
      sym_ident,
    ACTIONS(319), 1,
      sym_reg,
  [1443] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(321), 1,
      sym_ident,
    ACTIONS(323), 1,
      sym_reg,
  [1453] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_arr,
  [1463] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1471] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_arr,
  [1481] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1489] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(331), 1,
      sym_ident,
    ACTIONS(333), 1,
      sym_reg,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1507] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1515] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1523] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1531] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1539] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(341), 1,
      sym_reg,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1557] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1565] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1573] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1581] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      sym_int,
    ACTIONS(281), 1,
      sym_float,
  [1591] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1599] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      sym_propname,
  [1606] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(351), 1,
      sym_reg,
  [1613] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      sym_ident,
  [1620] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(353), 1,
      sym_reg,
  [1627] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      sym_propname,
  [1634] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
  [1641] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      sym_ident,
  [1648] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 1,
      sym_propname,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 203,
  [SMALL_STATE(9)] = 229,
  [SMALL_STATE(10)] = 252,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 296,
  [SMALL_STATE(13)] = 319,
  [SMALL_STATE(14)] = 342,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 386,
  [SMALL_STATE(17)] = 409,
  [SMALL_STATE(18)] = 423,
  [SMALL_STATE(19)] = 437,
  [SMALL_STATE(20)] = 457,
  [SMALL_STATE(21)] = 471,
  [SMALL_STATE(22)] = 485,
  [SMALL_STATE(23)] = 499,
  [SMALL_STATE(24)] = 516,
  [SMALL_STATE(25)] = 533,
  [SMALL_STATE(26)] = 550,
  [SMALL_STATE(27)] = 567,
  [SMALL_STATE(28)] = 584,
  [SMALL_STATE(29)] = 601,
  [SMALL_STATE(30)] = 620,
  [SMALL_STATE(31)] = 635,
  [SMALL_STATE(32)] = 646,
  [SMALL_STATE(33)] = 665,
  [SMALL_STATE(34)] = 682,
  [SMALL_STATE(35)] = 693,
  [SMALL_STATE(36)] = 710,
  [SMALL_STATE(37)] = 721,
  [SMALL_STATE(38)] = 738,
  [SMALL_STATE(39)] = 755,
  [SMALL_STATE(40)] = 772,
  [SMALL_STATE(41)] = 789,
  [SMALL_STATE(42)] = 803,
  [SMALL_STATE(43)] = 817,
  [SMALL_STATE(44)] = 831,
  [SMALL_STATE(45)] = 845,
  [SMALL_STATE(46)] = 861,
  [SMALL_STATE(47)] = 875,
  [SMALL_STATE(48)] = 889,
  [SMALL_STATE(49)] = 905,
  [SMALL_STATE(50)] = 919,
  [SMALL_STATE(51)] = 933,
  [SMALL_STATE(52)] = 947,
  [SMALL_STATE(53)] = 961,
  [SMALL_STATE(54)] = 975,
  [SMALL_STATE(55)] = 991,
  [SMALL_STATE(56)] = 1005,
  [SMALL_STATE(57)] = 1019,
  [SMALL_STATE(58)] = 1033,
  [SMALL_STATE(59)] = 1047,
  [SMALL_STATE(60)] = 1061,
  [SMALL_STATE(61)] = 1075,
  [SMALL_STATE(62)] = 1089,
  [SMALL_STATE(63)] = 1100,
  [SMALL_STATE(64)] = 1109,
  [SMALL_STATE(65)] = 1120,
  [SMALL_STATE(66)] = 1131,
  [SMALL_STATE(67)] = 1140,
  [SMALL_STATE(68)] = 1151,
  [SMALL_STATE(69)] = 1160,
  [SMALL_STATE(70)] = 1173,
  [SMALL_STATE(71)] = 1184,
  [SMALL_STATE(72)] = 1197,
  [SMALL_STATE(73)] = 1206,
  [SMALL_STATE(74)] = 1215,
  [SMALL_STATE(75)] = 1226,
  [SMALL_STATE(76)] = 1237,
  [SMALL_STATE(77)] = 1250,
  [SMALL_STATE(78)] = 1263,
  [SMALL_STATE(79)] = 1276,
  [SMALL_STATE(80)] = 1285,
  [SMALL_STATE(81)] = 1294,
  [SMALL_STATE(82)] = 1305,
  [SMALL_STATE(83)] = 1316,
  [SMALL_STATE(84)] = 1325,
  [SMALL_STATE(85)] = 1334,
  [SMALL_STATE(86)] = 1345,
  [SMALL_STATE(87)] = 1354,
  [SMALL_STATE(88)] = 1365,
  [SMALL_STATE(89)] = 1378,
  [SMALL_STATE(90)] = 1387,
  [SMALL_STATE(91)] = 1400,
  [SMALL_STATE(92)] = 1413,
  [SMALL_STATE(93)] = 1422,
  [SMALL_STATE(94)] = 1433,
  [SMALL_STATE(95)] = 1443,
  [SMALL_STATE(96)] = 1453,
  [SMALL_STATE(97)] = 1463,
  [SMALL_STATE(98)] = 1471,
  [SMALL_STATE(99)] = 1481,
  [SMALL_STATE(100)] = 1489,
  [SMALL_STATE(101)] = 1499,
  [SMALL_STATE(102)] = 1507,
  [SMALL_STATE(103)] = 1515,
  [SMALL_STATE(104)] = 1523,
  [SMALL_STATE(105)] = 1531,
  [SMALL_STATE(106)] = 1539,
  [SMALL_STATE(107)] = 1549,
  [SMALL_STATE(108)] = 1557,
  [SMALL_STATE(109)] = 1565,
  [SMALL_STATE(110)] = 1573,
  [SMALL_STATE(111)] = 1581,
  [SMALL_STATE(112)] = 1591,
  [SMALL_STATE(113)] = 1599,
  [SMALL_STATE(114)] = 1606,
  [SMALL_STATE(115)] = 1613,
  [SMALL_STATE(116)] = 1620,
  [SMALL_STATE(117)] = 1627,
  [SMALL_STATE(118)] = 1634,
  [SMALL_STATE(119)] = 1641,
  [SMALL_STATE(120)] = 1648,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 7), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 7), SHIFT_REPEAT(6),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 7), SHIFT_REPEAT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 7),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 7), SHIFT_REPEAT(9),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputregdec, 2, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accspec, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accspec, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, .production_id = 12),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, .production_id = 12),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 11),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 11),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 8),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 9),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(91),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2), SHIFT_REPEAT(115),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 9),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 8),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(119),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 6),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outputregdec, 4, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outputregdec, 4, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arr_repeat1, 2), SHIFT_REPEAT(111),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arr_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 4, .production_id = 13),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputregdec, 3, .production_id = 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 3, .production_id = 10),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outputregdec, 3, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputregdec, 3, .production_id = 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliasdec, 4, .production_id = 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliasdec, 4, .production_id = 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outputregdec, 5, .production_id = 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outputregdec, 5, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliasdec, 3, .production_id = 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputregdec, 4, .production_id = 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputregdec, 4, .production_id = 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [355] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pica200(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
