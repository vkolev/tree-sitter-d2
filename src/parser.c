#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 1
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_DASH = 4,
  aux_sym__identifier_token1 = 5,
  aux_sym__identifier_token2 = 6,
  aux_sym__identifier_token3 = 7,
  anon_sym_PIPE = 8,
  anon_sym_PIPE_BQUOTE = 9,
  anon_sym_BQUOTE_PIPE = 10,
  sym_language = 11,
  anon_sym_direction = 12,
  anon_sym_shape = 13,
  anon_sym_label = 14,
  anon_sym_constraint = 15,
  anon_sym_icon = 16,
  anon_sym_style = 17,
  anon_sym_width = 18,
  anon_sym_height = 19,
  anon_sym_3d = 20,
  anon_sym_opacity = 21,
  anon_sym_fill = 22,
  anon_sym_stroke = 23,
  anon_sym_stroke_DASHwidth = 24,
  anon_sym_stroke_DASHdash = 25,
  anon_sym_border_DASHradius = 26,
  anon_sym_font_DASHcolor = 27,
  anon_sym_shadow = 28,
  anon_sym_multiple = 29,
  anon_sym_animated = 30,
  anon_sym_link = 31,
  sym__text_attr_key = 32,
  anon_sym_source_DASHarrowhead = 33,
  anon_sym_target_DASHarrowhead = 34,
  sym__dash = 35,
  anon_sym_COLON = 36,
  sym_arrow = 37,
  sym_dot = 38,
  sym__unquoted_string = 39,
  anon_sym_SQUOTE = 40,
  aux_sym_string_token1 = 41,
  anon_sym_DQUOTE = 42,
  aux_sym_string_token2 = 43,
  anon_sym_true = 44,
  anon_sym_false = 45,
  sym_integer = 46,
  sym_float = 47,
  sym_line_comment = 48,
  sym__eol = 49,
  anon_sym_SEMI = 50,
  sym__text_block_raw = 51,
  sym_source_file = 52,
  sym__root_definition = 53,
  sym_connection = 54,
  sym__connection_path = 55,
  sym__connection_block = 56,
  sym__connection_block_definition = 57,
  sym_container = 58,
  sym__container_block = 59,
  sym__container_block_definition = 60,
  sym_shape = 61,
  sym_shape_key = 62,
  sym__identifier = 63,
  sym_text_block = 64,
  sym__text_block_definition = 65,
  sym__root_attribute = 66,
  sym__root_attr_key = 67,
  sym__shape_attribute = 68,
  sym__base_shape_attribute = 69,
  sym__shape_attr_key = 70,
  sym__style_attribute = 71,
  sym__style_attribute_block = 72,
  sym__inner_style_attribute = 73,
  sym__style_attr_key = 74,
  sym__common_style_attr_key = 75,
  sym__connection_attribute = 76,
  sym__connection_arrowhead_attribute = 77,
  sym__connection_arrowhead_attr_key = 78,
  sym_label = 79,
  sym_attr_value = 80,
  sym__colon = 81,
  sym_string = 82,
  sym_boolean = 83,
  sym__end = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_connection_repeat1 = 86,
  aux_sym__connection_path_repeat1 = 87,
  aux_sym__connection_block_repeat1 = 88,
  aux_sym__container_block_repeat1 = 89,
  aux_sym__identifier_repeat1 = 90,
  aux_sym__style_attribute_block_repeat1 = 91,
  aux_sym_string_repeat1 = 92,
  aux_sym_string_repeat2 = 93,
  alias_sym_container_key = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [aux_sym__identifier_token2] = "_identifier_token2",
  [aux_sym__identifier_token3] = "_identifier_token3",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_BQUOTE] = "|`",
  [anon_sym_BQUOTE_PIPE] = "`|",
  [sym_language] = "language",
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_line_comment] = "line_comment",
  [sym__eol] = "_eol",
  [anon_sym_SEMI] = ";",
  [sym__text_block_raw] = "raw_text",
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
  [sym__identifier] = "_identifier",
  [sym_text_block] = "text_block",
  [sym__text_block_definition] = "_text_block_definition",
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
  [sym_boolean] = "boolean",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym__connection_path_repeat1] = "_connection_path_repeat1",
  [aux_sym__connection_block_repeat1] = "_connection_block_repeat1",
  [aux_sym__container_block_repeat1] = "_container_block_repeat1",
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [alias_sym_container_key] = "container_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [aux_sym__identifier_token2] = aux_sym__identifier_token2,
  [aux_sym__identifier_token3] = aux_sym__identifier_token3,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE_BQUOTE] = anon_sym_PIPE_BQUOTE,
  [anon_sym_BQUOTE_PIPE] = anon_sym_BQUOTE_PIPE,
  [sym_language] = sym_language,
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_line_comment] = sym_line_comment,
  [sym__eol] = sym__eol,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__text_block_raw] = sym__text_block_raw,
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
  [sym__identifier] = sym__identifier,
  [sym_text_block] = sym_text_block,
  [sym__text_block_definition] = sym__text_block_definition,
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
  [sym_boolean] = sym_boolean,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym__connection_path_repeat1] = aux_sym__connection_path_repeat1,
  [aux_sym__connection_block_repeat1] = aux_sym__connection_block_repeat1,
  [aux_sym__container_block_repeat1] = aux_sym__container_block_repeat1,
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__style_attribute_block_repeat1] = aux_sym__style_attribute_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [alias_sym_container_key] = alias_sym_container_key,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
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
  [sym__text_block_raw] = {
    .visible = true,
    .named = true,
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym__text_block_definition] = {
    .visible = false,
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
  [sym_boolean] = {
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
  [aux_sym__identifier_repeat1] = {
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
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 19,
  [30] = 30,
  [31] = 31,
  [32] = 22,
  [33] = 20,
  [34] = 34,
  [35] = 17,
  [36] = 27,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 30,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 40,
  [48] = 48,
  [49] = 38,
  [50] = 50,
  [51] = 51,
  [52] = 48,
  [53] = 46,
  [54] = 54,
  [55] = 44,
  [56] = 56,
  [57] = 42,
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
  [112] = 107,
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
  [131] = 126,
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

static inline bool anon_sym__character_set_2(int32_t c) {
  return (c < 8232
    ? (c < 5760
      ? (c < 160
        ? (c >= '\t' && c <= '\f')
        : c <= 160)
      : (c <= 5760 || (c >= 8192 && c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym__unquoted_string_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 5760
      ? (c < 160
        ? (c >= 11 && c <= '\f')
        : c <= 160)
      : (c <= 5760 || (c >= 8192 && c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(165);
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '`') ADVANCE(160);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'h') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '}') ADVANCE(168);
      if (anon_sym__character_set_1(lookahead)) SKIP(163)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '`') ADVANCE(239);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(239);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '{') ADVANCE(167);
      if (anon_sym__character_set_2(lookahead)) SKIP(4)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '{') ADVANCE(167);
      if (anon_sym__character_set_2(lookahead)) SKIP(4)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '{') ADVANCE(167);
      if (anon_sym__character_set_2(lookahead)) SKIP(4)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(167);
      if (anon_sym__character_set_2(lookahead)) SKIP(6)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(167);
      if (anon_sym__character_set_2(lookahead)) SKIP(6)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(167);
      if (anon_sym__character_set_2(lookahead)) SKIP(6)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '3') ADVANCE(54);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '}') ADVANCE(168);
      if (anon_sym__character_set_1(lookahead)) SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '3') ADVANCE(54);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '}') ADVANCE(168);
      if (anon_sym__character_set_1(lookahead)) SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '`') ADVANCE(239);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(239);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'h') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '}') ADVANCE(168);
      if (anon_sym__character_set_1(lookahead)) SKIP(15)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '#') ADVANCE(251);
      if (anon_sym__character_set_1(lookahead)) SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(239);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == 's') ADVANCE(186);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(22)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '-') ADVANCE(169);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(23)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(239);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(245);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(240);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(223);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '>') ADVANCE(222);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '>') ADVANCE(222);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(133);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 95:
      if (lookahead == 'k') ADVANCE(214);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 155:
      if (lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 156:
      if (lookahead == 'w') ADVANCE(83);
      END_STATE();
    case 157:
      if (lookahead == 'w') ADVANCE(84);
      END_STATE();
    case 158:
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 159:
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 160:
      if (lookahead == '|') ADVANCE(193);
      END_STATE();
    case 161:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 162:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 163:
      if (eof) ADVANCE(165);
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '`') ADVANCE(160);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'h') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '}') ADVANCE(168);
      if (anon_sym__character_set_1(lookahead)) SKIP(163)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 164:
      if (eof) ADVANCE(165);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 's') ADVANCE(177);
      if (anon_sym__character_set_1(lookahead)) SKIP(164)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '>') ADVANCE(222);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '`') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_PIPE_BQUOTE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BQUOTE_PIPE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '>') ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '>') ADVANCE(222);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '>') ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '`') ADVANCE(239);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(166);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(239);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '`') ADVANCE(239);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(239);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(239);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(242);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(245);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 164},
  [2] = {.lex_state = 164},
  [3] = {.lex_state = 164},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 164},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 26},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 25},
  [83] = {.lex_state = 26},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 25},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 23},
};

enum {
  ts_external_token__text_block_raw = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_block_raw] = sym__text_block_raw,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_block_raw] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__identifier_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_PIPE] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
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
    [sym__dash] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__text_block_raw] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(122),
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(73),
    [sym__connection_path] = STATE(107),
    [sym_container] = STATE(73),
    [sym_shape] = STATE(73),
    [sym_shape_key] = STATE(38),
    [sym__identifier] = STATE(56),
    [sym__root_attribute] = STATE(73),
    [sym__root_attr_key] = STATE(117),
    [sym__common_style_attr_key] = STATE(129),
    [sym_string] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [aux_sym__identifier_token1] = ACTIONS(9),
    [anon_sym_direction] = ACTIONS(11),
    [anon_sym_shape] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_constraint] = ACTIONS(13),
    [anon_sym_icon] = ACTIONS(13),
    [anon_sym_style] = ACTIONS(13),
    [anon_sym_opacity] = ACTIONS(15),
    [anon_sym_fill] = ACTIONS(15),
    [anon_sym_stroke] = ACTIONS(17),
    [anon_sym_stroke_DASHwidth] = ACTIONS(15),
    [anon_sym_stroke_DASHdash] = ACTIONS(15),
    [anon_sym_border_DASHradius] = ACTIONS(15),
    [anon_sym_font_DASHcolor] = ACTIONS(15),
    [anon_sym_shadow] = ACTIONS(15),
    [anon_sym_multiple] = ACTIONS(15),
    [anon_sym_animated] = ACTIONS(15),
    [anon_sym_link] = ACTIONS(15),
    [sym__text_attr_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      aux_sym__identifier_token1,
    ACTIONS(33), 1,
      anon_sym_direction,
    ACTIONS(42), 1,
      anon_sym_stroke,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__eol,
    STATE(38), 1,
      sym_shape_key,
    STATE(43), 1,
      aux_sym__connection_path_repeat1,
    STATE(107), 1,
      sym__connection_path,
    STATE(117), 1,
      sym__root_attr_key,
    STATE(129), 1,
      sym__common_style_attr_key,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(56), 2,
      sym__identifier,
      sym_string,
    STATE(73), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(36), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(39), 10,
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
  [77] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(11), 1,
      anon_sym_direction,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym__eol,
    STATE(38), 1,
      sym_shape_key,
    STATE(43), 1,
      aux_sym__connection_path_repeat1,
    STATE(107), 1,
      sym__connection_path,
    STATE(117), 1,
      sym__root_attr_key,
    STATE(129), 1,
      sym__common_style_attr_key,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(56), 2,
      sym__identifier,
      sym_string,
    STATE(73), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(13), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(15), 10,
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
  [154] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(64), 1,
      sym__eol,
    STATE(43), 1,
      aux_sym__connection_path_repeat1,
    STATE(49), 1,
      sym_shape_key,
    STATE(112), 1,
      sym__connection_path,
    STATE(116), 1,
      sym__shape_attr_key,
    STATE(5), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(56), 2,
      sym__identifier,
      sym_string,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(84), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [215] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      sym__eol,
    STATE(43), 1,
      aux_sym__connection_path_repeat1,
    STATE(49), 1,
      sym_shape_key,
    STATE(112), 1,
      sym__connection_path,
    STATE(116), 1,
      sym__shape_attr_key,
    STATE(6), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(56), 2,
      sym__identifier,
      sym_string,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(84), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [276] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      aux_sym__identifier_token1,
    ACTIONS(81), 1,
      anon_sym_style,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      sym__eol,
    STATE(43), 1,
      aux_sym__connection_path_repeat1,
    STATE(49), 1,
      sym_shape_key,
    STATE(112), 1,
      sym__connection_path,
    STATE(116), 1,
      sym__shape_attr_key,
    STATE(6), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(56), 2,
      sym__identifier,
      sym_string,
    ACTIONS(78), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(84), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [337] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 2,
      aux_sym__identifier_token1,
      anon_sym_stroke,
    ACTIONS(93), 22,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
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
      sym__text_attr_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
  [369] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(105), 1,
      anon_sym_stroke,
    ACTIONS(108), 1,
      sym__eol,
    STATE(8), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(103), 1,
      sym__inner_style_attribute,
    STATE(113), 1,
      sym__style_attr_key,
    STATE(120), 1,
      sym__common_style_attr_key,
    ACTIONS(102), 10,
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
  [409] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      anon_sym_3d,
    ACTIONS(115), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(103), 1,
      sym__inner_style_attribute,
    STATE(113), 1,
      sym__style_attr_key,
    STATE(120), 1,
      sym__common_style_attr_key,
    ACTIONS(15), 10,
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
  [449] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(113), 1,
      anon_sym_3d,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      sym__eol,
    STATE(8), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(103), 1,
      sym__inner_style_attribute,
    STATE(113), 1,
      sym__style_attr_key,
    STATE(120), 1,
      sym__common_style_attr_key,
    ACTIONS(15), 10,
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
  [489] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(113), 1,
      anon_sym_3d,
    STATE(96), 1,
      sym__inner_style_attribute,
    STATE(113), 1,
      sym__style_attr_key,
    STATE(120), 1,
      sym__common_style_attr_key,
    ACTIONS(15), 10,
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
  [520] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 1,
      anon_sym_stroke,
    ACTIONS(97), 13,
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
  [542] = 12,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      anon_sym_PIPE,
    ACTIONS(129), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(69), 1,
      sym_label,
    STATE(72), 1,
      sym_string,
    STATE(87), 1,
      sym__container_block,
    STATE(89), 1,
      sym_text_block,
    ACTIONS(123), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [581] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 12,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_width,
      anon_sym_height,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
  [602] = 12,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      anon_sym_PIPE,
    ACTIONS(129), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(69), 1,
      sym_label,
    STATE(72), 1,
      sym_string,
    STATE(87), 1,
      sym__container_block,
    STATE(89), 1,
      sym_text_block,
    ACTIONS(123), 2,
      sym__eol,
      anon_sym_SEMI,
  [640] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(147), 1,
      sym__eol,
    STATE(59), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(145), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(18), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(77), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [669] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      aux_sym__identifier_token2,
    ACTIONS(153), 1,
      aux_sym__identifier_token3,
    ACTIONS(155), 1,
      sym__dash,
    STATE(19), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(149), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [694] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      anon_sym_style,
    ACTIONS(165), 1,
      sym__eol,
    STATE(59), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(162), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(18), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(77), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [723] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      aux_sym__identifier_token2,
    ACTIONS(172), 1,
      aux_sym__identifier_token3,
    ACTIONS(174), 1,
      sym__dash,
    STATE(22), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(168), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [748] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      aux_sym__identifier_token3,
    ACTIONS(155), 1,
      sym__dash,
    ACTIONS(170), 1,
      aux_sym__identifier_token2,
    STATE(22), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(149), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [773] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(176), 1,
      anon_sym_DASH,
    ACTIONS(178), 1,
      aux_sym__identifier_token1,
    STATE(53), 1,
      sym_shape_key,
    STATE(89), 1,
      sym__style_attribute,
    STATE(56), 2,
      sym__identifier,
      sym_string,
    STATE(87), 2,
      sym_container,
      sym_shape,
  [806] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 1,
      aux_sym__identifier_token2,
    STATE(22), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(185), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(180), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [829] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(176), 1,
      anon_sym_DASH,
    ACTIONS(178), 1,
      aux_sym__identifier_token1,
    STATE(46), 1,
      sym_shape_key,
    STATE(89), 1,
      sym__style_attribute,
    STATE(56), 2,
      sym__identifier,
      sym_string,
    STATE(87), 2,
      sym_container,
      sym_shape,
  [862] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      sym__eol,
    STATE(59), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(145), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(16), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(77), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [891] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(194), 1,
      aux_sym__identifier_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_shape_key,
    STATE(89), 1,
      sym__style_attribute,
    STATE(56), 2,
      sym__identifier,
      sym_string,
    STATE(87), 2,
      sym_container,
      sym_shape,
  [924] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(194), 1,
      aux_sym__identifier_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_shape_key,
    STATE(89), 1,
      sym__style_attribute,
    STATE(56), 2,
      sym__identifier,
      sym_string,
    STATE(87), 2,
      sym_container,
      sym_shape,
  [957] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      aux_sym__identifier_token2,
    ACTIONS(207), 1,
      aux_sym__identifier_token3,
    ACTIONS(209), 1,
      sym__dash,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(203), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [982] = 7,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(99), 1,
      sym_attr_value,
    ACTIONS(213), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
      sym_string,
      sym_boolean,
    ACTIONS(211), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1008] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 1,
      sym__dash,
    ACTIONS(215), 1,
      aux_sym__identifier_token2,
    ACTIONS(217), 1,
      aux_sym__identifier_token3,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(168), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1032] = 9,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_label,
    STATE(72), 1,
      sym_string,
    STATE(78), 1,
      sym__connection_block,
    ACTIONS(219), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1062] = 7,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(104), 1,
      sym_attr_value,
    ACTIONS(213), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
      sym_string,
      sym_boolean,
    ACTIONS(211), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1088] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      aux_sym__identifier_token2,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(185), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(180), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1110] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      sym__dash,
    ACTIONS(215), 1,
      aux_sym__identifier_token2,
    ACTIONS(226), 1,
      aux_sym__identifier_token3,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(149), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1134] = 7,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(119), 1,
      sym_attr_value,
    ACTIONS(213), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
      sym_string,
      sym_boolean,
    ACTIONS(211), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1160] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      sym__dash,
    ACTIONS(226), 1,
      aux_sym__identifier_token3,
    ACTIONS(228), 1,
      aux_sym__identifier_token2,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(149), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1184] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 1,
      sym__dash,
    ACTIONS(230), 1,
      aux_sym__identifier_token2,
    ACTIONS(232), 1,
      aux_sym__identifier_token3,
    STATE(33), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(203), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1208] = 9,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(71), 1,
      sym_label,
    STATE(72), 1,
      sym_string,
    STATE(111), 1,
      sym__container_block,
    ACTIONS(234), 2,
      sym__eol,
      anon_sym_SEMI,
  [1237] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(242), 1,
      sym_arrow,
    ACTIONS(244), 1,
      sym_dot,
    STATE(13), 1,
      sym__colon,
    STATE(105), 1,
      sym__container_block,
    ACTIONS(236), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1264] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      aux_sym__identifier_token1,
    STATE(43), 1,
      aux_sym__connection_path_repeat1,
    STATE(60), 1,
      sym_shape_key,
    STATE(65), 1,
      sym__connection_path,
    STATE(56), 2,
      sym__identifier,
      sym_string,
  [1293] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      sym_arrow,
    STATE(30), 1,
      sym__colon,
    STATE(54), 1,
      aux_sym_connection_repeat1,
    STATE(79), 1,
      sym__connection_block,
    ACTIONS(248), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1320] = 9,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_label,
    STATE(72), 1,
      sym_string,
    STATE(78), 1,
      sym__connection_block,
    ACTIONS(219), 2,
      sym__eol,
      anon_sym_SEMI,
  [1349] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      sym__dash,
    ACTIONS(149), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1365] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      aux_sym__identifier_token1,
    STATE(45), 1,
      aux_sym__connection_path_repeat1,
    STATE(63), 1,
      sym_shape_key,
    STATE(56), 2,
      sym__identifier,
      sym_string,
  [1391] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 1,
      sym__dash,
    ACTIONS(168), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1407] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      aux_sym__identifier_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym__connection_path_repeat1,
    STATE(124), 1,
      sym_shape_key,
    STATE(56), 2,
      sym__identifier,
      sym_string,
  [1433] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(268), 1,
      sym_dot,
    STATE(13), 1,
      sym__colon,
    STATE(105), 1,
      sym__container_block,
    ACTIONS(236), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1457] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      sym_arrow,
    ACTIONS(270), 1,
      anon_sym_COLON,
    STATE(41), 1,
      sym__colon,
    STATE(54), 1,
      aux_sym_connection_repeat1,
    STATE(79), 1,
      sym__connection_block,
    ACTIONS(248), 2,
      sym__eol,
      anon_sym_SEMI,
  [1483] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      sym__dash,
    ACTIONS(272), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1499] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_arrow,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(278), 1,
      sym_dot,
    STATE(15), 1,
      sym__colon,
    STATE(105), 1,
      sym__container_block,
    ACTIONS(236), 2,
      sym__eol,
      anon_sym_SEMI,
  [1525] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1538] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1551] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      sym__dash,
    ACTIONS(272), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1566] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(284), 1,
      sym_dot,
    STATE(15), 1,
      sym__colon,
    STATE(105), 1,
      sym__container_block,
    ACTIONS(236), 2,
      sym__eol,
      anon_sym_SEMI,
  [1589] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(288), 1,
      sym_arrow,
    STATE(54), 1,
      aux_sym_connection_repeat1,
    ACTIONS(286), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [1606] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      sym__dash,
    ACTIONS(168), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1621] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(293), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1634] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 1,
      sym__dash,
    ACTIONS(149), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1649] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(149), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1662] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      sym_dot,
    STATE(37), 1,
      sym__colon,
    STATE(118), 1,
      sym__container_block,
    ACTIONS(301), 2,
      sym__eol,
      anon_sym_SEMI,
  [1685] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 1,
      sym_dot,
    ACTIONS(242), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1700] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1713] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(307), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1726] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 1,
      sym_dot,
    ACTIONS(309), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1741] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1754] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1766] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym__connection_block,
    ACTIONS(311), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1781] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(313), 5,
      anon_sym_RBRACE,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [1792] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(315), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1803] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym__container_block,
    ACTIONS(317), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1818] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(319), 4,
      anon_sym_DASH,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1828] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym__container_block,
    ACTIONS(321), 2,
      sym__eol,
      anon_sym_SEMI,
  [1842] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(323), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1852] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(7), 1,
      sym__end,
    ACTIONS(325), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1864] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(327), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1873] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym_language,
    ACTIONS(331), 1,
      sym__eol,
    STATE(123), 1,
      sym__text_block_definition,
  [1886] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(333), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1895] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(67), 1,
      sym__end,
    ACTIONS(335), 2,
      sym__eol,
      anon_sym_SEMI,
  [1906] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1915] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(337), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1924] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      aux_sym_string_token1,
    STATE(98), 1,
      aux_sym_string_repeat1,
  [1937] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(343), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1946] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      aux_sym_string_token2,
    STATE(82), 1,
      aux_sym_string_repeat2,
  [1959] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(352), 1,
      aux_sym_string_token1,
    STATE(83), 1,
      aux_sym_string_repeat1,
  [1972] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(14), 1,
      sym__end,
    ACTIONS(355), 2,
      sym__eol,
      anon_sym_SEMI,
  [1983] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 1,
      sym__text_block_raw,
    ACTIONS(357), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [1994] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
      aux_sym_string_token2,
    STATE(101), 1,
      aux_sym_string_repeat2,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(363), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2016] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(365), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2025] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(317), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2034] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2043] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      sym_dot,
    STATE(115), 1,
      sym__colon,
  [2056] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym_language,
    ACTIONS(331), 1,
      sym__eol,
    STATE(127), 1,
      sym__text_block_definition,
  [2069] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2078] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(375), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2087] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2096] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(379), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2105] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2114] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    ACTIONS(385), 1,
      aux_sym_string_token1,
    STATE(83), 1,
      aux_sym_string_repeat1,
  [2127] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2136] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(391), 1,
      sym__text_block_raw,
    ACTIONS(389), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [2147] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      aux_sym_string_token2,
    STATE(82), 1,
      aux_sym_string_repeat2,
  [2160] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(395), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2169] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(12), 1,
      sym__end,
    ACTIONS(397), 2,
      sym__eol,
      anon_sym_SEMI,
  [2180] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(399), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2189] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(401), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2198] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(403), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2207] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      sym_arrow,
    STATE(40), 1,
      aux_sym_connection_repeat1,
  [2217] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [2225] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [2233] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(407), 2,
      sym__eol,
      anon_sym_SEMI,
  [2241] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(321), 2,
      sym__eol,
      anon_sym_SEMI,
  [2249] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      sym_arrow,
    STATE(47), 1,
      aux_sym_connection_repeat1,
  [2259] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym__colon,
  [2269] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_style,
    STATE(111), 1,
      sym__style_attribute,
  [2279] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym__style_attribute_block,
  [2289] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym__colon,
  [2299] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      anon_sym_COLON,
    STATE(31), 1,
      sym__colon,
  [2309] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(417), 2,
      sym__eol,
      anon_sym_SEMI,
  [2317] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(419), 2,
      sym__eol,
      anon_sym_SEMI,
  [2325] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(421), 1,
      anon_sym_COLON,
  [2332] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
  [2339] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
  [2346] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(427), 1,
      anon_sym_PIPE,
  [2353] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 1,
      sym_dot,
  [2360] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 1,
      sym__eol,
  [2367] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      aux_sym__identifier_token1,
  [2374] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(427), 1,
      anon_sym_BQUOTE_PIPE,
  [2381] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 1,
      anon_sym_COLON,
  [2388] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(435), 1,
      anon_sym_COLON,
  [2395] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      anon_sym_COLON,
  [2402] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      aux_sym__identifier_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 215,
  [SMALL_STATE(6)] = 276,
  [SMALL_STATE(7)] = 337,
  [SMALL_STATE(8)] = 369,
  [SMALL_STATE(9)] = 409,
  [SMALL_STATE(10)] = 449,
  [SMALL_STATE(11)] = 489,
  [SMALL_STATE(12)] = 520,
  [SMALL_STATE(13)] = 542,
  [SMALL_STATE(14)] = 581,
  [SMALL_STATE(15)] = 602,
  [SMALL_STATE(16)] = 640,
  [SMALL_STATE(17)] = 669,
  [SMALL_STATE(18)] = 694,
  [SMALL_STATE(19)] = 723,
  [SMALL_STATE(20)] = 748,
  [SMALL_STATE(21)] = 773,
  [SMALL_STATE(22)] = 806,
  [SMALL_STATE(23)] = 829,
  [SMALL_STATE(24)] = 862,
  [SMALL_STATE(25)] = 891,
  [SMALL_STATE(26)] = 924,
  [SMALL_STATE(27)] = 957,
  [SMALL_STATE(28)] = 982,
  [SMALL_STATE(29)] = 1008,
  [SMALL_STATE(30)] = 1032,
  [SMALL_STATE(31)] = 1062,
  [SMALL_STATE(32)] = 1088,
  [SMALL_STATE(33)] = 1110,
  [SMALL_STATE(34)] = 1134,
  [SMALL_STATE(35)] = 1160,
  [SMALL_STATE(36)] = 1184,
  [SMALL_STATE(37)] = 1208,
  [SMALL_STATE(38)] = 1237,
  [SMALL_STATE(39)] = 1264,
  [SMALL_STATE(40)] = 1293,
  [SMALL_STATE(41)] = 1320,
  [SMALL_STATE(42)] = 1349,
  [SMALL_STATE(43)] = 1365,
  [SMALL_STATE(44)] = 1391,
  [SMALL_STATE(45)] = 1407,
  [SMALL_STATE(46)] = 1433,
  [SMALL_STATE(47)] = 1457,
  [SMALL_STATE(48)] = 1483,
  [SMALL_STATE(49)] = 1499,
  [SMALL_STATE(50)] = 1525,
  [SMALL_STATE(51)] = 1538,
  [SMALL_STATE(52)] = 1551,
  [SMALL_STATE(53)] = 1566,
  [SMALL_STATE(54)] = 1589,
  [SMALL_STATE(55)] = 1606,
  [SMALL_STATE(56)] = 1621,
  [SMALL_STATE(57)] = 1634,
  [SMALL_STATE(58)] = 1649,
  [SMALL_STATE(59)] = 1662,
  [SMALL_STATE(60)] = 1685,
  [SMALL_STATE(61)] = 1700,
  [SMALL_STATE(62)] = 1713,
  [SMALL_STATE(63)] = 1726,
  [SMALL_STATE(64)] = 1741,
  [SMALL_STATE(65)] = 1754,
  [SMALL_STATE(66)] = 1766,
  [SMALL_STATE(67)] = 1781,
  [SMALL_STATE(68)] = 1792,
  [SMALL_STATE(69)] = 1803,
  [SMALL_STATE(70)] = 1818,
  [SMALL_STATE(71)] = 1828,
  [SMALL_STATE(72)] = 1842,
  [SMALL_STATE(73)] = 1852,
  [SMALL_STATE(74)] = 1864,
  [SMALL_STATE(75)] = 1873,
  [SMALL_STATE(76)] = 1886,
  [SMALL_STATE(77)] = 1895,
  [SMALL_STATE(78)] = 1906,
  [SMALL_STATE(79)] = 1915,
  [SMALL_STATE(80)] = 1924,
  [SMALL_STATE(81)] = 1937,
  [SMALL_STATE(82)] = 1946,
  [SMALL_STATE(83)] = 1959,
  [SMALL_STATE(84)] = 1972,
  [SMALL_STATE(85)] = 1983,
  [SMALL_STATE(86)] = 1994,
  [SMALL_STATE(87)] = 2007,
  [SMALL_STATE(88)] = 2016,
  [SMALL_STATE(89)] = 2025,
  [SMALL_STATE(90)] = 2034,
  [SMALL_STATE(91)] = 2043,
  [SMALL_STATE(92)] = 2056,
  [SMALL_STATE(93)] = 2069,
  [SMALL_STATE(94)] = 2078,
  [SMALL_STATE(95)] = 2087,
  [SMALL_STATE(96)] = 2096,
  [SMALL_STATE(97)] = 2105,
  [SMALL_STATE(98)] = 2114,
  [SMALL_STATE(99)] = 2127,
  [SMALL_STATE(100)] = 2136,
  [SMALL_STATE(101)] = 2147,
  [SMALL_STATE(102)] = 2160,
  [SMALL_STATE(103)] = 2169,
  [SMALL_STATE(104)] = 2180,
  [SMALL_STATE(105)] = 2189,
  [SMALL_STATE(106)] = 2198,
  [SMALL_STATE(107)] = 2207,
  [SMALL_STATE(108)] = 2217,
  [SMALL_STATE(109)] = 2225,
  [SMALL_STATE(110)] = 2233,
  [SMALL_STATE(111)] = 2241,
  [SMALL_STATE(112)] = 2249,
  [SMALL_STATE(113)] = 2259,
  [SMALL_STATE(114)] = 2269,
  [SMALL_STATE(115)] = 2279,
  [SMALL_STATE(116)] = 2289,
  [SMALL_STATE(117)] = 2299,
  [SMALL_STATE(118)] = 2309,
  [SMALL_STATE(119)] = 2317,
  [SMALL_STATE(120)] = 2325,
  [SMALL_STATE(121)] = 2332,
  [SMALL_STATE(122)] = 2339,
  [SMALL_STATE(123)] = 2346,
  [SMALL_STATE(124)] = 2353,
  [SMALL_STATE(125)] = 2360,
  [SMALL_STATE(126)] = 2367,
  [SMALL_STATE(127)] = 2374,
  [SMALL_STATE(128)] = 2381,
  [SMALL_STATE(129)] = 2388,
  [SMALL_STATE(130)] = 2395,
  [SMALL_STATE(131)] = 2402,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(131),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(27),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(121),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(91),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(80),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(86),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(120),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(128),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(128),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block_definition, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__container_block_definition, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(91),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(68),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(18),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(22),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(126),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(36),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(80),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(86),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(32),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(126),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(36),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(80),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(86),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(39),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block_definition, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(82),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(83),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [425] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_d2_external_scanner_create(void);
void tree_sitter_d2_external_scanner_destroy(void *);
bool tree_sitter_d2_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_d2_external_scanner_serialize(void *, char *);
void tree_sitter_d2_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_d2_external_scanner_create,
      tree_sitter_d2_external_scanner_destroy,
      tree_sitter_d2_external_scanner_scan,
      tree_sitter_d2_external_scanner_serialize,
      tree_sitter_d2_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
