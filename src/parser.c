#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 1
#define TOKEN_COUNT 54
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
  aux_sym__text_block_definition_token1 = 11,
  sym_language = 12,
  anon_sym_direction = 13,
  anon_sym_shape = 14,
  anon_sym_label = 15,
  anon_sym_constraint = 16,
  anon_sym_icon = 17,
  anon_sym_style = 18,
  anon_sym_width = 19,
  anon_sym_height = 20,
  anon_sym_3d = 21,
  anon_sym_opacity = 22,
  anon_sym_fill = 23,
  anon_sym_stroke = 24,
  anon_sym_stroke_DASHwidth = 25,
  anon_sym_stroke_DASHdash = 26,
  anon_sym_border_DASHradius = 27,
  anon_sym_font_DASHcolor = 28,
  anon_sym_shadow = 29,
  anon_sym_multiple = 30,
  anon_sym_animated = 31,
  anon_sym_link = 32,
  sym__text_attr_key = 33,
  anon_sym_source_DASHarrowhead = 34,
  anon_sym_target_DASHarrowhead = 35,
  sym__dash = 36,
  anon_sym_COLON = 37,
  sym_arrow = 38,
  sym_dot = 39,
  sym__unquoted_string = 40,
  anon_sym_SQUOTE = 41,
  anon_sym_DQUOTE = 42,
  sym__unescaped_single_string_fragment = 43,
  sym__unescaped_double_string_fragment = 44,
  sym_escape_sequence = 45,
  anon_sym_true = 46,
  anon_sym_false = 47,
  sym_integer = 48,
  sym_float = 49,
  sym_line_comment = 50,
  sym__eol = 51,
  anon_sym_SEMI = 52,
  sym__text_block_raw = 53,
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
  sym__text_block_definition = 67,
  sym__root_attribute = 68,
  sym__root_attr_key = 69,
  sym__shape_attribute = 70,
  sym__base_shape_attribute = 71,
  sym__shape_attr_key = 72,
  sym__style_attribute = 73,
  sym__style_attribute_block = 74,
  sym__inner_style_attribute = 75,
  sym__style_attr_key = 76,
  sym__common_style_attr_key = 77,
  sym__connection_attribute = 78,
  sym__connection_arrowhead_attribute = 79,
  sym__connection_arrowhead_attr_key = 80,
  sym_label = 81,
  sym_attr_value = 82,
  sym__colon = 83,
  sym_string = 84,
  sym_boolean = 85,
  sym__end = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_connection_repeat1 = 88,
  aux_sym__connection_path_repeat1 = 89,
  aux_sym__connection_block_repeat1 = 90,
  aux_sym__container_block_repeat1 = 91,
  aux_sym__identifier_repeat1 = 92,
  aux_sym__style_attribute_block_repeat1 = 93,
  aux_sym_string_repeat1 = 94,
  aux_sym_string_repeat2 = 95,
  alias_sym_container_key = 96,
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
  [aux_sym__text_block_definition_token1] = "_text_block_definition_token1",
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
  [aux_sym__text_block_definition_token1] = aux_sym__text_block_definition_token1,
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
  [aux_sym__text_block_definition_token1] = {
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
  [52] = 52,
  [53] = 48,
  [54] = 46,
  [55] = 55,
  [56] = 56,
  [57] = 44,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 42,
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
  [126] = 125,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
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
      if (eof) ADVANCE(172);
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead == '`') ADVANCE(162);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(187);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '}') ADVANCE(175);
      if (anon_sym__character_set_1(lookahead)) SKIP(170)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(248);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '{') ADVANCE(174);
      if (anon_sym__character_set_2(lookahead)) SKIP(4)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '{') ADVANCE(174);
      if (anon_sym__character_set_2(lookahead)) SKIP(4)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '{') ADVANCE(174);
      if (anon_sym__character_set_2(lookahead)) SKIP(4)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '{') ADVANCE(174);
      if (anon_sym__character_set_2(lookahead)) SKIP(6)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '{') ADVANCE(174);
      if (anon_sym__character_set_2(lookahead)) SKIP(6)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '{') ADVANCE(174);
      if (anon_sym__character_set_2(lookahead)) SKIP(6)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '3') ADVANCE(54);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(175);
      if (anon_sym__character_set_1(lookahead)) SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '3') ADVANCE(54);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(175);
      if (anon_sym__character_set_1(lookahead)) SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(248);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == 'w') ADVANCE(187);
      if (lookahead == '}') ADVANCE(175);
      if (anon_sym__character_set_1(lookahead)) SKIP(15)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(248);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == 's') ADVANCE(193);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(21)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == '-') ADVANCE(176);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(22)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(248);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(152);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(201);
      if (sym__unquoted_string_character_set_1(lookahead)) SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(152);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(232);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '>') ADVANCE(231);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '>') ADVANCE(231);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
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
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(226);
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
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(221);
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
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(155);
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
      if (lookahead == 'i') ADVANCE(154);
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
      if (lookahead == 'k') ADVANCE(223);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(206);
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
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(157);
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
      if (lookahead == 'o') ADVANCE(158);
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
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(219);
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
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(207);
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
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(257);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 156:
      if (lookahead == 'w') ADVANCE(220);
      END_STATE();
    case 157:
      if (lookahead == 'w') ADVANCE(83);
      END_STATE();
    case 158:
      if (lookahead == 'w') ADVANCE(84);
      END_STATE();
    case 159:
      if (lookahead == 'y') ADVANCE(213);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 161:
      if (lookahead == '{') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 162:
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 163:
      if (lookahead == '}') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 164:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 169:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 170:
      if (eof) ADVANCE(172);
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '`') ADVANCE(162);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(187);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '}') ADVANCE(175);
      if (anon_sym__character_set_1(lookahead)) SKIP(170)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 171:
      if (eof) ADVANCE(172);
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(186);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 's') ADVANCE(184);
      if (anon_sym__character_set_1(lookahead)) SKIP(171)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '>') ADVANCE(231);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '`') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_PIPE_BQUOTE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BQUOTE_PIPE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__text_block_definition_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__text_block_definition_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '>') ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '>') ADVANCE(231);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '>') ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(248);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(248);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(252);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(254);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 171},
  [2] = {.lex_state = 171},
  [3] = {.lex_state = 171},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 171},
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
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 26},
  [71] = {.lex_state = 24},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 24},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 26},
  [78] = {.lex_state = 24},
  [79] = {.lex_state = 26},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 25},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 25},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0, .external_lex_state = 1},
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
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
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
    [sym_escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__text_block_raw] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(122),
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(76),
    [sym__connection_path] = STATE(107),
    [sym_container] = STATE(76),
    [sym_shape] = STATE(76),
    [sym_shape_key] = STATE(38),
    [sym__identifier] = STATE(58),
    [sym__root_attribute] = STATE(76),
    [sym__root_attr_key] = STATE(117),
    [sym__common_style_attr_key] = STATE(129),
    [sym_string] = STATE(58),
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
    STATE(58), 2,
      sym__identifier,
      sym_string,
    STATE(76), 4,
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
    STATE(58), 2,
      sym__identifier,
      sym_string,
    STATE(76), 4,
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
    STATE(58), 2,
      sym__identifier,
      sym_string,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(82), 6,
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
    STATE(58), 2,
      sym__identifier,
      sym_string,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(82), 6,
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
    STATE(58), 2,
      sym__identifier,
      sym_string,
    ACTIONS(78), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(82), 6,
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
    STATE(131), 1,
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
    STATE(131), 1,
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
    STATE(131), 1,
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
    STATE(131), 1,
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
    STATE(67), 1,
      sym_label,
    STATE(74), 1,
      sym_string,
    STATE(85), 1,
      sym__container_block,
    STATE(86), 1,
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
    STATE(67), 1,
      sym_label,
    STATE(74), 1,
      sym_string,
    STATE(85), 1,
      sym__container_block,
    STATE(86), 1,
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
    STATE(98), 3,
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
    STATE(98), 3,
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
    STATE(54), 1,
      sym_shape_key,
    STATE(86), 1,
      sym__style_attribute,
    STATE(58), 2,
      sym__identifier,
      sym_string,
    STATE(85), 2,
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
    STATE(86), 1,
      sym__style_attribute,
    STATE(58), 2,
      sym__identifier,
      sym_string,
    STATE(85), 2,
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
    STATE(98), 3,
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
    STATE(86), 1,
      sym__style_attribute,
    STATE(58), 2,
      sym__identifier,
      sym_string,
    STATE(85), 2,
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
    STATE(54), 1,
      sym_shape_key,
    STATE(86), 1,
      sym__style_attribute,
    STATE(58), 2,
      sym__identifier,
      sym_string,
    STATE(85), 2,
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
    STATE(90), 2,
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
    STATE(68), 1,
      sym_label,
    STATE(74), 1,
      sym_string,
    STATE(93), 1,
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
    STATE(95), 1,
      sym_attr_value,
    ACTIONS(213), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
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
    STATE(90), 2,
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
    STATE(72), 1,
      sym_label,
    STATE(74), 1,
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
    STATE(81), 1,
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
    STATE(55), 1,
      sym_shape_key,
    STATE(65), 1,
      sym__connection_path,
    STATE(58), 2,
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
    STATE(51), 1,
      aux_sym_connection_repeat1,
    STATE(105), 1,
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
    STATE(68), 1,
      sym_label,
    STATE(74), 1,
      sym_string,
    STATE(93), 1,
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
    STATE(64), 1,
      sym_shape_key,
    STATE(58), 2,
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
    STATE(120), 1,
      sym_shape_key,
    STATE(58), 2,
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
    STATE(81), 1,
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
    STATE(51), 1,
      aux_sym_connection_repeat1,
    STATE(105), 1,
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
    STATE(81), 1,
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
  [1538] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      sym_arrow,
    STATE(51), 1,
      aux_sym_connection_repeat1,
    ACTIONS(280), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [1555] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1568] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 1,
      sym__dash,
    ACTIONS(272), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1583] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(289), 1,
      sym_dot,
    STATE(15), 1,
      sym__colon,
    STATE(81), 1,
      sym__container_block,
    ACTIONS(236), 2,
      sym__eol,
      anon_sym_SEMI,
  [1606] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      sym_dot,
    ACTIONS(242), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
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
    ACTIONS(168), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1649] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 7,
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
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      sym_dot,
    STATE(37), 1,
      sym__colon,
    STATE(118), 1,
      sym__container_block,
    ACTIONS(303), 2,
      sym__eol,
      anon_sym_SEMI,
  [1685] = 2,
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
  [1698] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      sym__dash,
    ACTIONS(149), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1713] = 2,
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
  [1726] = 2,
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
  [1739] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      sym_dot,
    ACTIONS(309), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1754] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1766] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1777] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym__container_block,
    ACTIONS(313), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1792] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym__connection_block,
    ACTIONS(315), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(317), 5,
      anon_sym_RBRACE,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [1818] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat1,
    ACTIONS(321), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [1832] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat2,
    ACTIONS(323), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [1846] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym__container_block,
    ACTIONS(325), 2,
      sym__eol,
      anon_sym_SEMI,
  [1860] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(327), 4,
      anon_sym_DASH,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1870] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1880] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat2,
    ACTIONS(333), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [1894] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(7), 1,
      sym__end,
    ACTIONS(336), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1906] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat1,
    ACTIONS(340), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [1920] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym_string_repeat2,
    ACTIONS(345), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [1934] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(343), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      aux_sym_string_repeat1,
    ACTIONS(347), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [1948] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1957] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(351), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1966] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(14), 1,
      sym__end,
    ACTIONS(353), 2,
      sym__eol,
      anon_sym_SEMI,
  [1977] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1986] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 1,
      sym__text_block_raw,
    ACTIONS(357), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [1997] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(361), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2006] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(313), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2015] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(363), 1,
      aux_sym__text_block_definition_token1,
    ACTIONS(365), 1,
      sym_language,
    STATE(123), 1,
      sym__text_block_definition,
  [2028] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2037] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(363), 1,
      aux_sym__text_block_definition_token1,
    ACTIONS(365), 1,
      sym_language,
    STATE(127), 1,
      sym__text_block_definition,
  [2050] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2059] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(371), 1,
      anon_sym_COLON,
    ACTIONS(373), 1,
      sym_dot,
    STATE(115), 1,
      sym__colon,
  [2072] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(375), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(315), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2090] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2099] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(379), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2108] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2117] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(383), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(69), 1,
      sym__end,
    ACTIONS(385), 2,
      sym__eol,
      anon_sym_SEMI,
  [2137] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2146] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2155] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      sym__text_block_raw,
    ACTIONS(391), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [2166] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(395), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2175] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(12), 1,
      sym__end,
    ACTIONS(397), 2,
      sym__eol,
      anon_sym_SEMI,
  [2186] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(399), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2195] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(401), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2204] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(403), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2213] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      sym_arrow,
    STATE(40), 1,
      aux_sym_connection_repeat1,
  [2223] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(391), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [2231] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [2239] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(407), 2,
      sym__eol,
      anon_sym_SEMI,
  [2247] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(325), 2,
      sym__eol,
      anon_sym_SEMI,
  [2255] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      sym_arrow,
    STATE(47), 1,
      aux_sym_connection_repeat1,
  [2265] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym__colon,
  [2275] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_style,
    STATE(111), 1,
      sym__style_attribute,
  [2285] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym__style_attribute_block,
  [2295] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym__colon,
  [2305] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      anon_sym_COLON,
    STATE(31), 1,
      sym__colon,
  [2315] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(417), 2,
      sym__eol,
      anon_sym_SEMI,
  [2323] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(419), 2,
      sym__eol,
      anon_sym_SEMI,
  [2331] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      sym_dot,
  [2338] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(421), 1,
      anon_sym_COLON,
  [2345] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
  [2352] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      anon_sym_PIPE,
  [2359] = 2,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(427), 1,
      aux_sym__text_block_definition_token1,
  [2366] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 1,
      aux_sym__identifier_token1,
  [2373] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      aux_sym__identifier_token1,
  [2380] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      anon_sym_BQUOTE_PIPE,
  [2387] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 1,
      anon_sym_COLON,
  [2394] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(435), 1,
      anon_sym_COLON,
  [2401] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      anon_sym_COLON,
  [2408] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      anon_sym_COLON,
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
  [SMALL_STATE(52)] = 1555,
  [SMALL_STATE(53)] = 1568,
  [SMALL_STATE(54)] = 1583,
  [SMALL_STATE(55)] = 1606,
  [SMALL_STATE(56)] = 1621,
  [SMALL_STATE(57)] = 1634,
  [SMALL_STATE(58)] = 1649,
  [SMALL_STATE(59)] = 1662,
  [SMALL_STATE(60)] = 1685,
  [SMALL_STATE(61)] = 1698,
  [SMALL_STATE(62)] = 1713,
  [SMALL_STATE(63)] = 1726,
  [SMALL_STATE(64)] = 1739,
  [SMALL_STATE(65)] = 1754,
  [SMALL_STATE(66)] = 1766,
  [SMALL_STATE(67)] = 1777,
  [SMALL_STATE(68)] = 1792,
  [SMALL_STATE(69)] = 1807,
  [SMALL_STATE(70)] = 1818,
  [SMALL_STATE(71)] = 1832,
  [SMALL_STATE(72)] = 1846,
  [SMALL_STATE(73)] = 1860,
  [SMALL_STATE(74)] = 1870,
  [SMALL_STATE(75)] = 1880,
  [SMALL_STATE(76)] = 1894,
  [SMALL_STATE(77)] = 1906,
  [SMALL_STATE(78)] = 1920,
  [SMALL_STATE(79)] = 1934,
  [SMALL_STATE(80)] = 1948,
  [SMALL_STATE(81)] = 1957,
  [SMALL_STATE(82)] = 1966,
  [SMALL_STATE(83)] = 1977,
  [SMALL_STATE(84)] = 1986,
  [SMALL_STATE(85)] = 1997,
  [SMALL_STATE(86)] = 2006,
  [SMALL_STATE(87)] = 2015,
  [SMALL_STATE(88)] = 2028,
  [SMALL_STATE(89)] = 2037,
  [SMALL_STATE(90)] = 2050,
  [SMALL_STATE(91)] = 2059,
  [SMALL_STATE(92)] = 2072,
  [SMALL_STATE(93)] = 2081,
  [SMALL_STATE(94)] = 2090,
  [SMALL_STATE(95)] = 2099,
  [SMALL_STATE(96)] = 2108,
  [SMALL_STATE(97)] = 2117,
  [SMALL_STATE(98)] = 2126,
  [SMALL_STATE(99)] = 2137,
  [SMALL_STATE(100)] = 2146,
  [SMALL_STATE(101)] = 2155,
  [SMALL_STATE(102)] = 2166,
  [SMALL_STATE(103)] = 2175,
  [SMALL_STATE(104)] = 2186,
  [SMALL_STATE(105)] = 2195,
  [SMALL_STATE(106)] = 2204,
  [SMALL_STATE(107)] = 2213,
  [SMALL_STATE(108)] = 2223,
  [SMALL_STATE(109)] = 2231,
  [SMALL_STATE(110)] = 2239,
  [SMALL_STATE(111)] = 2247,
  [SMALL_STATE(112)] = 2255,
  [SMALL_STATE(113)] = 2265,
  [SMALL_STATE(114)] = 2275,
  [SMALL_STATE(115)] = 2285,
  [SMALL_STATE(116)] = 2295,
  [SMALL_STATE(117)] = 2305,
  [SMALL_STATE(118)] = 2315,
  [SMALL_STATE(119)] = 2323,
  [SMALL_STATE(120)] = 2331,
  [SMALL_STATE(121)] = 2338,
  [SMALL_STATE(122)] = 2345,
  [SMALL_STATE(123)] = 2352,
  [SMALL_STATE(124)] = 2359,
  [SMALL_STATE(125)] = 2366,
  [SMALL_STATE(126)] = 2373,
  [SMALL_STATE(127)] = 2380,
  [SMALL_STATE(128)] = 2387,
  [SMALL_STATE(129)] = 2394,
  [SMALL_STATE(130)] = 2401,
  [SMALL_STATE(131)] = 2408,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(125),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(27),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(121),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(91),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(79),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(78),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(131),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(128),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(128),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block_definition, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__container_block_definition, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(91),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(66),
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
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(126),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(36),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(79),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(78),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(32),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
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
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(79),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(78),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(39),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block_definition, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(75),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(77),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [423] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
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
