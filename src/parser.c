#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 168
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym__word = 1,
  anon_sym_ = 2,
  sym__root_attr_key = 3,
  anon_sym_style = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_shape = 7,
  anon_sym_label = 8,
  anon_sym_constraint = 9,
  anon_sym_icon = 10,
  anon_sym_width = 11,
  anon_sym_height = 12,
  anon_sym_opacity = 13,
  anon_sym_fill = 14,
  anon_sym_stroke = 15,
  anon_sym_stroke_DASHwidth = 16,
  anon_sym_stroke_DASHdash = 17,
  anon_sym_border_DASHradius = 18,
  anon_sym_font_DASHcolor = 19,
  anon_sym_shadow = 20,
  anon_sym_multiple = 21,
  anon_sym_animated = 22,
  anon_sym_3d = 23,
  anon_sym_link = 24,
  sym__text_attr_key = 25,
  anon_sym_source_DASHarrowhead = 26,
  anon_sym_target_DASHarrowhead = 27,
  anon_sym_COLON = 28,
  anon_sym_DASH_DASH = 29,
  anon_sym_LT_DASH = 30,
  anon_sym_GT = 31,
  anon_sym_DASH_GT = 32,
  sym__dash = 33,
  sym_dot = 34,
  sym__unquoted_string = 35,
  anon_sym_SQUOTE = 36,
  aux_sym_string_token1 = 37,
  anon_sym_DQUOTE = 38,
  aux_sym_string_token2 = 39,
  anon_sym_BQUOTE = 40,
  aux_sym_string_token3 = 41,
  anon_sym_LF = 42,
  anon_sym_2 = 43,
  anon_sym_SEMI = 44,
  sym_source_file = 45,
  sym__definition = 46,
  sym_connection = 47,
  sym_shape = 48,
  sym_label = 49,
  sym_attr_value = 50,
  sym__root_attribute = 51,
  sym__shape_attribute = 52,
  sym__style_attribute = 53,
  sym__style_attr_block = 54,
  sym__inner_style_attribute = 55,
  sym__connection_attribute = 56,
  sym__shape_attr_key = 57,
  sym__style_attr_key = 58,
  sym__connection_attr_key = 59,
  sym__identifier = 60,
  sym_identifier = 61,
  sym__colon = 62,
  sym__arrow = 63,
  sym_arrow = 64,
  sym_string = 65,
  sym__eof = 66,
  sym__end = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_connection_repeat1 = 69,
  aux_sym_shape_repeat1 = 70,
  aux_sym_attr_value_repeat1 = 71,
  aux_sym__style_attr_block_repeat1 = 72,
  aux_sym_identifier_repeat1 = 73,
  aux_sym_arrow_repeat1 = 74,
  aux_sym_string_repeat1 = 75,
  aux_sym_string_repeat2 = 76,
  aux_sym_string_repeat3 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [anon_sym_] = " ",
  [sym__root_attr_key] = "attr_key",
  [anon_sym_style] = "attr_key",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_opacity] = "opacity",
  [anon_sym_fill] = "fill",
  [anon_sym_stroke] = "stroke",
  [anon_sym_stroke_DASHwidth] = "stroke-width",
  [anon_sym_stroke_DASHdash] = "stroke-dash",
  [anon_sym_border_DASHradius] = "border-radius",
  [anon_sym_font_DASHcolor] = "font-color",
  [anon_sym_shadow] = "shadow",
  [anon_sym_multiple] = "multiple",
  [anon_sym_animated] = "animated",
  [anon_sym_3d] = "3d",
  [anon_sym_link] = "link",
  [sym__text_attr_key] = "_text_attr_key",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [sym__dash] = "_dash",
  [sym_dot] = "dot",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_LF] = "\n",
  [anon_sym_2] = " ",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_connection] = "connection",
  [sym_shape] = "shape",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__root_attribute] = "_root_attribute",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__style_attribute] = "_style_attribute",
  [sym__style_attr_block] = "block",
  [sym__inner_style_attribute] = "_inner_style_attribute",
  [sym__connection_attribute] = "_connection_attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__connection_attr_key] = "attr_key",
  [sym__identifier] = "_identifier",
  [sym_identifier] = "identifier",
  [sym__colon] = "_colon",
  [sym__arrow] = "_arrow",
  [sym_arrow] = "arrow",
  [sym_string] = "string",
  [sym__eof] = "_eof",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym_shape_repeat1] = "shape_repeat1",
  [aux_sym_attr_value_repeat1] = "attr_value_repeat1",
  [aux_sym__style_attr_block_repeat1] = "_style_attr_block_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_arrow_repeat1] = "arrow_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [anon_sym_] = anon_sym_,
  [sym__root_attr_key] = sym__root_attr_key,
  [anon_sym_style] = sym__root_attr_key,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_opacity] = anon_sym_opacity,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_stroke] = anon_sym_stroke,
  [anon_sym_stroke_DASHwidth] = anon_sym_stroke_DASHwidth,
  [anon_sym_stroke_DASHdash] = anon_sym_stroke_DASHdash,
  [anon_sym_border_DASHradius] = anon_sym_border_DASHradius,
  [anon_sym_font_DASHcolor] = anon_sym_font_DASHcolor,
  [anon_sym_shadow] = anon_sym_shadow,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_animated] = anon_sym_animated,
  [anon_sym_3d] = anon_sym_3d,
  [anon_sym_link] = anon_sym_link,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__dash] = sym__dash,
  [sym_dot] = sym_dot,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_connection] = sym_connection,
  [sym_shape] = sym_shape,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__root_attribute] = sym__root_attribute,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__style_attribute] = sym__style_attribute,
  [sym__style_attr_block] = sym__style_attr_block,
  [sym__inner_style_attribute] = sym__inner_style_attribute,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__shape_attr_key] = sym__root_attr_key,
  [sym__style_attr_key] = sym__root_attr_key,
  [sym__connection_attr_key] = sym__root_attr_key,
  [sym__identifier] = sym__identifier,
  [sym_identifier] = sym_identifier,
  [sym__colon] = sym__colon,
  [sym__arrow] = sym__arrow,
  [sym_arrow] = sym_arrow,
  [sym_string] = sym_string,
  [sym__eof] = sym__eof,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym_shape_repeat1] = aux_sym_shape_repeat1,
  [aux_sym_attr_value_repeat1] = aux_sym_attr_value_repeat1,
  [aux_sym__style_attr_block_repeat1] = aux_sym__style_attr_block_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_arrow_repeat1] = aux_sym_arrow_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_style] = {
    .visible = true,
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
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke_DASHwidth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke_DASHdash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHradius] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [sym__text_attr_key] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_source_DASHarrowhead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target_DASHarrowhead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__style_attr_block] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_style_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym__arrow] = {
    .visible = false,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_connection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shape_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__style_attr_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat3] = {
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
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
  [47] = 2,
  [48] = 33,
  [49] = 35,
  [50] = 36,
  [51] = 32,
  [52] = 34,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 40,
  [58] = 58,
  [59] = 38,
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
  [70] = 26,
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
  [88] = 39,
  [89] = 37,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 2,
  [94] = 94,
  [95] = 95,
  [96] = 92,
  [97] = 94,
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
  [114] = 99,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 117,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 103,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 146,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 148,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 99,
  [162] = 162,
  [163] = 163,
  [164] = 162,
  [165] = 165,
  [166] = 166,
  [167] = 165,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(104);
      if (lookahead == 0) ADVANCE(185);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '3') ADVANCE(151);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == ';') ADVANCE(186);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '>') ADVANCE(134);
      if (lookahead == '`') ADVANCE(145);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(185);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == ';') ADVANCE(186);
      if (lookahead == '<') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(185);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == ';') ADVANCE(186);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '}') ADVANCE(108);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '`') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '`') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(133);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(127);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 102:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 103:
      if (eof) ADVANCE(104);
      if (lookahead == 0) ADVANCE(185);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == ';') ADVANCE(186);
      if (lookahead == '>') ADVANCE(134);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_animated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '>') ADVANCE(135);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(135);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(148);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'h') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__root_attr_key);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 103},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 103},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 103},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 103},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 103},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 103},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 103},
  [48] = {.lex_state = 103},
  [49] = {.lex_state = 103},
  [50] = {.lex_state = 103},
  [51] = {.lex_state = 103},
  [52] = {.lex_state = 103},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 103},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 103},
  [60] = {.lex_state = 103},
  [61] = {.lex_state = 103},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 103},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 103},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 103},
  [69] = {.lex_state = 103},
  [70] = {.lex_state = 103},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 103},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 103},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 103},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 103},
  [89] = {.lex_state = 103},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 103},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 103},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 103},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 103},
  [108] = {.lex_state = 103},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 103},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 103},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 103},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 103},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 103},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 103},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 103},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 103},
  [155] = {.lex_state = 103},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 103},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 103},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 103},
  [165] = {.lex_state = 103},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 103},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__root_attr_key] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_3d] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(166),
    [sym__definition] = STATE(13),
    [sym_connection] = STATE(13),
    [sym_shape] = STATE(13),
    [sym__root_attribute] = STATE(13),
    [sym__identifier] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym__eof] = STATE(13),
    [sym__end] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_attr_value_repeat1] = STATE(45),
    [aux_sym_identifier_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [anon_sym_] = ACTIONS(7),
    [sym__root_attr_key] = ACTIONS(9),
    [sym__dash] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(15), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(20), 2,
      anon_sym_stroke,
      sym__dash,
    ACTIONS(18), 19,
      anon_sym_RBRACE,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [32] = 9,
    ACTIONS(22), 1,
      anon_sym_,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_stroke,
    STATE(27), 1,
      aux_sym_attr_value_repeat1,
    STATE(54), 1,
      sym__inner_style_attribute,
    STATE(134), 1,
      sym__style_attr_key,
    ACTIONS(30), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(10), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [72] = 9,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_stroke,
    ACTIONS(32), 1,
      anon_sym_,
    STATE(16), 1,
      aux_sym_attr_value_repeat1,
    STATE(54), 1,
      sym__inner_style_attribute,
    STATE(115), 1,
      sym__style_attr_key,
    ACTIONS(34), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(5), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [112] = 9,
    ACTIONS(28), 1,
      anon_sym_stroke,
    ACTIONS(36), 1,
      anon_sym_,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_attr_value_repeat1,
    STATE(66), 1,
      sym__inner_style_attribute,
    STATE(134), 1,
      sym__style_attr_key,
    ACTIONS(30), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(10), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [152] = 9,
    ACTIONS(28), 1,
      anon_sym_stroke,
    ACTIONS(40), 1,
      anon_sym_,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_attr_value_repeat1,
    STATE(55), 1,
      sym__inner_style_attribute,
    STATE(134), 1,
      sym__style_attr_key,
    ACTIONS(44), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(8), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [192] = 9,
    ACTIONS(28), 1,
      anon_sym_stroke,
    ACTIONS(46), 1,
      anon_sym_,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_attr_value_repeat1,
    STATE(71), 1,
      sym__inner_style_attribute,
    STATE(115), 1,
      sym__style_attr_key,
    ACTIONS(50), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(3), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [232] = 9,
    ACTIONS(28), 1,
      anon_sym_stroke,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym_attr_value_repeat1,
    STATE(71), 1,
      sym__inner_style_attribute,
    STATE(134), 1,
      sym__style_attr_key,
    ACTIONS(30), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(10), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [272] = 9,
    ACTIONS(28), 1,
      anon_sym_stroke,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_,
    STATE(4), 1,
      aux_sym_attr_value_repeat1,
    STATE(71), 1,
      sym__inner_style_attribute,
    STATE(134), 1,
      sym__style_attr_key,
    ACTIONS(50), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(3), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [312] = 9,
    ACTIONS(56), 1,
      anon_sym_,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_stroke,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(77), 1,
      sym__inner_style_attribute,
    STATE(134), 1,
      sym__style_attr_key,
    ACTIONS(67), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(10), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(61), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [352] = 10,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      sym__word,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(78), 1,
      sym__root_attr_key,
    ACTIONS(81), 1,
      sym__dash,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    STATE(45), 1,
      aux_sym_attr_value_repeat1,
    STATE(12), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(84), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    STATE(11), 7,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__eof,
      sym__end,
      aux_sym_source_file_repeat1,
  [392] = 15,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(91), 1,
      anon_sym_DASH_DASH,
    ACTIONS(93), 1,
      anon_sym_LT_DASH,
    ACTIONS(95), 1,
      anon_sym_DASH_GT,
    ACTIONS(97), 1,
      sym__dash,
    ACTIONS(99), 1,
      sym_dot,
    STATE(15), 1,
      aux_sym_connection_repeat1,
    STATE(31), 1,
      aux_sym_attr_value_repeat1,
    STATE(41), 1,
      aux_sym_shape_repeat1,
    STATE(90), 1,
      sym__colon,
    STATE(139), 1,
      aux_sym_arrow_repeat1,
    STATE(69), 2,
      sym__eof,
      sym__end,
    STATE(79), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(101), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [442] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      sym__root_attr_key,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    STATE(45), 1,
      aux_sym_attr_value_repeat1,
    STATE(12), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(105), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    STATE(11), 7,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__eof,
      sym__end,
      aux_sym_source_file_repeat1,
  [482] = 7,
    ACTIONS(15), 1,
      anon_sym_,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      anon_sym_stroke,
    STATE(2), 1,
      aux_sym_attr_value_repeat1,
    STATE(126), 1,
      sym__style_attr_key,
    ACTIONS(18), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(110), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [515] = 14,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(91), 1,
      anon_sym_DASH_DASH,
    ACTIONS(93), 1,
      anon_sym_LT_DASH,
    ACTIONS(95), 1,
      anon_sym_DASH_GT,
    ACTIONS(97), 1,
      sym__dash,
    ACTIONS(116), 1,
      anon_sym_COLON,
    ACTIONS(118), 1,
      sym_dot,
    STATE(29), 1,
      aux_sym_connection_repeat1,
    STATE(31), 1,
      aux_sym_attr_value_repeat1,
    STATE(98), 1,
      sym__colon,
    STATE(139), 1,
      aux_sym_arrow_repeat1,
    STATE(61), 2,
      sym__eof,
      sym__end,
    STATE(79), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(120), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [562] = 7,
    ACTIONS(15), 1,
      anon_sym_,
    ACTIONS(113), 1,
      anon_sym_stroke,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_attr_value_repeat1,
    STATE(126), 1,
      sym__style_attr_key,
    ACTIONS(18), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(110), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [595] = 5,
    ACTIONS(125), 1,
      anon_sym_,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(131), 1,
      anon_sym_stroke,
    STATE(143), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(59), 13,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
      anon_sym_LF,
      anon_sym_2,
  [623] = 5,
    ACTIONS(131), 1,
      anon_sym_stroke,
    ACTIONS(133), 1,
      anon_sym_,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(59), 13,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
      anon_sym_LF,
      anon_sym_2,
  [651] = 10,
    ACTIONS(139), 1,
      sym__word,
    ACTIONS(141), 1,
      anon_sym_,
    ACTIONS(143), 1,
      anon_sym_style,
    ACTIONS(147), 1,
      sym__dash,
    STATE(49), 1,
      aux_sym_identifier_repeat1,
    STATE(92), 1,
      aux_sym_attr_value_repeat1,
    STATE(113), 1,
      sym__shape_attr_key,
    STATE(86), 2,
      sym__shape_attribute,
      sym__style_attribute,
    STATE(91), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(145), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [689] = 5,
    ACTIONS(131), 1,
      anon_sym_stroke,
    ACTIONS(149), 1,
      anon_sym_,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(59), 13,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
      anon_sym_LF,
      anon_sym_2,
  [717] = 5,
    ACTIONS(131), 1,
      anon_sym_stroke,
    ACTIONS(155), 1,
      anon_sym_,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(59), 13,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
      anon_sym_LF,
      anon_sym_2,
  [745] = 10,
    ACTIONS(139), 1,
      sym__word,
    ACTIONS(141), 1,
      anon_sym_,
    ACTIONS(143), 1,
      anon_sym_style,
    ACTIONS(147), 1,
      sym__dash,
    STATE(49), 1,
      aux_sym_identifier_repeat1,
    STATE(92), 1,
      aux_sym_attr_value_repeat1,
    STATE(113), 1,
      sym__shape_attr_key,
    STATE(84), 2,
      sym__shape_attribute,
      sym__style_attribute,
    STATE(91), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(145), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [783] = 6,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_stroke,
    ACTIONS(161), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_attr_value_repeat1,
    STATE(126), 1,
      sym__style_attr_key,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [812] = 6,
    ACTIONS(28), 1,
      anon_sym_stroke,
    ACTIONS(161), 1,
      anon_sym_,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_attr_value_repeat1,
    STATE(126), 1,
      sym__style_attr_key,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [841] = 2,
    ACTIONS(131), 1,
      anon_sym_stroke,
    ACTIONS(59), 15,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
      anon_sym_LF,
      anon_sym_2,
  [862] = 2,
    ACTIONS(167), 1,
      anon_sym_stroke,
    ACTIONS(165), 15,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
      anon_sym_LF,
      anon_sym_2,
  [883] = 6,
    ACTIONS(28), 1,
      anon_sym_stroke,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_attr_value_repeat1,
    STATE(126), 1,
      sym__style_attr_key,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [912] = 6,
    ACTIONS(28), 1,
      anon_sym_stroke,
    ACTIONS(169), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(119), 1,
      sym__inner_style_attribute,
    STATE(134), 1,
      sym__style_attr_key,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [941] = 10,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(176), 1,
      anon_sym_DASH_DASH,
    ACTIONS(179), 1,
      anon_sym_LT_DASH,
    ACTIONS(182), 1,
      anon_sym_DASH_GT,
    ACTIONS(185), 1,
      sym__dash,
    STATE(29), 1,
      aux_sym_connection_repeat1,
    STATE(64), 1,
      aux_sym_attr_value_repeat1,
    STATE(139), 1,
      aux_sym_arrow_repeat1,
    STATE(79), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(174), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [977] = 5,
    ACTIONS(28), 1,
      anon_sym_stroke,
    ACTIONS(161), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_attr_value_repeat1,
    STATE(126), 1,
      sym__style_attr_key,
    ACTIONS(26), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [1003] = 11,
    ACTIONS(91), 1,
      anon_sym_DASH_DASH,
    ACTIONS(93), 1,
      anon_sym_LT_DASH,
    ACTIONS(95), 1,
      anon_sym_DASH_GT,
    ACTIONS(97), 1,
      sym__dash,
    ACTIONS(161), 1,
      anon_sym_,
    ACTIONS(188), 1,
      anon_sym_COLON,
    STATE(2), 1,
      aux_sym_attr_value_repeat1,
    STATE(70), 1,
      sym__eof,
    STATE(138), 1,
      sym_arrow,
    STATE(139), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(190), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1039] = 4,
    ACTIONS(192), 1,
      sym__word,
    ACTIONS(196), 1,
      sym__dash,
    STATE(34), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(194), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1060] = 5,
    ACTIONS(199), 1,
      sym__word,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(206), 1,
      sym__dash,
    STATE(148), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(204), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1083] = 4,
    ACTIONS(209), 1,
      sym__word,
    ACTIONS(214), 1,
      sym__dash,
    STATE(34), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(212), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1104] = 4,
    ACTIONS(192), 1,
      sym__word,
    ACTIONS(216), 1,
      sym__dash,
    STATE(34), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(204), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1125] = 5,
    ACTIONS(199), 1,
      sym__word,
    ACTIONS(219), 1,
      anon_sym_,
    ACTIONS(222), 1,
      sym__dash,
    STATE(148), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(194), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1148] = 3,
    ACTIONS(225), 1,
      sym__word,
    ACTIONS(229), 1,
      sym__dash,
    ACTIONS(227), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1166] = 2,
    ACTIONS(214), 1,
      sym__dash,
    ACTIONS(212), 10,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1182] = 3,
    ACTIONS(225), 1,
      sym__word,
    ACTIONS(231), 1,
      sym__dash,
    ACTIONS(194), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1200] = 2,
    ACTIONS(235), 1,
      sym__dash,
    ACTIONS(233), 10,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1216] = 8,
    ACTIONS(237), 1,
      anon_sym_,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(241), 1,
      sym_dot,
    STATE(82), 1,
      aux_sym_attr_value_repeat1,
    STATE(83), 1,
      aux_sym_shape_repeat1,
    STATE(95), 1,
      sym__colon,
    STATE(63), 2,
      sym__eof,
      sym__end,
    ACTIONS(243), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1244] = 2,
    ACTIONS(231), 1,
      sym__dash,
    ACTIONS(194), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1259] = 2,
    ACTIONS(229), 1,
      sym__dash,
    ACTIONS(227), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1274] = 2,
    ACTIONS(247), 1,
      sym__dash,
    ACTIONS(245), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1289] = 8,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(249), 1,
      sym__word,
    ACTIONS(251), 1,
      anon_sym_,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    STATE(44), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
    STATE(70), 1,
      sym__eof,
    ACTIONS(190), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1316] = 2,
    ACTIONS(253), 1,
      sym__dash,
    ACTIONS(174), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1331] = 3,
    ACTIONS(255), 1,
      anon_sym_,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(18), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1348] = 5,
    ACTIONS(258), 1,
      sym__word,
    ACTIONS(260), 1,
      anon_sym_,
    ACTIONS(263), 1,
      sym__dash,
    STATE(154), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(204), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1368] = 4,
    ACTIONS(265), 1,
      sym__word,
    ACTIONS(267), 1,
      sym__dash,
    STATE(52), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(204), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1386] = 5,
    ACTIONS(258), 1,
      sym__word,
    ACTIONS(269), 1,
      anon_sym_,
    ACTIONS(272), 1,
      sym__dash,
    STATE(154), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(194), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1406] = 4,
    ACTIONS(265), 1,
      sym__word,
    ACTIONS(274), 1,
      sym__dash,
    STATE(52), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(194), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1424] = 3,
    ACTIONS(276), 1,
      sym__word,
    STATE(52), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(212), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1440] = 8,
    ACTIONS(279), 1,
      anon_sym_,
    ACTIONS(281), 1,
      sym__unquoted_string,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    STATE(76), 1,
      aux_sym_attr_value_repeat1,
    STATE(102), 1,
      sym_attr_value,
    STATE(104), 1,
      sym_string,
  [1465] = 5,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      anon_sym_,
    STATE(78), 1,
      aux_sym_attr_value_repeat1,
    STATE(20), 2,
      sym__eof,
      sym__end,
    ACTIONS(291), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1484] = 5,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(293), 1,
      anon_sym_,
    STATE(80), 1,
      aux_sym_attr_value_repeat1,
    STATE(21), 2,
      sym__eof,
      sym__end,
    ACTIONS(295), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1503] = 8,
    ACTIONS(279), 1,
      anon_sym_,
    ACTIONS(281), 1,
      sym__unquoted_string,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    STATE(76), 1,
      aux_sym_attr_value_repeat1,
    STATE(104), 1,
      sym_string,
    STATE(110), 1,
      sym_attr_value,
  [1528] = 1,
    ACTIONS(233), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1539] = 8,
    ACTIONS(279), 1,
      anon_sym_,
    ACTIONS(281), 1,
      sym__unquoted_string,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    STATE(75), 1,
      sym_attr_value,
    STATE(76), 1,
      aux_sym_attr_value_repeat1,
    STATE(104), 1,
      sym_string,
  [1564] = 1,
    ACTIONS(212), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1575] = 2,
    ACTIONS(299), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(297), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1588] = 2,
    ACTIONS(303), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(301), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1601] = 8,
    ACTIONS(279), 1,
      anon_sym_,
    ACTIONS(281), 1,
      sym__unquoted_string,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    STATE(76), 1,
      aux_sym_attr_value_repeat1,
    STATE(104), 1,
      sym_string,
    STATE(123), 1,
      sym_attr_value,
  [1626] = 2,
    ACTIONS(307), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(305), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1639] = 8,
    ACTIONS(91), 1,
      anon_sym_DASH_DASH,
    ACTIONS(93), 1,
      anon_sym_LT_DASH,
    ACTIONS(95), 1,
      anon_sym_DASH_GT,
    ACTIONS(97), 1,
      sym__dash,
    ACTIONS(161), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_attr_value_repeat1,
    STATE(138), 1,
      sym_arrow,
    STATE(139), 1,
      aux_sym_arrow_repeat1,
  [1664] = 2,
    ACTIONS(311), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(309), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1677] = 5,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      anon_sym_,
    STATE(87), 1,
      aux_sym_attr_value_repeat1,
    STATE(18), 2,
      sym__eof,
      sym__end,
    ACTIONS(315), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1696] = 8,
    ACTIONS(279), 1,
      anon_sym_,
    ACTIONS(281), 1,
      sym__unquoted_string,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    STATE(76), 1,
      aux_sym_attr_value_repeat1,
    STATE(104), 1,
      sym_string,
    STATE(111), 1,
      sym_attr_value,
  [1721] = 2,
    ACTIONS(319), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(317), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1734] = 2,
    ACTIONS(323), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(321), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1747] = 2,
    ACTIONS(167), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(165), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1760] = 5,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      anon_sym_,
    STATE(74), 1,
      aux_sym_attr_value_repeat1,
    STATE(17), 2,
      sym__eof,
      sym__end,
    ACTIONS(327), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1779] = 8,
    ACTIONS(279), 1,
      anon_sym_,
    ACTIONS(281), 1,
      sym__unquoted_string,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    STATE(76), 1,
      aux_sym_attr_value_repeat1,
    STATE(104), 1,
      sym_string,
    STATE(109), 1,
      sym_attr_value,
  [1804] = 2,
    ACTIONS(331), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(329), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1817] = 5,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_,
    STATE(26), 1,
      sym__eof,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1835] = 4,
    ACTIONS(335), 1,
      anon_sym_,
    STATE(97), 1,
      aux_sym_attr_value_repeat1,
    STATE(73), 2,
      sym__eof,
      sym__end,
    ACTIONS(337), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1851] = 7,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(339), 1,
      anon_sym_,
    ACTIONS(341), 1,
      sym__unquoted_string,
    STATE(93), 1,
      aux_sym_attr_value_repeat1,
    STATE(105), 1,
      sym_string,
  [1873] = 4,
    ACTIONS(343), 1,
      anon_sym_,
    STATE(94), 1,
      aux_sym_attr_value_repeat1,
    STATE(25), 2,
      sym__eof,
      sym__end,
    ACTIONS(345), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1889] = 5,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_,
    STATE(26), 1,
      sym__eof,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1907] = 6,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(249), 1,
      sym__word,
    ACTIONS(347), 1,
      anon_sym_,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    STATE(96), 1,
      aux_sym_attr_value_repeat1,
    STATE(46), 2,
      sym__identifier,
      sym_identifier,
  [1927] = 5,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_,
    STATE(26), 1,
      sym__eof,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1945] = 4,
    ACTIONS(335), 1,
      anon_sym_,
    STATE(97), 1,
      aux_sym_attr_value_repeat1,
    STATE(65), 2,
      sym__eof,
      sym__end,
    ACTIONS(349), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1961] = 5,
    ACTIONS(188), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      anon_sym_,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
    STATE(70), 1,
      sym__eof,
    ACTIONS(190), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1979] = 3,
    ACTIONS(353), 1,
      sym_dot,
    STATE(83), 1,
      aux_sym_shape_repeat1,
    ACTIONS(351), 5,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1993] = 4,
    ACTIONS(335), 1,
      anon_sym_,
    STATE(97), 1,
      aux_sym_attr_value_repeat1,
    STATE(60), 2,
      sym__eof,
      sym__end,
    ACTIONS(356), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2009] = 6,
    ACTIONS(141), 1,
      anon_sym_,
    ACTIONS(147), 1,
      sym__dash,
    ACTIONS(358), 1,
      sym__word,
    STATE(49), 1,
      aux_sym_identifier_repeat1,
    STATE(92), 1,
      aux_sym_attr_value_repeat1,
    STATE(91), 2,
      sym__identifier,
      sym_identifier,
  [2029] = 4,
    ACTIONS(335), 1,
      anon_sym_,
    STATE(97), 1,
      aux_sym_attr_value_repeat1,
    STATE(68), 2,
      sym__eof,
      sym__end,
    ACTIONS(360), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2045] = 5,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym__eof,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2063] = 2,
    ACTIONS(364), 1,
      sym__word,
    ACTIONS(194), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2075] = 2,
    ACTIONS(364), 1,
      sym__word,
    ACTIONS(227), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2087] = 6,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(366), 1,
      sym__unquoted_string,
    STATE(86), 1,
      sym_label,
    STATE(124), 1,
      sym_string,
  [2106] = 1,
    ACTIONS(351), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2115] = 6,
    ACTIONS(147), 1,
      sym__dash,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(358), 1,
      sym__word,
    STATE(44), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
    STATE(49), 1,
      aux_sym_identifier_repeat1,
  [2134] = 4,
    ACTIONS(20), 1,
      sym__unquoted_string,
    ACTIONS(368), 1,
      anon_sym_,
    STATE(93), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(18), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [2149] = 4,
    ACTIONS(251), 1,
      anon_sym_,
    STATE(26), 1,
      sym__eof,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2164] = 6,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(366), 1,
      sym__unquoted_string,
    STATE(84), 1,
      sym_label,
    STATE(124), 1,
      sym_string,
  [2183] = 6,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(249), 1,
      sym__word,
    ACTIONS(251), 1,
      anon_sym_,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    STATE(44), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
  [2202] = 4,
    ACTIONS(251), 1,
      anon_sym_,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
    STATE(70), 1,
      sym__eof,
    ACTIONS(190), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2217] = 6,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    ACTIONS(366), 1,
      sym__unquoted_string,
    STATE(81), 1,
      sym_label,
    STATE(124), 1,
      sym_string,
  [2236] = 2,
    ACTIONS(371), 2,
      anon_sym_,
      sym__unquoted_string,
    ACTIONS(373), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [2246] = 1,
    ACTIONS(375), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2254] = 1,
    ACTIONS(377), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2262] = 1,
    ACTIONS(379), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2270] = 3,
    ACTIONS(384), 1,
      sym__dash,
    STATE(103), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(382), 3,
      anon_sym_,
      anon_sym_GT,
      sym__word,
  [2282] = 1,
    ACTIONS(387), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2290] = 1,
    ACTIONS(389), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2298] = 5,
    ACTIONS(391), 1,
      anon_sym_,
    ACTIONS(393), 1,
      anon_sym_COLON,
    ACTIONS(395), 1,
      sym_dot,
    STATE(116), 1,
      sym__colon,
    STATE(146), 1,
      aux_sym_attr_value_repeat1,
  [2314] = 4,
    ACTIONS(399), 1,
      anon_sym_GT,
    ACTIONS(401), 1,
      sym__dash,
    STATE(103), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(397), 2,
      anon_sym_,
      sym__word,
  [2328] = 4,
    ACTIONS(406), 1,
      anon_sym_GT,
    ACTIONS(408), 1,
      sym__dash,
    STATE(107), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(404), 2,
      anon_sym_,
      sym__word,
  [2342] = 1,
    ACTIONS(411), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2350] = 1,
    ACTIONS(413), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2358] = 1,
    ACTIONS(415), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2365] = 3,
    ACTIONS(417), 1,
      sym__dash,
    STATE(122), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(404), 2,
      anon_sym_,
      sym__word,
  [2376] = 4,
    ACTIONS(420), 1,
      anon_sym_,
    ACTIONS(422), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym__colon,
    STATE(149), 1,
      aux_sym_attr_value_repeat1,
  [2389] = 1,
    ACTIONS(373), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [2396] = 4,
    ACTIONS(420), 1,
      anon_sym_,
    ACTIONS(424), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym__colon,
    STATE(149), 1,
      aux_sym_attr_value_repeat1,
  [2409] = 4,
    ACTIONS(426), 1,
      anon_sym_,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym__style_attr_block,
    STATE(158), 1,
      aux_sym_attr_value_repeat1,
  [2422] = 4,
    ACTIONS(258), 1,
      sym__word,
    ACTIONS(430), 1,
      anon_sym_,
    ACTIONS(432), 1,
      sym__dash,
    STATE(154), 1,
      aux_sym_attr_value_repeat1,
  [2435] = 3,
    STATE(81), 1,
      sym__connection_attribute,
    STATE(129), 1,
      sym__connection_attr_key,
    ACTIONS(434), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
  [2446] = 1,
    ACTIONS(436), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2453] = 1,
    ACTIONS(438), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2460] = 1,
    ACTIONS(440), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2467] = 3,
    ACTIONS(401), 1,
      sym__dash,
    STATE(103), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(397), 2,
      anon_sym_,
      sym__word,
  [2478] = 1,
    ACTIONS(442), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2485] = 1,
    ACTIONS(444), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2492] = 1,
    ACTIONS(446), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2499] = 4,
    ACTIONS(420), 1,
      anon_sym_,
    ACTIONS(448), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym__colon,
    STATE(149), 1,
      aux_sym_attr_value_repeat1,
  [2512] = 4,
    ACTIONS(199), 1,
      sym__word,
    ACTIONS(450), 1,
      anon_sym_,
    ACTIONS(452), 1,
      sym__dash,
    STATE(148), 1,
      aux_sym_attr_value_repeat1,
  [2525] = 1,
    ACTIONS(454), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2532] = 4,
    ACTIONS(420), 1,
      anon_sym_,
    ACTIONS(456), 1,
      anon_sym_COLON,
    STATE(62), 1,
      sym__colon,
    STATE(149), 1,
      aux_sym_attr_value_repeat1,
  [2545] = 1,
    ACTIONS(458), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2552] = 1,
    ACTIONS(460), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2559] = 4,
    ACTIONS(420), 1,
      anon_sym_,
    ACTIONS(462), 1,
      anon_sym_COLON,
    STATE(58), 1,
      sym__colon,
    STATE(149), 1,
      aux_sym_attr_value_repeat1,
  [2572] = 1,
    ACTIONS(464), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2579] = 4,
    ACTIONS(420), 1,
      anon_sym_,
    ACTIONS(466), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym__colon,
    STATE(149), 1,
      aux_sym_attr_value_repeat1,
  [2592] = 3,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 1,
      aux_sym_string_token2,
    STATE(152), 1,
      aux_sym_string_repeat2,
  [2602] = 3,
    ACTIONS(468), 1,
      anon_sym_BQUOTE,
    ACTIONS(472), 1,
      aux_sym_string_token3,
    STATE(156), 1,
      aux_sym_string_repeat3,
  [2612] = 3,
    ACTIONS(382), 1,
      anon_sym_DASH_GT,
    ACTIONS(474), 1,
      sym__dash,
    STATE(137), 1,
      aux_sym_arrow_repeat1,
  [2622] = 1,
    ACTIONS(477), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [2628] = 3,
    ACTIONS(406), 1,
      anon_sym_DASH_GT,
    ACTIONS(479), 1,
      sym__dash,
    STATE(137), 1,
      aux_sym_arrow_repeat1,
  [2638] = 3,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
  [2648] = 1,
    ACTIONS(404), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [2654] = 3,
    ACTIONS(468), 1,
      anon_sym_SQUOTE,
    ACTIONS(481), 1,
      aux_sym_string_token1,
    STATE(145), 1,
      aux_sym_string_repeat1,
  [2664] = 3,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
  [2674] = 3,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
  [2684] = 3,
    ACTIONS(485), 1,
      anon_sym_SQUOTE,
    ACTIONS(487), 1,
      aux_sym_string_token1,
    STATE(145), 1,
      aux_sym_string_repeat1,
  [2694] = 3,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(490), 1,
      anon_sym_COLON,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
  [2704] = 3,
    ACTIONS(492), 1,
      anon_sym_SQUOTE,
    ACTIONS(494), 1,
      aux_sym_string_token1,
    STATE(142), 1,
      aux_sym_string_repeat1,
  [2714] = 3,
    ACTIONS(225), 1,
      sym__word,
    ACTIONS(251), 1,
      anon_sym_,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
  [2724] = 3,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(496), 1,
      anon_sym_COLON,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
  [2734] = 3,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
  [2744] = 3,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      aux_sym_string_token2,
    STATE(135), 1,
      aux_sym_string_repeat2,
  [2754] = 3,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
    ACTIONS(502), 1,
      aux_sym_string_token2,
    STATE(152), 1,
      aux_sym_string_repeat2,
  [2764] = 3,
    ACTIONS(492), 1,
      anon_sym_BQUOTE,
    ACTIONS(505), 1,
      aux_sym_string_token3,
    STATE(136), 1,
      aux_sym_string_repeat3,
  [2774] = 3,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(364), 1,
      sym__word,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
  [2784] = 1,
    ACTIONS(507), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [2790] = 3,
    ACTIONS(509), 1,
      anon_sym_BQUOTE,
    ACTIONS(511), 1,
      aux_sym_string_token3,
    STATE(156), 1,
      aux_sym_string_repeat3,
  [2800] = 1,
    ACTIONS(397), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [2806] = 3,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      aux_sym_attr_value_repeat1,
  [2816] = 1,
    ACTIONS(516), 2,
      anon_sym_,
      anon_sym_COLON,
  [2821] = 1,
    ACTIONS(518), 2,
      anon_sym_,
      anon_sym_COLON,
  [2826] = 1,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_LBRACE,
  [2831] = 2,
    ACTIONS(520), 1,
      sym__word,
    STATE(51), 1,
      aux_sym_identifier_repeat1,
  [2838] = 1,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_COLON,
  [2843] = 2,
    ACTIONS(524), 1,
      sym__word,
    STATE(32), 1,
      aux_sym_identifier_repeat1,
  [2850] = 1,
    ACTIONS(225), 1,
      sym__word,
  [2854] = 1,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
  [2858] = 1,
    ACTIONS(364), 1,
      sym__word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 232,
  [SMALL_STATE(9)] = 272,
  [SMALL_STATE(10)] = 312,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 392,
  [SMALL_STATE(13)] = 442,
  [SMALL_STATE(14)] = 482,
  [SMALL_STATE(15)] = 515,
  [SMALL_STATE(16)] = 562,
  [SMALL_STATE(17)] = 595,
  [SMALL_STATE(18)] = 623,
  [SMALL_STATE(19)] = 651,
  [SMALL_STATE(20)] = 689,
  [SMALL_STATE(21)] = 717,
  [SMALL_STATE(22)] = 745,
  [SMALL_STATE(23)] = 783,
  [SMALL_STATE(24)] = 812,
  [SMALL_STATE(25)] = 841,
  [SMALL_STATE(26)] = 862,
  [SMALL_STATE(27)] = 883,
  [SMALL_STATE(28)] = 912,
  [SMALL_STATE(29)] = 941,
  [SMALL_STATE(30)] = 977,
  [SMALL_STATE(31)] = 1003,
  [SMALL_STATE(32)] = 1039,
  [SMALL_STATE(33)] = 1060,
  [SMALL_STATE(34)] = 1083,
  [SMALL_STATE(35)] = 1104,
  [SMALL_STATE(36)] = 1125,
  [SMALL_STATE(37)] = 1148,
  [SMALL_STATE(38)] = 1166,
  [SMALL_STATE(39)] = 1182,
  [SMALL_STATE(40)] = 1200,
  [SMALL_STATE(41)] = 1216,
  [SMALL_STATE(42)] = 1244,
  [SMALL_STATE(43)] = 1259,
  [SMALL_STATE(44)] = 1274,
  [SMALL_STATE(45)] = 1289,
  [SMALL_STATE(46)] = 1316,
  [SMALL_STATE(47)] = 1331,
  [SMALL_STATE(48)] = 1348,
  [SMALL_STATE(49)] = 1368,
  [SMALL_STATE(50)] = 1386,
  [SMALL_STATE(51)] = 1406,
  [SMALL_STATE(52)] = 1424,
  [SMALL_STATE(53)] = 1440,
  [SMALL_STATE(54)] = 1465,
  [SMALL_STATE(55)] = 1484,
  [SMALL_STATE(56)] = 1503,
  [SMALL_STATE(57)] = 1528,
  [SMALL_STATE(58)] = 1539,
  [SMALL_STATE(59)] = 1564,
  [SMALL_STATE(60)] = 1575,
  [SMALL_STATE(61)] = 1588,
  [SMALL_STATE(62)] = 1601,
  [SMALL_STATE(63)] = 1626,
  [SMALL_STATE(64)] = 1639,
  [SMALL_STATE(65)] = 1664,
  [SMALL_STATE(66)] = 1677,
  [SMALL_STATE(67)] = 1696,
  [SMALL_STATE(68)] = 1721,
  [SMALL_STATE(69)] = 1734,
  [SMALL_STATE(70)] = 1747,
  [SMALL_STATE(71)] = 1760,
  [SMALL_STATE(72)] = 1779,
  [SMALL_STATE(73)] = 1804,
  [SMALL_STATE(74)] = 1817,
  [SMALL_STATE(75)] = 1835,
  [SMALL_STATE(76)] = 1851,
  [SMALL_STATE(77)] = 1873,
  [SMALL_STATE(78)] = 1889,
  [SMALL_STATE(79)] = 1907,
  [SMALL_STATE(80)] = 1927,
  [SMALL_STATE(81)] = 1945,
  [SMALL_STATE(82)] = 1961,
  [SMALL_STATE(83)] = 1979,
  [SMALL_STATE(84)] = 1993,
  [SMALL_STATE(85)] = 2009,
  [SMALL_STATE(86)] = 2029,
  [SMALL_STATE(87)] = 2045,
  [SMALL_STATE(88)] = 2063,
  [SMALL_STATE(89)] = 2075,
  [SMALL_STATE(90)] = 2087,
  [SMALL_STATE(91)] = 2106,
  [SMALL_STATE(92)] = 2115,
  [SMALL_STATE(93)] = 2134,
  [SMALL_STATE(94)] = 2149,
  [SMALL_STATE(95)] = 2164,
  [SMALL_STATE(96)] = 2183,
  [SMALL_STATE(97)] = 2202,
  [SMALL_STATE(98)] = 2217,
  [SMALL_STATE(99)] = 2236,
  [SMALL_STATE(100)] = 2246,
  [SMALL_STATE(101)] = 2254,
  [SMALL_STATE(102)] = 2262,
  [SMALL_STATE(103)] = 2270,
  [SMALL_STATE(104)] = 2282,
  [SMALL_STATE(105)] = 2290,
  [SMALL_STATE(106)] = 2298,
  [SMALL_STATE(107)] = 2314,
  [SMALL_STATE(108)] = 2328,
  [SMALL_STATE(109)] = 2342,
  [SMALL_STATE(110)] = 2350,
  [SMALL_STATE(111)] = 2358,
  [SMALL_STATE(112)] = 2365,
  [SMALL_STATE(113)] = 2376,
  [SMALL_STATE(114)] = 2389,
  [SMALL_STATE(115)] = 2396,
  [SMALL_STATE(116)] = 2409,
  [SMALL_STATE(117)] = 2422,
  [SMALL_STATE(118)] = 2435,
  [SMALL_STATE(119)] = 2446,
  [SMALL_STATE(120)] = 2453,
  [SMALL_STATE(121)] = 2460,
  [SMALL_STATE(122)] = 2467,
  [SMALL_STATE(123)] = 2478,
  [SMALL_STATE(124)] = 2485,
  [SMALL_STATE(125)] = 2492,
  [SMALL_STATE(126)] = 2499,
  [SMALL_STATE(127)] = 2512,
  [SMALL_STATE(128)] = 2525,
  [SMALL_STATE(129)] = 2532,
  [SMALL_STATE(130)] = 2545,
  [SMALL_STATE(131)] = 2552,
  [SMALL_STATE(132)] = 2559,
  [SMALL_STATE(133)] = 2572,
  [SMALL_STATE(134)] = 2579,
  [SMALL_STATE(135)] = 2592,
  [SMALL_STATE(136)] = 2602,
  [SMALL_STATE(137)] = 2612,
  [SMALL_STATE(138)] = 2622,
  [SMALL_STATE(139)] = 2628,
  [SMALL_STATE(140)] = 2638,
  [SMALL_STATE(141)] = 2648,
  [SMALL_STATE(142)] = 2654,
  [SMALL_STATE(143)] = 2664,
  [SMALL_STATE(144)] = 2674,
  [SMALL_STATE(145)] = 2684,
  [SMALL_STATE(146)] = 2694,
  [SMALL_STATE(147)] = 2704,
  [SMALL_STATE(148)] = 2714,
  [SMALL_STATE(149)] = 2724,
  [SMALL_STATE(150)] = 2734,
  [SMALL_STATE(151)] = 2744,
  [SMALL_STATE(152)] = 2754,
  [SMALL_STATE(153)] = 2764,
  [SMALL_STATE(154)] = 2774,
  [SMALL_STATE(155)] = 2784,
  [SMALL_STATE(156)] = 2790,
  [SMALL_STATE(157)] = 2800,
  [SMALL_STATE(158)] = 2806,
  [SMALL_STATE(159)] = 2816,
  [SMALL_STATE(160)] = 2821,
  [SMALL_STATE(161)] = 2826,
  [SMALL_STATE(162)] = 2831,
  [SMALL_STATE(163)] = 2838,
  [SMALL_STATE(164)] = 2843,
  [SMALL_STATE(165)] = 2850,
  [SMALL_STATE(166)] = 2854,
  [SMALL_STATE(167)] = 2858,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(30),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(160),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(160),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(10),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(121),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(160),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(160),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(130),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(143),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(130),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attr_block_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(144),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(131),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(140),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(133),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(150),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(121),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(64),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(112),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(108),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(141),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(139),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 2), SHIFT(43),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), SHIFT(148),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), SHIFT(39),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(127),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), SHIFT(42),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 2), SHIFT(148),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 2), SHIFT(37),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(47),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), SHIFT(154),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 2), SHIFT(154),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(117),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_attribute, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(85),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(93),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3), REDUCE(sym__inner_style_attribute, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(103),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 2), SHIFT(103),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 1), SHIFT(107),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 3),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 1), SHIFT(122),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attribute, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 8),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 7),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 6),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(137),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arrow, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(145),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(152),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(156),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attr_key, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [526] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_d2(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
