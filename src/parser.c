#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_table_token1 = 1,
  anon_sym_include = 2,
  anon_sym_list = 3,
  anon_sym_COMMA = 4,
  anon_sym_sort = 5,
  anon_sym_summarize = 6,
  anon_sym_compute = 7,
  anon_sym_where = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_with = 13,
  anon_sym_limit = 14,
  anon_sym_duringpast = 15,
  anon_sym_from = 16,
  anon_sym_to = 17,
  anon_sym_on = 18,
  anon_sym_DOT = 19,
  sym_field_name = 20,
  sym_field_property = 21,
  anon_sym_asc = 22,
  anon_sym_desc = 23,
  anon_sym_DQUOTE = 24,
  anon_sym_SQUOTE = 25,
  aux_sym_string_token1 = 26,
  anon_sym_BSLASH = 27,
  aux_sym_string_token2 = 28,
  aux_sym_int_token1 = 29,
  sym_float = 30,
  anon_sym_true = 31,
  anon_sym_false = 32,
  aux_sym_date_token1 = 33,
  aux_sym_date_token2 = 34,
  aux_sym_date_time_token1 = 35,
  aux_sym_date_time_token2 = 36,
  aux_sym_date_time_token3 = 37,
  aux_sym_date_time_token4 = 38,
  aux_sym_date_time_token5 = 39,
  aux_sym_date_time_token6 = 40,
  aux_sym_date_time_token7 = 41,
  aux_sym_date_time_token8 = 42,
  aux_sym_date_time_token9 = 43,
  aux_sym_date_time_token10 = 44,
  sym_enum = 45,
  anon_sym_B = 46,
  anon_sym_KB = 47,
  anon_sym_MB = 48,
  anon_sym_GB = 49,
  anon_sym_TB = 50,
  anon_sym_ms = 51,
  anon_sym_s = 52,
  anon_sym_min = 53,
  anon_sym_h = 54,
  anon_sym_d = 55,
  aux_sym_ip_address_token1 = 56,
  aux_sym_ip_address_token2 = 57,
  aux_sym_ip_address_token3 = 58,
  aux_sym_ip_address_token4 = 59,
  aux_sym_ip_address_token5 = 60,
  sym_version = 61,
  anon_sym_EQ = 62,
  sym_pipe = 63,
  sym_addition = 64,
  sym_subtraction = 65,
  sym_division = 66,
  sym_multiplication = 67,
  anon_sym_EQ_EQ = 68,
  sym_not_equals = 69,
  sym_greater_than = 70,
  sym_greater_than_or_equals = 71,
  sym_less_than = 72,
  sym_less_than_or_equals = 73,
  sym_in_array = 74,
  sym_not_in_array = 75,
  sym_and = 76,
  sym_or = 77,
  sym_avg = 78,
  sym_sum = 79,
  sym_count = 80,
  sym_max = 81,
  sym_last = 82,
  sym_sum_if = 83,
  sym_count_if = 84,
  sym_by = 85,
  sym_source_file = 86,
  sym_query = 87,
  sym_table = 88,
  sym_clause = 89,
  sym_select_clause = 90,
  sym_include_clause = 91,
  sym_list_clause = 92,
  sym_sort_clause = 93,
  sym_summarize_clause = 94,
  sym_compute_clause = 95,
  sym_where_clause = 96,
  sym_comparison = 97,
  sym_with_clause = 98,
  sym_limit_clause = 99,
  sym_expression = 100,
  sym_expression_addition = 101,
  sym_expression_subtraction = 102,
  sym_expression_multiplication = 103,
  sym_expression_division = 104,
  sym_expression_parenthesized_expression = 105,
  sym_time_frame = 106,
  sym_field = 107,
  sym_sort_order = 108,
  sym_string = 109,
  sym_int = 110,
  sym_boolean = 111,
  sym_date = 112,
  sym_date_time = 113,
  sym_byte = 114,
  sym_duration = 115,
  sym_ip_address = 116,
  sym_alias = 117,
  sym_equals = 118,
  sym_aggregate_field = 119,
  sym_min = 120,
  sym_aggregate_function = 121,
  sym_aggregate = 122,
  aux_sym_query_repeat1 = 123,
  aux_sym_list_clause_repeat1 = 124,
  aux_sym_summarize_clause_repeat1 = 125,
  aux_sym_comparison_repeat1 = 126,
  aux_sym_comparison_repeat2 = 127,
  aux_sym_field_repeat1 = 128,
  aux_sym_string_repeat1 = 129,
  aux_sym_string_repeat2 = 130,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_table_token1] = "table_token1",
  [anon_sym_include] = "include",
  [anon_sym_list] = "list",
  [anon_sym_COMMA] = ",",
  [anon_sym_sort] = "sort",
  [anon_sym_summarize] = "summarize",
  [anon_sym_compute] = "compute",
  [anon_sym_where] = "where",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_with] = "with",
  [anon_sym_limit] = "limit",
  [anon_sym_duringpast] = "during past",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_on] = "on",
  [anon_sym_DOT] = ".",
  [sym_field_name] = "field_name",
  [sym_field_property] = "field_property",
  [anon_sym_asc] = "asc",
  [anon_sym_desc] = "desc",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_int_token1] = "int_token1",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_date_token1] = "date_token1",
  [aux_sym_date_token2] = "date_token2",
  [aux_sym_date_time_token1] = "date_time_token1",
  [aux_sym_date_time_token2] = "date_time_token2",
  [aux_sym_date_time_token3] = "date_time_token3",
  [aux_sym_date_time_token4] = "date_time_token4",
  [aux_sym_date_time_token5] = "date_time_token5",
  [aux_sym_date_time_token6] = "date_time_token6",
  [aux_sym_date_time_token7] = "date_time_token7",
  [aux_sym_date_time_token8] = "date_time_token8",
  [aux_sym_date_time_token9] = "date_time_token9",
  [aux_sym_date_time_token10] = "date_time_token10",
  [sym_enum] = "enum",
  [anon_sym_B] = "B",
  [anon_sym_KB] = "KB",
  [anon_sym_MB] = "MB",
  [anon_sym_GB] = "GB",
  [anon_sym_TB] = "TB",
  [anon_sym_ms] = "ms",
  [anon_sym_s] = "s",
  [anon_sym_min] = "min",
  [anon_sym_h] = "h",
  [anon_sym_d] = "d",
  [aux_sym_ip_address_token1] = "ip_address_token1",
  [aux_sym_ip_address_token2] = "ip_address_token2",
  [aux_sym_ip_address_token3] = "ip_address_token3",
  [aux_sym_ip_address_token4] = "ip_address_token4",
  [aux_sym_ip_address_token5] = "ip_address_token5",
  [sym_version] = "version",
  [anon_sym_EQ] = "=",
  [sym_pipe] = "pipe",
  [sym_addition] = "addition",
  [sym_subtraction] = "subtraction",
  [sym_division] = "division",
  [sym_multiplication] = "multiplication",
  [anon_sym_EQ_EQ] = "==",
  [sym_not_equals] = "not_equals",
  [sym_greater_than] = "greater_than",
  [sym_greater_than_or_equals] = "greater_than_or_equals",
  [sym_less_than] = "less_than",
  [sym_less_than_or_equals] = "less_than_or_equals",
  [sym_in_array] = "in_array",
  [sym_not_in_array] = "not_in_array",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_avg] = "avg",
  [sym_sum] = "sum",
  [sym_count] = "count",
  [sym_max] = "max",
  [sym_last] = "last",
  [sym_sum_if] = "sum_if",
  [sym_count_if] = "count_if",
  [sym_by] = "by",
  [sym_source_file] = "source_file",
  [sym_query] = "query",
  [sym_table] = "table",
  [sym_clause] = "clause",
  [sym_select_clause] = "select_clause",
  [sym_include_clause] = "include_clause",
  [sym_list_clause] = "list_clause",
  [sym_sort_clause] = "sort_clause",
  [sym_summarize_clause] = "summarize_clause",
  [sym_compute_clause] = "compute_clause",
  [sym_where_clause] = "where_clause",
  [sym_comparison] = "comparison",
  [sym_with_clause] = "with_clause",
  [sym_limit_clause] = "limit_clause",
  [sym_expression] = "expression",
  [sym_expression_addition] = "expression_addition",
  [sym_expression_subtraction] = "expression_subtraction",
  [sym_expression_multiplication] = "expression_multiplication",
  [sym_expression_division] = "expression_division",
  [sym_expression_parenthesized_expression] = "expression_parenthesized_expression",
  [sym_time_frame] = "time_frame",
  [sym_field] = "field",
  [sym_sort_order] = "sort_order",
  [sym_string] = "string",
  [sym_int] = "int",
  [sym_boolean] = "boolean",
  [sym_date] = "date",
  [sym_date_time] = "date_time",
  [sym_byte] = "byte",
  [sym_duration] = "duration",
  [sym_ip_address] = "ip_address",
  [sym_alias] = "alias",
  [sym_equals] = "equals",
  [sym_aggregate_field] = "aggregate_field",
  [sym_min] = "min",
  [sym_aggregate_function] = "aggregate_function",
  [sym_aggregate] = "aggregate",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_list_clause_repeat1] = "list_clause_repeat1",
  [aux_sym_summarize_clause_repeat1] = "summarize_clause_repeat1",
  [aux_sym_comparison_repeat1] = "comparison_repeat1",
  [aux_sym_comparison_repeat2] = "comparison_repeat2",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_table_token1] = aux_sym_table_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_summarize] = anon_sym_summarize,
  [anon_sym_compute] = anon_sym_compute,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_limit] = anon_sym_limit,
  [anon_sym_duringpast] = anon_sym_duringpast,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_field_name] = sym_field_name,
  [sym_field_property] = sym_field_property,
  [anon_sym_asc] = anon_sym_asc,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [sym_float] = sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [aux_sym_date_token2] = aux_sym_date_token2,
  [aux_sym_date_time_token1] = aux_sym_date_time_token1,
  [aux_sym_date_time_token2] = aux_sym_date_time_token2,
  [aux_sym_date_time_token3] = aux_sym_date_time_token3,
  [aux_sym_date_time_token4] = aux_sym_date_time_token4,
  [aux_sym_date_time_token5] = aux_sym_date_time_token5,
  [aux_sym_date_time_token6] = aux_sym_date_time_token6,
  [aux_sym_date_time_token7] = aux_sym_date_time_token7,
  [aux_sym_date_time_token8] = aux_sym_date_time_token8,
  [aux_sym_date_time_token9] = aux_sym_date_time_token9,
  [aux_sym_date_time_token10] = aux_sym_date_time_token10,
  [sym_enum] = sym_enum,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_KB] = anon_sym_KB,
  [anon_sym_MB] = anon_sym_MB,
  [anon_sym_GB] = anon_sym_GB,
  [anon_sym_TB] = anon_sym_TB,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_d] = anon_sym_d,
  [aux_sym_ip_address_token1] = aux_sym_ip_address_token1,
  [aux_sym_ip_address_token2] = aux_sym_ip_address_token2,
  [aux_sym_ip_address_token3] = aux_sym_ip_address_token3,
  [aux_sym_ip_address_token4] = aux_sym_ip_address_token4,
  [aux_sym_ip_address_token5] = aux_sym_ip_address_token5,
  [sym_version] = sym_version,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_pipe] = sym_pipe,
  [sym_addition] = sym_addition,
  [sym_subtraction] = sym_subtraction,
  [sym_division] = sym_division,
  [sym_multiplication] = sym_multiplication,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [sym_not_equals] = sym_not_equals,
  [sym_greater_than] = sym_greater_than,
  [sym_greater_than_or_equals] = sym_greater_than_or_equals,
  [sym_less_than] = sym_less_than,
  [sym_less_than_or_equals] = sym_less_than_or_equals,
  [sym_in_array] = sym_in_array,
  [sym_not_in_array] = sym_not_in_array,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_avg] = sym_avg,
  [sym_sum] = sym_sum,
  [sym_count] = sym_count,
  [sym_max] = sym_max,
  [sym_last] = sym_last,
  [sym_sum_if] = sym_sum_if,
  [sym_count_if] = sym_count_if,
  [sym_by] = sym_by,
  [sym_source_file] = sym_source_file,
  [sym_query] = sym_query,
  [sym_table] = sym_table,
  [sym_clause] = sym_clause,
  [sym_select_clause] = sym_select_clause,
  [sym_include_clause] = sym_include_clause,
  [sym_list_clause] = sym_list_clause,
  [sym_sort_clause] = sym_sort_clause,
  [sym_summarize_clause] = sym_summarize_clause,
  [sym_compute_clause] = sym_compute_clause,
  [sym_where_clause] = sym_where_clause,
  [sym_comparison] = sym_comparison,
  [sym_with_clause] = sym_with_clause,
  [sym_limit_clause] = sym_limit_clause,
  [sym_expression] = sym_expression,
  [sym_expression_addition] = sym_expression_addition,
  [sym_expression_subtraction] = sym_expression_subtraction,
  [sym_expression_multiplication] = sym_expression_multiplication,
  [sym_expression_division] = sym_expression_division,
  [sym_expression_parenthesized_expression] = sym_expression_parenthesized_expression,
  [sym_time_frame] = sym_time_frame,
  [sym_field] = sym_field,
  [sym_sort_order] = sym_sort_order,
  [sym_string] = sym_string,
  [sym_int] = sym_int,
  [sym_boolean] = sym_boolean,
  [sym_date] = sym_date,
  [sym_date_time] = sym_date_time,
  [sym_byte] = sym_byte,
  [sym_duration] = sym_duration,
  [sym_ip_address] = sym_ip_address,
  [sym_alias] = sym_alias,
  [sym_equals] = sym_equals,
  [sym_aggregate_field] = sym_aggregate_field,
  [sym_min] = sym_min,
  [sym_aggregate_function] = sym_aggregate_function,
  [sym_aggregate] = sym_aggregate,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym_list_clause_repeat1] = aux_sym_list_clause_repeat1,
  [aux_sym_summarize_clause_repeat1] = aux_sym_summarize_clause_repeat1,
  [aux_sym_comparison_repeat1] = aux_sym_comparison_repeat1,
  [aux_sym_comparison_repeat2] = aux_sym_comparison_repeat2,
  [aux_sym_field_repeat1] = aux_sym_field_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_table_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_summarize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duringpast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field_property] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_asc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_desc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
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
  [aux_sym_date_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_time_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_time_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_time_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_time_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_time_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_time_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_time_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_time_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_time_token10] = {
    .visible = false,
    .named = false,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ip_address_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ip_address_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ip_address_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ip_address_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ip_address_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym_addition] = {
    .visible = true,
    .named = true,
  },
  [sym_subtraction] = {
    .visible = true,
    .named = true,
  },
  [sym_division] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplication] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_not_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_than] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_than_or_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_less_than] = {
    .visible = true,
    .named = true,
  },
  [sym_less_than_or_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_in_array] = {
    .visible = true,
    .named = true,
  },
  [sym_not_in_array] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_avg] = {
    .visible = true,
    .named = true,
  },
  [sym_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_count] = {
    .visible = true,
    .named = true,
  },
  [sym_max] = {
    .visible = true,
    .named = true,
  },
  [sym_last] = {
    .visible = true,
    .named = true,
  },
  [sym_sum_if] = {
    .visible = true,
    .named = true,
  },
  [sym_count_if] = {
    .visible = true,
    .named = true,
  },
  [sym_by] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_include_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_list_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sort_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_summarize_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_compute_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_with_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_addition] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_subtraction] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_multiplication] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_division] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_time_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_sort_order] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_address] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate_field] = {
    .visible = true,
    .named = true,
  },
  [sym_min] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate_function] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_query_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_summarize_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comparison_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comparison_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_repeat1] = {
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
  [7] = 4,
  [8] = 5,
  [9] = 6,
  [10] = 10,
  [11] = 2,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 17,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 23,
  [28] = 15,
  [29] = 19,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
  [41] = 37,
  [42] = 39,
  [43] = 39,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 33,
  [54] = 54,
  [55] = 55,
  [56] = 46,
  [57] = 55,
  [58] = 58,
  [59] = 44,
  [60] = 46,
  [61] = 54,
  [62] = 54,
  [63] = 63,
  [64] = 30,
  [65] = 63,
  [66] = 66,
  [67] = 67,
  [68] = 31,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 51,
  [74] = 48,
  [75] = 50,
  [76] = 52,
  [77] = 47,
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
  [89] = 88,
  [90] = 90,
  [91] = 91,
  [92] = 90,
  [93] = 91,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 78,
  [99] = 99,
  [100] = 79,
  [101] = 101,
  [102] = 95,
  [103] = 103,
  [104] = 103,
  [105] = 97,
  [106] = 106,
  [107] = 107,
  [108] = 94,
  [109] = 109,
  [110] = 110,
  [111] = 111,
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
  [122] = 121,
  [123] = 123,
  [124] = 113,
  [125] = 125,
  [126] = 117,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 130,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 112,
  [139] = 139,
  [140] = 140,
  [141] = 137,
  [142] = 142,
  [143] = 140,
  [144] = 142,
  [145] = 123,
  [146] = 131,
  [147] = 147,
  [148] = 139,
  [149] = 149,
  [150] = 150,
  [151] = 119,
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
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 166,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 157,
  [182] = 171,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 173,
  [191] = 183,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 167,
  [197] = 197,
  [198] = 198,
  [199] = 197,
  [200] = 160,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 198,
  [208] = 208,
  [209] = 208,
  [210] = 210,
  [211] = 211,
  [212] = 212,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(259);
      if (lookahead == '!') ADVANCE(106);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '+') ADVANCE(404);
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(406);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == 'B') ADVANCE(376);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'K') ADVANCE(108);
      if (lookahead == 'M') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(110);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(320);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == 'd') ADVANCE(389);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(208);
      if (lookahead == 'w') ADVANCE(139);
      if (lookahead == '|') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == 'w') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == 'w') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == ':') ADVANCE(240);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(245);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == 'v') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 57:
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(280);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(232);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(233);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(212);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(214);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(250);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(398);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(249);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(236);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(237);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(238);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 106:
      if (lookahead == '=') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead == 'B') ADVANCE(379);
      END_STATE();
    case 108:
      if (lookahead == 'B') ADVANCE(377);
      END_STATE();
    case 109:
      if (lookahead == 'B') ADVANCE(378);
      END_STATE();
    case 110:
      if (lookahead == 'B') ADVANCE(380);
      END_STATE();
    case 111:
      if (lookahead == 'M') ADVANCE(361);
      END_STATE();
    case 112:
      if (lookahead == 'M') ADVANCE(359);
      END_STATE();
    case 113:
      if (lookahead == 'M') ADVANCE(362);
      END_STATE();
    case 114:
      if (lookahead == 'M') ADVANCE(360);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(416);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 135:
      if (lookahead == 'f') ADVANCE(433);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(436);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(275);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(137);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 199:
      if (lookahead == 'x') ADVANCE(427);
      END_STATE();
    case 200:
      if (lookahead == 'y') ADVANCE(439);
      END_STATE();
    case 201:
      if (lookahead == 'z') ADVANCE(131);
      END_STATE();
    case 202:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(111);
      END_STATE();
    case 203:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(112);
      END_STATE();
    case 204:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(113);
      END_STATE();
    case 205:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(114);
      END_STATE();
    case 206:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(206)
      if (lookahead == '#' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 207:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(207)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 254:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 255:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 257:
      if (eof) ADVANCE(259);
      if (lookahead == '!') ADVANCE(106);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '+') ADVANCE(404);
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(406);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == '>') ADVANCE(410);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == '|') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(257)
      END_STATE();
    case 258:
      if (eof) ADVANCE(259);
      if (lookahead == ')') ADVANCE(269);
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == 'B') ADVANCE(376);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'K') ADVANCE(108);
      if (lookahead == 'M') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(110);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(388);
      if (lookahead == 'h') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead == '|') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(258)
      END_STATE();
    case 259:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '#' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_summarize);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_compute);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_duringpast);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'a') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'f') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'f') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'g') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'm') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'o') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 's') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'u') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'u') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'v') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'x') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_field_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_field_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'a') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'f') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'f') ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'g') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'm') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'n') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'n') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'o') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 's') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 't') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 't') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'u') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'u') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'v') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'x') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_field_property);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_asc);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == ':') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == ',') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(45);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_date_token2);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == ',') ADVANCE(52);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_date_time_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_date_time_token2);
      if (lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_date_time_token3);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_date_time_token4);
      if (lookahead == ':') ADVANCE(239);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_date_time_token5);
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead == ':') ADVANCE(241);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_date_time_token6);
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_date_time_token7);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_date_time_token8);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_date_time_token9);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_date_time_token10);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 'a') ADVANCE(364);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 'l') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'e') ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'e') ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'r') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 's') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'u') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_enum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_enum);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_KB);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_MB);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_GB);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_TB);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_min);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_ip_address_token2);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_ip_address_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(396);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_ip_address_token4);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_ip_address_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(408);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_addition);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_subtraction);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_division);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_multiplication);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_not_equals);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_greater_than);
      if (lookahead == '=') ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_greater_than_or_equals);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_less_than);
      if (lookahead == '=') ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_less_than_or_equals);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_in_array);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_not_in_array);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_avg);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_avg);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_avg);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_sum);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_sum);
      if (lookahead == 'i') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_sum);
      if (lookahead == 'i') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_count);
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_count);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_count);
      if (lookahead == 'i') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_max);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_last);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_last);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_last);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_sum_if);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_sum_if);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_sum_if);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_count_if);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_count_if);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_count_if);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_by);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 206},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 57},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 53},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 257},
  [31] = {.lex_state = 257},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 258},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 258},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 117},
  [38] = {.lex_state = 53},
  [39] = {.lex_state = 117},
  [40] = {.lex_state = 117},
  [41] = {.lex_state = 117},
  [42] = {.lex_state = 117},
  [43] = {.lex_state = 117},
  [44] = {.lex_state = 257},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 257},
  [48] = {.lex_state = 257},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 257},
  [51] = {.lex_state = 257},
  [52] = {.lex_state = 257},
  [53] = {.lex_state = 258},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 257},
  [61] = {.lex_state = 257},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 257},
  [83] = {.lex_state = 257},
  [84] = {.lex_state = 257},
  [85] = {.lex_state = 257},
  [86] = {.lex_state = 56},
  [87] = {.lex_state = 257},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 56},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 258},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 257},
  [108] = {.lex_state = 56},
  [109] = {.lex_state = 257},
  [110] = {.lex_state = 56},
  [111] = {.lex_state = 56},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 56},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 257},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 56},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 56},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 56},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 56},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 206},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 56},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 56},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 56},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 206},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 56},
  [203] = {.lex_state = 56},
  [204] = {.lex_state = 56},
  [205] = {.lex_state = 56},
  [206] = {.lex_state = 56},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 207},
  [209] = {.lex_state = 207},
  [210] = {.lex_state = 56},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_summarize] = ACTIONS(1),
    [anon_sym_compute] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_limit] = ACTIONS(1),
    [anon_sym_duringpast] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_asc] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_KB] = ACTIONS(1),
    [anon_sym_MB] = ACTIONS(1),
    [anon_sym_GB] = ACTIONS(1),
    [anon_sym_TB] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [aux_sym_ip_address_token1] = ACTIONS(1),
    [aux_sym_ip_address_token2] = ACTIONS(1),
    [aux_sym_ip_address_token5] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_pipe] = ACTIONS(1),
    [sym_addition] = ACTIONS(1),
    [sym_subtraction] = ACTIONS(1),
    [sym_division] = ACTIONS(1),
    [sym_multiplication] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [sym_not_equals] = ACTIONS(1),
    [sym_greater_than] = ACTIONS(1),
    [sym_greater_than_or_equals] = ACTIONS(1),
    [sym_less_than] = ACTIONS(1),
    [sym_less_than_or_equals] = ACTIONS(1),
    [sym_in_array] = ACTIONS(1),
    [sym_not_in_array] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_avg] = ACTIONS(1),
    [sym_sum] = ACTIONS(1),
    [sym_count] = ACTIONS(1),
    [sym_max] = ACTIONS(1),
    [sym_last] = ACTIONS(1),
    [sym_sum_if] = ACTIONS(1),
    [sym_count_if] = ACTIONS(1),
    [sym_by] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(212),
    [sym_query] = STATE(211),
    [sym_table] = STATE(82),
    [sym_select_clause] = STATE(114),
    [aux_sym_table_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    STATE(69), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [41] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(17), 1,
      sym_field_name,
    STATE(96), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [82] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    STATE(78), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [123] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    STATE(79), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [164] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    STATE(70), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [205] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(17), 1,
      sym_field_name,
    STATE(98), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [246] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(17), 1,
      sym_field_name,
    STATE(100), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [287] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(17), 1,
      sym_field_name,
    STATE(70), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [328] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    STATE(81), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [369] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(17), 1,
      sym_field_name,
    STATE(69), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [410] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    STATE(72), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [451] = 9,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(9), 1,
      aux_sym_int_token1,
    ACTIONS(11), 1,
      sym_float,
    ACTIONS(13), 1,
      anon_sym_min,
    STATE(80), 1,
      sym_expression,
    STATE(198), 1,
      sym_min,
    ACTIONS(15), 7,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
    STATE(71), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [492] = 10,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(35), 1,
      sym_version,
    ACTIONS(27), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(178), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [533] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_version,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(39), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(146), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [574] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(45), 1,
      sym_version,
    STATE(18), 1,
      aux_sym_comparison_repeat1,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(43), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(155), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [615] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      sym_version,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(49), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(141), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [656] = 10,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_int_token1,
    ACTIONS(74), 1,
      sym_version,
    STATE(18), 1,
      aux_sym_comparison_repeat1,
    ACTIONS(62), 2,
      sym_float,
      sym_enum,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(71), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(68), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(192), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [697] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(79), 1,
      sym_version,
    STATE(18), 1,
      aux_sym_comparison_repeat1,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(77), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(174), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [738] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(83), 1,
      sym_version,
    STATE(29), 1,
      aux_sym_comparison_repeat1,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(81), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(182), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [779] = 10,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      aux_sym_int_token1,
    ACTIONS(101), 1,
      sym_version,
    ACTIONS(93), 2,
      sym_float,
      sym_enum,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(97), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(137), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [820] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(105), 1,
      sym_version,
    STATE(19), 1,
      aux_sym_comparison_repeat1,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(103), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(171), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [861] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(109), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_comparison_repeat1,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(107), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(190), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [902] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(113), 1,
      sym_version,
    STATE(18), 1,
      aux_sym_comparison_repeat1,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(111), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(191), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [943] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(117), 1,
      sym_version,
    STATE(18), 1,
      aux_sym_comparison_repeat1,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(115), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(183), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [984] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(121), 1,
      sym_version,
    STATE(16), 1,
      aux_sym_comparison_repeat1,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(119), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(164), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [1025] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(125), 1,
      sym_version,
    STATE(25), 1,
      aux_sym_comparison_repeat1,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(123), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(173), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [1066] = 10,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      aux_sym_int_token1,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      sym_version,
    ACTIONS(95), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(129), 2,
      sym_float,
      sym_enum,
    ACTIONS(97), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(131), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [1107] = 10,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_int_token1,
    ACTIONS(135), 1,
      sym_version,
    STATE(18), 1,
      aux_sym_comparison_repeat1,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(133), 2,
      sym_float,
      sym_enum,
    ACTIONS(31), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(166), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [1148] = 4,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_field_repeat1,
    ACTIONS(142), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(137), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1176] = 2,
    ACTIONS(142), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(137), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_asc,
      anon_sym_desc,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1199] = 9,
    ACTIONS(144), 1,
      anon_sym_include,
    ACTIONS(146), 1,
      anon_sym_list,
    ACTIONS(148), 1,
      anon_sym_sort,
    ACTIONS(150), 1,
      anon_sym_summarize,
    ACTIONS(152), 1,
      anon_sym_compute,
    ACTIONS(154), 1,
      anon_sym_where,
    ACTIONS(156), 1,
      anon_sym_with,
    ACTIONS(158), 1,
      anon_sym_limit,
    STATE(165), 8,
      sym_include_clause,
      sym_list_clause,
      sym_sort_clause,
      sym_summarize_clause,
      sym_compute_clause,
      sym_where_clause,
      sym_with_clause,
      sym_limit_clause,
  [1234] = 3,
    ACTIONS(160), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_and,
      sym_or,
    ACTIONS(162), 5,
      anon_sym_B,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
      anon_sym_TB,
    ACTIONS(164), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [1256] = 5,
    STATE(193), 1,
      sym_date_time,
    STATE(194), 1,
      sym_date,
    ACTIONS(166), 2,
      aux_sym_date_token1,
      aux_sym_date_token2,
    ACTIONS(170), 4,
      aux_sym_date_time_token2,
      aux_sym_date_time_token4,
      aux_sym_date_time_token5,
      aux_sym_date_time_token6,
    ACTIONS(168), 6,
      aux_sym_date_time_token1,
      aux_sym_date_time_token3,
      aux_sym_date_time_token7,
      aux_sym_date_time_token8,
      aux_sym_date_time_token9,
      aux_sym_date_time_token10,
  [1281] = 3,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      sym_pipe,
      sym_and,
      sym_or,
    ACTIONS(172), 5,
      anon_sym_B,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
      anon_sym_TB,
    ACTIONS(174), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [1302] = 2,
    ACTIONS(176), 6,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
      sym_version,
    ACTIONS(178), 8,
      aux_sym_int_token1,
      sym_float,
      anon_sym_true,
      anon_sym_false,
      sym_enum,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
  [1321] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(180), 1,
      sym_field_property,
    STATE(48), 1,
      sym_aggregate,
    STATE(198), 1,
      sym_min,
    STATE(51), 2,
      sym_aggregate_field,
      sym_aggregate_function,
    ACTIONS(182), 3,
      sym_avg,
      sym_sum,
      sym_count,
    ACTIONS(15), 4,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
  [1349] = 2,
    ACTIONS(184), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
      sym_version,
    ACTIONS(186), 8,
      aux_sym_int_token1,
      sym_float,
      anon_sym_true,
      anon_sym_false,
      sym_enum,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
  [1367] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(180), 1,
      sym_field_property,
    STATE(50), 1,
      sym_aggregate,
    STATE(198), 1,
      sym_min,
    STATE(51), 2,
      sym_aggregate_field,
      sym_aggregate_function,
    ACTIONS(182), 3,
      sym_avg,
      sym_sum,
      sym_count,
    ACTIONS(15), 4,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
  [1395] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(188), 1,
      sym_field_property,
    STATE(74), 1,
      sym_aggregate,
    STATE(207), 1,
      sym_min,
    STATE(73), 2,
      sym_aggregate_field,
      sym_aggregate_function,
    ACTIONS(190), 3,
      sym_avg,
      sym_sum,
      sym_count,
    ACTIONS(192), 4,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
  [1423] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(188), 1,
      sym_field_property,
    STATE(48), 1,
      sym_aggregate,
    STATE(198), 1,
      sym_min,
    STATE(51), 2,
      sym_aggregate_field,
      sym_aggregate_function,
    ACTIONS(182), 3,
      sym_avg,
      sym_sum,
      sym_count,
    ACTIONS(15), 4,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
  [1451] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(188), 1,
      sym_field_property,
    STATE(75), 1,
      sym_aggregate,
    STATE(207), 1,
      sym_min,
    STATE(73), 2,
      sym_aggregate_field,
      sym_aggregate_function,
    ACTIONS(190), 3,
      sym_avg,
      sym_sum,
      sym_count,
    ACTIONS(192), 4,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
  [1479] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(188), 1,
      sym_field_property,
    STATE(50), 1,
      sym_aggregate,
    STATE(198), 1,
      sym_min,
    STATE(51), 2,
      sym_aggregate_field,
      sym_aggregate_function,
    ACTIONS(182), 3,
      sym_avg,
      sym_sum,
      sym_count,
    ACTIONS(15), 4,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
  [1507] = 2,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1524] = 2,
    ACTIONS(198), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(200), 10,
      sym_field_name,
      aux_sym_int_token1,
      anon_sym_min,
      sym_avg,
      sym_sum,
      sym_count,
      sym_max,
      sym_last,
      sym_sum_if,
      sym_count_if,
  [1541] = 4,
    ACTIONS(202), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_field_repeat1,
    ACTIONS(204), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(206), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1561] = 1,
    ACTIONS(208), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1575] = 1,
    ACTIONS(210), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1589] = 3,
    STATE(177), 1,
      sym_date_time,
    ACTIONS(214), 4,
      aux_sym_date_time_token2,
      aux_sym_date_time_token4,
      aux_sym_date_time_token5,
      aux_sym_date_time_token6,
    ACTIONS(212), 6,
      aux_sym_date_time_token1,
      aux_sym_date_time_token3,
      aux_sym_date_time_token7,
      aux_sym_date_time_token8,
      aux_sym_date_time_token9,
      aux_sym_date_time_token10,
  [1607] = 1,
    ACTIONS(216), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1621] = 1,
    ACTIONS(218), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1635] = 1,
    ACTIONS(220), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1649] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(172), 5,
      anon_sym_B,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
      anon_sym_TB,
    ACTIONS(174), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [1667] = 4,
    ACTIONS(222), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_field_repeat1,
    ACTIONS(224), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(226), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1687] = 5,
    ACTIONS(228), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_EQ_EQ,
    STATE(15), 1,
      sym_equals,
    ACTIONS(234), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(232), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1708] = 3,
    ACTIONS(236), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_field_repeat1,
    ACTIONS(206), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1725] = 5,
    ACTIONS(228), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_EQ_EQ,
    STATE(28), 1,
      sym_equals,
    ACTIONS(240), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(238), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1746] = 5,
    ACTIONS(228), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_EQ_EQ,
    STATE(14), 1,
      sym_equals,
    ACTIONS(244), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(242), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1767] = 3,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(194), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1784] = 3,
    ACTIONS(250), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_field_repeat1,
    ACTIONS(206), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
  [1801] = 3,
    ACTIONS(252), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_field_repeat1,
    ACTIONS(226), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
  [1818] = 3,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_field_repeat1,
    ACTIONS(226), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1835] = 5,
    ACTIONS(228), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_EQ_EQ,
    STATE(21), 1,
      sym_equals,
    ACTIONS(258), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(256), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1856] = 3,
    ACTIONS(260), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_field_repeat1,
    ACTIONS(137), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1873] = 5,
    ACTIONS(228), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_EQ_EQ,
    STATE(17), 1,
      sym_equals,
    ACTIONS(265), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(263), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1894] = 1,
    ACTIONS(160), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1906] = 1,
    ACTIONS(267), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1918] = 1,
    ACTIONS(137), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOT,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1930] = 1,
    ACTIONS(269), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1942] = 1,
    ACTIONS(271), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1954] = 1,
    ACTIONS(273), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1966] = 8,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      sym_addition,
    ACTIONS(281), 1,
      sym_subtraction,
    ACTIONS(283), 1,
      sym_division,
    ACTIONS(285), 1,
      sym_multiplication,
    ACTIONS(287), 1,
      sym_by,
    STATE(99), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [1992] = 2,
    ACTIONS(289), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(218), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [2006] = 2,
    ACTIONS(291), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(210), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [2020] = 2,
    ACTIONS(293), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(216), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [2034] = 2,
    ACTIONS(295), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(220), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [2048] = 2,
    ACTIONS(297), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(208), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [2062] = 3,
    ACTIONS(283), 1,
      sym_division,
    ACTIONS(285), 1,
      sym_multiplication,
    ACTIONS(299), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_by,
  [2077] = 3,
    ACTIONS(283), 1,
      sym_division,
    ACTIONS(285), 1,
      sym_multiplication,
    ACTIONS(301), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_by,
  [2092] = 7,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      sym_addition,
    ACTIONS(281), 1,
      sym_subtraction,
    ACTIONS(283), 1,
      sym_division,
    ACTIONS(285), 1,
      sym_multiplication,
    STATE(129), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2115] = 5,
    ACTIONS(279), 1,
      sym_addition,
    ACTIONS(281), 1,
      sym_subtraction,
    ACTIONS(283), 1,
      sym_division,
    ACTIONS(285), 1,
      sym_multiplication,
    ACTIONS(305), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_by,
  [2134] = 5,
    ACTIONS(309), 1,
      anon_sym_duringpast,
    ACTIONS(311), 1,
      anon_sym_from,
    ACTIONS(313), 1,
      anon_sym_on,
    STATE(153), 1,
      sym_time_frame,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2151] = 5,
    ACTIONS(309), 1,
      anon_sym_duringpast,
    ACTIONS(311), 1,
      anon_sym_from,
    ACTIONS(313), 1,
      anon_sym_on,
    STATE(188), 1,
      sym_time_frame,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2168] = 5,
    ACTIONS(309), 1,
      anon_sym_duringpast,
    ACTIONS(311), 1,
      anon_sym_from,
    ACTIONS(313), 1,
      anon_sym_on,
    STATE(180), 1,
      sym_time_frame,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2185] = 4,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_list_clause_repeat1,
    STATE(161), 1,
      sym_sort_order,
    ACTIONS(321), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2199] = 5,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      sym_field_name,
    STATE(63), 1,
      sym_field,
    STATE(144), 1,
      aux_sym_comparison_repeat2,
    STATE(163), 1,
      sym_comparison,
  [2215] = 4,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_list_clause_repeat1,
    STATE(152), 1,
      sym_sort_order,
    ACTIONS(321), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2229] = 1,
    ACTIONS(327), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_and,
      sym_or,
  [2237] = 1,
    ACTIONS(327), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2245] = 1,
    ACTIONS(329), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_and,
      sym_or,
  [2253] = 1,
    ACTIONS(331), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_and,
      sym_or,
  [2261] = 1,
    ACTIONS(329), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2269] = 1,
    ACTIONS(331), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2277] = 5,
    ACTIONS(325), 1,
      sym_field_name,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_field,
    STATE(142), 1,
      aux_sym_comparison_repeat2,
    STATE(197), 1,
      sym_comparison,
  [2293] = 1,
    ACTIONS(335), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_and,
      sym_or,
  [2301] = 5,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      sym_addition,
    ACTIONS(341), 1,
      sym_subtraction,
    ACTIONS(343), 1,
      sym_division,
    ACTIONS(345), 1,
      sym_multiplication,
  [2317] = 1,
    ACTIONS(347), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_and,
      sym_or,
  [2325] = 3,
    ACTIONS(343), 1,
      sym_division,
    ACTIONS(345), 1,
      sym_multiplication,
    ACTIONS(299), 3,
      anon_sym_RPAREN,
      sym_addition,
      sym_subtraction,
  [2337] = 4,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      sym_by,
    STATE(106), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2351] = 3,
    ACTIONS(343), 1,
      sym_division,
    ACTIONS(345), 1,
      sym_multiplication,
    ACTIONS(301), 3,
      anon_sym_RPAREN,
      sym_addition,
      sym_subtraction,
  [2363] = 1,
    ACTIONS(174), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [2371] = 1,
    ACTIONS(335), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2379] = 1,
    ACTIONS(353), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2387] = 1,
    ACTIONS(353), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_and,
      sym_or,
  [2395] = 1,
    ACTIONS(347), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2403] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      sym_pipe,
      sym_by,
  [2415] = 1,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      anon_sym_duringpast,
      anon_sym_from,
      anon_sym_on,
      sym_pipe,
  [2423] = 5,
    ACTIONS(325), 1,
      sym_field_name,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_field,
    STATE(142), 1,
      aux_sym_comparison_repeat2,
    STATE(199), 1,
      sym_comparison,
  [2439] = 1,
    ACTIONS(364), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_asc,
      anon_sym_desc,
      sym_pipe,
  [2447] = 4,
    ACTIONS(366), 1,
      sym_field_name,
    ACTIONS(368), 1,
      aux_sym_int_token1,
    STATE(118), 1,
      sym_field,
    STATE(186), 1,
      sym_duration,
  [2460] = 4,
    ACTIONS(366), 1,
      sym_field_name,
    ACTIONS(368), 1,
      aux_sym_int_token1,
    STATE(136), 1,
      sym_field,
    STATE(172), 1,
      sym_duration,
  [2473] = 4,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    STATE(121), 1,
      aux_sym_string_repeat1,
  [2486] = 4,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      anon_sym_BSLASH,
    ACTIONS(378), 1,
      aux_sym_string_token2,
    STATE(117), 1,
      aux_sym_string_repeat2,
  [2499] = 3,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 1,
      sym_pipe,
    STATE(116), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2510] = 4,
    ACTIONS(325), 1,
      sym_field_name,
    STATE(65), 1,
      sym_field,
    STATE(142), 1,
      aux_sym_comparison_repeat2,
    STATE(201), 1,
      sym_comparison,
  [2523] = 3,
    ACTIONS(382), 1,
      sym_pipe,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    STATE(132), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2534] = 4,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_BSLASH,
    ACTIONS(390), 1,
      aux_sym_string_token2,
    STATE(127), 1,
      aux_sym_string_repeat2,
  [2547] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2558] = 2,
    ACTIONS(396), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(398), 2,
      sym_and,
      sym_or,
  [2567] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(400), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2578] = 4,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      aux_sym_string_token1,
    ACTIONS(404), 1,
      anon_sym_BSLASH,
    STATE(128), 1,
      aux_sym_string_repeat1,
  [2591] = 4,
    ACTIONS(402), 1,
      aux_sym_string_token1,
    ACTIONS(404), 1,
      anon_sym_BSLASH,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    STATE(128), 1,
      aux_sym_string_repeat1,
  [2604] = 2,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(410), 2,
      sym_and,
      sym_or,
  [2613] = 4,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_BSLASH,
    ACTIONS(416), 1,
      aux_sym_string_token2,
    STATE(126), 1,
      aux_sym_string_repeat2,
  [2626] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2637] = 4,
    ACTIONS(388), 1,
      anon_sym_BSLASH,
    ACTIONS(390), 1,
      aux_sym_string_token2,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      aux_sym_string_repeat2,
  [2650] = 4,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      anon_sym_BSLASH,
    ACTIONS(425), 1,
      aux_sym_string_token2,
    STATE(127), 1,
      aux_sym_string_repeat2,
  [2663] = 4,
    ACTIONS(428), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      aux_sym_string_token1,
    ACTIONS(433), 1,
      anon_sym_BSLASH,
    STATE(128), 1,
      aux_sym_string_repeat1,
  [2676] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2687] = 3,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2698] = 2,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(443), 2,
      sym_and,
      sym_or,
  [2707] = 3,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 1,
      sym_pipe,
    STATE(132), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2718] = 3,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(364), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2729] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(453), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2740] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2751] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2762] = 2,
    ACTIONS(443), 2,
      sym_and,
      sym_or,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2771] = 4,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    ACTIONS(459), 1,
      aux_sym_string_token1,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    STATE(122), 1,
      aux_sym_string_repeat1,
  [2784] = 2,
    ACTIONS(398), 2,
      sym_and,
      sym_or,
    ACTIONS(463), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2793] = 2,
    ACTIONS(410), 2,
      sym_and,
      sym_or,
    ACTIONS(463), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2802] = 2,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    ACTIONS(443), 2,
      sym_and,
      sym_or,
  [2810] = 3,
    ACTIONS(325), 1,
      sym_field_name,
    STATE(55), 1,
      sym_field,
    STATE(150), 1,
      aux_sym_comparison_repeat2,
  [2820] = 2,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 2,
      sym_and,
      sym_or,
  [2828] = 3,
    ACTIONS(325), 1,
      sym_field_name,
    STATE(57), 1,
      sym_field,
    STATE(150), 1,
      aux_sym_comparison_repeat2,
  [2838] = 2,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 2,
      sym_and,
      sym_or,
  [2846] = 2,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(443), 2,
      sym_and,
      sym_or,
  [2854] = 3,
    ACTIONS(465), 1,
      aux_sym_date_token1,
    ACTIONS(467), 1,
      aux_sym_date_token2,
    STATE(177), 1,
      sym_date,
  [2864] = 2,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 2,
      sym_and,
      sym_or,
  [2872] = 3,
    ACTIONS(465), 1,
      aux_sym_date_token1,
    ACTIONS(467), 1,
      aux_sym_date_token2,
    STATE(187), 1,
      sym_date,
  [2882] = 3,
    ACTIONS(469), 1,
      sym_field_name,
    STATE(58), 1,
      sym_field,
    STATE(150), 1,
      aux_sym_comparison_repeat2,
  [2892] = 2,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 2,
      sym_and,
      sym_or,
  [2900] = 1,
    ACTIONS(472), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2905] = 1,
    ACTIONS(474), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2910] = 1,
    ACTIONS(410), 2,
      sym_and,
      sym_or,
  [2915] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
  [2922] = 2,
    ACTIONS(480), 1,
      anon_sym_EQ,
    STATE(13), 1,
      sym_alias,
  [2929] = 2,
    ACTIONS(482), 1,
      sym_field_name,
    STATE(109), 1,
      sym_field,
  [2936] = 2,
    ACTIONS(480), 1,
      anon_sym_EQ,
    STATE(12), 1,
      sym_alias,
  [2943] = 1,
    ACTIONS(398), 2,
      sym_and,
      sym_or,
  [2948] = 1,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2953] = 1,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2958] = 1,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2963] = 1,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2968] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
  [2975] = 1,
    ACTIONS(494), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2980] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
  [2987] = 1,
    ACTIONS(498), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2992] = 2,
    ACTIONS(368), 1,
      aux_sym_int_token1,
    STATE(187), 1,
      sym_duration,
  [2999] = 2,
    ACTIONS(500), 1,
      aux_sym_int_token1,
    STATE(176), 1,
      sym_int,
  [3006] = 2,
    ACTIONS(3), 1,
      aux_sym_table_token1,
    STATE(83), 1,
      sym_table,
  [3013] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
  [3020] = 1,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3025] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
  [3032] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
  [3039] = 2,
    ACTIONS(482), 1,
      sym_field_name,
    STATE(87), 1,
      sym_field,
  [3046] = 1,
    ACTIONS(508), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3051] = 1,
    ACTIONS(510), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3056] = 1,
    ACTIONS(443), 2,
      sym_and,
      sym_or,
  [3061] = 2,
    ACTIONS(366), 1,
      sym_field_name,
    STATE(134), 1,
      sym_field,
  [3068] = 1,
    ACTIONS(512), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3073] = 2,
    ACTIONS(366), 1,
      sym_field_name,
    STATE(109), 1,
      sym_field,
  [3080] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
  [3087] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
  [3094] = 2,
    ACTIONS(3), 1,
      aux_sym_table_token1,
    STATE(84), 1,
      sym_table,
  [3101] = 1,
    ACTIONS(518), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3106] = 1,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3111] = 1,
    ACTIONS(520), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3116] = 1,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3121] = 2,
    ACTIONS(480), 1,
      anon_sym_EQ,
    STATE(10), 1,
      sym_alias,
  [3128] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
  [3135] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
  [3142] = 1,
    ACTIONS(476), 1,
      anon_sym_COMMA,
  [3146] = 1,
    ACTIONS(528), 1,
      anon_sym_to,
  [3150] = 1,
    ACTIONS(530), 1,
      anon_sym_to,
  [3154] = 1,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
  [3158] = 1,
    ACTIONS(498), 1,
      anon_sym_to,
  [3162] = 1,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
  [3166] = 1,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
  [3170] = 1,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
  [3174] = 1,
    ACTIONS(484), 1,
      anon_sym_to,
  [3178] = 1,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [3182] = 1,
    ACTIONS(540), 1,
      sym_field_name,
  [3186] = 1,
    ACTIONS(542), 1,
      sym_field_name,
  [3190] = 1,
    ACTIONS(544), 1,
      sym_field_name,
  [3194] = 1,
    ACTIONS(546), 1,
      sym_field_name,
  [3198] = 1,
    ACTIONS(548), 1,
      sym_field_name,
  [3202] = 1,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
  [3206] = 1,
    ACTIONS(550), 1,
      sym_field_property,
  [3210] = 1,
    ACTIONS(552), 1,
      sym_field_property,
  [3214] = 1,
    ACTIONS(554), 1,
      sym_field_name,
  [3218] = 1,
    ACTIONS(556), 1,
      ts_builtin_sym_end,
  [3222] = 1,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 287,
  [SMALL_STATE(10)] = 328,
  [SMALL_STATE(11)] = 369,
  [SMALL_STATE(12)] = 410,
  [SMALL_STATE(13)] = 451,
  [SMALL_STATE(14)] = 492,
  [SMALL_STATE(15)] = 533,
  [SMALL_STATE(16)] = 574,
  [SMALL_STATE(17)] = 615,
  [SMALL_STATE(18)] = 656,
  [SMALL_STATE(19)] = 697,
  [SMALL_STATE(20)] = 738,
  [SMALL_STATE(21)] = 779,
  [SMALL_STATE(22)] = 820,
  [SMALL_STATE(23)] = 861,
  [SMALL_STATE(24)] = 902,
  [SMALL_STATE(25)] = 943,
  [SMALL_STATE(26)] = 984,
  [SMALL_STATE(27)] = 1025,
  [SMALL_STATE(28)] = 1066,
  [SMALL_STATE(29)] = 1107,
  [SMALL_STATE(30)] = 1148,
  [SMALL_STATE(31)] = 1176,
  [SMALL_STATE(32)] = 1199,
  [SMALL_STATE(33)] = 1234,
  [SMALL_STATE(34)] = 1256,
  [SMALL_STATE(35)] = 1281,
  [SMALL_STATE(36)] = 1302,
  [SMALL_STATE(37)] = 1321,
  [SMALL_STATE(38)] = 1349,
  [SMALL_STATE(39)] = 1367,
  [SMALL_STATE(40)] = 1395,
  [SMALL_STATE(41)] = 1423,
  [SMALL_STATE(42)] = 1451,
  [SMALL_STATE(43)] = 1479,
  [SMALL_STATE(44)] = 1507,
  [SMALL_STATE(45)] = 1524,
  [SMALL_STATE(46)] = 1541,
  [SMALL_STATE(47)] = 1561,
  [SMALL_STATE(48)] = 1575,
  [SMALL_STATE(49)] = 1589,
  [SMALL_STATE(50)] = 1607,
  [SMALL_STATE(51)] = 1621,
  [SMALL_STATE(52)] = 1635,
  [SMALL_STATE(53)] = 1649,
  [SMALL_STATE(54)] = 1667,
  [SMALL_STATE(55)] = 1687,
  [SMALL_STATE(56)] = 1708,
  [SMALL_STATE(57)] = 1725,
  [SMALL_STATE(58)] = 1746,
  [SMALL_STATE(59)] = 1767,
  [SMALL_STATE(60)] = 1784,
  [SMALL_STATE(61)] = 1801,
  [SMALL_STATE(62)] = 1818,
  [SMALL_STATE(63)] = 1835,
  [SMALL_STATE(64)] = 1856,
  [SMALL_STATE(65)] = 1873,
  [SMALL_STATE(66)] = 1894,
  [SMALL_STATE(67)] = 1906,
  [SMALL_STATE(68)] = 1918,
  [SMALL_STATE(69)] = 1930,
  [SMALL_STATE(70)] = 1942,
  [SMALL_STATE(71)] = 1954,
  [SMALL_STATE(72)] = 1966,
  [SMALL_STATE(73)] = 1992,
  [SMALL_STATE(74)] = 2006,
  [SMALL_STATE(75)] = 2020,
  [SMALL_STATE(76)] = 2034,
  [SMALL_STATE(77)] = 2048,
  [SMALL_STATE(78)] = 2062,
  [SMALL_STATE(79)] = 2077,
  [SMALL_STATE(80)] = 2092,
  [SMALL_STATE(81)] = 2115,
  [SMALL_STATE(82)] = 2134,
  [SMALL_STATE(83)] = 2151,
  [SMALL_STATE(84)] = 2168,
  [SMALL_STATE(85)] = 2185,
  [SMALL_STATE(86)] = 2199,
  [SMALL_STATE(87)] = 2215,
  [SMALL_STATE(88)] = 2229,
  [SMALL_STATE(89)] = 2237,
  [SMALL_STATE(90)] = 2245,
  [SMALL_STATE(91)] = 2253,
  [SMALL_STATE(92)] = 2261,
  [SMALL_STATE(93)] = 2269,
  [SMALL_STATE(94)] = 2277,
  [SMALL_STATE(95)] = 2293,
  [SMALL_STATE(96)] = 2301,
  [SMALL_STATE(97)] = 2317,
  [SMALL_STATE(98)] = 2325,
  [SMALL_STATE(99)] = 2337,
  [SMALL_STATE(100)] = 2351,
  [SMALL_STATE(101)] = 2363,
  [SMALL_STATE(102)] = 2371,
  [SMALL_STATE(103)] = 2379,
  [SMALL_STATE(104)] = 2387,
  [SMALL_STATE(105)] = 2395,
  [SMALL_STATE(106)] = 2403,
  [SMALL_STATE(107)] = 2415,
  [SMALL_STATE(108)] = 2423,
  [SMALL_STATE(109)] = 2439,
  [SMALL_STATE(110)] = 2447,
  [SMALL_STATE(111)] = 2460,
  [SMALL_STATE(112)] = 2473,
  [SMALL_STATE(113)] = 2486,
  [SMALL_STATE(114)] = 2499,
  [SMALL_STATE(115)] = 2510,
  [SMALL_STATE(116)] = 2523,
  [SMALL_STATE(117)] = 2534,
  [SMALL_STATE(118)] = 2547,
  [SMALL_STATE(119)] = 2558,
  [SMALL_STATE(120)] = 2567,
  [SMALL_STATE(121)] = 2578,
  [SMALL_STATE(122)] = 2591,
  [SMALL_STATE(123)] = 2604,
  [SMALL_STATE(124)] = 2613,
  [SMALL_STATE(125)] = 2626,
  [SMALL_STATE(126)] = 2637,
  [SMALL_STATE(127)] = 2650,
  [SMALL_STATE(128)] = 2663,
  [SMALL_STATE(129)] = 2676,
  [SMALL_STATE(130)] = 2687,
  [SMALL_STATE(131)] = 2698,
  [SMALL_STATE(132)] = 2707,
  [SMALL_STATE(133)] = 2718,
  [SMALL_STATE(134)] = 2729,
  [SMALL_STATE(135)] = 2740,
  [SMALL_STATE(136)] = 2751,
  [SMALL_STATE(137)] = 2762,
  [SMALL_STATE(138)] = 2771,
  [SMALL_STATE(139)] = 2784,
  [SMALL_STATE(140)] = 2793,
  [SMALL_STATE(141)] = 2802,
  [SMALL_STATE(142)] = 2810,
  [SMALL_STATE(143)] = 2820,
  [SMALL_STATE(144)] = 2828,
  [SMALL_STATE(145)] = 2838,
  [SMALL_STATE(146)] = 2846,
  [SMALL_STATE(147)] = 2854,
  [SMALL_STATE(148)] = 2864,
  [SMALL_STATE(149)] = 2872,
  [SMALL_STATE(150)] = 2882,
  [SMALL_STATE(151)] = 2892,
  [SMALL_STATE(152)] = 2900,
  [SMALL_STATE(153)] = 2905,
  [SMALL_STATE(154)] = 2910,
  [SMALL_STATE(155)] = 2915,
  [SMALL_STATE(156)] = 2922,
  [SMALL_STATE(157)] = 2929,
  [SMALL_STATE(158)] = 2936,
  [SMALL_STATE(159)] = 2943,
  [SMALL_STATE(160)] = 2948,
  [SMALL_STATE(161)] = 2953,
  [SMALL_STATE(162)] = 2958,
  [SMALL_STATE(163)] = 2963,
  [SMALL_STATE(164)] = 2968,
  [SMALL_STATE(165)] = 2975,
  [SMALL_STATE(166)] = 2980,
  [SMALL_STATE(167)] = 2987,
  [SMALL_STATE(168)] = 2992,
  [SMALL_STATE(169)] = 2999,
  [SMALL_STATE(170)] = 3006,
  [SMALL_STATE(171)] = 3013,
  [SMALL_STATE(172)] = 3020,
  [SMALL_STATE(173)] = 3025,
  [SMALL_STATE(174)] = 3032,
  [SMALL_STATE(175)] = 3039,
  [SMALL_STATE(176)] = 3046,
  [SMALL_STATE(177)] = 3051,
  [SMALL_STATE(178)] = 3056,
  [SMALL_STATE(179)] = 3061,
  [SMALL_STATE(180)] = 3068,
  [SMALL_STATE(181)] = 3073,
  [SMALL_STATE(182)] = 3080,
  [SMALL_STATE(183)] = 3087,
  [SMALL_STATE(184)] = 3094,
  [SMALL_STATE(185)] = 3101,
  [SMALL_STATE(186)] = 3106,
  [SMALL_STATE(187)] = 3111,
  [SMALL_STATE(188)] = 3116,
  [SMALL_STATE(189)] = 3121,
  [SMALL_STATE(190)] = 3128,
  [SMALL_STATE(191)] = 3135,
  [SMALL_STATE(192)] = 3142,
  [SMALL_STATE(193)] = 3146,
  [SMALL_STATE(194)] = 3150,
  [SMALL_STATE(195)] = 3154,
  [SMALL_STATE(196)] = 3158,
  [SMALL_STATE(197)] = 3162,
  [SMALL_STATE(198)] = 3166,
  [SMALL_STATE(199)] = 3170,
  [SMALL_STATE(200)] = 3174,
  [SMALL_STATE(201)] = 3178,
  [SMALL_STATE(202)] = 3182,
  [SMALL_STATE(203)] = 3186,
  [SMALL_STATE(204)] = 3190,
  [SMALL_STATE(205)] = 3194,
  [SMALL_STATE(206)] = 3198,
  [SMALL_STATE(207)] = 3202,
  [SMALL_STATE(208)] = 3206,
  [SMALL_STATE(209)] = 3210,
  [SMALL_STATE(210)] = 3214,
  [SMALL_STATE(211)] = 3218,
  [SMALL_STATE(212)] = 3222,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_repeat1, 2), SHIFT_REPEAT(124),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_repeat1, 2), SHIFT_REPEAT(138),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_repeat1, 2), SHIFT_REPEAT(53),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_repeat1, 2), SHIFT_REPEAT(192),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_repeat1, 2), SHIFT_REPEAT(92),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_repeat1, 2), SHIFT_REPEAT(93),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_repeat1, 2), SHIFT_REPEAT(93),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_repeat1, 2), SHIFT_REPEAT(192),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(209),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equals, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equals, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_field, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_function, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_function, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_field, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(208),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_parenthesized_expression, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_multiplication, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_division, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_function, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_function, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_addition, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_subtraction, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_clause, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_clause, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_address, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 5),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 2), SHIFT_REPEAT(206),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 6),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 7),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 8),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_clause, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(127),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(127),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(128),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(128),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_clause, 5),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2), SHIFT_REPEAT(181),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(32),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2), SHIFT_REPEAT(157),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_clause, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 7),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 6),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_repeat2, 2), SHIFT_REPEAT(46),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_clause, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_clause, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_frame, 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_clause, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_order, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_frame, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_repeat2, 7),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_repeat2, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_repeat2, 6),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [558] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nql(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
