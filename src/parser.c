#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_meta_token1 = 2,
  anon_sym_COMMA = 3,
  anon_sym_DASH = 4,
  sym_name = 5,
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
  aux_sym_meta_ident_token1 = 18,
  sym_in = 19,
  sym_out = 20,
  sym_propname = 21,
  sym_line_comment = 22,
  sym_int = 23,
  sym_float = 24,
  sym_program = 25,
  sym__item = 26,
  sym_meta = 27,
  sym_instruction = 28,
  sym_accspec = 29,
  sym_index = 30,
  sym_arr = 31,
  sym_meta_ident = 32,
  aux_sym_program_repeat1 = 33,
  aux_sym_program_repeat2 = 34,
  aux_sym_meta_repeat1 = 35,
  aux_sym_instruction_repeat1 = 36,
  aux_sym_index_repeat1 = 37,
  aux_sym_arr_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_meta_token1] = "meta_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [sym_name] = "name",
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
  [aux_sym_meta_ident_token1] = "meta_ident_token1",
  [sym_in] = "in",
  [sym_out] = "out",
  [sym_propname] = "propname",
  [sym_line_comment] = "line_comment",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_meta] = "meta",
  [sym_instruction] = "instruction",
  [sym_accspec] = "accspec",
  [sym_index] = "index",
  [sym_arr] = "arr",
  [sym_meta_ident] = "meta_ident",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_index_repeat1] = "index_repeat1",
  [aux_sym_arr_repeat1] = "arr_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_meta_token1] = aux_sym_meta_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_name] = sym_name,
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
  [aux_sym_meta_ident_token1] = aux_sym_meta_ident_token1,
  [sym_in] = sym_in,
  [sym_out] = sym_out,
  [sym_propname] = sym_propname,
  [sym_line_comment] = sym_line_comment,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_meta] = sym_meta,
  [sym_instruction] = sym_instruction,
  [sym_accspec] = sym_accspec,
  [sym_index] = sym_index,
  [sym_arr] = sym_arr,
  [sym_meta_ident] = sym_meta_ident,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
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
  [aux_sym_meta_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym_meta_ident_token1] = {
    .visible = false,
    .named = false,
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
  [sym_meta_ident] = {
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
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 3},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 3},
  [11] = {.index = 20, .length = 2},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
  [1] =
    {field_kind, 0},
    {field_specifier, 1, .inherited = true},
  [3] =
    {field_kind, 0},
    {field_specifier, 2},
  [5] =
    {field_kind, 0},
    {field_specifier, 2, .inherited = true},
  [7] =
    {field_specifier, 0, .inherited = true},
    {field_specifier, 1, .inherited = true},
  [9] =
    {field_kind, 0},
    {field_specifier, 3},
  [11] =
    {field_kind, 0},
    {field_specifier, 3, .inherited = true},
  [13] =
    {field_kind, 0},
    {field_specifier, 2},
    {field_specifier, 3, .inherited = true},
  [16] =
    {field_specifier, 2},
  [17] =
    {field_kind, 0},
    {field_specifier, 3},
    {field_specifier, 4, .inherited = true},
  [20] =
    {field_kind, 0},
    {field_specifier, 4, .inherited = true},
  [22] =
    {field_specifier, 1},
  [23] =
    {field_specifier, 1, .inherited = true},
  [24] =
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
  [13] = 9,
  [14] = 14,
  [15] = 10,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 23,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 20,
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
  [79] = 62,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '+') ADVANCE(142);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == ';') ADVANCE(155);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g' ||
          lookahead == 'r') ADVANCE(139);
      if (('s' <= lookahead && lookahead <= 'v')) ADVANCE(140);
      if (('w' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == '1' ||
          lookahead == 'L') ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(154);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(152);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(134);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(123);
      END_STATE();
    case 8:
      if (lookahead == '9') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(135);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'g') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(132);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'k') ADVANCE(125);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(7);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 'q') ADVANCE(100);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'q') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 77:
      if (lookahead == 'q') ADVANCE(123);
      END_STATE();
    case 78:
      if (lookahead == 'q') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 101:
      if (lookahead == 'v') ADVANCE(124);
      END_STATE();
    case 102:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 103:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 105:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 106:
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 108:
      if (lookahead == 'c' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'd' ||
          lookahead == 'x') ADVANCE(123);
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(110)
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ';') ADVANCE(155);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(111)
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == ';') ADVANCE(155);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'r' ||
          lookahead == 'v') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 112:
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 113:
      if (lookahead == '3' ||
          lookahead == '4' ||
          lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 115:
      if (eof) ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(115)
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ';') ADVANCE(155);
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'j') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 116:
      if (eof) ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(116)
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '+') ADVANCE(142);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ';') ADVANCE(155);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'r' ||
          lookahead == 'v') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == ';') ADVANCE(155);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'r' ||
          lookahead == 'v') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_meta_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == '1' ||
          lookahead == 'L') ADVANCE(132);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '9') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(135);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(132);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_reg);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_reg);
      if (lookahead == '1') ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_reg);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_reg);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_accspec_token1);
      if (('w' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_accspec_token2);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g' ||
          lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_accspec_token3);
      if (('s' <= lookahead && lookahead <= 'v')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_index_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_alias);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_meta_ident_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_meta_ident_token1);
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_in);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_out);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_propname);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_propname);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_propname);
      if (lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 115},
  [2] = {.lex_state = 115},
  [3] = {.lex_state = 115},
  [4] = {.lex_state = 115},
  [5] = {.lex_state = 116},
  [6] = {.lex_state = 115},
  [7] = {.lex_state = 116},
  [8] = {.lex_state = 116},
  [9] = {.lex_state = 116},
  [10] = {.lex_state = 116},
  [11] = {.lex_state = 116},
  [12] = {.lex_state = 116},
  [13] = {.lex_state = 116},
  [14] = {.lex_state = 116},
  [15] = {.lex_state = 116},
  [16] = {.lex_state = 116},
  [17] = {.lex_state = 116},
  [18] = {.lex_state = 116},
  [19] = {.lex_state = 116},
  [20] = {.lex_state = 116},
  [21] = {.lex_state = 116},
  [22] = {.lex_state = 116},
  [23] = {.lex_state = 116},
  [24] = {.lex_state = 117},
  [25] = {.lex_state = 115},
  [26] = {.lex_state = 117},
  [27] = {.lex_state = 117},
  [28] = {.lex_state = 117},
  [29] = {.lex_state = 117},
  [30] = {.lex_state = 116},
  [31] = {.lex_state = 117},
  [32] = {.lex_state = 117},
  [33] = {.lex_state = 117},
  [34] = {.lex_state = 117},
  [35] = {.lex_state = 117},
  [36] = {.lex_state = 115},
  [37] = {.lex_state = 117},
  [38] = {.lex_state = 110},
  [39] = {.lex_state = 117},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 115},
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
  [59] = {.lex_state = 117},
  [60] = {.lex_state = 115},
  [61] = {.lex_state = 111},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 115},
  [66] = {.lex_state = 115},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 117},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 115},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 115},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 115},
  [89] = {.lex_state = 117},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 117},
  [94] = {.lex_state = 115},
  [95] = {.lex_state = 117},
  [96] = {.lex_state = 117},
  [97] = {.lex_state = 117},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 115},
  [100] = {.lex_state = 115},
  [101] = {.lex_state = 115},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 115},
  [104] = {.lex_state = 115},
  [105] = {.lex_state = 115},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_meta_token1] = ACTIONS(1),
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
    [sym_program] = STATE(102),
    [sym__item] = STATE(44),
    [sym_meta] = STATE(44),
    [sym_instruction] = STATE(44),
    [sym_meta_ident] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_alias] = ACTIONS(9),
    [aux_sym_meta_ident_token1] = ACTIONS(11),
    [sym_in] = ACTIONS(13),
    [sym_out] = ACTIONS(15),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      sym_alias,
    ACTIONS(11), 1,
      aux_sym_meta_ident_token1,
    ACTIONS(13), 1,
      sym_in,
    ACTIONS(15), 1,
      sym_out,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(45), 1,
      sym_meta_ident,
    STATE(84), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [36] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      sym_alias,
    ACTIONS(11), 1,
      aux_sym_meta_ident_token1,
    ACTIONS(13), 1,
      sym_in,
    ACTIONS(15), 1,
      sym_out,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(45), 1,
      sym_meta_ident,
    STATE(84), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [72] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      sym_alias,
    ACTIONS(11), 1,
      aux_sym_meta_ident_token1,
    ACTIONS(13), 1,
      sym_in,
    ACTIONS(15), 1,
      sym_out,
    ACTIONS(19), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(45), 1,
      sym_meta_ident,
    STATE(84), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [105] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_index,
    STATE(21), 1,
      sym_accspec,
    ACTIONS(23), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_float,
    ACTIONS(25), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_int,
  [131] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_program_repeat1,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      sym_name,
      sym_alias,
      aux_sym_meta_ident_token1,
      sym_in,
      sym_out,
  [149] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_accspec,
    STATE(53), 1,
      sym_index,
    STATE(54), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [175] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_accspec,
    STATE(51), 1,
      sym_index,
    STATE(52), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [201] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      sym_ident,
    ACTIONS(50), 1,
      sym_reg,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    ACTIONS(56), 1,
      sym_int,
    STATE(18), 1,
      aux_sym_index_repeat1,
    ACTIONS(52), 2,
      aux_sym_index_token1,
      sym_float,
  [224] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      sym_ident,
    ACTIONS(50), 1,
      sym_reg,
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    ACTIONS(62), 1,
      sym_int,
    STATE(9), 1,
      aux_sym_index_repeat1,
    ACTIONS(58), 2,
      aux_sym_index_token1,
      sym_float,
  [247] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_accspec,
    STATE(78), 1,
      sym_index,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [268] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_accspec,
    STATE(70), 1,
      sym_index,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [289] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      sym_ident,
    ACTIONS(50), 1,
      sym_reg,
    ACTIONS(56), 1,
      sym_int,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_index_repeat1,
    ACTIONS(52), 2,
      aux_sym_index_token1,
      sym_float,
  [312] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_index,
    STATE(80), 1,
      sym_accspec,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [333] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      sym_ident,
    ACTIONS(50), 1,
      sym_reg,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    ACTIONS(76), 1,
      sym_int,
    STATE(13), 1,
      aux_sym_index_repeat1,
    ACTIONS(72), 2,
      aux_sym_index_token1,
      sym_float,
  [356] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_index,
    STATE(75), 1,
      sym_accspec,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [377] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      sym_reg,
    STATE(60), 1,
      sym_accspec,
    STATE(74), 1,
      sym_index,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [400] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_reg,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(95), 1,
      sym_int,
    STATE(18), 1,
      aux_sym_index_repeat1,
    ACTIONS(90), 2,
      aux_sym_index_token1,
      sym_float,
  [423] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(98), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_float,
    ACTIONS(100), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_int,
  [437] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(102), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_float,
    ACTIONS(104), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_int,
  [451] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(106), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_float,
    ACTIONS(108), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_int,
  [465] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_float,
    ACTIONS(112), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_int,
  [479] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_float,
    ACTIONS(116), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_int,
  [493] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [510] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [521] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [538] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [555] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [572] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [589] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      sym_reg,
    STATE(103), 1,
      sym_index,
    STATE(105), 1,
      sym_accspec,
  [608] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [625] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [642] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [659] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [676] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      sym_ident,
    ACTIONS(146), 1,
      sym_reg,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [693] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [704] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [721] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      sym_propname,
    STATE(100), 1,
      sym_index,
    STATE(101), 1,
      sym_accspec,
  [740] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [757] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_arr,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [772] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [783] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [797] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [811] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(46), 1,
      aux_sym_program_repeat2,
  [827] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_meta_repeat1,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [841] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(47), 1,
      aux_sym_program_repeat2,
  [857] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(47), 1,
      aux_sym_program_repeat2,
  [873] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_meta_repeat1,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [887] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_meta_repeat1,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [901] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [915] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [929] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [943] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [957] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [971] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [985] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [999] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1013] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1027] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      anon_sym_DASH,
    ACTIONS(217), 1,
      sym_ident,
    ACTIONS(219), 1,
      sym_reg,
  [1040] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      sym_reg,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1051] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      aux_sym_meta_token1,
    ACTIONS(227), 1,
      sym_ident,
    ACTIONS(229), 1,
      sym_reg,
  [1064] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 3,
      aux_sym_accspec_token1,
      aux_sym_accspec_token2,
      aux_sym_accspec_token3,
  [1073] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1082] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_arr_repeat1,
  [1095] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(241), 1,
      sym_reg,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1106] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(245), 1,
      sym_reg,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1126] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1144] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1153] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_arr_repeat1,
  [1166] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
  [1179] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1188] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 1,
      sym_reg,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1199] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1208] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1217] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 3,
      aux_sym_accspec_token1,
      aux_sym_accspec_token2,
      aux_sym_accspec_token3,
  [1244] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1253] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_arr_repeat1,
  [1266] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1275] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1284] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1292] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      sym_int,
  [1302] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1318] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      sym_int,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
  [1328] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      sym_ident,
    ACTIONS(288), 1,
      sym_reg,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1346] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1354] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1362] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_ident,
    ACTIONS(296), 1,
      sym_reg,
  [1372] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    ACTIONS(300), 1,
      sym_int,
  [1382] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      sym_ident,
    ACTIONS(304), 1,
      sym_reg,
  [1392] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(306), 1,
      sym_ident,
    ACTIONS(308), 1,
      sym_reg,
  [1402] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 1,
      sym_ident,
    ACTIONS(312), 1,
      sym_reg,
  [1412] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1420] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      sym_propname,
  [1427] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      sym_propname,
  [1434] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      sym_propname,
  [1441] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
  [1448] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 1,
      sym_reg,
  [1455] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      sym_int,
  [1462] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      sym_reg,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 149,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 201,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 247,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 289,
  [SMALL_STATE(14)] = 312,
  [SMALL_STATE(15)] = 333,
  [SMALL_STATE(16)] = 356,
  [SMALL_STATE(17)] = 377,
  [SMALL_STATE(18)] = 400,
  [SMALL_STATE(19)] = 423,
  [SMALL_STATE(20)] = 437,
  [SMALL_STATE(21)] = 451,
  [SMALL_STATE(22)] = 465,
  [SMALL_STATE(23)] = 479,
  [SMALL_STATE(24)] = 493,
  [SMALL_STATE(25)] = 510,
  [SMALL_STATE(26)] = 521,
  [SMALL_STATE(27)] = 538,
  [SMALL_STATE(28)] = 555,
  [SMALL_STATE(29)] = 572,
  [SMALL_STATE(30)] = 589,
  [SMALL_STATE(31)] = 608,
  [SMALL_STATE(32)] = 625,
  [SMALL_STATE(33)] = 642,
  [SMALL_STATE(34)] = 659,
  [SMALL_STATE(35)] = 676,
  [SMALL_STATE(36)] = 693,
  [SMALL_STATE(37)] = 704,
  [SMALL_STATE(38)] = 721,
  [SMALL_STATE(39)] = 740,
  [SMALL_STATE(40)] = 757,
  [SMALL_STATE(41)] = 772,
  [SMALL_STATE(42)] = 783,
  [SMALL_STATE(43)] = 797,
  [SMALL_STATE(44)] = 811,
  [SMALL_STATE(45)] = 827,
  [SMALL_STATE(46)] = 841,
  [SMALL_STATE(47)] = 857,
  [SMALL_STATE(48)] = 873,
  [SMALL_STATE(49)] = 887,
  [SMALL_STATE(50)] = 901,
  [SMALL_STATE(51)] = 915,
  [SMALL_STATE(52)] = 929,
  [SMALL_STATE(53)] = 943,
  [SMALL_STATE(54)] = 957,
  [SMALL_STATE(55)] = 971,
  [SMALL_STATE(56)] = 985,
  [SMALL_STATE(57)] = 999,
  [SMALL_STATE(58)] = 1013,
  [SMALL_STATE(59)] = 1027,
  [SMALL_STATE(60)] = 1040,
  [SMALL_STATE(61)] = 1051,
  [SMALL_STATE(62)] = 1064,
  [SMALL_STATE(63)] = 1073,
  [SMALL_STATE(64)] = 1082,
  [SMALL_STATE(65)] = 1095,
  [SMALL_STATE(66)] = 1106,
  [SMALL_STATE(67)] = 1117,
  [SMALL_STATE(68)] = 1126,
  [SMALL_STATE(69)] = 1135,
  [SMALL_STATE(70)] = 1144,
  [SMALL_STATE(71)] = 1153,
  [SMALL_STATE(72)] = 1166,
  [SMALL_STATE(73)] = 1179,
  [SMALL_STATE(74)] = 1188,
  [SMALL_STATE(75)] = 1199,
  [SMALL_STATE(76)] = 1208,
  [SMALL_STATE(77)] = 1217,
  [SMALL_STATE(78)] = 1226,
  [SMALL_STATE(79)] = 1235,
  [SMALL_STATE(80)] = 1244,
  [SMALL_STATE(81)] = 1253,
  [SMALL_STATE(82)] = 1266,
  [SMALL_STATE(83)] = 1275,
  [SMALL_STATE(84)] = 1284,
  [SMALL_STATE(85)] = 1292,
  [SMALL_STATE(86)] = 1302,
  [SMALL_STATE(87)] = 1310,
  [SMALL_STATE(88)] = 1318,
  [SMALL_STATE(89)] = 1328,
  [SMALL_STATE(90)] = 1338,
  [SMALL_STATE(91)] = 1346,
  [SMALL_STATE(92)] = 1354,
  [SMALL_STATE(93)] = 1362,
  [SMALL_STATE(94)] = 1372,
  [SMALL_STATE(95)] = 1382,
  [SMALL_STATE(96)] = 1392,
  [SMALL_STATE(97)] = 1402,
  [SMALL_STATE(98)] = 1412,
  [SMALL_STATE(99)] = 1420,
  [SMALL_STATE(100)] = 1427,
  [SMALL_STATE(101)] = 1434,
  [SMALL_STATE(102)] = 1441,
  [SMALL_STATE(103)] = 1448,
  [SMALL_STATE(104)] = 1455,
  [SMALL_STATE(105)] = 1462,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 5), SHIFT_REPEAT(5),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 5), SHIFT_REPEAT(5),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 5), SHIFT_REPEAT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 5),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 5), SHIFT_REPEAT(18),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accspec, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accspec, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 12),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 12),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, .production_id = 13),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, .production_id = 13),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 8),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 7),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 10),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 11),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_ident, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 11),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 5),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 5), SHIFT_REPEAT(59),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 7),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 10),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 8),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 5),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 5), SHIFT_REPEAT(72),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, .production_id = 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 3, .production_id = 9),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 4, .production_id = 14),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 3, .production_id = 9),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 4, .production_id = 14),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arr_repeat1, 2), SHIFT_REPEAT(104),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arr_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_ident, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [318] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
