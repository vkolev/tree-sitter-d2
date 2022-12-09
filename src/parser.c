#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 1
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym__identifier = 1,
  anon_sym_ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_direction = 5,
  anon_sym_shape = 6,
  anon_sym_label = 7,
  anon_sym_constraint = 8,
  anon_sym_icon = 9,
  anon_sym_style = 10,
  anon_sym_width = 11,
  anon_sym_height = 12,
  anon_sym_3d = 13,
  anon_sym_opacity = 14,
  anon_sym_fill = 15,
  anon_sym_stroke = 16,
  anon_sym_stroke_DASHwidth = 17,
  anon_sym_stroke_DASHdash = 18,
  anon_sym_border_DASHradius = 19,
  anon_sym_font_DASHcolor = 20,
  anon_sym_shadow = 21,
  anon_sym_multiple = 22,
  anon_sym_animated = 23,
  anon_sym_link = 24,
  sym__text_attr_key = 25,
  anon_sym_source_DASHarrowhead = 26,
  anon_sym_target_DASHarrowhead = 27,
  sym__dash = 28,
  anon_sym_COLON = 29,
  sym_arrow = 30,
  sym_dot = 31,
  sym__unquoted_string = 32,
  anon_sym_SQUOTE = 33,
  aux_sym_string_token1 = 34,
  anon_sym_DQUOTE = 35,
  aux_sym_string_token2 = 36,
  anon_sym_BQUOTE = 37,
  aux_sym_string_token3 = 38,
  sym_line_comment = 39,
  sym__eol = 40,
  anon_sym_SEMI = 41,
  sym_source_file = 42,
  sym__root_definition = 43,
  sym_connection = 44,
  sym__connection_path = 45,
  sym__connection_block = 46,
  sym__connection_block_definition = 47,
  sym_container = 48,
  sym__container_block = 49,
  sym__container_block_definition = 50,
  sym_shape = 51,
  sym_shape_key = 52,
  sym__root_attribute = 53,
  sym__root_attr_key = 54,
  sym__shape_attribute = 55,
  sym__base_shape_attribute = 56,
  sym__shape_attr_key = 57,
  sym__style_attribute = 58,
  sym__style_attribute_block = 59,
  sym__inner_style_attribute = 60,
  sym__style_attr_key = 61,
  sym__common_style_attr_key = 62,
  sym__connection_attribute = 63,
  sym__connection_arrowhead_attribute = 64,
  sym__connection_arrowhead_attr_key = 65,
  sym_label = 66,
  sym_attr_value = 67,
  sym__colon = 68,
  sym_string = 69,
  sym__end = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_connection_repeat1 = 72,
  aux_sym__connection_path_repeat1 = 73,
  aux_sym__connection_block_repeat1 = 74,
  aux_sym__container_block_repeat1 = 75,
  aux_sym__style_attribute_block_repeat1 = 76,
  aux_sym_string_repeat1 = 77,
  aux_sym_string_repeat2 = 78,
  aux_sym_string_repeat3 = 79,
  alias_sym_container_key = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_direction] = "direction",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_style] = "attr_key",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_3d] = "3d",
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
  [anon_sym_link] = "link",
  [sym__text_attr_key] = "reserved",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [sym__dash] = "_dash",
  [anon_sym_COLON] = ":",
  [sym_arrow] = "arrow",
  [sym_dot] = "dot",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_string_token3] = "string_token3",
  [sym_line_comment] = "line_comment",
  [sym__eol] = "_eol",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym__root_definition] = "_root_definition",
  [sym_connection] = "connection",
  [sym__connection_path] = "_connection_path",
  [sym__connection_block] = "block",
  [sym__connection_block_definition] = "_connection_block_definition",
  [sym_container] = "container",
  [sym__container_block] = "block",
  [sym__container_block_definition] = "_container_block_definition",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym__root_attribute] = "attribute",
  [sym__root_attr_key] = "attr_key",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__base_shape_attribute] = "attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attribute] = "attribute",
  [sym__style_attribute_block] = "block",
  [sym__inner_style_attribute] = "attribute",
  [sym__style_attr_key] = "attr_key",
  [sym__common_style_attr_key] = "_common_style_attr_key",
  [sym__connection_attribute] = "_connection_attribute",
  [sym__connection_arrowhead_attribute] = "attribute",
  [sym__connection_arrowhead_attr_key] = "attr_key",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__colon] = "_colon",
  [sym_string] = "string",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym__connection_path_repeat1] = "_connection_path_repeat1",
  [aux_sym__connection_block_repeat1] = "_connection_block_repeat1",
  [aux_sym__container_block_repeat1] = "_container_block_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
  [alias_sym_container_key] = "container_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_style] = anon_sym_style,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_3d] = anon_sym_3d,
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
  [anon_sym_link] = anon_sym_link,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [sym__dash] = sym__dash,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_arrow] = sym_arrow,
  [sym_dot] = sym_dot,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_line_comment] = sym_line_comment,
  [sym__eol] = sym__eol,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym__root_definition] = sym__root_definition,
  [sym_connection] = sym_connection,
  [sym__connection_path] = sym__connection_path,
  [sym__connection_block] = sym__connection_block,
  [sym__connection_block_definition] = sym__connection_block_definition,
  [sym_container] = sym_container,
  [sym__container_block] = sym__connection_block,
  [sym__container_block_definition] = sym__container_block_definition,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym__root_attribute] = sym__root_attribute,
  [sym__root_attr_key] = anon_sym_style,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__base_shape_attribute] = sym__root_attribute,
  [sym__shape_attr_key] = anon_sym_style,
  [sym__style_attribute] = sym__root_attribute,
  [sym__style_attribute_block] = sym__connection_block,
  [sym__inner_style_attribute] = sym__root_attribute,
  [sym__style_attr_key] = anon_sym_style,
  [sym__common_style_attr_key] = sym__common_style_attr_key,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__connection_arrowhead_attribute] = sym__root_attribute,
  [sym__connection_arrowhead_attr_key] = anon_sym_style,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__colon] = sym__colon,
  [sym_string] = sym_string,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym__connection_path_repeat1] = aux_sym__connection_path_repeat1,
  [aux_sym__connection_block_repeat1] = aux_sym__connection_block_repeat1,
  [aux_sym__container_block_repeat1] = aux_sym__container_block_repeat1,
  [aux_sym__style_attribute_block_repeat1] = aux_sym__style_attribute_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
  [alias_sym_container_key] = alias_sym_container_key,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_direction] = {
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
  [anon_sym_style] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3d] = {
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
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [sym__text_attr_key] = {
    .visible = true,
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
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_arrow] = {
    .visible = true,
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
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__root_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_path] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_block] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_container] = {
    .visible = true,
    .named = true,
  },
  [sym__container_block] = {
    .visible = true,
    .named = true,
  },
  [sym__container_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_shape_key] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__base_shape_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute_block] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__common_style_attr_key] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_arrowhead_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_arrowhead_attr_key] = {
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
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
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
  [aux_sym__connection_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__connection_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__container_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__style_attribute_block_repeat1] = {
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
  [alias_sym_container_key] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym__text_attr_key,
  },
  [2] = {
    [0] = alias_sym_container_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_shape_key, 2,
    sym_shape_key,
    alias_sym_container_key,
  sym__common_style_attr_key, 2,
    sym__common_style_attr_key,
    sym__text_attr_key,
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
  [37] = 25,
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
};

static inline bool anon_sym__character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\f')
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool aux_sym_string_token2_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\f')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      if (lookahead == 0) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '3') ADVANCE(94);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '`') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (anon_sym__character_set_1(lookahead)) SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '`') ADVANCE(191);
      if (lookahead == '{') ADVANCE(88);
      if (anon_sym__character_set_1(lookahead)) SKIP(1)
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (anon_sym__character_set_1(lookahead)) SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (anon_sym__character_set_1(lookahead)) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '{') ADVANCE(88);
      if (anon_sym__character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '{') ADVANCE(88);
      if (anon_sym__character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '`') ADVANCE(191);
      if (lookahead == '}') ADVANCE(89);
      if (anon_sym__character_set_1(lookahead)) SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(190);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(185);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '`') ADVANCE(191);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '>') ADVANCE(181);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '>') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'w') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(175);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'w') ADVANCE(169);
      END_STATE();
    case 80:
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 83:
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 84:
      if (eof) ADVANCE(86);
      if (lookahead == 0) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '3') ADVANCE(94);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '`') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (anon_sym__character_set_1(lookahead)) SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '`') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 's') ADVANCE(106);
      if (anon_sym__character_set_1(lookahead)) SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == 't') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 's') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_3d);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_animated);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '>') ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '>') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '>') ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(187);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(190);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '#') ADVANCE(193);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 196:
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
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 73:
      if (lookahead == 'w') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 85},
  [2] = {.lex_state = 85},
  [3] = {.lex_state = 85},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 85},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_3d] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_stroke_DASHwidth] = ACTIONS(1),
    [anon_sym_stroke_DASHdash] = ACTIONS(1),
    [anon_sym_border_DASHradius] = ACTIONS(1),
    [anon_sym_font_DASHcolor] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [anon_sym_source_DASHarrowhead] = ACTIONS(1),
    [anon_sym_target_DASHarrowhead] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(47),
    [sym__connection_path] = STATE(86),
    [sym_container] = STATE(47),
    [sym_shape] = STATE(47),
    [sym_shape_key] = STATE(23),
    [sym__root_attribute] = STATE(47),
    [sym__root_attr_key] = STATE(80),
    [sym__common_style_attr_key] = STATE(96),
    [sym_string] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_direction] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_icon] = ACTIONS(11),
    [anon_sym_style] = ACTIONS(11),
    [anon_sym_opacity] = ACTIONS(13),
    [anon_sym_fill] = ACTIONS(13),
    [anon_sym_stroke] = ACTIONS(13),
    [anon_sym_stroke_DASHwidth] = ACTIONS(13),
    [anon_sym_stroke_DASHdash] = ACTIONS(13),
    [anon_sym_border_DASHradius] = ACTIONS(13),
    [anon_sym_font_DASHcolor] = ACTIONS(13),
    [anon_sym_shadow] = ACTIONS(13),
    [anon_sym_multiple] = ACTIONS(13),
    [anon_sym_animated] = ACTIONS(13),
    [anon_sym_link] = ACTIONS(13),
    [sym__text_attr_key] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(28), 1,
      anon_sym_direction,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(46), 1,
      sym__eol,
    STATE(23), 1,
      sym_shape_key,
    STATE(28), 1,
      sym_string,
    STATE(32), 1,
      aux_sym__connection_path_repeat1,
    STATE(80), 1,
      sym__root_attr_key,
    STATE(86), 1,
      sym__connection_path,
    STATE(96), 1,
      sym__common_style_attr_key,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(47), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(31), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(34), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [74] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_direction,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym__eol,
    STATE(23), 1,
      sym_shape_key,
    STATE(28), 1,
      sym_string,
    STATE(32), 1,
      aux_sym__connection_path_repeat1,
    STATE(80), 1,
      sym__root_attr_key,
    STATE(86), 1,
      sym__connection_path,
    STATE(96), 1,
      sym__common_style_attr_key,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(47), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(11), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(13), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [148] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      anon_sym_style,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_BQUOTE,
    ACTIONS(73), 1,
      sym__eol,
    STATE(23), 1,
      sym_shape_key,
    STATE(28), 1,
      sym_string,
    STATE(32), 1,
      aux_sym__connection_path_repeat1,
    STATE(86), 1,
      sym__connection_path,
    STATE(87), 1,
      sym__shape_attr_key,
    STATE(4), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    ACTIONS(58), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(52), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [208] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_style,
    ACTIONS(82), 1,
      sym__eol,
    STATE(23), 1,
      sym_shape_key,
    STATE(28), 1,
      sym_string,
    STATE(32), 1,
      aux_sym__connection_path_repeat1,
    STATE(86), 1,
      sym__connection_path,
    STATE(87), 1,
      sym__shape_attr_key,
    STATE(4), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    ACTIONS(78), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(52), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [268] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(80), 1,
      anon_sym_style,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym__eol,
    STATE(23), 1,
      sym_shape_key,
    STATE(28), 1,
      sym_string,
    STATE(32), 1,
      aux_sym__connection_path_repeat1,
    STATE(86), 1,
      sym__connection_path,
    STATE(87), 1,
      sym__shape_attr_key,
    STATE(5), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    ACTIONS(78), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(52), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [328] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__eol,
    ACTIONS(90), 19,
      sym__identifier,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
      sym__text_attr_key,
  [360] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      anon_sym_3d,
    ACTIONS(100), 1,
      anon_sym_stroke,
    ACTIONS(103), 1,
      sym__eol,
    STATE(8), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(65), 1,
      sym__inner_style_attribute,
    STATE(82), 1,
      sym__style_attr_key,
    STATE(92), 1,
      sym__common_style_attr_key,
    ACTIONS(97), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [400] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      anon_sym_3d,
    ACTIONS(112), 1,
      sym__eol,
    STATE(8), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(65), 1,
      sym__inner_style_attribute,
    STATE(82), 1,
      sym__style_attr_key,
    STATE(92), 1,
      sym__common_style_attr_key,
    ACTIONS(110), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [440] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(108), 1,
      anon_sym_3d,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      sym__eol,
    STATE(9), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(65), 1,
      sym__inner_style_attribute,
    STATE(82), 1,
      sym__style_attr_key,
    STATE(92), 1,
      sym__common_style_attr_key,
    ACTIONS(110), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [480] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(108), 1,
      anon_sym_3d,
    STATE(77), 1,
      sym__inner_style_attribute,
    STATE(82), 1,
      sym__style_attr_key,
    STATE(92), 1,
      sym__common_style_attr_key,
    ACTIONS(110), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [511] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      anon_sym_stroke,
    ACTIONS(92), 13,
      anon_sym_RBRACE,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
      sym__eol,
  [533] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(122), 5,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__eol,
    ACTIONS(120), 8,
      sym__identifier,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_width,
      anon_sym_height,
  [554] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      sym__unquoted_string,
    STATE(43), 1,
      sym_label,
    STATE(49), 1,
      sym_string,
    STATE(64), 1,
      sym__connection_block,
    ACTIONS(124), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [587] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(132), 1,
      anon_sym_style,
    ACTIONS(136), 1,
      sym__eol,
    STATE(33), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(134), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(17), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(61), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [616] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      anon_sym_style,
    ACTIONS(146), 1,
      sym__eol,
    STATE(33), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(143), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(16), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(61), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [645] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 1,
      anon_sym_style,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 1,
      sym__eol,
    STATE(33), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(134), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(16), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(61), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [674] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_label,
    STATE(49), 1,
      sym_string,
    STATE(54), 1,
      sym__container_block,
    ACTIONS(153), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [707] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_label,
    STATE(49), 1,
      sym_string,
    STATE(84), 1,
      sym__container_block,
    ACTIONS(157), 2,
      sym__eol,
      anon_sym_SEMI,
  [739] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(80), 1,
      anon_sym_style,
    ACTIONS(159), 1,
      sym__identifier,
    STATE(24), 1,
      sym_shape_key,
    STATE(28), 1,
      sym_string,
    STATE(56), 1,
      sym__style_attribute,
    STATE(54), 2,
      sym_container,
      sym_shape,
  [771] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(80), 1,
      anon_sym_style,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(164), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_BQUOTE,
    STATE(24), 1,
      sym_shape_key,
    STATE(28), 1,
      sym_string,
    STATE(56), 1,
      sym__style_attribute,
    STATE(54), 2,
      sym_container,
      sym_shape,
  [803] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_COLON,
    ACTIONS(177), 1,
      sym_arrow,
    STATE(14), 1,
      sym__colon,
    STATE(36), 1,
      aux_sym_connection_repeat1,
    STATE(69), 1,
      sym__connection_block,
    ACTIONS(173), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [830] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      sym_arrow,
    ACTIONS(185), 1,
      sym_dot,
    STATE(18), 1,
      sym__colon,
    STATE(67), 1,
      sym__container_block,
    ACTIONS(179), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [857] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_COLON,
    ACTIONS(187), 1,
      sym_dot,
    STATE(18), 1,
      sym__colon,
    STATE(67), 1,
      sym__container_block,
    ACTIONS(179), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [881] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      sym__dash,
    ACTIONS(189), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [897] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    STATE(28), 1,
      sym_string,
    STATE(32), 1,
      aux_sym__connection_path_repeat1,
    STATE(35), 1,
      sym_shape_key,
    STATE(40), 1,
      sym__connection_path,
  [925] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [938] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [951] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_dot,
    ACTIONS(197), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [966] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      sym__identifier,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_BQUOTE,
    STATE(28), 1,
      sym_string,
    STATE(30), 1,
      aux_sym__connection_path_repeat1,
    STATE(93), 1,
      sym_shape_key,
  [991] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1004] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      sym__identifier,
    STATE(28), 1,
      sym_string,
    STATE(29), 1,
      sym_shape_key,
    STATE(30), 1,
      aux_sym__connection_path_repeat1,
  [1029] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(217), 1,
      sym_dot,
    STATE(19), 1,
      sym__colon,
    STATE(85), 1,
      sym__container_block,
    ACTIONS(219), 2,
      sym__eol,
      anon_sym_SEMI,
  [1052] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1065] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_dot,
    ACTIONS(183), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1080] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      sym_arrow,
    STATE(36), 1,
      aux_sym_connection_repeat1,
    ACTIONS(223), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [1097] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 1,
      sym__dash,
    ACTIONS(189), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1112] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(230), 1,
      sym__unquoted_string,
    STATE(57), 1,
      sym_string,
    STATE(58), 1,
      sym_attr_value,
  [1134] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(230), 1,
      sym__unquoted_string,
    STATE(57), 1,
      sym_string,
    STATE(83), 1,
      sym_attr_value,
  [1156] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1168] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(230), 1,
      sym__unquoted_string,
    STATE(57), 1,
      sym_string,
    STATE(59), 1,
      sym_attr_value,
  [1190] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 5,
      anon_sym_RBRACE,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [1201] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym__connection_block,
    ACTIONS(234), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1216] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym__container_block,
    ACTIONS(236), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1231] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1242] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym__container_block,
    ACTIONS(240), 2,
      sym__eol,
      anon_sym_SEMI,
  [1256] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(7), 1,
      sym__end,
    ACTIONS(242), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1268] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 4,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1278] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1288] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1297] = 4,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(252), 1,
      aux_sym_string_token1,
    ACTIONS(255), 1,
      sym_line_comment,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(13), 1,
      sym__end,
    ACTIONS(257), 2,
      sym__eol,
      anon_sym_SEMI,
  [1321] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(259), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1330] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1339] = 4,
    ACTIONS(255), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      aux_sym_string_token1,
    STATE(71), 1,
      aux_sym_string_repeat1,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(236), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1361] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1370] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1379] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1397] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(42), 1,
      sym__end,
    ACTIONS(275), 2,
      sym__eol,
      anon_sym_SEMI,
  [1408] = 4,
    ACTIONS(255), 1,
      sym_line_comment,
    ACTIONS(277), 1,
      anon_sym_BQUOTE,
    ACTIONS(279), 1,
      aux_sym_string_token3,
    STATE(62), 1,
      aux_sym_string_repeat3,
  [1421] = 4,
    ACTIONS(255), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    ACTIONS(284), 1,
      aux_sym_string_token2,
    STATE(63), 1,
      aux_sym_string_repeat2,
  [1434] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1443] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(12), 1,
      sym__end,
    ACTIONS(287), 2,
      sym__eol,
      anon_sym_SEMI,
  [1454] = 4,
    ACTIONS(255), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      aux_sym_string_token2,
    STATE(70), 1,
      aux_sym_string_repeat2,
  [1467] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1476] = 4,
    ACTIONS(255), 1,
      sym_line_comment,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      aux_sym_string_token3,
    STATE(62), 1,
      aux_sym_string_repeat3,
  [1489] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(124), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1498] = 4,
    ACTIONS(255), 1,
      sym_line_comment,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_string_token2,
    STATE(63), 1,
      aux_sym_string_repeat2,
  [1511] = 4,
    ACTIONS(255), 1,
      sym_line_comment,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      aux_sym_string_token1,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [1524] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1533] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 1,
      anon_sym_COLON,
    ACTIONS(305), 1,
      sym_dot,
    STATE(89), 1,
      sym__colon,
  [1546] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(307), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1555] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1564] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1573] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(313), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1582] = 4,
    ACTIONS(255), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(315), 1,
      aux_sym_string_token3,
    STATE(68), 1,
      aux_sym_string_repeat3,
  [1595] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(317), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1604] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(319), 1,
      anon_sym_COLON,
    STATE(38), 1,
      sym__colon,
  [1614] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 1,
      anon_sym_style,
    STATE(84), 1,
      sym__style_attribute,
  [1624] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(321), 1,
      anon_sym_COLON,
    STATE(41), 1,
      sym__colon,
  [1634] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(323), 2,
      sym__eol,
      anon_sym_SEMI,
  [1642] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 2,
      sym__eol,
      anon_sym_SEMI,
  [1650] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 2,
      sym__eol,
      anon_sym_SEMI,
  [1658] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      sym_arrow,
    STATE(22), 1,
      aux_sym_connection_repeat1,
  [1668] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      anon_sym_COLON,
    STATE(39), 1,
      sym__colon,
  [1678] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(327), 2,
      sym__eol,
      anon_sym_SEMI,
  [1686] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym__style_attribute_block,
  [1696] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
  [1703] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(333), 1,
      anon_sym_COLON,
  [1710] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 1,
      anon_sym_COLON,
  [1717] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_dot,
  [1724] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(337), 1,
      anon_sym_COLON,
  [1731] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 1,
      anon_sym_COLON,
  [1738] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 208,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 328,
  [SMALL_STATE(8)] = 360,
  [SMALL_STATE(9)] = 400,
  [SMALL_STATE(10)] = 440,
  [SMALL_STATE(11)] = 480,
  [SMALL_STATE(12)] = 511,
  [SMALL_STATE(13)] = 533,
  [SMALL_STATE(14)] = 554,
  [SMALL_STATE(15)] = 587,
  [SMALL_STATE(16)] = 616,
  [SMALL_STATE(17)] = 645,
  [SMALL_STATE(18)] = 674,
  [SMALL_STATE(19)] = 707,
  [SMALL_STATE(20)] = 739,
  [SMALL_STATE(21)] = 771,
  [SMALL_STATE(22)] = 803,
  [SMALL_STATE(23)] = 830,
  [SMALL_STATE(24)] = 857,
  [SMALL_STATE(25)] = 881,
  [SMALL_STATE(26)] = 897,
  [SMALL_STATE(27)] = 925,
  [SMALL_STATE(28)] = 938,
  [SMALL_STATE(29)] = 951,
  [SMALL_STATE(30)] = 966,
  [SMALL_STATE(31)] = 991,
  [SMALL_STATE(32)] = 1004,
  [SMALL_STATE(33)] = 1029,
  [SMALL_STATE(34)] = 1052,
  [SMALL_STATE(35)] = 1065,
  [SMALL_STATE(36)] = 1080,
  [SMALL_STATE(37)] = 1097,
  [SMALL_STATE(38)] = 1112,
  [SMALL_STATE(39)] = 1134,
  [SMALL_STATE(40)] = 1156,
  [SMALL_STATE(41)] = 1168,
  [SMALL_STATE(42)] = 1190,
  [SMALL_STATE(43)] = 1201,
  [SMALL_STATE(44)] = 1216,
  [SMALL_STATE(45)] = 1231,
  [SMALL_STATE(46)] = 1242,
  [SMALL_STATE(47)] = 1256,
  [SMALL_STATE(48)] = 1268,
  [SMALL_STATE(49)] = 1278,
  [SMALL_STATE(50)] = 1288,
  [SMALL_STATE(51)] = 1297,
  [SMALL_STATE(52)] = 1310,
  [SMALL_STATE(53)] = 1321,
  [SMALL_STATE(54)] = 1330,
  [SMALL_STATE(55)] = 1339,
  [SMALL_STATE(56)] = 1352,
  [SMALL_STATE(57)] = 1361,
  [SMALL_STATE(58)] = 1370,
  [SMALL_STATE(59)] = 1379,
  [SMALL_STATE(60)] = 1388,
  [SMALL_STATE(61)] = 1397,
  [SMALL_STATE(62)] = 1408,
  [SMALL_STATE(63)] = 1421,
  [SMALL_STATE(64)] = 1434,
  [SMALL_STATE(65)] = 1443,
  [SMALL_STATE(66)] = 1454,
  [SMALL_STATE(67)] = 1467,
  [SMALL_STATE(68)] = 1476,
  [SMALL_STATE(69)] = 1489,
  [SMALL_STATE(70)] = 1498,
  [SMALL_STATE(71)] = 1511,
  [SMALL_STATE(72)] = 1524,
  [SMALL_STATE(73)] = 1533,
  [SMALL_STATE(74)] = 1546,
  [SMALL_STATE(75)] = 1555,
  [SMALL_STATE(76)] = 1564,
  [SMALL_STATE(77)] = 1573,
  [SMALL_STATE(78)] = 1582,
  [SMALL_STATE(79)] = 1595,
  [SMALL_STATE(80)] = 1604,
  [SMALL_STATE(81)] = 1614,
  [SMALL_STATE(82)] = 1624,
  [SMALL_STATE(83)] = 1634,
  [SMALL_STATE(84)] = 1642,
  [SMALL_STATE(85)] = 1650,
  [SMALL_STATE(86)] = 1658,
  [SMALL_STATE(87)] = 1668,
  [SMALL_STATE(88)] = 1678,
  [SMALL_STATE(89)] = 1686,
  [SMALL_STATE(90)] = 1696,
  [SMALL_STATE(91)] = 1703,
  [SMALL_STATE(92)] = 1710,
  [SMALL_STATE(93)] = 1717,
  [SMALL_STATE(94)] = 1724,
  [SMALL_STATE(95)] = 1731,
  [SMALL_STATE(96)] = 1738,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(25),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(91),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(73),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(55),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(66),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(78),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(92),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(95),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(95),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(8),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__container_block_definition, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block_definition, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(73),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(45),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(16),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(37),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(55),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(66),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(37),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(55),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(66),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(78),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(26),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block_definition, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(51),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(62),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(63),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [331] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
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
    .keyword_capture_token = sym__identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
