#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 219
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym__word = 1,
  anon_sym_ = 2,
  sym__root_attr_key = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_style = 6,
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
  sym_line_comment = 42,
  anon_sym_LF = 43,
  anon_sym_2 = 44,
  anon_sym_SEMI = 45,
  sym_source_file = 46,
  sym__definition = 47,
  sym_connection = 48,
  sym_shape = 49,
  sym_label = 50,
  sym_attr_value = 51,
  sym__root_attribute = 52,
  sym__shape_block = 53,
  sym__shape_block_definition = 54,
  sym__shape_attribute = 55,
  sym__style_attribute = 56,
  sym__style_attr_block = 57,
  sym__inner_style_attribute = 58,
  sym__connection_attribute = 59,
  sym__shape_attr_key = 60,
  sym__style_attr_key = 61,
  sym__connection_attr_key = 62,
  sym__identifier = 63,
  sym_identifier = 64,
  sym__colon = 65,
  sym__arrow = 66,
  sym_arrow = 67,
  sym_string = 68,
  sym__emptyline = 69,
  sym__eof = 70,
  sym__end = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_connection_repeat1 = 73,
  aux_sym_shape_repeat1 = 74,
  aux_sym_attr_value_repeat1 = 75,
  aux_sym__shape_block_repeat1 = 76,
  aux_sym__style_attr_block_repeat1 = 77,
  aux_sym_identifier_repeat1 = 78,
  aux_sym_arrow_repeat1 = 79,
  aux_sym_string_repeat1 = 80,
  aux_sym_string_repeat2 = 81,
  aux_sym_string_repeat3 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [anon_sym_] = " ",
  [sym__root_attr_key] = "attr_key",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_line_comment] = "line_comment",
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
  [sym__shape_block] = "block",
  [sym__shape_block_definition] = "_shape_block_definition",
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
  [sym__emptyline] = "_emptyline",
  [sym__eof] = "_eof",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym_shape_repeat1] = "shape_repeat1",
  [aux_sym_attr_value_repeat1] = "attr_value_repeat1",
  [aux_sym__shape_block_repeat1] = "_shape_block_repeat1",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_line_comment] = sym_line_comment,
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
  [sym__shape_block] = sym__shape_block,
  [sym__shape_block_definition] = sym__shape_block_definition,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__style_attribute] = sym__style_attribute,
  [sym__style_attr_block] = sym__shape_block,
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
  [sym__emptyline] = sym__emptyline,
  [sym__eof] = sym__eof,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym_shape_repeat1] = aux_sym_shape_repeat1,
  [aux_sym_attr_value_repeat1] = aux_sym_attr_value_repeat1,
  [aux_sym__shape_block_repeat1] = aux_sym__shape_block_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [sym_line_comment] = {
    .visible = true,
    .named = true,
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
  [sym__shape_block] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_block_definition] = {
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
  [sym__emptyline] = {
    .visible = false,
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
  [aux_sym__shape_block_repeat1] = {
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
  [30] = 10,
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
  [43] = 39,
  [44] = 40,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 42,
  [55] = 53,
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
  [76] = 60,
  [77] = 58,
  [78] = 78,
  [79] = 59,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 61,
  [87] = 87,
  [88] = 88,
  [89] = 57,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 62,
  [100] = 100,
  [101] = 101,
  [102] = 64,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 65,
  [111] = 63,
  [112] = 112,
  [113] = 113,
  [114] = 114,
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
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 10,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 87,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 167,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 87,
  [180] = 180,
  [181] = 181,
  [182] = 149,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 196,
  [204] = 204,
  [205] = 205,
  [206] = 205,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 87,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 211,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 217,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(105);
      if (lookahead == 0) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '3') ADVANCE(157);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '`') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '<') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '}') ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(192);
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '`') ADVANCE(149);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(142);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '`') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(142);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '`') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(142);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '`') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 59:
      if (lookahead == 'k') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 102:
      if (lookahead == 'w') ADVANCE(50);
      END_STATE();
    case 103:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 104:
      if (eof) ADVANCE(105);
      if (lookahead == 0) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(142);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_animated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '`') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(142);
      END_STATE();
    case 193:
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
  [1] = {.lex_state = 104},
  [2] = {.lex_state = 104},
  [3] = {.lex_state = 104},
  [4] = {.lex_state = 104},
  [5] = {.lex_state = 104},
  [6] = {.lex_state = 104},
  [7] = {.lex_state = 104},
  [8] = {.lex_state = 104},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 104},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 104},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 104},
  [31] = {.lex_state = 104},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 104},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 104},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 104},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 104},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 104},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 104},
  [50] = {.lex_state = 104},
  [51] = {.lex_state = 104},
  [52] = {.lex_state = 104},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 104},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 104},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 104},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 104},
  [71] = {.lex_state = 104},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 104},
  [76] = {.lex_state = 104},
  [77] = {.lex_state = 104},
  [78] = {.lex_state = 104},
  [79] = {.lex_state = 104},
  [80] = {.lex_state = 104},
  [81] = {.lex_state = 104},
  [82] = {.lex_state = 104},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 104},
  [85] = {.lex_state = 104},
  [86] = {.lex_state = 104},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 104},
  [89] = {.lex_state = 104},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 104},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 104},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 104},
  [111] = {.lex_state = 104},
  [112] = {.lex_state = 104},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 104},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 104},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 104},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 104},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 104},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 104},
  [156] = {.lex_state = 104},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 104},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 104},
  [172] = {.lex_state = 104},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 104},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 104},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 104},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 104},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 104},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 104},
  [204] = {.lex_state = 104},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 104},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 104},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 104},
  [218] = {.lex_state = 104},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__root_attr_key] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(216),
    [sym__definition] = STATE(26),
    [sym_connection] = STATE(26),
    [sym_shape] = STATE(26),
    [sym__root_attribute] = STATE(26),
    [sym__identifier] = STATE(20),
    [sym_identifier] = STATE(20),
    [sym__emptyline] = STATE(26),
    [sym__eof] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_attr_value_repeat1] = STATE(80),
    [aux_sym_identifier_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym__root_attr_key] = ACTIONS(11),
    [sym__dash] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_2] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(17), 1,
      anon_sym_,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_style,
    STATE(20), 1,
      sym__identifier,
    STATE(37), 1,
      aux_sym_attr_value_repeat1,
    STATE(54), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(69), 1,
      sym_identifier,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(25), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(7), 2,
      sym__emptyline,
      aux_sym__shape_block_repeat1,
    STATE(104), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(23), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [60] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(21), 1,
      anon_sym_style,
    ACTIONS(27), 1,
      anon_sym_,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym__identifier,
    STATE(35), 1,
      aux_sym_attr_value_repeat1,
    STATE(54), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(69), 1,
      sym_identifier,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(25), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(8), 2,
      sym__emptyline,
      aux_sym__shape_block_repeat1,
    STATE(107), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(23), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [120] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(21), 1,
      anon_sym_style,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(71), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(33), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(9), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(107), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(23), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [176] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(21), 1,
      anon_sym_style,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_attr_value_repeat1,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(37), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(8), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(107), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(23), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [232] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(21), 1,
      anon_sym_style,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_attr_value_repeat1,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(43), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(4), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(97), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(23), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [288] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(21), 1,
      anon_sym_style,
    ACTIONS(45), 1,
      anon_sym_,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(70), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(33), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(9), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(96), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(23), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [344] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_style,
    ACTIONS(49), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(67), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(33), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(9), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(104), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(23), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [400] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      sym__word,
    ACTIONS(54), 1,
      anon_sym_,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_style,
    ACTIONS(65), 1,
      sym__dash,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(80), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    ACTIONS(68), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(9), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(125), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(62), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [456] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(76), 2,
      anon_sym_stroke,
      sym__dash,
    ACTIONS(74), 19,
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
  [491] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 1,
      anon_sym_,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      anon_sym_stroke,
    STATE(23), 1,
      aux_sym_attr_value_repeat1,
    STATE(42), 1,
      sym__eof,
    STATE(100), 1,
      sym__inner_style_attribute,
    STATE(175), 1,
      sym__style_attr_key,
    ACTIONS(86), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(18), 2,
      sym__emptyline,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(82), 11,
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
  [537] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(88), 1,
      anon_sym_,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_attr_value_repeat1,
    STATE(94), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(92), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(13), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(82), 11,
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
  [581] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(94), 1,
      anon_sym_,
    STATE(22), 1,
      aux_sym_attr_value_repeat1,
    STATE(100), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(96), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(17), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(82), 11,
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
  [625] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(98), 1,
      anon_sym_,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_attr_value_repeat1,
    STATE(98), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(96), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(17), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(82), 11,
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
  [669] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(102), 1,
      anon_sym_,
    STATE(16), 1,
      aux_sym_attr_value_repeat1,
    STATE(100), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(104), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(18), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(82), 11,
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
  [713] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(106), 1,
      anon_sym_,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_attr_value_repeat1,
    STATE(42), 1,
      sym__eof,
    STATE(106), 1,
      sym__inner_style_attribute,
    STATE(175), 1,
      sym__style_attr_key,
    ACTIONS(86), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(14), 2,
      sym__emptyline,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(82), 11,
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
  [759] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 1,
      anon_sym_,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 1,
      anon_sym_stroke,
    STATE(27), 1,
      aux_sym_attr_value_repeat1,
    STATE(118), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(121), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(17), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(115), 11,
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
  [803] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_,
    STATE(24), 1,
      aux_sym_attr_value_repeat1,
    STATE(106), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(96), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(17), 3,
      sym__emptyline,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(82), 11,
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
  [847] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(126), 1,
      anon_sym_,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(130), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(82), 11,
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
  [886] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 1,
      anon_sym_,
    ACTIONS(134), 1,
      anon_sym_COLON,
    ACTIONS(136), 1,
      anon_sym_DASH_DASH,
    ACTIONS(138), 1,
      anon_sym_LT_DASH,
    ACTIONS(140), 1,
      anon_sym_DASH_GT,
    ACTIONS(142), 1,
      sym__dash,
    ACTIONS(144), 1,
      sym_dot,
    STATE(25), 1,
      aux_sym_connection_repeat1,
    STATE(45), 1,
      sym__colon,
    STATE(53), 1,
      aux_sym_attr_value_repeat1,
    STATE(66), 1,
      aux_sym_shape_repeat1,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(81), 2,
      sym__eof,
      sym__end,
    STATE(112), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(146), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [939] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      anon_sym_stroke,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(157), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(151), 11,
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
  [978] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(130), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(82), 11,
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
  [1017] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(154), 1,
      anon_sym_stroke,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(157), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(151), 11,
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
  [1056] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(130), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(82), 11,
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
  [1095] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_DASH_DASH,
    ACTIONS(138), 1,
      anon_sym_LT_DASH,
    ACTIONS(140), 1,
      anon_sym_DASH_GT,
    ACTIONS(142), 1,
      sym__dash,
    ACTIONS(163), 1,
      anon_sym_,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(167), 1,
      sym_dot,
    STATE(47), 1,
      aux_sym_connection_repeat1,
    STATE(55), 1,
      aux_sym_attr_value_repeat1,
    STATE(136), 1,
      sym__colon,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(88), 2,
      sym__eof,
      sym__end,
    STATE(112), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(169), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1145] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__root_attr_key,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(80), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(173), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(28), 7,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__emptyline,
      sym__eof,
      aux_sym_source_file_repeat1,
  [1187] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(126), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(40), 1,
      sym__eof,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(130), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(82), 11,
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
  [1223] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
      sym__word,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(183), 1,
      sym__root_attr_key,
    ACTIONS(186), 1,
      sym__dash,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(80), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(189), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(20), 2,
      sym__identifier,
      sym_identifier,
    STATE(28), 7,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__emptyline,
      sym__eof,
      aux_sym_source_file_repeat1,
  [1265] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      anon_sym_stroke,
    STATE(186), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(113), 13,
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
  [1296] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(74), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    ACTIONS(76), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1325] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_style,
    ACTIONS(203), 1,
      sym__word,
    ACTIONS(205), 1,
      anon_sym_,
    ACTIONS(207), 1,
      sym__dash,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    STATE(135), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    STATE(119), 2,
      sym__shape_attribute,
      sym__style_attribute,
    STATE(132), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(23), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1366] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_stroke,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(113), 13,
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
  [1397] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_style,
    ACTIONS(203), 1,
      sym__word,
    ACTIONS(205), 1,
      anon_sym_,
    ACTIONS(207), 1,
      sym__dash,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    STATE(135), 1,
      aux_sym_attr_value_repeat1,
    STATE(165), 1,
      sym__shape_attr_key,
    STATE(128), 2,
      sym__shape_attribute,
      sym__style_attribute,
    STATE(132), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(23), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1438] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_stroke,
    ACTIONS(215), 1,
      anon_sym_,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(113), 13,
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
  [1469] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(221), 1,
      sym__word,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 1,
      sym__dash,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(230), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(76), 7,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1510] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_stroke,
    ACTIONS(233), 1,
      anon_sym_,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(113), 13,
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
  [1541] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(221), 1,
      sym__word,
    ACTIONS(227), 1,
      sym__dash,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(230), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(76), 7,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1582] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(242), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym_attr_value_repeat1,
    STATE(143), 1,
      sym__inner_style_attribute,
    STATE(176), 1,
      sym__style_attr_key,
    ACTIONS(82), 11,
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
  [1614] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    ACTIONS(246), 9,
      sym__root_attr_key,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1638] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_stroke,
    ACTIONS(248), 15,
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
  [1662] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_stroke,
    ACTIONS(113), 15,
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
  [1686] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 1,
      anon_sym_stroke,
    ACTIONS(252), 15,
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
  [1710] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      anon_sym_stroke,
    ACTIONS(244), 15,
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
  [1734] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(250), 9,
      sym__root_attr_key,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1757] = 14,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_2,
    STATE(83), 1,
      sym_label,
    STATE(119), 1,
      sym__shape_block,
    STATE(123), 1,
      aux_sym_attr_value_repeat1,
    STATE(142), 1,
      sym_string,
    ACTIONS(272), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(84), 2,
      sym__eof,
      sym__end,
  [1802] = 14,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym__unquoted_string,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      anon_sym_2,
    STATE(90), 1,
      sym_label,
    STATE(123), 1,
      aux_sym_attr_value_repeat1,
    STATE(128), 1,
      sym__shape_block,
    STATE(142), 1,
      sym_string,
    ACTIONS(276), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(82), 2,
      sym__eof,
      sym__end,
  [1847] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      anon_sym_,
    ACTIONS(285), 1,
      anon_sym_DASH_DASH,
    ACTIONS(288), 1,
      anon_sym_LT_DASH,
    ACTIONS(291), 1,
      anon_sym_DASH_GT,
    ACTIONS(294), 1,
      sym__dash,
    STATE(47), 1,
      aux_sym_connection_repeat1,
    STATE(93), 1,
      aux_sym_attr_value_repeat1,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(112), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(283), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1886] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_stroke,
    ACTIONS(126), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(173), 1,
      sym__style_attr_key,
    ACTIONS(82), 11,
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
  [1915] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      anon_sym_,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(57), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(297), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1943] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      anon_sym_,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(57), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(297), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1971] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 1,
      anon_sym_,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(57), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(297), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1999] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(57), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(297), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [2027] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      anon_sym_,
    ACTIONS(136), 1,
      anon_sym_DASH_DASH,
    ACTIONS(138), 1,
      anon_sym_LT_DASH,
    ACTIONS(140), 1,
      anon_sym_DASH_GT,
    ACTIONS(142), 1,
      sym__dash,
    ACTIONS(323), 1,
      anon_sym_COLON,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(204), 1,
      sym_arrow,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2066] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 5,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(255), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [2087] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      anon_sym_,
    ACTIONS(136), 1,
      anon_sym_DASH_DASH,
    ACTIONS(138), 1,
      anon_sym_LT_DASH,
    ACTIONS(140), 1,
      anon_sym_DASH_GT,
    ACTIONS(142), 1,
      sym__dash,
    ACTIONS(327), 1,
      anon_sym_COLON,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(204), 1,
      sym_arrow,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 5,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(297), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [2147] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym__word,
    ACTIONS(331), 1,
      anon_sym_,
    ACTIONS(336), 1,
      sym__dash,
    STATE(203), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(334), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2173] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 1,
      sym__word,
    ACTIONS(341), 1,
      sym__dash,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(334), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2197] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym__word,
    ACTIONS(344), 1,
      anon_sym_,
    ACTIONS(349), 1,
      sym__dash,
    STATE(203), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(347), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2223] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 1,
      sym__word,
    ACTIONS(352), 1,
      sym__dash,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(347), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2247] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 1,
      sym__word,
    ACTIONS(360), 1,
      sym__dash,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(358), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2271] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 1,
      sym__dash,
    ACTIONS(362), 10,
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
  [2290] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      sym__word,
    ACTIONS(368), 1,
      sym__dash,
    ACTIONS(347), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2311] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 1,
      sym__dash,
    ACTIONS(358), 10,
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
  [2330] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      sym__word,
    ACTIONS(372), 1,
      sym__dash,
    ACTIONS(370), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2351] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_,
    ACTIONS(376), 1,
      anon_sym_COLON,
    ACTIONS(378), 1,
      sym_dot,
    STATE(46), 1,
      sym__colon,
    STATE(124), 1,
      aux_sym_shape_repeat1,
    STATE(127), 1,
      aux_sym_attr_value_repeat1,
    STATE(84), 2,
      sym__eof,
      sym__end,
    ACTIONS(272), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2382] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      sym__word,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(384), 2,
      anon_sym_LF,
      anon_sym_2,
  [2414] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      sym__dash,
    ACTIONS(370), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2432] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 1,
      sym__dash,
    ACTIONS(386), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2450] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(380), 1,
      sym__word,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(384), 2,
      anon_sym_LF,
      anon_sym_2,
  [2482] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      sym__word,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(384), 2,
      anon_sym_LF,
      anon_sym_2,
  [2514] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 1,
      sym__dash,
    ACTIONS(347), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2532] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 1,
      sym__dash,
    ACTIONS(394), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2550] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 1,
      sym__dash,
    ACTIONS(283), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2568] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(400), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2585] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 1,
      sym__word,
    ACTIONS(406), 1,
      sym__dash,
    STATE(86), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(347), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2606] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 1,
      sym__word,
    ACTIONS(408), 1,
      sym__dash,
    STATE(86), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(334), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2627] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(412), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(410), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2644] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      sym__word,
    ACTIONS(416), 1,
      anon_sym_,
    ACTIONS(419), 1,
      sym__dash,
    STATE(196), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(347), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2667] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(380), 1,
      sym__word,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(44), 1,
      sym__eof,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(384), 2,
      anon_sym_LF,
      anon_sym_2,
  [2696] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(421), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2713] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(427), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(425), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2730] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      anon_sym_,
    STATE(123), 1,
      aux_sym_attr_value_repeat1,
    STATE(128), 1,
      sym__shape_block,
    STATE(82), 2,
      sym__eof,
      sym__end,
    ACTIONS(276), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2755] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(431), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2772] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(435), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2789] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      sym__word,
    STATE(86), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(358), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2808] = 3,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(442), 3,
      anon_sym_,
      sym__unquoted_string,
      anon_sym_2,
    ACTIONS(444), 6,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_SEMI,
  [2825] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(446), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2842] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      sym__word,
    ACTIONS(450), 1,
      anon_sym_,
    ACTIONS(453), 1,
      sym__dash,
    STATE(196), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(334), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2865] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      anon_sym_,
    STATE(121), 1,
      sym__shape_block,
    STATE(123), 1,
      aux_sym_attr_value_repeat1,
    STATE(75), 2,
      sym__eof,
      sym__end,
    ACTIONS(455), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2890] = 9,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_,
    ACTIONS(459), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(141), 1,
      sym_attr_value,
    STATE(158), 1,
      sym_string,
  [2918] = 9,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_,
    ACTIONS(459), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(158), 1,
      sym_string,
    STATE(159), 1,
      sym_attr_value,
  [2946] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      anon_sym_,
    ACTIONS(136), 1,
      anon_sym_DASH_DASH,
    ACTIONS(138), 1,
      anon_sym_LT_DASH,
    ACTIONS(140), 1,
      anon_sym_DASH_GT,
    ACTIONS(142), 1,
      sym__dash,
    STATE(10), 1,
      aux_sym_attr_value_repeat1,
    STATE(197), 1,
      aux_sym_arrow_repeat1,
    STATE(204), 1,
      sym_arrow,
  [2974] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(461), 1,
      anon_sym_,
    STATE(130), 1,
      aux_sym_attr_value_repeat1,
    STATE(34), 2,
      sym__eof,
      sym__end,
    ACTIONS(463), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2996] = 9,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_,
    ACTIONS(459), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(158), 1,
      sym_string,
    STATE(177), 1,
      sym_attr_value,
  [3024] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      anon_sym_,
    STATE(117), 1,
      aux_sym_attr_value_repeat1,
    STATE(52), 2,
      sym__eof,
      sym__end,
    ACTIONS(467), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3046] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      anon_sym_,
    STATE(120), 1,
      aux_sym_attr_value_repeat1,
    STATE(51), 2,
      sym__eof,
      sym__end,
    ACTIONS(471), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3068] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(473), 1,
      anon_sym_,
    STATE(113), 1,
      aux_sym_attr_value_repeat1,
    STATE(32), 2,
      sym__eof,
      sym__end,
    ACTIONS(475), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3104] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      anon_sym_,
    STATE(108), 1,
      aux_sym_attr_value_repeat1,
    STATE(36), 2,
      sym__eof,
      sym__end,
    ACTIONS(479), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3126] = 9,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_,
    ACTIONS(459), 1,
      sym__unquoted_string,
    STATE(114), 1,
      sym_attr_value,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(158), 1,
      sym_string,
  [3154] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3168] = 9,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_,
    ACTIONS(459), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(152), 1,
      sym_attr_value,
    STATE(158), 1,
      sym_string,
  [3196] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(481), 1,
      anon_sym_,
    STATE(129), 1,
      aux_sym_attr_value_repeat1,
    STATE(50), 2,
      sym__eof,
      sym__end,
    ACTIONS(483), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3218] = 9,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_,
    ACTIONS(459), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym_attr_value_repeat1,
    STATE(146), 1,
      sym_attr_value,
    STATE(158), 1,
      sym_string,
  [3246] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(485), 1,
      anon_sym_,
    STATE(116), 1,
      aux_sym_attr_value_repeat1,
    STATE(29), 2,
      sym__eof,
      sym__end,
    ACTIONS(487), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3268] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(489), 1,
      anon_sym_,
    STATE(109), 1,
      aux_sym_attr_value_repeat1,
    STATE(49), 2,
      sym__eof,
      sym__end,
    ACTIONS(491), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3290] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(43), 1,
      sym__eof,
    ACTIONS(493), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3311] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3332] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(495), 1,
      sym__word,
    ACTIONS(370), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3347] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(495), 1,
      sym__word,
    ACTIONS(347), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3362] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(380), 1,
      sym__word,
    ACTIONS(497), 1,
      anon_sym_,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(137), 1,
      aux_sym_attr_value_repeat1,
    STATE(74), 2,
      sym__identifier,
      sym_identifier,
  [3385] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(43), 1,
      sym__eof,
    ACTIONS(493), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3406] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(131), 2,
      sym__eof,
      sym__end,
    ACTIONS(503), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3425] = 8,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(505), 1,
      anon_sym_,
    ACTIONS(507), 1,
      sym__unquoted_string,
    STATE(133), 1,
      aux_sym_attr_value_repeat1,
    STATE(145), 1,
      sym_string,
  [3450] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(43), 1,
      sym__eof,
    ACTIONS(493), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3471] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3492] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(511), 1,
      anon_sym_,
    STATE(139), 1,
      aux_sym_attr_value_repeat1,
    STATE(41), 2,
      sym__eof,
      sym__end,
    ACTIONS(513), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3511] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(82), 2,
      sym__eof,
      sym__end,
    ACTIONS(276), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3530] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3551] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(78), 2,
      sym__eof,
      sym__end,
    ACTIONS(515), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3570] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      anon_sym_,
    ACTIONS(207), 1,
      sym__dash,
    ACTIONS(517), 1,
      sym__word,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    STATE(135), 1,
      aux_sym_attr_value_repeat1,
    STATE(132), 2,
      sym__identifier,
      sym_identifier,
  [3593] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3614] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(523), 1,
      sym_dot,
    STATE(124), 1,
      aux_sym_shape_repeat1,
    ACTIONS(521), 5,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3631] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(56), 2,
      sym__eof,
      sym__end,
    ACTIONS(526), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3650] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(85), 2,
      sym__eof,
      sym__end,
    ACTIONS(528), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3669] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(323), 1,
      anon_sym_COLON,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3690] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      anon_sym_,
    STATE(140), 1,
      aux_sym_attr_value_repeat1,
    STATE(75), 2,
      sym__eof,
      sym__end,
    ACTIONS(455), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3709] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3730] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(43), 1,
      sym__eof,
    ACTIONS(493), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3751] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(530), 5,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
  [3766] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3778] = 5,
    ACTIONS(76), 1,
      sym__unquoted_string,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      anon_sym_,
    STATE(133), 1,
      aux_sym_attr_value_repeat1,
    ACTIONS(74), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [3796] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3808] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(207), 1,
      sym__dash,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(517), 1,
      sym__word,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(73), 1,
      sym_identifier,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
  [3830] = 7,
    ACTIONS(262), 1,
      sym__unquoted_string,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      sym_line_comment,
    STATE(126), 1,
      sym_label,
    STATE(142), 1,
      sym_string,
  [3852] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym__dash,
    ACTIONS(380), 1,
      sym__word,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    STATE(73), 1,
      sym_identifier,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(539), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3886] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(43), 1,
      sym__eof,
    ACTIONS(493), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3904] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
    STATE(39), 1,
      sym__eof,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3922] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(541), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3933] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(543), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3944] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3955] = 3,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(442), 2,
      anon_sym_,
      sym__unquoted_string,
    ACTIONS(444), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [3968] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(547), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3979] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(549), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3990] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(552), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(554), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4012] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(558), 1,
      sym__dash,
    STATE(149), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(556), 3,
      anon_sym_,
      anon_sym_GT,
      sym__word,
  [4027] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4038] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(563), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4049] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(565), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4060] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(567), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4071] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(569), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4082] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(573), 1,
      anon_sym_GT,
    ACTIONS(575), 1,
      sym__dash,
    STATE(149), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(571), 2,
      anon_sym_,
      sym__word,
  [4099] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(580), 1,
      anon_sym_GT,
    ACTIONS(582), 1,
      sym__dash,
    STATE(155), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(578), 2,
      anon_sym_,
      sym__word,
  [4116] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(585), 1,
      anon_sym_,
    ACTIONS(587), 1,
      anon_sym_COLON,
    ACTIONS(589), 1,
      sym_dot,
    STATE(180), 1,
      sym__colon,
    STATE(206), 1,
      aux_sym_attr_value_repeat1,
  [4135] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4146] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(593), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4157] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(595), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4168] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(597), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4178] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4188] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(601), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4198] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(605), 1,
      anon_sym_COLON,
    STATE(101), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [4214] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(607), 1,
      anon_sym_COLON,
    STATE(103), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [4230] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(609), 1,
      anon_sym_COLON,
    STATE(95), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [4246] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym__word,
    ACTIONS(611), 1,
      anon_sym_,
    ACTIONS(613), 1,
      sym__dash,
    STATE(203), 1,
      aux_sym_attr_value_repeat1,
  [4262] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(126), 1,
      sym__connection_attribute,
    STATE(166), 1,
      sym__connection_attr_key,
    ACTIONS(615), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
  [4276] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4286] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4296] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      sym__word,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      sym__dash,
    STATE(196), 1,
      aux_sym_attr_value_repeat1,
  [4312] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(625), 1,
      sym__dash,
    STATE(178), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(578), 2,
      anon_sym_,
      sym__word,
  [4326] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(628), 1,
      anon_sym_COLON,
    STATE(92), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [4342] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(630), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4352] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(632), 1,
      anon_sym_COLON,
    STATE(105), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [4368] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(634), 1,
      anon_sym_COLON,
    STATE(91), 1,
      sym__colon,
    STATE(205), 1,
      aux_sym_attr_value_repeat1,
  [4384] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(636), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4394] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      sym__dash,
    STATE(149), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(571), 2,
      anon_sym_,
      sym__word,
  [4408] = 3,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      sym__unquoted_string,
    ACTIONS(444), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [4420] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(638), 1,
      anon_sym_,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym__style_attr_block,
    STATE(198), 1,
      aux_sym_attr_value_repeat1,
  [4436] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(642), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [4446] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(556), 1,
      anon_sym_DASH_GT,
    ACTIONS(644), 1,
      sym__dash,
    STATE(182), 1,
      aux_sym_arrow_repeat1,
  [4459] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4472] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4485] = 4,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(649), 1,
      anon_sym_BQUOTE,
    ACTIONS(651), 1,
      aux_sym_string_token3,
    STATE(185), 1,
      aux_sym_string_repeat3,
  [4498] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4511] = 4,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(654), 1,
      anon_sym_BQUOTE,
    ACTIONS(656), 1,
      aux_sym_string_token3,
    STATE(207), 1,
      aux_sym_string_repeat3,
  [4524] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4537] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4550] = 4,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(658), 1,
      anon_sym_DQUOTE,
    ACTIONS(660), 1,
      aux_sym_string_token2,
    STATE(190), 1,
      aux_sym_string_repeat2,
  [4563] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4576] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(571), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [4585] = 4,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(654), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      aux_sym_string_token2,
    STATE(209), 1,
      aux_sym_string_repeat2,
  [4598] = 4,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(654), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(208), 1,
      aux_sym_string_repeat1,
  [4611] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4624] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(495), 1,
      sym__word,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4637] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(580), 1,
      anon_sym_DASH_GT,
    ACTIONS(669), 1,
      sym__dash,
    STATE(182), 1,
      aux_sym_arrow_repeat1,
  [4650] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4663] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(578), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [4672] = 4,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(673), 1,
      anon_sym_SQUOTE,
    ACTIONS(675), 1,
      aux_sym_string_token1,
    STATE(200), 1,
      aux_sym_string_repeat1,
  [4685] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(678), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [4694] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4707] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      sym__word,
    ACTIONS(382), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4720] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(680), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [4729] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(682), 1,
      anon_sym_COLON,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4742] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(684), 1,
      anon_sym_COLON,
    STATE(30), 1,
      aux_sym_attr_value_repeat1,
  [4755] = 4,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_BQUOTE,
    ACTIONS(688), 1,
      aux_sym_string_token3,
    STATE(185), 1,
      aux_sym_string_repeat3,
  [4768] = 4,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_SQUOTE,
    ACTIONS(690), 1,
      aux_sym_string_token1,
    STATE(200), 1,
      aux_sym_string_repeat1,
  [4781] = 4,
    ACTIONS(270), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DQUOTE,
    ACTIONS(692), 1,
      aux_sym_string_token2,
    STATE(190), 1,
      aux_sym_string_repeat2,
  [4794] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 2,
      anon_sym_,
      anon_sym_LBRACE,
  [4802] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym__word,
    STATE(76), 1,
      aux_sym_identifier_repeat1,
  [4812] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(696), 2,
      anon_sym_,
      anon_sym_COLON,
  [4820] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(698), 2,
      anon_sym_,
      anon_sym_COLON,
  [4828] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(700), 1,
      sym__word,
    STATE(60), 1,
      aux_sym_identifier_repeat1,
  [4838] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(702), 2,
      anon_sym_,
      anon_sym_COLON,
  [4846] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
  [4853] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(495), 1,
      sym__word,
  [4860] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      sym__word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 176,
  [SMALL_STATE(6)] = 232,
  [SMALL_STATE(7)] = 288,
  [SMALL_STATE(8)] = 344,
  [SMALL_STATE(9)] = 400,
  [SMALL_STATE(10)] = 456,
  [SMALL_STATE(11)] = 491,
  [SMALL_STATE(12)] = 537,
  [SMALL_STATE(13)] = 581,
  [SMALL_STATE(14)] = 625,
  [SMALL_STATE(15)] = 669,
  [SMALL_STATE(16)] = 713,
  [SMALL_STATE(17)] = 759,
  [SMALL_STATE(18)] = 803,
  [SMALL_STATE(19)] = 847,
  [SMALL_STATE(20)] = 886,
  [SMALL_STATE(21)] = 939,
  [SMALL_STATE(22)] = 978,
  [SMALL_STATE(23)] = 1017,
  [SMALL_STATE(24)] = 1056,
  [SMALL_STATE(25)] = 1095,
  [SMALL_STATE(26)] = 1145,
  [SMALL_STATE(27)] = 1187,
  [SMALL_STATE(28)] = 1223,
  [SMALL_STATE(29)] = 1265,
  [SMALL_STATE(30)] = 1296,
  [SMALL_STATE(31)] = 1325,
  [SMALL_STATE(32)] = 1366,
  [SMALL_STATE(33)] = 1397,
  [SMALL_STATE(34)] = 1438,
  [SMALL_STATE(35)] = 1469,
  [SMALL_STATE(36)] = 1510,
  [SMALL_STATE(37)] = 1541,
  [SMALL_STATE(38)] = 1582,
  [SMALL_STATE(39)] = 1614,
  [SMALL_STATE(40)] = 1638,
  [SMALL_STATE(41)] = 1662,
  [SMALL_STATE(42)] = 1686,
  [SMALL_STATE(43)] = 1710,
  [SMALL_STATE(44)] = 1734,
  [SMALL_STATE(45)] = 1757,
  [SMALL_STATE(46)] = 1802,
  [SMALL_STATE(47)] = 1847,
  [SMALL_STATE(48)] = 1886,
  [SMALL_STATE(49)] = 1915,
  [SMALL_STATE(50)] = 1943,
  [SMALL_STATE(51)] = 1971,
  [SMALL_STATE(52)] = 1999,
  [SMALL_STATE(53)] = 2027,
  [SMALL_STATE(54)] = 2066,
  [SMALL_STATE(55)] = 2087,
  [SMALL_STATE(56)] = 2126,
  [SMALL_STATE(57)] = 2147,
  [SMALL_STATE(58)] = 2173,
  [SMALL_STATE(59)] = 2197,
  [SMALL_STATE(60)] = 2223,
  [SMALL_STATE(61)] = 2247,
  [SMALL_STATE(62)] = 2271,
  [SMALL_STATE(63)] = 2290,
  [SMALL_STATE(64)] = 2311,
  [SMALL_STATE(65)] = 2330,
  [SMALL_STATE(66)] = 2351,
  [SMALL_STATE(67)] = 2382,
  [SMALL_STATE(68)] = 2414,
  [SMALL_STATE(69)] = 2432,
  [SMALL_STATE(70)] = 2450,
  [SMALL_STATE(71)] = 2482,
  [SMALL_STATE(72)] = 2514,
  [SMALL_STATE(73)] = 2532,
  [SMALL_STATE(74)] = 2550,
  [SMALL_STATE(75)] = 2568,
  [SMALL_STATE(76)] = 2585,
  [SMALL_STATE(77)] = 2606,
  [SMALL_STATE(78)] = 2627,
  [SMALL_STATE(79)] = 2644,
  [SMALL_STATE(80)] = 2667,
  [SMALL_STATE(81)] = 2696,
  [SMALL_STATE(82)] = 2713,
  [SMALL_STATE(83)] = 2730,
  [SMALL_STATE(84)] = 2755,
  [SMALL_STATE(85)] = 2772,
  [SMALL_STATE(86)] = 2789,
  [SMALL_STATE(87)] = 2808,
  [SMALL_STATE(88)] = 2825,
  [SMALL_STATE(89)] = 2842,
  [SMALL_STATE(90)] = 2865,
  [SMALL_STATE(91)] = 2890,
  [SMALL_STATE(92)] = 2918,
  [SMALL_STATE(93)] = 2946,
  [SMALL_STATE(94)] = 2974,
  [SMALL_STATE(95)] = 2996,
  [SMALL_STATE(96)] = 3024,
  [SMALL_STATE(97)] = 3046,
  [SMALL_STATE(98)] = 3068,
  [SMALL_STATE(99)] = 3090,
  [SMALL_STATE(100)] = 3104,
  [SMALL_STATE(101)] = 3126,
  [SMALL_STATE(102)] = 3154,
  [SMALL_STATE(103)] = 3168,
  [SMALL_STATE(104)] = 3196,
  [SMALL_STATE(105)] = 3218,
  [SMALL_STATE(106)] = 3246,
  [SMALL_STATE(107)] = 3268,
  [SMALL_STATE(108)] = 3290,
  [SMALL_STATE(109)] = 3311,
  [SMALL_STATE(110)] = 3332,
  [SMALL_STATE(111)] = 3347,
  [SMALL_STATE(112)] = 3362,
  [SMALL_STATE(113)] = 3385,
  [SMALL_STATE(114)] = 3406,
  [SMALL_STATE(115)] = 3425,
  [SMALL_STATE(116)] = 3450,
  [SMALL_STATE(117)] = 3471,
  [SMALL_STATE(118)] = 3492,
  [SMALL_STATE(119)] = 3511,
  [SMALL_STATE(120)] = 3530,
  [SMALL_STATE(121)] = 3551,
  [SMALL_STATE(122)] = 3570,
  [SMALL_STATE(123)] = 3593,
  [SMALL_STATE(124)] = 3614,
  [SMALL_STATE(125)] = 3631,
  [SMALL_STATE(126)] = 3650,
  [SMALL_STATE(127)] = 3669,
  [SMALL_STATE(128)] = 3690,
  [SMALL_STATE(129)] = 3709,
  [SMALL_STATE(130)] = 3730,
  [SMALL_STATE(131)] = 3751,
  [SMALL_STATE(132)] = 3766,
  [SMALL_STATE(133)] = 3778,
  [SMALL_STATE(134)] = 3796,
  [SMALL_STATE(135)] = 3808,
  [SMALL_STATE(136)] = 3830,
  [SMALL_STATE(137)] = 3852,
  [SMALL_STATE(138)] = 3874,
  [SMALL_STATE(139)] = 3886,
  [SMALL_STATE(140)] = 3904,
  [SMALL_STATE(141)] = 3922,
  [SMALL_STATE(142)] = 3933,
  [SMALL_STATE(143)] = 3944,
  [SMALL_STATE(144)] = 3955,
  [SMALL_STATE(145)] = 3968,
  [SMALL_STATE(146)] = 3979,
  [SMALL_STATE(147)] = 3990,
  [SMALL_STATE(148)] = 4001,
  [SMALL_STATE(149)] = 4012,
  [SMALL_STATE(150)] = 4027,
  [SMALL_STATE(151)] = 4038,
  [SMALL_STATE(152)] = 4049,
  [SMALL_STATE(153)] = 4060,
  [SMALL_STATE(154)] = 4071,
  [SMALL_STATE(155)] = 4082,
  [SMALL_STATE(156)] = 4099,
  [SMALL_STATE(157)] = 4116,
  [SMALL_STATE(158)] = 4135,
  [SMALL_STATE(159)] = 4146,
  [SMALL_STATE(160)] = 4157,
  [SMALL_STATE(161)] = 4168,
  [SMALL_STATE(162)] = 4178,
  [SMALL_STATE(163)] = 4188,
  [SMALL_STATE(164)] = 4198,
  [SMALL_STATE(165)] = 4214,
  [SMALL_STATE(166)] = 4230,
  [SMALL_STATE(167)] = 4246,
  [SMALL_STATE(168)] = 4262,
  [SMALL_STATE(169)] = 4276,
  [SMALL_STATE(170)] = 4286,
  [SMALL_STATE(171)] = 4296,
  [SMALL_STATE(172)] = 4312,
  [SMALL_STATE(173)] = 4326,
  [SMALL_STATE(174)] = 4342,
  [SMALL_STATE(175)] = 4352,
  [SMALL_STATE(176)] = 4368,
  [SMALL_STATE(177)] = 4384,
  [SMALL_STATE(178)] = 4394,
  [SMALL_STATE(179)] = 4408,
  [SMALL_STATE(180)] = 4420,
  [SMALL_STATE(181)] = 4436,
  [SMALL_STATE(182)] = 4446,
  [SMALL_STATE(183)] = 4459,
  [SMALL_STATE(184)] = 4472,
  [SMALL_STATE(185)] = 4485,
  [SMALL_STATE(186)] = 4498,
  [SMALL_STATE(187)] = 4511,
  [SMALL_STATE(188)] = 4524,
  [SMALL_STATE(189)] = 4537,
  [SMALL_STATE(190)] = 4550,
  [SMALL_STATE(191)] = 4563,
  [SMALL_STATE(192)] = 4576,
  [SMALL_STATE(193)] = 4585,
  [SMALL_STATE(194)] = 4598,
  [SMALL_STATE(195)] = 4611,
  [SMALL_STATE(196)] = 4624,
  [SMALL_STATE(197)] = 4637,
  [SMALL_STATE(198)] = 4650,
  [SMALL_STATE(199)] = 4663,
  [SMALL_STATE(200)] = 4672,
  [SMALL_STATE(201)] = 4685,
  [SMALL_STATE(202)] = 4694,
  [SMALL_STATE(203)] = 4707,
  [SMALL_STATE(204)] = 4720,
  [SMALL_STATE(205)] = 4729,
  [SMALL_STATE(206)] = 4742,
  [SMALL_STATE(207)] = 4755,
  [SMALL_STATE(208)] = 4768,
  [SMALL_STATE(209)] = 4781,
  [SMALL_STATE(210)] = 4794,
  [SMALL_STATE(211)] = 4802,
  [SMALL_STATE(212)] = 4812,
  [SMALL_STATE(213)] = 4820,
  [SMALL_STATE(214)] = 4828,
  [SMALL_STATE(215)] = 4838,
  [SMALL_STATE(216)] = 4846,
  [SMALL_STATE(217)] = 4853,
  [SMALL_STATE(218)] = 4860,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(57),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(80),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(157),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(213),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(214),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(9),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(10),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(27),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(212),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(212),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(17),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(150),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(212),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(212),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(40),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(160),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(186),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(147),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attr_block_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(30),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(191),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(153),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(183),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(160),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(57),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(169),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(214),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(44),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(189),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(150),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT(170),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__emptyline, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__emptyline, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__emptyline, 1), REDUCE(sym__emptyline, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__emptyline, 1), REDUCE(sym__emptyline, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(93),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(172),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(156),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(199),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(197),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(202),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(170),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(195),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(161),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(188),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(169),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(184),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(181),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), SHIFT(203),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), SHIFT(63),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), SHIFT(72),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 2), SHIFT(203),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 2), SHIFT(65),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 2), SHIFT(68),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(167),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__identifier, 1), REDUCE(sym__identifier, 2),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__identifier, 1), REDUCE(sym__identifier, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 6),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 6),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 2), SHIFT(196),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 5),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(171),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), SHIFT(196),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(122),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 4),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_attribute, 4),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_repeat1, 2), SHIFT_REPEAT(133),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 2),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3), REDUCE(sym__inner_style_attribute, 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 6),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(149),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 5),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 7),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 8),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 2), SHIFT(149),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 1), SHIFT(155),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 6),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 4),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 5),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 1), SHIFT(178),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 8),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attribute, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 7),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(182),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2),
  [651] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(185),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(190),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(200),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arrow, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attr_key, 1),
  [704] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
