#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__word = 1,
  sym__root_attr_key = 2,
  anon_sym_style = 3,
  anon_sym_shape = 4,
  anon_sym_label = 5,
  anon_sym_constraint = 6,
  anon_sym_icon = 7,
  anon_sym_width = 8,
  anon_sym_height = 9,
  anon_sym_opacity = 10,
  anon_sym_fill = 11,
  anon_sym_stroke = 12,
  anon_sym_stroke_DASHwidth = 13,
  anon_sym_stroke_DASHdash = 14,
  anon_sym_border_DASHradius = 15,
  anon_sym_font_DASHcolor = 16,
  anon_sym_shadow = 17,
  anon_sym_multiple = 18,
  anon_sym_animated = 19,
  anon_sym_3d = 20,
  anon_sym_link = 21,
  sym__text_attr_key = 22,
  anon_sym_source_DASHarrowhead = 23,
  anon_sym_target_DASHarrowhead = 24,
  anon_sym_ = 25,
  anon_sym_COLON = 26,
  anon_sym_DASH_DASH = 27,
  anon_sym_LT_DASH = 28,
  anon_sym_GT = 29,
  anon_sym_DASH_GT = 30,
  sym__dash = 31,
  sym_dot = 32,
  sym__unquoted_string = 33,
  anon_sym_SQUOTE = 34,
  aux_sym_string_token1 = 35,
  anon_sym_DQUOTE = 36,
  aux_sym_string_token2 = 37,
  anon_sym_BQUOTE = 38,
  aux_sym_string_token3 = 39,
  anon_sym_LF = 40,
  anon_sym_2 = 41,
  anon_sym_SEMI = 42,
  sym_source_file = 43,
  sym__definition = 44,
  sym_connection = 45,
  sym_shape = 46,
  sym_label = 47,
  sym_attr_value = 48,
  sym__root_attribute = 49,
  sym__style_attribute = 50,
  sym__shape_attribute = 51,
  sym__connection_attribute = 52,
  sym__shape_attr_key = 53,
  sym__style_attr_key = 54,
  sym__connection_attr_key = 55,
  sym__identifier = 56,
  sym_identifier = 57,
  sym__colon = 58,
  sym__arrow = 59,
  sym_arrow = 60,
  sym_string = 61,
  sym__eof = 62,
  sym__end = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_connection_repeat1 = 65,
  aux_sym_shape_repeat1 = 66,
  aux_sym__identifier_repeat1 = 67,
  aux_sym_identifier_repeat1 = 68,
  aux_sym_arrow_repeat1 = 69,
  aux_sym_string_repeat1 = 70,
  aux_sym_string_repeat2 = 71,
  aux_sym_string_repeat3 = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [sym__root_attr_key] = "attr_key",
  [anon_sym_style] = "attr_key",
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
  [anon_sym_] = " ",
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
  [sym__style_attribute] = "_style_attribute",
  [sym__shape_attribute] = "_shape_attribute",
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
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_arrow_repeat1] = "arrow_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [sym__root_attr_key] = sym__root_attr_key,
  [anon_sym_style] = sym__root_attr_key,
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
  [anon_sym_] = anon_sym_,
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
  [sym__style_attribute] = sym__style_attribute,
  [sym__shape_attribute] = sym__shape_attribute,
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
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
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
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = true,
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
  [anon_sym_] = {
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
  [sym__style_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_attribute] = {
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
  [aux_sym__identifier_repeat1] = {
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
  [27] = 15,
  [28] = 11,
  [29] = 14,
  [30] = 12,
  [31] = 13,
  [32] = 21,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 18,
  [39] = 39,
  [40] = 17,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 19,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 16,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 21,
  [58] = 56,
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
  [86] = 86,
  [87] = 79,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 70,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 92,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 109,
  [112] = 112,
  [113] = 113,
  [114] = 113,
  [115] = 115,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      if (lookahead == 0) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '3') ADVANCE(148);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '`') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 's') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '<') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '`') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(137);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '`') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(137);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(122);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 99:
      if (lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 100:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      if (lookahead == 0) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '>') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_animated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 183:
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
  [1] = {.lex_state = 102},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 102},
  [4] = {.lex_state = 102},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 102},
  [7] = {.lex_state = 102},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 102},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 102},
  [28] = {.lex_state = 102},
  [29] = {.lex_state = 102},
  [30] = {.lex_state = 102},
  [31] = {.lex_state = 102},
  [32] = {.lex_state = 102},
  [33] = {.lex_state = 102},
  [34] = {.lex_state = 102},
  [35] = {.lex_state = 102},
  [36] = {.lex_state = 102},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 102},
  [39] = {.lex_state = 102},
  [40] = {.lex_state = 102},
  [41] = {.lex_state = 102},
  [42] = {.lex_state = 102},
  [43] = {.lex_state = 102},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 102},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 102},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 102},
  [53] = {.lex_state = 102},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 102},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 102},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 102},
  [71] = {.lex_state = 102},
  [72] = {.lex_state = 102},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 102},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 102},
  [80] = {.lex_state = 102},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 102},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 102},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 102},
  [100] = {.lex_state = 102},
  [101] = {.lex_state = 102},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 102},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 102},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 102},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 102},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 102},
  [114] = {.lex_state = 102},
  [115] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym__root_attr_key] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
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
    [anon_sym_] = ACTIONS(1),
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
    [sym_source_file] = STATE(115),
    [sym__definition] = STATE(3),
    [sym_connection] = STATE(3),
    [sym_shape] = STATE(3),
    [sym__root_attribute] = STATE(3),
    [sym__identifier] = STATE(2),
    [sym_identifier] = STATE(2),
    [sym__eof] = STATE(3),
    [sym__end] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__identifier_repeat1] = STATE(24),
    [aux_sym_identifier_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [sym__root_attr_key] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym__dash] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(15), 1,
      anon_sym_,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_DASH,
    ACTIONS(23), 1,
      anon_sym_DASH_GT,
    ACTIONS(25), 1,
      sym__dash,
    ACTIONS(27), 1,
      sym_dot,
    STATE(5), 1,
      aux_sym_connection_repeat1,
    STATE(10), 1,
      aux_sym__identifier_repeat1,
    STATE(20), 1,
      aux_sym_shape_repeat1,
    STATE(62), 1,
      sym__colon,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(41), 2,
      sym__eof,
      sym__end,
    STATE(45), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(29), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [50] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(7), 1,
      sym__root_attr_key,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_identifier_repeat1,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    STATE(2), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(33), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    STATE(4), 7,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__eof,
      sym__end,
      aux_sym_source_file_repeat1,
  [90] = 10,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym__word,
    ACTIONS(40), 1,
      sym__root_attr_key,
    ACTIONS(43), 1,
      anon_sym_,
    ACTIONS(46), 1,
      sym__dash,
    STATE(12), 1,
      aux_sym_identifier_repeat1,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    STATE(2), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(49), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    STATE(4), 7,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__eof,
      sym__end,
      aux_sym_source_file_repeat1,
  [130] = 14,
    ACTIONS(15), 1,
      anon_sym_,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_DASH,
    ACTIONS(23), 1,
      anon_sym_DASH_GT,
    ACTIONS(25), 1,
      sym__dash,
    ACTIONS(52), 1,
      sym_dot,
    STATE(8), 1,
      aux_sym_connection_repeat1,
    STATE(10), 1,
      aux_sym__identifier_repeat1,
    STATE(54), 1,
      sym__colon,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(34), 2,
      sym__eof,
      sym__end,
    STATE(45), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(54), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [177] = 10,
    ACTIONS(56), 1,
      sym__word,
    ACTIONS(58), 1,
      anon_sym_style,
    ACTIONS(62), 1,
      anon_sym_,
    ACTIONS(64), 1,
      sym__dash,
    STATE(30), 1,
      aux_sym_identifier_repeat1,
    STATE(56), 1,
      aux_sym__identifier_repeat1,
    STATE(78), 1,
      sym__shape_attr_key,
    STATE(50), 2,
      sym__style_attribute,
      sym__shape_attribute,
    STATE(66), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [215] = 10,
    ACTIONS(56), 1,
      sym__word,
    ACTIONS(58), 1,
      anon_sym_style,
    ACTIONS(62), 1,
      anon_sym_,
    ACTIONS(64), 1,
      sym__dash,
    STATE(30), 1,
      aux_sym_identifier_repeat1,
    STATE(56), 1,
      aux_sym__identifier_repeat1,
    STATE(78), 1,
      sym__shape_attr_key,
    STATE(51), 2,
      sym__style_attribute,
      sym__shape_attribute,
    STATE(66), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [253] = 10,
    ACTIONS(66), 1,
      anon_sym_,
    ACTIONS(71), 1,
      anon_sym_DASH_DASH,
    ACTIONS(74), 1,
      anon_sym_LT_DASH,
    ACTIONS(77), 1,
      anon_sym_DASH_GT,
    ACTIONS(80), 1,
      sym__dash,
    STATE(8), 1,
      aux_sym_connection_repeat1,
    STATE(37), 1,
      aux_sym__identifier_repeat1,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(45), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(69), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [289] = 3,
    ACTIONS(85), 1,
      anon_sym_stroke,
    STATE(74), 1,
      sym__style_attr_key,
    ACTIONS(83), 11,
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
  [309] = 11,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_DASH,
    ACTIONS(23), 1,
      anon_sym_DASH_GT,
    ACTIONS(25), 1,
      sym__dash,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_COLON,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    STATE(35), 1,
      sym__eof,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(99), 1,
      sym_arrow,
    ACTIONS(91), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [345] = 4,
    ACTIONS(93), 1,
      sym__word,
    ACTIONS(97), 1,
      sym__dash,
    STATE(15), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(95), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [366] = 4,
    ACTIONS(93), 1,
      sym__word,
    ACTIONS(102), 1,
      sym__dash,
    STATE(15), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(100), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [387] = 5,
    ACTIONS(105), 1,
      sym__word,
    ACTIONS(107), 1,
      anon_sym_,
    ACTIONS(110), 1,
      sym__dash,
    STATE(103), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [410] = 5,
    ACTIONS(105), 1,
      sym__word,
    ACTIONS(113), 1,
      anon_sym_,
    ACTIONS(116), 1,
      sym__dash,
    STATE(103), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(95), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [433] = 4,
    ACTIONS(119), 1,
      sym__word,
    ACTIONS(124), 1,
      sym__dash,
    STATE(15), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(122), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [454] = 3,
    ACTIONS(126), 1,
      sym__word,
    ACTIONS(128), 1,
      sym__dash,
    ACTIONS(95), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [472] = 2,
    ACTIONS(124), 1,
      sym__dash,
    ACTIONS(122), 10,
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
  [488] = 2,
    ACTIONS(132), 1,
      sym__dash,
    ACTIONS(130), 10,
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
  [504] = 3,
    ACTIONS(126), 1,
      sym__word,
    ACTIONS(136), 1,
      sym__dash,
    ACTIONS(134), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [522] = 8,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(138), 1,
      anon_sym_,
    ACTIONS(140), 1,
      sym_dot,
    STATE(46), 1,
      aux_sym__identifier_repeat1,
    STATE(47), 1,
      aux_sym_shape_repeat1,
    STATE(61), 1,
      sym__colon,
    STATE(33), 2,
      sym__eof,
      sym__end,
    ACTIONS(142), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [550] = 4,
    ACTIONS(144), 1,
      anon_sym_,
    ACTIONS(149), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(147), 7,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [569] = 2,
    ACTIONS(151), 1,
      sym__dash,
    ACTIONS(69), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [584] = 2,
    ACTIONS(136), 1,
      sym__dash,
    ACTIONS(134), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [599] = 8,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(153), 1,
      sym__word,
    ACTIONS(155), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym_identifier_repeat1,
    STATE(26), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
    STATE(35), 1,
      sym__eof,
    ACTIONS(91), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [626] = 2,
    ACTIONS(128), 1,
      sym__dash,
    ACTIONS(95), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [641] = 2,
    ACTIONS(159), 1,
      sym__dash,
    ACTIONS(157), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [656] = 3,
    ACTIONS(161), 1,
      sym__word,
    STATE(27), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(122), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [672] = 4,
    ACTIONS(164), 1,
      sym__word,
    ACTIONS(166), 1,
      sym__dash,
    STATE(27), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(95), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [690] = 5,
    ACTIONS(168), 1,
      sym__word,
    ACTIONS(170), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym__dash,
    STATE(92), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(95), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [710] = 4,
    ACTIONS(164), 1,
      sym__word,
    ACTIONS(175), 1,
      sym__dash,
    STATE(27), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(100), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [728] = 5,
    ACTIONS(168), 1,
      sym__word,
    ACTIONS(177), 1,
      anon_sym_,
    ACTIONS(180), 1,
      sym__dash,
    STATE(92), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [748] = 3,
    ACTIONS(182), 1,
      anon_sym_,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(147), 6,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [763] = 2,
    ACTIONS(187), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [776] = 2,
    ACTIONS(191), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(189), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [789] = 2,
    ACTIONS(195), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [802] = 2,
    ACTIONS(199), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(197), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [815] = 8,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_DASH,
    ACTIONS(23), 1,
      anon_sym_DASH_GT,
    ACTIONS(25), 1,
      sym__dash,
    ACTIONS(87), 1,
      anon_sym_,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(99), 1,
      sym_arrow,
  [840] = 1,
    ACTIONS(130), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [851] = 2,
    ACTIONS(203), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [864] = 1,
    ACTIONS(122), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [875] = 2,
    ACTIONS(207), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [888] = 2,
    ACTIONS(211), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [901] = 2,
    ACTIONS(215), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(213), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [914] = 4,
    ACTIONS(217), 1,
      anon_sym_,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
    STATE(42), 2,
      sym__eof,
      sym__end,
    ACTIONS(219), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [930] = 6,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(153), 1,
      sym__word,
    ACTIONS(221), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym_identifier_repeat1,
    STATE(58), 1,
      aux_sym__identifier_repeat1,
    STATE(22), 2,
      sym__identifier,
      sym_identifier,
  [950] = 5,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(155), 1,
      anon_sym_,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
    STATE(35), 1,
      sym__eof,
    ACTIONS(91), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [968] = 3,
    ACTIONS(225), 1,
      sym_dot,
    STATE(47), 1,
      aux_sym_shape_repeat1,
    ACTIONS(223), 5,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [982] = 2,
    ACTIONS(228), 1,
      sym__word,
    ACTIONS(134), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [994] = 4,
    ACTIONS(217), 1,
      anon_sym_,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
    STATE(43), 2,
      sym__eof,
      sym__end,
    ACTIONS(230), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1010] = 4,
    ACTIONS(217), 1,
      anon_sym_,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
    STATE(36), 2,
      sym__eof,
      sym__end,
    ACTIONS(232), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1026] = 4,
    ACTIONS(217), 1,
      anon_sym_,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
    STATE(39), 2,
      sym__eof,
      sym__end,
    ACTIONS(234), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1042] = 6,
    ACTIONS(62), 1,
      anon_sym_,
    ACTIONS(64), 1,
      sym__dash,
    ACTIONS(236), 1,
      sym__word,
    STATE(30), 1,
      aux_sym_identifier_repeat1,
    STATE(56), 1,
      aux_sym__identifier_repeat1,
    STATE(66), 2,
      sym__identifier,
      sym_identifier,
  [1062] = 2,
    ACTIONS(228), 1,
      sym__word,
    ACTIONS(95), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1074] = 6,
    ACTIONS(238), 1,
      sym__unquoted_string,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE,
    STATE(49), 1,
      sym_label,
    STATE(84), 1,
      sym_string,
  [1093] = 4,
    ACTIONS(246), 1,
      anon_sym_,
    ACTIONS(248), 1,
      sym__unquoted_string,
    STATE(68), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(250), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1108] = 6,
    ACTIONS(64), 1,
      sym__dash,
    ACTIONS(155), 1,
      anon_sym_,
    ACTIONS(236), 1,
      sym__word,
    STATE(26), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym_identifier_repeat1,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
  [1127] = 4,
    ACTIONS(149), 1,
      sym__unquoted_string,
    ACTIONS(252), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(147), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1142] = 6,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(153), 1,
      sym__word,
    ACTIONS(155), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym_identifier_repeat1,
    STATE(26), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
  [1161] = 4,
    ACTIONS(255), 1,
      anon_sym_,
    ACTIONS(257), 1,
      sym__unquoted_string,
    STATE(65), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(259), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1176] = 6,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE,
    ACTIONS(261), 1,
      sym__unquoted_string,
    STATE(44), 1,
      sym_attr_value,
    STATE(73), 1,
      sym_string,
  [1195] = 6,
    ACTIONS(238), 1,
      sym__unquoted_string,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE,
    STATE(50), 1,
      sym_label,
    STATE(84), 1,
      sym_string,
  [1214] = 6,
    ACTIONS(238), 1,
      sym__unquoted_string,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE,
    STATE(51), 1,
      sym_label,
    STATE(84), 1,
      sym_string,
  [1233] = 6,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE,
    ACTIONS(261), 1,
      sym__unquoted_string,
    STATE(73), 1,
      sym_string,
    STATE(81), 1,
      sym_attr_value,
  [1252] = 6,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE,
    ACTIONS(261), 1,
      sym__unquoted_string,
    STATE(73), 1,
      sym_string,
    STATE(83), 1,
      sym_attr_value,
  [1271] = 4,
    ACTIONS(248), 1,
      sym__unquoted_string,
    ACTIONS(263), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(250), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1286] = 1,
    ACTIONS(223), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1295] = 4,
    ACTIONS(155), 1,
      anon_sym_,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
    STATE(35), 1,
      sym__eof,
    ACTIONS(91), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1310] = 4,
    ACTIONS(263), 1,
      anon_sym_,
    ACTIONS(265), 1,
      sym__unquoted_string,
    STATE(57), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(267), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1325] = 6,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE,
    ACTIONS(261), 1,
      sym__unquoted_string,
    STATE(73), 1,
      sym_string,
    STATE(88), 1,
      sym_attr_value,
  [1344] = 3,
    ACTIONS(271), 1,
      sym__dash,
    STATE(70), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(269), 3,
      anon_sym_,
      anon_sym_GT,
      sym__word,
  [1356] = 4,
    ACTIONS(276), 1,
      anon_sym_GT,
    ACTIONS(278), 1,
      sym__dash,
    STATE(72), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(274), 2,
      anon_sym_,
      sym__word,
  [1370] = 4,
    ACTIONS(283), 1,
      anon_sym_GT,
    ACTIONS(285), 1,
      sym__dash,
    STATE(70), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(281), 2,
      anon_sym_,
      sym__word,
  [1384] = 1,
    ACTIONS(288), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1391] = 4,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(290), 1,
      anon_sym_,
    STATE(63), 1,
      sym__colon,
    STATE(89), 1,
      aux_sym__identifier_repeat1,
  [1404] = 3,
    STATE(49), 1,
      sym__connection_attribute,
    STATE(82), 1,
      sym__connection_attr_key,
    ACTIONS(292), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
  [1415] = 4,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(290), 1,
      anon_sym_,
    STATE(60), 1,
      sym__colon,
    STATE(89), 1,
      aux_sym__identifier_repeat1,
  [1428] = 3,
    ACTIONS(285), 1,
      sym__dash,
    STATE(70), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(281), 2,
      anon_sym_,
      sym__word,
  [1439] = 4,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(290), 1,
      anon_sym_,
    STATE(69), 1,
      sym__colon,
    STATE(89), 1,
      aux_sym__identifier_repeat1,
  [1452] = 4,
    ACTIONS(168), 1,
      sym__word,
    ACTIONS(294), 1,
      anon_sym_,
    ACTIONS(296), 1,
      sym__dash,
    STATE(92), 1,
      aux_sym__identifier_repeat1,
  [1465] = 3,
    ACTIONS(298), 1,
      sym__dash,
    STATE(77), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(274), 2,
      anon_sym_,
      sym__word,
  [1476] = 1,
    ACTIONS(301), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1483] = 4,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(290), 1,
      anon_sym_,
    STATE(64), 1,
      sym__colon,
    STATE(89), 1,
      aux_sym__identifier_repeat1,
  [1496] = 1,
    ACTIONS(303), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1503] = 1,
    ACTIONS(305), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1510] = 1,
    ACTIONS(307), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1517] = 1,
    ACTIONS(309), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1524] = 4,
    ACTIONS(105), 1,
      sym__word,
    ACTIONS(311), 1,
      anon_sym_,
    ACTIONS(313), 1,
      sym__dash,
    STATE(103), 1,
      aux_sym__identifier_repeat1,
  [1537] = 1,
    ACTIONS(315), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1544] = 3,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(155), 1,
      anon_sym_,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
  [1554] = 3,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      aux_sym_string_token2,
    STATE(93), 1,
      aux_sym_string_repeat2,
  [1564] = 3,
    ACTIONS(321), 1,
      anon_sym_BQUOTE,
    ACTIONS(323), 1,
      aux_sym_string_token3,
    STATE(91), 1,
      aux_sym_string_repeat3,
  [1574] = 3,
    ACTIONS(155), 1,
      anon_sym_,
    ACTIONS(228), 1,
      sym__word,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
  [1584] = 3,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      aux_sym_string_token2,
    STATE(102), 1,
      aux_sym_string_repeat2,
  [1594] = 3,
    ACTIONS(326), 1,
      anon_sym_BQUOTE,
    ACTIONS(330), 1,
      aux_sym_string_token3,
    STATE(91), 1,
      aux_sym_string_repeat3,
  [1604] = 3,
    ACTIONS(276), 1,
      anon_sym_DASH_GT,
    ACTIONS(332), 1,
      sym__dash,
    STATE(96), 1,
      aux_sym_arrow_repeat1,
  [1614] = 3,
    ACTIONS(269), 1,
      anon_sym_DASH_GT,
    ACTIONS(334), 1,
      sym__dash,
    STATE(96), 1,
      aux_sym_arrow_repeat1,
  [1624] = 3,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      aux_sym_string_token1,
    STATE(97), 1,
      aux_sym_string_repeat1,
  [1634] = 3,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      aux_sym_string_token1,
    STATE(104), 1,
      aux_sym_string_repeat1,
  [1644] = 1,
    ACTIONS(344), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [1650] = 1,
    ACTIONS(274), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [1656] = 1,
    ACTIONS(281), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [1662] = 3,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      aux_sym_string_token2,
    STATE(102), 1,
      aux_sym_string_repeat2,
  [1672] = 3,
    ACTIONS(126), 1,
      sym__word,
    ACTIONS(155), 1,
      anon_sym_,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
  [1682] = 3,
    ACTIONS(326), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      aux_sym_string_token1,
    STATE(97), 1,
      aux_sym_string_repeat1,
  [1692] = 1,
    ACTIONS(353), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [1698] = 3,
    ACTIONS(317), 1,
      anon_sym_BQUOTE,
    ACTIONS(355), 1,
      aux_sym_string_token3,
    STATE(94), 1,
      aux_sym_string_repeat3,
  [1708] = 1,
    ACTIONS(357), 2,
      anon_sym_,
      anon_sym_COLON,
  [1713] = 1,
    ACTIONS(359), 2,
      anon_sym_,
      anon_sym_COLON,
  [1718] = 2,
    ACTIONS(361), 1,
      sym__word,
    STATE(28), 1,
      aux_sym_identifier_repeat1,
  [1725] = 1,
    ACTIONS(363), 2,
      anon_sym_,
      anon_sym_COLON,
  [1730] = 2,
    ACTIONS(365), 1,
      sym__word,
    STATE(11), 1,
      aux_sym_identifier_repeat1,
  [1737] = 1,
    ACTIONS(367), 1,
      sym_dot,
  [1741] = 1,
    ACTIONS(228), 1,
      sym__word,
  [1745] = 1,
    ACTIONS(126), 1,
      sym__word,
  [1749] = 1,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 215,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 309,
  [SMALL_STATE(11)] = 345,
  [SMALL_STATE(12)] = 366,
  [SMALL_STATE(13)] = 387,
  [SMALL_STATE(14)] = 410,
  [SMALL_STATE(15)] = 433,
  [SMALL_STATE(16)] = 454,
  [SMALL_STATE(17)] = 472,
  [SMALL_STATE(18)] = 488,
  [SMALL_STATE(19)] = 504,
  [SMALL_STATE(20)] = 522,
  [SMALL_STATE(21)] = 550,
  [SMALL_STATE(22)] = 569,
  [SMALL_STATE(23)] = 584,
  [SMALL_STATE(24)] = 599,
  [SMALL_STATE(25)] = 626,
  [SMALL_STATE(26)] = 641,
  [SMALL_STATE(27)] = 656,
  [SMALL_STATE(28)] = 672,
  [SMALL_STATE(29)] = 690,
  [SMALL_STATE(30)] = 710,
  [SMALL_STATE(31)] = 728,
  [SMALL_STATE(32)] = 748,
  [SMALL_STATE(33)] = 763,
  [SMALL_STATE(34)] = 776,
  [SMALL_STATE(35)] = 789,
  [SMALL_STATE(36)] = 802,
  [SMALL_STATE(37)] = 815,
  [SMALL_STATE(38)] = 840,
  [SMALL_STATE(39)] = 851,
  [SMALL_STATE(40)] = 864,
  [SMALL_STATE(41)] = 875,
  [SMALL_STATE(42)] = 888,
  [SMALL_STATE(43)] = 901,
  [SMALL_STATE(44)] = 914,
  [SMALL_STATE(45)] = 930,
  [SMALL_STATE(46)] = 950,
  [SMALL_STATE(47)] = 968,
  [SMALL_STATE(48)] = 982,
  [SMALL_STATE(49)] = 994,
  [SMALL_STATE(50)] = 1010,
  [SMALL_STATE(51)] = 1026,
  [SMALL_STATE(52)] = 1042,
  [SMALL_STATE(53)] = 1062,
  [SMALL_STATE(54)] = 1074,
  [SMALL_STATE(55)] = 1093,
  [SMALL_STATE(56)] = 1108,
  [SMALL_STATE(57)] = 1127,
  [SMALL_STATE(58)] = 1142,
  [SMALL_STATE(59)] = 1161,
  [SMALL_STATE(60)] = 1176,
  [SMALL_STATE(61)] = 1195,
  [SMALL_STATE(62)] = 1214,
  [SMALL_STATE(63)] = 1233,
  [SMALL_STATE(64)] = 1252,
  [SMALL_STATE(65)] = 1271,
  [SMALL_STATE(66)] = 1286,
  [SMALL_STATE(67)] = 1295,
  [SMALL_STATE(68)] = 1310,
  [SMALL_STATE(69)] = 1325,
  [SMALL_STATE(70)] = 1344,
  [SMALL_STATE(71)] = 1356,
  [SMALL_STATE(72)] = 1370,
  [SMALL_STATE(73)] = 1384,
  [SMALL_STATE(74)] = 1391,
  [SMALL_STATE(75)] = 1404,
  [SMALL_STATE(76)] = 1415,
  [SMALL_STATE(77)] = 1428,
  [SMALL_STATE(78)] = 1439,
  [SMALL_STATE(79)] = 1452,
  [SMALL_STATE(80)] = 1465,
  [SMALL_STATE(81)] = 1476,
  [SMALL_STATE(82)] = 1483,
  [SMALL_STATE(83)] = 1496,
  [SMALL_STATE(84)] = 1503,
  [SMALL_STATE(85)] = 1510,
  [SMALL_STATE(86)] = 1517,
  [SMALL_STATE(87)] = 1524,
  [SMALL_STATE(88)] = 1537,
  [SMALL_STATE(89)] = 1544,
  [SMALL_STATE(90)] = 1554,
  [SMALL_STATE(91)] = 1564,
  [SMALL_STATE(92)] = 1574,
  [SMALL_STATE(93)] = 1584,
  [SMALL_STATE(94)] = 1594,
  [SMALL_STATE(95)] = 1604,
  [SMALL_STATE(96)] = 1614,
  [SMALL_STATE(97)] = 1624,
  [SMALL_STATE(98)] = 1634,
  [SMALL_STATE(99)] = 1644,
  [SMALL_STATE(100)] = 1650,
  [SMALL_STATE(101)] = 1656,
  [SMALL_STATE(102)] = 1662,
  [SMALL_STATE(103)] = 1672,
  [SMALL_STATE(104)] = 1682,
  [SMALL_STATE(105)] = 1692,
  [SMALL_STATE(106)] = 1698,
  [SMALL_STATE(107)] = 1708,
  [SMALL_STATE(108)] = 1713,
  [SMALL_STATE(109)] = 1718,
  [SMALL_STATE(110)] = 1725,
  [SMALL_STATE(111)] = 1730,
  [SMALL_STATE(112)] = 1737,
  [SMALL_STATE(113)] = 1741,
  [SMALL_STATE(114)] = 1745,
  [SMALL_STATE(115)] = 1749,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(37),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(80),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(71),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(100),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(95),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 2), SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), SHIFT(103),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), SHIFT(16),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 2), SHIFT(103),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 2), SHIFT(19),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(87),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(21),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(79),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 2), SHIFT(92),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), SHIFT(92),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_attribute, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(52),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(57),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(70),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 1), SHIFT(72),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 2), SHIFT(70),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 1), SHIFT(77),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attribute, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(91),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(96),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(97),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arrow, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(102),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attr_key, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [369] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
