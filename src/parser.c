#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_meta_token1 = 2,
  sym_name = 3,
  anon_sym_DASH = 4,
  anon_sym_COMMA = 5,
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
  sym_aliasdec = 27,
  sym_inputregdec = 28,
  sym_meta = 29,
  sym_instruction = 30,
  sym_accspec = 31,
  sym_index = 32,
  sym_arr = 33,
  aux_sym_program_repeat1 = 34,
  aux_sym_program_repeat2 = 35,
  aux_sym_instruction_repeat1 = 36,
  aux_sym_index_repeat1 = 37,
  aux_sym_arr_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_meta_token1] = "meta_token1",
  [sym_name] = "name",
  [anon_sym_DASH] = "-",
  [anon_sym_COMMA] = ",",
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
  [sym_aliasdec] = "aliasdec",
  [sym_inputregdec] = "inputregdec",
  [sym_meta] = "meta",
  [sym_instruction] = "instruction",
  [sym_accspec] = "accspec",
  [sym_index] = "index",
  [sym_arr] = "arr",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_index_repeat1] = "index_repeat1",
  [aux_sym_arr_repeat1] = "arr_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_meta_token1] = aux_sym_meta_token1,
  [sym_name] = sym_name,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_aliasdec] = sym_aliasdec,
  [sym_inputregdec] = sym_inputregdec,
  [sym_meta] = sym_meta,
  [sym_instruction] = sym_instruction,
  [sym_accspec] = sym_accspec,
  [sym_index] = sym_index,
  [sym_arr] = sym_arr,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [14] = 11,
  [15] = 15,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 21,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 19,
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
  [69] = 61,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == ']') ADVANCE(146);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g' ||
          lookahead == 'r') ADVANCE(141);
      if (('s' <= lookahead && lookahead <= 'v')) ADVANCE(142);
      if (('w' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == '1' ||
          lookahead == 'L') ADVANCE(134);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(154);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(123);
      END_STATE();
    case 8:
      if (lookahead == '9') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(137);
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
      if (lookahead == 'c') ADVANCE(150);
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
      if (lookahead == 'd') ADVANCE(150);
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
      if (lookahead == 'e') ADVANCE(150);
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
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(150);
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
      if (lookahead == 'l') ADVANCE(150);
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
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(154);
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
      if (lookahead == 'p') ADVANCE(114);
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
      if (lookahead == 'r') ADVANCE(154);
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
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(113);
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
      if (lookahead == 'w') ADVANCE(154);
      END_STATE();
    case 105:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 106:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(150);
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
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '[') ADVANCE(143);
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
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'r' ||
          lookahead == 'v') ADVANCE(130);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 112:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(112)
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 113:
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 114:
      if (lookahead == '3' ||
          lookahead == '4' ||
          lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 117:
      if (eof) ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ';') ADVANCE(157);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 118:
      if (eof) ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == ']') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'r' ||
          lookahead == 'v') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 119:
      if (eof) ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'r' ||
          lookahead == 'v') ADVANCE(130);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_meta_token1);
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
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0') ADVANCE(135);
      if (lookahead == '1' ||
          lookahead == 'L') ADVANCE(134);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '9') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(137);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(134);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_reg);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_reg);
      if (lookahead == '1') ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_reg);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(134);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_reg);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_accspec_token1);
      if (('w' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_accspec_token2);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_accspec_token3);
      if (('s' <= lookahead && lookahead <= 'v')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_index_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_alias);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_meta_ident);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_in);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_out);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_propname);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_propname);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_propname);
      if (lookahead == 'w') ADVANCE(154);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 117},
  [2] = {.lex_state = 117},
  [3] = {.lex_state = 117},
  [4] = {.lex_state = 117},
  [5] = {.lex_state = 118},
  [6] = {.lex_state = 118},
  [7] = {.lex_state = 118},
  [8] = {.lex_state = 117},
  [9] = {.lex_state = 118},
  [10] = {.lex_state = 118},
  [11] = {.lex_state = 118},
  [12] = {.lex_state = 118},
  [13] = {.lex_state = 118},
  [14] = {.lex_state = 118},
  [15] = {.lex_state = 118},
  [16] = {.lex_state = 118},
  [17] = {.lex_state = 118},
  [18] = {.lex_state = 118},
  [19] = {.lex_state = 118},
  [20] = {.lex_state = 118},
  [21] = {.lex_state = 118},
  [22] = {.lex_state = 117},
  [23] = {.lex_state = 119},
  [24] = {.lex_state = 118},
  [25] = {.lex_state = 110},
  [26] = {.lex_state = 119},
  [27] = {.lex_state = 119},
  [28] = {.lex_state = 119},
  [29] = {.lex_state = 119},
  [30] = {.lex_state = 119},
  [31] = {.lex_state = 117},
  [32] = {.lex_state = 119},
  [33] = {.lex_state = 119},
  [34] = {.lex_state = 119},
  [35] = {.lex_state = 119},
  [36] = {.lex_state = 117},
  [37] = {.lex_state = 119},
  [38] = {.lex_state = 119},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
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
  [54] = {.lex_state = 117},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 119},
  [57] = {.lex_state = 117},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 111},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 117},
  [63] = {.lex_state = 117},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 117},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 117},
  [68] = {.lex_state = 117},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 117},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 117},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 119},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 119},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 119},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 119},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 117},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 117},
  [98] = {.lex_state = 117},
  [99] = {.lex_state = 117},
  [100] = {.lex_state = 112},
  [101] = {.lex_state = 117},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_meta_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_program] = STATE(96),
    [sym__item] = STATE(39),
    [sym_aliasdec] = STATE(75),
    [sym_inputregdec] = STATE(75),
    [sym_meta] = STATE(39),
    [sym_instruction] = STATE(39),
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
  [0] = 11,
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
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(75), 2,
      sym_aliasdec,
      sym_inputregdec,
    STATE(86), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [37] = 11,
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
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(75), 2,
      sym_aliasdec,
      sym_inputregdec,
    STATE(86), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [74] = 10,
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
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(75), 2,
      sym_aliasdec,
      sym_inputregdec,
    STATE(86), 3,
      sym__item,
      sym_meta,
      sym_instruction,
  [108] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_accspec,
    STATE(18), 1,
      sym_index,
    ACTIONS(23), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_int,
    ACTIONS(25), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_float,
  [134] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      aux_sym_instruction_repeat1,
    STATE(43), 1,
      sym_accspec,
    STATE(49), 1,
      sym_index,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [160] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      sym_accspec,
    STATE(47), 1,
      sym_index,
    STATE(48), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [186] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_program_repeat1,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      sym_name,
      sym_alias,
      sym_meta_ident,
      sym_in,
      sym_out,
  [204] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_accspec,
    STATE(72), 1,
      sym_index,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [225] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      sym_index,
    STATE(64), 1,
      sym_accspec,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [246] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(52), 1,
      sym_ident,
    ACTIONS(54), 1,
      sym_reg,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    ACTIONS(60), 1,
      sym_float,
    STATE(15), 1,
      aux_sym_index_repeat1,
    ACTIONS(56), 2,
      aux_sym_index_token1,
      sym_int,
  [269] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      sym_reg,
    STATE(68), 1,
      sym_index,
    STATE(70), 1,
      sym_accspec,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [292] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(52), 1,
      sym_ident,
    ACTIONS(54), 1,
      sym_reg,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    ACTIONS(70), 1,
      sym_float,
    STATE(14), 1,
      aux_sym_index_repeat1,
    ACTIONS(66), 2,
      aux_sym_index_token1,
      sym_int,
  [315] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(52), 1,
      sym_ident,
    ACTIONS(54), 1,
      sym_reg,
    ACTIONS(60), 1,
      sym_float,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_index_repeat1,
    ACTIONS(56), 2,
      aux_sym_index_token1,
      sym_int,
  [338] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_ident,
    ACTIONS(77), 1,
      sym_reg,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 1,
      sym_float,
    STATE(15), 1,
      aux_sym_index_repeat1,
    ACTIONS(80), 2,
      aux_sym_index_token1,
      sym_int,
  [361] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(52), 1,
      sym_ident,
    ACTIONS(54), 1,
      sym_reg,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 1,
      sym_float,
    STATE(11), 1,
      aux_sym_index_repeat1,
    ACTIONS(88), 2,
      aux_sym_index_token1,
      sym_int,
  [384] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(94), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_int,
    ACTIONS(96), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_float,
  [398] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(98), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_int,
    ACTIONS(100), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_float,
  [412] = 3,
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
  [426] = 3,
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
  [440] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 3,
      sym_ident,
      aux_sym_index_token1,
      sym_int,
    ACTIONS(112), 3,
      sym_reg,
      anon_sym_RBRACK,
      sym_float,
  [454] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [465] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [482] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      sym_reg,
    STATE(95), 1,
      sym_index,
    STATE(97), 1,
      sym_accspec,
  [501] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(124), 1,
      sym_propname,
    STATE(98), 1,
      sym_accspec,
    STATE(99), 1,
      sym_index,
  [520] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [537] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [554] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [571] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [588] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      sym_reg,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [605] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [616] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [633] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [650] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [667] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [684] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_reg,
      sym_propname,
  [695] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [712] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [729] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(41), 1,
      aux_sym_program_repeat2,
  [745] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [759] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(45), 1,
      aux_sym_program_repeat2,
  [775] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [789] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [803] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [817] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(45), 1,
      aux_sym_program_repeat2,
  [833] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [847] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [861] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [875] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [889] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(92), 2,
      sym_index,
      sym_arr,
  [903] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [917] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [931] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [945] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(202), 1,
      sym_int,
    ACTIONS(204), 1,
      sym_float,
  [958] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [967] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      sym_ident,
    ACTIONS(120), 1,
      sym_reg,
  [980] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 1,
      sym_int,
    ACTIONS(212), 1,
      sym_float,
  [993] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_arr_repeat1,
  [1006] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_arr_repeat1,
  [1019] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      aux_sym_meta_token1,
    ACTIONS(225), 1,
      sym_ident,
    ACTIONS(227), 1,
      sym_reg,
  [1032] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 3,
      aux_sym_accspec_token1,
      aux_sym_accspec_token2,
      aux_sym_accspec_token3,
  [1041] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(233), 1,
      sym_reg,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1052] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      sym_reg,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1063] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1072] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 1,
      sym_int,
    ACTIONS(212), 1,
      sym_float,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
  [1085] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_arr_repeat1,
  [1098] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(247), 1,
      sym_reg,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1109] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 1,
      sym_reg,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1120] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 3,
      aux_sym_accspec_token1,
      aux_sym_accspec_token2,
      aux_sym_accspec_token3,
  [1129] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      sym_reg,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1140] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1149] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1158] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1166] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 1,
      sym_int,
    ACTIONS(212), 1,
      sym_float,
  [1176] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1184] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1192] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 1,
      sym_ident,
    ACTIONS(267), 1,
      sym_reg,
  [1202] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1210] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1218] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1234] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1242] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      sym_ident,
    ACTIONS(281), 1,
      sym_reg,
  [1252] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1260] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1268] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1276] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1284] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      sym_ident,
    ACTIONS(291), 1,
      sym_reg,
  [1294] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1302] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1318] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1326] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 1,
      sym_ident,
    ACTIONS(297), 1,
      sym_reg,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1344] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      sym_reg,
  [1351] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
  [1358] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      sym_reg,
  [1365] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(307), 1,
      sym_propname,
  [1372] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      sym_propname,
  [1379] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 1,
      sym_ident,
  [1386] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      sym_propname,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 134,
  [SMALL_STATE(7)] = 160,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 204,
  [SMALL_STATE(10)] = 225,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 269,
  [SMALL_STATE(13)] = 292,
  [SMALL_STATE(14)] = 315,
  [SMALL_STATE(15)] = 338,
  [SMALL_STATE(16)] = 361,
  [SMALL_STATE(17)] = 384,
  [SMALL_STATE(18)] = 398,
  [SMALL_STATE(19)] = 412,
  [SMALL_STATE(20)] = 426,
  [SMALL_STATE(21)] = 440,
  [SMALL_STATE(22)] = 454,
  [SMALL_STATE(23)] = 465,
  [SMALL_STATE(24)] = 482,
  [SMALL_STATE(25)] = 501,
  [SMALL_STATE(26)] = 520,
  [SMALL_STATE(27)] = 537,
  [SMALL_STATE(28)] = 554,
  [SMALL_STATE(29)] = 571,
  [SMALL_STATE(30)] = 588,
  [SMALL_STATE(31)] = 605,
  [SMALL_STATE(32)] = 616,
  [SMALL_STATE(33)] = 633,
  [SMALL_STATE(34)] = 650,
  [SMALL_STATE(35)] = 667,
  [SMALL_STATE(36)] = 684,
  [SMALL_STATE(37)] = 695,
  [SMALL_STATE(38)] = 712,
  [SMALL_STATE(39)] = 729,
  [SMALL_STATE(40)] = 745,
  [SMALL_STATE(41)] = 759,
  [SMALL_STATE(42)] = 775,
  [SMALL_STATE(43)] = 789,
  [SMALL_STATE(44)] = 803,
  [SMALL_STATE(45)] = 817,
  [SMALL_STATE(46)] = 833,
  [SMALL_STATE(47)] = 847,
  [SMALL_STATE(48)] = 861,
  [SMALL_STATE(49)] = 875,
  [SMALL_STATE(50)] = 889,
  [SMALL_STATE(51)] = 903,
  [SMALL_STATE(52)] = 917,
  [SMALL_STATE(53)] = 931,
  [SMALL_STATE(54)] = 945,
  [SMALL_STATE(55)] = 958,
  [SMALL_STATE(56)] = 967,
  [SMALL_STATE(57)] = 980,
  [SMALL_STATE(58)] = 993,
  [SMALL_STATE(59)] = 1006,
  [SMALL_STATE(60)] = 1019,
  [SMALL_STATE(61)] = 1032,
  [SMALL_STATE(62)] = 1041,
  [SMALL_STATE(63)] = 1052,
  [SMALL_STATE(64)] = 1063,
  [SMALL_STATE(65)] = 1072,
  [SMALL_STATE(66)] = 1085,
  [SMALL_STATE(67)] = 1098,
  [SMALL_STATE(68)] = 1109,
  [SMALL_STATE(69)] = 1120,
  [SMALL_STATE(70)] = 1129,
  [SMALL_STATE(71)] = 1140,
  [SMALL_STATE(72)] = 1149,
  [SMALL_STATE(73)] = 1158,
  [SMALL_STATE(74)] = 1166,
  [SMALL_STATE(75)] = 1176,
  [SMALL_STATE(76)] = 1184,
  [SMALL_STATE(77)] = 1192,
  [SMALL_STATE(78)] = 1202,
  [SMALL_STATE(79)] = 1210,
  [SMALL_STATE(80)] = 1218,
  [SMALL_STATE(81)] = 1226,
  [SMALL_STATE(82)] = 1234,
  [SMALL_STATE(83)] = 1242,
  [SMALL_STATE(84)] = 1252,
  [SMALL_STATE(85)] = 1260,
  [SMALL_STATE(86)] = 1268,
  [SMALL_STATE(87)] = 1276,
  [SMALL_STATE(88)] = 1284,
  [SMALL_STATE(89)] = 1294,
  [SMALL_STATE(90)] = 1302,
  [SMALL_STATE(91)] = 1310,
  [SMALL_STATE(92)] = 1318,
  [SMALL_STATE(93)] = 1326,
  [SMALL_STATE(94)] = 1336,
  [SMALL_STATE(95)] = 1344,
  [SMALL_STATE(96)] = 1351,
  [SMALL_STATE(97)] = 1358,
  [SMALL_STATE(98)] = 1365,
  [SMALL_STATE(99)] = 1372,
  [SMALL_STATE(100)] = 1379,
  [SMALL_STATE(101)] = 1386,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputregdec, 2, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 7), SHIFT_REPEAT(5),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 7), SHIFT_REPEAT(5),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 7), SHIFT_REPEAT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 7),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 7), SHIFT_REPEAT(15),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 11),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2, .production_id = 11),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_index_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accspec, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accspec, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, .production_id = 12),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, .production_id = 12),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 8),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 9),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 9),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 8),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(56),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arr_repeat1, 2), SHIFT_REPEAT(74),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arr_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, .production_id = 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 4, .production_id = 13),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputregdec, 3, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputregdec, 3, .production_id = 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 3, .production_id = 10),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputregdec, 4, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputregdec, 4, .production_id = 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliasdec, 4, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliasdec, 4, .production_id = 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliasdec, 3, .production_id = 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
