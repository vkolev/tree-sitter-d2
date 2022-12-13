#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 1
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 4
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
  aux_sym_text_block_token1 = 8,
  sym_language = 9,
  anon_sym_direction = 10,
  anon_sym_shape = 11,
  anon_sym_label = 12,
  anon_sym_constraint = 13,
  anon_sym_icon = 14,
  anon_sym_style = 15,
  anon_sym_width = 16,
  anon_sym_height = 17,
  anon_sym_3d = 18,
  anon_sym_opacity = 19,
  anon_sym_fill = 20,
  anon_sym_stroke = 21,
  anon_sym_stroke_DASHwidth = 22,
  anon_sym_stroke_DASHdash = 23,
  anon_sym_border_DASHradius = 24,
  anon_sym_font_DASHcolor = 25,
  anon_sym_shadow = 26,
  anon_sym_multiple = 27,
  anon_sym_animated = 28,
  anon_sym_link = 29,
  sym__text_attr_key = 30,
  anon_sym_source_DASHarrowhead = 31,
  anon_sym_target_DASHarrowhead = 32,
  sym__dash = 33,
  anon_sym_COLON = 34,
  sym_arrow = 35,
  sym_dot = 36,
  sym__unquoted_string = 37,
  anon_sym_SQUOTE = 38,
  anon_sym_DQUOTE = 39,
  sym__unescaped_single_string_fragment = 40,
  sym__unescaped_double_string_fragment = 41,
  sym_escape_sequence = 42,
  anon_sym_true = 43,
  anon_sym_false = 44,
  sym_integer = 45,
  sym_float = 46,
  sym_line_comment = 47,
  sym__eol = 48,
  anon_sym_SEMI = 49,
  sym__text_block_start = 50,
  sym__text_block_end = 51,
  sym__text_block_raw_text = 52,
  sym_block_comment = 53,
  sym_source_file = 54,
  sym__root_definition = 55,
  sym_connection = 56,
  sym__connection_path = 57,
  sym__connection_block = 58,
  sym__connection_block_definition = 59,
  sym_container = 60,
  sym__container_block = 61,
  sym__container_block_definition = 62,
  sym_shape = 63,
  sym_shape_key = 64,
  sym__identifier = 65,
  sym_text_block = 66,
  sym__root_attribute = 67,
  sym__root_attr_key = 68,
  sym__shape_attribute = 69,
  sym__base_shape_attribute = 70,
  sym__shape_attr_key = 71,
  sym__style_attribute = 72,
  sym__style_attribute_block = 73,
  sym__inner_style_attribute = 74,
  sym__style_attr_key = 75,
  sym__common_style_attr_key = 76,
  sym__connection_attribute = 77,
  sym__connection_arrowhead_attribute = 78,
  sym__connection_arrowhead_attr_key = 79,
  sym_label = 80,
  sym_attr_value = 81,
  sym__colon = 82,
  sym_string = 83,
  sym_boolean = 84,
  sym__end = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_connection_repeat1 = 87,
  aux_sym__connection_path_repeat1 = 88,
  aux_sym__connection_block_repeat1 = 89,
  aux_sym__container_block_repeat1 = 90,
  aux_sym__identifier_repeat1 = 91,
  aux_sym__style_attribute_block_repeat1 = 92,
  aux_sym_string_repeat1 = 93,
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
  [aux_sym_text_block_token1] = "text_block_token1",
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
  [anon_sym_DQUOTE] = "\"",
  [sym__unescaped_single_string_fragment] = "string_fragment",
  [sym__unescaped_double_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_line_comment] = "line_comment",
  [sym__eol] = "_eol",
  [anon_sym_SEMI] = ";",
  [sym__text_block_start] = "|",
  [sym__text_block_end] = "|",
  [sym__text_block_raw_text] = "raw_text",
  [sym_block_comment] = "block_comment",
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
  [aux_sym_text_block_token1] = aux_sym_text_block_token1,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__unescaped_single_string_fragment] = sym__unescaped_single_string_fragment,
  [sym__unescaped_double_string_fragment] = sym__unescaped_single_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_line_comment] = sym_line_comment,
  [sym__eol] = sym__eol,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__text_block_start] = sym__text_block_start,
  [sym__text_block_end] = sym__text_block_start,
  [sym__text_block_raw_text] = sym__text_block_raw_text,
  [sym_block_comment] = sym_block_comment,
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
  [aux_sym_text_block_token1] = {
    .visible = false,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
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
  [sym__text_block_start] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_end] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
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
  [20] = 17,
  [21] = 14,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 15,
  [30] = 30,
  [31] = 31,
  [32] = 16,
  [33] = 22,
  [34] = 34,
  [35] = 19,
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
  [46] = 40,
  [47] = 47,
  [48] = 48,
  [49] = 38,
  [50] = 50,
  [51] = 51,
  [52] = 47,
  [53] = 48,
  [54] = 54,
  [55] = 55,
  [56] = 43,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 45,
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
  [112] = 103,
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
  [123] = 116,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
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
      if (eof) ADVANCE(167);
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (anon_sym__character_set_1(lookahead)) SKIP(165)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '3') ADVANCE(50);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (anon_sym__character_set_1(lookahead)) SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '3') ADVANCE(50);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (anon_sym__character_set_1(lookahead)) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '}') ADVANCE(170);
      if (anon_sym__character_set_1(lookahead)) SKIP(12)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 14:
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(238);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 's') ADVANCE(188);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(171);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(238);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(148);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(193);
      if (sym__unquoted_string_character_set_1(lookahead)) SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(242);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(224);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(215);
      END_STATE();
    case 92:
      if (lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 152:
      if (lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 153:
      if (lookahead == 'w') ADVANCE(79);
      END_STATE();
    case 154:
      if (lookahead == 'w') ADVANCE(80);
      END_STATE();
    case 155:
      if (lookahead == 'y') ADVANCE(205);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 157:
      if (lookahead == '{') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 158:
      if (lookahead == '}') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 164:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 165:
      if (eof) ADVANCE(167);
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (anon_sym__character_set_1(lookahead)) SKIP(165)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      if (eof) ADVANCE(167);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 's') ADVANCE(179);
      if (anon_sym__character_set_1(lookahead)) SKIP(166)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(238);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(242);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(244);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 166, .external_lex_state = 2},
  [2] = {.lex_state = 166, .external_lex_state = 2},
  [3] = {.lex_state = 166, .external_lex_state = 2},
  [4] = {.lex_state = 12, .external_lex_state = 2},
  [5] = {.lex_state = 12, .external_lex_state = 2},
  [6] = {.lex_state = 12, .external_lex_state = 2},
  [7] = {.lex_state = 166, .external_lex_state = 2},
  [8] = {.lex_state = 9, .external_lex_state = 2},
  [9] = {.lex_state = 9, .external_lex_state = 2},
  [10] = {.lex_state = 9, .external_lex_state = 2},
  [11] = {.lex_state = 9, .external_lex_state = 2},
  [12] = {.lex_state = 9, .external_lex_state = 2},
  [13] = {.lex_state = 12, .external_lex_state = 2},
  [14] = {.lex_state = 8, .external_lex_state = 3},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 2, .external_lex_state = 2},
  [17] = {.lex_state = 17, .external_lex_state = 2},
  [18] = {.lex_state = 9, .external_lex_state = 2},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 17, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 3},
  [22] = {.lex_state = 2, .external_lex_state = 2},
  [23] = {.lex_state = 17, .external_lex_state = 2},
  [24] = {.lex_state = 9, .external_lex_state = 2},
  [25] = {.lex_state = 9, .external_lex_state = 2},
  [26] = {.lex_state = 17, .external_lex_state = 2},
  [27] = {.lex_state = 2, .external_lex_state = 2},
  [28] = {.lex_state = 19, .external_lex_state = 2},
  [29] = {.lex_state = 7, .external_lex_state = 2},
  [30] = {.lex_state = 8, .external_lex_state = 2},
  [31] = {.lex_state = 19, .external_lex_state = 2},
  [32] = {.lex_state = 7, .external_lex_state = 2},
  [33] = {.lex_state = 7, .external_lex_state = 2},
  [34] = {.lex_state = 19, .external_lex_state = 2},
  [35] = {.lex_state = 7, .external_lex_state = 2},
  [36] = {.lex_state = 7, .external_lex_state = 2},
  [37] = {.lex_state = 13, .external_lex_state = 2},
  [38] = {.lex_state = 9, .external_lex_state = 2},
  [39] = {.lex_state = 18, .external_lex_state = 2},
  [40] = {.lex_state = 9, .external_lex_state = 2},
  [41] = {.lex_state = 13, .external_lex_state = 2},
  [42] = {.lex_state = 18, .external_lex_state = 2},
  [43] = {.lex_state = 9, .external_lex_state = 2},
  [44] = {.lex_state = 18, .external_lex_state = 2},
  [45] = {.lex_state = 9, .external_lex_state = 2},
  [46] = {.lex_state = 9, .external_lex_state = 2},
  [47] = {.lex_state = 9, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 9, .external_lex_state = 2},
  [50] = {.lex_state = 9, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 7, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 9, .external_lex_state = 2},
  [55] = {.lex_state = 9, .external_lex_state = 2},
  [56] = {.lex_state = 7, .external_lex_state = 2},
  [57] = {.lex_state = 9, .external_lex_state = 2},
  [58] = {.lex_state = 9, .external_lex_state = 2},
  [59] = {.lex_state = 9, .external_lex_state = 2},
  [60] = {.lex_state = 7, .external_lex_state = 2},
  [61] = {.lex_state = 9, .external_lex_state = 2},
  [62] = {.lex_state = 9, .external_lex_state = 2},
  [63] = {.lex_state = 9, .external_lex_state = 2},
  [64] = {.lex_state = 9, .external_lex_state = 2},
  [65] = {.lex_state = 9, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 9, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 20, .external_lex_state = 2},
  [72] = {.lex_state = 18, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 20, .external_lex_state = 2},
  [76] = {.lex_state = 20, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 9, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 21, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 9, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 18, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 21, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 4},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 18, .external_lex_state = 2},
  [124] = {.lex_state = 22, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 5},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 5},
};

enum {
  ts_external_token__text_block_start = 0,
  ts_external_token__text_block_end = 1,
  ts_external_token__text_block_raw_text = 2,
  ts_external_token_block_comment = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_block_start] = sym__text_block_start,
  [ts_external_token__text_block_end] = sym__text_block_end,
  [ts_external_token__text_block_raw_text] = sym__text_block_raw_text,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token__text_block_end] = true,
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token_block_comment] = true,
  },
  [4] = {
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
  [5] = {
    [ts_external_token__text_block_end] = true,
    [ts_external_token_block_comment] = true,
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
    [sym_escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__text_block_start] = ACTIONS(1),
    [sym__text_block_end] = ACTIONS(1),
    [sym__text_block_raw_text] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(119),
    [sym__root_definition] = STATE(2),
    [sym_connection] = STATE(74),
    [sym__connection_path] = STATE(112),
    [sym_container] = STATE(74),
    [sym_shape] = STATE(74),
    [sym_shape_key] = STATE(38),
    [sym__identifier] = STATE(57),
    [sym__root_attribute] = STATE(74),
    [sym__root_attr_key] = STATE(104),
    [sym__common_style_attr_key] = STATE(114),
    [sym_string] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(42),
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
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
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
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym__eol,
    STATE(38), 1,
      sym_shape_key,
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(104), 1,
      sym__root_attr_key,
    STATE(112), 1,
      sym__connection_path,
    STATE(114), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(74), 4,
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
  [78] = 19,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(34), 1,
      aux_sym__identifier_token1,
    ACTIONS(37), 1,
      anon_sym_direction,
    ACTIONS(46), 1,
      anon_sym_stroke,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__eol,
    STATE(38), 1,
      sym_shape_key,
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(104), 1,
      sym__root_attr_key,
    STATE(112), 1,
      sym__connection_path,
    STATE(114), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(74), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(40), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(43), 10,
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
  [156] = 16,
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
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(49), 1,
      sym_shape_key,
    STATE(103), 1,
      sym__connection_path,
    STATE(108), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(5), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(79), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [218] = 16,
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
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(49), 1,
      sym_shape_key,
    STATE(103), 1,
      sym__connection_path,
    STATE(108), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(6), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(79), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [280] = 16,
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
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(49), 1,
      sym_shape_key,
    STATE(103), 1,
      sym__connection_path,
    STATE(108), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(6), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    ACTIONS(78), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(79), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [342] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
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
  [375] = 10,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(101), 1,
      sym__eol,
    STATE(9), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(78), 1,
      sym__inner_style_attribute,
    STATE(109), 1,
      sym__style_attr_key,
    STATE(113), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
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
  [416] = 10,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(78), 1,
      sym__inner_style_attribute,
    STATE(109), 1,
      sym__style_attr_key,
    STATE(113), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
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
  [457] = 10,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      anon_sym_3d,
    ACTIONS(115), 1,
      anon_sym_stroke,
    ACTIONS(118), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(78), 1,
      sym__inner_style_attribute,
    STATE(109), 1,
      sym__style_attr_key,
    STATE(113), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(112), 10,
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
  [498] = 7,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    STATE(92), 1,
      sym__inner_style_attribute,
    STATE(109), 1,
      sym__style_attr_key,
    STATE(113), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
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
  [530] = 3,
    ACTIONS(121), 1,
      anon_sym_stroke,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(107), 13,
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
  [553] = 3,
    ACTIONS(125), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(123), 12,
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
  [575] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      sym__text_block_start,
    STATE(67), 1,
      sym_label,
    STATE(73), 1,
      sym_string,
    STATE(82), 1,
      sym__container_block,
    STATE(83), 1,
      sym_text_block,
    ACTIONS(127), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [614] = 5,
    ACTIONS(143), 1,
      aux_sym__identifier_token2,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(146), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(141), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [638] = 6,
    ACTIONS(150), 1,
      aux_sym__identifier_token2,
    ACTIONS(152), 1,
      aux_sym__identifier_token3,
    ACTIONS(154), 1,
      sym__dash,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(148), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [664] = 10,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      aux_sym__identifier_token1,
    STATE(53), 1,
      sym_shape_key,
    STATE(83), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(82), 2,
      sym_container,
      sym_shape,
  [698] = 8,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_style,
    ACTIONS(168), 1,
      sym__eol,
    STATE(51), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(165), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(18), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(94), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [728] = 6,
    ACTIONS(173), 1,
      aux_sym__identifier_token2,
    ACTIONS(175), 1,
      aux_sym__identifier_token3,
    ACTIONS(177), 1,
      sym__dash,
    STATE(16), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [754] = 10,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      aux_sym__identifier_token1,
    STATE(48), 1,
      sym_shape_key,
    STATE(83), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(82), 2,
      sym_container,
      sym_shape,
  [788] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      sym__text_block_start,
    STATE(67), 1,
      sym_label,
    STATE(73), 1,
      sym_string,
    STATE(82), 1,
      sym__container_block,
    STATE(83), 1,
      sym_text_block,
    ACTIONS(127), 2,
      sym__eol,
      anon_sym_SEMI,
  [826] = 6,
    ACTIONS(150), 1,
      aux_sym__identifier_token2,
    ACTIONS(175), 1,
      aux_sym__identifier_token3,
    ACTIONS(177), 1,
      sym__dash,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [852] = 10,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(182), 1,
      aux_sym__identifier_token1,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_shape_key,
    STATE(83), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(82), 2,
      sym_container,
      sym_shape,
  [886] = 8,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(195), 1,
      sym__eol,
    STATE(51), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(193), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(25), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(94), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [916] = 8,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      sym__eol,
    STATE(51), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(193), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(18), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(94), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [946] = 10,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(182), 1,
      aux_sym__identifier_token1,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_shape_key,
    STATE(83), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(82), 2,
      sym_container,
      sym_shape,
  [980] = 6,
    ACTIONS(203), 1,
      aux_sym__identifier_token2,
    ACTIONS(205), 1,
      aux_sym__identifier_token3,
    ACTIONS(207), 1,
      sym__dash,
    STATE(22), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(201), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1006] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(95), 1,
      sym_attr_value,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_string,
      sym_boolean,
    ACTIONS(209), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1035] = 5,
    ACTIONS(213), 1,
      aux_sym__identifier_token2,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(146), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(141), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1058] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_label,
    STATE(73), 1,
      sym_string,
    STATE(97), 1,
      sym__connection_block,
    ACTIONS(216), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1091] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(88), 1,
      sym_attr_value,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_string,
      sym_boolean,
    ACTIONS(209), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1120] = 6,
    ACTIONS(154), 1,
      sym__dash,
    ACTIONS(220), 1,
      aux_sym__identifier_token2,
    ACTIONS(222), 1,
      aux_sym__identifier_token3,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(148), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1145] = 6,
    ACTIONS(177), 1,
      sym__dash,
    ACTIONS(220), 1,
      aux_sym__identifier_token2,
    ACTIONS(224), 1,
      aux_sym__identifier_token3,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1170] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(107), 1,
      sym_attr_value,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_string,
      sym_boolean,
    ACTIONS(209), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1199] = 6,
    ACTIONS(177), 1,
      sym__dash,
    ACTIONS(224), 1,
      aux_sym__identifier_token3,
    ACTIONS(226), 1,
      aux_sym__identifier_token2,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1224] = 6,
    ACTIONS(207), 1,
      sym__dash,
    ACTIONS(228), 1,
      aux_sym__identifier_token2,
    ACTIONS(230), 1,
      aux_sym__identifier_token3,
    STATE(33), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(201), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1249] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(70), 1,
      sym_label,
    STATE(73), 1,
      sym_string,
    STATE(105), 1,
      sym__container_block,
    ACTIONS(232), 2,
      sym__eol,
      anon_sym_SEMI,
  [1281] = 8,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      sym_arrow,
    ACTIONS(242), 1,
      sym_dot,
    STATE(14), 1,
      sym__colon,
    STATE(100), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(234), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1309] = 9,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      aux_sym__identifier_token1,
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(54), 1,
      sym_shape_key,
    STATE(65), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
  [1339] = 8,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_COLON,
    ACTIONS(252), 1,
      sym_arrow,
    STATE(30), 1,
      sym__colon,
    STATE(55), 1,
      aux_sym_connection_repeat1,
    STATE(80), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(246), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1367] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_label,
    STATE(73), 1,
      sym_string,
    STATE(97), 1,
      sym__connection_block,
    ACTIONS(216), 2,
      sym__eol,
      anon_sym_SEMI,
  [1399] = 8,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      aux_sym__identifier_token1,
    STATE(44), 1,
      aux_sym__connection_path_repeat1,
    STATE(64), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
  [1426] = 3,
    ACTIONS(154), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(148), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1443] = 8,
    ACTIONS(254), 1,
      anon_sym_DASH,
    ACTIONS(257), 1,
      aux_sym__identifier_token1,
    ACTIONS(260), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym__connection_path_repeat1,
    STATE(122), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
  [1470] = 3,
    ACTIONS(177), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1487] = 8,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      sym_arrow,
    ACTIONS(266), 1,
      anon_sym_COLON,
    STATE(41), 1,
      sym__colon,
    STATE(55), 1,
      aux_sym_connection_repeat1,
    STATE(80), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(246), 2,
      sym__eol,
      anon_sym_SEMI,
  [1514] = 3,
    ACTIONS(270), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1531] = 7,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(272), 1,
      sym_dot,
    STATE(14), 1,
      sym__colon,
    STATE(100), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(234), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1556] = 8,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      sym_arrow,
    ACTIONS(274), 1,
      anon_sym_COLON,
    ACTIONS(276), 1,
      sym_dot,
    STATE(21), 1,
      sym__colon,
    STATE(100), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(234), 2,
      sym__eol,
      anon_sym_SEMI,
  [1583] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1597] = 7,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_COLON,
    ACTIONS(280), 1,
      sym_dot,
    STATE(37), 1,
      sym__colon,
    STATE(111), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(282), 2,
      sym__eol,
      anon_sym_SEMI,
  [1621] = 3,
    ACTIONS(284), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1637] = 7,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      anon_sym_COLON,
    ACTIONS(286), 1,
      sym_dot,
    STATE(21), 1,
      sym__colon,
    STATE(100), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(234), 2,
      sym__eol,
      anon_sym_SEMI,
  [1661] = 3,
    ACTIONS(288), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(240), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1677] = 4,
    ACTIONS(292), 1,
      sym_arrow,
    STATE(55), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(290), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [1695] = 3,
    ACTIONS(295), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(148), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1711] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(297), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1725] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(299), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1739] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(301), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1753] = 3,
    ACTIONS(303), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1769] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1783] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(305), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1797] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(148), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1811] = 3,
    ACTIONS(288), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(307), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1827] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(290), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1840] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1852] = 4,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(311), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1868] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1884] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(315), 5,
      anon_sym_RBRACE,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [1896] = 4,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(317), 2,
      sym__eol,
      anon_sym_SEMI,
  [1911] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat1,
    ACTIONS(321), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [1928] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(323), 4,
      anon_sym_DASH,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1939] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(325), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1950] = 3,
    STATE(7), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(327), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1963] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat1,
    ACTIONS(331), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [1980] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym_string_repeat1,
    ACTIONS(336), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [1997] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(338), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2007] = 3,
    STATE(12), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(340), 2,
      sym__eol,
      anon_sym_SEMI,
  [2019] = 3,
    STATE(13), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(342), 2,
      sym__eol,
      anon_sym_SEMI,
  [2031] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(344), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2041] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(346), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2051] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2061] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(311), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2071] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(350), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2081] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(352), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2091] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(354), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2101] = 4,
    ACTIONS(356), 1,
      anon_sym_COLON,
    ACTIONS(358), 1,
      sym_dot,
    STATE(101), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2115] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(360), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2125] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(362), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2135] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2145] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(366), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2155] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(368), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2165] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(370), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2175] = 3,
    STATE(69), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 2,
      sym__eol,
      anon_sym_SEMI,
  [2187] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(374), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2197] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(376), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2207] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(313), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2217] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(378), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2227] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2237] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(382), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2247] = 3,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2258] = 3,
    ACTIONS(62), 1,
      anon_sym_style,
    STATE(105), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2269] = 3,
    ACTIONS(252), 1,
      sym_arrow,
    STATE(46), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2280] = 3,
    ACTIONS(386), 1,
      anon_sym_COLON,
    STATE(31), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2291] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(317), 2,
      sym__eol,
      anon_sym_SEMI,
  [2300] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(388), 2,
      sym__eol,
      anon_sym_SEMI,
  [2309] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(390), 2,
      sym__eol,
      anon_sym_SEMI,
  [2318] = 3,
    ACTIONS(392), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2329] = 3,
    ACTIONS(394), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2340] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(396), 1,
      aux_sym_text_block_token1,
    ACTIONS(398), 1,
      sym_language,
  [2353] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(400), 2,
      sym__eol,
      anon_sym_SEMI,
  [2362] = 3,
    ACTIONS(252), 1,
      sym_arrow,
    STATE(40), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2373] = 2,
    ACTIONS(402), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2381] = 2,
    ACTIONS(404), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2389] = 2,
    ACTIONS(406), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2397] = 2,
    ACTIONS(408), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2405] = 2,
    ACTIONS(410), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2413] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(412), 1,
      aux_sym_text_block_token1,
  [2423] = 2,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2431] = 2,
    ACTIONS(416), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2439] = 2,
    ACTIONS(418), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2447] = 2,
    ACTIONS(288), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2455] = 2,
    ACTIONS(420), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2463] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(422), 1,
      sym__unescaped_single_string_fragment,
  [2473] = 2,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2481] = 2,
    ACTIONS(426), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2489] = 2,
    ACTIONS(428), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2497] = 2,
    ACTIONS(430), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 218,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 342,
  [SMALL_STATE(8)] = 375,
  [SMALL_STATE(9)] = 416,
  [SMALL_STATE(10)] = 457,
  [SMALL_STATE(11)] = 498,
  [SMALL_STATE(12)] = 530,
  [SMALL_STATE(13)] = 553,
  [SMALL_STATE(14)] = 575,
  [SMALL_STATE(15)] = 614,
  [SMALL_STATE(16)] = 638,
  [SMALL_STATE(17)] = 664,
  [SMALL_STATE(18)] = 698,
  [SMALL_STATE(19)] = 728,
  [SMALL_STATE(20)] = 754,
  [SMALL_STATE(21)] = 788,
  [SMALL_STATE(22)] = 826,
  [SMALL_STATE(23)] = 852,
  [SMALL_STATE(24)] = 886,
  [SMALL_STATE(25)] = 916,
  [SMALL_STATE(26)] = 946,
  [SMALL_STATE(27)] = 980,
  [SMALL_STATE(28)] = 1006,
  [SMALL_STATE(29)] = 1035,
  [SMALL_STATE(30)] = 1058,
  [SMALL_STATE(31)] = 1091,
  [SMALL_STATE(32)] = 1120,
  [SMALL_STATE(33)] = 1145,
  [SMALL_STATE(34)] = 1170,
  [SMALL_STATE(35)] = 1199,
  [SMALL_STATE(36)] = 1224,
  [SMALL_STATE(37)] = 1249,
  [SMALL_STATE(38)] = 1281,
  [SMALL_STATE(39)] = 1309,
  [SMALL_STATE(40)] = 1339,
  [SMALL_STATE(41)] = 1367,
  [SMALL_STATE(42)] = 1399,
  [SMALL_STATE(43)] = 1426,
  [SMALL_STATE(44)] = 1443,
  [SMALL_STATE(45)] = 1470,
  [SMALL_STATE(46)] = 1487,
  [SMALL_STATE(47)] = 1514,
  [SMALL_STATE(48)] = 1531,
  [SMALL_STATE(49)] = 1556,
  [SMALL_STATE(50)] = 1583,
  [SMALL_STATE(51)] = 1597,
  [SMALL_STATE(52)] = 1621,
  [SMALL_STATE(53)] = 1637,
  [SMALL_STATE(54)] = 1661,
  [SMALL_STATE(55)] = 1677,
  [SMALL_STATE(56)] = 1695,
  [SMALL_STATE(57)] = 1711,
  [SMALL_STATE(58)] = 1725,
  [SMALL_STATE(59)] = 1739,
  [SMALL_STATE(60)] = 1753,
  [SMALL_STATE(61)] = 1769,
  [SMALL_STATE(62)] = 1783,
  [SMALL_STATE(63)] = 1797,
  [SMALL_STATE(64)] = 1811,
  [SMALL_STATE(65)] = 1827,
  [SMALL_STATE(66)] = 1840,
  [SMALL_STATE(67)] = 1852,
  [SMALL_STATE(68)] = 1868,
  [SMALL_STATE(69)] = 1884,
  [SMALL_STATE(70)] = 1896,
  [SMALL_STATE(71)] = 1911,
  [SMALL_STATE(72)] = 1928,
  [SMALL_STATE(73)] = 1939,
  [SMALL_STATE(74)] = 1950,
  [SMALL_STATE(75)] = 1963,
  [SMALL_STATE(76)] = 1980,
  [SMALL_STATE(77)] = 1997,
  [SMALL_STATE(78)] = 2007,
  [SMALL_STATE(79)] = 2019,
  [SMALL_STATE(80)] = 2031,
  [SMALL_STATE(81)] = 2041,
  [SMALL_STATE(82)] = 2051,
  [SMALL_STATE(83)] = 2061,
  [SMALL_STATE(84)] = 2071,
  [SMALL_STATE(85)] = 2081,
  [SMALL_STATE(86)] = 2091,
  [SMALL_STATE(87)] = 2101,
  [SMALL_STATE(88)] = 2115,
  [SMALL_STATE(89)] = 2125,
  [SMALL_STATE(90)] = 2135,
  [SMALL_STATE(91)] = 2145,
  [SMALL_STATE(92)] = 2155,
  [SMALL_STATE(93)] = 2165,
  [SMALL_STATE(94)] = 2175,
  [SMALL_STATE(95)] = 2187,
  [SMALL_STATE(96)] = 2197,
  [SMALL_STATE(97)] = 2207,
  [SMALL_STATE(98)] = 2217,
  [SMALL_STATE(99)] = 2227,
  [SMALL_STATE(100)] = 2237,
  [SMALL_STATE(101)] = 2247,
  [SMALL_STATE(102)] = 2258,
  [SMALL_STATE(103)] = 2269,
  [SMALL_STATE(104)] = 2280,
  [SMALL_STATE(105)] = 2291,
  [SMALL_STATE(106)] = 2300,
  [SMALL_STATE(107)] = 2309,
  [SMALL_STATE(108)] = 2318,
  [SMALL_STATE(109)] = 2329,
  [SMALL_STATE(110)] = 2340,
  [SMALL_STATE(111)] = 2353,
  [SMALL_STATE(112)] = 2362,
  [SMALL_STATE(113)] = 2373,
  [SMALL_STATE(114)] = 2381,
  [SMALL_STATE(115)] = 2389,
  [SMALL_STATE(116)] = 2397,
  [SMALL_STATE(117)] = 2405,
  [SMALL_STATE(118)] = 2413,
  [SMALL_STATE(119)] = 2423,
  [SMALL_STATE(120)] = 2431,
  [SMALL_STATE(121)] = 2439,
  [SMALL_STATE(122)] = 2447,
  [SMALL_STATE(123)] = 2455,
  [SMALL_STATE(124)] = 2463,
  [SMALL_STATE(125)] = 2473,
  [SMALL_STATE(126)] = 2481,
  [SMALL_STATE(127)] = 2489,
  [SMALL_STATE(128)] = 2497,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(116),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(27),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(117),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(87),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(124),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(76),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(113),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(125),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(125),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(10),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block_definition, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__container_block_definition, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(15),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(87),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(66),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(18),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(123),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(36),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(124),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(76),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(29),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(123),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(36),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(124),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(76),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(39),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block_definition, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(75),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [414] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
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
