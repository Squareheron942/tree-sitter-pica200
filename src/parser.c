#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
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
  sym_meta_ident = 18,
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
  aux_sym_program_repeat1 = 31,
  aux_sym_program_repeat2 = 32,
  aux_sym_meta_repeat1 = 33,
  aux_sym_instruction_repeat1 = 34,
  aux_sym_index_repeat1 = 35,
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
  [sym_meta_ident] = "meta_ident",
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
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_index_repeat1] = "index_repeat1",
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
  [sym_meta_ident] = sym_meta_ident,
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
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_index_repeat1] = aux_sym_index_repeat1,
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
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 12,
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
  [30] = 22,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 19,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 23,
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
  [73] = 59,
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
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
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
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '+') ADVANCE(142);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == ';') ADVANCE(154);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g' ||
          lookahead == 'r') ADVANCE(139);
      if (('s' <= lookahead && lookahead <= 'v')) ADVANCE(140);
      if (('w' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == '1' ||
          lookahead == 'L') ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(151);
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
      if (lookahead == 'c') ADVANCE(147);
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
      if (lookahead == 'd') ADVANCE(147);
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
      if (lookahead == 'e') ADVANCE(147);
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
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(147);
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
      if (lookahead == 'l') ADVANCE(147);
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
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(151);
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
      if (lookahead == 'r') ADVANCE(151);
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
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(151);
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
      if (lookahead == 'w') ADVANCE(151);
      END_STATE();
    case 105:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 106:
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(147);
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
      if (lookahead == ';') ADVANCE(154);
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
      if (lookahead == ';') ADVANCE(154);
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
          lookahead == 'i') ADVANCE(147);
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
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ';') ADVANCE(154);
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
      END_STATE();
    case 116:
      if (eof) ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(116)
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ',') ADVANCE(121);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ';') ADVANCE(154);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(130);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(142);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'r' ||
          lookahead == 'v') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
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
      if (lookahead == ';') ADVANCE(154);
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
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_alias);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_meta_ident);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_in);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_out);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_propname);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_propname);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_propname);
      if (lookahead == 'w') ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_float);
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
  [4] = {.lex_state = 116},
  [5] = {.lex_state = 115},
  [6] = {.lex_state = 116},
  [7] = {.lex_state = 115},
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
  [25] = {.lex_state = 117},
  [26] = {.lex_state = 117},
  [27] = {.lex_state = 117},
  [28] = {.lex_state = 117},
  [29] = {.lex_state = 117},
  [30] = {.lex_state = 115},
  [31] = {.lex_state = 117},
  [32] = {.lex_state = 117},
  [33] = {.lex_state = 117},
  [34] = {.lex_state = 116},
  [35] = {.lex_state = 115},
  [36] = {.lex_state = 110},
  [37] = {.lex_state = 117},
  [38] = {.lex_state = 117},
  [39] = {.lex_state = 115},
  [40] = {.lex_state = 117},
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
  [60] = {.lex_state = 115},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 115},
  [64] = {.lex_state = 115},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 117},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 111},
  [72] = {.lex_state = 117},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 115},
  [75] = {.lex_state = 117},
  [76] = {.lex_state = 117},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 117},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 117},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 117},
  [86] = {.lex_state = 115},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 115},
  [89] = {.lex_state = 115},
  [90] = {.lex_state = 115},
  [91] = {.lex_state = 115},
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
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(87),
    [sym__item] = STATE(47),
    [sym_meta] = STATE(47),
    [sym_instruction] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_alias] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(11),
    [sym_in] = ACTIONS(13),
    [sym_out] = ACTIONS(15),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      sym_alias,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym_in,
    ACTIONS(15), 1,
      sym_out,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(77), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [33] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      sym_alias,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym_in,
    ACTIONS(15), 1,
      sym_out,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(77), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [66] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_accspec,
    STATE(21), 1,
      sym_index,
    ACTIONS(23), 2,
      sym_ident,
      sym_int,
    ACTIONS(25), 4,
      sym_reg,
      aux_sym_index_token1,
      anon_sym_RBRACK,
      sym_float,
  [92] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      sym_alias,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym_in,
    ACTIONS(15), 1,
      sym_out,
    ACTIONS(19), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(77), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [122] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_accspec,
    STATE(44), 1,
      sym_index,
    STATE(45), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [148] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_program_repeat1,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      sym_name,
      sym_alias,
      sym_meta_ident,
      sym_in,
      sym_out,
  [166] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      sym_accspec,
    STATE(53), 1,
      sym_index,
    STATE(55), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [192] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_accspec,
    STATE(62), 1,
      sym_index,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [213] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_accspec,
    STATE(68), 1,
      sym_index,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [234] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(52), 1,
      sym_ident,
    ACTIONS(54), 1,
      sym_reg,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    ACTIONS(60), 1,
      sym_int,
    STATE(17), 1,
      aux_sym_index_repeat1,
    ACTIONS(56), 2,
      aux_sym_index_token1,
      sym_float,
  [257] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(52), 1,
      sym_ident,
    ACTIONS(54), 1,
      sym_reg,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    ACTIONS(66), 1,
      sym_int,
    STATE(11), 1,
      aux_sym_index_repeat1,
    ACTIONS(62), 2,
      aux_sym_index_token1,
      sym_float,
  [280] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(52), 1,
      sym_ident,
    ACTIONS(54), 1,
      sym_reg,
    ACTIONS(60), 1,
      sym_int,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_index_repeat1,
    ACTIONS(56), 2,
      aux_sym_index_token1,
      sym_float,
  [303] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_accspec,
    STATE(70), 1,
      sym_index,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [324] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_index,
    STATE(66), 1,
      sym_accspec,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [345] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_reg,
    STATE(60), 1,
      sym_accspec,
    STATE(74), 1,
      sym_index,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [368] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 1,
      sym_ident,
    ACTIONS(81), 1,
      sym_reg,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    ACTIONS(89), 1,
      sym_int,
    STATE(17), 1,
      aux_sym_index_repeat1,
    ACTIONS(84), 2,
      aux_sym_index_token1,
      sym_float,
  [391] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(52), 1,
      sym_ident,
    ACTIONS(54), 1,
      sym_reg,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    ACTIONS(96), 1,
      sym_int,
    STATE(13), 1,
      aux_sym_index_repeat1,
    ACTIONS(92), 2,
      aux_sym_index_token1,
      sym_float,
  [414] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(98), 2,
      sym_ident,
      sym_int,
    ACTIONS(100), 4,
      sym_reg,
      aux_sym_index_token1,
      anon_sym_RBRACK,
      sym_float,
  [428] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(102), 2,
      sym_ident,
      sym_int,
    ACTIONS(104), 4,
      sym_reg,
      aux_sym_index_token1,
      anon_sym_RBRACK,
      sym_float,
  [442] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(106), 2,
      sym_ident,
      sym_int,
    ACTIONS(108), 4,
      sym_reg,
      aux_sym_index_token1,
      anon_sym_RBRACK,
      sym_float,
  [456] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 2,
      sym_ident,
      sym_int,
    ACTIONS(112), 4,
      sym_reg,
      aux_sym_index_token1,
      anon_sym_RBRACK,
      sym_float,
  [470] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 2,
      sym_ident,
      sym_int,
    ACTIONS(116), 4,
      sym_reg,
      aux_sym_index_token1,
      anon_sym_RBRACK,
      sym_float,
  [484] = 5,
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
  [501] = 5,
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
  [518] = 5,
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
  [535] = 5,
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
  [552] = 5,
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
  [569] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [586] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [597] = 5,
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
  [614] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [631] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [648] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_reg,
    STATE(86), 1,
      sym_accspec,
    STATE(88), 1,
      sym_index,
  [667] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [678] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      sym_propname,
    STATE(89), 1,
      sym_index,
    STATE(90), 1,
      sym_accspec,
  [697] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [714] = 5,
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
  [731] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [742] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [759] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [773] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [787] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [801] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [815] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [829] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_meta_repeat1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [843] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(50), 1,
      aux_sym_program_repeat2,
  [859] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(48), 1,
      aux_sym_program_repeat2,
  [875] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_meta_repeat1,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [889] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(48), 1,
      aux_sym_program_repeat2,
  [905] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [919] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [933] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [947] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [961] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [975] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_meta_repeat1,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [989] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1003] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1012] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 3,
      aux_sym_accspec_token1,
      aux_sym_accspec_token2,
      aux_sym_accspec_token3,
  [1021] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_reg,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1032] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1041] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1050] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      sym_reg,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1061] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 1,
      sym_reg,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1072] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1081] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1090] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      sym_ident,
    ACTIONS(237), 1,
      sym_reg,
  [1103] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1112] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(241), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1121] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1130] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(243), 1,
      aux_sym_meta_token1,
    ACTIONS(245), 1,
      sym_ident,
    ACTIONS(247), 1,
      sym_reg,
  [1143] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym_ident,
    ACTIONS(124), 1,
      sym_reg,
  [1156] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 3,
      aux_sym_accspec_token1,
      aux_sym_accspec_token2,
      aux_sym_accspec_token3,
  [1165] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      sym_reg,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1176] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 1,
      sym_ident,
    ACTIONS(257), 1,
      sym_reg,
  [1186] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(259), 1,
      sym_ident,
    ACTIONS(261), 1,
      sym_reg,
  [1196] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1204] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1212] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      sym_ident,
    ACTIONS(265), 1,
      sym_reg,
  [1222] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1238] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1246] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 1,
      sym_ident,
    ACTIONS(273), 1,
      sym_reg,
  [1256] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1264] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      sym_ident,
    ACTIONS(277), 1,
      sym_reg,
  [1274] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym_reg,
  [1281] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
  [1288] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      sym_reg,
  [1295] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      sym_propname,
  [1302] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_propname,
  [1309] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      sym_propname,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 166,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 213,
  [SMALL_STATE(11)] = 234,
  [SMALL_STATE(12)] = 257,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 324,
  [SMALL_STATE(16)] = 345,
  [SMALL_STATE(17)] = 368,
  [SMALL_STATE(18)] = 391,
  [SMALL_STATE(19)] = 414,
  [SMALL_STATE(20)] = 428,
  [SMALL_STATE(21)] = 442,
  [SMALL_STATE(22)] = 456,
  [SMALL_STATE(23)] = 470,
  [SMALL_STATE(24)] = 484,
  [SMALL_STATE(25)] = 501,
  [SMALL_STATE(26)] = 518,
  [SMALL_STATE(27)] = 535,
  [SMALL_STATE(28)] = 552,
  [SMALL_STATE(29)] = 569,
  [SMALL_STATE(30)] = 586,
  [SMALL_STATE(31)] = 597,
  [SMALL_STATE(32)] = 614,
  [SMALL_STATE(33)] = 631,
  [SMALL_STATE(34)] = 648,
  [SMALL_STATE(35)] = 667,
  [SMALL_STATE(36)] = 678,
  [SMALL_STATE(37)] = 697,
  [SMALL_STATE(38)] = 714,
  [SMALL_STATE(39)] = 731,
  [SMALL_STATE(40)] = 742,
  [SMALL_STATE(41)] = 759,
  [SMALL_STATE(42)] = 773,
  [SMALL_STATE(43)] = 787,
  [SMALL_STATE(44)] = 801,
  [SMALL_STATE(45)] = 815,
  [SMALL_STATE(46)] = 829,
  [SMALL_STATE(47)] = 843,
  [SMALL_STATE(48)] = 859,
  [SMALL_STATE(49)] = 875,
  [SMALL_STATE(50)] = 889,
  [SMALL_STATE(51)] = 905,
  [SMALL_STATE(52)] = 919,
  [SMALL_STATE(53)] = 933,
  [SMALL_STATE(54)] = 947,
  [SMALL_STATE(55)] = 961,
  [SMALL_STATE(56)] = 975,
  [SMALL_STATE(57)] = 989,
  [SMALL_STATE(58)] = 1003,
  [SMALL_STATE(59)] = 1012,
  [SMALL_STATE(60)] = 1021,
  [SMALL_STATE(61)] = 1032,
  [SMALL_STATE(62)] = 1041,
  [SMALL_STATE(63)] = 1050,
  [SMALL_STATE(64)] = 1061,
  [SMALL_STATE(65)] = 1072,
  [SMALL_STATE(66)] = 1081,
  [SMALL_STATE(67)] = 1090,
  [SMALL_STATE(68)] = 1103,
  [SMALL_STATE(69)] = 1112,
  [SMALL_STATE(70)] = 1121,
  [SMALL_STATE(71)] = 1130,
  [SMALL_STATE(72)] = 1143,
  [SMALL_STATE(73)] = 1156,
  [SMALL_STATE(74)] = 1165,
  [SMALL_STATE(75)] = 1176,
  [SMALL_STATE(76)] = 1186,
  [SMALL_STATE(77)] = 1196,
  [SMALL_STATE(78)] = 1204,
  [SMALL_STATE(79)] = 1212,
  [SMALL_STATE(80)] = 1222,
  [SMALL_STATE(81)] = 1230,
  [SMALL_STATE(82)] = 1238,
  [SMALL_STATE(83)] = 1246,
  [SMALL_STATE(84)] = 1256,
  [SMALL_STATE(85)] = 1264,
  [SMALL_STATE(86)] = 1274,
  [SMALL_STATE(87)] = 1281,
  [SMALL_STATE(88)] = 1288,
  [SMALL_STATE(89)] = 1295,
  [SMALL_STATE(90)] = 1302,
  [SMALL_STATE(91)] = 1309,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 5), SHIFT_REPEAT(4),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 5), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 5), SHIFT_REPEAT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 5),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 5), SHIFT_REPEAT(17),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 12),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 12),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, .production_id = 13),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, .production_id = 13),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accspec, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accspec, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 10),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 11),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 10),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 6),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 8),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 5),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 5), SHIFT_REPEAT(72),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 5),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, .production_id = 5), SHIFT_REPEAT(67),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 11),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 4, .production_id = 14),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 3, .production_id = 9),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, .production_id = 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 4, .production_id = 14),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 3, .production_id = 9),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [279] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
