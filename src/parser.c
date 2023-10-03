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
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_table_token1 = 1,
  anon_sym_include = 2,
  anon_sym_list = 3,
  anon_sym_COMMA = 4,
  anon_sym_sort = 5,
  anon_sym_summarize = 6,
  anon_sym_compute = 7,
  anon_sym_where = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
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
  anon_sym_B = 45,
  anon_sym_KB = 46,
  anon_sym_MB = 47,
  anon_sym_GB = 48,
  anon_sym_TB = 49,
  anon_sym_ms = 50,
  anon_sym_s = 51,
  anon_sym_min = 52,
  anon_sym_h = 53,
  anon_sym_d = 54,
  aux_sym_ip_address_token1 = 55,
  aux_sym_ip_address_token2 = 56,
  aux_sym_ip_address_token3 = 57,
  aux_sym_ip_address_token4 = 58,
  aux_sym_ip_address_token5 = 59,
  sym_version = 60,
  anon_sym_EQ = 61,
  sym_pipe = 62,
  sym_addition = 63,
  sym_subtraction = 64,
  sym_division = 65,
  sym_multiplication = 66,
  anon_sym_EQ_EQ = 67,
  sym_not_equals = 68,
  sym_greater_than = 69,
  sym_greater_than_or_equals = 70,
  sym_less_than = 71,
  sym_less_than_or_equals = 72,
  sym_in_array = 73,
  sym_not_in_array = 74,
  sym_and = 75,
  sym_or = 76,
  sym_count = 77,
  sym_avg = 78,
  sym_sum = 79,
  sym_max = 80,
  sym_last = 81,
  anon_sym_LPAREN_RPAREN = 82,
  sym_by = 83,
  sym_source_file = 84,
  sym_query = 85,
  sym_table = 86,
  sym_clause = 87,
  sym_select_clause = 88,
  sym_include_clause = 89,
  sym_list_clause = 90,
  sym_sort_clause = 91,
  sym_summarize_clause = 92,
  sym_compute_clause = 93,
  sym_where_clause = 94,
  sym_with_clause = 95,
  sym_limit_clause = 96,
  sym_expression = 97,
  sym_expression_addition = 98,
  sym_expression_subtraction = 99,
  sym_expression_multiplication = 100,
  sym_expression_division = 101,
  sym_expression_parenthesized_expression = 102,
  sym_time_frame = 103,
  sym_field = 104,
  sym_sort_order = 105,
  sym_string = 106,
  sym_int = 107,
  sym_boolean = 108,
  sym_date = 109,
  sym_date_time = 110,
  sym_enum = 111,
  sym_byte = 112,
  sym_duration = 113,
  sym_ip_address = 114,
  sym_alias = 115,
  sym_equals = 116,
  sym_min = 117,
  sym_aggregate_field = 118,
  sym_aggregate_function = 119,
  sym_aggregate = 120,
  aux_sym_query_repeat1 = 121,
  aux_sym_list_clause_repeat1 = 122,
  aux_sym_summarize_clause_repeat1 = 123,
  aux_sym_where_clause_repeat1 = 124,
  aux_sym_where_clause_repeat2 = 125,
  aux_sym_field_repeat1 = 126,
  aux_sym_string_repeat1 = 127,
  aux_sym_string_repeat2 = 128,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_count] = "count",
  [sym_avg] = "avg",
  [sym_sum] = "sum",
  [sym_max] = "max",
  [sym_last] = "last",
  [anon_sym_LPAREN_RPAREN] = "()",
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
  [sym_enum] = "enum",
  [sym_byte] = "byte",
  [sym_duration] = "duration",
  [sym_ip_address] = "ip_address",
  [sym_alias] = "alias",
  [sym_equals] = "equals",
  [sym_min] = "min",
  [sym_aggregate_field] = "aggregate_field",
  [sym_aggregate_function] = "aggregate_function",
  [sym_aggregate] = "aggregate",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_list_clause_repeat1] = "list_clause_repeat1",
  [aux_sym_summarize_clause_repeat1] = "summarize_clause_repeat1",
  [aux_sym_where_clause_repeat1] = "where_clause_repeat1",
  [aux_sym_where_clause_repeat2] = "where_clause_repeat2",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_count] = sym_count,
  [sym_avg] = sym_avg,
  [sym_sum] = sym_sum,
  [sym_max] = sym_max,
  [sym_last] = sym_last,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
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
  [sym_enum] = sym_enum,
  [sym_byte] = sym_byte,
  [sym_duration] = sym_duration,
  [sym_ip_address] = sym_ip_address,
  [sym_alias] = sym_alias,
  [sym_equals] = sym_equals,
  [sym_min] = sym_min,
  [sym_aggregate_field] = sym_aggregate_field,
  [sym_aggregate_function] = sym_aggregate_function,
  [sym_aggregate] = sym_aggregate,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym_list_clause_repeat1] = aux_sym_list_clause_repeat1,
  [aux_sym_summarize_clause_repeat1] = aux_sym_summarize_clause_repeat1,
  [aux_sym_where_clause_repeat1] = aux_sym_where_clause_repeat1,
  [aux_sym_where_clause_repeat2] = aux_sym_where_clause_repeat2,
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
  [anon_sym_LBRACK] = {
    .visible = true,
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
  [sym_count] = {
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
  [sym_max] = {
    .visible = true,
    .named = true,
  },
  [sym_last] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
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
  [sym_enum] = {
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
  [sym_min] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate_field] = {
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
  [aux_sym_where_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_where_clause_repeat2] = {
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

enum {
  field_aggregate_function_call = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_aggregate_function_call] = "aggregate_function_call",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_aggregate_function_call, 1},
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
  [14] = 10,
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
  [25] = 4,
  [26] = 26,
  [27] = 27,
  [28] = 3,
  [29] = 16,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 41,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 41,
  [51] = 33,
  [52] = 46,
  [53] = 53,
  [54] = 46,
  [55] = 55,
  [56] = 53,
  [57] = 38,
  [58] = 49,
  [59] = 39,
  [60] = 30,
  [61] = 40,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 53,
  [66] = 66,
  [67] = 49,
  [68] = 68,
  [69] = 69,
  [70] = 47,
  [71] = 45,
  [72] = 72,
  [73] = 43,
  [74] = 74,
  [75] = 42,
  [76] = 76,
  [77] = 31,
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
  [92] = 91,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 93,
  [97] = 95,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 94,
  [103] = 103,
  [104] = 101,
  [105] = 83,
  [106] = 82,
  [107] = 107,
  [108] = 87,
  [109] = 109,
  [110] = 99,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 116,
  [118] = 115,
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
  [129] = 128,
  [130] = 122,
  [131] = 119,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
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
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 154,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 172,
  [199] = 173,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 197,
  [208] = 208,
  [209] = 209,
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
      if (lookahead == '!') ADVANCE(109);
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == ')') ADVANCE(285);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(275);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '<') ADVANCE(409);
      if (lookahead == '=') ADVANCE(399);
      if (lookahead == '>') ADVANCE(407);
      if (lookahead == 'B') ADVANCE(373);
      if (lookahead == 'G') ADVANCE(110);
      if (lookahead == 'K') ADVANCE(111);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'h') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'v') ADVANCE(208);
      if (lookahead == 'w') ADVANCE(140);
      if (lookahead == '|') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(142);
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
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 'w') ADVANCE(143);
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
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
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
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead == ':') ADVANCE(240);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(177);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
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
      if (lookahead == 'h') ADVANCE(286);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
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
      if (lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(245);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == '[') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == 'v') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == 'v') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      END_STATE();
    case 57:
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 58:
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 59:
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 60:
      if (lookahead == ')') ADVANCE(430);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(232);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(233);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(212);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(214);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(250);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(249);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(236);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(237);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(238);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 109:
      if (lookahead == '=') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 110:
      if (lookahead == 'B') ADVANCE(376);
      END_STATE();
    case 111:
      if (lookahead == 'B') ADVANCE(374);
      END_STATE();
    case 112:
      if (lookahead == 'B') ADVANCE(375);
      END_STATE();
    case 113:
      if (lookahead == 'B') ADVANCE(377);
      END_STATE();
    case 114:
      if (lookahead == 'M') ADVANCE(371);
      END_STATE();
    case 115:
      if (lookahead == 'M') ADVANCE(369);
      END_STATE();
    case 116:
      if (lookahead == 'M') ADVANCE(372);
      END_STATE();
    case 117:
      if (lookahead == 'M') ADVANCE(370);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(325);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 139:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(286);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 200:
      if (lookahead == 'x') ADVANCE(424);
      END_STATE();
    case 201:
      if (lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 202:
      if (lookahead == 'z') ADVANCE(134);
      END_STATE();
    case 203:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(114);
      END_STATE();
    case 204:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(115);
      END_STATE();
    case 205:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(116);
      END_STATE();
    case 206:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(117);
      END_STATE();
    case 207:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(207)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
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
      if (lookahead == '!') ADVANCE(109);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(285);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(275);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '<') ADVANCE(409);
      if (lookahead == '=') ADVANCE(399);
      if (lookahead == '>') ADVANCE(407);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == '|') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(257)
      END_STATE();
    case 258:
      if (eof) ADVANCE(259);
      if (lookahead == ')') ADVANCE(285);
      if (lookahead == ',') ADVANCE(275);
      if (lookahead == 'B') ADVANCE(373);
      if (lookahead == 'G') ADVANCE(110);
      if (lookahead == 'K') ADVANCE(111);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == ']') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == 'h') ADVANCE(384);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead == '|') ADVANCE(400);
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
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 'a') ADVANCE(261);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 'l') ADVANCE(269);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == 'u') ADVANCE(266);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_summarize);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_compute);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(430);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_duringpast);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'a') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'g') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'm') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'n') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'o') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 's') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 't') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 't') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'u') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'u') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'v') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'x') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_field_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_field_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'a') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'i') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'g') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'm') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'n') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'n') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'o') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 's') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 't') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 't') ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'u') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'u') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'v') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'x') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_field_property);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_asc);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == ':') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 352:
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
    case 353:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(45);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_date_token2);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == ',') ADVANCE(52);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_date_time_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_date_time_token2);
      if (lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_date_time_token3);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_date_time_token4);
      if (lookahead == ':') ADVANCE(239);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_date_time_token5);
      if (lookahead == ' ') ADVANCE(204);
      if (lookahead == ':') ADVANCE(241);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_date_time_token6);
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_date_time_token7);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_date_time_token8);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_date_time_token9);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_date_time_token10);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_KB);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_MB);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_GB);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_TB);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_min);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_ip_address_token2);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_ip_address_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(394);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_ip_address_token4);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_ip_address_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(405);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_addition);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_subtraction);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_division);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_multiplication);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_not_equals);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_greater_than);
      if (lookahead == '=') ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_greater_than_or_equals);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_less_than);
      if (lookahead == '=') ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_less_than_or_equals);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_in_array);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_not_in_array);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_count);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_count);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_count);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_avg);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_avg);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_avg);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_sum);
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_sum);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_max);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_last);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_last);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_last);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_by);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 58},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 58},
  [22] = {.lex_state = 54},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 58},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 58},
  [29] = {.lex_state = 58},
  [30] = {.lex_state = 257},
  [31] = {.lex_state = 257},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 258},
  [34] = {.lex_state = 258},
  [35] = {.lex_state = 53},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 54},
  [38] = {.lex_state = 257},
  [39] = {.lex_state = 257},
  [40] = {.lex_state = 257},
  [41] = {.lex_state = 120},
  [42] = {.lex_state = 257},
  [43] = {.lex_state = 257},
  [44] = {.lex_state = 120},
  [45] = {.lex_state = 257},
  [46] = {.lex_state = 120},
  [47] = {.lex_state = 257},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 120},
  [51] = {.lex_state = 258},
  [52] = {.lex_state = 120},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 120},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 257},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 257},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 257},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 257},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 257},
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
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 257},
  [85] = {.lex_state = 257},
  [86] = {.lex_state = 257},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 257},
  [89] = {.lex_state = 257},
  [90] = {.lex_state = 257},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 258},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 257},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 59},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 59},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 59},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 257},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 59},
  [146] = {.lex_state = 59},
  [147] = {.lex_state = 59},
  [148] = {.lex_state = 59},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 59},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 57},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 57},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 59},
  [184] = {.lex_state = 59},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 59},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 207},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 57},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 59},
  [204] = {.lex_state = 59},
  [205] = {.lex_state = 59},
  [206] = {.lex_state = 59},
  [207] = {.lex_state = 207},
  [208] = {.lex_state = 59},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 59},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_count] = ACTIONS(1),
    [sym_avg] = ACTIONS(1),
    [sym_sum] = ACTIONS(1),
    [sym_max] = ACTIONS(1),
    [sym_last] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [sym_by] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(212),
    [sym_query] = STATE(211),
    [sym_table] = STATE(86),
    [sym_select_clause] = STATE(124),
    [aux_sym_table_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(21), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(155), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [44] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_field_name,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    STATE(39), 1,
      sym_min,
    STATE(106), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [86] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_field_name,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    STATE(39), 1,
      sym_min,
    STATE(69), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [128] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_float,
    ACTIONS(39), 1,
      sym_version,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(150), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [172] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(175), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [216] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    ACTIONS(45), 1,
      sym_field_name,
    STATE(39), 1,
      sym_min,
    STATE(79), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [258] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    ACTIONS(45), 1,
      sym_field_name,
    STATE(39), 1,
      sym_min,
    STATE(81), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [300] = 11,
    ACTIONS(47), 1,
      aux_sym_table_token1,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_int_token1,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(65), 1,
      sym_version,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(61), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(120), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [344] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_field_name,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    STATE(39), 1,
      sym_min,
    STATE(105), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [386] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(67), 1,
      sym_float,
    ACTIONS(69), 1,
      sym_version,
    STATE(6), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(158), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [430] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      sym_float,
    ACTIONS(75), 1,
      sym_version,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(143), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [474] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(77), 1,
      sym_float,
    ACTIONS(79), 1,
      sym_version,
    STATE(23), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(177), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [518] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    ACTIONS(45), 1,
      sym_field_name,
    STATE(39), 1,
      sym_min,
    STATE(83), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [560] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_field_name,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    STATE(39), 1,
      sym_min,
    STATE(100), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [602] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_field_name,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    STATE(39), 1,
      sym_min,
    STATE(76), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [644] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(81), 1,
      sym_float,
    ACTIONS(83), 1,
      sym_version,
    STATE(2), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(166), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [688] = 11,
    ACTIONS(47), 1,
      aux_sym_table_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      aux_sym_int_token1,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      sym_float,
    ACTIONS(89), 1,
      sym_version,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(61), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(133), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [732] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(91), 1,
      sym_float,
    ACTIONS(93), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(168), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [776] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(97), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(165), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [820] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    ACTIONS(45), 1,
      sym_field_name,
    STATE(39), 1,
      sym_min,
    STATE(80), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [862] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(99), 1,
      sym_float,
    ACTIONS(101), 1,
      sym_version,
    STATE(19), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(160), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [906] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(103), 1,
      sym_float,
    ACTIONS(105), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(159), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [950] = 11,
    ACTIONS(107), 1,
      aux_sym_table_token1,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      aux_sym_int_token1,
    ACTIONS(119), 1,
      sym_float,
    ACTIONS(131), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(122), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(125), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(209), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [994] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    ACTIONS(45), 1,
      sym_field_name,
    STATE(39), 1,
      sym_min,
    STATE(69), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [1036] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(134), 1,
      sym_float,
    ACTIONS(136), 1,
      sym_version,
    STATE(20), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(181), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [1080] = 11,
    ACTIONS(5), 1,
      aux_sym_table_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_token1,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      sym_float,
    ACTIONS(142), 1,
      sym_version,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(17), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(179), 7,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [1124] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    ACTIONS(45), 1,
      sym_field_name,
    STATE(39), 1,
      sym_min,
    STATE(82), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [1166] = 10,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(31), 1,
      anon_sym_min,
    ACTIONS(45), 1,
      sym_field_name,
    STATE(39), 1,
      sym_min,
    STATE(76), 1,
      sym_expression,
    STATE(201), 1,
      sym_aggregate_field,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(74), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [1208] = 4,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_field_repeat1,
    ACTIONS(149), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(144), 14,
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
  [1236] = 2,
    ACTIONS(149), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(144), 15,
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
  [1259] = 9,
    ACTIONS(151), 1,
      anon_sym_include,
    ACTIONS(153), 1,
      anon_sym_list,
    ACTIONS(155), 1,
      anon_sym_sort,
    ACTIONS(157), 1,
      anon_sym_summarize,
    ACTIONS(159), 1,
      anon_sym_compute,
    ACTIONS(161), 1,
      anon_sym_where,
    ACTIONS(163), 1,
      anon_sym_with,
    ACTIONS(165), 1,
      anon_sym_limit,
    STATE(196), 8,
      sym_include_clause,
      sym_list_clause,
      sym_sort_clause,
      sym_summarize_clause,
      sym_compute_clause,
      sym_where_clause,
      sym_with_clause,
      sym_limit_clause,
  [1294] = 3,
    ACTIONS(167), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
    ACTIONS(169), 5,
      anon_sym_B,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
      anon_sym_TB,
    ACTIONS(171), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [1316] = 3,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      sym_pipe,
      sym_and,
      sym_or,
    ACTIONS(173), 5,
      anon_sym_B,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
      anon_sym_TB,
    ACTIONS(175), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [1337] = 2,
    ACTIONS(179), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
      sym_version,
    ACTIONS(177), 9,
      aux_sym_table_token1,
      anon_sym_LBRACK,
      aux_sym_int_token1,
      sym_float,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
  [1356] = 5,
    STATE(200), 1,
      sym_date,
    STATE(202), 1,
      sym_date_time,
    ACTIONS(181), 2,
      aux_sym_date_token1,
      aux_sym_date_token2,
    ACTIONS(185), 4,
      aux_sym_date_time_token2,
      aux_sym_date_time_token4,
      aux_sym_date_time_token5,
      aux_sym_date_time_token6,
    ACTIONS(183), 6,
      aux_sym_date_time_token1,
      aux_sym_date_time_token3,
      aux_sym_date_time_token7,
      aux_sym_date_time_token8,
      aux_sym_date_time_token9,
      aux_sym_date_time_token10,
  [1381] = 2,
    ACTIONS(189), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
      sym_version,
    ACTIONS(187), 8,
      aux_sym_table_token1,
      aux_sym_int_token1,
      sym_float,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
  [1399] = 1,
    ACTIONS(191), 12,
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
      anon_sym_LPAREN_RPAREN,
      sym_by,
  [1414] = 1,
    ACTIONS(193), 12,
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
      anon_sym_LPAREN_RPAREN,
      sym_by,
  [1429] = 2,
    ACTIONS(197), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(195), 11,
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
  [1446] = 7,
    ACTIONS(199), 1,
      sym_field_property,
    ACTIONS(201), 1,
      anon_sym_min,
    STATE(59), 1,
      sym_min,
    STATE(61), 1,
      sym_aggregate_field,
    STATE(70), 1,
      sym_aggregate,
    STATE(75), 1,
      sym_aggregate_function,
    ACTIONS(203), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1472] = 1,
    ACTIONS(195), 11,
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
  [1486] = 1,
    ACTIONS(205), 11,
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
  [1500] = 7,
    ACTIONS(31), 1,
      anon_sym_min,
    ACTIONS(207), 1,
      sym_field_property,
    STATE(39), 1,
      sym_min,
    STATE(40), 1,
      sym_aggregate_field,
    STATE(42), 1,
      sym_aggregate_function,
    STATE(47), 1,
      sym_aggregate,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1526] = 1,
    ACTIONS(209), 11,
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
  [1540] = 7,
    ACTIONS(31), 1,
      anon_sym_min,
    ACTIONS(207), 1,
      sym_field_property,
    STATE(39), 1,
      sym_min,
    STATE(40), 1,
      sym_aggregate_field,
    STATE(42), 1,
      sym_aggregate_function,
    STATE(43), 1,
      sym_aggregate,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1566] = 1,
    ACTIONS(211), 11,
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
  [1580] = 3,
    STATE(188), 1,
      sym_date_time,
    ACTIONS(215), 4,
      aux_sym_date_time_token2,
      aux_sym_date_time_token4,
      aux_sym_date_time_token5,
      aux_sym_date_time_token6,
    ACTIONS(213), 6,
      aux_sym_date_time_token1,
      aux_sym_date_time_token3,
      aux_sym_date_time_token7,
      aux_sym_date_time_token8,
      aux_sym_date_time_token9,
      aux_sym_date_time_token10,
  [1598] = 4,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_field_repeat1,
    ACTIONS(219), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(221), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1618] = 7,
    ACTIONS(31), 1,
      anon_sym_min,
    ACTIONS(199), 1,
      sym_field_property,
    STATE(39), 1,
      sym_min,
    STATE(40), 1,
      sym_aggregate_field,
    STATE(42), 1,
      sym_aggregate_function,
    STATE(47), 1,
      sym_aggregate,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1644] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(173), 5,
      anon_sym_B,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
      anon_sym_TB,
    ACTIONS(175), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [1662] = 7,
    ACTIONS(31), 1,
      anon_sym_min,
    ACTIONS(199), 1,
      sym_field_property,
    STATE(39), 1,
      sym_min,
    STATE(40), 1,
      sym_aggregate_field,
    STATE(42), 1,
      sym_aggregate_function,
    STATE(43), 1,
      sym_aggregate,
    ACTIONS(33), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1688] = 4,
    ACTIONS(223), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_field_repeat1,
    ACTIONS(225), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(227), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1708] = 7,
    ACTIONS(199), 1,
      sym_field_property,
    ACTIONS(201), 1,
      anon_sym_min,
    STATE(59), 1,
      sym_min,
    STATE(61), 1,
      sym_aggregate_field,
    STATE(73), 1,
      sym_aggregate,
    STATE(75), 1,
      sym_aggregate_function,
    ACTIONS(203), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1734] = 2,
    ACTIONS(229), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(231), 8,
      sym_field_name,
      aux_sym_int_token1,
      anon_sym_min,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1749] = 3,
    ACTIONS(233), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_field_repeat1,
    ACTIONS(227), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1766] = 2,
    ACTIONS(235), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(191), 7,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
      anon_sym_LPAREN_RPAREN,
  [1781] = 3,
    ACTIONS(237), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_field_repeat1,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1798] = 2,
    ACTIONS(239), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(193), 7,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
      anon_sym_LPAREN_RPAREN,
  [1813] = 3,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_field_repeat1,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1830] = 3,
    ACTIONS(246), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(244), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(195), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1847] = 5,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ_EQ,
    STATE(9), 1,
      sym_equals,
    ACTIONS(254), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(252), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1868] = 5,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ_EQ,
    STATE(12), 1,
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
  [1889] = 5,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ_EQ,
    STATE(18), 1,
      sym_equals,
    ACTIONS(262), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(260), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1910] = 3,
    ACTIONS(264), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_field_repeat1,
    ACTIONS(227), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
  [1927] = 5,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_equals,
    ACTIONS(268), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(266), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1948] = 3,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_field_repeat1,
    ACTIONS(221), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
  [1965] = 5,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(250), 1,
      anon_sym_EQ_EQ,
    STATE(27), 1,
      sym_equals,
    ACTIONS(274), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(272), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1986] = 1,
    ACTIONS(276), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1998] = 2,
    ACTIONS(278), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(211), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [2012] = 2,
    ACTIONS(280), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(209), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [2026] = 1,
    ACTIONS(167), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [2038] = 2,
    ACTIONS(282), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(205), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [2052] = 1,
    ACTIONS(284), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [2064] = 2,
    ACTIONS(244), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(195), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [2078] = 1,
    ACTIONS(286), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [2090] = 1,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOT,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [2102] = 1,
    ACTIONS(288), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [2114] = 8,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      sym_addition,
    ACTIONS(296), 1,
      sym_subtraction,
    ACTIONS(298), 1,
      sym_division,
    ACTIONS(300), 1,
      sym_multiplication,
    ACTIONS(302), 1,
      sym_by,
    STATE(103), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2140] = 5,
    ACTIONS(294), 1,
      sym_addition,
    ACTIONS(296), 1,
      sym_subtraction,
    ACTIONS(298), 1,
      sym_division,
    ACTIONS(300), 1,
      sym_multiplication,
    ACTIONS(304), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_by,
  [2159] = 7,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      sym_addition,
    ACTIONS(296), 1,
      sym_subtraction,
    ACTIONS(298), 1,
      sym_division,
    ACTIONS(300), 1,
      sym_multiplication,
    STATE(114), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2182] = 3,
    ACTIONS(298), 1,
      sym_division,
    ACTIONS(300), 1,
      sym_multiplication,
    ACTIONS(308), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_by,
  [2197] = 3,
    ACTIONS(298), 1,
      sym_division,
    ACTIONS(300), 1,
      sym_multiplication,
    ACTIONS(310), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_by,
  [2212] = 5,
    ACTIONS(314), 1,
      anon_sym_duringpast,
    ACTIONS(316), 1,
      anon_sym_from,
    ACTIONS(318), 1,
      anon_sym_on,
    STATE(195), 1,
      sym_time_frame,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2229] = 5,
    ACTIONS(314), 1,
      anon_sym_duringpast,
    ACTIONS(316), 1,
      anon_sym_from,
    ACTIONS(318), 1,
      anon_sym_on,
    STATE(182), 1,
      sym_time_frame,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2246] = 5,
    ACTIONS(314), 1,
      anon_sym_duringpast,
    ACTIONS(316), 1,
      anon_sym_from,
    ACTIONS(318), 1,
      anon_sym_on,
    STATE(193), 1,
      sym_time_frame,
    ACTIONS(322), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2263] = 1,
    ACTIONS(324), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2271] = 4,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_list_clause_repeat1,
    STATE(189), 1,
      sym_sort_order,
    ACTIONS(328), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2285] = 1,
    ACTIONS(330), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_asc,
      anon_sym_desc,
      sym_pipe,
  [2293] = 4,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_list_clause_repeat1,
    STATE(180), 1,
      sym_sort_order,
    ACTIONS(328), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2307] = 1,
    ACTIONS(332), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2315] = 1,
    ACTIONS(332), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2323] = 1,
    ACTIONS(334), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2331] = 1,
    ACTIONS(336), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2339] = 1,
    ACTIONS(338), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2347] = 1,
    ACTIONS(334), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2355] = 1,
    ACTIONS(338), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2363] = 1,
    ACTIONS(175), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [2371] = 1,
    ACTIONS(340), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2379] = 5,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(344), 1,
      sym_addition,
    ACTIONS(346), 1,
      sym_subtraction,
    ACTIONS(348), 1,
      sym_division,
    ACTIONS(350), 1,
      sym_multiplication,
  [2395] = 1,
    ACTIONS(352), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2403] = 1,
    ACTIONS(336), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2411] = 4,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      sym_by,
    STATE(109), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2425] = 1,
    ACTIONS(352), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2433] = 3,
    ACTIONS(348), 1,
      sym_division,
    ACTIONS(350), 1,
      sym_multiplication,
    ACTIONS(310), 3,
      anon_sym_RPAREN,
      sym_addition,
      sym_subtraction,
  [2445] = 3,
    ACTIONS(348), 1,
      sym_division,
    ACTIONS(350), 1,
      sym_multiplication,
    ACTIONS(308), 3,
      anon_sym_RPAREN,
      sym_addition,
      sym_subtraction,
  [2457] = 1,
    ACTIONS(358), 5,
      ts_builtin_sym_end,
      anon_sym_duringpast,
      anon_sym_from,
      anon_sym_on,
      sym_pipe,
  [2465] = 1,
    ACTIONS(324), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2473] = 3,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(360), 3,
      ts_builtin_sym_end,
      sym_pipe,
      sym_by,
  [2485] = 1,
    ACTIONS(340), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2493] = 4,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_field_name,
    STATE(64), 1,
      sym_field,
    STATE(146), 1,
      aux_sym_where_clause_repeat2,
  [2506] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2517] = 4,
    ACTIONS(373), 1,
      sym_field_name,
    ACTIONS(375), 1,
      aux_sym_int_token1,
    STATE(123), 1,
      sym_field,
    STATE(164), 1,
      sym_duration,
  [2530] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2541] = 4,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    ACTIONS(381), 1,
      aux_sym_string_token1,
    ACTIONS(383), 1,
      anon_sym_BSLASH,
    STATE(137), 1,
      aux_sym_string_repeat1,
  [2554] = 4,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      aux_sym_string_token2,
    STATE(136), 1,
      aux_sym_string_repeat2,
  [2567] = 4,
    ACTIONS(385), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      aux_sym_string_token2,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      aux_sym_string_repeat2,
  [2580] = 4,
    ACTIONS(381), 1,
      aux_sym_string_token1,
    ACTIONS(383), 1,
      anon_sym_BSLASH,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    STATE(137), 1,
      aux_sym_string_repeat1,
  [2593] = 4,
    ACTIONS(391), 1,
      anon_sym_SQUOTE,
    ACTIONS(393), 1,
      aux_sym_string_token1,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    STATE(115), 1,
      aux_sym_string_repeat1,
  [2606] = 2,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(399), 2,
      sym_and,
      sym_or,
  [2615] = 3,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 1,
      sym_pipe,
    STATE(121), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2626] = 4,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(408), 1,
      aux_sym_string_token2,
    STATE(116), 1,
      aux_sym_string_repeat2,
  [2639] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2650] = 3,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      sym_pipe,
    STATE(126), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2661] = 4,
    ACTIONS(373), 1,
      sym_field_name,
    ACTIONS(375), 1,
      aux_sym_int_token1,
    STATE(139), 1,
      sym_field,
    STATE(187), 1,
      sym_duration,
  [2674] = 3,
    ACTIONS(414), 1,
      sym_pipe,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    STATE(121), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2685] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2696] = 3,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(330), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2707] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2718] = 4,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    ACTIONS(428), 1,
      anon_sym_BSLASH,
    ACTIONS(430), 1,
      aux_sym_string_token2,
    STATE(117), 1,
      aux_sym_string_repeat2,
  [2731] = 4,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      aux_sym_string_token1,
    ACTIONS(434), 1,
      anon_sym_BSLASH,
    STATE(118), 1,
      aux_sym_string_repeat1,
  [2744] = 2,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(438), 2,
      sym_and,
      sym_or,
  [2753] = 2,
    ACTIONS(399), 2,
      sym_and,
      sym_or,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2762] = 2,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(444), 2,
      sym_and,
      sym_or,
  [2771] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2782] = 4,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 1,
      anon_sym_BSLASH,
    ACTIONS(453), 1,
      aux_sym_string_token2,
    STATE(136), 1,
      aux_sym_string_repeat2,
  [2795] = 4,
    ACTIONS(456), 1,
      anon_sym_SQUOTE,
    ACTIONS(458), 1,
      aux_sym_string_token1,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    STATE(137), 1,
      aux_sym_string_repeat1,
  [2808] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(464), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2819] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(464), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2830] = 2,
    ACTIONS(438), 2,
      sym_and,
      sym_or,
    ACTIONS(466), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2839] = 2,
    ACTIONS(444), 2,
      sym_and,
      sym_or,
    ACTIONS(466), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2848] = 2,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 2,
      sym_and,
      sym_or,
  [2856] = 2,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 2,
      sym_and,
      sym_or,
  [2864] = 3,
    ACTIONS(472), 1,
      aux_sym_date_token1,
    ACTIONS(474), 1,
      aux_sym_date_token2,
    STATE(194), 1,
      sym_date,
  [2874] = 3,
    ACTIONS(367), 1,
      sym_field_name,
    STATE(63), 1,
      sym_field,
    STATE(147), 1,
      aux_sym_where_clause_repeat2,
  [2884] = 3,
    ACTIONS(367), 1,
      sym_field_name,
    STATE(62), 1,
      sym_field,
    STATE(148), 1,
      aux_sym_where_clause_repeat2,
  [2894] = 3,
    ACTIONS(367), 1,
      sym_field_name,
    STATE(66), 1,
      sym_field,
    STATE(148), 1,
      aux_sym_where_clause_repeat2,
  [2904] = 3,
    ACTIONS(476), 1,
      sym_field_name,
    STATE(68), 1,
      sym_field,
    STATE(148), 1,
      aux_sym_where_clause_repeat2,
  [2914] = 2,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 2,
      sym_and,
      sym_or,
  [2922] = 2,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 2,
      sym_and,
      sym_or,
  [2930] = 3,
    ACTIONS(472), 1,
      aux_sym_date_token1,
    ACTIONS(474), 1,
      aux_sym_date_token2,
    STATE(188), 1,
      sym_date,
  [2940] = 2,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 2,
      sym_and,
      sym_or,
  [2948] = 2,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 2,
      sym_and,
      sym_or,
  [2956] = 2,
    ACTIONS(485), 1,
      sym_field_name,
    STATE(89), 1,
      sym_field,
  [2963] = 2,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
  [2970] = 1,
    ACTIONS(466), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2975] = 2,
    ACTIONS(491), 1,
      anon_sym_EQ,
    STATE(7), 1,
      sym_alias,
  [2982] = 2,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
  [2989] = 2,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
  [2996] = 2,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
  [3003] = 2,
    ACTIONS(3), 1,
      aux_sym_table_token1,
    STATE(84), 1,
      sym_table,
  [3010] = 2,
    ACTIONS(491), 1,
      anon_sym_EQ,
    STATE(21), 1,
      sym_alias,
  [3017] = 1,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3022] = 1,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3027] = 2,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
  [3034] = 2,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
  [3041] = 1,
    ACTIONS(438), 2,
      sym_and,
      sym_or,
  [3046] = 2,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
  [3053] = 1,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3058] = 1,
    ACTIONS(444), 2,
      sym_and,
      sym_or,
  [3063] = 1,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3068] = 1,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3073] = 1,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3078] = 2,
    ACTIONS(375), 1,
      aux_sym_int_token1,
    STATE(194), 1,
      sym_duration,
  [3085] = 2,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RBRACK,
  [3092] = 2,
    ACTIONS(3), 1,
      aux_sym_table_token1,
    STATE(85), 1,
      sym_table,
  [3099] = 2,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
  [3106] = 2,
    ACTIONS(491), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_alias,
  [3113] = 1,
    ACTIONS(399), 2,
      sym_and,
      sym_or,
  [3118] = 1,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3123] = 2,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
  [3130] = 1,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3135] = 2,
    ACTIONS(373), 1,
      sym_field_name,
    STATE(135), 1,
      sym_field,
  [3142] = 2,
    ACTIONS(485), 1,
      sym_field_name,
    STATE(88), 1,
      sym_field,
  [3149] = 1,
    ACTIONS(523), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3154] = 2,
    ACTIONS(525), 1,
      aux_sym_int_token1,
    STATE(185), 1,
      sym_int,
  [3161] = 1,
    ACTIONS(464), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3166] = 1,
    ACTIONS(527), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3171] = 1,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3176] = 1,
    ACTIONS(531), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3181] = 1,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3186] = 2,
    ACTIONS(373), 1,
      sym_field_name,
    STATE(89), 1,
      sym_field,
  [3193] = 1,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3198] = 1,
    ACTIONS(535), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3203] = 1,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3208] = 1,
    ACTIONS(539), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3213] = 1,
    ACTIONS(541), 1,
      sym_field_property,
  [3217] = 1,
    ACTIONS(509), 1,
      anon_sym_to,
  [3221] = 1,
    ACTIONS(511), 1,
      anon_sym_to,
  [3225] = 1,
    ACTIONS(543), 1,
      anon_sym_to,
  [3229] = 1,
    ACTIONS(197), 1,
      anon_sym_LPAREN_RPAREN,
  [3233] = 1,
    ACTIONS(545), 1,
      anon_sym_to,
  [3237] = 1,
    ACTIONS(547), 1,
      sym_field_name,
  [3241] = 1,
    ACTIONS(549), 1,
      sym_field_name,
  [3245] = 1,
    ACTIONS(551), 1,
      sym_field_name,
  [3249] = 1,
    ACTIONS(553), 1,
      sym_field_name,
  [3253] = 1,
    ACTIONS(555), 1,
      sym_field_property,
  [3257] = 1,
    ACTIONS(557), 1,
      sym_field_name,
  [3261] = 1,
    ACTIONS(487), 1,
      anon_sym_COMMA,
  [3265] = 1,
    ACTIONS(559), 1,
      sym_field_name,
  [3269] = 1,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
  [3273] = 1,
    ACTIONS(563), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 300,
  [SMALL_STATE(10)] = 344,
  [SMALL_STATE(11)] = 386,
  [SMALL_STATE(12)] = 430,
  [SMALL_STATE(13)] = 474,
  [SMALL_STATE(14)] = 518,
  [SMALL_STATE(15)] = 560,
  [SMALL_STATE(16)] = 602,
  [SMALL_STATE(17)] = 644,
  [SMALL_STATE(18)] = 688,
  [SMALL_STATE(19)] = 732,
  [SMALL_STATE(20)] = 776,
  [SMALL_STATE(21)] = 820,
  [SMALL_STATE(22)] = 862,
  [SMALL_STATE(23)] = 906,
  [SMALL_STATE(24)] = 950,
  [SMALL_STATE(25)] = 994,
  [SMALL_STATE(26)] = 1036,
  [SMALL_STATE(27)] = 1080,
  [SMALL_STATE(28)] = 1124,
  [SMALL_STATE(29)] = 1166,
  [SMALL_STATE(30)] = 1208,
  [SMALL_STATE(31)] = 1236,
  [SMALL_STATE(32)] = 1259,
  [SMALL_STATE(33)] = 1294,
  [SMALL_STATE(34)] = 1316,
  [SMALL_STATE(35)] = 1337,
  [SMALL_STATE(36)] = 1356,
  [SMALL_STATE(37)] = 1381,
  [SMALL_STATE(38)] = 1399,
  [SMALL_STATE(39)] = 1414,
  [SMALL_STATE(40)] = 1429,
  [SMALL_STATE(41)] = 1446,
  [SMALL_STATE(42)] = 1472,
  [SMALL_STATE(43)] = 1486,
  [SMALL_STATE(44)] = 1500,
  [SMALL_STATE(45)] = 1526,
  [SMALL_STATE(46)] = 1540,
  [SMALL_STATE(47)] = 1566,
  [SMALL_STATE(48)] = 1580,
  [SMALL_STATE(49)] = 1598,
  [SMALL_STATE(50)] = 1618,
  [SMALL_STATE(51)] = 1644,
  [SMALL_STATE(52)] = 1662,
  [SMALL_STATE(53)] = 1688,
  [SMALL_STATE(54)] = 1708,
  [SMALL_STATE(55)] = 1734,
  [SMALL_STATE(56)] = 1749,
  [SMALL_STATE(57)] = 1766,
  [SMALL_STATE(58)] = 1781,
  [SMALL_STATE(59)] = 1798,
  [SMALL_STATE(60)] = 1813,
  [SMALL_STATE(61)] = 1830,
  [SMALL_STATE(62)] = 1847,
  [SMALL_STATE(63)] = 1868,
  [SMALL_STATE(64)] = 1889,
  [SMALL_STATE(65)] = 1910,
  [SMALL_STATE(66)] = 1927,
  [SMALL_STATE(67)] = 1948,
  [SMALL_STATE(68)] = 1965,
  [SMALL_STATE(69)] = 1986,
  [SMALL_STATE(70)] = 1998,
  [SMALL_STATE(71)] = 2012,
  [SMALL_STATE(72)] = 2026,
  [SMALL_STATE(73)] = 2038,
  [SMALL_STATE(74)] = 2052,
  [SMALL_STATE(75)] = 2064,
  [SMALL_STATE(76)] = 2078,
  [SMALL_STATE(77)] = 2090,
  [SMALL_STATE(78)] = 2102,
  [SMALL_STATE(79)] = 2114,
  [SMALL_STATE(80)] = 2140,
  [SMALL_STATE(81)] = 2159,
  [SMALL_STATE(82)] = 2182,
  [SMALL_STATE(83)] = 2197,
  [SMALL_STATE(84)] = 2212,
  [SMALL_STATE(85)] = 2229,
  [SMALL_STATE(86)] = 2246,
  [SMALL_STATE(87)] = 2263,
  [SMALL_STATE(88)] = 2271,
  [SMALL_STATE(89)] = 2285,
  [SMALL_STATE(90)] = 2293,
  [SMALL_STATE(91)] = 2307,
  [SMALL_STATE(92)] = 2315,
  [SMALL_STATE(93)] = 2323,
  [SMALL_STATE(94)] = 2331,
  [SMALL_STATE(95)] = 2339,
  [SMALL_STATE(96)] = 2347,
  [SMALL_STATE(97)] = 2355,
  [SMALL_STATE(98)] = 2363,
  [SMALL_STATE(99)] = 2371,
  [SMALL_STATE(100)] = 2379,
  [SMALL_STATE(101)] = 2395,
  [SMALL_STATE(102)] = 2403,
  [SMALL_STATE(103)] = 2411,
  [SMALL_STATE(104)] = 2425,
  [SMALL_STATE(105)] = 2433,
  [SMALL_STATE(106)] = 2445,
  [SMALL_STATE(107)] = 2457,
  [SMALL_STATE(108)] = 2465,
  [SMALL_STATE(109)] = 2473,
  [SMALL_STATE(110)] = 2485,
  [SMALL_STATE(111)] = 2493,
  [SMALL_STATE(112)] = 2506,
  [SMALL_STATE(113)] = 2517,
  [SMALL_STATE(114)] = 2530,
  [SMALL_STATE(115)] = 2541,
  [SMALL_STATE(116)] = 2554,
  [SMALL_STATE(117)] = 2567,
  [SMALL_STATE(118)] = 2580,
  [SMALL_STATE(119)] = 2593,
  [SMALL_STATE(120)] = 2606,
  [SMALL_STATE(121)] = 2615,
  [SMALL_STATE(122)] = 2626,
  [SMALL_STATE(123)] = 2639,
  [SMALL_STATE(124)] = 2650,
  [SMALL_STATE(125)] = 2661,
  [SMALL_STATE(126)] = 2674,
  [SMALL_STATE(127)] = 2685,
  [SMALL_STATE(128)] = 2696,
  [SMALL_STATE(129)] = 2707,
  [SMALL_STATE(130)] = 2718,
  [SMALL_STATE(131)] = 2731,
  [SMALL_STATE(132)] = 2744,
  [SMALL_STATE(133)] = 2753,
  [SMALL_STATE(134)] = 2762,
  [SMALL_STATE(135)] = 2771,
  [SMALL_STATE(136)] = 2782,
  [SMALL_STATE(137)] = 2795,
  [SMALL_STATE(138)] = 2808,
  [SMALL_STATE(139)] = 2819,
  [SMALL_STATE(140)] = 2830,
  [SMALL_STATE(141)] = 2839,
  [SMALL_STATE(142)] = 2848,
  [SMALL_STATE(143)] = 2856,
  [SMALL_STATE(144)] = 2864,
  [SMALL_STATE(145)] = 2874,
  [SMALL_STATE(146)] = 2884,
  [SMALL_STATE(147)] = 2894,
  [SMALL_STATE(148)] = 2904,
  [SMALL_STATE(149)] = 2914,
  [SMALL_STATE(150)] = 2922,
  [SMALL_STATE(151)] = 2930,
  [SMALL_STATE(152)] = 2940,
  [SMALL_STATE(153)] = 2948,
  [SMALL_STATE(154)] = 2956,
  [SMALL_STATE(155)] = 2963,
  [SMALL_STATE(156)] = 2970,
  [SMALL_STATE(157)] = 2975,
  [SMALL_STATE(158)] = 2982,
  [SMALL_STATE(159)] = 2989,
  [SMALL_STATE(160)] = 2996,
  [SMALL_STATE(161)] = 3003,
  [SMALL_STATE(162)] = 3010,
  [SMALL_STATE(163)] = 3017,
  [SMALL_STATE(164)] = 3022,
  [SMALL_STATE(165)] = 3027,
  [SMALL_STATE(166)] = 3034,
  [SMALL_STATE(167)] = 3041,
  [SMALL_STATE(168)] = 3046,
  [SMALL_STATE(169)] = 3053,
  [SMALL_STATE(170)] = 3058,
  [SMALL_STATE(171)] = 3063,
  [SMALL_STATE(172)] = 3068,
  [SMALL_STATE(173)] = 3073,
  [SMALL_STATE(174)] = 3078,
  [SMALL_STATE(175)] = 3085,
  [SMALL_STATE(176)] = 3092,
  [SMALL_STATE(177)] = 3099,
  [SMALL_STATE(178)] = 3106,
  [SMALL_STATE(179)] = 3113,
  [SMALL_STATE(180)] = 3118,
  [SMALL_STATE(181)] = 3123,
  [SMALL_STATE(182)] = 3130,
  [SMALL_STATE(183)] = 3135,
  [SMALL_STATE(184)] = 3142,
  [SMALL_STATE(185)] = 3149,
  [SMALL_STATE(186)] = 3154,
  [SMALL_STATE(187)] = 3161,
  [SMALL_STATE(188)] = 3166,
  [SMALL_STATE(189)] = 3171,
  [SMALL_STATE(190)] = 3176,
  [SMALL_STATE(191)] = 3181,
  [SMALL_STATE(192)] = 3186,
  [SMALL_STATE(193)] = 3193,
  [SMALL_STATE(194)] = 3198,
  [SMALL_STATE(195)] = 3203,
  [SMALL_STATE(196)] = 3208,
  [SMALL_STATE(197)] = 3213,
  [SMALL_STATE(198)] = 3217,
  [SMALL_STATE(199)] = 3221,
  [SMALL_STATE(200)] = 3225,
  [SMALL_STATE(201)] = 3229,
  [SMALL_STATE(202)] = 3233,
  [SMALL_STATE(203)] = 3237,
  [SMALL_STATE(204)] = 3241,
  [SMALL_STATE(205)] = 3245,
  [SMALL_STATE(206)] = 3249,
  [SMALL_STATE(207)] = 3253,
  [SMALL_STATE(208)] = 3257,
  [SMALL_STATE(209)] = 3261,
  [SMALL_STATE(210)] = 3265,
  [SMALL_STATE(211)] = 3269,
  [SMALL_STATE(212)] = 3273,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(92),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(130),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(131),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(51),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(209),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(96),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(97),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(97),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(209),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(197),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equals, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equals, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_field, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_function, 2, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_min, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_field, 1),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(207),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_division, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_function, 2, .production_id = 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_multiplication, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_parenthesized_expression, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_clause, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_subtraction, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_addition, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_clause, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_address, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 5),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 2), SHIFT_REPEAT(206),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 8),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_clause, 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(32),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_clause, 3),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2), SHIFT_REPEAT(154),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2), SHIFT_REPEAT(192),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 6),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 8),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_clause, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(136),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(136),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(137),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(137),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 7),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 7),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 2), SHIFT_REPEAT(49),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 9),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 10),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_clause, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_frame, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_clause, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_order, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_frame, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_clause, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 7),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 6),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [563] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
